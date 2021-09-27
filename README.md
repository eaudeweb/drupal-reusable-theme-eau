# Info
Theme name: Eau de Web
Theme machine name: eau

## Abbreviations
#### themeMachineName.settings.yml
tsg - Theme settings global
ts - Theme settings

# Eau de Web theme
## INTRODUCTION
Some description.

## FEATURES
* Drupal 8 and 9 compatible
* Can be used as is (subtheme is required for template overrides)
* Bootstrap 5 library
* Bootstrap 5 breakpoints
* Bootstrap 5 configuration within admin user interface
<!-- * Bootstrap 5 style guide -->
<!-- * Bootstrap 5 integration with CKEditor -->

## REQUIREMENTS
[NPM](https://nodejs.org/en/)

### Installation: composer
INSTALLATION

<!-- `composer require drupal/eau` -->
Head to `Appearance` and install eau theme.

## CONFIGURATION
Head to `Appearance` and clicking eau `settings`.

## Development and patching
- Install development dependencies by running `npm install`
- To compile SASS and JS (minified version for live environment ) run `gulp`
- To compile SASS and JS (for developers will compile each time you change the .sass, .js and .twig files ) run `gulp watch`
<!-- - To lint SASS files run `npm run lint:sass` (it will fail build if lint fails) -->
<!-- - To lint JS files run `npm run lint:js` (it will fail build if lint fails) -->


## FAQ
### FAQ - Hidden markdown examples
Link: [current documentation](https://getbootstrap.com/docs/5.0/components/dropdowns/#menu-items).

List:
* List 1
* List 2

Inline code `some code here`

Code section
```
/**
 * @file
 * Description.
*/

(function ($, Drupal) {
  Drupal.behaviors.general = {
    attach: function (context, settings) {
      // script.
    }
  };
});
```
