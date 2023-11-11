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
	class rnc_randomtest {
		requiredAddons[] = {"rnc_main"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles {
	class rnc_house_base;

	class Land_rnc_buntings: rnc_house_base {
		scope = 2;
		displayName = "Cuntings";
		model = "rnc_randomtest\rnc_buntings.p3d";

		editorCategory = "rnc_miscObjects";
		editorSubCategory = "rnc_mapmaking";
		
		icon = "iconObject_1x2";
		mapsize = 4;

		destrType = "DestructDefault";
		armor = 1000;

		class AnimationSources {
			
			class rndOffset
			{
				source = "objRandom";
				initPhaseArray[] = {0, 0.2, 0.4, 0.6, 0.8};
				animPeriod = 1;
			};
		};
	};
};
