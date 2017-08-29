let optionMap fn option =>
  switch option {
  | Some value => Some (fn value)
  | None => None
  };

module ThemeProvider = {
  type theme;
  external themeProvider : ReasonReact.reactClass =
    "ThemeProvider" [@@bs.module "react-css-themr/lib/index"];
  let make theme::(theme: theme) children =>
    ReasonReact.wrapJsForReason reactClass::themeProvider props::{"theme": theme} children;
};

module IconMenu = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/menu/IconMenu"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      selected::(selected: option Js.t {..})=?
      selectable::(selectable: option bool)=?
      position::(position: option string)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onShow::(onShow: option (ReactEventRe.Synthetic.t => unit))=?
      onSelect::(onSelect: option (ReactEventRe.Selection.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onHide::(onHide: option (ReactEventRe.Synthetic.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      menuRipple::(menuRipple: option bool)=?
      iconRipple::(iconRipple: option bool)=?
      icon::(icon: option ReasonReact.reactElement)=?
      className::(className: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "selected": Js.Null_undefined.from_opt selected,
        "selectable": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean selectable),
        "position": Js.Null_undefined.from_opt position,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onShow": Js.Null_undefined.from_opt onShow,
        "onSelect": Js.Null_undefined.from_opt onSelect,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onHide": Js.Null_undefined.from_opt onHide,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "menuRipple": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean menuRipple),
        "iconRipple": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean iconRipple),
        "icon": Js.Null_undefined.from_opt icon,
        "className": Js.Null_undefined.from_opt className
      }
      children;
};

module ListItemText = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/list/ListItemText"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      primary::(primary: option bool)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      className::(className: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "primary": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean primary),
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "className": Js.Null_undefined.from_opt className
      }
      children;
};

module Overlay = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/overlay/Overlay"];
  let make
      theme::(theme: option Js.t {..})=?
      onEscKeyDown::(onEscKeyDown: option (ReactEventRe.Keyboard.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      invisible::(invisible: option bool)=?
      className::(className: option string)=?
      active::(active: option bool)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "onEscKeyDown": Js.Null_undefined.from_opt onEscKeyDown,
        "onClick": Js.Null_undefined.from_opt onClick,
        "invisible": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean invisible),
        "className": Js.Null_undefined.from_opt className,
        "active": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean active)
      }
      children;
};

module Snackbar = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/snackbar/Snackbar"];
  let make
      type_::(type_: option string)=?
      timeout::(timeout: option float)=?
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onTimeout::(onTimeout: option (ReactEventRe.Synthetic.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      label::(label: option string)=?
      className::(className: option string)=?
      active::(active: option bool)=?
      action::(action: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "type_": Js.Null_undefined.from_opt type_,
        "timeout": Js.Null_undefined.from_opt timeout,
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onTimeout": Js.Null_undefined.from_opt onTimeout,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "label": Js.Null_undefined.from_opt label,
        "className": Js.Null_undefined.from_opt className,
        "active": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean active),
        "action": Js.Null_undefined.from_opt action
      }
      children;
};

module ListItemActions = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/list/ListItemActions"];
  let make type_::(type_: option string)=? theme::(theme: option Js.t {..})=? children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{"type_": Js.Null_undefined.from_opt type_, "theme": Js.Null_undefined.from_opt theme}
      children;
};

module DatePicker = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/date_picker/DatePicker"];
  let make
      value::(value: option string)=?
      theme::(theme: option Js.t {..})=?
      sundayFirstDayOfWeek::(sundayFirstDayOfWeek: option bool)=?
      style::(style: option ReactDOMRe.style)=?
      readonly::(readonly: option bool)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onOverlayClick::(onOverlayClick: option (ReactEventRe.Mouse.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onKeyPress::(onKeyPress: option (ReactEventRe.Keyboard.t => unit))=?
      onEscKeyDown::(onEscKeyDown: option (ReactEventRe.Keyboard.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onDismiss::(onDismiss: option (ReactEventRe.Synthetic.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      onChange::(onChange: option (ReactEventRe.Form.t => unit))=?
      okLabel::(okLabel: option string)=?
      name::(name: option string)=?
      minDate::(minDate: option Js.t {..})=?
      maxDate::(maxDate: option Js.t {..})=?
      locale::(locale: option string)=?
      label::(label: option string)=?
      inputFormat::(inputFormat: option Js.t {..})=?
      inputClassName::(inputClassName: option string)=?
      icon::(icon: option ReasonReact.reactElement)=?
      error::(error: option string)=?
      enabledDates::(enabledDates: option Js.t {..})=?
      disabledDates::(disabledDates: option Js.t {..})=?
      className::(className: option string)=?
      cancelLabel::(cancelLabel: option string)=?
      autoOk::(autoOk: option bool)=?
      active::(active: option bool)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "value": Js.Null_undefined.from_opt value,
        "theme": Js.Null_undefined.from_opt theme,
        "sundayFirstDayOfWeek":
          Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean sundayFirstDayOfWeek),
        "style": Js.Null_undefined.from_opt style,
        "readonly": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean readonly),
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onOverlayClick": Js.Null_undefined.from_opt onOverlayClick,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onKeyPress": Js.Null_undefined.from_opt onKeyPress,
        "onEscKeyDown": Js.Null_undefined.from_opt onEscKeyDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onDismiss": Js.Null_undefined.from_opt onDismiss,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "onChange": Js.Null_undefined.from_opt onChange,
        "okLabel": Js.Null_undefined.from_opt okLabel,
        "name": Js.Null_undefined.from_opt name,
        "minDate": Js.Null_undefined.from_opt minDate,
        "maxDate": Js.Null_undefined.from_opt maxDate,
        "locale": Js.Null_undefined.from_opt locale,
        "label": Js.Null_undefined.from_opt label,
        "inputFormat": Js.Null_undefined.from_opt inputFormat,
        "inputClassName": Js.Null_undefined.from_opt inputClassName,
        "icon": Js.Null_undefined.from_opt icon,
        "error": Js.Null_undefined.from_opt error,
        "enabledDates": Js.Null_undefined.from_opt enabledDates,
        "disabledDates": Js.Null_undefined.from_opt disabledDates,
        "className": Js.Null_undefined.from_opt className,
        "cancelLabel": Js.Null_undefined.from_opt cancelLabel,
        "autoOk": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean autoOk),
        "active": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean active)
      }
      children;
};

module TableHead = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/table/TableHead"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      selected::(selected: option bool)=?
      selectable::(selectable: option bool)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onSelect::(onSelect: option (ReactEventRe.Selection.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      multiSelectable::(multiSelectable: option bool)=?
      displaySelect::(displaySelect: option bool)=?
      className::(className: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "selected": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean selected),
        "selectable": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean selectable),
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onSelect": Js.Null_undefined.from_opt onSelect,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "multiSelectable":
          Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean multiSelectable),
        "displaySelect":
          Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean displaySelect),
        "className": Js.Null_undefined.from_opt className
      }
      children;
};

module ListItemContent = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/list/ListItemContent"];
  let make
      type_::(type_: option string)=?
      theme::(theme: option Js.t {..})=?
      legend::(legend: option string)=?
      caption::(caption: option ReasonReact.reactElement)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "type_": Js.Null_undefined.from_opt type_,
        "theme": Js.Null_undefined.from_opt theme,
        "legend": Js.Null_undefined.from_opt legend,
        "caption": Js.Null_undefined.from_opt caption
      }
      children;
};

module RadioButton = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/radio/RadioButton"];
  let make
      value::(value: option Js.t {..})=?
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onFocus::(onFocus: option (ReactEventRe.Focus.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      onChange::(onChange: option (ReactEventRe.Form.t => unit))=?
      onBlur::(onBlur: option (ReactEventRe.Focus.t => unit))=?
      name::(name: option string)=?
      label::(label: option ReasonReact.reactElement)=?
      disabled::(disabled: option bool)=?
      className::(className: option string)=?
      checked::(checked: option bool)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "value": Js.Null_undefined.from_opt value,
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onFocus": Js.Null_undefined.from_opt onFocus,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "onChange": Js.Null_undefined.from_opt onChange,
        "onBlur": Js.Null_undefined.from_opt onBlur,
        "name": Js.Null_undefined.from_opt name,
        "label": Js.Null_undefined.from_opt label,
        "disabled": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean disabled),
        "className": Js.Null_undefined.from_opt className,
        "checked": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean checked)
      }
      children;
};

module List = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/list/List"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      selectable::(selectable: option bool)=?
      ripple::(ripple: option bool)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      className::(className: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "selectable": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean selectable),
        "ripple": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean ripple),
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "className": Js.Null_undefined.from_opt className
      }
      children;
};

module Chip = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/chip/Chip"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onDeleteClick::(onDeleteClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      deletable::(deletable: option bool)=?
      className::(className: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onDeleteClick": Js.Null_undefined.from_opt onDeleteClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "deletable": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean deletable),
        "className": Js.Null_undefined.from_opt className
      }
      children;
};

module BrowseButton = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/button/BrowseButton"];
  let make
      type_::(type_: option string)=?
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      ripple::(ripple: option bool)=?
      raised::(raised: option bool)=?
      primary::(primary: option bool)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      neutral::(neutral: option bool)=?
      mini::(mini: option bool)=?
      label::(label: option string)=?
      inverse::(inverse: option bool)=?
      icon::(icon: option ReasonReact.reactElement)=?
      href::(href: option string)=?
      floating::(floating: option bool)=?
      flat::(flat: option bool)=?
      disabled::(disabled: option bool)=?
      className::(className: option string)=?
      accent::(accent: option bool)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "type_": Js.Null_undefined.from_opt type_,
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "ripple": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean ripple),
        "raised": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean raised),
        "primary": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean primary),
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "neutral": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean neutral),
        "mini": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean mini),
        "label": Js.Null_undefined.from_opt label,
        "inverse": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean inverse),
        "icon": Js.Null_undefined.from_opt icon,
        "href": Js.Null_undefined.from_opt href,
        "floating": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean floating),
        "flat": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean flat),
        "disabled": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean disabled),
        "className": Js.Null_undefined.from_opt className,
        "accent": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean accent)
      }
      children;
};

module IconButton = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/button/IconButton"];
  let make
      type_::(type_: option string)=?
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      ripple::(ripple: option bool)=?
      primary::(primary: option bool)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      neutral::(neutral: option bool)=?
      inverse::(inverse: option bool)=?
      icon::(icon: option ReasonReact.reactElement)=?
      href::(href: option string)=?
      disabled::(disabled: option bool)=?
      className::(className: option string)=?
      accent::(accent: option bool)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "type_": Js.Null_undefined.from_opt type_,
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "ripple": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean ripple),
        "primary": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean primary),
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "neutral": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean neutral),
        "inverse": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean inverse),
        "icon": Js.Null_undefined.from_opt icon,
        "href": Js.Null_undefined.from_opt href,
        "disabled": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean disabled),
        "className": Js.Null_undefined.from_opt className,
        "accent": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean accent)
      }
      children;
};

module Navigation = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/navigation/Navigation"];
  let make
      type_::(type_: option string)=?
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      routes::(routes: option Js.t {..})=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      className::(className: option string)=?
      actions::(actions: option Js.t {..})=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "type_": Js.Null_undefined.from_opt type_,
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "routes": Js.Null_undefined.from_opt routes,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "className": Js.Null_undefined.from_opt className,
        "actions": Js.Null_undefined.from_opt actions
      }
      children;
};

module Switch = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/switch/Switch"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onFocus::(onFocus: option (ReactEventRe.Focus.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      onChange::(onChange: option (ReactEventRe.Form.t => unit))=?
      onBlur::(onBlur: option (ReactEventRe.Focus.t => unit))=?
      name::(name: option string)=?
      label::(label: option string)=?
      disabled::(disabled: option bool)=?
      className::(className: option string)=?
      checked::(checked: option bool)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onFocus": Js.Null_undefined.from_opt onFocus,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "onChange": Js.Null_undefined.from_opt onChange,
        "onBlur": Js.Null_undefined.from_opt onBlur,
        "name": Js.Null_undefined.from_opt name,
        "label": Js.Null_undefined.from_opt label,
        "disabled": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean disabled),
        "className": Js.Null_undefined.from_opt className,
        "checked": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean checked)
      }
      children;
};

module ListSubHeader = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/list/ListSubHeader"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      className::(className: option string)=?
      caption::(caption: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "className": Js.Null_undefined.from_opt className,
        "caption": Js.Null_undefined.from_opt caption
      }
      children;
};

module Avatar = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/avatar/Avatar"];
  let make
      title::(title: option string)=?
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      image::(image: option ReasonReact.reactElement)=?
      icon::(icon: option ReasonReact.reactElement)=?
      cover::(cover: option bool)=?
      className::(className: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "title": Js.Null_undefined.from_opt title,
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "image": Js.Null_undefined.from_opt image,
        "icon": Js.Null_undefined.from_opt icon,
        "cover": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean cover),
        "className": Js.Null_undefined.from_opt className
      }
      children;
};

module ListCheckbox = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/list/ListCheckbox"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onFocus::(onFocus: option (ReactEventRe.Focus.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      onChange::(onChange: option (ReactEventRe.Form.t => unit))=?
      onBlur::(onBlur: option (ReactEventRe.Focus.t => unit))=?
      name::(name: option string)=?
      legend::(legend: option string)=?
      disabled::(disabled: option bool)=?
      className::(className: option string)=?
      checked::(checked: option bool)=?
      caption::(caption: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onFocus": Js.Null_undefined.from_opt onFocus,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "onChange": Js.Null_undefined.from_opt onChange,
        "onBlur": Js.Null_undefined.from_opt onBlur,
        "name": Js.Null_undefined.from_opt name,
        "legend": Js.Null_undefined.from_opt legend,
        "disabled": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean disabled),
        "className": Js.Null_undefined.from_opt className,
        "checked": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean checked),
        "caption": Js.Null_undefined.from_opt caption
      }
      children;
};

module MenuDivider = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/menu/MenuDivider"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      className::(className: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "className": Js.Null_undefined.from_opt className
      }
      children;
};

module TableRow = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/table/TableRow"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      selected::(selected: option bool)=?
      selectable::(selectable: option bool)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onSelect::(onSelect: option (ReactEventRe.Selection.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      idx::(idx: option float)=?
      className::(className: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "selected": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean selected),
        "selectable": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean selectable),
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onSelect": Js.Null_undefined.from_opt onSelect,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "idx": Js.Null_undefined.from_opt idx,
        "className": Js.Null_undefined.from_opt className
      }
      children;
};

module CardTitle = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/card/CardTitle"];
  let make
      title::(title: option ReasonReact.reactElement)=?
      theme::(theme: option Js.t {..})=?
      subtitle::(subtitle: option ReasonReact.reactElement)=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      className::(className: option string)=?
      avatar::(avatar: option ReasonReact.reactElement)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "title": Js.Null_undefined.from_opt title,
        "theme": Js.Null_undefined.from_opt theme,
        "subtitle": Js.Null_undefined.from_opt subtitle,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "className": Js.Null_undefined.from_opt className,
        "avatar": Js.Null_undefined.from_opt avatar
      }
      children;
};

module RadioGroup = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/radio/RadioGroup"];
  let make
      value::(value: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      onChange::(onChange: option (ReactEventRe.Form.t => unit))=?
      name::(name: option string)=?
      disabled::(disabled: option bool)=?
      className::(className: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "value": Js.Null_undefined.from_opt value,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "onChange": Js.Null_undefined.from_opt onChange,
        "name": Js.Null_undefined.from_opt name,
        "disabled": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean disabled),
        "className": Js.Null_undefined.from_opt className
      }
      children;
};

module Button = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/button/Button"];
  let make
      type_::(type_: option string)=?
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      ripple::(ripple: option bool)=?
      raised::(raised: option bool)=?
      primary::(primary: option bool)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      neutral::(neutral: option bool)=?
      mini::(mini: option bool)=?
      label::(label: option string)=?
      inverse::(inverse: option bool)=?
      icon::(icon: option ReasonReact.reactElement)=?
      href::(href: option string)=?
      floating::(floating: option bool)=?
      flat::(flat: option bool)=?
      disabled::(disabled: option bool)=?
      className::(className: option string)=?
      accent::(accent: option bool)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "type_": Js.Null_undefined.from_opt type_,
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "ripple": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean ripple),
        "raised": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean raised),
        "primary": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean primary),
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "neutral": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean neutral),
        "mini": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean mini),
        "label": Js.Null_undefined.from_opt label,
        "inverse": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean inverse),
        "icon": Js.Null_undefined.from_opt icon,
        "href": Js.Null_undefined.from_opt href,
        "floating": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean floating),
        "flat": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean flat),
        "disabled": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean disabled),
        "className": Js.Null_undefined.from_opt className,
        "accent": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean accent)
      }
      children;
};

module CardText = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/card/CardText"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      className::(className: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "className": Js.Null_undefined.from_opt className
      }
      children;
};

module Card = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/card/Card"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      raised::(raised: option bool)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      className::(className: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "raised": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean raised),
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "className": Js.Null_undefined.from_opt className
      }
      children;
};

module AppBar = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/app_bar/AppBar"];
  let make
      title::(title: option string)=?
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      scrollHide::(scrollHide: option bool)=?
      rightIcon::(rightIcon: option ReasonReact.reactElement)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onRightIconClick::(onRightIconClick: option (ReactEventRe.Mouse.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onLeftIconClick::(onLeftIconClick: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      leftIcon::(leftIcon: option ReasonReact.reactElement)=?
      flat::(flat: option bool)=?
      fixed::(fixed: option bool)=?
      className::(className: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "title": Js.Null_undefined.from_opt title,
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "scrollHide": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean scrollHide),
        "rightIcon": Js.Null_undefined.from_opt rightIcon,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onRightIconClick": Js.Null_undefined.from_opt onRightIconClick,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onLeftIconClick": Js.Null_undefined.from_opt onLeftIconClick,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "leftIcon": Js.Null_undefined.from_opt leftIcon,
        "flat": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean flat),
        "fixed": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean fixed),
        "className": Js.Null_undefined.from_opt className
      }
      children;
};

module Autocomplete = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/autocomplete/Autocomplete"];
  let make
      value::(value: option Js.t {..})=?
      type_::(type_: option string)=?
      theme::(theme: option Js.t {..})=?
      suggestionMatch::(suggestionMatch: option string)=?
      style::(style: option ReactDOMRe.style)=?
      source::(source: option Js.t {..})=?
      showSuggestionsWhenValueIsSet::(showSuggestionsWhenValueIsSet: option bool)=?
      showSelectedWhenNotInSource::(showSelectedWhenNotInSource: option bool)=?
      selectedPosition::(selectedPosition: option string)=?
      rows::(rows: option float)=?
      required::(required: option bool)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onQueryChange::(onQueryChange: option (ReactEventRe.Synthetic.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onKeyUp::(onKeyUp: option (ReactEventRe.Keyboard.t => unit))=?
      onKeyPress::(onKeyPress: option (ReactEventRe.Keyboard.t => unit))=?
      onKeyDown::(onKeyDown: option (ReactEventRe.Keyboard.t => unit))=?
      onFocus::(onFocus: option (ReactEventRe.Focus.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      onChange::(onChange: option (ReactEventRe.Form.t => unit))=?
      onBlur::(onBlur: option (ReactEventRe.Focus.t => unit))=?
      name::(name: option string)=?
      multiple::(multiple: option bool)=?
      multiline::(multiline: option bool)=?
      maxLength::(maxLength: option float)=?
      label::(label: option ReasonReact.reactElement)=?
      keepFocusOnChange::(keepFocusOnChange: option bool)=?
      icon::(icon: option ReasonReact.reactElement)=?
      hint::(hint: option ReasonReact.reactElement)=?
      floating::(floating: option bool)=?
      error::(error: option ReasonReact.reactElement)=?
      disabled::(disabled: option bool)=?
      direction::(direction: option string)=?
      className::(className: option string)=?
      allowCreate::(allowCreate: option bool)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "value": Js.Null_undefined.from_opt value,
        "type_": Js.Null_undefined.from_opt type_,
        "theme": Js.Null_undefined.from_opt theme,
        "suggestionMatch": Js.Null_undefined.from_opt suggestionMatch,
        "style": Js.Null_undefined.from_opt style,
        "source": Js.Null_undefined.from_opt source,
        "showSuggestionsWhenValueIsSet":
          Js.Null_undefined.from_opt (
            optionMap Js.Boolean.to_js_boolean showSuggestionsWhenValueIsSet
          ),
        "showSelectedWhenNotInSource":
          Js.Null_undefined.from_opt (
            optionMap Js.Boolean.to_js_boolean showSelectedWhenNotInSource
          ),
        "selectedPosition": Js.Null_undefined.from_opt selectedPosition,
        "rows": Js.Null_undefined.from_opt rows,
        "required": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean required),
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onQueryChange": Js.Null_undefined.from_opt onQueryChange,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onKeyUp": Js.Null_undefined.from_opt onKeyUp,
        "onKeyPress": Js.Null_undefined.from_opt onKeyPress,
        "onKeyDown": Js.Null_undefined.from_opt onKeyDown,
        "onFocus": Js.Null_undefined.from_opt onFocus,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "onChange": Js.Null_undefined.from_opt onChange,
        "onBlur": Js.Null_undefined.from_opt onBlur,
        "name": Js.Null_undefined.from_opt name,
        "multiple": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean multiple),
        "multiline": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean multiline),
        "maxLength": Js.Null_undefined.from_opt maxLength,
        "label": Js.Null_undefined.from_opt label,
        "keepFocusOnChange":
          Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean keepFocusOnChange),
        "icon": Js.Null_undefined.from_opt icon,
        "hint": Js.Null_undefined.from_opt hint,
        "floating": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean floating),
        "error": Js.Null_undefined.from_opt error,
        "disabled": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean disabled),
        "direction": Js.Null_undefined.from_opt direction,
        "className": Js.Null_undefined.from_opt className,
        "allowCreate": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean allowCreate)
      }
      children;
};

module TableCell = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/table/TableCell"];
  let make
      theme::(theme: option Js.t {..})=?
      tagName::(tagName: option string)=?
      style::(style: option ReactDOMRe.style)=?
      sorted::(sorted: option string)=?
      row::(row: option float)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      numeric::(numeric: option bool)=?
      column::(column: option float)=?
      className::(className: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "tagName": Js.Null_undefined.from_opt tagName,
        "style": Js.Null_undefined.from_opt style,
        "sorted": Js.Null_undefined.from_opt sorted,
        "row": Js.Null_undefined.from_opt row,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "numeric": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean numeric),
        "column": Js.Null_undefined.from_opt column,
        "className": Js.Null_undefined.from_opt className
      }
      children;
};

module Menu = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/menu/Menu"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      selected::(selected: option Js.t {..})=?
      selectable::(selectable: option bool)=?
      ripple::(ripple: option bool)=?
      position::(position: option string)=?
      outline::(outline: option bool)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onShow::(onShow: option (ReactEventRe.Synthetic.t => unit))=?
      onSelect::(onSelect: option (ReactEventRe.Selection.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onHide::(onHide: option (ReactEventRe.Synthetic.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      className::(className: option string)=?
      active::(active: option bool)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "selected": Js.Null_undefined.from_opt selected,
        "selectable": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean selectable),
        "ripple": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean ripple),
        "position": Js.Null_undefined.from_opt position,
        "outline": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean outline),
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onShow": Js.Null_undefined.from_opt onShow,
        "onSelect": Js.Null_undefined.from_opt onSelect,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onHide": Js.Null_undefined.from_opt onHide,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "className": Js.Null_undefined.from_opt className,
        "active": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean active)
      }
      children;
};

module CardActions = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/card/CardActions"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      className::(className: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "className": Js.Null_undefined.from_opt className
      }
      children;
};

module MenuItem = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/menu/MenuItem"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      shortcut::(shortcut: option string)=?
      selected::(selected: option bool)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      icon::(icon: option ReasonReact.reactElement)=?
      disabled::(disabled: option bool)=?
      className::(className: option string)=?
      caption::(caption: string)
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "shortcut": Js.Null_undefined.from_opt shortcut,
        "selected": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean selected),
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "icon": Js.Null_undefined.from_opt icon,
        "disabled": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean disabled),
        "className": Js.Null_undefined.from_opt className,
        "caption": caption
      }
      children;
};

module ListItemLayout = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/list/ListItemLayout"];
  let make
      to_::(to_: option string)=?
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      selectable::(selectable: option bool)=?
      rightIcon::(rightIcon: option string)=?
      rightActions::(rightActions: option Js.t {..})=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      legend::(legend: option string)=?
      leftIcon::(leftIcon: option string)=?
      leftActions::(leftActions: option Js.t {..})=?
      itemContent::(itemContent: option Js.t {..})=?
      disabled::(disabled: option bool)=?
      className::(className: option string)=?
      caption::(caption: option string)=?
      avatar::(avatar: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "to_": Js.Null_undefined.from_opt to_,
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "selectable": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean selectable),
        "rightIcon": Js.Null_undefined.from_opt rightIcon,
        "rightActions": Js.Null_undefined.from_opt rightActions,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "legend": Js.Null_undefined.from_opt legend,
        "leftIcon": Js.Null_undefined.from_opt leftIcon,
        "leftActions": Js.Null_undefined.from_opt leftActions,
        "itemContent": Js.Null_undefined.from_opt itemContent,
        "disabled": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean disabled),
        "className": Js.Null_undefined.from_opt className,
        "caption": Js.Null_undefined.from_opt caption,
        "avatar": Js.Null_undefined.from_opt avatar
      }
      children;
};

module Link = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/link/Link"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      label::(label: option string)=?
      icon::(icon: option ReasonReact.reactElement)=?
      href::(href: option string)=?
      count::(count: option float)=?
      className::(className: option string)=?
      active::(active: option bool)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "label": Js.Null_undefined.from_opt label,
        "icon": Js.Null_undefined.from_opt icon,
        "href": Js.Null_undefined.from_opt href,
        "count": Js.Null_undefined.from_opt count,
        "className": Js.Null_undefined.from_opt className,
        "active": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean active)
      }
      children;
};

module ListDivider = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/list/ListDivider"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      inset::(inset: option bool)=?
      className::(className: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "inset": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean inset),
        "className": Js.Null_undefined.from_opt className
      }
      children;
};

module Portal = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/hoc/Portal"];
  let make
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      lockBody::(lockBody: option bool)=?
      container::(container: option Js.t {..})=?
      className::(className: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "lockBody": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean lockBody),
        "container": Js.Null_undefined.from_opt container,
        "className": Js.Null_undefined.from_opt className
      }
      children;
};

module Tabs = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/tabs/Tabs"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      onChange::(onChange: option (ReactEventRe.Form.t => unit))=?
      inverse::(inverse: option bool)=?
      index::(index: option float)=?
      hideMode::(hideMode: option string)=?
      fixed::(fixed: option bool)=?
      disableAnimatedBottomBorder::(disableAnimatedBottomBorder: option bool)=?
      className::(className: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "onChange": Js.Null_undefined.from_opt onChange,
        "inverse": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean inverse),
        "index": Js.Null_undefined.from_opt index,
        "hideMode": Js.Null_undefined.from_opt hideMode,
        "fixed": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean fixed),
        "disableAnimatedBottomBorder":
          Js.Null_undefined.from_opt (
            optionMap Js.Boolean.to_js_boolean disableAnimatedBottomBorder
          ),
        "className": Js.Null_undefined.from_opt className
      }
      children;
};

module Table = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/table/Table"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      selectable::(selectable: option bool)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onRowSelect::(onRowSelect: option (ReactEventRe.Synthetic.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      multiSelectable::(multiSelectable: option bool)=?
      className::(className: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "selectable": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean selectable),
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onRowSelect": Js.Null_undefined.from_opt onRowSelect,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "multiSelectable":
          Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean multiSelectable),
        "className": Js.Null_undefined.from_opt className
      }
      children;
};

module Panel = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/layout/Panel"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      className::(className: option string)=?
      bodyScroll::(bodyScroll: option bool)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "className": Js.Null_undefined.from_opt className,
        "bodyScroll": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean bodyScroll)
      }
      children;
};

module ProgressBar = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/progress_bar/ProgressBar"];
  let make
      value::(value: option float)=?
      type_::(type_: option string)=?
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      multicolor::(multicolor: option bool)=?
      mode::(mode: option string)=?
      min::(min: option float)=?
      max::(max: option float)=?
      disabled::(disabled: option bool)=?
      className::(className: option string)=?
      buffer::(buffer: option float)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "value": Js.Null_undefined.from_opt value,
        "type_": Js.Null_undefined.from_opt type_,
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "multicolor": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean multicolor),
        "mode": Js.Null_undefined.from_opt mode,
        "min": Js.Null_undefined.from_opt min,
        "max": Js.Null_undefined.from_opt max,
        "disabled": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean disabled),
        "className": Js.Null_undefined.from_opt className,
        "buffer": Js.Null_undefined.from_opt buffer
      }
      children;
};

module CardMedia = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/card/CardMedia"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      image::(image: option ReasonReact.reactElement)=?
      contentOverlay::(contentOverlay: option bool)=?
      color::(color: option string)=?
      className::(className: option string)=?
      aspectRatio::(aspectRatio: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "image": Js.Null_undefined.from_opt image,
        "contentOverlay":
          Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean contentOverlay),
        "color": Js.Null_undefined.from_opt color,
        "className": Js.Null_undefined.from_opt className,
        "aspectRatio": Js.Null_undefined.from_opt aspectRatio
      }
      children;
};

module Checkbox = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/checkbox/Checkbox"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      onChange::(onChange: option (ReactEventRe.Form.t => unit))=?
      onBlur::(onBlur: option (ReactEventRe.Focus.t => unit))=?
      name::(name: option string)=?
      label::(label: option ReasonReact.reactElement)=?
      disabled::(disabled: option bool)=?
      className::(className: option string)=?
      checked::(checked: option bool)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "onChange": Js.Null_undefined.from_opt onChange,
        "onBlur": Js.Null_undefined.from_opt onBlur,
        "name": Js.Null_undefined.from_opt name,
        "label": Js.Null_undefined.from_opt label,
        "disabled": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean disabled),
        "className": Js.Null_undefined.from_opt className,
        "checked": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean checked)
      }
      children;
};

module Drawer = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/drawer/Drawer"];
  let make
      withOverlay::(withOverlay: option bool)=?
      type_::(type_: option string)=?
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onOverlayClick::(onOverlayClick: option (ReactEventRe.Mouse.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      insideTree::(insideTree: option bool)=?
      className::(className: option string)=?
      active::(active: option bool)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "withOverlay": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean withOverlay),
        "type_": Js.Null_undefined.from_opt type_,
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onOverlayClick": Js.Null_undefined.from_opt onOverlayClick,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "insideTree": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean insideTree),
        "className": Js.Null_undefined.from_opt className,
        "active": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean active)
      }
      children;
};

module Tab = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/tabs/Tab"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      onActive::(onActive: option (ReactEventRe.Synthetic.t => unit))=?
      label::(label: string)
      icon::(icon: option ReasonReact.reactElement)=?
      hidden::(hidden: option bool)=?
      disabled::(disabled: option bool)=?
      className::(className: option string)=?
      activeClassName::(activeClassName: option string)=?
      active::(active: option bool)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "onActive": Js.Null_undefined.from_opt onActive,
        "label": label,
        "icon": Js.Null_undefined.from_opt icon,
        "hidden": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean hidden),
        "disabled": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean disabled),
        "className": Js.Null_undefined.from_opt className,
        "activeClassName": Js.Null_undefined.from_opt activeClassName,
        "active": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean active)
      }
      children;
};

module Input = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/input/Input"];
  let make
      value::(value: option Js.t {..})=?
      type_::(type_: option string)=?
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      rows::(rows: option float)=?
      required::(required: option bool)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onKeyUp::(onKeyUp: option (ReactEventRe.Keyboard.t => unit))=?
      onKeyPress::(onKeyPress: option (ReactEventRe.Keyboard.t => unit))=?
      onKeyDown::(onKeyDown: option (ReactEventRe.Keyboard.t => unit))=?
      onFocus::(onFocus: option (ReactEventRe.Focus.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      onChange::(onChange: option (ReactEventRe.Form.t => unit))=?
      onBlur::(onBlur: option (ReactEventRe.Focus.t => unit))=?
      name::(name: option string)=?
      multiline::(multiline: option bool)=?
      maxLength::(maxLength: option float)=?
      label::(label: option ReasonReact.reactElement)=?
      icon::(icon: option ReasonReact.reactElement)=?
      hint::(hint: option ReasonReact.reactElement)=?
      floating::(floating: option bool)=?
      error::(error: option ReasonReact.reactElement)=?
      disabled::(disabled: option bool)=?
      className::(className: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "value": Js.Null_undefined.from_opt value,
        "type_": Js.Null_undefined.from_opt type_,
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "rows": Js.Null_undefined.from_opt rows,
        "required": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean required),
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onKeyUp": Js.Null_undefined.from_opt onKeyUp,
        "onKeyPress": Js.Null_undefined.from_opt onKeyPress,
        "onKeyDown": Js.Null_undefined.from_opt onKeyDown,
        "onFocus": Js.Null_undefined.from_opt onFocus,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "onChange": Js.Null_undefined.from_opt onChange,
        "onBlur": Js.Null_undefined.from_opt onBlur,
        "name": Js.Null_undefined.from_opt name,
        "multiline": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean multiline),
        "maxLength": Js.Null_undefined.from_opt maxLength,
        "label": Js.Null_undefined.from_opt label,
        "icon": Js.Null_undefined.from_opt icon,
        "hint": Js.Null_undefined.from_opt hint,
        "floating": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean floating),
        "error": Js.Null_undefined.from_opt error,
        "disabled": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean disabled),
        "className": Js.Null_undefined.from_opt className
      }
      children;
};

module Layout = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/layout/Layout"];
  let make
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      className::(className: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "className": Js.Null_undefined.from_opt className
      }
      children;
};

module TimePicker = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/time_picker/TimePicker"];
  let make
      value::(value: option Js.t {..})=?
      theme::(theme: option Js.t {..})=?
      readonly::(readonly: option bool)=?
      onOverlayClick::(onOverlayClick: option (ReactEventRe.Mouse.t => unit))=?
      onKeyPress::(onKeyPress: option (ReactEventRe.Keyboard.t => unit))=?
      onEscKeyDown::(onEscKeyDown: option (ReactEventRe.Keyboard.t => unit))=?
      onDismiss::(onDismiss: option (ReactEventRe.Synthetic.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      onChange::(onChange: option (ReactEventRe.Form.t => unit))=?
      okLabel::(okLabel: option string)=?
      label::(label: option string)=?
      inputClassName::(inputClassName: option string)=?
      icon::(icon: option ReasonReact.reactElement)=?
      format::(format: option string)=?
      error::(error: option string)=?
      cancelLabel::(cancelLabel: option string)=?
      active::(active: option bool)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "value": Js.Null_undefined.from_opt value,
        "theme": Js.Null_undefined.from_opt theme,
        "readonly": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean readonly),
        "onOverlayClick": Js.Null_undefined.from_opt onOverlayClick,
        "onKeyPress": Js.Null_undefined.from_opt onKeyPress,
        "onEscKeyDown": Js.Null_undefined.from_opt onEscKeyDown,
        "onDismiss": Js.Null_undefined.from_opt onDismiss,
        "onClick": Js.Null_undefined.from_opt onClick,
        "onChange": Js.Null_undefined.from_opt onChange,
        "okLabel": Js.Null_undefined.from_opt okLabel,
        "label": Js.Null_undefined.from_opt label,
        "inputClassName": Js.Null_undefined.from_opt inputClassName,
        "icon": Js.Null_undefined.from_opt icon,
        "format": Js.Null_undefined.from_opt format,
        "error": Js.Null_undefined.from_opt error,
        "cancelLabel": Js.Null_undefined.from_opt cancelLabel,
        "active": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean active)
      }
      children;
};

module TabContent = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/tabs/TabContent"];
  let make
      theme::(theme: option Js.t {..})=?
      tabIndex::(tabIndex: option float)=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      className::(className: option string)=?
      active::(active: option bool)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "tabIndex": Js.Null_undefined.from_opt tabIndex,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "className": Js.Null_undefined.from_opt className,
        "active": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean active)
      }
      children;
};

module FontIcon = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/font_icon/FontIcon"];
  let make
      value::(value: option ReasonReact.reactElement)=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      className::(className: option string)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "value": Js.Null_undefined.from_opt value,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "className": Js.Null_undefined.from_opt className
      }
      children;
};

module Slider = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/slider/Slider"];
  let make
      value::(value: option float)=?
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      step::(step: option float)=?
      snaps::(snaps: option bool)=?
      pinned::(pinned: option bool)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStop::(onDragStop: option (ReactEventRe.Synthetic.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      onChange::(onChange: option (ReactEventRe.Form.t => unit))=?
      min::(min: option float)=?
      max::(max: option float)=?
      editable::(editable: option bool)=?
      disabled::(disabled: option bool)=?
      className::(className: option string)=?
      buffer::(buffer: option float)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "value": Js.Null_undefined.from_opt value,
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "step": Js.Null_undefined.from_opt step,
        "snaps": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean snaps),
        "pinned": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean pinned),
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStop": Js.Null_undefined.from_opt onDragStop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "onChange": Js.Null_undefined.from_opt onChange,
        "min": Js.Null_undefined.from_opt min,
        "max": Js.Null_undefined.from_opt max,
        "editable": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean editable),
        "disabled": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean disabled),
        "className": Js.Null_undefined.from_opt className,
        "buffer": Js.Null_undefined.from_opt buffer
      }
      children;
};

module Dropdown = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/dropdown/Dropdown"];
  let make
      value::(value: option string)=?
      theme::(theme: option Js.t {..})=?
      template::(template: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      source::(source: Js.t {..})
      required::(required: option bool)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onFocus::(onFocus: option (ReactEventRe.Focus.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      onChange::(onChange: option (ReactEventRe.Form.t => unit))=?
      onBlur::(onBlur: option (ReactEventRe.Focus.t => unit))=?
      name::(name: option string)=?
      label::(label: option string)=?
      error::(error: option string)=?
      disabled::(disabled: option bool)=?
      className::(className: option string)=?
      auto::(auto: option bool)=?
      allowBlank::(allowBlank: option bool)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "value": Js.Null_undefined.from_opt value,
        "theme": Js.Null_undefined.from_opt theme,
        "template": Js.Null_undefined.from_opt template,
        "style": Js.Null_undefined.from_opt style,
        "source": source,
        "required": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean required),
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onFocus": Js.Null_undefined.from_opt onFocus,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "onChange": Js.Null_undefined.from_opt onChange,
        "onBlur": Js.Null_undefined.from_opt onBlur,
        "name": Js.Null_undefined.from_opt name,
        "label": Js.Null_undefined.from_opt label,
        "error": Js.Null_undefined.from_opt error,
        "disabled": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean disabled),
        "className": Js.Null_undefined.from_opt className,
        "auto": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean auto),
        "allowBlank": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean allowBlank)
      }
      children;
};

module Dialog = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/dialog/Dialog"];
  let make
      type_::(type_: option string)=?
      title::(title: option string)=?
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onOverlayMouseUp::(onOverlayMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onOverlayMouseMove::(onOverlayMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onOverlayMouseDown::(onOverlayMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onOverlayClick::(onOverlayClick: option (ReactEventRe.Mouse.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onEscKeyDown::(onEscKeyDown: option (ReactEventRe.Keyboard.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      className::(className: option string)=?
      active::(active: option bool)=?
      actions::(actions: option Js.t {..})=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "type_": Js.Null_undefined.from_opt type_,
        "title": Js.Null_undefined.from_opt title,
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onOverlayMouseUp": Js.Null_undefined.from_opt onOverlayMouseUp,
        "onOverlayMouseMove": Js.Null_undefined.from_opt onOverlayMouseMove,
        "onOverlayMouseDown": Js.Null_undefined.from_opt onOverlayMouseDown,
        "onOverlayClick": Js.Null_undefined.from_opt onOverlayClick,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onEscKeyDown": Js.Null_undefined.from_opt onEscKeyDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "className": Js.Null_undefined.from_opt className,
        "active": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean active),
        "actions": Js.Null_undefined.from_opt actions
      }
      children;
};

module ListItemAction = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/list/ListItemAction"];
  let make
      theme::(theme: option Js.t {..})=?
      action::(action: option ReasonReact.reactElement)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "theme": Js.Null_undefined.from_opt theme,
        "action": Js.Null_undefined.from_opt action
      }
      children;
};

module NavDrawer = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/layout/NavDrawer"];
  let make
      withOverlay::(withOverlay: option bool)=?
      type_::(type_: option string)=?
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      pinned::(pinned: option bool)=?
      permanentAt::(permanentAt: option string)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onOverlayClick::(onOverlayClick: option (ReactEventRe.Mouse.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      insideTree::(insideTree: option bool)=?
      clipped::(clipped: option bool)=?
      className::(className: option string)=?
      active::(active: option bool)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "withOverlay": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean withOverlay),
        "type_": Js.Null_undefined.from_opt type_,
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "pinned": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean pinned),
        "permanentAt": Js.Null_undefined.from_opt permanentAt,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onOverlayClick": Js.Null_undefined.from_opt onOverlayClick,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "insideTree": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean insideTree),
        "clipped": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean clipped),
        "className": Js.Null_undefined.from_opt className,
        "active": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean active)
      }
      children;
};

module Sidebar = {
  external reactClass : ReasonReact.reactClass =
    "default" [@@bs.module "react-toolbox/lib/layout/Sidebar"];
  let make
      withOverlay::(withOverlay: option bool)=?
      width::(width: option float)=?
      type_::(type_: option string)=?
      theme::(theme: option Js.t {..})=?
      style::(style: option ReactDOMRe.style)=?
      pinned::(pinned: option bool)=?
      permanentAt::(permanentAt: option string)=?
      onTouchStart::(onTouchStart: option (ReactEventRe.Touch.t => unit))=?
      onTouchMove::(onTouchMove: option (ReactEventRe.Touch.t => unit))=?
      onTouchEnd::(onTouchEnd: option (ReactEventRe.Touch.t => unit))=?
      onTouchCancel::(onTouchCancel: option (ReactEventRe.Touch.t => unit))=?
      onOverlayClick::(onOverlayClick: option (ReactEventRe.Mouse.t => unit))=?
      onMouseUp::(onMouseUp: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOver::(onMouseOver: option (ReactEventRe.Mouse.t => unit))=?
      onMouseOut::(onMouseOut: option (ReactEventRe.Mouse.t => unit))=?
      onMouseMove::(onMouseMove: option (ReactEventRe.Mouse.t => unit))=?
      onMouseLeave::(onMouseLeave: option (ReactEventRe.Mouse.t => unit))=?
      onMouseEnter::(onMouseEnter: option (ReactEventRe.Mouse.t => unit))=?
      onMouseDown::(onMouseDown: option (ReactEventRe.Mouse.t => unit))=?
      onDrop::(onDrop: option (ReactEventRe.Mouse.t => unit))=?
      onDragStart::(onDragStart: option (ReactEventRe.Mouse.t => unit))=?
      onDragOver::(onDragOver: option (ReactEventRe.Mouse.t => unit))=?
      onDragLeave::(onDragLeave: option (ReactEventRe.Mouse.t => unit))=?
      onDragExit::(onDragExit: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnter::(onDragEnter: option (ReactEventRe.Mouse.t => unit))=?
      onDragEnd::(onDragEnd: option (ReactEventRe.Mouse.t => unit))=?
      onDrag::(onDrag: option (ReactEventRe.Mouse.t => unit))=?
      onDoubleClick::(onDoubleClick: option (ReactEventRe.Mouse.t => unit))=?
      onContextMenu::(onContextMenu: option (ReactEventRe.Mouse.t => unit))=?
      onClick::(onClick: option (ReactEventRe.Mouse.t => unit))=?
      insideTree::(insideTree: option bool)=?
      clipped::(clipped: option bool)=?
      className::(className: option string)=?
      active::(active: option bool)=?
      children =>
    ReasonReact.wrapJsForReason
      ::reactClass
      props::{
        "withOverlay": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean withOverlay),
        "width": Js.Null_undefined.from_opt width,
        "type_": Js.Null_undefined.from_opt type_,
        "theme": Js.Null_undefined.from_opt theme,
        "style": Js.Null_undefined.from_opt style,
        "pinned": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean pinned),
        "permanentAt": Js.Null_undefined.from_opt permanentAt,
        "onTouchStart": Js.Null_undefined.from_opt onTouchStart,
        "onTouchMove": Js.Null_undefined.from_opt onTouchMove,
        "onTouchEnd": Js.Null_undefined.from_opt onTouchEnd,
        "onTouchCancel": Js.Null_undefined.from_opt onTouchCancel,
        "onOverlayClick": Js.Null_undefined.from_opt onOverlayClick,
        "onMouseUp": Js.Null_undefined.from_opt onMouseUp,
        "onMouseOver": Js.Null_undefined.from_opt onMouseOver,
        "onMouseOut": Js.Null_undefined.from_opt onMouseOut,
        "onMouseMove": Js.Null_undefined.from_opt onMouseMove,
        "onMouseLeave": Js.Null_undefined.from_opt onMouseLeave,
        "onMouseEnter": Js.Null_undefined.from_opt onMouseEnter,
        "onMouseDown": Js.Null_undefined.from_opt onMouseDown,
        "onDrop": Js.Null_undefined.from_opt onDrop,
        "onDragStart": Js.Null_undefined.from_opt onDragStart,
        "onDragOver": Js.Null_undefined.from_opt onDragOver,
        "onDragLeave": Js.Null_undefined.from_opt onDragLeave,
        "onDragExit": Js.Null_undefined.from_opt onDragExit,
        "onDragEnter": Js.Null_undefined.from_opt onDragEnter,
        "onDragEnd": Js.Null_undefined.from_opt onDragEnd,
        "onDrag": Js.Null_undefined.from_opt onDrag,
        "onDoubleClick": Js.Null_undefined.from_opt onDoubleClick,
        "onContextMenu": Js.Null_undefined.from_opt onContextMenu,
        "onClick": Js.Null_undefined.from_opt onClick,
        "insideTree": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean insideTree),
        "clipped": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean clipped),
        "className": Js.Null_undefined.from_opt className,
        "active": Js.Null_undefined.from_opt (optionMap Js.Boolean.to_js_boolean active)
      }
      children;
};
