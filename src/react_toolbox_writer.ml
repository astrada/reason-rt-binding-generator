let build_props_arg properties =
  let prop_to_string property =
    let name = property.Component.Property.name in
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
        "Js.Boolean.to_js_boolean" ^ property_name
      | Date ->
        "Js.Date.from_float" ^ property_name
      | String
      | Object ->
        property_name
      | Array (Bool as t)
      | Array (Date as t) ->
        Printf.sprintf
          "Array.map (fun x -> %s) %s"
          (convert t "x") property_name
      | Array _ ->
        property_name
      | Option (Bool as t)
      | Option (Date as t) ->
        Printf.sprintf
          "Js.Null_undefined.from_opt (optionMap %s)"
          (convert t property_name)
      | Option _ ->
        "Js.Null_undefined.from_opt " ^ property_name
      | _ ->
        failwith
          ("prop_to_string: " ^ (Component.Type.to_string property_type))
    in
    let name = property.Component.Property.name in
    Printf.sprintf "\"%s\": %s"
      name (convert property.Component.Property.property_type name)
  in
  let prop_strings = List.map prop_to_string properties in
  String.concat ", " prop_strings

let write_component_implementation oc component =
  Printf.fprintf oc
    "module %s = {\n\
     external reactClass : ReasonReact.reactClass = \"default\" \
       [@@bs.module \"%s\"];\n\
     let make %s children => ReasonReact.wrapJsForReason \
       ::reactClass props::{%s} children;\n};\n"
    component.Component.name
    component.Component.module_path
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
      Component.Type.to_string property.Component.Property.property_type in
    let optional_prop_string =
      if Component.Type.is_option property.Component.Property.property_type
      then "?" else "" in
    Printf.sprintf "%s::%s%s" name type_string optional_prop_string
  in
  let prop_strings = List.map prop_to_string properties in
  String.concat " => " prop_strings

let write_component_interface oc component =
  Printf.fprintf oc
    "module %s: {\n\
     let make: %s => array ReasonReact.reactElement;\n};\n"
    component.Component.name
    (build_props_arg_type component.Component.properties)

let write_rei path component_list =
  let oc = open_out path in
  Printf.fprintf oc
    "module ThemeProvider: {\n\
     type theme;\n\
     let make: theme::theme => array ReasonReact.reactElement;\n\
     };\n";
  List.iter (write_component_interface oc) component_list;
  close_out oc

