class Land_rnc_house_1_w1: House_Small_F {
	scope = 2;
	displayName = "House 1 - Wooden 1";
	model = "rnc_houses\rnc_house_1_w1.p3d";

	editorCategory = "rnc_structures";

	destrType = "DestructDefault";
	armor = 1000;
	
	numberOfWindows = 4;
	numberOfDoors = 1;

	class Hitpoints {
		NORMAL_GLASS_HITPOINT(1,0.001,0.4);
		NORMAL_GLASS_HITPOINT(2,0.001,0.4);
		NORMAL_GLASS_HITPOINT(3,0.001,0.4);
		NORMAL_GLASS_HITPOINT(4,0.001,0.4);
	};
	
	class Damage {
		tex[] = {
			// Window textures
			"A3\Structures_F_exp\Data\glass\window_set_dark_CA.paa",
			"A3\Structures_F_exp\Data\glass\destruct_half_window_set_dark_CA.paa",

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
			"A3\Structures_F_exp\Data\glass\window_set_dark.rvmat",
			"A3\Structures_F_exp\Data\glass\destruct_half_window_set_dark.rvmat",
			"A3\Structures_F_exp\Data\glass\destruct_full_window_set_dark.rvmat"
		};
	};

	class AnimationSources {
		class door_1_source {
			source = user;
			initPhase = 0;
			animPeriod = 1;
			sound = "GenericDoorsSound";
		};
		class door_2_source : door_1_source {};

		class glass_1_source {
			source = "Hit";
			hitpoint = "glass_1_hitpoint";
			raw = 1;
		};
		class glass_2_source : glass_1_source { hitpoint = "glass_2_hitpoint"; };
		class glass_3_source : glass_1_source { hitpoint = "glass_3_hitpoint"; };
		class glass_4_source : glass_1_source { hitpoint = "glass_4_hitpoint"; };
	};
	
	class UserActions {
		class openDoor_1 {
			displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />"; // This is displayed in the center of the screen just below crosshair. In this case it's an icon, not a text.
			displayName = "$STR_DN_OUT_O_DOOR"; // Label of the action used in the action menu itself.
			position = Door_1_Trigger; // Point in Memory lod in p3d around which the action is available.
			priority = 0.4; // Priority coefficient used for sorting action in the action menu.
			radius = 1.75; // Range around the above defined point in which you need to be to access the action.
			aiMaxRange = 5.25;
			onlyForPlayer = false; // Defines if the action is available only to players or AI as well.
			condition = (this animationPhase 'Door_1_rot') < 0.5; // Condition for showing the action in action menu. In this case it checks if the door is closed and if the part of the house in which the door is located hasn't been destroyed yet).
			statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen); // Action taken when this action is selected in the action menu. In this case it calls a function that opens the door.
		};
		class closeDoor_1: openDoor_1 {
			displayName = "$STR_DN_OUT_C_DOOR";
			priority = 0.2;
			condition = (this animationPhase 'Door_1_rot') >= 0.5; // Checks if the door is currently open and not destroyed.
			statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose);
		};
	};
};

class Land_rnc_house_1_b1: Land_rnc_house_1_w1 {
	displayName = "House 1 - Brick 1";
	model = "rnc_houses\rnc_house_1_b1.p3d";
};