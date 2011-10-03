<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function atriumed_piratepad_user_default_permissions() {
  $permissions = array();

  // Exported permission: administrator piratepad
  $permissions['administrator piratepad'] = array(
    'name' => 'administrator piratepad',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: view editable piratepad
  $permissions['view editable piratepad'] = array(
    'name' => 'view editable piratepad',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view piratepad
  $permissions['view piratepad'] = array(
    'name' => 'view piratepad',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
