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
	class rnc_modular_fortress	{
		addonRootClass = "rnc_main";
		requiredAddons[] = {"rnc_main"};
		requiredVersion = 0.1;
		units[] = {
			
			};
		weapons[] = {};
	};
};
class CfgVehicles {
	
	class House_F;
	class rnc_fort_base: House_F {
		author = "RUMM & COKE Team";
		mapSize = 10;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 5.374;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "";
		scope = 0;
		scopeCurator = 0;
		icon = "iconObject_5x2";
		editorCategory = "rnc_decorations";
		editorSubcategory = "rnc_fortress";
		vehicleClass = "Structures_Cultural";
		destrType = "DestructNo";
		class DestructionEffects{};
	};
	
	class Land_rnc_fort_01 : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Fortress";
		model = "rnc_misc\fortress_01\rnc_fort_01.p3d";
	};
	
	class Land_rnc_fort_tower_round : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Tower Round";
		model = "rnc_misc\fortress_01\rnc_fort_tower_round.p3d";
	};
	
	class Land_rnc_fort_wall_stairs_straight_01 : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall Stairs Straight 01";
		model = "rnc_misc\fortress_01\rnc_fort_wall_stairs_straight_01.p3d";
	};
	
	class Land_rnc_fort_wall_thick_corner_01 : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall Thick Corner 01";
		model = "rnc_misc\fortress_01\rnc_fort_wall_thick_corner_01.p3d";
	};
	
	class Land_rnc_fort_wall_thick_corner_02 : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall Thick Corner 02";
		model = "rnc_misc\fortress_01\rnc_fort_wall_thick_corner_02.p3d";
	};
	
	class Land_rnc_fort_wall_thick_end_01 : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall Thick End 01";
		model = "rnc_misc\fortress_01\rnc_fort_wall_thick_end_01.p3d";
	};
	
	class Land_rnc_fort_wall_thick_end_02 : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall Thick End 02";
		model = "rnc_misc\fortress_01\rnc_fort_wall_thick_end_02.p3d";
	};
	
	class Land_rnc_fort_wall_thick_straight_01 : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall Thick Straight 01";
		model = "rnc_misc\fortress_01\rnc_fort_wall_thick_straight_01.p3d";
	};
	
	class Land_rnc_fort_wall_thick_straight_02 : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall Thick Straight 02";
		model = "rnc_misc\fortress_01\rnc_fort_wall_thick_straight_02.p3d";
	};
	
	class Land_rnc_fort_wall_thick_thin_transition_01 : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall Thick to Thin Transition 01";
		model = "rnc_misc\fortress_01\rnc_fort_wall_thick_thin_transition_01.p3d";
	};
	
	class Land_rnc_fort_wall_thin_corner_01 : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall Thin Corner 01";
		model = "rnc_misc\fortress_01\rnc_fort_wall_thin_corner_01.p3d";
	};
	
	class Land_rnc_fort_wall_thin_corner_02 : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall Thin Corner 02";
		model = "rnc_misc\fortress_01\rnc_fort_wall_thin_corner_02.p3d";
	};
	
	class Land_rnc_fort_wall_thin_corner_03 : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall Thin Corner 02";
		model = "rnc_misc\fortress_01\rnc_fort_wall_thin_corner_03.p3d";
	};
	
	class Land_rnc_fort_wall_thin_gate_01 : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall Thin Gate 01";
		model = "rnc_misc\fortress_01\rnc_fort_wall_thin_gate_01.p3d";
	};
	
	class Land_rnc_fort_wall_thin_straight_01 : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall Thin Straight 01";
		model = "rnc_misc\fortress_01\rnc_fort_wall_thin_straight_01.p3d";
	};
	
	class Land_rnc_fort_wall_thin_straight_02 : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall Thin Straight 02";
		model = "rnc_misc\fortress_01\rnc_fort_wall_thin_straight_02.p3d";
	};
	
	class Land_rnc_fort_wall_thin_straight_03 : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall Thin Straight 03";
		model = "rnc_misc\fortress_01\rnc_fort_wall_thin_straight_03.p3d";
	};
	
	class Land_rnc_fort_wall_thin_straight_04 : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall Thin Straight 04";
		model = "rnc_misc\fortress_01\rnc_fort_wall_thin_straight_04.p3d";
	};
	
	class Land_rnc_fort_wall_walkway_corner_01 : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall Walkway Corner 01";
		model = "rnc_misc\fortress_01\rnc_fort_wall_walkway_corner_01.p3d";
	};
	
	class Land_rnc_fort_wall_walkway_corner_02 : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall Walkway Corner 02";
		model = "rnc_misc\fortress_01\rnc_fort_wall_walkway_corner_02.p3d";
	};
	
	class Land_rnc_fort_wall_walkway_end_01 : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall Walkway End 01";
		model = "rnc_misc\fortress_01\rnc_fort_wall_walkway_end_01.p3d";
	};
	
	class Land_rnc_fort_wall_walkway_straight_01 : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall Walkway Straight 01";
		model = "rnc_misc\fortress_01\rnc_fort_wall_walkway_straight_01.p3d";
	};
	
	class Land_rnc_fort_wall_walkway_straight_02 : rnc_fort_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall Walkway Straight 02";
		model = "rnc_misc\fortress_01\rnc_fort_wall_walkway_straight_02.p3d";
	};
};
