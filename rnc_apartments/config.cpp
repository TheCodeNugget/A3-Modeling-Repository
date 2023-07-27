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

class CfgEditorCategories {
	class rnc_apartments { // Category class, you point to it in editorCategory property
		displayName = "Apartments (R&C)"; // Name visible in the list
	};
};

class CfgEditorSubcategories {
	class rnc_v1_c9 { // Category class, you point to it in editorSubcategory property
		displayName = "V1/C9"; // Name visible in the list
	};
	
	class rnc_v1_s9 { // Category class, you point to it in editorSubcategory property
		displayName = "V1/S9"; // Name visible in the list
	};
	
	class rnc_v1_15x15L { // Category class, you point to it in editorSubcategory property
		displayName = "V1/15x15L"; // Name visible in the list
	};
	
	class rnc_v1_18x18LI { // Category class, you point to it in editorSubcategory property
		displayName = "V1/18x18LI"; // Name visible in the list
	};
	
	class rnc_v2_c9 { // Category class, you point to it in editorSubcategory property
		displayName = "V2/C9"; // Name visible in the list
	};
	
	class rnc_v2_s9 { // Category class, you point to it in editorSubcategory property
		displayName = "V2/S9"; // Name visible in the list
	};
	
	class rnc_v2_15x15L { // Category class, you point to it in editorSubcategory property
		displayName = "V2/15x15L"; // Name visible in the list
	};
	
	class rnc_v2_18x18LI { // Category class, you point to it in editorSubcategory property
		displayName = "V2/18x18LI"; // Name visible in the list
	};
};