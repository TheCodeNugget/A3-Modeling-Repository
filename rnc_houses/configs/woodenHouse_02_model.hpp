class rnc_woodenHouse_02 { // class name must be the same as name of p3d
	htMin=0;
	htMax=0;
	afMax=0;
	mfMax=0;
	mFact=0;
	tBody=0;
	skeletonName = "rnc_woodenHouse_02_skeleton"; // Set to use above defined skeleton.
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
		"Glass_10_hide"
	};
	
	class Animations {
		// Door Animations
		class Door_1_rot {
			type			= rotation;
			source			= Door_1_source; // Controler defined in class AnimationSources in config.cpp.
			selection		= Door_1; // Selection from p3d that also has to be defined as a bone in this model`s skeleton.
			axis			= Door_1_Axis; // Axis of the rotation.
			memory			= 1;
			minValue		= 0; // Value of the controller at which the rotation will be angle0
			maxValue		= 1; // Value of the controller at which the rotation will be angle1
			angle0			= 0;
			angle1			= -(rad 105); // "rad" converts from degrees to radians
		};

		class Door_2_rot : Door_1_rot {
			source			= Door_2_source;
			selection		= Door_2;
			axis			= Door_2_Axis;
		};
		
		class Door_3_rot : Door_1_rot {
			source			= Door_3_source;
			selection		= Door_3;
			axis			= Door_3_Axis;
		};
		
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
	};
};