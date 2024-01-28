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
	class rnc_aircraft {
		addonRootClass = "rnc_misc";
		requiredAddons[] = {"rnc_main"};
		requiredVersion = 0.1;
		units[] = {
			
			};
		weapons[] = {};
	};
};
class CfgVehicles {
	
	class House_F;
	class Land_cargojet_blank: House_F {
		author = "RUMM & COKE Team / Quaternius";
		mapSize = 6.1;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "";
		scope = 2;
		displayName = "Cargo Plane Blank";
		model = "rnc_misc\aircraft\rnc_cargo_jet\rnc_cargojet_blank.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "EdSubcat_Planes";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_cargojet_banana: House_F {
		author = "RUMM & COKE Team / Quaternius";
		mapSize = 6.1;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "";
		scope = 2;
		displayName = "Cargo Plane Banana";
		model = "rnc_misc\aircraft\rnc_cargo_jet\rnc_cargojet_banana.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "EdSubcat_Planes";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_cargojet_biplane: House_F {
		author = "RUMM & COKE Team / Quaternius";
		mapSize = 6.1;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "";
		scope = 2;
		displayName = "Cargo Plane Biplane";
		model = "rnc_misc\aircraft\rnc_cargo_jet\rnc_cargojet_biplane.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "EdSubcat_Planes";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_cargojet_rummair: House_F {
		author = "RUMM & COKE Team / Quaternius";
		mapSize = 6.1;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "";
		scope = 2;
		displayName = "Cargo Plane RummAir";
		model = "rnc_misc\aircraft\rnc_cargo_jet\rnc_cargojet_rummair.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "EdSubcat_Planes";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_passjet_blank: House_F {
		author = "RUMM & COKE Team / Quaternius";
		mapSize = 6.1;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "";
		scope = 2;
		displayName = "Passenger Plane Blank";
		model = "rnc_misc\aircraft\rnc_pass_jet\rnc_passjet_blank.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "EdSubcat_Planes";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
};
