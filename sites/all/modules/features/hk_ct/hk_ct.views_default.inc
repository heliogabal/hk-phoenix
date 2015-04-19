<?php
/**
 * @file
 * hk_ct.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hk_ct_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'apartment';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Apartment';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Adresse vom Objekt';
  $handler->display->display_options['css_class'] = 'apartaddress';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_object_ref_target_id']['id'] = 'field_object_ref_target_id';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['table'] = 'field_data_field_object_ref';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['field'] = 'field_object_ref_target_id';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['label'] = 'Objekt';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['required'] = TRUE;
  /* Field: Content: Address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_address_thoroughfare']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_thoroughfare']['element_label_colon'] = FALSE;
  /* Field: Content: Address - Postal code */
  $handler->display->display_options['fields']['field_address_postal_code']['id'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_postal_code']['field'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_address_postal_code']['label'] = '';
  $handler->display->display_options['fields']['field_address_postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_postal_code']['element_default_classes'] = FALSE;
  /* Field: Content: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_locality']['alter']['text'] = '[field_address_thoroughfare], [field_address_postal_code] [field_address_locality] ';
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid_1']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['validate_options']['types'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['arguments']['nid_1']['validate']['fail'] = 'access denied';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );

  /* Display: Karte */
  $handler = $view->new_display('attachment', 'Karte', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Karte vom Objekt';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'apartmap';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_leaflet';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => '',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['map'] = 'leaflet-mapbox';
  $handler->display->display_options['style_options']['map_height'] = '300';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = array(
    'field_objekt_wkt' => 'field_objekt_wkt',
  );
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_longitude'] = 'field_objekt_wkt';
  $handler->display->display_options['style_options']['default_marker']['default_marker_color'] = 'Icon_House';
  $handler->display->display_options['style_options']['visitor_marker']['visitor_marker_color'] = 'none';
  $handler->display->display_options['style_options']['center_option'] = '0';
  $handler->display->display_options['style_options']['full_screen'] = 1;
  $handler->display->display_options['style_options']['scale_metric'] = 1;
  $handler->display->display_options['style_options']['mini_map']['height'] = '100';
  $handler->display->display_options['style_options']['mini_map']['width'] = '150';
  $handler->display->display_options['style_options']['cluster_radius'] = '1';
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_differentiator_fields'] = array(
    '' => '',
  );
  $handler->display->display_options['style_options']['cluster_differentiator']['zoom_ranges'] = array(
    1 => '',
  );
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_tooltips'] = 0;
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_outline'] = '0';
  $handler->display->display_options['style_options']['cluster_aggregation']['aggregation_function'] = 'average';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['small'] = '10';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['medium'] = '100';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['large'] = '1000';
  $handler->display->display_options['style_options']['map_options']['maxzoom'] = '18';
  $handler->display->display_options['style_options']['map_options']['zoom'] = '16';
  $handler->display->display_options['style_options']['map_options']['scrollwheelzoom'] = '1';
  $handler->display->display_options['style_options']['map_options']['dragging'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Standort */
  $handler->display->display_options['fields']['field_objekt_wkt']['id'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['table'] = 'field_data_field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['field'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_objekt_wkt']['label'] = '';
  $handler->display->display_options['fields']['field_objekt_wkt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_objekt_wkt']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_objekt_wkt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_objekt_wkt']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_address_thoroughfare']['element_label_colon'] = FALSE;

  /* Display: Thumbslider */
  $handler = $view->new_display('block', 'Thumbslider', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'thumbslide';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'thumbslider';
  $handler->display->display_options['style_options']['id'] = 'thumbslide';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Object images */
  $handler->display->display_options['fields']['field_object_images']['id'] = 'field_object_images';
  $handler->display->display_options['fields']['field_object_images']['table'] = 'field_data_field_object_images';
  $handler->display->display_options['fields']['field_object_images']['field'] = 'field_object_images';
  $handler->display->display_options['fields']['field_object_images']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_object_images']['label'] = '';
  $handler->display->display_options['fields']['field_object_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_images']['element_class'] = 'flex-control-thumbs';
  $handler->display->display_options['fields']['field_object_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_images']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_object_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_object_images']['settings'] = array(
    'image_style' => 'flexslider_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_object_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_object_images']['delta_offset'] = '0';
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_apart_pictures']['id'] = 'field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['table'] = 'field_data_field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['field'] = 'field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['label'] = '';
  $handler->display->display_options['fields']['field_apart_pictures']['alter']['text'] = '[field_object_images][field_apart_pictures]';
  $handler->display->display_options['fields']['field_apart_pictures']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_pictures']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_apart_pictures']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_apart_pictures']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_apart_pictures']['settings'] = array(
    'image_style' => 'flexslider_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_apart_pictures']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_apart_pictures']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_apart_pictures']['multi_type'] = 'ul';

  /* Display: Details */
  $handler = $view->new_display('panel_pane', 'Details', 'details');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Details';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'apartmerkmale';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Living space */
  $handler->display->display_options['fields']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['table'] = 'field_data_field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['label'] = 'Wohnfläche';
  $handler->display->display_options['fields']['field_apart_living_space']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_living_space']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_living_space']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Rooms */
  $handler->display->display_options['fields']['field_apart_rooms']['id'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['table'] = 'field_data_field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['field'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['label'] = 'Zimmer';
  $handler->display->display_options['fields']['field_apart_rooms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_rooms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_rooms']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Bathrooms */
  $handler->display->display_options['fields']['field_apart_bathrooms']['id'] = 'field_apart_bathrooms';
  $handler->display->display_options['fields']['field_apart_bathrooms']['table'] = 'field_data_field_apart_bathrooms';
  $handler->display->display_options['fields']['field_apart_bathrooms']['field'] = 'field_apart_bathrooms';
  $handler->display->display_options['fields']['field_apart_bathrooms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_bathrooms']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Sleeping rooms */
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['id'] = 'field_apart_sleeping_rooms';
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['table'] = 'field_data_field_apart_sleeping_rooms';
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['field'] = 'field_apart_sleeping_rooms';
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Heating type */
  $handler->display->display_options['fields']['field_heating_type']['id'] = 'field_heating_type';
  $handler->display->display_options['fields']['field_heating_type']['table'] = 'field_data_field_heating_type';
  $handler->display->display_options['fields']['field_heating_type']['field'] = 'field_heating_type';
  $handler->display->display_options['fields']['field_heating_type']['element_label_colon'] = FALSE;
  /* Field: Content: HOA fee */
  $handler->display->display_options['fields']['field_apart_hoa_fee']['id'] = 'field_apart_hoa_fee';
  $handler->display->display_options['fields']['field_apart_hoa_fee']['table'] = 'field_data_field_apart_hoa_fee';
  $handler->display->display_options['fields']['field_apart_hoa_fee']['field'] = 'field_apart_hoa_fee';
  $handler->display->display_options['fields']['field_apart_hoa_fee']['label'] = 'Hausgeld';
  $handler->display->display_options['fields']['field_apart_hoa_fee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_hoa_fee']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_hoa_fee']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_apart_hoa_fee']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Moving in from */
  $handler->display->display_options['fields']['field_moving_in_from']['id'] = 'field_moving_in_from';
  $handler->display->display_options['fields']['field_moving_in_from']['table'] = 'field_data_field_moving_in_from';
  $handler->display->display_options['fields']['field_moving_in_from']['field'] = 'field_moving_in_from';
  $handler->display->display_options['fields']['field_moving_in_from']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_moving_in_from']['element_label_colon'] = FALSE;
  /* Field: Content: Year built */
  $handler->display->display_options['fields']['field_year_built']['id'] = 'field_year_built';
  $handler->display->display_options['fields']['field_year_built']['table'] = 'field_data_field_year_built';
  $handler->display->display_options['fields']['field_year_built']['field'] = 'field_year_built';
  $handler->display->display_options['fields']['field_year_built']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year_built']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Purchasing price parking lot */
  $handler->display->display_options['fields']['field_apart_price_parking']['id'] = 'field_apart_price_parking';
  $handler->display->display_options['fields']['field_apart_price_parking']['table'] = 'field_data_field_apart_price_parking';
  $handler->display->display_options['fields']['field_apart_price_parking']['field'] = 'field_apart_price_parking';
  $handler->display->display_options['fields']['field_apart_price_parking']['label'] = 'Kaufpreis Garage/Stellplatz';
  $handler->display->display_options['fields']['field_apart_price_parking']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_price_parking']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Status quo */
  $handler->display->display_options['fields']['field_status_quo']['id'] = 'field_status_quo';
  $handler->display->display_options['fields']['field_status_quo']['table'] = 'field_data_field_status_quo';
  $handler->display->display_options['fields']['field_status_quo']['field'] = 'field_status_quo';
  $handler->display->display_options['fields']['field_status_quo']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_status_quo']['element_label_colon'] = FALSE;
  /* Field: Content: Floor */
  $handler->display->display_options['fields']['field_apart_floor']['id'] = 'field_apart_floor';
  $handler->display->display_options['fields']['field_apart_floor']['table'] = 'field_data_field_apart_floor';
  $handler->display->display_options['fields']['field_apart_floor']['field'] = 'field_apart_floor';
  $handler->display->display_options['fields']['field_apart_floor']['element_label_colon'] = FALSE;
  /* Field: Content: No. of floors */
  $handler->display->display_options['fields']['field_no_of_floors']['id'] = 'field_no_of_floors';
  $handler->display->display_options['fields']['field_no_of_floors']['table'] = 'field_data_field_no_of_floors';
  $handler->display->display_options['fields']['field_no_of_floors']['field'] = 'field_no_of_floors';
  $handler->display->display_options['fields']['field_no_of_floors']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_no_of_floors']['element_label_colon'] = FALSE;

  /* Display: Objekt ID */
  $handler = $view->new_display('panel_pane', 'Objekt ID', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'objekt-id';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['label'] = '';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_objektid_nunumeric']['alter']['text'] = '[field_objektid_nunumeric-value]-';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objektid_nunumeric']['element_default_classes'] = FALSE;

  /* Display: Description */
  $handler = $view->new_display('panel_pane', 'Description', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Description';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'aparttexts';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_object_description']['id'] = 'field_object_description';
  $handler->display->display_options['fields']['field_object_description']['table'] = 'field_data_field_object_description';
  $handler->display->display_options['fields']['field_object_description']['field'] = 'field_object_description';
  $handler->display->display_options['fields']['field_object_description']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_object_description']['label'] = '';
  $handler->display->display_options['fields']['field_object_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_description']['element_label_colon'] = FALSE;
  /* Field: Content: Apartment description */
  $handler->display->display_options['fields']['field_apart_description']['id'] = 'field_apart_description';
  $handler->display->display_options['fields']['field_apart_description']['table'] = 'field_data_field_apart_description';
  $handler->display->display_options['fields']['field_apart_description']['field'] = 'field_apart_description';
  $handler->display->display_options['fields']['field_apart_description']['label'] = '';
  $handler->display->display_options['fields']['field_apart_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_description']['empty'] = '[field_object_description]';
  $handler->display->display_options['fields']['field_apart_description']['hide_alter_empty'] = FALSE;

  /* Display: Location */
  $handler = $view->new_display('panel_pane', 'Location', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Location';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'aparttexts';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Lage */
  $handler->display->display_options['fields']['field_lage']['id'] = 'field_lage';
  $handler->display->display_options['fields']['field_lage']['table'] = 'field_data_field_lage';
  $handler->display->display_options['fields']['field_lage']['field'] = 'field_lage';
  $handler->display->display_options['fields']['field_lage']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_lage']['label'] = '';
  $handler->display->display_options['fields']['field_lage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lage']['element_label_colon'] = FALSE;
  /* Field: Content: Apartment location */
  $handler->display->display_options['fields']['field_apart_location']['id'] = 'field_apart_location';
  $handler->display->display_options['fields']['field_apart_location']['table'] = 'field_data_field_apart_location';
  $handler->display->display_options['fields']['field_apart_location']['field'] = 'field_apart_location';
  $handler->display->display_options['fields']['field_apart_location']['label'] = '';
  $handler->display->display_options['fields']['field_apart_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_location']['empty'] = '[field_lage]';
  $handler->display->display_options['fields']['field_apart_location']['hide_alter_empty'] = FALSE;

  /* Display: Other */
  $handler = $view->new_display('panel_pane', 'Other', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Other';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'aparttexts';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_object_other']['id'] = 'field_object_other';
  $handler->display->display_options['fields']['field_object_other']['table'] = 'field_data_field_object_other';
  $handler->display->display_options['fields']['field_object_other']['field'] = 'field_object_other';
  $handler->display->display_options['fields']['field_object_other']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_object_other']['label'] = '';
  $handler->display->display_options['fields']['field_object_other']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_other']['element_label_colon'] = FALSE;
  /* Field: Content: Apartment other */
  $handler->display->display_options['fields']['field_apart_other']['id'] = 'field_apart_other';
  $handler->display->display_options['fields']['field_apart_other']['table'] = 'field_data_field_apart_other';
  $handler->display->display_options['fields']['field_apart_other']['field'] = 'field_apart_other';
  $handler->display->display_options['fields']['field_apart_other']['label'] = '';
  $handler->display->display_options['fields']['field_apart_other']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_other']['empty'] = '[field_object_other]';
  $handler->display->display_options['fields']['field_apart_other']['hide_alter_empty'] = FALSE;

  /* Display: Objektadresse */
  $handler = $view->new_display('panel_pane', 'Objektadresse', 'objektadresse');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Slideshow */
  $handler = $view->new_display('block', 'Slideshow', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'thumbslide';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Object images */
  $handler->display->display_options['fields']['field_object_images']['id'] = 'field_object_images';
  $handler->display->display_options['fields']['field_object_images']['table'] = 'field_data_field_object_images';
  $handler->display->display_options['fields']['field_object_images']['field'] = 'field_object_images';
  $handler->display->display_options['fields']['field_object_images']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_object_images']['label'] = '';
  $handler->display->display_options['fields']['field_object_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_images']['element_class'] = 'flex-control-thumbs colorbox';
  $handler->display->display_options['fields']['field_object_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_images']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_object_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_object_images']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_object_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_object_images']['multi_type'] = 'ul';
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_apart_pictures']['id'] = 'field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['table'] = 'field_data_field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['field'] = 'field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['label'] = '';
  $handler->display->display_options['fields']['field_apart_pictures']['alter']['text'] = '[field_object_images][field_apart_pictures]';
  $handler->display->display_options['fields']['field_apart_pictures']['element_class'] = 'colorbox';
  $handler->display->display_options['fields']['field_apart_pictures']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_pictures']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_apart_pictures']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_apart_pictures']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_apart_pictures']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_apart_pictures']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_apart_pictures']['multi_type'] = 'ul';
  $export['apartment'] = $view;

  $view = new view();
  $view->name = 'merkliste';
  $view->description = 'Merkliste von mit Flags erzeugten Favoriten';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Favoriten';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ausgewählte Favoriten';
  $handler->display->display_options['css_class'] = 'favoriten';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Favoriten Platzhalter Text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You didn\'t chose any favorites yet. When you click on the star in the top right corner of an offer, it will get saved to your favorites here. Try it, and send us your favorites to make an appointment with the handy inquiry button. ';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Flags: merken counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Merkliste Zähler';
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'merken';
  /* Relationship: Flags: merken */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'flaged by current user';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'merken';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['use_ajax_flags'] = array(
    'merken' => 'merken',
    'bookmarks' => 0,
  );
  $handler->display->display_options['use_ajax_flags_widget'] = 'throbber';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['use_ajax_flags'] = array(
    'merken' => 'merken',
    'bookmarks' => 0,
  );
  $handler->display->display_options['use_ajax_flags_widget'] = 'throbber';
  $handler->display->display_options['path'] = 'favorites';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['use_ajax_flags'] = array(
    'merken' => 'merken',
    'bookmarks' => 0,
  );
  $handler->display->display_options['use_ajax_flags_widget'] = 'throbber';
  $export['merkliste'] = $view;

  return $export;
}
