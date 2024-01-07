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
	
	class House_F;
	class Land_rnc_diesel_locomotive_01: House_F {
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
	
	class Land_rnc_diesel_locomotive_02: House_F {
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
	
	class Land_rnc_passenger_wagon_01: House_F {
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
	
	class Land_rnc_passenger_wagon_02: House_F {
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
	
	class Land_rnc_hispeed_locomotive_01: House_F {
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
	
	class Land_rnc_hispeed_locomotive_02: House_F {
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
	
	class Land_rnc_hispeed_wagon_01: House_F {
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
		displayName = "Hi-Speed Wagon 01";
		model = "rnc_misc\railways\rnc_hispeed_wagon_01.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "EdSubcat_Trains";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_rnc_hispeed_wagon_02: House_F {
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
		displayName = "Hi-Speed Wagon 02";
		model = "rnc_misc\railways\rnc_hispeed_wagon_02.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "EdSubcat_Trains";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_rnc_container_wagon: House_F {
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
		displayName = "Container Wagon";
		model = "rnc_misc\railways\rnc_container_wagon.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "EdSubcat_Trains";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_rnc_log_wagon: House_F {
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
		displayName = "Log Wagon";
		model = "rnc_misc\railways\rnc_log_wagon.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "EdSubcat_Trains";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_rnc_hay_wagon: House_F {
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
		displayName = "Hay Wagon";
		model = "rnc_misc\railways\rnc_hay_wagon.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "EdSubcat_Trains";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_rnc_ore_wagon: House_F {
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
		displayName = "Ore Wagon";
		model = "rnc_misc\railways\rnc_ore_wagon.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "EdSubcat_Trains";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_rnc_gravel_wagon: House_F {
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
		displayName = "Gravel Wagon";
		model = "rnc_misc\railways\rnc_Gravel_wagon.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "EdSubcat_Trains";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_rnc_rail_tunnel: House_F {
		author = "RUMM & COKE Team";
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
		displayName = "Rail Tunnel";
		model = "rnc_misc\railways\rnc_rail_tunnel.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "EdSubcat_Trains";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
};
