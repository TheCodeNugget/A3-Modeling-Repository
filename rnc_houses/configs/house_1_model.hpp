class rnc_house_1_w1 { // class name must be the same as name of p3d
	htMin=0;
	htMax=0;
	afMax=0;
	mfMax=0;
	mFact=0;
	tBody=0;
	skeletonName = "house_1_skeleton"; // Set to use above defined skeleton.
	sectionsInherit = "";
	sections[] = {
		// Selections from the model that are used in config.cpp for switching textures and materials.
		"Glass_1_hide",
		"Glass_2_hide",
		"Glass_3_hide",
		"Glass_4_hide"
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
			angle1			= (rad -95); // "rad" converts from degrees to radians
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
	};
};
class rnc_house_1_b1 : rnc_house_1_w1 {};