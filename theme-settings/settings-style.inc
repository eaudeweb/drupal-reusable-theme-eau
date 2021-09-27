<?php
$form['style']['s_fonts'] = [
  '#type' => 'details',
  '#title' => t('Fonts'),
  // '#collapsible' => TRUE,
  // '#collapsed' => TRUE,
];
  $form['style']['s_fonts']['sf__sans_serif'] = [
    '#type' => 'textfield',
    '#title' => t('Font family Sans serif'),
    '#default_value' => theme_get_setting('sf__sans_serif'),
    '#required' => TRUE,
    '#description' => 'root: --font-sans-serif',
  ];

  $form['style']['s_fonts']['sf__family'] = [
    '#type' => 'textfield',
    '#title' => t('Font family'),
    '#default_value' => theme_get_setting('sf__family'),
    '#description' => 'root: --body-font-family',
  ];

$form['style']['s_colors'] = [
  '#type' => 'details',
  '#title' => t('Colors'),
];
  $form['style']['s_colors']['sc__white'] = [
    '#type' => 'color',
    '#title' => t('White (root)'),
    '#default_value' => theme_get_setting('sc__white'),
  ];

  $form['style']['s_colors']['sc__black'] = [
    '#type' => 'color',
    '#title' => t('Black (root)'),
    '#default_value' => theme_get_setting('sc__black'),
  ];

  $form['style']['s_colors']['sc__gray_100'] = [
    '#type' => 'color',
    '#title' => t('Gray 100 (root)'),
    '#default_value' => theme_get_setting('sc__gray_100'),
  ];

  $form['style']['s_colors']['sc__gray_200'] = [
    '#type' => 'color',
    '#title' => t('Gray 200 (root)'),
    '#default_value' => theme_get_setting('sc__gray_200'),
  ];

  $form['style']['s_colors']['sc__gray_300'] = [
    '#type' => 'color',
    '#title' => t('Gray 300 (root)'),
    '#default_value' => theme_get_setting('sc__gray_300'),
  ];

  $form['style']['s_colors']['sc__gray_400'] = [
    '#type' => 'color',
    '#title' => t('Gray 400 (root)'),
    '#default_value' => theme_get_setting('sc__gray_400'),
  ];

  $form['style']['s_colors']['sc__gray_500'] = [
    '#type' => 'color',
    '#title' => t('Gray 500 (root)'),
    '#default_value' => theme_get_setting('sc__gray_500'),
  ];

  $form['style']['s_colors']['sc__gray_600'] = [
    '#type' => 'color',
    '#title' => t('Gray 600 (root)'),
    '#default_value' => theme_get_setting('sc__gray_600'),
  ];

  $form['style']['s_colors']['sc__gray_700'] = [
    '#type' => 'color',
    '#title' => t('Gray 700 (root)'),
    '#default_value' => theme_get_setting('sc__gray_700'),
  ];

  $form['style']['s_colors']['sc__gray_800'] = [
    '#type' => 'color',
    '#title' => t('Gray 800 (root)'),
    '#default_value' => theme_get_setting('sc__gray_800'),
  ];

  $form['style']['s_colors']['sc__gray_900'] = [
    '#type' => 'color',
    '#title' => t('Gray 900 (root)'),
    '#default_value' => theme_get_setting('sc__gray_900'),
  ];

  $form['style']['s_colors']['sc__primary'] = [
    '#type' => 'color',
    '#title' => t('Primary (root)'),
    '#default_value' => theme_get_setting('sc__primary'),
  ];

  $form['style']['s_colors']['sc__secondary'] = [
    '#type' => 'color',
    '#title' => t('Secondary (root)'),
    '#default_value' => theme_get_setting('sc__secondary'),
  ];

  $form['style']['s_colors']['sc__success'] = [
    '#type' => 'color',
    '#title' => t('Success (root)'),
    '#default_value' => theme_get_setting('sc__success'),
  ];

  $form['style']['s_colors']['sc__info'] = [
    '#type' => 'color',
    '#title' => t('Info (root)'),
    '#default_value' => theme_get_setting('sc__info'),
  ];

  $form['style']['s_colors']['sc__warning'] = [
    '#type' => 'color',
    '#title' => t('Warning (root)'),
    '#default_value' => theme_get_setting('sc__warning'),
  ];

  $form['style']['s_colors']['sc__danger'] = [
    '#type' => 'color',
    '#title' => t('Danger (root)'),
    '#default_value' => theme_get_setting('sc__danger'),
  ];

  $form['style']['s_colors']['sc__light'] = [
    '#type' => 'color',
    '#title' => t('Light (root)'),
    '#default_value' => theme_get_setting('sc__light'),
  ];

  $form['style']['s_colors']['sc__dark'] = [
    '#type' => 'color',
    '#title' => t('Dark (root)'),
    '#default_value' => theme_get_setting('sc__dark'),
  ];

$form['style']['s_link'] = [
  '#type' => 'details',
  '#title' => t('Link'),
];
  $form['style']['s_link']['sl__custom'] = [
    '#type' => 'checkbox',
    '#title' => t('Set custom link colors'),
    '#default_value' => theme_get_setting('sl__custom'),
  ];

  $form['style']['s_link']['sl__color'] = [
    '#type' => 'color',
    '#title' => t('Link color'),
    '#default_value' => theme_get_setting('sl__color'),
    '#states' => [
      'invisible' => [
        ':input[name="sl__custom"]' => ['checked' => FALSE],
      ],
    ],
  ];

  $form['style']['s_link']['sl__h_color'] = [
    '#type' => 'color',
    '#title' => t('Link hover color'),
    '#default_value' => theme_get_setting('sl__h_color'),
    '#states' => [
      'invisible' => [
        ':input[name="sl__custom"]' => ['checked' => FALSE],
      ],
    ],
  ];

  $form['style']['s_link']['sl__decoration'] = [
    '#type' => 'textfield',
    '#title' => t('Link decoration'),
    '#default_value' => theme_get_setting('sl__decoration'),
  ];

  $form['style']['s_link']['sl__h_decoration'] = [
    '#type' => 'textfield',
    '#title' => t('Link decoration'),
    '#default_value' => theme_get_setting('sl__h_decoration'),
  ];
