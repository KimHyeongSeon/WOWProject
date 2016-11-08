$(".toggle-mnu").click(function() {
			$(this).toggleClass("on");
			if ($(".right_sidebar").css("right") == "0px") {
	        $(".right_sidebar").css("right", "-185px");
	    }
	    else{
	    	 $(".right_sidebar").css("right", "0px");
	    }
	    return false;
		});
