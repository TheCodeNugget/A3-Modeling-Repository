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
		addonRootClass = "rnc_apartments";
		requiredAddons[] = {"rnc_main"};
		requiredVersion = 0.1;
		units[] = {
			"caramellBulding"
		};
		weapons[] = {};
	};
};
class CfgVehicles {
	class House_Small_F;

	class caramellBulding: House_Small_F {
		scope = 2;
		displayName = "CaramellBuilding";
		model = "rnc_caramel\caramellBulding.p3d";

		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 3.066;
			verticalOffsetWorld = 0;
			init = "''";
		};
		
		hiddenSelections[] = {"windows"};
		hiddenSelectionsTextures[] = {"a3\structures_f_exp\data\glass\multistorybuilding_3_windows_co.paa"};
		
		editorCategory = "rnc_apartments";
		//editorSubCategory = "rnc_city";
	};
	
	class caramellBulding2: House_Small_F {
		scope = 2;
		displayName = "CaramellBuilding2";
		model = "rnc_caramel\caramellBulding2.p3d";

		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 3.066;
			verticalOffsetWorld = 0;
			init = "''";
		};
		
		hiddenSelections[] = {"windows"};
		hiddenSelectionsTextures[] = {"a3\structures_f_exp\data\glass\Shop_window_01_CO.paa"};
		
		editorCategory = "rnc_apartments";
		//editorSubCategory = "rnc_city";
	};
};
