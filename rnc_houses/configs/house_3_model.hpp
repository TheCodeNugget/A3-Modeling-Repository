class rnc_house_3 { // class name must be the same as name of p3d
	htMin=0;
	htMax=0;
	afMax=0;
	mfMax=0;
	mFact=0;
	tBody=0;
	skeletonName = "house_3_skeleton"; // Set to use above defined skeleton.
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
		"Glass_8_hide"
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
			angle1			= rad 95; // "rad" converts from degrees to radians
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
			class Glass_1_hide {
			type			= hide;
			source			= Glass_1_source; // This source is defined in config.cpp and relates health of the window (0 = fine, 1 = destroyed)
			selection		= Glass_1_hide; // Selection containing glass pane.
			minValue		= 0;
			maxValue		= 1;
			hideValue		= 0.99999; // Threshold for switching the glass pane for glass shards.
		};
		class Glass_1_unhide: Glass_1_hide {
			selection		= Glass_1_unhide; // Selection containing glass shards.
			hideValue		= 0; // Glass shards are hidden when the window is ok...
			unhideValue		= 0.99999; // ...and are shown when damage done to the window reaches set threshold.
		};

		// Here follow animations for the rest of the windows, inherited from the first one.
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
	};
};