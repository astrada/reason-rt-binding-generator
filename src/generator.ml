let () =
  let component_list = React_toolbox_parser.parse
      "../../../output/react-toolbox.typedoc.json" in

  React_toolbox_writer.write_re ~bundled:false
    "../../../output/reactToolbox.re"
    component_list;
  React_toolbox_writer.write_rei ~bundled:false
    "../../../output/reactToolbox.rei"
    component_list;

  React_toolbox_writer.write_re ~bundled:true
    "../../../output/reactToolboxBundled.re"
    component_list;
  React_toolbox_writer.write_rei ~bundled:true
    "../../../output/reactToolboxBundled.rei"
    component_list

