<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function flashcard_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_2nd
  $groups['flashcard-group_2nd'] = array(
    'group_type' => 'standard',
    'type_name' => 'flashcard',
    'group_name' => 'group_2nd',
    'label' => 'Secnod Language',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '24',
    'fields' => array(
      '0' => 'field_lang_l1_txt',
      '1' => 'field_lang_l1_audio',
      '2' => 'field_lang_l2_txt',
      '3' => 'field_lang_l2_audio',
      '4' => 'field_2nd_isphrase',
      '5' => 'field_2nd_words',
    ),
  );

  // Exported group: group_en
  $groups['flashcard-group_en'] = array(
    'group_type' => 'standard',
    'type_name' => 'flashcard',
    'group_name' => 'group_en',
    'label' => 'English',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '23',
    'fields' => array(
      '0' => 'field_en_l1_txt',
      '1' => 'field_en_l1_audio',
      '2' => 'field_en_l2_txt',
      '3' => 'field_en_l2_audio',
      '4' => 'field_en_isphrase',
      '5' => 'field_en_words',
    ),
  );

  // Exported group: group_fc
  $groups['flashcard-group_fc'] = array(
    'group_type' => 'standard',
    'type_name' => 'flashcard',
    'group_name' => 'group_fc',
    'label' => 'Flashcard',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '22',
    'fields' => array(
      '0' => 'field_language',
      '1' => 'field_image',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('English');
  t('Flashcard');
  t('Secnod Language');

  return $groups;
}
