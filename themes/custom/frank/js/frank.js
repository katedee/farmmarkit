jQuery(document).ready(function($){
	reorderMarkets();

	function reorderMarkets() {
		var targetElement = $('.view-content');

		var marketDays = $('.day-group');
		var marketDay;

		targetElement.html("");
		var nextSevenDays = getNextSevenDays();

		for (var dayIndex = 0; dayIndex < nextSevenDays.length; dayIndex++) {
			for(var i = 0; i < marketDays.length; i++) {
				marketDay = $(marketDays[i]);
				
				if(marketDay.hasClass(nextSevenDays[dayIndex])) {
					var latitude = marketDay.find('.latitude').text();
					var longitude = marketDay.find('.longitude').text();
					marketDay.find('.views-field-field-latitude-').remove();
					marketDay.find('.views-field-field-longitude').remove();
					marketDay.append('<img src="http://maps.googleapis.com/maps/api/staticmap?markers=markerStyles|' + latitude + ',' + longitude + '|&zoom=15&size=100x100&key=AIzaSyANQAsnyyHkowrVvK0DeSbXMs_QDcnfJnA" />');
					targetElement.append(marketDay);
					//marketDay - find - element - clear - append - img maps
					
					
					

				}
			}
		}
	}

	function getCurrentDayOfWeek() {
		var today = new Date(Date.now());
		return today.getDay();
	}

	function getNextSevenDays() {
		var days = ['sunday', 'monday', 'tuesday', 'wednesday', 'thursday', 'friday', 'saturday'];
		var currentDayOfWeek = getCurrentDayOfWeek();
		var daysBeforeToday = days.splice(0,currentDayOfWeek);
		var nextSevenDays = $.merge(days, daysBeforeToday);
		return nextSevenDays;
	}

	
	
});

