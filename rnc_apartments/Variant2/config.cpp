#define _ARMA_
#include "hitpoint_macros.hpp"

//(13 Enums)
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches {
	class rnc_apartments_variant2 {
		addonRootClass = "rnc_apartments";
		requiredAddons[] = {"rnc_main"};
		requiredVersion = 0.1;
		units[] = {
			"variant2_parts"
		};
		weapons[] = {};
	};
};
class CfgVehicles {
	class House_Small_F;

	class variant2_parts: House_Small_F {
		scope = 2;
		displayName = "Variant 2 Parts";
		model = "rnc_apartments\variant2\variant2_parts.p3d";

		editorCategory = "rnc_euObjects";
		editorSubCategory = "rnc_city";

		destrType = "DestructDefault";
		armor = 1000;
		
		numberOfWindows = 10;
		numberOfDoors = 3;

		class Hitpoints {
			NORMAL_GLASS_HITPOINT(1,0.001,0.4)
			NORMAL_GLASS_HITPOINT(2,0.001,0.4)
			NORMAL_GLASS_HITPOINT(3,0.001,0.4)
			NORMAL_GLASS_HITPOINT(4,0.001,0.4)
			NORMAL_GLASS_HITPOINT(5,0.001,0.4)
			NORMAL_GLASS_HITPOINT(6,0.001,0.4)
			NORMAL_GLASS_HITPOINT(7,0.001,0.4)
			NORMAL_GLASS_HITPOINT(8,0.001,0.4)
			NORMAL_GLASS_HITPOINT(9,0.001,0.4)
			NORMAL_GLASS_HITPOINT(10,0.001,0.4)
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
			class door_1_source {
				source = user;
				initPhase = 0;
				animPeriod = 1;
				sound = "GenericDoorsSound";
			};
			class door_2_source : door_1_source {};
			class door_3_source : door_1_source {};

			class glass_1_source {
				source = "Hit";
				hitpoint = "glass_1_hitpoint";
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
			
			class openDoor_2 : openDoor_1 {
				displayName = "Open Left Door";
				position = Door_2_Trigger;
				condition = (this animationPhase 'Door_2_rot') < 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_2_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class closeDoor_2 : openDoor_1 {
				displayName = "Close Left Door";
				position = Door_2_Trigger;
				condition = (this animationPhase 'Door_2_rot') >= 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_2_rot'] call BIS_fnc_DoorNoHandleClose);
			};
			
			class openDoor_3 : openDoor_1 {
				displayName = "Open Right Door";
				position = Door_3_Trigger;
				condition = (this animationPhase 'Door_3_rot') < 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_3_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class closeDoor_3 : openDoor_1 {
				displayName = "Close Right Door";
				position = Door_3_Trigger;
				condition = (this animationPhase 'Door_3_rot') >= 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_3_rot'] call BIS_fnc_DoorNoHandleClose);
			};
			
			class openDoor_2_3 : openDoor_1 {
				displayName = "Open Both Doors";
				position = Door_2-3_Trigger;
				condition = ((this animationPhase 'Door_2_rot') < 0.5) && ((this animationPhase 'Door_3_rot') < 0.5); // Checks if the door is currently open and not destroyed.
				statement = "[this, 'Door_2_rot'] call BIS_fnc_DoorNoHandleOpen; [this, 'Door_3_rot'] call BIS_fnc_DoorNoHandleOpen;";
			};
			class closeDoor_2_3 : openDoor_1 {
				displayName = "Close Both Doors";
				position = Door_2-3_Trigger;
				condition = ((this animationPhase 'Door_2_rot') >= 0.5 && ((this animationPhase 'Door_3_rot') >= 0.5)); // Checks if the door is currently open and not destroyed.
				statement = "[this, 'Door_2_rot'] call BIS_fnc_DoorNoHandleClose; [this, 'Door_3_rot'] call BIS_fnc_DoorNoHandleClose;";
			};
		};
	};
};
