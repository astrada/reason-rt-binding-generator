module Type =
struct
  type enum = {
    name: string;
    values: string list;
  }

  type t =
    | Any
    | String
    | Bool
    | Number
    | Date
    | ClipboardCallback
    | CompositionCallback
    | KeyboardCallback
    | FocusCallback
    | FormCallback
    | MouseCallback
    | SelectionCallback
    | TouchCallback
    | UICallback
    | WheelCallback
    | MediaCallback
    | ImageCallback
    | AnimationCallback
    | TransitionCallback
    | GenericCallback
    | CustomCallback of string
    | Element
    | Style
    | Object
    | Enum of enum
    | Option of t
    | Array of t
    | Union of t list

  let is_callback type_category type_name props_name =
    let is_name_valid =
      let regex = Str.regexp "on[A-Z]" in
      Str.string_match regex props_name 0 in
    match type_name with
    | "Function" when type_category = "reference" && is_name_valid -> true
    | _ -> false

  let map_type type_category type_name is_optional =
    let t =
      match type_name with
      | "string" when type_category = "intrinsic" -> String
      | "boolean" when type_category = "intrinsic" -> Bool
      | "ReactElement"
      | "React.ReactNode" when type_category = "reference" -> Element
      | "CSSProperties" when type_category = "reference" -> Style
      | "number" when type_category = "intrinsic" -> Number
      | "Date" when type_category = "reference" -> Date
      | "any" when type_category = "intrinsic" -> Any
      | _ when type_category = "reference" -> Object
      | _ -> failwith ("map_type: " ^ type_name) in
    if is_optional then Option t else t

  let to_polymorphic_variant = function
    | String -> "`String"
    | Bool -> "`Bool"
    | Number -> "`Float"
    | Date -> "`Date"
    | ClipboardCallback
    | CompositionCallback
    | KeyboardCallback
    | FocusCallback
    | FormCallback
    | MouseCallback
    | SelectionCallback
    | TouchCallback
    | UICallback
    | WheelCallback
    | MediaCallback
    | ImageCallback
    | AnimationCallback
    | TransitionCallback
    | GenericCallback
    | CustomCallback _ -> "`Callback"
    | Element -> "`Element"
    | Style
    | Object
    | Any -> "`Object"
    | Enum _ -> "`Enum"
    | Array _
    | Option _
    | Union _ -> failwith "Unsupported type in union"

  let any_to_string counter =
    let letter_base = (Char.code 'a') - 1 in
    let number_base = (Char.code '0') - 1 in
    let char_index = counter mod 26 in
    let number_index = counter / 26 in
    let character = Char.chr (letter_base + char_index) in
    if number_index = 0 then
      "'" ^ (String.make 1 character)
    else
      let number = Char.chr (number_base + number_index) in
      "'" ^ (String.make 1 character) ^ (String.make 1 number)

  let rec to_string counter_ref = function
    | Any ->
      begin
        incr counter_ref;
        any_to_string !counter_ref
      end
    | String -> "string"
    | Bool -> "bool"
    | Number -> "float"
    | Date -> "Js.Date.t"
    | ClipboardCallback -> "ReactEvent.Clipboard.t => unit"
    | CompositionCallback -> "ReactEvent.Composition.t => unit"
    | KeyboardCallback -> "ReactEvent.Keyboard.t => unit"
    | FocusCallback -> "ReactEvent.Focus.t => unit"
    | FormCallback -> "ReactEvent.Form.t => unit"
    | MouseCallback -> "ReactEvent.Mouse.t => unit"
    | SelectionCallback -> "ReactEvent.Selection.t => unit"
    | TouchCallback -> "ReactEvent.Touch.t => unit"
    | UICallback -> "ReactEvent.UI.t => unit"
    | WheelCallback -> "ReactEvent.Wheel.t => unit"
    | MediaCallback -> "ReactEvent.Media.t => unit"
    | ImageCallback -> "ReactEvent.Image.t => unit"
    | AnimationCallback -> "ReactEvent.Animation.t => unit"
    | TransitionCallback -> "ReactEvent.Transition.t => unit"
    | GenericCallback -> "ReactEvent.Synthetic.t => unit"
    | CustomCallback signature -> "(" ^ signature ^ ")"
    | Element -> "ReasonReact.reactElement"
    | Style -> "ReactDOMRe.style"
    | Object -> "Js.t({..})"
    | Enum { name; _ } -> name ^ ".t"
    | Option t -> "option(" ^ (to_string counter_ref t) ^ ")"
    | Array t -> "array(" ^ (to_string counter_ref t) ^ ")"
    | Union ts -> "[ | " ^ (String.concat " | " (
        List.map
          (fun t ->
             (to_polymorphic_variant t) ^
             "(" ^ (to_string counter_ref t) ^ ")")
          ts)) ^ "]"

  let is_option = function
    | Option _ -> true
    | _ -> false

  let is_enum = function
    | Enum _ -> true
    | _ -> false

  let is_any = function
    | Any -> true
    | _ -> false

end

module Property =
struct
  type t = {
    name: string;
    property_type: Type.t;
    comment: string;
  }

  let props_blacklist = ["key"; "children"]

  let standard_callbacks =
    let table = Hashtbl.create 36 in
    let add = Hashtbl.add table in
    (* Clipboard events *)
    add "onCopy" Type.ClipboardCallback;
    add "onCut" Type.ClipboardCallback;
    add "onPaste" Type.ClipboardCallback;
    (* Composition events *)
    add "onCompositionEnd" Type.CompositionCallback;
    add "onCompositionStart" Type.CompositionCallback;
    add "onCompositionUpdate" Type.CompositionCallback;
    (* Keyboard events *)
    add "onKeyDown" Type.KeyboardCallback;
    add "onKeyPress" Type.KeyboardCallback;
    add "onKeyUp" Type.KeyboardCallback;
    (* Focus events *)
    add "onFocus" Type.FocusCallback;
    add "onBlur" Type.FocusCallback;
    (* Form events *)
    add "onChange" Type.FormCallback;
    add "onInput" Type.FormCallback;
    add "onSubmit" Type.FormCallback;
    (* Mouse events *)
    add "onClick" Type.MouseCallback;
    add "onContextMenu" Type.MouseCallback;
    add "onDoubleClick" Type.MouseCallback;
    add "onDrag" Type.MouseCallback;
    add "onDragEnd" Type.MouseCallback;
    add "onDragEnter" Type.MouseCallback;
    add "onDragExit" Type.MouseCallback;
    add "onDragLeave" Type.MouseCallback;
    add "onDragOver" Type.MouseCallback;
    add "onDragStart" Type.MouseCallback;
    add "onDrop" Type.MouseCallback;
    add "onMouseDown" Type.MouseCallback;
    add "onMouseEnter" Type.MouseCallback;
    add "onMouseLeave" Type.MouseCallback;
    add "onMouseMove" Type.MouseCallback;
    add "onMouseOut" Type.MouseCallback;
    add "onMouseOver" Type.MouseCallback;
    add "onMouseUp" Type.MouseCallback;
    (* Selection events *)
    add "onSelect" Type.SelectionCallback;
    (* Touch events *)
    add "onTouchCancel" Type.TouchCallback;
    add "onTouchEnd" Type.TouchCallback;
    add "onTouchMove" Type.TouchCallback;
    add "onTouchStart" Type.TouchCallback;
    (* UI events *)
    add "onScroll" Type.UICallback;
    (* Wheel events *)
    add "onWheel" Type.WheelCallback;
    (* Media events *)
    add "onAbort" Type.MediaCallback;
    add "onCanPlay" Type.MediaCallback;
    add "onCanPlayThrough" Type.MediaCallback;
    add "onDurationChange" Type.MediaCallback;
    add "onEmptied" Type.MediaCallback;
    add "onEncrypetd" Type.MediaCallback;
    add "onEnded" Type.MediaCallback;
    add "onError" Type.MediaCallback;
    add "onLoadedData" Type.MediaCallback;
    add "onLoadedMetadata" Type.MediaCallback;
    add "onLoadStart" Type.MediaCallback;
    add "onPause" Type.MediaCallback;
    add "onPlay" Type.MediaCallback;
    add "onPlaying" Type.MediaCallback;
    add "onProgress" Type.MediaCallback;
    add "onRateChange" Type.MediaCallback;
    add "onSeeked" Type.MediaCallback;
    add "onSeeking" Type.MediaCallback;
    add "onStalled" Type.MediaCallback;
    add "onSuspend" Type.MediaCallback;
    add "onTimeUpdate" Type.MediaCallback;
    add "onVolumeChange" Type.MediaCallback;
    add "onWaiting" Type.MediaCallback;
    (* Image events *)
    add "onLoad" Type.ImageCallback;
    (*add "onError" Type.ImageCallback;*) (* duplicate *)
    (* Animation events *)
    add "onAnimationStart" Type.AnimationCallback;
    add "onAnimationEnd" Type.AnimationCallback;
    add "onAnimationIteration" Type.AnimationCallback;
    (* Transition events *)
    add "onTransitionEnd" Type.TransitionCallback;
    add "onRippleEnded" Type.TransitionCallback;
    table

  let get_callback_type name =
    try
      Hashtbl.find standard_callbacks name
    with Not_found -> failwith ("get_callback_type: " ^ name ^ " not found")

end

type t = {
  name: string;
  module_path: string;
  properties: Property.t list;
}

