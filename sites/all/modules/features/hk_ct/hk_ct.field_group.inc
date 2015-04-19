<?php
/**
 * @file
 * hk_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function hk_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ansprechpartner|node|objekt|form';
  $field_group->group_name = 'group_ansprechpartner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Ansprechpartner',
    'weight' => '7',
    'children' => array(
      0 => 'field_ansprechpartner',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ansprechpartner field-group-tab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_ansprechpartner|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_apart_publish|node|apartment|form';
  $field_group->group_name = 'group_apart_publish';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Veröffentlichen',
    'weight' => '1',
    'children' => array(
      0 => 'field_save_workflow',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-apart-publish field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_apart_publish|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|apartment|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Basic fields',
    'weight' => '1',
    'children' => array(
      0 => 'field_apart_living_space',
      1 => 'field_apart_no',
      2 => 'field_apart_price',
      3 => 'field_apart_rooms',
      4 => 'field_object_ref',
      5 => 'title_field',
      6 => 'field_kategorie',
      7 => 'field_objektid_nunumeric',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic field-group-tab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_basic|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_content|node|objekt|teaser';
  $field_group->group_name = 'group_card_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_project_card';
  $field_group->data = array(
    'label' => 'card-content',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'node_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'card-content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-card-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_card_content|node|objekt|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card|node|apartment|teaser';
  $field_group->group_name = 'group_card';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card',
    'weight' => '0',
    'children' => array(
      0 => 'field_apart_living_space',
      1 => 'field_apart_price',
      2 => 'field_apart_pictures',
      3 => 'field_kategorie',
      4 => 'flag_merken',
      5 => 'adresse',
      6 => 'neu_label',
      7 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Card',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-card',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_card|node|apartment|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_costs|node|apartment|form';
  $field_group->group_name = 'group_costs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Costs',
    'weight' => '2',
    'children' => array(
      0 => 'field_apart_hoa_fee',
      1 => 'field_apart_price_parking',
      2 => 'field_apart_commission',
      3 => 'field_apart_net_rent',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-costs field-group-tab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_costs|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features|node|apartment|form';
  $field_group->group_name = 'group_features';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Features',
    'weight' => '5',
    'children' => array(
      0 => 'field_apart_bathrooms',
      1 => 'field_apart_floor',
      2 => 'field_apart_sleeping_rooms',
      3 => 'field_moving_in_from',
      4 => 'field_ausstattung',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-features field-group-tab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_features|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal|node|apartment|form';
  $field_group->group_name = 'group_horizontal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal Menu',
    'weight' => '0',
    'children' => array(
      0 => 'group_basic',
      1 => 'group_costs',
      2 => 'group_features',
      3 => 'group_images',
      4 => 'group_texte',
      5 => 'group_returns',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-horizontal field-group-htabs',
      ),
    ),
  );
  $export['group_horizontal|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal|node|objekt|form';
  $field_group->group_name = 'group_horizontal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal Menu',
    'weight' => '0',
    'children' => array(
      0 => 'group_ansprechpartner',
      1 => 'group_ht_basis',
      2 => 'group_ht_bilder',
      3 => 'group_ht_merkmale',
      4 => 'group_ht_texte',
      5 => 'group_obj_apartments',
      6 => 'group_ort',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-horizontal field-group-htabs',
      ),
    ),
  );
  $export['group_horizontal|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ht_basis|node|objekt|form';
  $field_group->group_name = 'group_ht_basis';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Basisdaten',
    'weight' => '1',
    'children' => array(
      0 => 'field_objektid_nunumeric',
      1 => 'title_field',
      2 => 'field_kategorie',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Basisdaten',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ht-basis field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ht_basis|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ht_bilder|node|objekt|form';
  $field_group->group_name = 'group_ht_bilder';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Bilder',
    'weight' => '5',
    'children' => array(
      0 => 'field_object_images',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ht-bilder field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_ht_bilder|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ht_merkmale|node|objekt|form';
  $field_group->group_name = 'group_ht_merkmale';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Merkmale',
    'weight' => '4',
    'children' => array(
      0 => 'field_developer',
      1 => 'field_heating_type',
      2 => 'field_moving_in_from',
      3 => 'field_no_of_floors',
      4 => 'field_rent_commission',
      5 => 'field_sale_commission',
      6 => 'field_status_quo',
      7 => 'field_year_built',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ht-merkmale field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_ht_merkmale|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ht_texte|node|objekt|form';
  $field_group->group_name = 'group_ht_texte';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Texte',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_object_description',
      2 => 'field_object_location',
      3 => 'field_object_other',
      4 => 'field_topobjekt',
      5 => 'group_multiapart',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ht-texte field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_ht_texte|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_images|node|apartment|form';
  $field_group->group_name = 'group_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '6',
    'children' => array(
      0 => 'field_apart_pictures',
      1 => 'field_apart_floor_plan',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-images field-group-tab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_images|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_merkmale|node|apartment|default';
  $field_group->group_name = 'group_merkmale';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Merkmale',
    'weight' => '32',
    'children' => array(
      0 => 'field_apart_bathrooms',
      1 => 'field_apart_floor',
      2 => 'field_apart_hoa_fee',
      3 => 'field_apart_price_parking',
      4 => 'field_apart_sleeping_rooms',
      5 => 'field_moving_in_from',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Merkmale',
      'instance_settings' => array(
        'classes' => 'group-merkmale',
        'element' => 'table',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_merkmale|node|apartment|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_merkmale|node|objekt|default';
  $field_group->group_name = 'group_merkmale';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Merkmale',
    'weight' => '1',
    'children' => array(
      0 => 'field_bezirk',
      1 => 'field_developer',
      2 => 'field_heating_type',
      3 => 'field_moving_in_from',
      4 => 'field_no_of_floors',
      5 => 'field_objektid_nunumeric',
      6 => 'field_rent_commission',
      7 => 'field_status_quo',
      8 => 'field_year_built',
      9 => 'field_address',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Merkmale',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-merkmale',
        'wrapper' => 'aside',
      ),
    ),
  );
  $export['group_merkmale|node|objekt|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_multiapart|node|objekt|form';
  $field_group->group_name = 'group_multiapart';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ht_texte';
  $field_group->data = array(
    'label' => 'Mehrere Apartmenttypen im Objekt',
    'weight' => '-2',
    'children' => array(
      0 => 'field_object_description_invest',
      1 => 'field_object_desc_commercial',
      2 => 'field_object_multi_apart_types',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-multiapart field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_multiapart|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_obj_apartments|node|objekt|form';
  $field_group->group_name = 'group_obj_apartments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Apartments',
    'weight' => '6',
    'children' => array(
      0 => 'field_obj_apartments',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-obj-apartments field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_obj_apartments|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ort|node|objekt|form';
  $field_group->group_name = 'group_ort';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Ort',
    'weight' => '2',
    'children' => array(
      0 => 'field_bezirk',
      1 => 'field_address',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ort field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_ort|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_card|node|objekt|teaser';
  $field_group->group_name = 'group_project_card';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card',
    'weight' => '0',
    'children' => array(
      0 => 'field_object_images',
      1 => 'title',
      2 => 'group_card_content',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Card',
      'instance_settings' => array(
        'classes' => 'group-project-card clearfix',
        'element' => 'article',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_project_card|node|objekt|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publish|node|objekt|form';
  $field_group->group_name = 'group_publish';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Veröffentlichen',
    'weight' => '2',
    'children' => array(
      0 => 'field_save_workflow',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-publish field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_publish|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_texte|node|apartment|form';
  $field_group->group_name = 'group_texte';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Texte',
    'weight' => '4',
    'children' => array(
      0 => 'field_apart_description',
      1 => 'field_apart_location',
      2 => 'field_apart_other',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-texte field-group-tab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_texte|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|node|objekt|default';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_object_description',
      2 => 'field_object_location',
      3 => 'field_object_other',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Text',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-text',
        'wrapper' => 'article',
      ),
    ),
  );
  $export['group_text|node|objekt|default'] = $field_group;

  return $export;
}
