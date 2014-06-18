 			<?php 
 				$websiteField = $fields['field_website']->content;
 				$websiteField = substr($websiteField, 5, strlen($websiteField)-6); 
 				$addressField = $fields['field_address']->content;
 				$addressField = substr($addressField, 27, strlen($addressField)-6); 

 			?> 	
 	<div class="slide-info bit-80 clearfix">


	<?php echo '<img src="http://maps.googleapis.com/maps/api/staticmap?markers=markerStyles|' . '43.3232' . ',' . '50.323' . '|&zoom=15&size=100x100&key=AIzaSyANQAsnyyHkowrVvK0DeSbXMs_QDcnfJnA" />' ?> 

 		<div class="info-box clearfix">
 			<h4 class="market-name"><?php echo $fields['title']->raw; ?></h4>
 			<p class="website"><?php echo $websiteField; ?></p>
 			<p class="address"><?php echo $addressField; ?></p>
<!--  			<p class="op-hrs">Hours: 3 p.m. to 7 p.m</p>
 --> 		</div><!--info-box-->
 	</div>

