let react_toolbox_base = "react-toolbox/lib/"

let build_index json =
  let index = Hashtbl.create 8192 in
  let rec scan_json json =
    begin match Yojson.Basic.Util.member "id" json with
    | `Null -> ()
    | `Int id -> Hashtbl.replace index id json
    | _ -> assert false
    end;
    begin match Yojson.Basic.Util.member "children" json with
    | `Null -> ()
    | `List children -> List.iter scan_json children
    | _ -> assert false
    end;
  in
  scan_json json;
  index

let find_ids kind_to_find index =
  Hashtbl.fold
    (fun id json ids ->
       let open Yojson.Basic.Util in
       let kind = member "kind" json |> to_int in
       if kind = kind_to_find then id :: ids else ids
    )
    index
    []

type component = {
  class_id: int;
  module_id: int;
  props_ids: int list;
}

let find_components index =
  let get_property_types json =
    let open Yojson.Basic.Util in
    let react_component_base = "Component" in
    let extended_types =
      [json]
      |> filter_member "extendedTypes"
      |> flatten in
    List.fold_left
      (fun props_ids extended_type_json ->
         let name = member "name" extended_type_json |> to_string in
         if name = react_component_base then
           let first_type_argument =
             try
               [extended_type_json]
               |> filter_member "typeArguments"
               |> flatten
               |> List.hd
             with Failure _ ->
               failwith ("Cannot find first type argument for " ^
                         (json |> member "name" |> to_string))
           in
           match first_type_argument |> member "type" |> to_string with
           | "reference" ->
             (first_type_argument |> member "id" |> to_int) :: props_ids
           | "intersection" ->
             let ids =
               [first_type_argument]
               |> filter_member "types"
               |> flatten
               |> filter_member "id"
               |> flatten
               |> filter_int
             in
             ids @ props_ids
           | s ->
             failwith ("Unexpected first type argument " ^ s ^ " for " ^
                       (json |> member "name" |> to_string))
         else props_ids
      )
      []
      extended_types
  in

  let find_module_ids =
    let module_kind = 1 in
    find_ids module_kind in
  let module_ids = find_module_ids index in
  let get_module class_id =
    let module_id =
      List.fold_left
        (fun module_id id ->
           let json = Hashtbl.find index id in
           let open Yojson.Basic.Util in
           let groups =
             [json]
             |> filter_member "groups"
             |> flatten
             |> filter_member "children"
             |> flatten
             |> filter_int in
           if module_id = None && List.mem class_id groups then Some id
           else module_id
        )
        None
        module_ids in
    match module_id with
    | Some id -> id
    | None -> assert false
  in

  let find_class_ids =
    let class_kind = 128 in
    find_ids class_kind in
  let class_ids = find_class_ids index in

  List.fold_left
    (fun components id ->
       let json = Hashtbl.find index id in
       match get_property_types json with
       | [] -> components
       | props_ids ->
         let module_id = get_module id in
         { class_id = id;
           module_id;
           props_ids;
         } :: components
    )
    []
    class_ids

let custom_callbacks =
  let table = Hashtbl.create 16 in
  let add = Hashtbl.add table in
  let unit_callback =
    Component.Type.CustomCallback "unit => unit" in
  (* React-toolbox events *)
  add ("onLeftIconClick", "AppBar") Component.Type.MouseCallback;
  add ("onRightIconClick", "AppBar") Component.Type.MouseCallback;
  add ("onHide", "Menu") unit_callback;
  add ("onHide", "IconMenu") unit_callback;
  add ("onShow", "Menu") unit_callback;
  add ("onShow", "IconMenu") unit_callback;
  add ("onEscKeyDown", "DatePicker") Component.Type.KeyboardCallback;
  add ("onEscKeyDown", "DatePickerDialog") Component.Type.KeyboardCallback;
  add ("onEscKeyDown", "Dialog") Component.Type.KeyboardCallback;
  add ("onEscKeyDown", "Drawer") Component.Type.KeyboardCallback;
  add ("onEscKeyDown", "Overlay") Component.Type.KeyboardCallback;
  add ("onEscKeyDown", "TimePicker") Component.Type.KeyboardCallback;
  add ("onEscKeyDown", "TimePickerDialog") Component.Type.KeyboardCallback;
  add ("onTimeout", "Snackbar") unit_callback;
  add ("onDismiss", "DatePicker") Component.Type.MouseCallback;
  add ("onDismiss", "DatePickerDialog") Component.Type.MouseCallback;
  add ("onDismiss", "TimePicker") Component.Type.MouseCallback;
  add ("onDismiss", "TimePickerDialog") Component.Type.MouseCallback;
  add ("onOverlayClick", "DatePicker") Component.Type.MouseCallback;
  add ("onOverlayClick", "DatePickerDialog") Component.Type.MouseCallback;
  add ("onOverlayClick", "Dialog") Component.Type.MouseCallback;
  add ("onOverlayClick", "Drawer") Component.Type.MouseCallback;
  add ("onOverlayClick", "NavDrawer") Component.Type.MouseCallback;
  add ("onOverlayClick", "Sidebar") Component.Type.MouseCallback;
  add ("onOverlayClick", "TimePicker") Component.Type.MouseCallback;
  add ("onOverlayClick", "TimePickerDialog") Component.Type.MouseCallback;
  add ("onDeleteClick", "Autocomplete") Component.Type.MouseCallback;
  add ("onDeleteClick", "Chip") Component.Type.MouseCallback;
  add ("onQueryChange", "Autocomplete")
    (Component.Type.CustomCallback "string => unit");
  add ("onRowSelect", "Table")
    (Component.Type.CustomCallback "array(float => unit)");
  add ("onActive", "Tab") unit_callback;
  add ("onDragStop", "Slider") unit_callback;
  add ("onOverlayMouseDown", "Dialog") Component.Type.MouseCallback;
  add ("onOverlayMouseMove", "Dialog") Component.Type.MouseCallback;
  add ("onOverlayMouseUp", "Dialog") Component.Type.MouseCallback;
  add ("onSelect", "DatePickerDialog")
    (Component.Type.CustomCallback
       "Js.Date.t => ReactEvent.Mouse.t => unit");
  add ("onSelect", "Menu")
    (Component.Type.CustomCallback "'value => unit");
  add ("onSelect", "TableHead")
    (Component.Type.CustomCallback
       "bool => ReactEvent.Mouse.t => unit");
  add ("onSelect", "TableRow")
    (Component.Type.CustomCallback "float => bool => unit");
  add ("onSelect", "TimePickerDialog")
    (Component.Type.CustomCallback
       "Js.Date.t => ReactEvent.Mouse.t => unit");
  add ("onBlur", "Autocomplete")
    (Component.Type.CustomCallback "ReactEvent.Focus.t => string => unit");
  add ("onChange", "Autocomplete")
    (Component.Type.CustomCallback "'value => ReactEvent.Mouse.t => unit");
  add ("onChange", "Checkbox")
    (Component.Type.CustomCallback
       "bool => ReactEvent.Mouse.t => unit");
  add ("onChange", "ClockHours")
    (Component.Type.CustomCallback "float => unit");
  add ("onChange", "Clock")
    (Component.Type.CustomCallback "Js.Date.t => unit");
  add ("onChange", "TimePicker")
    (Component.Type.CustomCallback
       "Js.Date.t => ReactEvent.Mouse.t => unit");
  add ("onChange", "ClockMinutes")
    (Component.Type.CustomCallback "float => unit");
  add ("onChange", "Dropdown")
    (Component.Type.CustomCallback "'value => ReactEvent.Mouse.t => unit");
  add ("onClick", "CalendarDay")
    (Component.Type.CustomCallback "float => unit");
  add ("onChange", "DatePicker")
    (Component.Type.CustomCallback
       "Js.Date.t => ReactEvent.Mouse.t => unit");
  add ("onChange", "Calendar")
    (Component.Type.CustomCallback "Js.Date.t => bool => unit");
  add ("onChange", "Slider")
    (Component.Type.CustomCallback "float => ReactEvent.Focus.t => unit");
  add ("onChange", "Switch")
    (Component.Type.CustomCallback
       "bool => ReactEvent.Mouse.t => unit");
  add ("onChange", "RadioGroup")
    (Component.Type.CustomCallback "string => unit");
  add ("onChange", "Tabs")
    (Component.Type.CustomCallback "float => unit");
  add ("onChange", "Input")
    (Component.Type.CustomCallback "string => ReactEvent.Mouse.t => unit");
  add ("onClick", "Tab")
    (Component.Type.CustomCallback "ReactEvent.Mouse.t => float => unit");
  add ("onClick", "TableCell")
    (Component.Type.CustomCallback
       "ReactEvent.Mouse.t => float => float => unit");
  add ("onDayClick", "CalendarMonth")
    (Component.Type.CustomCallback "float => unit");
  add ("onMove", "ClockHand")
    (Component.Type.CustomCallback "float => float => unit");
  table

let get_callback_type prop_name module_name =
  try
    Hashtbl.find custom_callbacks (prop_name, module_name)
  with Not_found ->
    try
      Component.Property.get_callback_type prop_name
    with Failure message -> failwith (message ^ " in module " ^ module_name)

let build_properties module_name props_json =
  let property_kind = 1024 in
  let open Yojson.Basic.Util in
  let properties =
    [props_json]
    |> filter_member "children"
    |> flatten in
  List.fold_left
    (fun props prop_json ->
       let name = prop_json |> member "name" |> to_string in
       if prop_json |> member "kind" |> to_int = property_kind &&
          not (List.mem name Component.Property.props_blacklist) then
         let comment_json =
           [prop_json]
           |> filter_member "comment" in
         let short_text =
           comment_json
           |> filter_member "shortText"
           |> filter_string in
         let text =
           comment_json
           |> filter_member "text"
           |> filter_string in
         let comment = String.concat ""
             [ String.concat "" short_text;
               String.concat "" text
             ] in
         let type_category =
           prop_json |> member "type" |> member "type" |> to_string in
         let is_optional =
           try
             prop_json |> member "flags" |> member "isOptional" |> to_bool
           with Type_error _ -> false in
         let property_type =
           if type_category = "union" then
             let union_types_json =
               [prop_json]
               |> filter_member "type"
               |> filter_member "types"
               |> flatten in
             let (has_string_literal, has_other_type) =
               let xs = union_types_json
                        |> filter_member "type"
                        |> filter_string in
               (List.length xs > 0 &&
                List.exists (fun x -> x = "stringLiteral") xs,
                List.length xs > 0 &&
                List.exists (fun x -> x <> "stringLiteral") xs) in
             let enum_type =
               let union_values =
                 union_types_json
                 |> filter_member "value"
                 |> filter_string in
               Component.Type.Enum {
                 Component.Type.name = String.capitalize_ascii name;
                 values = union_values;
               }
             in
             let mapped_types =
               union_types_json
               |> List.filter
                 (fun union_type_json ->
                    union_type_json |> member "name" <> `Null
                 )
               |> List.map
                 (fun union_type_json ->
                    let type_category =
                      union_type_json |> member "type" |> to_string in
                    let type_name =
                      union_type_json |> member "name" |> to_string in
                    Component.Type.map_type type_category type_name false
                 )
             in
             let union_type =
               match (has_string_literal, has_other_type) with
               | true, false -> enum_type
               | false, true -> Component.Type.Union mapped_types
               | true, true -> Component.Type.Union
                                 (enum_type :: mapped_types)
               | false, false ->
                 Component.Type.map_type "intrinsic" "any" false
             in
             if is_optional then Component.Type.Option union_type
             else union_type
           else if type_category = "intersection" then
             Component.Type.map_type "intrinsic" "any" is_optional
           else if type_category = "array" then
             let element_type_json =
               prop_json |> member "type" |> member "elementType" in
             let type_category =
               element_type_json |> member "type" |> to_string in
             let type_name =
               element_type_json |> member "name" |> to_string in
             let element_type =
               Component.Type.map_type type_category type_name false in
             let array_type = Component.Type.Array element_type in
             if is_optional then Component.Type.Option array_type
             else array_type
           else
             let type_name =
               prop_json |> member "type" |> member "name" |> to_string in
             if Component.Type.is_callback type_category type_name name then
               let callback_type = get_callback_type name module_name in
               if is_optional then Component.Type.Option callback_type
               else callback_type
             else
               Component.Type.map_type type_category type_name is_optional
         in
         { Component.Property.name;
           property_type;
           comment;
         } :: props
       else
         props
    )
    []
    properties

let parse path =
  let json = Yojson.Basic.from_file path in
  let index = build_index json in
  let components = find_components index in
  let clean_module_path module_name =
    let quote_index =
      try
        (String.index module_name '"') + 1
      with Not_found -> 1 in
    let dot_index =
      try
        String.rindex module_name '.'
      with Not_found -> String.length module_name in
    String.sub module_name quote_index (dot_index - quote_index)
  in
  let parsed_components =
    List.map
      (fun component ->
         let class_json = Hashtbl.find index component.class_id in
         let module_json = Hashtbl.find index component.module_id in
         let props_json = List.map (Hashtbl.find index) component.props_ids in
         let open Yojson.Basic.Util in
         let module_name =
           class_json
           |> member "name"
           |> to_string in
         let module_path = 
           module_json
           |> member "name"
           |> to_string
           |> clean_module_path in
         let properties =
           props_json
           |> List.map (build_properties module_name)
           |> List.concat
           |> List.sort compare in
         {
           Component.name = module_name;
           module_path = react_toolbox_base ^ module_path;
           properties;
         }
      )
      components in
  List.sort
    (fun x y -> compare x.Component.name y.Component.name)
    parsed_components

