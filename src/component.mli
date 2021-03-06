module Type : sig
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

  val is_callback: string -> string -> string -> bool

  val map_type: string -> string -> bool -> t

  val to_string: int ref -> t -> string

  val is_option: t -> bool

  val is_enum: t -> bool

  val is_any: t -> bool

end

module Property : sig
  type t = {
    name: string;
    property_type: Type.t;
    comment: string;
  }
  
  val props_blacklist: string list

  val get_callback_type: string -> Type.t

end

type t = {
  name: string;
  module_path: string;
  properties: Property.t list;
}

