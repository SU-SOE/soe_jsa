<?php
/**
 * @file
 * soe_jsa_related_events_upcoming_layout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function soe_jsa_related_events_upcoming_layout_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
