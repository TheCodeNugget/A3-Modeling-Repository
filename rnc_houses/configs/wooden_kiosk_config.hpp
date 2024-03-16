class Land_rnc_wooden_kiosk : House_Small_F {
	scope = 2; // 2 = public = shown in editor
	displayName = "Wooden Kiosk"; // Name in editor
	model = "rnc_houses\rnc_wooden_kiosk.p3d"; // Path to model

	editorCategory = "rnc_structures";
	
	icon = "iconObject_1x2";
	mapSize = 4.5; // Scale of icon in editor
	cost = 40000; // Score penalty for destroying the house
	
	destrType = "DestructDefault";
	armor = 1000;
	
	numberOfWindows = 13;
	
	class HitPoints { // Entities representing destructible subparts of the house

		// Glass Hitpoints
		NORMAL_GLASS_HITPOINT(1,0.001,0.1);;
		NORMAL_GLASS_HITPOINT(2,0.001,0.1);;
		NORMAL_GLASS_HITPOINT(3,0.001,0.1);;
		NORMAL_GLASS_HITPOINT(4,0.001,0.1);;
		NORMAL_GLASS_HITPOINT(5,0.001,0.1);;
		NORMAL_GLASS_HITPOINT(6,0.001,0.1);;
		NORMAL_GLASS_HITPOINT(7,0.001,0.1);;
		NORMAL_GLASS_HITPOINT(8,0.001,0.1);;
		NORMAL_GLASS_HITPOINT(9,0.001,0.1);;
		NORMAL_GLASS_HITPOINT(10,0.001,0.1);;
		NORMAL_GLASS_HITPOINT(11,0.001,0.1);;
		NORMAL_GLASS_HITPOINT(12,0.001,0.1);;
		NORMAL_GLASS_HITPOINT(13,0.001,0.1);;
	};
	
	class Damage {
		tex[] = {
			// Window textures
			"A3\Structures_F\Data\Windows\window_set_CA.paa",
			"A3\Structures_F\Data\Windows\destruct_half_window_set_CA.paa",

			// Grey color
			"#(argb,8,8,3)color(0.501961,0.501961,0.501961,1.0,co)",
			"#(argb,8,8,3)color(0.294118,0.294118,0.294118,1.0,co)",

			// Brown color
			"#(argb,8,8,3)color(0.501961,0.25098,0,1.0,co)",
			"#(argb,8,8,3)color(0.392157,0.196078,0,1.0,co)",

			// Yellow color
			"#(argb,8,8,3)color(1,1,0.501961,1.0,co)",
			"#(argb,8,8,3)color(0.513725,0.513725,0.203922,1.0,co)",

			// Light grey color
			"#(argb,8,8,3)color(0.752941,0.752941,0.752941,1.0,co)",
			"#(argb,8,8,3)color(0.478431,0.478431,0.478431,1.0,co)",

			// Red color
			"#(argb,8,8,3)color(1,0,0,1.0,co)",
			"#(argb,8,8,3)color(0.701961,0,0,1.0,co)"
		};

		mat[] = {
			"A3\Structures_F\Data\Windows\window_set.rvmat",
			"A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat",
			"A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat"
		};
	};
	
	class AnimationSources {
		class glass_1_source {
			source = "Hit"; // "Hit" = value of this source is the health of an entity
			hitpoint = "glass_1_hitpoint"; // Specifies  the health of what iscontrol value of this animation; "Glass_1_hitpoint" being the class defined in class Hitpoints
			raw = 1;
		};
		class glass_2_source : glass_1_source { hitpoint = "glass_2_hitpoint"; };
		class glass_3_source : glass_1_source { hitpoint = "glass_3_hitpoint"; };
		class glass_4_source : glass_1_source { hitpoint = "glass_4_hitpoint"; };
		class glass_5_source : glass_1_source { hitpoint = "glass_5_hitpoint"; };
		class glass_6_source : glass_1_source { hitpoint = "glass_6_hitpoint"; };
		class glass_7_source : glass_1_source { hitpoint = "glass_7_hitpoint"; };
		class glass_8_source : glass_1_source { hitpoint = "glass_8_hitpoint"; };
		class glass_9_source : glass_1_source { hitpoint = "glass_9_hitpoint"; };
		class glass_10_source : glass_1_source { hitpoint = "glass_10_hitpoint"; };
		class glass_11_source : glass_1_source { hitpoint = "glass_11_hitpoint"; };
		class glass_12_source : glass_1_source { hitpoint = "glass_12_hitpoint"; };
		class glass_13_source : glass_1_source { hitpoint = "glass_13_hitpoint"; };
	};
};