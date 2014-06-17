jQuery(document).ready(function($){

	var targetElement = $('.view-content');

	var marketDays = $('.day-group');
	var marketDay;

	targetElement.html("");
	var nextSevenDays = getNextSevenDays();

	for (var dayIndex = 0; dayIndex < nextSevenDays.length; dayIndex++) {
		

		for(var i = 0; i < marketDays.length; i++) {
			marketDay = $(marketDays[i]);
			if(marketDay.hasClass(nextSevenDays[dayIndex])) {
				targetElement.append(marketDay);
			}
		}
	}

	function getCurrentDayOfWeek () {
		var today = new Date(Date.now());
		return today.getDay();
	}

	function getNextSevenDays () {
		var days = ['sunday', 'monday', 'tuesday', 'wednesday', 'thursday', 'friday', 'saturday'];
		var currentDayOfWeek = getCurrentDayOfWeek();
		var daysBeforeToday = days.splice(0,currentDayOfWeek);
		var nextSevenDays = $.merge(days, daysBeforeToday);
		return nextSevenDays;
	}
	
});

