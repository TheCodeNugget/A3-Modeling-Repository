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
	class rnc_railways {
		addonRootClass = "rnc_misc";
		requiredAddons[] = {"rnc_main"};
		requiredVersion = 0.1;
		units[] = {
			
			};
		weapons[] = {};
	};
};
class CfgVehicles {
	
	class ThingX;
	class Land_rnc_diesel_locomotive_01: ThingX {
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
		displayName = "Diesel Locomotive 01";
		model = "rnc_misc\railways\rnc_diesel_locomotive_01.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "EdSubcat_Trains";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_rnc_diesel_locomotive_02: ThingX {
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
		displayName = "Diesel Locomotive 02";
		model = "rnc_misc\railways\rnc_diesel_locomotive_02.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "EdSubcat_Trains";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_rnc_passenger_wagon_01: ThingX {
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
		displayName = "Passenger Wagon 01";
		model = "rnc_misc\railways\rnc_passenger_wagon_01.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "EdSubcat_Trains";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_rnc_passenger_wagon_02: ThingX {
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
		displayName = "Passenger Wagon 02";
		model = "rnc_misc\railways\rnc_passenger_wagon_02.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "EdSubcat_Trains";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_rnc_hispeed_locomotive_01: ThingX {
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
		displayName = "Hi-Speed Locomotive 01";
		model = "rnc_misc\railways\rnc_hispeed_locomotive_01.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "EdSubcat_Trains";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_rnc_hispeed_locomotive_02: ThingX {
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
		displayName = "Hi-Speed Locomotive 02";
		model = "rnc_misc\railways\rnc_hispeed_locomotive_02.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "EdSubcat_Trains";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
};
