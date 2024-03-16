class rnc_wooden_kiosk {
	htMin=0;
	htMax=0;
	afMax=0;
	mfMax=0;
	mFact=0;
	tBody=0;
	skeletonName = "rnc_wooden_kiosk_skeleton"; // Set to use above defined skeleton.
	sectionsInherit = "";
	sections[] = {
		// Selections from the model that are used in config.cpp for switching textures and materials.
		"Glass_1_hide",
		"Glass_2_hide",
		"Glass_3_hide",
		"Glass_4_hide",
		"Glass_5_hide",
		"Glass_6_hide",
		"Glass_7_hide",
		"Glass_8_hide",
		"Glass_9_hide",
		"Glass_10_hide",
		"Glass_11_hide"
	};
	
	class Animations {
		// Window Animations
		 class glass_1_hide {
			type			= "hide";
			source			= "glass_1_source";
			selection		= "glass_1_hide";
			sourceAddress	= "clamp";
			minPhase		= 0;
			maxPhase		= 1;
			minValue		= 0;
			maxValue		= 1;
			memory			= 0;
			hideValue		= 0.99999;
			unHideValue		= -1;
		};
		class glass_1_unhide : glass_1_hide {
			selection		= "glass_1_unhide";
			hideValue		= 0;
			unHideValue		= 0.99999;
		};
		
		class Glass_2_hide: Glass_1_hide {
			source			= Glass_2_source;
			selection		= Glass_2_hide;
		};
		class Glass_2_unhide: Glass_1_unhide {
			source			= Glass_2_source;
			selection		= Glass_2_unhide;
		};

		class Glass_3_hide: Glass_1_hide {
			source			= Glass_3_source;
			selection		= Glass_3_hide;
		};
		class Glass_3_unhide: Glass_1_unhide {
			source			= Glass_3_source;
			selection		= Glass_3_unhide;
		};
		
		class Glass_4_hide: Glass_1_hide {
			source			= Glass_4_source;
			selection		= Glass_4_hide;
		};
		class Glass_4_unhide: Glass_1_unhide {
			source			= Glass_4_source;
			selection		= Glass_4_unhide;
		};
		
		class Glass_5_hide: Glass_1_hide {
			source			= Glass_5_source;
			selection		= Glass_5_hide;
		};
		class Glass_5_unhide: Glass_1_unhide {
			source			= Glass_5_source;
			selection		= Glass_5_unhide;
		};
		
		class Glass_6_hide: Glass_1_hide {
			source			= Glass_6_source;
			selection		= Glass_6_hide;
		};
		class Glass_6_unhide: Glass_1_unhide {
			source			= Glass_6_source;
			selection		= Glass_6_unhide;
		};
		
		class Glass_7_hide: Glass_1_hide {
			source			= Glass_7_source;
			selection		= Glass_7_hide;
		};
		class Glass_7_unhide: Glass_1_unhide {
			source			= Glass_7_source;
			selection		= Glass_7_unhide;
		};
		
		class Glass_8_hide: Glass_1_hide {
			source			= Glass_8_source;
			selection		= Glass_8_hide;
		};
		class Glass_8_unhide: Glass_1_unhide {
			source			= Glass_8_source;
			selection		= Glass_8_unhide;
		};
		
		class Glass_9_hide: Glass_1_hide {
			source			= Glass_9_source;
			selection		= Glass_9_hide;
		};
		class Glass_9_unhide: Glass_1_unhide {
			source			= Glass_9_source;
			selection		= Glass_9_unhide;
		};
		
		class Glass_10_hide: Glass_1_hide {
			source			= Glass_10_source;
			selection		= Glass_10_hide;
		};
		class Glass_10_unhide: Glass_1_unhide {
			source			= Glass_10_source;
			selection		= Glass_10_unhide;
		};
		
		class Glass_11_hide: Glass_1_hide {
			source			= Glass_11_source;
			selection		= Glass_11_hide;
		};
		class Glass_11_unhide: Glass_1_unhide {
			source			= Glass_11_source;
			selection		= Glass_11_unhide;
		};
		
		class Glass_12_hide: Glass_1_hide {
			source			= Glass_12_source;
			selection		= Glass_12_hide;
		};
		class Glass_12_unhide: Glass_1_unhide {
			source			= Glass_12_source;
			selection		= Glass_12_unhide;
		};
		
		class Glass_13_hide: Glass_1_hide {
			source			= Glass_13_source;
			selection		= Glass_13_hide;
		};
		class Glass_13_unhide: Glass_1_unhide {
			source			= Glass_13_source;
			selection		= Glass_13_unhide;
		};
	};
};