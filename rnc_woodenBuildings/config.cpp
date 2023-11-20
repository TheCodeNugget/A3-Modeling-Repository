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
	class rnc_woodenBuildings {
		addonRootClass = "rnc_main";
		requiredAddons[] = {"rnc_main"};
		requiredVersion = 0.1;
		units[] = {
			"Land_rnc_woodHouse_01",
			"Land_rnc_woodHouse_02",
			"Land_rnc_woodenKiosk"
		};
		weapons[] = {};
	};
};
class CfgVehicles {
	class House_Small_F;
	
	class Land_rnc_woodenHouse_01: House_Small_F {
		scope = 2; // 2 = public = shown in editor
		displayName = "Wooden House 1"; // Name in editor
		model = "rnc_woodenBuildings\rnc_woodenHouse_01.p3d"; // Path to model

		editorCategory = "rnc_euObjects";
		editorSubcategory = "rnc_woodBuildings";
		mapSize = 20.27; // Scale of icon in editor
		cost = 40000; // Score penalty for destroying the house
		
	};
	
	class Land_rnc_woodenHouse_02: House_Small_F {
		scope = 2; // 2 = public = shown in editor
		displayName = "Wooden House 2"; // Name in editor
		model = "rnc_woodenBuildings\rnc_woodenHouse_02.p3d"; // Path to model

		editorCategory = "rnc_euObjects";
		editorSubcategory = "rnc_woodBuildings";
		mapSize = 20.27; // Scale of icon in editor
		cost = 40000; // Score penalty for destroying the house
		
		destrType = "DestructDefault";
		armor = 1000;
		
		numberOfWindows = 10;
		numberOfDoors = 3;
		
		class HitPoints { // Entities representing destructible subparts of the house

			// Glass Hitpoints
			NORMAL_GLASS_HITPOINT(1,0.001,0.4);
			NORMAL_GLASS_HITPOINT(2,0.001,0.4);
			NORMAL_GLASS_HITPOINT(3,0.001,0.4);
			NORMAL_GLASS_HITPOINT(4,0.001,0.4);
			NORMAL_GLASS_HITPOINT(5,0.001,0.4);
			NORMAL_GLASS_HITPOINT(6,0.001,0.4);
			NORMAL_GLASS_HITPOINT(7,0.001,0.4);
			NORMAL_GLASS_HITPOINT(8,0.001,0.4);
			NORMAL_GLASS_HITPOINT(9,0.001,0.4);
			NORMAL_GLASS_HITPOINT(10,0.001,0.4);
		};
		
		class Damage {
			// Texture pairs (below 0.5 health and 0.5+) for switching visuals (can also use generated)
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

			// Unlike textures, materials are not in pairs but in triplets (health: 0 - 0.49, 0.5 - 0.99, 1)
			mat[] = {
				"A3\Structures_F\Data\Windows\window_set.rvmat",
				"A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat",
				"A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat"
			};
		};
		
		class AnimationSources {
			// Animation sources for doors
			class Door_1_source {
				source = user; // "user" = custom source = not controlled by some engine value
				initPhase = 0; // Initial value of animations based on this source
				animPeriod = 1; // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_2_source : Door_1_source {};
			class Door_3_source : Door_1_source {};
			
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
				position = Door_2_Trigger;
				condition = (this animationPhase 'Door_2_rot') < 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_2_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class closeDoor_2 : openDoor_1 {
				position = Door_2_Trigger;
				condition = (this animationPhase 'Door_2_rot') >= 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_2_rot'] call BIS_fnc_DoorNoHandleClose);
			};
			
			class openDoor_3 : openDoor_1 {
				position = Door_3_Trigger;
				condition = (this animationPhase 'Door_3_rot') < 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_3_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class closeDoor_3 : openDoor_1 {
				position = Door_3_Trigger;
				condition = (this animationPhase 'Door_3_rot') >= 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_3_rot'] call BIS_fnc_DoorNoHandleClose);
			};
		};
		ActionBegin1 = openDoor_1;
		ActionEnd1 = openDoor_1;
		ActionBegin2 = openDoor_2;
		ActionEnd2 = openDoor_2;
		ActionBegin3 = openDoor_3;
		ActionEnd3 = openDoor_3;
	};
	
	class Land_rnc_woodenKiosk : House_Small_F {
		scope = 2; // 2 = public = shown in editor
		displayName = "Wooden Kiosk"; // Name in editor
		model = "rnc_woodenBuildings\rnc_woodenKiosk.p3d"; // Path to model

		editorCategory = "rnc_euObjects";
		editorSubcategory = "rnc_woodBuildings";
		
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
};
