<?php
/**
 * @file
 * hk_translations.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hk_translations_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'accept translation jobs'.
  $permissions['accept translation jobs'] = array(
    'name' => 'accept translation jobs',
    'roles' => array(
      'administrator' => 'administrator',
      'Übersetzen' => 'Übersetzen',
    ),
    'module' => 'tmgmt',
  );

  // Exported permission: 'administer tmgmt'.
  $permissions['administer tmgmt'] = array(
    'name' => 'administer tmgmt',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tmgmt',
  );

  // Exported permission: 'administer translation tasks'.
  $permissions['administer translation tasks'] = array(
    'name' => 'administer translation tasks',
    'roles' => array(
      'administrator' => 'administrator',
      'Übersetzen' => 'Übersetzen',
    ),
    'module' => 'tmgmt_local',
  );

  // Exported permission: 'create translation jobs'.
  $permissions['create translation jobs'] = array(
    'name' => 'create translation jobs',
    'roles' => array(
      'administrator' => 'administrator',
      'Übersetzen' => 'Übersetzen',
    ),
    'module' => 'tmgmt',
  );

  // Exported permission: 'provide translation services'.
  $permissions['provide translation services'] = array(
    'name' => 'provide translation services',
    'roles' => array(
      'administrator' => 'administrator',
      'Übersetzen' => 'Übersetzen',
    ),
    'module' => 'tmgmt_local',
  );

  // Exported permission: 'submit translation jobs'.
  $permissions['submit translation jobs'] = array(
    'name' => 'submit translation jobs',
    'roles' => array(
      'administrator' => 'administrator',
      'Übersetzen' => 'Übersetzen',
    ),
    'module' => 'tmgmt',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'administrator' => 'administrator',
      'Übersetzen' => 'Übersetzen',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate any entity'.
  $permissions['translate any entity'] = array(
    'name' => 'translate any entity',
    'roles' => array(
      'administrator' => 'administrator',
      'Übersetzen' => 'Übersetzen',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'administrator' => 'administrator',
      'Übersetzen' => 'Übersetzen',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate node entities'.
  $permissions['translate node entities'] = array(
    'name' => 'translate node entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'administrator' => 'administrator',
      'Übersetzen' => 'Übersetzen',
    ),
    'module' => 'i18n_string',
  );

  return $permissions;
}
