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
	class rnc_main {
		requiredAddons[] = {"A3_Structures_F_Mil"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class CfgFunctions {
	class RNC {
		tag = "RNC";
		class functions {
			file = "\rnc_main\functions";
			class house_snap{};
			class fortress_snap{};
		};
	};
};

class CfgVehicles {
	class House_Small_F{
		class Eventhandlers;
	};
	
	class rnc_house_base: House_Small_F{
		class EventHandlers: EventHandlers{
			dragged3DEN = "_this call rnc_fnc_house_snap;";
			registeredToWorld3DEN = "_this call rnc_fnc_house_snap;";
		};
	};
};

class CfgEditorCategories {
	class rnc_euObjects { // Category class, you point to it in editorCategory property
		displayName = "Structures European (R&C)"; // Name visible in the list
	};
	
	class rnc_miscObjects { // Category class, you point to it in editorCategory property
		displayName = "Structures Miscellaneous (R&C)"; // Name visible in the list
	};
	
	class rnc_ponds { // Category class, you point to it in editorCategory property
		displayName = "Ponds (R&C)"; // Name visible in the list
	};
	
	class rnc_decorations { // Category class, you point to it in editorCategory property
		displayName = "Decorations (R&C)"; // Name visible in the list
	};
	
	class rnc_environment { // Category class, you point to it in editorCategory property
		displayName = "Environment (R&C)"; // Name visible in the list
	};
};

class CfgEditorSubcategories {
	class rnc_buntings_long { // Category class, you point to it in editorSubcategory property
		displayName = "Buntings (Long)"; // Name visible in the list
	};
	class rnc_buntings_short { // Category class, you point to it in editorSubcategory property
		displayName = "Buntings (Short)"; // Name visible in the list
	};
	
	class rnc_fortress { // Category class, you point to it in editorSubcategory property
		displayName = "Fortress"; // Name visible in the list
	};
	
	class rnc_signs { // Category class, you point to it in editorSubcategory property
		displayName = "Signs"; // Name visible in the list
	};
	
	class rnc_brickBuildings { // Category class, you point to it in editorSubcategory property
		displayName = "Brick Buildings"; // Name visible in the list
	};
	
	class rnc_woodBuildings { // Category class, you point to it in editorSubcategory property
		displayName = "Wooden Buildings"; // Name visible in the list
	};
	
	class rnc_waterObj { // Category class, you point to it in editorSubcategory property
		displayName = "Water Objects"; // Name visible in the list
	};
	
	class rnc_misc { // Category class, you point to it in editorSubcategory property
		displayName = "Miscellaneous"; // Name visible in the list
	};
	
	class rnc_ponds_blue { // Category class, you point to it in editorSubcategory property
		displayName = "Blue Water"; // Name visible in the list
	};
	
	class rnc_transport {
		displayName = "Transportation";
	};
	
	class rnc_city {
		displayName = "City";
	};
	
	class rnc_lamps {
		displayName = "Lamps";
	};
	
	class rnc_mapmaking {
		displayName = "Terrain Makers Objects";
	};
};