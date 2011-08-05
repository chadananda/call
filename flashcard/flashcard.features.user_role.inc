<?php

/**
 * Implementation of hook_user_default_roles().
 */
function flashcard_user_default_roles() {
  $roles = array();

  // Exported role: Student
  $roles['Student'] = array(
    'name' => 'Student',
  );

  // Exported role: Teacher
  $roles['Teacher'] = array(
    'name' => 'Teacher',
  );

  return $roles;
}
