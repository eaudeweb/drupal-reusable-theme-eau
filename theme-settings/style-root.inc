<?php
  //darkenLighten($color['primary'], -0.4); = darken 40%
  //darkenLighten($color['primary'], 0.6); = lighten 60%

$color = [
  'white' => theme_get_setting('sc__white'),
  'black' => theme_get_setting('sc__black'),
  'gray-100' => theme_get_setting('sc__gray-100'),
  'gray-200' => theme_get_setting('sc__gray-200'),
  'gray-300' => theme_get_setting('sc__gray-300'),
  'gray-400' => theme_get_setting('sc__gray-400'),
  'gray-500' => theme_get_setting('sc__gray-500'),
  'gray-600' => theme_get_setting('sc__gray-600'),
  'gray-700' => theme_get_setting('sc__gray-700'),
  'gray-800' => theme_get_setting('sc__gray-800'),
  'gray-900' => theme_get_setting('sc__gray-900'),
  'primary' => theme_get_setting('sc__primary'),
  'secondary' => theme_get_setting('sc__secondary'),
  'success' => theme_get_setting('sc__success'),
  'warning' => theme_get_setting('sc__warning'),
  'info' => theme_get_setting('sc__info'),
  'danger' => theme_get_setting('sc__danger'),
  'light' => theme_get_setting('sc__light'),
  'dark' => theme_get_setting('sc__dark'),
];

$link = [
  'color' => 
    theme_get_setting('sl__custom') ?
      theme_get_setting('sl__color') :
      $color['primary'],
  'h-color' => 
    theme_get_setting('sl__custom') ?
      theme_get_setting('sl__h_color') :
      darkenLighten($color['primary'], -0.40),
];

function _root($color, $link) {
  $root = ':root {';

  foreach ($color as $v => $k ) {
    $root .= '--color-' . $v . ': ' . $k . ';';
  }

  $root .= '
    --white-rgb: ' . _getRGB($color['white']) . ';
    --black-rgb: ' . _getRGB($color['black']) . ';
    --primary-rgb: ' . _getRGB($color['primary']) . ';
    --secondary-rgb: ' . _getRGB($color['secondary']) . ';
    --success-rgb: ' . _getRGB($color['success']) . ';
    --warning-rgb: ' . _getRGB($color['warning']) . ';
    --info-rgb: ' . _getRGB($color['info']) . ';
    --danger-rgb: ' . _getRGB($color['danger']) . ';
    --light-rgb: ' . _getRGB($color['light']) . ';
    --dark-rgb: ' . _getRGB($color['dark']) . ';

    --font-sans-serif: ' . theme_get_setting('sf__sans_serif') . ';
    --body-font-family: ' . theme_get_setting('sf__family') . ';

    --link-color: ' . $link['color'] . ';
    --link-color-h: ' . $link['h-color'] . ';
    --link-decoration: ' . theme_get_setting('sl__decoration') . ';
    --link-decoration-h: ' . theme_get_setting('sl__h_decoration') . ';
  ';

  $root .= '}';
  return $root;
}

function _getRGB($c) {
  $rgb = _color_unpack($c);
  return implode(",", $rgb);
}

function darkenLighten($hexCode, $adjustPercent) {
  $hexCode = ltrim($hexCode, '#');

  if (strlen($hexCode) == 3) {
      $hexCode = $hexCode[0] . $hexCode[0] . $hexCode[1] . $hexCode[1] . $hexCode[2] . $hexCode[2];
  }

  $hexCode = array_map('hexdec', str_split($hexCode, 2));

  foreach ($hexCode as & $color) {
      $adjustableLimit = $adjustPercent < 0 ? $color : 255 - $color;
      $adjustAmount = ceil($adjustableLimit * $adjustPercent);

      $color = str_pad(dechex($color + $adjustAmount), 2, '0', STR_PAD_LEFT);
  }

  return '#' . implode($hexCode);
}

$page['#attached']['html_head'][] = [
  [
    '#tag' => 'style',
    '#value' => _root($color, $link),
  ],
  'eau--base'
];
