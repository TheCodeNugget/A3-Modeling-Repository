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

class CfgPatches
{
	class rnc_signs
	{
		addonRootClass = "rnc_main";
		requiredAddons[] = {"rnc_main"};
		requiredVersion = 0.1;
		units[] = {
			"rnc_longSign_01"
			};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Signs_base_F;
	class rnc_longSign_01: Signs_base_F {
		author = "RUMM & COKE Team";
		scope = 2;
		scopeCurator = 2;
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "rnc_signs";
		mapSize = 9.42;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.67;
			verticalOffsetWorld = 0;
			init = "''";
		};
		displayName = "Long Sign v1 (Little Venice|Empty)";
		model = "rnc_signs\rnc_LongSign_v1.p3d";
		icon = "iconObject_10x1";
	};
};
