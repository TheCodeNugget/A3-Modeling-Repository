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
	class rnc_apartments {
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

	class Land_rnc_apt_9c: House_Small_F {
		scope = 2;
		displayName = "Apartment 9C 01";
		model = "rnc_apartments\rnc_apt_9C_01.p3d";

		editorCategory = "rnc_euObjects";
		editorSubCategory = "rnc_city";
	};

	class Land_rnc_apt_9s: House_Small_F {
		scope = 2;
		displayName = "Apartment 9S 01";
		model = "rnc_apartments\rnc_apt_9S_01.p3d";

		editorCategory = "rnc_euObjects";
		editorSubCategory = "rnc_city";
	};

	class Land_rnc_apt_16s: House_Small_F {
		scope = 2;
		displayName = "Apartment 16S 01";
		model = "rnc_apartments\rnc_apt_16S_01.p3d";

		editorCategory = "rnc_euObjects";
		editorSubCategory = "rnc_city";
	};

	class Land_rnc_apt_21s: House_Small_F {
		scope = 2;
		displayName = "Apartment 21S 01";
		model = "rnc_apartments\rnc_apt_21S_01.p3d";

		editorCategory = "rnc_euObjects";
		editorSubCategory = "rnc_city";
	};

	class Land_rnc_apt_17x21l: House_Small_F {
		scope = 2;
		displayName = "Apartment 17x21L 01";
		model = "rnc_apartments\rnc_apt_17x21L_01.p3d";

		editorCategory = "rnc_euObjects";
		editorSubCategory = "rnc_city";
	};

	class Land_rnc_apt_21x17l: House_Small_F {
		scope = 2;
		displayName = "Apartment 21x17L 01";
		model = "rnc_apartments\rnc_apt_21x17L_01.p3d";

		editorCategory = "rnc_euObjects";
		editorSubCategory = "rnc_city";
	};
};
