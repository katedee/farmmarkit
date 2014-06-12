jQuery(document).ready(function($){

	var today = new Date(Date.now());

	var dayOfWeek = today.getDay();
	dayOfWeek = 3;
	var dayGroup = $('.day-group');
	
	var days = ['sunday', 'monday', 'tuesday', 'wednesday', 'thursday', 'friday', 'saturday'];

	var earlierDays = days.splice(0,dayOfWeek);

	var daysStartingToday = $.merge(days, earlierDays);

	var newHTML = $('.view-content');
	newHTML.html("");

	var dayElement;


	for (var j = 0; j < daysStartingToday.length; j++) {
		for(var i = 0; i < dayGroup.length; i++) {
			dayElement = $(dayGroup[i]);
			if(dayElement.hasClass(daysStartingToday[j])) {
				newHTML.append(dayElement);
			}
		}
	};
	
});
