<?php

/**
 * Implementation of hook_node_info().
 */
function flashcard_node_info() {
  $items = array(
    'course' => array(
      'name' => t('Course'),
      'module' => 'features',
      'description' => t('A set of Units managed by teachers and used by students.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'flashcard' => array(
      'name' => t('Flashcard'),
      'module' => 'features',
      'description' => t('Flashcard system for drilling from and to English.
'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'unit' => array(
      'name' => t('Unit'),
      'module' => 'features',
      'description' => t('A set of flash cards based on a grammar rule or subject.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
