Reason bindings generator for react-toolbox
-------------------------------------------

This tool generates the Reason bindings for
[react-toolbox](http://react-toolbox.io). It works on the JSON output
generated by [typedoc](http://typedoc.org). It extracts all components (that
extend `React.Component<P,S>`), and generates `.re` modules (and `.rei`
module signatures), getting all props from the first type parameter.

### Prerequisites

1. If you don't have the OCaml compiler (or OPAM) installed, please [install
   it](http://opam.ocaml.org/doc/Install.html).

       opam install jbuilder yojson

2. Install
   [reason-cli](https://reasonml.github.io/guide/editor-tools/global-installation#recommended-through-npmyarn).

3. Install JS dependencies:

       yarn install

### How to (re)generate bindings

    yarn typedoc
    jbuilder clean
    jbuilder runtest
    yarn refmt

Check the output subdirectory: You should find `reactToolbox.re`,
`reactToolbox.rei`, `reactToolboxBundled.re`, `reactToolboxBundled.rei`.

