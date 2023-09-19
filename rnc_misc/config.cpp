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
	class rnc_misc {
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
	class rnc_lamp1_colour1_off: Lamps_base_F {
		author = "Rumm & Coke Team";
		mapSize = 0.68;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 3.087;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_LampStreet_small_off_F.jpg";
		_generalMacro = "rnc_lamp1_colour1_off";
		scope = 2;
		scopeCurator = 2;
		displayName = "Lamp-1/Colour1 (OFF)";
		model = "\rnc_misc\rnc_lamp1_colour1.p3d";
		icon = "iconObject_circle";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "rnc_lamps";
		armor = 400;
	};
	class rnc_lamp1_colour2_off: rnc_lamp1_colour1_off {
		_generalMacro = "rnc_lamp1_colour2_off";
		displayName = "Lamp-1/Colour2 (OFF)";
		model = "\rnc_misc\rnc_lamp1_colour2.p3d";
	};
	class rnc_lamp1_colour3_off: rnc_lamp1_colour1_off {
		_generalMacro = "rnc_lamp1_colour3_off";
		displayName = "Lamp-1/Colour3 (OFF)";
		model = "\rnc_misc\rnc_lamp1_colour3.p3d";
	};
	class rnc_lamp1_colour4_off: rnc_lamp1_colour1_off {
		_generalMacro = "rnc_lamp1_colour4_off";
		displayName = "Lamp-1/Colour4 (OFF)";
		model = "\rnc_misc\rnc_lamp1_colour4.p3d";
	};
	
	class rnc_lamp1_colour1: Lamps_base_F {
		author = "Rumm & Coke Team";
		mapSize = 0.7;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {"light_1_hide"};
			verticalOffset = 3.102;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_LampStreet_small_F.jpg";
		_generalMacro = "rnc_lamp1_colour1";
		scope = 2;
		scopeCurator = 2;
		displayName = "Lamp-1/Colour1";
		model = "\rnc_misc\rnc_lamp1_colour1.p3d";
		icon = "iconObject_circle";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "rnc_lamps";
		armor = 400;
		aggregateReflectors[] =
		{
			{"Light_1"}
		};
		
		class Reflectors {
			class Light_1 {
				color[] = {1000,1100,1200};
				ambient[] = {10,11,12};
				intensity = 3;
				size = 1;
				innerAngle = 120;
				outerAngle = 170;
				coneFadeCoef = 1;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 1.1;
				flareMaxDistance = 200;
				class Attenuation {
					start = 0;
					constant = 0;
					linear = 2;
					quadratic = 0.1;
					hardLimitStart = 35;
					hardLimitEnd = 55;
				};
			};
		};
	};
	class rnc_lamp1_colour2: rnc_lamp1_colour1 {
		_generalMacro = "rnc_lamp1_colour2";
		displayName = "Lamp-1/Colour2";
		model = "\rnc_misc\rnc_lamp1_colour2.p3d";
	};
	class rnc_lamp1_colour3: rnc_lamp1_colour1 {
		_generalMacro = "rnc_lamp1_colour3";
		displayName = "Lamp-1/Colour3";
		model = "\rnc_misc\rnc_lamp1_colour3.p3d";
	};
	class rnc_lamp1_colour4: rnc_lamp1_colour1 {
		_generalMacro = "rnc_lamp1_colour4";
		displayName = "Lamp-1/Colour4";
		model = "\rnc_misc\rnc_lamp1_colour4.p3d";
	};
};
