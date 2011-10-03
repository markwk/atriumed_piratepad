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

  // Exported permission: create piratepad
  $permissions['create piratepad'] = array(
    'name' => 'create piratepad',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any piratepad
  $permissions['delete any piratepad'] = array(
    'name' => 'delete any piratepad',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete own piratepad
  $permissions['delete own piratepad'] = array(
    'name' => 'delete own piratepad',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any piratepad
  $permissions['edit any piratepad'] = array(
    'name' => 'edit any piratepad',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit own piratepad
  $permissions['edit own piratepad'] = array(
    'name' => 'edit own piratepad',
    'roles' => array(
      '0' => 'authenticated user',
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
