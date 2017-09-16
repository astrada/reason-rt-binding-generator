let () =
  let component_list = React_toolbox_parser.parse
      "../../../output/react-toolbox.typedoc.json" in

  React_toolbox_writer.write_re ~bundled:false
    "../../../output/ReactToolbox.re"
    component_list;
  React_toolbox_writer.write_rei ~bundled:false
    "../../../output/ReactToolbox.rei"
    component_list;

  React_toolbox_writer.write_re ~bundled:true
    "../../../output/ReactToolboxBundled.re"
    component_list;
  React_toolbox_writer.write_rei ~bundled:true
    "../../../output/ReactToolboxBundled.rei"
    component_list

