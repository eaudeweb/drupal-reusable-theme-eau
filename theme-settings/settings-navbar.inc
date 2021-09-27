<?php
/**
 * @file
 * Eau de Web theme file.
 */

$form['navbar']['settings'] = [
    '#type' => 'details',
    '#title' => t('General settings'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  ];

    // $form['navbar']['settings']['ts__navbar_type'] = [
    //   '#type' => 'select',
    //   '#title' => t('Select header type'),
    //   '#default_value' => theme_get_setting('ts__navbar_type'),
    //   '#description' => t('some regions can\'t be used independently of the chosen header.'),
    //   '#options' => [
    //     'default' => 'Default',
    //     'floating' => 'Floating',
    //     'topbar' => 'Topbar',
    //   ],
    // ];

    $form['navbar']['settings']['ns__navbar_position'] = [
      '#type' => 'select',
      '#title' => t('Header position'),
      '#default_value' => theme_get_setting('ns__navbar_position'),
      '#description' => t('Header position'),
      '#options' => [
        '0' => 'Default',
        'sticky-top' => 'Sticky top',
        'fixed-top' => 'Fixed top',
        'fixed-bottom' => 'Fixed bottom',
      ],
    ];

    $form['navbar']['settings']['ns__navbar_expand'] = [
      '#type' => 'select',
      '#title' => t('Expand breakpoint'),
      '#default_value' => theme_get_setting('ns__navbar_expand'),
      '#description' => t('Select breakpoint.'),
      '#options' => [
        'navbar-expand-sm' => 'Expand Extra small screen',
        'navbar-expand-sm' => 'Expand Small screen',
        'navbar-expand-md' => 'Expand Medium screen',
        'navbar-expand-lg' => 'Expand Large screen',
        'navbar-expand-xl' => 'Expand Extra large screen',
        'navbar-expand-xxl' => 'Expand Extra extra large screen',
      ],
    ];

    $form['navbar']['settings']['ns__navbar_align'] = [
      '#type' => 'select',
      '#title' => t('Navigation align'),
      '#default_value' => theme_get_setting('ns__navbar_align'),
      '#description' => t(''),
      '#options' => [
        'me-auto' => 'Align left',
        'mx-auto' => 'Align center',
        'ms-auto' => 'Align right'
      ],
    ];

    $form['navbar']['settings']['ts__navbar_color'] = [
      '#type' => 'select',
      '#title' => t('Text color'),
      '#default_value' => theme_get_setting('ts__navbar_color'),
      '#description' => t(''),
      '#options' => [
        'navbar-light' => 'Color dark',
        'navbar-dark' => 'Color light'
      ],
    ];

    $form['navbar']['settings']['ns__navbar_bg'] = [
      '#type' => 'select',
      '#title' => t('Background color'),
      '#default_value' => theme_get_setting('ns__navbar_bg'),
      '#description' => t(''),
      '#options' => [
        '0' => 'None',
        'bg-white' => 'Background White',
        'bg-primary' => 'Background Primary',
        'bg-dark' => 'Background Dark',
      ],
    ];

    $form['navbar']['settings']['ns__navbar_out'] = [
      '#type' => 'select',
      '#title' => t('Delimiter'),
      '#default_value' => theme_get_setting('ns__navbar_out'),
      '#description' => t(''),
      '#options' => [
        '0' => 'None',
        'shadow-sm' => 'Small shadow',
        'shadow' => 'Regular shadow',
        'shadow-lg' => 'Larger shadow',
        'border-bottom' => 'Border bottom',
      ],
    ];

$form['form'] = array(
  '#type'         => 'details',
  '#title'        => t('Form Settings'),
  '#group' => 'eau',
  '#weight' => 1,
);

  $form['form']['settings'] = [
    '#type' => 'details',
    '#title' => t('Form settings'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  ];

    $form['form']['settings']['fs__form_input_group'] = [
      '#type' => 'textarea',
      '#title' => t('Form input group list'),
      '#default_value' => theme_get_setting('fs__form_input_group'),
      '#description'  => t('Add form id in line. Ex: search_block_form'),
    ];
