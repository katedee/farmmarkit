jQuery(document).ready(function($){
	reorderMarkets();

	function reorderMarkets() {
		var targetElement = $('.region');

		var marketDays = $('.day-group');
		var marketDay;

		targetElement.html("");
		var nextSevenDays = getNextSevenDays();
		var dayText;

		for (var dayIndex = 0; dayIndex < nextSevenDays.length; dayIndex++) {
			for(var i = 0; i < marketDays.length; i++) {
				marketDay = $(marketDays[i]);
				
				if(marketDay.hasClass(nextSevenDays[dayIndex])) {
					if (dayIndex === 0) {
						marketDay.find('h3').text('Today');
					}
					if (dayIndex === 1) {
						marketDay.find('h3').text('Tomorrow');
					}
					targetElement.append(marketDay);
				}//end if marketDay.hasClass
			}// end marketDays.length for loop
		}// end nextSevenDays for loop
	}//end reorderMarkets

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

	$('.day-group h3').click(function(){
		$(this).siblings('.day-group .day-markets').slideToggle(function(){
			var slideInfo = $(this).find(".slide-info");
			var heightSum = 0;
			for (var i = 0; i < 3; i++) {
				heightSum += $(slideInfo[i]).height();
			};
			if (slideInfo.length > 3) {
				$(this).css("max-height",heightSum + "px");
				$(this).css("overflow-y","scroll");
			}; 
		}); // end slideToggle
	});//weekday click

	$(".day-group:first-of-type h3, .day-group:first-of-type").css("border-radius","30px 30px 0 0");
	$(".day-group:last-of-type h3, .day-group:last-of-type").addClass('non-curly').click(function(){
		$(this).toggleClass('non-curly');
	});
	
});

