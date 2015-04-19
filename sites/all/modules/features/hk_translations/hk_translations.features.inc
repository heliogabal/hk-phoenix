<?php
/**
 * @file
 * hk_translations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hk_translations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_tmgmt_translator().
 */
function hk_translations_default_tmgmt_translator() {
  $items = array();
  $items['local'] = entity_import('tmgmt_translator', '{
    "name" : "local",
    "label" : "Local Translator (auto created)",
    "description" : "Allows local users to process translation jobs.",
    "weight" : "0",
    "plugin" : "local",
    "settings" : { "auto_accept" : 0, "allow_all" : 1 }
  }');
  return $items;
}
