<?php

// Plugin definition
$plugin = array(
  'title' => t('Silent Unity Audio Node Layout'),
  'category' => t('two Columns Node'),
  'icon' => 'silent_unity_audio.png',
  'theme' => 'silent_unity_audio',
  'css' => 'silent_unity_audio.css',
  'regions' => array(
    'left' => t('Left side'),
    'right' => t('Right side'),
  ),
);
