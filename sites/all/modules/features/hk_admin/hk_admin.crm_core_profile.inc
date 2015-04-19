<?php
/**
 * @file
 * hk_admin.crm_core_profile.inc
 */

/**
 * Implements hook_default_crm_core_profile().
 */
function hk_admin_default_crm_core_profile() {
  $export = array();

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'anfrage';
  $crm_core_profile->label = 'Anfrage';
  $crm_core_profile->entities = array(
    'crm_core_contact' => array(
      'label' => 'CRM Core Contact',
      'status' => 1,
      'bundle' => 'individual',
      'fields_container' => array(
        'fields' => array(
          'contact_name' => 'contact_name',
          'field_contact_telefon' => 'field_contact_telefon',
          'field_contact_fax' => 'field_contact_fax',
          'field_contact_email' => 'field_contact_email',
          'field_contact_position' => 0,
          'field_contact_bild' => 0,
          'field_contact_typ' => 0,
        ),
      ),
      'prepopulate' => 1,
      'prepopulate_type' => 'current_user',
    ),
    'crm_core_activity' => array(
      'label' => 'CRM Core Activity',
      'status' => 1,
      'bundle' => 'anfrage',
      'fields_container' => array(
        'fields' => array(
          'field_activity_participants' => 'field_activity_participants',
          'field_activity_notes' => 'field_activity_notes',
          'field_activity_status' => 'field_activity_status',
          'field_activity_bearbeiter' => 'field_activity_bearbeiter',
          'field_angefragte_wohnung' => 'field_angefragte_wohnung',
          'title' => 0,
          'field_activity_date' => 0,
        ),
      ),
    ),
  );
  $crm_core_profile->fields = array(
    'crm_core_contact_individual_contact_name' => array(
      'field_name' => 'contact_name',
      'field_item' => '',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'weight' => '-47',
    ),
    'crm_core_contact_individual_contact_name_title' => array(
      'field_name' => 'contact_name',
      'field_item' => 'title',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 1,
      'default' => '',
      'weight' => '-41',
    ),
    'crm_core_contact_individual_contact_name_given' => array(
      'field_name' => 'contact_name',
      'field_item' => 'given',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-46',
    ),
    'crm_core_contact_individual_contact_name_middle' => array(
      'field_name' => 'contact_name',
      'field_item' => 'middle',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 1,
      'default' => '',
      'weight' => '-40',
    ),
    'crm_core_contact_individual_contact_name_family' => array(
      'field_name' => 'contact_name',
      'field_item' => 'family',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-45',
    ),
    'crm_core_contact_individual_contact_name_generational' => array(
      'field_name' => 'contact_name',
      'field_item' => 'generational',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 1,
      'default' => '',
      'weight' => '-37',
    ),
    'crm_core_contact_individual_contact_name_credentials' => array(
      'field_name' => 'contact_name',
      'field_item' => 'credentials',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 1,
      'default' => '',
      'weight' => '-36',
    ),
    'crm_core_contact_individual_field_contact_telefon' => array(
      'field_name' => 'field_contact_telefon',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-43',
    ),
    'crm_core_contact_individual_field_contact_fax' => array(
      'field_name' => 'field_contact_fax',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-42',
    ),
    'crm_core_contact_individual_field_contact_email' => array(
      'field_name' => 'field_contact_email',
      'field_item' => '',
      'handler' => 'emailProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-44',
    ),
    'crm_core_activity_anfrage_field_activity_participants' => array(
      'field_name' => 'field_activity_participants',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'anfrage',
      'status' => 1,
      'hidden' => 1,
      'default' => array(),
      'weight' => '-50',
    ),
    'crm_core_activity_anfrage_field_activity_notes' => array(
      'field_name' => 'field_activity_notes',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'anfrage',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-39',
    ),
    'crm_core_activity_anfrage_field_activity_status' => array(
      'field_name' => 'field_activity_status',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'anfrage',
      'status' => 1,
      'hidden' => 1,
      'default' => '0',
      'weight' => '-49',
    ),
    'crm_core_activity_anfrage_field_activity_bearbeiter' => array(
      'field_name' => 'field_activity_bearbeiter',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'anfrage',
      'status' => 1,
      'hidden' => 1,
      'default' => array(
        0 => array(
          'target_id' => NULL,
        ),
      ),
      'weight' => '-38',
    ),
    'crm_core_activity_anfrage_field_angefragte_wohnung' => array(
      'field_name' => 'field_angefragte_wohnung',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'anfrage',
      'status' => 1,
      'hidden' => 0,
      'default' => array(
        0 => array(
          'target_id' => '',
        ),
      ),
      'weight' => '-48',
    ),
  );
  $crm_core_profile->block = FALSE;
  $crm_core_profile->block_title = '';
  $crm_core_profile->page = TRUE;
  $crm_core_profile->page_title = 'Inquiry';
  $crm_core_profile->page_path = 'anfrage';
  $crm_core_profile->page_redirect = '';
  $crm_core_profile->message = 'Thank you for sending your inquiry. We will get back to you as soon as possible.';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1428845767;
  $crm_core_profile->contact_match = 'default';
  $crm_core_profile->contact_match_engines = array();
  $crm_core_profile->access_control = 'default';
  $crm_core_profile->access_control_perm = 'none';
  $crm_core_profile->roles = array(
    'anonymous user' => 'anonymous user',
    'authenticated user' => 'authenticated user',
  );
  $export['anfrage'] = $crm_core_profile;

  return $export;
}
