let () =
  let component_list = React_toolbox_parser.parse
      "../../../output/react-toolbox.typedoc.json" in

  React_toolbox_writer.write_re
    "../../../output/reactToolbox.re"
    component_list;

  React_toolbox_writer.write_rei
    "../../../output/reactToolbox.rei"
    component_list;

