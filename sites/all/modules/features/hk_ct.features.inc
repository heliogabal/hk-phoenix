<?php
/**
 * @file
 * hk_ct.features.inc
 */

/**
 * Implements hook_default_Workflow().
 */
function hk_ct_default_Workflow() {
  $workflows = array();

  // Exported workflow: 'draft_ready_published_archived'
  $workflows['draft_ready_published_archived'] = entity_import('Workflow', '{
    "name" : "draft_ready_published_archived",
    "tab_roles" : { "6" : "6", "3" : "3" },
    "options" : {
      "name_as_title" : "0",
      "options" : "buttons",
      "schedule" : "1",
      "schedule_timezone" : "0",
      "comment_log_node" : "1",
      "comment_log_tab" : "1",
      "watchdog_log" : "1",
      "history_tab_show" : 1
    },
    "states" : {
      "1" : {"sid":"1","wid":"1","weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "2" : {"sid":"2","wid":"1","weight":"-20","sysid":"0","state":"Draft","status":"1","name":"draft"},
      "3" : {"sid":"3","wid":"1","weight":"-19","sysid":"0","state":"Ready","status":"1","name":"ready"},
      "4" : {"sid":"4","wid":"1","weight":"-18","sysid":"0","state":"Active","status":"1","name":"active"},
      "5" : {"sid":"5","wid":"1","weight":"-17","sysid":"0","state":"Archived","status":"1","name":"archived"},
      "6" : {"sid":"6","wid":"1","weight":"-16","sysid":"0","state":"Sold","status":"1","name":"sold"}
    },
    "transitions" : {
      "1" : {"tid":"1","sid":"1","target_sid":"2","roles":{"-1":-1,"6":6,"3":3},"wid":"1","name":"1_2","label":"Entwurf speichern"},
      "2" : {"tid":"2","sid":"1","target_sid":"3","roles":{"-1":-1,"6":6,"3":3},"wid":"1","name":"1_3","label":"Fertig zur Ver\\u00f6ffentlichung"},
      "3" : {"tid":"3","sid":"2","target_sid":"2","roles":{"-1":-1,"6":6,"3":3},"wid":"1","name":"2_2","label":"Speichern"},
      "4" : {"tid":"4","sid":"2","target_sid":"3","roles":{"-1":-1,"6":6,"3":3},"wid":"1","name":"2_3","label":"Fertig zur Ver\\u00f6ffentlichung"},
      "5" : {"tid":"5","sid":"3","target_sid":"3","roles":{"-1":-1,"6":6,"3":3},"wid":"1","name":"3_3","label":"Speichern"},
      "6" : {"tid":"6","sid":"3","target_sid":"4","roles":{"3":3},"wid":"1","name":"3_4","label":"Ver\\u00f6ffentlichen"},
      "7" : {"tid":"7","sid":"3","target_sid":"5","roles":{"3":3},"wid":"1","name":"3_5","label":"Archivieren"},
      "8" : {"tid":"8","sid":"3","target_sid":"6","roles":{"3":3},"wid":"1","name":"3_6","label":"Verkauft"},
      "23" : {"tid":"23","sid":"4","target_sid":"2","roles":{"3":3},"wid":"1","name":"4_2","label":"Setze zur\\u00fcck auf Entwurf"},
      "9" : {"tid":"9","sid":"4","target_sid":"4","roles":{"-1":-1,"6":6,"3":3},"wid":"1","name":"4_4","label":"Speichern"},
      "10" : {"tid":"10","sid":"4","target_sid":"5","roles":{"3":3},"wid":"1","name":"4_5","label":"Archivieren"},
      "11" : {"tid":"11","sid":"4","target_sid":"6","roles":{"3":3},"wid":"1","name":"4_6","label":"Verkauft"},
      "12" : {"tid":"12","sid":"5","target_sid":"2","roles":{"3":3},"wid":"1","name":"5_2","label":"Save as Draft"},
      "13" : {"tid":"13","sid":"5","target_sid":"4","roles":{"3":3},"wid":"1","name":"5_4","label":"Erneut Ver\\u00f6ffentlichen"},
      "14" : {"tid":"14","sid":"5","target_sid":"5","roles":{"-1":-1,"6":6,"3":3},"wid":"1","name":"5_5","label":"Speichern"},
      "15" : {"tid":"15","sid":"5","target_sid":"6","roles":{"3":3},"wid":"1","name":"5_6","label":"Verkauft"},
      "16" : {"tid":"16","sid":"6","target_sid":"2","roles":{"3":3},"wid":"1","name":"6_2","label":"Save as Draft"},
      "17" : {"tid":"17","sid":"6","target_sid":"4","roles":{"3":3},"wid":"1","name":"6_4","label":"Erneut Ver\\u00f6ffentlichen"},
      "18" : {"tid":"18","sid":"6","target_sid":"5","roles":{"3":3},"wid":"1","name":"6_5","label":"Archivieren"},
      "19" : {"tid":"19","sid":"6","target_sid":"6","roles":{"-1":-1,"6":6,"3":3},"wid":"1","name":"6_6","label":"Speichern"}
    },
    "label" : "Draft-Ready-Published-Archived",
    "typeMap" : [],
    "wid_original" : "1",
    "system_roles" : {
      "-1" : "(author)",
      "1" : "anonymous user",
      "2" : "authenticated user",
      "4" : "administrator",
      "6" : "admintooluser",
      "5" : "Nutzer anlegen",
      "7" : "\\u00dcbersetzen",
      "3" : "Editor"
    }
  }');

  return $workflows;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function hk_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "flexslider_picture" && $api == "flexslider_picture_optionset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hk_ct_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function hk_ct_flag_default_flags() {
  $flags = array();
  // Exported flag: "Favoriten".
  $flags['merken'] = array(
    'entity_type' => 'node',
    'title' => 'Favoriten',
    'global' => 0,
    'types' => array(
      0 => 'apartment',
    ),
    'flag_short' => 'Add to favorites',
    'flag_long' => 'add apartment to your personal favorites list',
    'flag_message' => 'apartment added',
    'unflag_short' => 'Remove from favorites',
    'unflag_long' => '',
    'unflag_message' => 'apartment removed',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'token' => 0,
      'map_popup' => 0,
      'project' => 0,
      'tile' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 1,
    'api_version' => 3,
    'module' => 'hk_ct',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function hk_ct_image_default_styles() {
  $styles = array();

  // Exported image style: makler_thumbnail.
  $styles['makler_thumbnail'] = array(
    'label' => 'Makler Thumbnail',
    'effects' => array(
      4 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 398,
          'height' => 398,
          'keepproportions' => 1,
          'style_name' => 'makler_thumbnail',
        ),
        'weight' => 0,
      ),
      6 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 398,
          'height' => 398,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: map-popup.
  $styles['map-popup'] = array(
    'label' => 'map-popup',
    'effects' => array(
      10 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 255,
          'height' => 188,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: search_teaser_242.
  $styles['search_teaser_242'] = array(
    'label' => 'Search Teaser 242',
    'effects' => array(
      3 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 248,
          'height' => 165,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function hk_ct_node_info() {
  $items = array(
    'apartment' => array(
      'name' => t('Wohnung'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'objekt' => array(
      'name' => t('Objekt'),
      'base' => 'node_content',
      'description' => t('Ein Objekt bezeichnet einen Standort mit gleicher Adresse, in dem unterschiedliche Wohnungstypen vorkommen können. Die gemeinsamen Eigenschaften aller Wohnungen werden im Objekt angelegt und auf die Wohnungen vererbt.'),
      'has_title' => '1',
      'title_label' => t('Überschrift Objekt'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
