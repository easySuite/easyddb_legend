/**
 * @file
 * Placement for legend block.
 */
(function($) {
  Drupal.behaviors.easyddbLegend = {
    attach: function(context) {
      $('.pane-ding-availability-legend').insertAfter('.pane-search-result-count');
    }
  };
})(jQuery);
