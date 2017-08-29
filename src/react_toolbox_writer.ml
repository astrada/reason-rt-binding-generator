let clean_parameter_name name =
  let keywords = ["type"; "to"] in
  if List.mem name keywords then "_" ^ name
  else name

let clean_variant_value value =
  let regex = Str.regexp "[A-Za-z]" in
  if not (Str.string_match regex value 0) then "V_" ^ value
  else String.capitalize_ascii value

let build_enum_type_declaration values =
  values
  |> List.map clean_variant_value
  |> String.concat " | "

let get_enums properties =
  properties
  |> List.map
    (fun x ->
       match x.Component.Property.property_type with
       | Option t
       | Array t -> t
       | _ as t -> t
    )
  |> List.filter
    (fun x -> Component.Type.is_enum x)

let write_enum_implementations oc properties =
  let build_to_string values =
    values
    |> List.map
      (fun x -> Printf.sprintf "%s => \"%s\"" (clean_variant_value x) x)
    |> String.concat " | "
  in
  let enums = get_enums properties in
  List.iter
    (function
      | Component.Type.Enum { name; values } ->
        Printf.fprintf oc
          "module %s = { type t = | %s; let to_string = fun | %s; };\n"
          name
          (build_enum_type_declaration values)
          (build_to_string values)
      | _ -> assert false
    )
    enums

let build_props_arg properties =
  let prop_to_string property =
    let name = clean_parameter_name property.Component.Property.name in
    let type_string =
      Component.Type.to_string property.Component.Property.property_type in
    let optional_prop_string =
      if Component.Type.is_option property.Component.Property.property_type
      then "=?" else "" in
    Printf.sprintf "%s::(%s: %s)%s" name name type_string optional_prop_string
  in
  let prop_strings = List.map prop_to_string properties in
  String.concat " " prop_strings

let build_js_props properties =
  let prop_to_string property =
    let rec convert property_type property_name =
      let open Component.Type in
      match property_type with
      | Bool ->
        "Js.Boolean.to_js_boolean " ^ property_name
      | Date ->
        "Js.Date.fromFloat " ^ property_name
      | String
      | Object ->
        property_name
      | Enum { name; _ } ->
        Printf.sprintf "%s.to_string %s" name property_name
      | Array (Bool as t)
      | Array (Date as t) ->
        Printf.sprintf
          "Array.map (fun x -> %s) %s"
          (convert t "x") property_name
      | Array _ ->
        property_name
      | Option (Bool as t)
      | Option (Date as t)
      | Option ((Enum _) as t) ->
        Printf.sprintf
          "Js.Null_undefined.from_opt (optionMap %s)"
          (convert t property_name)
      | Option _ ->
        "Js.Null_undefined.from_opt " ^ property_name
      | _ ->
        failwith
          ("prop_to_string: " ^ (Component.Type.to_string property_type))
    in
    Printf.sprintf "\"%s\": %s"
      property.Component.Property.name
      (convert property.Component.Property.property_type
         (clean_parameter_name property.Component.Property.name))
  in
  let prop_strings = List.map prop_to_string properties in
  String.concat ", " prop_strings

let write_component_implementation oc component =
  Printf.fprintf oc
    "module %s = {\n\
     external reactClass : ReasonReact.reactClass = \"default\" \
       [@@bs.module \"%s\"];\n"
    component.Component.name
    component.Component.module_path;
  write_enum_implementations oc component.Component.properties;
  Printf.fprintf oc
    "let make %s children => ReasonReact.wrapJsForReason \
       ::reactClass props::{%s} children;\n};\n"
    (build_props_arg component.Component.properties)
    (build_js_props component.Component.properties)

let write_re path component_list =
  let oc = open_out path in
  Printf.fprintf oc
    "let optionMap fn option => \
     switch option { \
     | Some value => Some (fn value) \
     | None => None \
     };\n\n";
  Printf.fprintf oc
    "module ThemeProvider = {\n\
     type theme;\n\
     external themeProvider : ReasonReact.reactClass =\
       \"ThemeProvider\" [@@bs.module \"react-css-themr/lib/index\"];\n\
     let make theme::(theme: theme) children =>\
     ReasonReact.wrapJsForReason \
       reactClass::themeProvider props::{\"theme\": theme} children;\n\
     };\n";
  List.iter (write_component_implementation oc) component_list;
  close_out oc

let build_props_arg_type properties =
  let prop_to_string property =
    let name = property.Component.Property.name in
    let type_string =
      match property.Component.Property.property_type with
      | Component.Type.Option t -> Component.Type.to_string t
      | _ as t -> Component.Type.to_string t in
    let optional_prop_string =
      if Component.Type.is_option property.Component.Property.property_type
      then "?" else "" in
    Printf.sprintf "%s::%s%s"
      (clean_parameter_name name) type_string optional_prop_string
  in
  let prop_strings = List.map prop_to_string properties in
  String.concat " => " prop_strings

let write_enum_signatures oc properties =
  let enums = get_enums properties in
  List.iter
    (function
      | Component.Type.Enum { name; values } ->
        Printf.fprintf oc
          "module %s : { type t = | %s; let to_string: t => string; };\n"
          name
          (build_enum_type_declaration values)
      | _ -> assert false
    )
    enums

let write_component_signature oc component =
  Printf.fprintf oc
    "module %s: {\n"
    component.Component.name;
  write_enum_signatures oc component.Component.properties;
  Printf.fprintf oc
    "let make: %s => array ReasonReact.reactElement => \
       ReasonReact.component ReasonReact.stateless \
       ReasonReact.noRetainedProps;\n};\n"
    (build_props_arg_type component.Component.properties)

let write_rei path component_list =
  let oc = open_out path in
  Printf.fprintf oc
    "module ThemeProvider: {\n\
     type theme;\n\
     let make: theme::theme => array ReasonReact.reactElement => \
       ReasonReact.component ReasonReact.stateless \
       ReasonReact.noRetainedProps;\n\
     };\n";
  List.iter (write_component_signature oc) component_list;
  close_out oc

