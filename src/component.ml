module Type =
struct
  type enum = {
    name: string;
    values: string list;
  }

  type t =
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
      | "any" when type_category = "intrinsic" -> Object
      | _ when type_category = "reference" -> Object
      | _ -> failwith ("map_type: " ^ type_name) in
    if is_optional then Option t else t

  let to_polymorphic_variant = function
    | String -> "`String"
    | Bool -> "`Bool"
    | Number
    | Date -> "`Float"
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
    | GenericCallback -> "`Callback"
    | Element -> "`Element"
    | Style
    | Object -> "`Object"
    | Enum _ -> "`Enum"
    | Array _
    | Option _
    | Union _ -> failwith "Unsupported type in union"

  let rec to_string = function
    | String -> "string"
    | Bool -> "bool"
    | Number
    | Date -> "float"
    | ClipboardCallback -> "(ReactEventRe.Clipboard.t => unit)"
    | CompositionCallback -> "(ReactEventRe.Composition.t => unit)"
    | KeyboardCallback -> "(ReactEventRe.Keyboard.t => unit)"
    | FocusCallback -> "(ReactEventRe.Focus.t => unit)"
    | FormCallback -> "(ReactEventRe.Form.t => unit)"
    | MouseCallback -> "(ReactEventRe.Mouse.t => unit)"
    | SelectionCallback -> "(ReactEventRe.Selection.t => unit)"
    | TouchCallback -> "(ReactEventRe.Touch.t => unit)"
    | UICallback -> "(ReactEventRe.UI.t => unit)"
    | WheelCallback -> "(ReactEventRe.Wheel.t => unit)"
    | MediaCallback -> "(ReactEventRe.Media.t => unit)"
    | ImageCallback -> "(ReactEventRe.Image.t => unit)"
    | AnimationCallback -> "(ReactEventRe.Animation.t => unit)"
    | TransitionCallback -> "(ReactEventRe.Transition.t => unit)"
    | GenericCallback -> "(ReactEventRe.Synthetic.t => unit)"
    | Element -> "ReasonReact.reactElement"
    | Style -> "ReactDOMRe.style"
    | Object -> "(Js.t {..})"
    | Enum { name; _ } -> name ^ ".t"
    | Option t -> "(option " ^ (to_string t) ^ ")"
    | Array t -> "(array " ^ (to_string t) ^ ")"
    | Union ts -> "[ | " ^ (String.concat " | " (
        List.map
          (fun t -> (to_polymorphic_variant t) ^ " " ^ (to_string t))
          ts)) ^ "]"

  let is_option = function
    | Option _ -> true
    | _ -> false

  let is_enum = function
    | Enum _ -> true
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
    let table = Hashtbl.create 52 in
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
    (* React-toolbox events *)
    add "onLeftIconClick" Type.MouseCallback;
    add "onRightIconClick" Type.MouseCallback;
    add "onHide" Type.GenericCallback;
    add "onShow" Type.GenericCallback;
    add "onEscKeyDown" Type.KeyboardCallback;
    add "onTimeout" Type.GenericCallback;
    add "onDismiss" Type.GenericCallback;
    add "onOverlayClick" Type.MouseCallback;
    add "onDeleteClick" Type.MouseCallback;
    add "onQueryChange" Type.GenericCallback; (* TODO: 1 param callback *)
    add "onRowSelect" Type.GenericCallback; (* TODO: review callback *)
    add "onActive" Type.GenericCallback;
    add "onDragStop" Type.GenericCallback;
    add "onOverlayMouseDown" Type.MouseCallback;
    add "onOverlayMouseMove" Type.MouseCallback;
    add "onOverlayMouseUp" Type.MouseCallback;
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

