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
    let name = property.Component.Property.name in
    let conversion =
      let open Component.Type in
      match property.Component.Property.property_type with
      | String
      | Object ->
        name
      | Option ClipboardCallback
      | Option CompositionCallback
      | Option KeyboardCallback
      | Option FocusCallback
      | Option FormCallback
      | Option MouseCallback
      | Option SelectionCallback
      | Option TouchCallback
      | Option UICallback
      | Option WheelCallback
      | Option MediaCallback
      | Option ImageCallback
      | Option AnimationCallback
      | Option TransitionCallback
      | Option GenericCallback
      | Option Element
      | Option Number
      | Option Object
      | Option String
      | Option Style ->
        "Js.Null_undefined.from_opt " ^ name
      | Option Bool ->
        Printf.sprintf
          "Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean %s)"
          name
      | _ ->
        failwith
          ("prop_to_string: " ^ (Component.Type.to_string
              property.Component.Property.property_type))
    in
    Printf.sprintf "\"%s\": %s" name conversion
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

