alert("hello");

jQuery(document).ready(function(){
	var today = new Date(Date.now());

	var dayOfWeek = today.getDay();

	var $dayGroup = $('.day-group h3');

	for(var i = 0; i < $dayGroup.length; i++) {
		console.log($($dayGroup[i]).find('h3').text());
	}
	

});
