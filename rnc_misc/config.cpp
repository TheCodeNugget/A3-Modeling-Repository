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
		editorCategory = "rnc_structures";
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
		editorCategory = "rnc_structures";
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
		editorCategory = "rnc_structures";
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
		editorCategory = "rnc_structures";
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
		editorCategory = "rnc_structures";
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
		editorCategory = "rnc_structures";
		editorSubcategory = "rnc_waterObj";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_rnc_rubber_duck_smol: Land_rnc_rubber_duck {
		displayName = "Rubber Duck Smol";
		model = "rnc_misc\rnc_rubber_duck_smol.p3d";
	};

	class Land_rnc_alwarren: House_Small_F {
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
		displayName = "Alwarren";
		model = "rnc_misc\rnc_alwarren.p3d";
		icon = "iconObject_5x2";
		editorCategory = "rnc_structures";
		editorSubcategory = "rnc_waterObj";
		vehicleClass = "Structures_Industrial";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	class Land_rnc_alwarren_smol: Land_rnc_rubber_duck {
		displayName = "Alwarren Smol";
		model = "rnc_misc\rnc_alwarren_smol.p3d";
	};

	class FlagCarrier;
	class Flag_Mehland_F: FlagCarrier {
		author = "RUMM & COKE Team";
		class SimpleObject {
			eden = 0;
			animate[] = {{"flag",0}};
			hide[] = {};
			verticalOffset = 3.977;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Flag_Vrana_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Mehland Flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\rnc_misc\data\flag_of_mehland_co.paa'";
		};
	};

	class thing;
	class Rnc_Particle_BigFire_F: thing {
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.0010700001;
			verticalOffsetWorld = 0;
			init = "''";
		};
		simulation = "Fire";
		icon = "iconObject_circle";
		editorCategory = "EdCat_Effects";
		class EventHandlers
		{
			init = "if (is3DEN) then {(_this # 0) spawn {_this enablesimulation true;}};(_this # 0) inflame true;(_this # 0) hideObject true;";
		};
		displayName = "$STR_A3_C_CfgVehicles_Particle_BigFire_F0";
		scope = 1;
		scopeCurator = 1;
		editorSubcategory = "EdSubcat_Fire";
		class Effects {
			class Fire {
				simulation = "particles";
				type = "BigDestructionFire";
			};
			class FireSparks {
				simulation = "particles";
				type = "FireSparks";
			};
			class Smoke {
				simulation = "particles";
				type = "BigDestructionSmoke";
			};
			class Refract {
				simulation = "particles";
				type = "ObjectDestructionRefract";
			};
			class Light {
				simulation = "light";
				type = "rnc_BigFireLight";
			};
			class Sound {
				simulation = "sound";
				type = "Fire";
			};
		};
	};
};

class CfgLights {
	class ObjectDestructionLight;
	class rnc_BigFireLight: ObjectDestructionLight
	{
		intensity = "25000 * (power interpolate [0.1, 1.0, 0.7, 1.0])";
	};
};