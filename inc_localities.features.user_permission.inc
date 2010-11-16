<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function inc_localities_user_default_permissions() {
  $permissions = array();

  // Exported permission: create loc content
  $permissions['create loc content'] = array(
    'name' => 'create loc content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any loc content
  $permissions['delete any loc content'] = array(
    'name' => 'delete any loc content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own loc content
  $permissions['delete own loc content'] = array(
    'name' => 'delete own loc content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any loc content
  $permissions['edit any loc content'] = array(
    'name' => 'edit any loc content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own loc content
  $permissions['edit own loc content'] = array(
    'name' => 'edit own loc content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
