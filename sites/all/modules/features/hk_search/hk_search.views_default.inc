<?php
/**
 * @file
 * hk_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hk_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'karten';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_solr_node_index';
  $view->human_name = 'Karten';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none-accelerated';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_leaflet';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'rendered_entity',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['map'] = 'leaflet-mapbox';
  $handler->display->display_options['style_options']['map_height'] = '600';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = array(
    'field_objekt_wkt' => 'field_objekt_wkt',
  );
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_longitude'] = '';
  $handler->display->display_options['style_options']['default_marker']['default_marker_color'] = 'Icon_House';
  $handler->display->display_options['style_options']['center_option'] = '0';
  $handler->display->display_options['style_options']['tooltips']['marker_tooltip'] = 'field_object_ref_title_field';
  $handler->display->display_options['style_options']['full_screen'] = 0;
  $handler->display->display_options['style_options']['scale_metric'] = 1;
  $handler->display->display_options['style_options']['scale_imperial'] = 0;
  $handler->display->display_options['style_options']['zoom_indicator'] = 0;
  $handler->display->display_options['style_options']['map_reset'] = 0;
  $handler->display->display_options['style_options']['mini_map']['on'] = 0;
  $handler->display->display_options['style_options']['mini_map']['height'] = '100';
  $handler->display->display_options['style_options']['mini_map']['width'] = '150';
  $handler->display->display_options['style_options']['mini_map']['toggle'] = 1;
  $handler->display->display_options['style_options']['mini_map']['zoom_delta'] = '-5';
  $handler->display->display_options['style_options']['cluster_radius'] = '25';
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_differentiator_fields'] = array(
    'field_object_ref_field_bezirk' => 'field_object_ref_field_bezirk',
  );
  $handler->display->display_options['style_options']['cluster_differentiator']['zoom_ranges'] = array(
    1 => '',
  );
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_tooltips'] = 1;
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_outline'] = '1';
  $handler->display->display_options['style_options']['cluster_aggregation']['aggregation_function'] = 'average';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['small'] = '10';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['medium'] = '100';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['large'] = '1000';
  $handler->display->display_options['style_options']['empty_map_center'] = '52.541143, 13.414810';
  $handler->display->display_options['style_options']['map_options']['maxzoom'] = '19';
  $handler->display->display_options['style_options']['map_options']['zoom'] = '12';
  $handler->display->display_options['style_options']['map_options']['scrollwheelzoom'] = '1';
  $handler->display->display_options['style_options']['map_options']['dragging'] = '1';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'We\'re awefully sorry';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results matched your search.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Indexed Node: Object */
  $handler->display->display_options['relationships']['field_object_ref']['id'] = 'field_object_ref';
  $handler->display->display_options['relationships']['field_object_ref']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['relationships']['field_object_ref']['field'] = 'field_object_ref';
  $handler->display->display_options['relationships']['field_object_ref']['label'] = 'Objekt';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Object: Objekt ID (indexed) */
  $handler->display->display_options['fields']['field_object_ref_field_objektid_nunumeric']['id'] = 'field_object_ref_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_object_ref_field_objektid_nunumeric']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_objektid_nunumeric']['field'] = 'field_object_ref_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_object_ref_field_objektid_nunumeric']['label'] = '';
  $handler->display->display_options['fields']['field_object_ref_field_objektid_nunumeric']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_ref_field_objektid_nunumeric']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Apartment No. */
  $handler->display->display_options['fields']['field_apart_no']['id'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_no']['field'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['label'] = '';
  $handler->display->display_options['fields']['field_apart_no']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_no']['element_label_colon'] = FALSE;
  /* Field: Object » Address: Thoroughfare (i.e. Street address) (indexed) */
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['id'] = 'field_object_ref_field_address_thoroughfare';
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['field'] = 'field_object_ref_field_address_thoroughfare';
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['link_to_entity'] = 0;
  /* Field: Object: Borough (indexed) */
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['id'] = 'field_object_ref_field_bezirk';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['field'] = 'field_object_ref_field_bezirk';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['label'] = '';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['alter']['text'] = '<div class="wo"><i class="fa fa-map-marker"></i> [field_object_ref_field_address_thoroughfare], [field_object_ref_field_bezirk]</div>';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['bypass_access'] = 0;
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'field_object_ref';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity']['alter']['text'] = '[rendered_entity]
[field_object_ref_field_bezirk]';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'map_popup';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Indexed Node: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Rooms */
  $handler->display->display_options['fields']['field_apart_rooms']['id'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_rooms']['field'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_rooms']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Node: Living space */
  $handler->display->display_options['fields']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_living_space']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Node: Purchasing price */
  $handler->display->display_options['fields']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['label'] = '';
  $handler->display->display_options['fields']['field_apart_price']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_apart_price']['alter']['text'] = '<tr><td>[field_object_ref_field_objektid_nunumeric]-[field_apart_no] </td><td> [field_apart_rooms] </td><td> [field_apart_living_space] </td><td> [field_apart_price]</td></tr>';
  $handler->display->display_options['fields']['field_apart_price']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_apart_price']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_apart_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_apart_price']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Object: Titel (indexed) */
  $handler->display->display_options['fields']['field_object_ref_title_field']['id'] = 'field_object_ref_title_field';
  $handler->display->display_options['fields']['field_object_ref_title_field']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_title_field']['field'] = 'field_object_ref_title_field';
  $handler->display->display_options['fields']['field_object_ref_title_field']['label'] = '';
  $handler->display->display_options['fields']['field_object_ref_title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_ref_title_field']['element_label_colon'] = FALSE;
  /* Field: Object » Standort: LatLong Pair (indexed) */
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_latlon']['id'] = 'field_object_ref_field_objekt_wkt_latlon';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_latlon']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_latlon']['field'] = 'field_object_ref_field_objekt_wkt_latlon';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_latlon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_latlon']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_latlon']['conversion_factor'] = '1';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_latlon']['precision'] = '0';
  /* Field: Standort: LatLong Pair (indexed) */
  $handler->display->display_options['fields']['field_objekt_wkt_latlon']['id'] = 'field_objekt_wkt_latlon';
  $handler->display->display_options['fields']['field_objekt_wkt_latlon']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_objekt_wkt_latlon']['field'] = 'field_objekt_wkt_latlon';
  $handler->display->display_options['fields']['field_objekt_wkt_latlon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_objekt_wkt_latlon']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_objekt_wkt_latlon']['conversion_factor'] = '1';
  $handler->display->display_options['fields']['field_objekt_wkt_latlon']['precision'] = '0';
  /* Field: Indexed Node: Standort */
  $handler->display->display_options['fields']['field_objekt_wkt']['id'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_objekt_wkt']['field'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['label'] = '';
  $handler->display->display_options['fields']['field_objekt_wkt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_objekt_wkt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_objekt_wkt']['settings'] = array(
    'data' => 'full',
  );
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Object: Borough (indexed) */
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['id'] = 'field_object_ref_field_bezirk';
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['field'] = 'field_object_ref_field_bezirk';
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['value'] = array();
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['group'] = 1;
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['expose']['operator_id'] = 'field_object_ref_field_bezirk_op';
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['expose']['operator'] = 'field_object_ref_field_bezirk_op';
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['expose']['identifier'] = 'bezirk';
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['expose']['reduce'] = 0;
  /* Filter criterion: Object: Category (indexed) */
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['id'] = 'field_object_ref_field_kategorie';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['field'] = 'field_object_ref_field_kategorie';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['value'] = array(
    2009 => '2009',
    2010 => '2010',
    2012 => '2012',
    2015 => '2015',
    2016 => '2016',
  );
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['group'] = 1;
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['expose']['operator_id'] = 'field_object_ref_field_kategorie_op';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['expose']['operator'] = 'field_object_ref_field_kategorie_op';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['expose']['identifier'] = 'kategorie';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['expose']['reduce'] = 1;
  /* Filter criterion: Indexed Node: Rooms */
  $handler->display->display_options['filters']['field_apart_rooms']['id'] = 'field_apart_rooms';
  $handler->display->display_options['filters']['field_apart_rooms']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_apart_rooms']['field'] = 'field_apart_rooms';
  $handler->display->display_options['filters']['field_apart_rooms']['group'] = 1;
  $handler->display->display_options['filters']['field_apart_rooms']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_apart_rooms']['expose']['operator_id'] = 'field_apart_rooms_op';
  $handler->display->display_options['filters']['field_apart_rooms']['expose']['label'] = 'Rooms';
  $handler->display->display_options['filters']['field_apart_rooms']['expose']['operator'] = 'field_apart_rooms_op';
  $handler->display->display_options['filters']['field_apart_rooms']['expose']['identifier'] = 'field_apart_rooms';
  $handler->display->display_options['filters']['field_apart_rooms']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_apart_rooms']['group_info']['identifier'] = 'zimmer';
  $handler->display->display_options['filters']['field_apart_rooms']['group_info']['group_items'] = array(
    1 => array(
      'title' => '1 bis 2',
      'operator' => '<=',
      'value' => '2',
    ),
    2 => array(
      'title' => 'bis 3',
      'operator' => '<=',
      'value' => '3',
    ),
    3 => array(
      'title' => 'bis 4',
      'operator' => '<=',
      'value' => '4',
    ),
    4 => array(
      'title' => 'bis 5',
      'operator' => '<=',
      'value' => '5',
    ),
    5 => array(
      'title' => 'mehr als 5',
      'operator' => '>',
      'value' => '5',
    ),
  );
  /* Filter criterion: Indexed Node: Living space */
  $handler->display->display_options['filters']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['filters']['field_apart_living_space']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['filters']['field_apart_living_space']['group'] = 1;
  $handler->display->display_options['filters']['field_apart_living_space']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_apart_living_space']['expose']['operator_id'] = 'field_apart_living_space_op';
  $handler->display->display_options['filters']['field_apart_living_space']['expose']['label'] = 'Living space';
  $handler->display->display_options['filters']['field_apart_living_space']['expose']['operator'] = 'field_apart_living_space_op';
  $handler->display->display_options['filters']['field_apart_living_space']['expose']['identifier'] = 'field_apart_living_space';
  $handler->display->display_options['filters']['field_apart_living_space']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_apart_living_space']['group_info']['identifier'] = 'flaeche';
  $handler->display->display_options['filters']['field_apart_living_space']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'bis 50m²',
      'operator' => '<=',
      'value' => '50',
    ),
    2 => array(
      'title' => 'bis 100m²',
      'operator' => '<=',
      'value' => '100',
    ),
    3 => array(
      'title' => 'bis 150m²',
      'operator' => '<=',
      'value' => '150',
    ),
    4 => array(
      'title' => 'ab 150m²',
      'operator' => '>=',
      'value' => '150',
    ),
  );
  /* Filter criterion: Indexed Node: Purchasing price */
  $handler->display->display_options['filters']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['filters']['field_apart_price']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['filters']['field_apart_price']['group'] = 1;
  $handler->display->display_options['filters']['field_apart_price']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_apart_price']['expose']['operator_id'] = 'field_apart_price_op';
  $handler->display->display_options['filters']['field_apart_price']['expose']['label'] = 'Purchasing price';
  $handler->display->display_options['filters']['field_apart_price']['expose']['operator'] = 'field_apart_price_op';
  $handler->display->display_options['filters']['field_apart_price']['expose']['identifier'] = 'field_apart_price';
  $handler->display->display_options['filters']['field_apart_price']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_apart_price']['group_info']['identifier'] = 'preis';
  $handler->display->display_options['filters']['field_apart_price']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'bis 100 000€',
      'operator' => '<=',
      'value' => '100000',
    ),
    2 => array(
      'title' => 'bis 250 000€',
      'operator' => '<=',
      'value' => '250000',
    ),
    3 => array(
      'title' => 'bis 500 000€',
      'operator' => '<=',
      'value' => '500000',
    ),
    4 => array(
      'title' => 'bis 1 000 000€',
      'operator' => '<=',
      'value' => '1000000',
    ),
    5 => array(
      'title' => 'ab 1 000 000€',
      'operator' => '>=',
      'value' => '1000000',
    ),
  );
  $handler->display->display_options['use_ajax_flags'] = array(
    'merken' => 'merken',
    'bookmarks' => 0,
  );
  $handler->display->display_options['use_ajax_flags_widget'] = 'throbber';

  /* Display: Background Map */
  $handler = $view->new_display('page', 'Background Map', 'map_page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'map';

  /* Display: Map Background Block */
  $handler = $view->new_display('block', 'Map Background Block', 'map_block');

  /* Display: Kaufen */
  $handler = $view->new_display('page', 'Kaufen', 'kaufen');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Buy';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'kaufen';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '1';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = '';
  $handler->display->display_options['fields']['language']['exclude'] = TRUE;
  $handler->display->display_options['fields']['language']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['language']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['language']['format_name'] = 1;
  /* Field: Indexed Node: Living space */
  $handler->display->display_options['fields']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Node: Purchasing price */
  $handler->display->display_options['fields']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Node: Rooms */
  $handler->display->display_options['fields']['field_apart_rooms']['id'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_rooms']['field'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Node: Standort */
  $handler->display->display_options['fields']['field_objekt_wkt']['id'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_objekt_wkt']['field'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['label'] = '';
  $handler->display->display_options['fields']['field_objekt_wkt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_objekt_wkt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_objekt_wkt']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['id'] = 'field_object_ref_field_objekt_wkt_geom';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['field'] = 'field_object_ref_field_objekt_wkt_geom';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['label'] = 'Objektstandort';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['element_default_classes'] = FALSE;
  /* Field: Object: Borough (indexed) */
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['id'] = 'field_object_ref_field_bezirk';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['field'] = 'field_object_ref_field_bezirk';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['label'] = 'Objektbezirk';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['bypass_access'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_object_ref_title']['id'] = 'field_object_ref_title';
  $handler->display->display_options['fields']['field_object_ref_title']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_title']['field'] = 'field_object_ref_title';
  $handler->display->display_options['fields']['field_object_ref_title']['label'] = 'Objekttitel';
  $handler->display->display_options['fields']['field_object_ref_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_title']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['id'] = 'field_object_ref_field_apart_pictures_file';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['field'] = 'field_object_ref_field_apart_pictures_file';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['label'] = 'Objektbild';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Object: Category (indexed) */
  $handler->display->display_options['filters']['field_object_ref_field_kategorie_1']['id'] = 'field_object_ref_field_kategorie_1';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie_1']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie_1']['field'] = 'field_object_ref_field_kategorie';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie_1']['value'] = array(
    2009 => '2009',
    2010 => '2010',
    2012 => '2012',
  );
  $handler->display->display_options['filters']['field_object_ref_field_kategorie_1']['group'] = 1;
  /* Filter criterion: Object: Borough (indexed) */
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['id'] = 'field_object_ref_field_bezirk';
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['field'] = 'field_object_ref_field_bezirk';
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['value'] = array();
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['group'] = 1;
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['expose']['operator_id'] = 'field_object_ref_field_bezirk_op';
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['expose']['operator'] = 'field_object_ref_field_bezirk_op';
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['expose']['identifier'] = 'bezirk';
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['expose']['reduce'] = 0;
  /* Filter criterion: Object: Category (indexed) */
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['id'] = 'field_object_ref_field_kategorie';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['field'] = 'field_object_ref_field_kategorie';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['value'] = array(
    2009 => '2009',
    2010 => '2010',
    2012 => '2012',
    2015 => '2015',
    2016 => '2016',
  );
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['group'] = 1;
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['expose']['operator_id'] = 'field_object_ref_field_kategorie_op';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['expose']['operator'] = 'field_object_ref_field_kategorie_op';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['expose']['identifier'] = 'kategorie';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['expose']['reduce'] = 1;
  /* Filter criterion: Indexed Node: Rooms */
  $handler->display->display_options['filters']['field_apart_rooms']['id'] = 'field_apart_rooms';
  $handler->display->display_options['filters']['field_apart_rooms']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_apart_rooms']['field'] = 'field_apart_rooms';
  $handler->display->display_options['filters']['field_apart_rooms']['group'] = 1;
  $handler->display->display_options['filters']['field_apart_rooms']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_apart_rooms']['expose']['operator_id'] = 'field_apart_rooms_op';
  $handler->display->display_options['filters']['field_apart_rooms']['expose']['label'] = 'Rooms';
  $handler->display->display_options['filters']['field_apart_rooms']['expose']['operator'] = 'field_apart_rooms_op';
  $handler->display->display_options['filters']['field_apart_rooms']['expose']['identifier'] = 'field_apart_rooms';
  $handler->display->display_options['filters']['field_apart_rooms']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_apart_rooms']['group_info']['identifier'] = 'zimmer';
  $handler->display->display_options['filters']['field_apart_rooms']['group_info']['group_items'] = array(
    1 => array(
      'title' => '1 bis 2',
      'operator' => '<=',
      'value' => '2',
    ),
    2 => array(
      'title' => 'bis 3',
      'operator' => '<=',
      'value' => '3',
    ),
    3 => array(
      'title' => 'bis 4',
      'operator' => '<=',
      'value' => '4',
    ),
    4 => array(
      'title' => 'bis 5',
      'operator' => '<=',
      'value' => '5',
    ),
    5 => array(
      'title' => 'mehr als 5',
      'operator' => '>',
      'value' => '5',
    ),
  );
  /* Filter criterion: Indexed Node: Living space */
  $handler->display->display_options['filters']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['filters']['field_apart_living_space']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['filters']['field_apart_living_space']['group'] = 1;
  $handler->display->display_options['filters']['field_apart_living_space']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_apart_living_space']['expose']['operator_id'] = 'field_apart_living_space_op';
  $handler->display->display_options['filters']['field_apart_living_space']['expose']['label'] = 'Living space';
  $handler->display->display_options['filters']['field_apart_living_space']['expose']['operator'] = 'field_apart_living_space_op';
  $handler->display->display_options['filters']['field_apart_living_space']['expose']['identifier'] = 'field_apart_living_space';
  $handler->display->display_options['filters']['field_apart_living_space']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_apart_living_space']['group_info']['identifier'] = 'flaeche';
  $handler->display->display_options['filters']['field_apart_living_space']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'bis 50m²',
      'operator' => '<=',
      'value' => '50',
    ),
    2 => array(
      'title' => 'bis 100m²',
      'operator' => '<=',
      'value' => '100',
    ),
    3 => array(
      'title' => 'bis 150m²',
      'operator' => '<=',
      'value' => '150',
    ),
    4 => array(
      'title' => 'ab 150m²',
      'operator' => '>=',
      'value' => '150',
    ),
  );
  /* Filter criterion: Indexed Node: Purchasing price */
  $handler->display->display_options['filters']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['filters']['field_apart_price']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['filters']['field_apart_price']['group'] = 1;
  $handler->display->display_options['filters']['field_apart_price']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_apart_price']['expose']['operator_id'] = 'field_apart_price_op';
  $handler->display->display_options['filters']['field_apart_price']['expose']['label'] = 'Purchasing price';
  $handler->display->display_options['filters']['field_apart_price']['expose']['operator'] = 'field_apart_price_op';
  $handler->display->display_options['filters']['field_apart_price']['expose']['identifier'] = 'field_apart_price';
  $handler->display->display_options['filters']['field_apart_price']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_apart_price']['group_info']['identifier'] = 'preis';
  $handler->display->display_options['filters']['field_apart_price']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'bis 100 000€',
      'operator' => '<=',
      'value' => '100000',
    ),
    2 => array(
      'title' => 'bis 250 000€',
      'operator' => '<=',
      'value' => '250000',
    ),
    3 => array(
      'title' => 'bis 500 000€',
      'operator' => '<=',
      'value' => '500000',
    ),
    4 => array(
      'title' => 'bis 1 000 000€',
      'operator' => '<=',
      'value' => '1000000',
    ),
    5 => array(
      'title' => 'ab 1 000 000€',
      'operator' => '>=',
      'value' => '1000000',
    ),
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'query';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'buy';

  /* Display: Mieten */
  $handler = $view->new_display('page', 'Mieten', 'mieten');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Rent';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'group-card';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'is_new' => 'is_new',
    'field_object_ref_field_kategorie2' => 'field_object_ref_field_kategorie2',
    'field_apart_living_space' => 'field_apart_living_space',
    'field_apart_price' => 'field_apart_price',
    'field_object_ref_field_bezirk' => 'field_object_ref_field_bezirk',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Pictures » The image file. */
  $handler->display->display_options['fields']['field_apart_pictures_file']['id'] = 'field_apart_pictures_file';
  $handler->display->display_options['fields']['field_apart_pictures_file']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_pictures_file']['field'] = 'field_apart_pictures_file';
  $handler->display->display_options['fields']['field_apart_pictures_file']['label'] = '';
  $handler->display->display_options['fields']['field_apart_pictures_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_apart_pictures_file']['alter']['text'] = '[field_apart_pictures_file]';
  $handler->display->display_options['fields']['field_apart_pictures_file']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_apart_pictures_file']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_apart_pictures_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_pictures_file']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_apart_pictures_file']['display'] = 'view';
  $handler->display->display_options['fields']['field_apart_pictures_file']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['field_apart_pictures_file']['bypass_access'] = 0;
  /* Field: Indexed Node: Is new */
  $handler->display->display_options['fields']['is_new_1']['id'] = 'is_new_1';
  $handler->display->display_options['fields']['is_new_1']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['is_new_1']['field'] = 'is_new';
  $handler->display->display_options['fields']['is_new_1']['label'] = '';
  $handler->display->display_options['fields']['is_new_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['is_new_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['is_new_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['is_new_1']['type'] = 'custom';
  $handler->display->display_options['fields']['is_new_1']['type_custom_true'] = 'Neu';
  $handler->display->display_options['fields']['is_new_1']['type_custom_false'] = '0';
  $handler->display->display_options['fields']['is_new_1']['not'] = 0;
  $handler->display->display_options['fields']['is_new_1']['link_to_entity'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_object_ref_field_kategorie2']['id'] = 'field_object_ref_field_kategorie2';
  $handler->display->display_options['fields']['field_object_ref_field_kategorie2']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_kategorie2']['field'] = 'field_object_ref_field_kategorie2';
  $handler->display->display_options['fields']['field_object_ref_field_kategorie2']['label'] = '';
  $handler->display->display_options['fields']['field_object_ref_field_kategorie2']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = '';
  $handler->display->display_options['fields']['language']['exclude'] = TRUE;
  $handler->display->display_options['fields']['language']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['language']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['language']['format_name'] = 1;
  /* Field: Indexed Node: Living space */
  $handler->display->display_options['fields']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['label'] = '';
  $handler->display->display_options['fields']['field_apart_living_space']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_living_space']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Node: Purchasing price */
  $handler->display->display_options['fields']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['label'] = '';
  $handler->display->display_options['fields']['field_apart_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Node: Rooms */
  $handler->display->display_options['fields']['field_apart_rooms']['id'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_rooms']['field'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['label'] = '';
  $handler->display->display_options['fields']['field_apart_rooms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_rooms']['alter']['text'] = 'Neu';
  $handler->display->display_options['fields']['field_apart_rooms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_rooms']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_rooms']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_apart_rooms']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Indexed Node: Standort */
  $handler->display->display_options['fields']['field_objekt_wkt']['id'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_objekt_wkt']['field'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['label'] = '';
  $handler->display->display_options['fields']['field_objekt_wkt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_objekt_wkt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_objekt_wkt']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Object » Address: Thoroughfare (i.e. Street address) (indexed) */
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['id'] = 'field_object_ref_field_address_thoroughfare';
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['field'] = 'field_object_ref_field_address_thoroughfare';
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['link_to_entity'] = 0;
  /* Field: Object: Borough (indexed) */
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['id'] = 'field_object_ref_field_bezirk';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['field'] = 'field_object_ref_field_bezirk';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['label'] = '';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Object: Category (indexed) */
  $handler->display->display_options['filters']['field_object_ref_field_kategorie_1']['id'] = 'field_object_ref_field_kategorie_1';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie_1']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie_1']['field'] = 'field_object_ref_field_kategorie';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie_1']['value'] = array(
    2015 => '2015',
    2016 => '2016',
  );
  $handler->display->display_options['filters']['field_object_ref_field_kategorie_1']['group'] = 1;
  /* Filter criterion: Object: Borough (indexed) */
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['id'] = 'field_object_ref_field_bezirk';
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['field'] = 'field_object_ref_field_bezirk';
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['value'] = array();
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['group'] = 1;
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['expose']['operator_id'] = 'field_object_ref_field_bezirk_op';
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['expose']['operator'] = 'field_object_ref_field_bezirk_op';
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['expose']['identifier'] = 'bezirk';
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_object_ref_field_bezirk']['expose']['reduce'] = 0;
  /* Filter criterion: Object: Category (indexed) */
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['id'] = 'field_object_ref_field_kategorie';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['field'] = 'field_object_ref_field_kategorie';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['value'] = array(
    2009 => '2009',
    2010 => '2010',
    2012 => '2012',
    2015 => '2015',
    2016 => '2016',
  );
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['group'] = 1;
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['expose']['operator_id'] = 'field_object_ref_field_kategorie_op';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['expose']['operator'] = 'field_object_ref_field_kategorie_op';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['expose']['identifier'] = 'kategorie';
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_object_ref_field_kategorie']['expose']['reduce'] = 1;
  /* Filter criterion: Indexed Node: Rooms */
  $handler->display->display_options['filters']['field_apart_rooms']['id'] = 'field_apart_rooms';
  $handler->display->display_options['filters']['field_apart_rooms']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_apart_rooms']['field'] = 'field_apart_rooms';
  $handler->display->display_options['filters']['field_apart_rooms']['group'] = 1;
  $handler->display->display_options['filters']['field_apart_rooms']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_apart_rooms']['expose']['operator_id'] = 'field_apart_rooms_op';
  $handler->display->display_options['filters']['field_apart_rooms']['expose']['label'] = 'Rooms';
  $handler->display->display_options['filters']['field_apart_rooms']['expose']['operator'] = 'field_apart_rooms_op';
  $handler->display->display_options['filters']['field_apart_rooms']['expose']['identifier'] = 'field_apart_rooms';
  $handler->display->display_options['filters']['field_apart_rooms']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_apart_rooms']['group_info']['identifier'] = 'zimmer';
  $handler->display->display_options['filters']['field_apart_rooms']['group_info']['group_items'] = array(
    1 => array(
      'title' => '1 bis 2',
      'operator' => '<=',
      'value' => '2',
    ),
    2 => array(
      'title' => 'bis 3',
      'operator' => '<=',
      'value' => '3',
    ),
    3 => array(
      'title' => 'bis 4',
      'operator' => '<=',
      'value' => '4',
    ),
    4 => array(
      'title' => 'bis 5',
      'operator' => '<=',
      'value' => '5',
    ),
    5 => array(
      'title' => 'mehr als 5',
      'operator' => '>',
      'value' => '5',
    ),
  );
  /* Filter criterion: Indexed Node: Living space */
  $handler->display->display_options['filters']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['filters']['field_apart_living_space']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['filters']['field_apart_living_space']['group'] = 1;
  $handler->display->display_options['filters']['field_apart_living_space']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_apart_living_space']['expose']['operator_id'] = 'field_apart_living_space_op';
  $handler->display->display_options['filters']['field_apart_living_space']['expose']['label'] = 'Living space';
  $handler->display->display_options['filters']['field_apart_living_space']['expose']['operator'] = 'field_apart_living_space_op';
  $handler->display->display_options['filters']['field_apart_living_space']['expose']['identifier'] = 'field_apart_living_space';
  $handler->display->display_options['filters']['field_apart_living_space']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_apart_living_space']['group_info']['identifier'] = 'flaeche';
  $handler->display->display_options['filters']['field_apart_living_space']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'bis 50m²',
      'operator' => '<=',
      'value' => '50',
    ),
    2 => array(
      'title' => 'bis 100m²',
      'operator' => '<=',
      'value' => '100',
    ),
    3 => array(
      'title' => 'bis 150m²',
      'operator' => '<=',
      'value' => '150',
    ),
    4 => array(
      'title' => 'ab 150m²',
      'operator' => '>=',
      'value' => '150',
    ),
  );
  /* Filter criterion: Indexed Node: Purchasing price */
  $handler->display->display_options['filters']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['filters']['field_apart_price']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['filters']['field_apart_price']['group'] = 1;
  $handler->display->display_options['filters']['field_apart_price']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_apart_price']['expose']['operator_id'] = 'field_apart_price_op';
  $handler->display->display_options['filters']['field_apart_price']['expose']['label'] = 'Purchasing price';
  $handler->display->display_options['filters']['field_apart_price']['expose']['operator'] = 'field_apart_price_op';
  $handler->display->display_options['filters']['field_apart_price']['expose']['identifier'] = 'field_apart_price';
  $handler->display->display_options['filters']['field_apart_price']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_apart_price']['group_info']['identifier'] = 'preis';
  $handler->display->display_options['filters']['field_apart_price']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'bis 100 000€',
      'operator' => '<=',
      'value' => '100000',
    ),
    2 => array(
      'title' => 'bis 250 000€',
      'operator' => '<=',
      'value' => '250000',
    ),
    3 => array(
      'title' => 'bis 500 000€',
      'operator' => '<=',
      'value' => '500000',
    ),
    4 => array(
      'title' => 'bis 1 000 000€',
      'operator' => '<=',
      'value' => '1000000',
    ),
    5 => array(
      'title' => 'ab 1 000 000€',
      'operator' => '>=',
      'value' => '1000000',
    ),
  );
  $handler->display->display_options['path'] = 'rent';

  /* Display: More like this Block */
  $handler = $view->new_display('block', 'More like this Block', 'mlt');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ähnliche Wohnungen';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'mlt';
  $handler->display->display_options['display_description'] = 'Zeigt ähnliche Wohungen unter einer Wohnung in einer Slideshow an';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'morelikethis';
  $handler->display->display_options['style_options']['id'] = 'mlt';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Purchasing price */
  $handler->display->display_options['fields']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['label'] = '';
  $handler->display->display_options['fields']['field_apart_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Node: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_zimmer']['id'] = 'field_zimmer';
  $handler->display->display_options['fields']['field_zimmer']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_zimmer']['field'] = 'field_zimmer';
  $handler->display->display_options['fields']['field_zimmer']['label'] = 'Rooms';
  /* Field: Object: Titel (indexed) */
  $handler->display->display_options['fields']['field_object_ref_title_field']['id'] = 'field_object_ref_title_field';
  $handler->display->display_options['fields']['field_object_ref_title_field']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_title_field']['field'] = 'field_object_ref_title_field';
  $handler->display->display_options['fields']['field_object_ref_title_field']['label'] = '';
  $handler->display->display_options['fields']['field_object_ref_title_field']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Object images */
  $handler->display->display_options['fields']['field_object_images']['id'] = 'field_object_images';
  $handler->display->display_options['fields']['field_object_images']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_images']['field'] = 'field_object_images';
  $handler->display->display_options['fields']['field_object_images']['label'] = '';
  $handler->display->display_options['fields']['field_object_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_object_images']['settings'] = array(
    'image_style' => 'map-popup',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_object_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_object_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_object_images']['multi_type'] = 'ul';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_wohnungsbilder']['id'] = 'field_wohnungsbilder';
  $handler->display->display_options['fields']['field_wohnungsbilder']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_wohnungsbilder']['field'] = 'field_wohnungsbilder';
  $handler->display->display_options['fields']['field_wohnungsbilder']['label'] = '';
  $handler->display->display_options['fields']['field_wohnungsbilder']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Search: More like this */
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['id'] = 'search_api_views_more_like_this';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['field'] = 'search_api_views_more_like_this';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['default_action'] = 'default';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['validate_options']['types'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['fields'] = array(
    'language' => 'language',
    'field_apart_bathrooms' => 'field_apart_bathrooms',
    'field_apart_living_space' => 'field_apart_living_space',
    'field_apart_price' => 'field_apart_price',
    'field_apart_rooms' => 'field_apart_rooms',
    'field_object_ref' => 'field_object_ref',
    'field_ausstattung' => 'field_ausstattung',
    'field_object_ref:title_field' => 'field_object_ref:title_field',
    'field_object_ref:field_bezirk' => 'field_object_ref:field_bezirk',
    'field_object_ref:field_kategorie' => 'field_object_ref:field_kategorie',
    'field_object_ref:body:value' => 'field_object_ref:body:value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $export['karten'] = $view;

  return $export;
}
