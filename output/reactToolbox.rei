module ThemeProvider: {type theme; let make: theme::theme => array ReasonReact.reactElement;};

module IconMenu: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    selected::option Js.t {..}? =>
    selectable::option bool? =>
    position::option string? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onShow::option (ReactEventRe.Synthetic.t => unit)? =>
    onSelect::option (ReactEventRe.Selection.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onHide::option (ReactEventRe.Synthetic.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    menuRipple::option bool? =>
    iconRipple::option bool? =>
    icon::option ReasonReact.reactElement? =>
    className::option string? =>
    array ReasonReact.reactElement;
};

module ListItemText: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    primary::option bool? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    className::option string? =>
    array ReasonReact.reactElement;
};

module Overlay: {
  let make:
    theme::option Js.t {..}? =>
    onEscKeyDown::option (ReactEventRe.Keyboard.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    invisible::option bool? =>
    className::option string? =>
    active::option bool? =>
    array ReasonReact.reactElement;
};

module Snackbar: {
  let make:
    type_::option string? =>
    timeout::option float? =>
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onTimeout::option (ReactEventRe.Synthetic.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    label::option string? =>
    className::option string? =>
    active::option bool? =>
    action::option string? =>
    array ReasonReact.reactElement;
};

module ListItemActions: {
  let make: type_::option string? => theme::option Js.t {..}? => array ReasonReact.reactElement;
};

module DatePicker: {
  let make:
    value::option string? =>
    theme::option Js.t {..}? =>
    sundayFirstDayOfWeek::option bool? =>
    style::option ReactDOMRe.style? =>
    readonly::option bool? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onOverlayClick::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onKeyPress::option (ReactEventRe.Keyboard.t => unit)? =>
    onEscKeyDown::option (ReactEventRe.Keyboard.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onDismiss::option (ReactEventRe.Synthetic.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    onChange::option (ReactEventRe.Form.t => unit)? =>
    okLabel::option string? =>
    name::option string? =>
    minDate::option Js.t {..}? =>
    maxDate::option Js.t {..}? =>
    locale::option string? =>
    label::option string? =>
    inputFormat::option Js.t {..}? =>
    inputClassName::option string? =>
    icon::option ReasonReact.reactElement? =>
    error::option string? =>
    enabledDates::option Js.t {..}? =>
    disabledDates::option Js.t {..}? =>
    className::option string? =>
    cancelLabel::option string? =>
    autoOk::option bool? =>
    active::option bool? =>
    array ReasonReact.reactElement;
};

module TableHead: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    selected::option bool? =>
    selectable::option bool? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onSelect::option (ReactEventRe.Selection.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    multiSelectable::option bool? =>
    displaySelect::option bool? =>
    className::option string? =>
    array ReasonReact.reactElement;
};

module ListItemContent: {
  let make:
    type_::option string? =>
    theme::option Js.t {..}? =>
    legend::option string? =>
    caption::option ReasonReact.reactElement? =>
    array ReasonReact.reactElement;
};

module RadioButton: {
  let make:
    value::option Js.t {..}? =>
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onFocus::option (ReactEventRe.Focus.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    onChange::option (ReactEventRe.Form.t => unit)? =>
    onBlur::option (ReactEventRe.Focus.t => unit)? =>
    name::option string? =>
    label::option ReasonReact.reactElement? =>
    disabled::option bool? =>
    className::option string? =>
    checked::option bool? =>
    array ReasonReact.reactElement;
};

module List: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    selectable::option bool? =>
    ripple::option bool? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    className::option string? =>
    array ReasonReact.reactElement;
};

module Chip: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onDeleteClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    deletable::option bool? =>
    className::option string? =>
    array ReasonReact.reactElement;
};

module BrowseButton: {
  let make:
    type_::option string? =>
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    ripple::option bool? =>
    raised::option bool? =>
    primary::option bool? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    neutral::option bool? =>
    mini::option bool? =>
    label::option string? =>
    inverse::option bool? =>
    icon::option ReasonReact.reactElement? =>
    href::option string? =>
    floating::option bool? =>
    flat::option bool? =>
    disabled::option bool? =>
    className::option string? =>
    accent::option bool? =>
    array ReasonReact.reactElement;
};

module IconButton: {
  let make:
    type_::option string? =>
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    ripple::option bool? =>
    primary::option bool? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    neutral::option bool? =>
    inverse::option bool? =>
    icon::option ReasonReact.reactElement? =>
    href::option string? =>
    disabled::option bool? =>
    className::option string? =>
    accent::option bool? =>
    array ReasonReact.reactElement;
};

module Navigation: {
  let make:
    type_::option string? =>
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    routes::option Js.t {..}? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    className::option string? =>
    actions::option Js.t {..}? =>
    array ReasonReact.reactElement;
};

module Switch: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onFocus::option (ReactEventRe.Focus.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    onChange::option (ReactEventRe.Form.t => unit)? =>
    onBlur::option (ReactEventRe.Focus.t => unit)? =>
    name::option string? =>
    label::option string? =>
    disabled::option bool? =>
    className::option string? =>
    checked::option bool? =>
    array ReasonReact.reactElement;
};

module ListSubHeader: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    className::option string? =>
    caption::option string? =>
    array ReasonReact.reactElement;
};

module Avatar: {
  let make:
    title::option string? =>
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    image::option ReasonReact.reactElement? =>
    icon::option ReasonReact.reactElement? =>
    cover::option bool? =>
    className::option string? =>
    array ReasonReact.reactElement;
};

module ListCheckbox: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onFocus::option (ReactEventRe.Focus.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    onChange::option (ReactEventRe.Form.t => unit)? =>
    onBlur::option (ReactEventRe.Focus.t => unit)? =>
    name::option string? =>
    legend::option string? =>
    disabled::option bool? =>
    className::option string? =>
    checked::option bool? =>
    caption::option string? =>
    array ReasonReact.reactElement;
};

module MenuDivider: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    className::option string? =>
    array ReasonReact.reactElement;
};

module TableRow: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    selected::option bool? =>
    selectable::option bool? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onSelect::option (ReactEventRe.Selection.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    idx::option float? =>
    className::option string? =>
    array ReasonReact.reactElement;
};

module CardTitle: {
  let make:
    title::option ReasonReact.reactElement? =>
    theme::option Js.t {..}? =>
    subtitle::option ReasonReact.reactElement? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    className::option string? =>
    avatar::option ReasonReact.reactElement? =>
    array ReasonReact.reactElement;
};

module RadioGroup: {
  let make:
    value::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    onChange::option (ReactEventRe.Form.t => unit)? =>
    name::option string? =>
    disabled::option bool? =>
    className::option string? =>
    array ReasonReact.reactElement;
};

module Button: {
  let make:
    type_::option string? =>
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    ripple::option bool? =>
    raised::option bool? =>
    primary::option bool? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    neutral::option bool? =>
    mini::option bool? =>
    label::option string? =>
    inverse::option bool? =>
    icon::option ReasonReact.reactElement? =>
    href::option string? =>
    floating::option bool? =>
    flat::option bool? =>
    disabled::option bool? =>
    className::option string? =>
    accent::option bool? =>
    array ReasonReact.reactElement;
};

module CardText: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    className::option string? =>
    array ReasonReact.reactElement;
};

module Card: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    raised::option bool? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    className::option string? =>
    array ReasonReact.reactElement;
};

module AppBar: {
  let make:
    title::option string? =>
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    scrollHide::option bool? =>
    rightIcon::option ReasonReact.reactElement? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onRightIconClick::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onLeftIconClick::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    leftIcon::option ReasonReact.reactElement? =>
    flat::option bool? =>
    fixed::option bool? =>
    className::option string? =>
    array ReasonReact.reactElement;
};

module Autocomplete: {
  let make:
    value::option Js.t {..}? =>
    type_::option string? =>
    theme::option Js.t {..}? =>
    suggestionMatch::option string? =>
    style::option ReactDOMRe.style? =>
    source::option Js.t {..}? =>
    showSuggestionsWhenValueIsSet::option bool? =>
    showSelectedWhenNotInSource::option bool? =>
    selectedPosition::option string? =>
    rows::option float? =>
    required::option bool? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onQueryChange::option (ReactEventRe.Synthetic.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onKeyUp::option (ReactEventRe.Keyboard.t => unit)? =>
    onKeyPress::option (ReactEventRe.Keyboard.t => unit)? =>
    onKeyDown::option (ReactEventRe.Keyboard.t => unit)? =>
    onFocus::option (ReactEventRe.Focus.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    onChange::option (ReactEventRe.Form.t => unit)? =>
    onBlur::option (ReactEventRe.Focus.t => unit)? =>
    name::option string? =>
    multiple::option bool? =>
    multiline::option bool? =>
    maxLength::option float? =>
    label::option ReasonReact.reactElement? =>
    keepFocusOnChange::option bool? =>
    icon::option ReasonReact.reactElement? =>
    hint::option ReasonReact.reactElement? =>
    floating::option bool? =>
    error::option ReasonReact.reactElement? =>
    disabled::option bool? =>
    direction::option string? =>
    className::option string? =>
    allowCreate::option bool? =>
    array ReasonReact.reactElement;
};

module TableCell: {
  let make:
    theme::option Js.t {..}? =>
    tagName::option string? =>
    style::option ReactDOMRe.style? =>
    sorted::option string? =>
    row::option float? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    numeric::option bool? =>
    column::option float? =>
    className::option string? =>
    array ReasonReact.reactElement;
};

module Menu: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    selected::option Js.t {..}? =>
    selectable::option bool? =>
    ripple::option bool? =>
    position::option string? =>
    outline::option bool? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onShow::option (ReactEventRe.Synthetic.t => unit)? =>
    onSelect::option (ReactEventRe.Selection.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onHide::option (ReactEventRe.Synthetic.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    className::option string? =>
    active::option bool? =>
    array ReasonReact.reactElement;
};

module CardActions: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    className::option string? =>
    array ReasonReact.reactElement;
};

module MenuItem: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    shortcut::option string? =>
    selected::option bool? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    icon::option ReasonReact.reactElement? =>
    disabled::option bool? =>
    className::option string? =>
    caption::string =>
    array ReasonReact.reactElement;
};

module ListItemLayout: {
  let make:
    to_::option string? =>
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    selectable::option bool? =>
    rightIcon::option string? =>
    rightActions::option Js.t {..}? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    legend::option string? =>
    leftIcon::option string? =>
    leftActions::option Js.t {..}? =>
    itemContent::option Js.t {..}? =>
    disabled::option bool? =>
    className::option string? =>
    caption::option string? =>
    avatar::option string? =>
    array ReasonReact.reactElement;
};

module Link: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    label::option string? =>
    icon::option ReasonReact.reactElement? =>
    href::option string? =>
    count::option float? =>
    className::option string? =>
    active::option bool? =>
    array ReasonReact.reactElement;
};

module ListDivider: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    inset::option bool? =>
    className::option string? =>
    array ReasonReact.reactElement;
};

module Portal: {
  let make:
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    lockBody::option bool? =>
    container::option Js.t {..}? =>
    className::option string? =>
    array ReasonReact.reactElement;
};

module Tabs: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    onChange::option (ReactEventRe.Form.t => unit)? =>
    inverse::option bool? =>
    index::option float? =>
    hideMode::option string? =>
    fixed::option bool? =>
    disableAnimatedBottomBorder::option bool? =>
    className::option string? =>
    array ReasonReact.reactElement;
};

module Table: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    selectable::option bool? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onRowSelect::option (ReactEventRe.Synthetic.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    multiSelectable::option bool? =>
    className::option string? =>
    array ReasonReact.reactElement;
};

module Panel: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    className::option string? =>
    bodyScroll::option bool? =>
    array ReasonReact.reactElement;
};

module ProgressBar: {
  let make:
    value::option float? =>
    type_::option string? =>
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    multicolor::option bool? =>
    mode::option string? =>
    min::option float? =>
    max::option float? =>
    disabled::option bool? =>
    className::option string? =>
    buffer::option float? =>
    array ReasonReact.reactElement;
};

module CardMedia: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    image::option ReasonReact.reactElement? =>
    contentOverlay::option bool? =>
    color::option string? =>
    className::option string? =>
    aspectRatio::option string? =>
    array ReasonReact.reactElement;
};

module Checkbox: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    onChange::option (ReactEventRe.Form.t => unit)? =>
    onBlur::option (ReactEventRe.Focus.t => unit)? =>
    name::option string? =>
    label::option ReasonReact.reactElement? =>
    disabled::option bool? =>
    className::option string? =>
    checked::option bool? =>
    array ReasonReact.reactElement;
};

module Drawer: {
  let make:
    withOverlay::option bool? =>
    type_::option string? =>
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onOverlayClick::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    insideTree::option bool? =>
    className::option string? =>
    active::option bool? =>
    array ReasonReact.reactElement;
};

module Tab: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    onActive::option (ReactEventRe.Synthetic.t => unit)? =>
    label::string =>
    icon::option ReasonReact.reactElement? =>
    hidden::option bool? =>
    disabled::option bool? =>
    className::option string? =>
    activeClassName::option string? =>
    active::option bool? =>
    array ReasonReact.reactElement;
};

module Input: {
  let make:
    value::option Js.t {..}? =>
    type_::option string? =>
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    rows::option float? =>
    required::option bool? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onKeyUp::option (ReactEventRe.Keyboard.t => unit)? =>
    onKeyPress::option (ReactEventRe.Keyboard.t => unit)? =>
    onKeyDown::option (ReactEventRe.Keyboard.t => unit)? =>
    onFocus::option (ReactEventRe.Focus.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    onChange::option (ReactEventRe.Form.t => unit)? =>
    onBlur::option (ReactEventRe.Focus.t => unit)? =>
    name::option string? =>
    multiline::option bool? =>
    maxLength::option float? =>
    label::option ReasonReact.reactElement? =>
    icon::option ReasonReact.reactElement? =>
    hint::option ReasonReact.reactElement? =>
    floating::option bool? =>
    error::option ReasonReact.reactElement? =>
    disabled::option bool? =>
    className::option string? =>
    array ReasonReact.reactElement;
};

module Layout: {
  let make:
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    className::option string? =>
    array ReasonReact.reactElement;
};

module TimePicker: {
  let make:
    value::option Js.t {..}? =>
    theme::option Js.t {..}? =>
    readonly::option bool? =>
    onOverlayClick::option (ReactEventRe.Mouse.t => unit)? =>
    onKeyPress::option (ReactEventRe.Keyboard.t => unit)? =>
    onEscKeyDown::option (ReactEventRe.Keyboard.t => unit)? =>
    onDismiss::option (ReactEventRe.Synthetic.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    onChange::option (ReactEventRe.Form.t => unit)? =>
    okLabel::option string? =>
    label::option string? =>
    inputClassName::option string? =>
    icon::option ReasonReact.reactElement? =>
    format::option string? =>
    error::option string? =>
    cancelLabel::option string? =>
    active::option bool? =>
    array ReasonReact.reactElement;
};

module TabContent: {
  let make:
    theme::option Js.t {..}? =>
    tabIndex::option float? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    className::option string? =>
    active::option bool? =>
    array ReasonReact.reactElement;
};

module FontIcon: {
  let make:
    value::option ReasonReact.reactElement? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    className::option string? =>
    array ReasonReact.reactElement;
};

module Slider: {
  let make:
    value::option float? =>
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    step::option float? =>
    snaps::option bool? =>
    pinned::option bool? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStop::option (ReactEventRe.Synthetic.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    onChange::option (ReactEventRe.Form.t => unit)? =>
    min::option float? =>
    max::option float? =>
    editable::option bool? =>
    disabled::option bool? =>
    className::option string? =>
    buffer::option float? =>
    array ReasonReact.reactElement;
};

module Dropdown: {
  let make:
    value::option string? =>
    theme::option Js.t {..}? =>
    template::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    source::Js.t {..} =>
    required::option bool? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onFocus::option (ReactEventRe.Focus.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    onChange::option (ReactEventRe.Form.t => unit)? =>
    onBlur::option (ReactEventRe.Focus.t => unit)? =>
    name::option string? =>
    label::option string? =>
    error::option string? =>
    disabled::option bool? =>
    className::option string? =>
    auto::option bool? =>
    allowBlank::option bool? =>
    array ReasonReact.reactElement;
};

module Dialog: {
  let make:
    type_::option string? =>
    title::option string? =>
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onOverlayMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onOverlayMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onOverlayMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onOverlayClick::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onEscKeyDown::option (ReactEventRe.Keyboard.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    className::option string? =>
    active::option bool? =>
    actions::option Js.t {..}? =>
    array ReasonReact.reactElement;
};

module ListItemAction: {
  let make:
    theme::option Js.t {..}? =>
    action::option ReasonReact.reactElement? =>
    array ReasonReact.reactElement;
};

module NavDrawer: {
  let make:
    withOverlay::option bool? =>
    type_::option string? =>
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    pinned::option bool? =>
    permanentAt::option string? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onOverlayClick::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    insideTree::option bool? =>
    clipped::option bool? =>
    className::option string? =>
    active::option bool? =>
    array ReasonReact.reactElement;
};

module Sidebar: {
  let make:
    withOverlay::option bool? =>
    width::option float? =>
    type_::option string? =>
    theme::option Js.t {..}? =>
    style::option ReactDOMRe.style? =>
    pinned::option bool? =>
    permanentAt::option string? =>
    onTouchStart::option (ReactEventRe.Touch.t => unit)? =>
    onTouchMove::option (ReactEventRe.Touch.t => unit)? =>
    onTouchEnd::option (ReactEventRe.Touch.t => unit)? =>
    onTouchCancel::option (ReactEventRe.Touch.t => unit)? =>
    onOverlayClick::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseUp::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOver::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseOut::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseMove::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onMouseDown::option (ReactEventRe.Mouse.t => unit)? =>
    onDrop::option (ReactEventRe.Mouse.t => unit)? =>
    onDragStart::option (ReactEventRe.Mouse.t => unit)? =>
    onDragOver::option (ReactEventRe.Mouse.t => unit)? =>
    onDragLeave::option (ReactEventRe.Mouse.t => unit)? =>
    onDragExit::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnter::option (ReactEventRe.Mouse.t => unit)? =>
    onDragEnd::option (ReactEventRe.Mouse.t => unit)? =>
    onDrag::option (ReactEventRe.Mouse.t => unit)? =>
    onDoubleClick::option (ReactEventRe.Mouse.t => unit)? =>
    onContextMenu::option (ReactEventRe.Mouse.t => unit)? =>
    onClick::option (ReactEventRe.Mouse.t => unit)? =>
    insideTree::option bool? =>
    clipped::option bool? =>
    className::option string? =>
    active::option bool? =>
    array ReasonReact.reactElement;
};
