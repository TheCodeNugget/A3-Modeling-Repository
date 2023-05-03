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
	class rnc_apartments_variant_01 {
		addonRootClass = "rnc_apartments";
		requiredAddons[] = {"rnc_apartments"};
		requiredVersion = 0.1;
		units[] = {
		};
		weapons[] = {};
	};
};
class CfgVehicles {
	class House_Small_F;

	class Land_rnc_apt_9c_v1_c1_f3: House_Small_F {
		scope = 2;
		displayName = "Apartment V1/C9/C1/F3";
		model = "rnc_apartments\variant_01\rnc_apt_v1_c9_c1_f3.p3d";

		editorCategory = "rnc_euObjects";
		editorSubCategory = "rnc_city";
	};
};
