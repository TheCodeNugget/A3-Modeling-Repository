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
	class rnc_apartments_variant2_15x15L {
		addonRootClass = "rnc_apartments";
		requiredAddons[] = {"rnc_main"};
		requiredVersion = 0.1;
		units[] = {
			"Land_rnc_apt_v2_15x15L_c1_f3"
			//"Land_rnc_apt_v2_15x15L_c1_f4",
			//"Land_rnc_apt_v2_15x15L_c1_f5",
			//"Land_rnc_apt_v2_15x15L_c1_f6"
		};
		weapons[] = {};
	};
};
class CfgVehicles {
	class House_Small_F{
		class Eventhandlers;
		class DestructionEffects;
	};
	
	class rnc_house_base: House_Small_F{
		class EventHandlers: EventHandlers{
			dragged3DEN = "_this call rnc_fnc_house_snap;";
			registeredToWorld3DEN = "_this call rnc_fnc_house_snap;";
		};
		
		class DestructionEffects: DestructionEffects
		{
			class Ruin
			{
				simulation = ruin;
				type = "\A3\Structures_F_Exp\Commercial\Addons\Addon_04_ruins_F.p3d"; // Path to model of ruin used when total damage of the house reaches 1
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	
	class Land_rnc_apt_v2_15x15L_c1_f3: rnc_house_base {
		scope = 2;
		displayName = "Apartment V2/15x15L/C1/F3";
		model = "rnc_apartments\variant2\15x15L\rnc_apt_v2_15x15L_c1_f3.p3d";

		editorCategory = "rnc_apartments";
		editorSubCategory = "rnc_v2_15x15L";
		
		icon = "iconObject_1x2";
		mapsize = 4;

		destrType = "DestructDefault";
		armor = 1000;

		numberOfWindows = 16;
		numberOfDoors = 8;

		class Hitpoints {
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
			NORMAL_GLASS_HITPOINT(11,0.001,0.4);
			NORMAL_GLASS_HITPOINT(12,0.001,0.4);
			NORMAL_GLASS_HITPOINT(13,0.001,0.4);
			NORMAL_GLASS_HITPOINT(14,0.001,0.4);
			NORMAL_GLASS_HITPOINT(15,0.001,0.4);
			NORMAL_GLASS_HITPOINT(16,0.001,0.4);
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
			class door_4_source : door_1_source {};
			class door_5_source : door_1_source {};
			class door_6_source : door_1_source {};
			class door_7_source : door_1_source {};
			class door_8_source : door_1_source {};

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
			class glass_11_source : glass_1_source { hitpoint = "glass_11_hitpoint"; };
			class glass_12_source : glass_1_source { hitpoint = "glass_12_hitpoint"; };
			class glass_13_source : glass_1_source { hitpoint = "glass_13_hitpoint"; };
			class glass_14_source : glass_1_source { hitpoint = "glass_14_hitpoint"; };
			class glass_15_source : glass_1_source { hitpoint = "glass_15_hitpoint"; };
			class glass_16_source : glass_1_source { hitpoint = "glass_16_hitpoint"; };
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
				displayName = "$STR_DN_OUT_O_DOOR";
				position = Door_2_Trigger;
				condition = (this animationPhase 'Door_2_rot') < 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_2_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class closeDoor_2 : openDoor_1 {
				displayName = "$STR_DN_OUT_C_DOOR";
				position = Door_2_Trigger;
				condition = (this animationPhase 'Door_2_rot') >= 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_2_rot'] call BIS_fnc_DoorNoHandleClose);
			};
			
			class openDoor_3 : openDoor_1 {
				displayName = "$STR_DN_OUT_O_DOOR";
				position = Door_3_Trigger;
				condition = (this animationPhase 'Door_3_rot') < 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_3_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class closeDoor_3 : openDoor_1 {
				displayName = "$STR_DN_OUT_C_DOOR";
				position = Door_3_Trigger;
				condition = (this animationPhase 'Door_3_rot') >= 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_3_rot'] call BIS_fnc_DoorNoHandleClose);
			};

			class openDoor_4 : openDoor_1 {
				displayName = "$STR_DN_OUT_O_DOOR";
				position = Door_4_Trigger;
				condition = (this animationPhase 'Door_4_rot') < 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_4_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class closeDoor_4 : openDoor_1 {
				displayName = "$STR_DN_OUT_C_DOOR";
				position = Door_4_Trigger;
				condition = (this animationPhase 'Door_4_rot') >= 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_4_rot'] call BIS_fnc_DoorNoHandleClose);
			};

			class openDoor_5 : openDoor_1 {
				displayName = "$STR_DN_OUT_O_DOOR";
				position = Door_5_Trigger;
				condition = (this animationPhase 'Door_5_rot') < 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_5_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class closeDoor_5 : openDoor_1 {
				displayName = "$STR_DN_OUT_C_DOOR";
				position = Door_5_Trigger;
				condition = (this animationPhase 'Door_5_rot') >= 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_5_rot'] call BIS_fnc_DoorNoHandleClose);
			};
			
			class openDoor_6 : openDoor_1 {
				displayName = "$STR_DN_OUT_O_DOOR";
				position = Door_6_Trigger;
				condition = (this animationPhase 'Door_6_rot') < 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_6_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class closeDoor_6 : openDoor_1 {
				displayName = "$STR_DN_OUT_C_DOOR";
				position = Door_6_Trigger;
				condition = (this animationPhase 'Door_6_rot') >= 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_6_rot'] call BIS_fnc_DoorNoHandleClose);
			};
			
			class openDoor_7 : openDoor_1 {
				displayName = "$STR_DN_OUT_O_DOOR";
				position = Door_7_Trigger;
				condition = (this animationPhase 'Door_7_rot') < 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_7_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class closeDoor_7 : openDoor_1 {
				displayName = "$STR_DN_OUT_C_DOOR";
				position = Door_7_Trigger;
				condition = (this animationPhase 'Door_7_rot') >= 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_7_rot'] call BIS_fnc_DoorNoHandleClose);
			};
			
			class openDoor_8 : openDoor_1 {
				displayName = "$STR_DN_OUT_O_DOOR";
				position = Door_8_Trigger;
				condition = (this animationPhase 'Door_8_rot') < 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_8_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class closeDoor_8 : openDoor_1 {
				displayName = "$STR_DN_OUT_C_DOOR";
				position = Door_8_Trigger;
				condition = (this animationPhase 'Door_8_rot') >= 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_8_rot'] call BIS_fnc_DoorNoHandleClose);
			};
		};
		ActionBegin1 = openDoor_1;
		ActionEnd1 = openDoor_1;

		ActionBegin2 = openDoor_2;
		ActionEnd2 = openDoor_2;
		
		ActionBegin3 = openDoor_3;
		ActionEnd3 = openDoor_3;
		
		ActionBegin4 = openDoor_4;
		ActionEnd4 = openDoor_4;
		
		ActionBegin5 = openDoor_5;
		ActionEnd5 = openDoor_5;
		
		ActionBegin6 = openDoor_6;
		ActionEnd6 = openDoor_6;
		
		ActionBegin7 = openDoor_7;
		ActionEnd7 = openDoor_7;
		
		ActionBegin8 = openDoor_8;
		ActionEnd8 = openDoor_8;
	};

	class Land_rnc_apt_v2_15x15L_c1_f4: rnc_house_base {
		scope = 2;
		displayName = "Apartment V2/15x15L/C1/F4";
		model = "rnc_apartments\variant2\15x15L\rnc_apt_v2_15x15L_c1_f4.p3d";

		editorCategory = "rnc_apartments";
		editorSubCategory = "rnc_v2_15x15L";
		
		icon = "iconObject_1x2";
		mapsize = 4;

		destrType = "DestructDefault";
		armor = 1000;

		numberOfWindows = 16;
		numberOfDoors = 8;

		class Hitpoints {
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
			NORMAL_GLASS_HITPOINT(11,0.001,0.4);
			NORMAL_GLASS_HITPOINT(12,0.001,0.4);
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
			class door_4_source : door_1_source {};
			class door_5_source : door_1_source {};
			class door_6_source : door_1_source {};

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
			class glass_11_source : glass_1_source { hitpoint = "glass_11_hitpoint"; };
			class glass_12_source : glass_1_source { hitpoint = "glass_12_hitpoint"; };
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
				displayName = "$STR_DN_OUT_O_DOOR";
				position = Door_2_Trigger;
				condition = (this animationPhase 'Door_2_rot') < 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_2_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class closeDoor_2 : openDoor_1 {
				displayName = "$STR_DN_OUT_C_DOOR";
				position = Door_2_Trigger;
				condition = (this animationPhase 'Door_2_rot') >= 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_2_rot'] call BIS_fnc_DoorNoHandleClose);
			};
			
			class openDoor_3 : openDoor_1 {
				displayName = "$STR_DN_OUT_O_DOOR";
				position = Door_3_Trigger;
				condition = (this animationPhase 'Door_3_rot') < 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_3_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class closeDoor_3 : openDoor_1 {
				displayName = "$STR_DN_OUT_C_DOOR";
				position = Door_3_Trigger;
				condition = (this animationPhase 'Door_3_rot') >= 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_3_rot'] call BIS_fnc_DoorNoHandleClose);
			};

			class openDoor_4 : openDoor_1 {
				displayName = "$STR_DN_OUT_O_DOOR";
				position = Door_4_Trigger;
				condition = (this animationPhase 'Door_4_rot') < 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_4_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class closeDoor_4 : openDoor_1 {
				displayName = "$STR_DN_OUT_C_DOOR";
				position = Door_4_Trigger;
				condition = (this animationPhase 'Door_4_rot') >= 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_4_rot'] call BIS_fnc_DoorNoHandleClose);
			};

			class openDoor_5 : openDoor_1 {
				displayName = "$STR_DN_OUT_O_DOOR";
				position = Door_5_Trigger;
				condition = (this animationPhase 'Door_5_rot') < 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_5_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class closeDoor_5 : openDoor_1 {
				displayName = "$STR_DN_OUT_C_DOOR";
				position = Door_5_Trigger;
				condition = (this animationPhase 'Door_5_rot') >= 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_5_rot'] call BIS_fnc_DoorNoHandleClose);
			};
			
			class openDoor_6 : openDoor_1 {
				displayName = "$STR_DN_OUT_O_DOOR";
				position = Door_6_Trigger;
				condition = (this animationPhase 'Door_6_rot') < 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_6_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class closeDoor_6 : openDoor_1 {
				displayName = "$STR_DN_OUT_C_DOOR";
				position = Door_6_Trigger;
				condition = (this animationPhase 'Door_6_rot') >= 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_6_rot'] call BIS_fnc_DoorNoHandleClose);
			};
		};
		
		ActionBegin1 = openDoor_1;
		ActionEnd1 = openDoor_1;

		ActionBegin2 = openDoor_2;
		ActionEnd2 = openDoor_2;
		
		ActionBegin3 = openDoor_3;
		ActionEnd3 = openDoor_3;
		
		ActionBegin4 = openDoor_4;
		ActionEnd4 = openDoor_4;
		
		ActionBegin5 = openDoor_5;
		ActionEnd5 = openDoor_5;
		
		ActionBegin6 = openDoor_6;
		ActionEnd6 = openDoor_6;
	};

	class Land_rnc_apt_v2_15x15L_c1_f5: rnc_house_base {
		scope = 2;
		displayName = "Apartment V2/15x15L/C1/F5";
		model = "rnc_apartments\variant2\15x15L\rnc_apt_v2_15x15L_c1_f5.p3d";

		editorCategory = "rnc_apartments";
		editorSubCategory = "rnc_v2_15x15L";
		
		icon = "iconObject_1x2";
		mapsize = 4;

		destrType = "DestructDefault";
		armor = 1000;

		numberOfWindows = 18;
		numberOfDoors = 6;

		class Hitpoints {
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
			NORMAL_GLASS_HITPOINT(11,0.001,0.4);
			NORMAL_GLASS_HITPOINT(12,0.001,0.4);
			NORMAL_GLASS_HITPOINT(13,0.001,0.4);
			NORMAL_GLASS_HITPOINT(14,0.001,0.4);
			NORMAL_GLASS_HITPOINT(15,0.001,0.4);
			NORMAL_GLASS_HITPOINT(16,0.001,0.4);
			NORMAL_GLASS_HITPOINT(17,0.001,0.4);
			NORMAL_GLASS_HITPOINT(18,0.001,0.4);
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
			class door_4_source : door_1_source {};
			class door_5_source : door_1_source {};
			class door_6_source : door_1_source {};

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
			class glass_11_source : glass_1_source { hitpoint = "glass_11_hitpoint"; };
			class glass_12_source : glass_1_source { hitpoint = "glass_12_hitpoint"; };
			class glass_13_source : glass_1_source { hitpoint = "glass_13_hitpoint"; };
			class glass_14_source : glass_1_source { hitpoint = "glass_14_hitpoint"; };
			class glass_15_source : glass_1_source { hitpoint = "glass_15_hitpoint"; };
			class glass_16_source : glass_1_source { hitpoint = "glass_16_hitpoint"; };
			class glass_17_source : glass_1_source { hitpoint = "glass_17_hitpoint"; };
			class glass_18_source : glass_1_source { hitpoint = "glass_18_hitpoint"; };
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
				displayName = "$STR_DN_OUT_O_DOOR";
				position = Door_2_Trigger;
				condition = (this animationPhase 'Door_2_rot') < 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_2_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class closeDoor_2 : openDoor_1 {
				displayName = "$STR_DN_OUT_C_DOOR";
				position = Door_2_Trigger;
				condition = (this animationPhase 'Door_2_rot') >= 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_2_rot'] call BIS_fnc_DoorNoHandleClose);
			};
			
			class openDoor_3 : openDoor_1 {
				displayName = "$STR_DN_OUT_O_DOOR";
				position = Door_3_Trigger;
				condition = (this animationPhase 'Door_3_rot') < 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_3_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class closeDoor_3 : openDoor_1 {
				displayName = "$STR_DN_OUT_C_DOOR";
				position = Door_3_Trigger;
				condition = (this animationPhase 'Door_3_rot') >= 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_3_rot'] call BIS_fnc_DoorNoHandleClose);
			};

			class openDoor_4 : openDoor_1 {
				displayName = "$STR_DN_OUT_O_DOOR";
				position = Door_4_Trigger;
				condition = (this animationPhase 'Door_4_rot') < 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_4_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class closeDoor_4 : openDoor_1 {
				displayName = "$STR_DN_OUT_C_DOOR";
				position = Door_4_Trigger;
				condition = (this animationPhase 'Door_4_rot') >= 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_4_rot'] call BIS_fnc_DoorNoHandleClose);
			};

			class openDoor_5 : openDoor_1 {
				displayName = "$STR_DN_OUT_O_DOOR";
				position = Door_5_Trigger;
				condition = (this animationPhase 'Door_5_rot') < 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_5_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class closeDoor_5 : openDoor_1 {
				displayName = "$STR_DN_OUT_C_DOOR";
				position = Door_5_Trigger;
				condition = (this animationPhase 'Door_5_rot') >= 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_5_rot'] call BIS_fnc_DoorNoHandleClose);
			};
			
			class openDoor_6 : openDoor_1 {
				displayName = "$STR_DN_OUT_O_DOOR";
				position = Door_6_Trigger;
				condition = (this animationPhase 'Door_6_rot') < 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_6_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class closeDoor_6 : openDoor_1 {
				displayName = "$STR_DN_OUT_C_DOOR";
				position = Door_6_Trigger;
				condition = (this animationPhase 'Door_6_rot') >= 0.5; // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_6_rot'] call BIS_fnc_DoorNoHandleClose);
			};
		};
		
		ActionBegin1 = openDoor_1;
		ActionEnd1 = openDoor_1;

		ActionBegin2 = openDoor_2;
		ActionEnd2 = openDoor_2;
		
		ActionBegin3 = openDoor_3;
		ActionEnd3 = openDoor_3;
		
		ActionBegin4 = openDoor_4;
		ActionEnd4 = openDoor_4;
		
		ActionBegin5 = openDoor_5;
		ActionEnd5 = openDoor_5;
		
		ActionBegin6 = openDoor_6;
		ActionEnd6 = openDoor_6;
	};

	class Land_rnc_apt_v2_15x15L_c1_f6: Land_rnc_apt_v2_15x15L_c1_f4{
		displayName = "Apartment V2/15x15L/C1/F6";
		model = "rnc_apartments\variant2\15x15L\rnc_apt_v2_15x15L_c1_f6.p3d";
	};
};
