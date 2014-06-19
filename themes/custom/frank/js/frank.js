jQuery(document).ready(function($){
	reorderMarkets();

	function reorderMarkets() {
		var targetElement = $('.region');

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

	function borderIt () {
		marketDay.css("background-color","red");
	}

	$('.day-group').click(function(){
		$(this).children('section .view .view-content .day-group .views-row').slideToggle();
	});//weekday click

	$(".day-group:first-of-type h3, .day-group:first-of-type").css("border-radius","30px 30px 0 0");
	$(".day-group:last-of-type h3, .day-group:last-of-type").addClass('non-curly').click(function(){
		$(this).toggleClass('non-curly');
	});
	

	
});

