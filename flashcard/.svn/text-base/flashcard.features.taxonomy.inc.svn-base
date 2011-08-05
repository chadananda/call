<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function flashcard_taxonomy_default_vocabularies() {
  return array(
    'fc_catagories' => array(
      'name' => 'Flash Card Catagories',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_fc_catagories',
      'weight' => '0',
      'nodes' => array(
        'flashcard' => 'flashcard',
      ),
    ),
    'fc_pos' => array(
      'name' => 'Parts of Speech',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '1',
      'tags' => '0',
      'module' => 'features_fc_pos',
      'weight' => '0',
      'nodes' => array(
        'flashcard' => 'flashcard',
      ),
    ),
  );
}
