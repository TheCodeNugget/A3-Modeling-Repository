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
	class rnc_apartments_variant2 {
		//addonRootClass = "rnc_misc";
		requiredAddons[] = {"rnc_main"};
		requiredVersion = 0.1;
		units[] = {
			"rnc_multistory03_overlay"
		};
		weapons[] = {};
	};
};
class CfgVehicles {
	class House_Small_F;

	class Land_rnc_multistory03_overlay: House_Small_F {
		scope = 2;
		mapSize = 34.4;
		displayName = "Apartment Tower Overlay";
		icon = "iconObject_1x2";
		model = "rnc_misc\vanilla_overlays\rnc_multistory03_overlay.p3d";

		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 25.907;
			verticalOffsetWorld = 0;
			init = "''";
		};
	
		editorCategory = "rnc_apartments";
		//editorSubCategory = "rnc_city";
	};
	
	class Land_rnc_multistory04_overlay: House_Small_F {
		scope = 2;
		mapSize = 32.36;
		displayName = "Office Tower Overlay";
		icon = "iconObject_1x1";
		model = "rnc_misc\vanilla_overlays\rnc_multistory04_overlay.p3d";

		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 36.741;
			verticalOffsetWorld = 0;
			init = "''";
		};
	
		editorCategory = "rnc_apartments";
		//editorSubCategory = "rnc_city";
	};
};
