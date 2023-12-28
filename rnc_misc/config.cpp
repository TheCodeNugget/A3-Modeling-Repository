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
	class rnc_misc {
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
	class Land_rnc_ruler_vertical: House_Small_F {
		author = "RUMM & COKE Team";
		mapSize = 6.1;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.358;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "";
		_generalMacro = "Land_rnc_ruler_vertical";
		scope = 2;
		scopeCurator = 2;
		displayName = "Ruler Vertical";
		model = "rnc_misc\rnc_ruler_vertical.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "rnc_mapmaking";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_rnc_ruler_horizontal: House_Small_F {
		author = "RUMM & COKE Team";
		mapSize = 6.1;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.358;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "";
		_generalMacro = "Land_rnc_ruler_horizontal";
		scope = 2;
		scopeCurator = 2;
		displayName = "Ruler Horizontal";
		model = "rnc_misc\rnc_ruler_horizontal.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "rnc_mapmaking";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_rnc_jacob: House_Small_F {
		author = "RUMM & COKE Team";
		mapSize = 6.1;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.358;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "";
		_generalMacro = "Land_rnc_jacob";
		scope = 2;
		scopeCurator = 2;
		displayName = "Jacob";
		model = "rnc_misc\rnc_Jacob.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "rnc_waterObj";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_rnc_jacob_smol: Land_rnc_jacob {
		displayName = "Jacob Smol";
		model = "rnc_misc\rnc_Jacob_smol.p3d";
	};
	
	class Land_rnc_container_trailer: House_Small_F {
		author = "RUMM & COKE Team";
		mapSize = 6.1;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.358;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "";
		_generalMacro = "Land_rnc_container_trailer";
		scope = 2;
		scopeCurator = 2;
		displayName = "Container Trailer";
		model = "rnc_misc\rnc_container_trailer.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "rnc_waterObj";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_rnc_flatbed_trailer: House_Small_F {
		author = "RUMM & COKE Team";
		mapSize = 6.1;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.358;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "";
		_generalMacro = "Land_rnc_flatbed_trailer";
		scope = 2;
		scopeCurator = 2;
		displayName = "Flatbed Trailer";
		model = "rnc_misc\rnc_flatbed_trailer.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "rnc_waterObj";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_rnc_rubber_duck: House_Small_F {
		author = "RUMM & COKE Team";
		mapSize = 6.1;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.358;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "";
		scope = 2;
		displayName = "Rubber Duck";
		model = "rnc_misc\rnc_rubber_duck.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "rnc_waterObj";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_rnc_rubber_duck_smol: Land_rnc_rubber_duck {
		displayName = "Rubber Duck Smol";
		model = "rnc_misc\rnc_rubber_duck_smol.p3d";
	};
	
	class Land_rnc_caravan_01: House_Small_F {
		author = "RUMM & COKE Team";
		mapSize = 6.1;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.358;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "";
		scope = 2;
		displayName = "Caravan 01";
		model = "rnc_misc\rnc_caravan_01.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "EdSubcat_Transportation";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_rnc_caravan_02: House_Small_F {
		author = "RUMM & COKE Team";
		mapSize = 6.1;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.358;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "";
		scope = 2;
		displayName = "Caravan 02";
		model = "rnc_misc\rnc_caravan_02.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "EdSubcat_Transportation";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
};
