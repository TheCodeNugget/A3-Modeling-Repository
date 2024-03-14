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
	class rnc_ponds {
		addonRootClass = "rnc_main";
		requiredAddons[] = {"rnc_main"};
		requiredVersion = 0.1;
		units[] = {
			"Land_rnc_pond_11x26b"
			};
		weapons[] = {};
	};
};
class CfgVehicles {
	class NonStrategic;
	class rnc_pondbase_blue: NonStrategic {
		scope=0;
		author="Bohemia Interactive";
		displayName="pondbase";
		editorCategory="rnc_ponds";
		editorSubcategory="rnc_ponds_blue";
		destrType="DestructNo";
		Iswater=1;
		cost=100;
		class DestructionEffects {};
	};
	class Land_rnc_pond_11x26b: rnc_pondbase_blue {
		displayName="Pond (11 x 26)";
		model="rnc_ponds\rnc_pond_11x26b.p3d";
	};
};
