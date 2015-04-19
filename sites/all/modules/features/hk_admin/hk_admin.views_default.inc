<?php
/**
 * @file
 * hk_admin.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hk_admin_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Admin Dashboard';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    6 => '6',
    3 => '3',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_objektid_nunumeric_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_bezirk_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_select_all_none_nested' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'edit_node' => 'edit_node',
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
    'title' => 'title',
    'changed' => 'changed',
    'field_obj_apartments' => 'field_obj_apartments',
    'state' => 'state',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_objektid_nunumeric' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_obj_apartments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::tmgmt_node_ui_tmgmt_nodes_add_items_to_cart' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workflow_vbo_given_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workflow_vbo_next_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_expose_per_e_mail_verschicken' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_expose_speichern' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::flag_node_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_beschreibung_vom_objekt_falls_leer' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_beschreibung_vom_objekt_falls_leer_update_' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_kategorie_vom_objekt' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_kategorie_vom_objekt_falls_leer' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_lage_vom_objekt_falls_leer' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_lage_vom_objekt_falls_leer_update_' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_objekt_id_vom_objekt' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_objekt_id_vom_objekt_update' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_sonstiges_vom_objekt_falls_leer' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_sonstiges_vom_objekt_falls_leer_update_' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_standort_vom_objekt' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_standort_vom_objekt_create' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'title' => 'title',
          'language' => 'language',
          'page::body' => 'page::body',
          'page::field_bild' => 'page::field_bild',
          'page::title_field' => 'page::title_field',
          'objekt::body' => 'objekt::body',
          'objekt::field_bezirk' => 'objekt::field_bezirk',
          'objekt::field_developer' => 'objekt::field_developer',
          'objekt::field_heating_type' => 'objekt::field_heating_type',
          'objekt::field_moving_in_from' => 'objekt::field_moving_in_from',
          'objekt::field_no_of_floors' => 'objekt::field_no_of_floors',
          'objekt::field_object_description' => 'objekt::field_object_description',
          'objekt::field_object_images' => 'objekt::field_object_images',
          'objekt::field_object_location' => 'objekt::field_object_location',
          'objekt::field_object_other' => 'objekt::field_object_other',
          'objekt::field_objekt_wkt' => 'objekt::field_objekt_wkt',
          'objekt::field_objektid_nunumeric' => 'objekt::field_objektid_nunumeric',
          'objekt::field_rent_commission' => 'objekt::field_rent_commission',
          'objekt::field_sale_commission' => 'objekt::field_sale_commission',
          'objekt::field_status_quo' => 'objekt::field_status_quo',
          'objekt::field_topobjekt' => 'objekt::field_topobjekt',
          'objekt::field_year_built' => 'objekt::field_year_built',
          'objekt::field_ansprechpartner' => 'objekt::field_ansprechpartner',
          'objekt::field_address' => 'objekt::field_address',
          'objekt::title_field' => 'objekt::title_field',
          'objekt::field_kategorie' => 'objekt::field_kategorie',
          'objekt::field_obj_apartments' => 'objekt::field_obj_apartments',
          'apartment::field_apart_bathrooms' => 'apartment::field_apart_bathrooms',
          'apartment::field_apart_description' => 'apartment::field_apart_description',
          'apartment::field_apart_floor' => 'apartment::field_apart_floor',
          'apartment::field_apart_hoa_fee' => 'apartment::field_apart_hoa_fee',
          'apartment::field_apart_living_space' => 'apartment::field_apart_living_space',
          'apartment::field_apart_location' => 'apartment::field_apart_location',
          'apartment::field_apart_no' => 'apartment::field_apart_no',
          'apartment::field_apart_other' => 'apartment::field_apart_other',
          'apartment::field_apart_price' => 'apartment::field_apart_price',
          'apartment::field_apart_price_parking' => 'apartment::field_apart_price_parking',
          'apartment::field_apart_rooms' => 'apartment::field_apart_rooms',
          'apartment::field_object_ref' => 'apartment::field_object_ref',
          'apartment::field_apart_pictures' => 'apartment::field_apart_pictures',
          'apartment::field_apart_sleeping_rooms' => 'apartment::field_apart_sleeping_rooms',
          'apartment::field_moving_in_from' => 'apartment::field_moving_in_from',
          'apartment::field_apart_commission' => 'apartment::field_apart_commission',
          'apartment::field_ausstattung' => 'apartment::field_ausstattung',
          'apartment::field_apart_floor_plan' => 'apartment::field_apart_floor_plan',
          'apartment::title_field' => 'apartment::title_field',
          'apartment::field_kategorie' => 'apartment::field_kategorie',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::465' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::redhen_fields_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<a href="/node/[nid]/edit?destination=admin/dash" title="Objekt bearbeiten">bearbeiten</a> | <a href="/node/[nid]/translate?destination=admin/dash" title="Objekt übersetzen">übersetzen</a>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Objekt';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/[nid]?destination=/admin/dash" title="Objekt ansehen">[title]</a> | [edit_node]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Letze Änderung';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Apartments */
  $handler->display->display_options['fields']['field_obj_apartments']['id'] = 'field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['table'] = 'field_data_field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['field'] = 'field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_obj_apartments']['alter']['text'] = '[field_obj_apartments] | <a href="/node/[field_obj_apartments-target_id]/edit?destination=admin/dash" title="Wohnung bearbeiten">bearbeiten</a> | <a href="/node/[field_obj_apartments-target_id]/translate?destination=admin/dash" title="Wohnung übersetzen">übersetzen</a>';
  $handler->display->display_options['fields']['field_obj_apartments']['element_class'] = 'aparts';
  $handler->display->display_options['fields']['field_obj_apartments']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_obj_apartments']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_obj_apartments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_obj_apartments']['multi_type'] = 'ul';
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Status';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'objekt' => 'objekt',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Objekt ID (field_objektid_nunumeric) */
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['id'] = 'field_objektid_nunumeric_value';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['field'] = 'field_objektid_nunumeric_value';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['group'] = 1;
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['operator_id'] = 'field_objektid_nunumeric_value_op';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['label'] = 'Objekt ID';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['operator'] = 'field_objektid_nunumeric_value_op';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['identifier'] = 'field_objektid_nunumeric_value';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Borough (field_bezirk) */
  $handler->display->display_options['filters']['field_bezirk_tid']['id'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['table'] = 'field_data_field_bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['field'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_bezirk_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator_id'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['label'] = 'Bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['identifier'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_bezirk_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_bezirk_tid']['vocabulary'] = 'vocabulary_3';
  $handler->display->display_options['filters']['field_bezirk_tid']['hierarchy'] = 1;
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = '1';
  $handler->display->display_options['filters']['sid']['expose']['workflow_include_all'] = TRUE;
  /* Filter criterion: Content: Titel (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Titel';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Category (field_kategorie) */
  $handler->display->display_options['filters']['field_kategorie_tid']['id'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['table'] = 'field_data_field_kategorie';
  $handler->display->display_options['filters']['field_kategorie_tid']['field'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['operator_id'] = 'field_kategorie_tid_op';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['operator'] = 'field_kategorie_tid_op';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['identifier'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_kategorie_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_kategorie_tid']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['field_kategorie_tid']['hierarchy'] = 1;

  /* Display: Admin Dashboard */
  $handler = $view->new_display('page', 'Admin Dashboard', 'dashboard');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'admin/dash';
  $handler->display->display_options['menu']['title'] = 'Dashboard';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Admin Objekte */
  $handler = $view->new_display('page', 'Admin Objekte', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Objekte';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'admin/dash/objekte';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Objekte';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Admin Wohnungen */
  $handler = $view->new_display('page', 'Admin Wohnungen', 'wohnungen');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Wohnungen';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none-accelerated';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'edit_node' => 'edit_node',
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
    'field_apart_no' => 'field_apart_no',
    'title' => 'title',
    'changed' => 'changed',
    'sid' => 'sid',
  );
  $handler->display->display_options['style_options']['default'] = 'field_apart_no';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_objektid_nunumeric' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_apart_no' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::tmgmt_node_ui_tmgmt_nodes_add_items_to_cart' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workflow_vbo_given_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workflow_vbo_next_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_expose_per_e_mail_verschicken' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_expose_speichern' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::flag_node_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_beschreibung_vom_objekt_falls_leer' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_beschreibung_vom_objekt_falls_leer_update_' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_kategorie_vom_objekt' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_kategorie_vom_objekt_falls_leer' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_lage_vom_objekt_falls_leer' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_lage_vom_objekt_falls_leer_update_' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_objekt_id_vom_objekt' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_objekt_id_vom_objekt_update' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_sonstiges_vom_objekt_falls_leer' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_sonstiges_vom_objekt_falls_leer_update_' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_standort_vom_objekt' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_standort_vom_objekt_create' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'title' => 'title',
          'language' => 'language',
          'page::body' => 'page::body',
          'page::field_bild' => 'page::field_bild',
          'page::title_field' => 'page::title_field',
          'objekt::body' => 'objekt::body',
          'objekt::field_bezirk' => 'objekt::field_bezirk',
          'objekt::field_developer' => 'objekt::field_developer',
          'objekt::field_heating_type' => 'objekt::field_heating_type',
          'objekt::field_moving_in_from' => 'objekt::field_moving_in_from',
          'objekt::field_no_of_floors' => 'objekt::field_no_of_floors',
          'objekt::field_object_description' => 'objekt::field_object_description',
          'objekt::field_object_images' => 'objekt::field_object_images',
          'objekt::field_object_location' => 'objekt::field_object_location',
          'objekt::field_object_other' => 'objekt::field_object_other',
          'objekt::field_objekt_wkt' => 'objekt::field_objekt_wkt',
          'objekt::field_objektid_nunumeric' => 'objekt::field_objektid_nunumeric',
          'objekt::field_rent_commission' => 'objekt::field_rent_commission',
          'objekt::field_sale_commission' => 'objekt::field_sale_commission',
          'objekt::field_status_quo' => 'objekt::field_status_quo',
          'objekt::field_topobjekt' => 'objekt::field_topobjekt',
          'objekt::field_year_built' => 'objekt::field_year_built',
          'objekt::field_ansprechpartner' => 'objekt::field_ansprechpartner',
          'objekt::field_address' => 'objekt::field_address',
          'objekt::title_field' => 'objekt::title_field',
          'objekt::field_kategorie' => 'objekt::field_kategorie',
          'objekt::field_obj_apartments' => 'objekt::field_obj_apartments',
          'apartment::field_apart_bathrooms' => 'apartment::field_apart_bathrooms',
          'apartment::field_apart_description' => 'apartment::field_apart_description',
          'apartment::field_apart_floor' => 'apartment::field_apart_floor',
          'apartment::field_apart_hoa_fee' => 'apartment::field_apart_hoa_fee',
          'apartment::field_apart_living_space' => 'apartment::field_apart_living_space',
          'apartment::field_apart_location' => 'apartment::field_apart_location',
          'apartment::field_apart_no' => 'apartment::field_apart_no',
          'apartment::field_apart_other' => 'apartment::field_apart_other',
          'apartment::field_apart_price' => 'apartment::field_apart_price',
          'apartment::field_apart_price_parking' => 'apartment::field_apart_price_parking',
          'apartment::field_apart_rooms' => 'apartment::field_apart_rooms',
          'apartment::field_object_ref' => 'apartment::field_object_ref',
          'apartment::field_apart_pictures' => 'apartment::field_apart_pictures',
          'apartment::field_apart_sleeping_rooms' => 'apartment::field_apart_sleeping_rooms',
          'apartment::field_moving_in_from' => 'apartment::field_moving_in_from',
          'apartment::field_apart_commission' => 'apartment::field_apart_commission',
          'apartment::field_ausstattung' => 'apartment::field_ausstattung',
          'apartment::field_apart_floor_plan' => 'apartment::field_apart_floor_plan',
          'apartment::title_field' => 'apartment::title_field',
          'apartment::field_kategorie' => 'apartment::field_kategorie',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::465' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::redhen_fields_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<a href="/node/[nid]/edit?destination=admin/dash" title="Objekt bearbeiten">bearbeiten</a> | <a href="/node/[nid]/translate?destination=admin/dash" title="Objekt übersetzen">übersetzen</a>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  /* Field: Content: Apartment No. */
  $handler->display->display_options['fields']['field_apart_no']['id'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['table'] = 'field_data_field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['field'] = 'field_apart_no';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Wohnung';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/[nid]?destination=/admin/dash/wohnungen" title="Wohnung ansehen">[title]</a> | [edit_node]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Letze Änderung';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Status';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Objekt ID (field_objektid_nunumeric) */
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['id'] = 'field_objektid_nunumeric_value';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['field'] = 'field_objektid_nunumeric_value';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['group'] = 1;
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['operator_id'] = 'field_objektid_nunumeric_value_op';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['label'] = 'Objekt ID';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['operator'] = 'field_objektid_nunumeric_value_op';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['identifier'] = 'field_objektid_nunumeric_value';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Borough (field_bezirk) */
  $handler->display->display_options['filters']['field_bezirk_tid']['id'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['table'] = 'field_data_field_bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['field'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_bezirk_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator_id'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['label'] = 'Bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['identifier'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_bezirk_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_bezirk_tid']['vocabulary'] = 'vocabulary_3';
  $handler->display->display_options['filters']['field_bezirk_tid']['hierarchy'] = 1;
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = '1';
  $handler->display->display_options['filters']['sid']['expose']['workflow_include_all'] = TRUE;
  /* Filter criterion: Content: Titel (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Titel';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'admin/dash/wohnungen';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Wohnungen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Seiten */
  $handler = $view->new_display('page', 'Seiten', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Seiten';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none-accelerated';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workflow_vbo_given_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workflow_vbo_next_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_expose_per_e_mail_verschicken' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_expose_speichern' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::flag_node_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_beschreibung_vom_objekt_falls_leer' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_beschreibung_vom_objekt_falls_leer_update_' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_kategorie_vom_objekt' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_kategorie_vom_objekt_falls_leer' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_lage_vom_objekt_falls_leer' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_lage_vom_objekt_falls_leer_update_' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_objekt_id_vom_objekt' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_objekt_id_vom_objekt_update' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_sonstiges_vom_objekt_falls_leer' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_sonstiges_vom_objekt_falls_leer_update_' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_standort_vom_objekt' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_standort_vom_objekt_create' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'title' => 'title',
          'language' => 'language',
          'page::body' => 'page::body',
          'page::field_bild' => 'page::field_bild',
          'page::title_field' => 'page::title_field',
          'objekt::body' => 'objekt::body',
          'objekt::field_bezirk' => 'objekt::field_bezirk',
          'objekt::field_developer' => 'objekt::field_developer',
          'objekt::field_heating_type' => 'objekt::field_heating_type',
          'objekt::field_moving_in_from' => 'objekt::field_moving_in_from',
          'objekt::field_no_of_floors' => 'objekt::field_no_of_floors',
          'objekt::field_object_description' => 'objekt::field_object_description',
          'objekt::field_object_images' => 'objekt::field_object_images',
          'objekt::field_object_location' => 'objekt::field_object_location',
          'objekt::field_object_other' => 'objekt::field_object_other',
          'objekt::field_objekt_wkt' => 'objekt::field_objekt_wkt',
          'objekt::field_objektid_nunumeric' => 'objekt::field_objektid_nunumeric',
          'objekt::field_rent_commission' => 'objekt::field_rent_commission',
          'objekt::field_sale_commission' => 'objekt::field_sale_commission',
          'objekt::field_status_quo' => 'objekt::field_status_quo',
          'objekt::field_topobjekt' => 'objekt::field_topobjekt',
          'objekt::field_year_built' => 'objekt::field_year_built',
          'objekt::field_ansprechpartner' => 'objekt::field_ansprechpartner',
          'objekt::field_address' => 'objekt::field_address',
          'objekt::title_field' => 'objekt::title_field',
          'objekt::field_kategorie' => 'objekt::field_kategorie',
          'objekt::field_obj_apartments' => 'objekt::field_obj_apartments',
          'apartment::field_apart_bathrooms' => 'apartment::field_apart_bathrooms',
          'apartment::field_apart_description' => 'apartment::field_apart_description',
          'apartment::field_apart_floor' => 'apartment::field_apart_floor',
          'apartment::field_apart_hoa_fee' => 'apartment::field_apart_hoa_fee',
          'apartment::field_apart_living_space' => 'apartment::field_apart_living_space',
          'apartment::field_apart_location' => 'apartment::field_apart_location',
          'apartment::field_apart_no' => 'apartment::field_apart_no',
          'apartment::field_apart_other' => 'apartment::field_apart_other',
          'apartment::field_apart_price' => 'apartment::field_apart_price',
          'apartment::field_apart_price_parking' => 'apartment::field_apart_price_parking',
          'apartment::field_apart_rooms' => 'apartment::field_apart_rooms',
          'apartment::field_object_ref' => 'apartment::field_object_ref',
          'apartment::field_apart_pictures' => 'apartment::field_apart_pictures',
          'apartment::field_apart_sleeping_rooms' => 'apartment::field_apart_sleeping_rooms',
          'apartment::field_moving_in_from' => 'apartment::field_moving_in_from',
          'apartment::field_apart_commission' => 'apartment::field_apart_commission',
          'apartment::field_ausstattung' => 'apartment::field_ausstattung',
          'apartment::field_apart_floor_plan' => 'apartment::field_apart_floor_plan',
          'apartment::title_field' => 'apartment::title_field',
          'apartment::field_kategorie' => 'apartment::field_kategorie',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::465' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::redhen_fields_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::auto_entitylabel_entity_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<a href="/node/[nid]/edit?destination=admin/dash" title="Objekt bearbeiten">bearbeiten</a> | <a href="/node/[nid]/translate?destination=admin/dash" title="Objekt übersetzen">übersetzen</a>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Seite';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/[nid]?destination=/admin/dash" title="Objekt ansehen">[title]</a> | [edit_node]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Letze Änderung';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
    'webform' => 'webform',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Objekt ID (field_objektid_nunumeric) */
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['id'] = 'field_objektid_nunumeric_value';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['field'] = 'field_objektid_nunumeric_value';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['group'] = 1;
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['operator_id'] = 'field_objektid_nunumeric_value_op';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['label'] = 'Objekt ID';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['operator'] = 'field_objektid_nunumeric_value_op';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['identifier'] = 'field_objektid_nunumeric_value';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Borough (field_bezirk) */
  $handler->display->display_options['filters']['field_bezirk_tid']['id'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['table'] = 'field_data_field_bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['field'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_bezirk_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator_id'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['label'] = 'Bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['identifier'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_bezirk_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_bezirk_tid']['vocabulary'] = 'vocabulary_3';
  $handler->display->display_options['filters']['field_bezirk_tid']['hierarchy'] = 1;
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = '1';
  $handler->display->display_options['filters']['sid']['expose']['workflow_include_all'] = TRUE;
  $handler->display->display_options['path'] = 'admin/dash/seiten';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Seiten';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['admin'] = $view;

  $view = new view();
  $view->name = 'expose';
  $view->description = 'Exportiert Objekt- und Wohnungsdaten als Exposé';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Expose';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_object_ref_target_id']['id'] = 'field_object_ref_target_id';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['table'] = 'field_data_field_object_ref';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['field'] = 'field_object_ref_target_id';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['label'] = 'Objekt';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['required'] = TRUE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_expose_per_e_mail_verschicken' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_expose_speichern' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::flag_node_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::redhen_fields_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['relationship'] = 'field_objekt_ref_nid';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Borough */
  $handler->display->display_options['fields']['field_bezirk']['id'] = 'field_bezirk';
  $handler->display->display_options['fields']['field_bezirk']['table'] = 'field_data_field_bezirk';
  $handler->display->display_options['fields']['field_bezirk']['field'] = 'field_bezirk';
  $handler->display->display_options['fields']['field_bezirk']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_bezirk']['label'] = '';
  $handler->display->display_options['fields']['field_bezirk']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bezirk']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_bezirk']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_bezirk']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Fittings */
  $handler->display->display_options['fields']['field_ausstattung']['id'] = 'field_ausstattung';
  $handler->display->display_options['fields']['field_ausstattung']['table'] = 'field_data_field_ausstattung';
  $handler->display->display_options['fields']['field_ausstattung']['field'] = 'field_ausstattung';
  $handler->display->display_options['fields']['field_ausstattung']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ausstattung']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ausstattung']['type'] = 'i18n_taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_ausstattung']['delta_offset'] = '0';
  /* Field: Content: Commission */
  $handler->display->display_options['fields']['field_apart_commission']['id'] = 'field_apart_commission';
  $handler->display->display_options['fields']['field_apart_commission']['table'] = 'field_data_field_apart_commission';
  $handler->display->display_options['fields']['field_apart_commission']['field'] = 'field_apart_commission';
  $handler->display->display_options['fields']['field_apart_commission']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_commission']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_apart_commission']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Purchasing price */
  $handler->display->display_options['fields']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['table'] = 'field_data_field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Content: HOA fee */
  $handler->display->display_options['fields']['field_apart_hoa_fee']['id'] = 'field_apart_hoa_fee';
  $handler->display->display_options['fields']['field_apart_hoa_fee']['table'] = 'field_data_field_apart_hoa_fee';
  $handler->display->display_options['fields']['field_apart_hoa_fee']['field'] = 'field_apart_hoa_fee';
  $handler->display->display_options['fields']['field_apart_hoa_fee']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_hoa_fee']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_apart_hoa_fee']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Living space */
  $handler->display->display_options['fields']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['table'] = 'field_data_field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_living_space']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Rooms */
  $handler->display->display_options['fields']['field_apart_rooms']['id'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['table'] = 'field_data_field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['field'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_rooms']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Sleeping rooms */
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['id'] = 'field_apart_sleeping_rooms';
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['table'] = 'field_data_field_apart_sleeping_rooms';
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['field'] = 'field_apart_sleeping_rooms';
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Floor */
  $handler->display->display_options['fields']['field_apart_floor']['id'] = 'field_apart_floor';
  $handler->display->display_options['fields']['field_apart_floor']['table'] = 'field_data_field_apart_floor';
  $handler->display->display_options['fields']['field_apart_floor']['field'] = 'field_apart_floor';
  $handler->display->display_options['fields']['field_apart_floor']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_floor']['empty_zero'] = TRUE;
  /* Field: Content: No. of floors */
  $handler->display->display_options['fields']['field_no_of_floors']['id'] = 'field_no_of_floors';
  $handler->display->display_options['fields']['field_no_of_floors']['table'] = 'field_data_field_no_of_floors';
  $handler->display->display_options['fields']['field_no_of_floors']['field'] = 'field_no_of_floors';
  $handler->display->display_options['fields']['field_no_of_floors']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_no_of_floors']['hide_empty'] = TRUE;
  /* Field: Content: Status quo */
  $handler->display->display_options['fields']['field_status_quo']['id'] = 'field_status_quo';
  $handler->display->display_options['fields']['field_status_quo']['table'] = 'field_data_field_status_quo';
  $handler->display->display_options['fields']['field_status_quo']['field'] = 'field_status_quo';
  $handler->display->display_options['fields']['field_status_quo']['hide_empty'] = TRUE;
  /* Field: Content: Year built */
  $handler->display->display_options['fields']['field_year_built']['id'] = 'field_year_built';
  $handler->display->display_options['fields']['field_year_built']['table'] = 'field_data_field_year_built';
  $handler->display->display_options['fields']['field_year_built']['field'] = 'field_year_built';
  $handler->display->display_options['fields']['field_year_built']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_year_built']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_year_built']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_year_built']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Floor plan */
  $handler->display->display_options['fields']['field_apart_floor_plan']['id'] = 'field_apart_floor_plan';
  $handler->display->display_options['fields']['field_apart_floor_plan']['table'] = 'field_data_field_apart_floor_plan';
  $handler->display->display_options['fields']['field_apart_floor_plan']['field'] = 'field_apart_floor_plan';
  $handler->display->display_options['fields']['field_apart_floor_plan']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_floor_plan']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_apart_floor_plan']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_apart_floor_plan']['delta_offset'] = '0';
  /* Field: Content: Apartment description */
  $handler->display->display_options['fields']['field_apart_description']['id'] = 'field_apart_description';
  $handler->display->display_options['fields']['field_apart_description']['table'] = 'field_data_field_apart_description';
  $handler->display->display_options['fields']['field_apart_description']['field'] = 'field_apart_description';
  $handler->display->display_options['fields']['field_apart_description']['label'] = 'Beschreibung';
  $handler->display->display_options['fields']['field_apart_description']['hide_empty'] = TRUE;
  /* Field: Content: Apartment location */
  $handler->display->display_options['fields']['field_apart_location']['id'] = 'field_apart_location';
  $handler->display->display_options['fields']['field_apart_location']['table'] = 'field_data_field_apart_location';
  $handler->display->display_options['fields']['field_apart_location']['field'] = 'field_apart_location';
  $handler->display->display_options['fields']['field_apart_location']['label'] = 'Lage';
  $handler->display->display_options['fields']['field_apart_location']['hide_empty'] = TRUE;
  /* Field: Content: Apartment other */
  $handler->display->display_options['fields']['field_apart_other']['id'] = 'field_apart_other';
  $handler->display->display_options['fields']['field_apart_other']['table'] = 'field_data_field_apart_other';
  $handler->display->display_options['fields']['field_apart_other']['field'] = 'field_apart_other';
  $handler->display->display_options['fields']['field_apart_other']['label'] = 'Sonstiges';
  $handler->display->display_options['fields']['field_apart_other']['hide_empty'] = TRUE;
  /* Field: Content: Object images */
  $handler->display->display_options['fields']['field_object_images']['id'] = 'field_object_images';
  $handler->display->display_options['fields']['field_object_images']['table'] = 'field_data_field_object_images';
  $handler->display->display_options['fields']['field_object_images']['field'] = 'field_object_images';
  $handler->display->display_options['fields']['field_object_images']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_object_images']['label'] = '';
  $handler->display->display_options['fields']['field_object_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_images']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_object_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_object_images']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_object_images']['delta_offset'] = '0';
  /* Field: Content: Ansprechpartner */
  $handler->display->display_options['fields']['field_ansprechpartner']['id'] = 'field_ansprechpartner';
  $handler->display->display_options['fields']['field_ansprechpartner']['table'] = 'field_data_field_ansprechpartner';
  $handler->display->display_options['fields']['field_ansprechpartner']['field'] = 'field_ansprechpartner';
  $handler->display->display_options['fields']['field_ansprechpartner']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_ansprechpartner']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ansprechpartner']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ansprechpartner']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_ansprechpartner']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
  );
  /* Field: Content: Standort */
  $handler->display->display_options['fields']['field_objekt_wkt']['id'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['table'] = 'field_data_field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['field'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_objekt_wkt']['label'] = '';
  $handler->display->display_options['fields']['field_objekt_wkt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_objekt_wkt']['type'] = 'geofield_leaflet';
  $handler->display->display_options['fields']['field_objekt_wkt']['settings'] = array(
    'leaflet_map' => 'leaflet-mapbox',
    'height' => '400',
    'popup' => array(
      'show' => 0,
      'text' => '',
    ),
    'zoom' => array(
      'initialZoom' => '16',
      'minZoom' => '16',
      'maxZoom' => '16',
    ),
    'icon' => array(
      'iconType' => 'marker',
      'iconUrl' => '',
      'shadowUrl' => 'sites/all/themes/bear_skin/images/Icon_House.png',
      'html' => '',
      'iconImageStyle' => '',
      'htmlClass' => '',
      'iconSize' => array(
        'x' => '',
        'y' => '',
      ),
      'iconAnchor' => array(
        'x' => '',
        'y' => '',
      ),
      'shadowAnchor' => array(
        'x' => '',
        'y' => '',
      ),
      'popupAnchor' => array(
        'x' => '',
        'y' => '',
      ),
    ),
    'vector_display' => array(
      'stroke_override' => 0,
      'stroke' => 0,
      'color' => '',
      'weight' => '',
      'opacity' => '',
      'dashArray' => '',
      'fill' => 0,
      'fillColor' => '',
      'fillOpacity' => '',
      'clickable' => 0,
    ),
  );
  /* Field: Content: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['label'] = '';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_objektid_nunumeric']['element_label_colon'] = FALSE;
  /* Field: PDF: Page Number */
  $handler->display->display_options['fields']['page_number']['id'] = 'page_number';
  $handler->display->display_options['fields']['page_number']['table'] = 'pdf';
  $handler->display->display_options['fields']['page_number']['field'] = 'page_number';
  $handler->display->display_options['fields']['page_number']['label'] = 'Page';
  $handler->display->display_options['fields']['page_number']['element_label_colon'] = FALSE;
  /* Field: Content: Apartment No. */
  $handler->display->display_options['fields']['field_apart_no']['id'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['table'] = 'field_data_field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['field'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['label'] = '';
  $handler->display->display_options['fields']['field_apart_no']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_apart_no']['alter']['text'] = '[field_objektid_nunumeric]-[field_apart_no]';
  $handler->display->display_options['fields']['field_apart_no']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
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
  /* Filter criterion: Content: Object (field_object_ref) */
  $handler->display->display_options['filters']['field_object_ref_target_id']['id'] = 'field_object_ref_target_id';
  $handler->display->display_options['filters']['field_object_ref_target_id']['table'] = 'field_data_field_object_ref';
  $handler->display->display_options['filters']['field_object_ref_target_id']['field'] = 'field_object_ref_target_id';
  $handler->display->display_options['filters']['field_object_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_object_ref_target_id']['expose']['operator_id'] = 'field_object_ref_target_id_op';
  $handler->display->display_options['filters']['field_object_ref_target_id']['expose']['label'] = 'Objekt';
  $handler->display->display_options['filters']['field_object_ref_target_id']['expose']['operator'] = 'field_object_ref_target_id_op';
  $handler->display->display_options['filters']['field_object_ref_target_id']['expose']['identifier'] = 'field_object_ref_target_id';
  $handler->display->display_options['filters']['field_object_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );

  /* Display: PDF Page */
  $handler = $view->new_display('pdf', 'PDF Page', 'pdf_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'pdf_unformatted';
  $handler->display->display_options['row_plugin'] = 'pdf_fields';
  $handler->display->display_options['row_options']['formats'] = array(
    'title' => array(
      'position' => array(
        'object' => 'page',
        'corner' => 'top_left',
        'x' => '200',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '16',
        'font_family' => 'helvetica',
        'font_style' => array(
          'b' => 'b',
          'i' => 0,
          'u' => 0,
          'd' => 0,
          'o' => 0,
        ),
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_address' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_bezirk' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'body' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '50',
        'width' => '100',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_ausstattung' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_commission' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_price' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_hoa_fee' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_living_space' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_rooms' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_sleeping_rooms' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_floor' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_no_of_floors' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_status_quo' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_year_built' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_floor_plan' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_description' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_location' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_other' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_object_images' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_objekt_wkt' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'page_number' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_no' => array(
      'position' => array(
        'object' => 'header_footer',
        'corner' => 'top_right',
        'x' => '-200',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => 'R',
        'hyphenate' => NULL,
        'color' => '4a4a4a',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
  );
  $handler->display->display_options['row_options']['leading_template'] = '0';
  $handler->display->display_options['row_options']['template'] = 'expoe_template.pdf';
  $handler->display->display_options['row_options']['succeed_template'] = '0';
  $handler->display->display_options['path'] = 'node/%/exposes';
  $handler->display->display_options['leading_template'] = '0';
  $handler->display->display_options['template'] = 'hk_expose_template.pdf';
  $handler->display->display_options['succeed_template'] = 'hk_expose_08_agb.pdf';
  $handler->display->display_options['default_font_family'] = 'pdfahelvetica';
  $handler->display->display_options['default_font_style'] = array(
    'b' => 0,
    'i' => 0,
    'u' => 0,
    'd' => 0,
    'o' => 0,
  );
  $handler->display->display_options['default_font_size'] = '12';

  /* Display: Exposé Admin Page */
  $handler = $view->new_display('pdf', 'Exposé Admin Page', 'pdf_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'pdf_unformatted';
  $handler->display->display_options['row_plugin'] = 'pdf_fields';
  $handler->display->display_options['row_options']['formats'] = array(
    'title' => array(
      'position' => array(
        'object' => 'page',
        'corner' => 'top_left',
        'x' => '200',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '16',
        'font_family' => 'helvetica',
        'font_style' => array(
          'b' => 'b',
          'i' => 0,
          'u' => 0,
          'd' => 0,
          'o' => 0,
        ),
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_address' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_bezirk' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'body' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '50',
        'width' => '100',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_ausstattung' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_commission' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_price' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_hoa_fee' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_living_space' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_rooms' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_sleeping_rooms' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_floor' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_no_of_floors' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_status_quo' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_year_built' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_floor_plan' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_description' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_location' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_other' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_object_images' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_objekt_wkt' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'page_number' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_apart_no' => array(
      'position' => array(
        'object' => 'header_footer',
        'corner' => 'top_right',
        'x' => '-200',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '12',
        'font_family' => 'helvetica',
        'font_style' => NULL,
        'align' => 'R',
        'hyphenate' => NULL,
        'color' => '4a4a4a',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
  );
  $handler->display->display_options['row_options']['leading_template'] = '0';
  $handler->display->display_options['row_options']['template'] = 'expoe_template.pdf';
  $handler->display->display_options['row_options']['succeed_template'] = '0';
  $handler->display->display_options['path'] = 'admin/content/exposes';
  $handler->display->display_options['leading_template'] = '0';
  $handler->display->display_options['template'] = 'expoe_template.pdf';
  $handler->display->display_options['succeed_template'] = '0';
  $handler->display->display_options['default_font_family'] = 'pdfahelvetica';
  $handler->display->display_options['default_font_style'] = array(
    'b' => 0,
    'i' => 0,
    'u' => 0,
    'd' => 0,
    'o' => 0,
  );
  $handler->display->display_options['default_font_size'] = '12';
  $export['expose'] = $view;

  return $export;
}
