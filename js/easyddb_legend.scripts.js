/**
 * @file
 * Placement for legend block.
 */
(function ($) {
  Drupal.behaviors.easyddbLegend = {
    attach: function (context, settings) {
      $('.pane-ding-availability-legend').insertAfter('.pane-search-result-count, .pane-ting-collection-count');
    }
  };
})(jQuery);
