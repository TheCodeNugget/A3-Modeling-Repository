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
	class rnc_modular_fortress	{
		addonRootClass = "rnc_main";
		requiredAddons[] = {"rnc_main"};
		requiredVersion = 0.1;
		units[] = {
			
			};
		weapons[] = {};
	};
};
class CfgVehicles {
	
	class House_Small_F;
	class rnc_fort_base: House_Small_F {
		author = "RUMM & COKE Team";
		mapSize = 1;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.358;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "";
		_generalMacro = "rnc_bunt_base";
		scope = 0;
		scopeCurator = 0;
		icon = "iconObject_5x2";
		editorCategory = "rnc_decorations";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	// Long Buntings
	// Rectangle Checkered
	class rnc_fort_01 : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "EdSubcat_Historical";
		displayName = "Fortress";
		model = "rnc_misc\fortress_01\rnc_fort_01.p3d";
	};
};
