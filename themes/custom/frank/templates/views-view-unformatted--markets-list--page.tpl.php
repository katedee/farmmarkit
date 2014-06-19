<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */

$title = substr($title, 5);
?>
<div class=<?php print "'" . strtolower($title) . " day-group'";?>>
	<?php if (!empty($title)): ?>
	  <h3><?php print $title; ?></h3>
	<?php endif; ?>
	<div class="day-markets">
		<?php foreach ($rows as $id => $row): ?>	
		  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
		    <?php print $row; ?>
		  </div>

		<?php endforeach; ?>
	</div>
</div>
	