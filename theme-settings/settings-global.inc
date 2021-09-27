<?php
/**
 * @file
 * Eau de Web theme file.
 */

use Drupal\Core\Url;
use Drupal\Core\Link;

$form['settings']['global'] = [
  '#type' => 'details',
  '#title' => t('Global settings'),
  '#collapsible' => TRUE,
  '#collapsed' => TRUE,
];

  $form['settings']['global']['sg__container'] = [
    '#type' => 'select',
    '#title' => t('Container type'),
    '#default_value' => theme_get_setting('sg__container'),
    '#description' => t('More details @link.', [
      '@link' => Link::fromTextAndUrl('Containers',
                      Url::fromUri('https://getbootstrap.com/docs/5.0/layout/containers/', [
                        'absolute' => TRUE,
                      ]))->toString(),
    ]),
    '#options' => $options_container,
  ];

  $form['settings']['global']['sg__status_message_type'] = [
    '#type' => 'select',
    '#title' => t('Status message type'),
    '#default_value' => theme_get_setting('sg__status_message__type'),
    '#description' => t('Default message @alert type or @toast.', [
      '@alert' => Link::fromTextAndUrl('Toasts',
                  Url::fromUri('https://getbootstrap.com/docs/5.0/components/toasts/', [
                    'absolute' => TRUE,
                  ]))->toString(),
      '@toast' => Link::fromTextAndUrl('Alerts',
                  Url::fromUri('https://getbootstrap.com/docs/5.0/components/alerts/', [
                    'absolute' => TRUE,
                  ]))->toString(),
    ]),
    '#options' => [
      'alerts' => 'Alerts',
      'toast' => 'Toasts',
    ],
  ];
