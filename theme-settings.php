<?php

/**
 * @file
 * Eau de Web theme file.
 * 
 * Demo description with code and link
 *  '#description' => t('Demo code <code>.theme-colors</code> and link @demo_link.', [
 *    '@demo_link' => Link::fromTextAndUrl('Containers',
 *                    Url::fromUri('https://getbootstrap.com/docs/5.0/layout/containers/', [
 *                      'absolute' => TRUE,
 *                      'fragment' => 'containers'
 *                     ]))->toString(),
 *  ]),
 */

use Drupal\Core\Form\FormStateInterface;
use Drupal\Core\Url;
use Drupal\Core\Link;

/**
 * Implements hook_form_FORM_ID_alter().
 */
function eau_form_system_theme_settings_alter(&$form, FormStateInterface $form_state, $form_id = NULL) {
  if (isset($form_id)) {
    return;
  }

  $options_theme = [
    'none' => 'do not apply theme',
    'light' => 'light (dark text/links against a light background)',
    'dark' => 'dark (light/white text/links against a dark background)',
  ];

  $options_colour = [
    'default' => 'Use default color',
    'primary' => 'primary',
    'secondary' => 'secondary',
    'light' => 'light',
    'dark' => 'dark',
  ];

  $options_container = [
    'container' => 'Fixed',
    'container-fluid' => 'Fluid',
  ];

  $form['eau'] = [
    '#type' => 'vertical_tabs',
    '#title' => t('Theme settings'),
    // '#prefix' => '<div class="h2">' . t('Some text before title') . '</div>',
    '#weight' => -10,
  ];

    // Main settings
    $form['settings'] = array(
      '#type'         => 'details',
      '#title'        => t('Main Settings'),
      //'#description'  => t('some description'),
      '#group' => 'eau',
      '#weight' => 1,
    );
      include 'theme-settings/settings-global.inc';

    // Style settings
    $form['style'] = array(
      '#type'         => 'details',
      '#title'        => t('Style settings'),
      '#description'  => t('Style colors, sizes etc'),
      '#group' => 'eau',
      '#weight' => 1,
    );
      include 'theme-settings/settings-style.inc';

    // Navbar settings
    $form['navbar'] = array(
      '#type'         => 'details',
      '#title'        => t('Nav Bar'),
      '#group' => 'eau',
      '#weight' => 4,
    );
      include 'theme-settings/settings-navbar.inc';
}
