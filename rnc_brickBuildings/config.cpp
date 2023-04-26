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
	class rnc_brickBuildings {
		addonRootClass = "rnc_main";
		requiredAddons[] = {"rnc_main"};
		requiredVersion = 0.1;
		units[] = {
			"Land_rnc_brickHouse_1"
		};
		weapons[] = {};
	};
};
class CfgVehicles {
	class House_Small_F;
	class Land_rnc_brickHouse_01: House_Small_F {
		scope = 2; // 2 = public = shown in editor
		displayName = "Brick House 1"; // Name in editor
		model = "rnc_brickBuildings\rnc_brickHouse_01.p3d"; // Path to model

		editorCategory = "rnc_euObjects";
		editorSubcategory = "rnc_brickBuildings";
		mapSize = 20.27; // Scale of icon in editor
		cost = 40000; // Score penalty for destroying the house
	};
};
