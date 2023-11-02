#define _ARMA_

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
	class rnc_misc_lamptest {
		addonRootClass = "rnc_main";
		requiredAddons[] = {"rnc_main"};
		requiredVersion = 0.1;
		units[] = {
			
			};
		weapons[] = {};
	};
};
class CfgVehicles {
	
	class Lamps_base_F;
	class Land_rnc_street_lamp_01_black_off: Lamps_base_F {
		author = "RUMM & COKE Team";
		mapSize = 1,3;
		class SimpleObject {
			eden = 0;
			animate[] = {"Light_1_hide"};
			hide[] = {};
			verticalOffset = 1.358;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "";
		_generalMacro = "Land_rnc_street_lamp_01_black_off";
		scope = 2;
		scopeCurator = 2;
		displayName = "Street Lamp Black (Off)";
		model = "rnc_misc\streetlamp\rnc_street_lamp_01_black.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "rnc_lamps";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
		armor = 400;
	};
	class Land_rnc_street_lamp_01_green_off: Land_rnc_street_lamp_01_black_off {
		_generalMacro = "Land_rnc_street_lamp_01_green_off";
		displayName = "Street Lamp Green (Off)";
		model = "rnc_misc\streetlamp\rnc_street_lamp_01_green.p3d";
	};
	class Land_rnc_street_lamp_01_blue_off: Land_rnc_street_lamp_01_black_off {
		_generalMacro = "Land_rnc_street_lamp_01_blue_off";
		displayName = "Street Lamp Blue (Off)";
		model = "rnc_misc\streetlamp\rnc_street_lamp_01_blue.p3d";
	};
	class Land_rnc_street_lamp_01_gray_off: Land_rnc_street_lamp_01_black_off {
		_generalMacro = "Land_rnc_street_lamp_01_gray_off";
		displayName = "Street Lamp Gray (Off)";
		model = "rnc_misc\streetlamp\rnc_street_lamp_01_gray.p3d";
	};
	
	class Land_rnc_street_lamp_02_black_off: Land_rnc_street_lamp_01_black_off {
		_generalMacro = "Land_rnc_street_lamp_02_black_off";
		displayName = "Wall Lamp Black (Off)";
		model = "rnc_misc\streetlamp\rnc_street_lamp_02_black.p3d";
	};
	class Land_rnc_street_lamp_02_green_off: Land_rnc_street_lamp_01_black_off {
		_generalMacro = "Land_rnc_street_lamp_02_green_off";
		displayName = "Wall Lamp Green (Off)";
		model = "rnc_misc\streetlamp\rnc_street_lamp_02_green.p3d";
	};
	class Land_rnc_street_lamp_02_blue_off: Land_rnc_street_lamp_01_black_off {
		_generalMacro = "Land_rnc_street_lamp_02_blue_off";
		displayName = "Wall Lamp Blue (Off)";
		model = "rnc_misc\streetlamp\rnc_street_lamp_02_blue.p3d";
	};
	class Land_rnc_street_lamp_02_gray_off: Land_rnc_street_lamp_01_black_off {
		_generalMacro = "Land_rnc_street_lamp_02_gray_off";
		displayName = "Wall Lamp Gray (Off)";
		model = "rnc_misc\streetlamp\rnc_street_lamp_02_gray.p3d";
	};
	
	class Land_rnc_street_lamp_01_black: Lamps_base_F {
		author = "RUMM & COKE Team";
		mapSize = 1,3;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.358;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "";
		_generalMacro = "Land_rnc_street_lamp_01_black";
		scope = 2;
		scopeCurator = 2;
		displayName = "Street Lamp Black";
		model = "rnc_misc\streetlamp\rnc_street_lamp_01_black.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "rnc_lamps";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
		armor = 400;
		aggregateReflectors[] = {{"Light_1"}};
		class Reflectors
		{
			class Light_1
			{
				color[] = {1000,650,400};
				ambient[] = {10,6.5,4};
				intensity = 5;
				size = 1;
				innerAngle = 90;
				outerAngle = 360;
				coneFadeCoef = 1;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 0.8;
				flareMaxDistance = 250;
				class Attenuation
				{
					start = 0;
					constant = 20;
					linear = 0;
					quadratic = 0.5;
					hardLimitStart = 40;
					hardLimitEnd = 60;
				};
			};
		};
	};
	class Land_rnc_street_lamp_01_green: Land_rnc_street_lamp_01_black {
		_generalMacro = "Land_rnc_street_lamp_01_green";
		displayName = "Street Lamp Green";
		model = "rnc_misc\streetlamp\rnc_street_lamp_01_green.p3d";
	};
	class Land_rnc_street_lamp_01_blue: Land_rnc_street_lamp_01_black {
		_generalMacro = "Land_rnc_street_lamp_01_blue";
		displayName = "Street Lamp Blue";
		model = "rnc_misc\streetlamp\rnc_street_lamp_01_blue.p3d";
	};
	class Land_rnc_street_lamp_01_gray: Land_rnc_street_lamp_01_black {
		_generalMacro = "Land_rnc_street_lamp_01_gray";
		displayName = "Street Lamp Gray";
		model = "rnc_misc\streetlamp\rnc_street_lamp_01_gray.p3d";
	};
	
	class Land_rnc_street_lamp_02_black: Land_rnc_street_lamp_01_black {
		_generalMacro = "Land_rnc_street_lamp_02_black";
		displayName = "Wall Lamp Black";
		model = "rnc_misc\streetlamp\rnc_street_lamp_02_black.p3d";
	};
	class Land_rnc_street_lamp_02_green: Land_rnc_street_lamp_01_black {
		_generalMacro = "Land_rnc_street_lamp_02_green";
		displayName = "Wall Lamp Green";
		model = "rnc_misc\streetlamp\rnc_street_lamp_02_green.p3d";
	};
	class Land_rnc_street_lamp_02_blue: Land_rnc_street_lamp_01_black {
		_generalMacro = "Land_rnc_street_lamp_02_blue";
		displayName = "Wall Lamp Blue";
		model = "rnc_misc\streetlamp\rnc_street_lamp_02_blue.p3d";
	};
	class Land_rnc_street_lamp_02_gray: Land_rnc_street_lamp_01_black {
		_generalMacro = "Land_rnc_street_lamp_02_gray";
		displayName = "Wall Lamp Gray";
		model = "rnc_misc\streetlamp\rnc_street_lamp_02_gray.p3d";
	};
};