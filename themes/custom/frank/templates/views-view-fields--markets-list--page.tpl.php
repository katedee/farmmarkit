 		
 			<?php 
 				$websiteField = $fields['field_website']->content;
 				$addressField = $fields['field_address']->content;
 			?> 	

 <div class="slide-info bit-80 clearfix">

	<?php echo '<img src="http://maps.googleapis.com/maps/api/staticmap?markers=markerStyles|' . $fields["field_latitude_"]->content . ',' . $fields['field_longitude']->content . '|&zoom=15&size=100x100&key=AIzaSyANQAsnyyHkowrVvK0DeSbXMs_QDcnfJnA" />' ?> 
		<div class="info-box clearfix">
 			<h4 class="market-name"><?php echo $fields['title']->raw; ?></h4>
 			<p class="website"><?php echo $fields['field_website']->content; ?></p>
 			<p class="address"><?php echo $fields['field_address']->content; ?></p>
 			<p class="op-hrs">Open: <?php echo $fields['field_start_time']->content; ?> | Close: <?php echo $fields['field_end_time']->content; ?></p>
 			<p class="season">Open from <?php echo $fields['field_start_and_end_dates']->content; ?></p>

 		</div><!--info-box-->
 </div> 

