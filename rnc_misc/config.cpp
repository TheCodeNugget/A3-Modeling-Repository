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
	
	class Lamps_base_F;
	class Land_rnc_lamp1_single_dblue_off: Lamps_base_F {
		author = "Rumm & Coke Team";
		mapSize = 0.68;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 3.087;
			verticalOffsetWorld = 0;
			init = "''";
		};
		class Hitpoints{};
		class AnimationSources{};
		//editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_LampStreet_small_off_F.jpg";
		_generalMacro = "rnc_lamp1_single_dblue_off";
		scope = 2;
		scopeCurator = 2;
		displayName = "Lamp-1/Single/Dark Blue (OFF)";
		model = "\rnc_misc\rnc_lamp1_single_dblue.p3d";
		icon = "iconObject_circle";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "rnc_lamps";
		armor = 500;
	};
	class Land_rnc_lamp1_single_dgreen_off: Land_rnc_lamp1_single_dblue_off {
		_generalMacro = "rnc_lamp1_single_dgreen_off";
		displayName = "Lamp-1/Single/Dark Green (OFF)";
		model = "\rnc_misc\rnc_lamp1_single_dgreen.p3d";
	};
	class Land_rnc_lamp1_single_dgray_off: Land_rnc_lamp1_single_dblue_off {
		_generalMacro = "rnc_lamp1_single_dgray_off";
		displayName = "Lamp-1/Single/Dark Gray (OFF)";
		model = "\rnc_misc\rnc_lamp1_single_dgray.p3d";
	};
	class Land_rnc_lamp1_single_lgray_off: Land_rnc_lamp1_single_dblue_off {
		_generalMacro = "rnc_lamp1_single_lgray_off";
		displayName = "Lamp-1/Single/Light Gray (OFF)";
		model = "\rnc_misc\rnc_lamp1_single_lgray.p3d";
	};
	
	class Land_rnc_lamp1_cdouble_dblue_off: Lamps_base_F {
		author = "Rumm & Coke Team";
		mapSize = 0.68;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 3.087;
			verticalOffsetWorld = 0;
			init = "''";
		};
		class Hitpoints{};
		class AnimationSources{};
		//editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_LampStreet_small_off_F.jpg";
		_generalMacro = "rnc_lamp1_cdouble_dblue_off";
		scope = 2;
		scopeCurator = 2;
		displayName = "Lamp-1/Corner Double/Dark Blue (OFF)";
		model = "\rnc_misc\rnc_lamp1_cdouble_dblue.p3d";
		icon = "iconObject_circle";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "rnc_lamps";
		armor = 500;
	};
	class Land_rnc_lamp1_cdouble_dgreen_off: Land_rnc_lamp1_cdouble_dblue_off {
		_generalMacro = "rnc_lamp1_cdouble_dgreen_off";
		displayName = "Lamp-1/Corner Double/Dark Green (OFF)";
		model = "\rnc_misc\rnc_lamp1_cdouble_dgreen.p3d";
	};
	class Land_rnc_lamp1_cdouble_dgray_off: Land_rnc_lamp1_cdouble_dblue_off {
		_generalMacro = "rnc_lamp1_cdouble_dgray_off";
		displayName = "Lamp-1/Corner Double/Dark Gray (OFF)";
		model = "\rnc_misc\rnc_lamp1_cdouble_dgray.p3d";
	};
	class Land_rnc_lamp1_cdouble_lgray_off: Land_rnc_lamp1_cdouble_dblue_off {
		_generalMacro = "rnc_lamp1_cdouble_lgray_off";
		displayName = "Lamp-1/Corner Double/Light Gray (OFF)";
		model = "\rnc_misc\rnc_lamp1_cdouble_lgray.p3d";
	};
	class Land_rnc_lamp1_sdouble_dblue_off: Land_rnc_lamp1_cdouble_dblue_off {
		_generalMacro = "rnc_lamp1_sdouble_dgreen_off";
		displayName = "Lamp-1/Straight Double/Dark Green (OFF)";
		model = "\rnc_misc\rnc_lamp1_sdouble_dgreen.p3d";
	};
	class Land_rnc_lamp1_sdouble_dgreen_off: Land_rnc_lamp1_cdouble_dblue_off {
		_generalMacro = "rnc_lamp1_sdouble_dgreen_off";
		displayName = "Lamp-1/Straight Double/Dark Green (OFF)";
		model = "\rnc_misc\rnc_lamp1_sdouble_dgreen.p3d";
	};
	class Land_rnc_lamp1_sdouble_dgray_off: Land_rnc_lamp1_cdouble_dblue_off {
		_generalMacro = "rnc_lamp1_sdouble_dgray_off";
		displayName = "Lamp-1/Straight Double/Dark Gray (OFF)";
		model = "\rnc_misc\rnc_lamp1_sdouble_dgray.p3d";
	};
	class Land_rnc_lamp1_sdouble_lgray_off: Land_rnc_lamp1_cdouble_dblue_off {
		_generalMacro = "rnc_lamp1_sdouble_lgray_off";
		displayName = "Lamp-1/Straight Double/Light Gray (OFF)";
		model = "\rnc_misc\rnc_lamp1_sdouble_lgray.p3d";
	};
	
	class Land_rnc_lamp1_triple_dblue_off: Lamps_base_F {
		author = "Rumm & Coke Team";
		mapSize = 0.68;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 3.087;
			verticalOffsetWorld = 0;
			init = "''";
		};
		class Hitpoints{};
		class AnimationSources{};
		//editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_LampStreet_small_off_F.jpg";
		_generalMacro = "rnc_lamp1_triple_dblue_off";
		scope = 2;
		scopeCurator = 2;
		displayName = "Lamp-1/Triple/Dark Blue (OFF)";
		model = "\rnc_misc\rnc_lamp1_triple_dblue.p3d";
		icon = "iconObject_circle";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "rnc_lamps";
		armor = 500;
	};
	class Land_rnc_lamp1_triple_dgreen_off: Land_rnc_lamp1_triple_dblue_off {
		_generalMacro = "rnc_lamp1_triple_dgreen_off";
		displayName = "Lamp-1/Triple/Dark Green (OFF)";
		model = "\rnc_misc\rnc_lamp1_triple_dgreen.p3d";
	};
	class Land_rnc_lamp1_triple_dgray_off: Land_rnc_lamp1_triple_dblue_off {
		_generalMacro = "rnc_lamp1_triple_dgray_off";
		displayName = "Lamp-1/Triple/Dark Gray (OFF)";
		model = "\rnc_misc\rnc_lamp1_triple_dgray.p3d";
	};
	class Land_rnc_lamp1_triple_lgray_off: Land_rnc_lamp1_triple_dblue_off {
		_generalMacro = "rnc_lamp1_triple_lgray_off";
		displayName = "Lamp-1/Triple/Light Gray (OFF)";
		model = "\rnc_misc\rnc_lamp1_triple_lgray.p3d";
	};
	
	class Land_rnc_lamp1_quad_dblue_off: Lamps_base_F {
		author = "Rumm & Coke Team";
		mapSize = 0.68;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 3.087;
			verticalOffsetWorld = 0;
			init = "''";
		};
		class Hitpoints{};
		class AnimationSources{};
		//editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_LampStreet_small_off_F.jpg";
		_generalMacro = "rnc_lamp1_quad_dblue_off";
		scope = 2;
		scopeCurator = 2;
		displayName = "Lamp-1/Quad/Dark Blue (OFF)";
		model = "\rnc_misc\rnc_lamp1_quad_dblue.p3d";
		icon = "iconObject_circle";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "rnc_lamps";
		armor = 500;
	};
	class Land_rnc_lamp1_quad_dgreen_off: Land_rnc_lamp1_quad_dblue_off {
		_generalMacro = "rnc_lamp1_quad_dgreen_off";
		displayName = "Lamp-1/Quad/Dark Green (OFF)";
		model = "\rnc_misc\rnc_lamp1_quad_dgreen.p3d";
	};
	class Land_rnc_lamp1_quad_dgray_off: Land_rnc_lamp1_quad_dblue_off {
		_generalMacro = "rnc_lamp1_quad_dgray_off";
		displayName = "Lamp-1/Quad/Dark Gray (OFF)";
		model = "\rnc_misc\rnc_lamp1_quad_dgray.p3d";
	};
	class Land_rnc_lamp1_quad_lgray_off: Land_rnc_lamp1_quad_dblue_off {
		_generalMacro = "rnc_lamp1_quad_lgray_off";
		displayName = "Lamp-1/Quad/Light Gray (OFF)";
		model = "\rnc_misc\rnc_lamp1_quad_lgray.p3d";
	};
	
	class Land_rnc_lamp1_single_dblue: Land_rnc_lamp1_single_dblue_off {
		author = "Rumm & Coke Team";
		mapSize = 0.7;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 3.102;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_LampStreet_small_F.jpg";
		_generalMacro = "rnc_lamp1_single_dblue";
		scope = 2;
		scopeCurator = 2;
		displayName = "Lamp-1/Single/Dark Blue";
		model = "\rnc_misc\rnc_lamp1_single_dblue.p3d";
		icon = "iconObject_circle";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "rnc_lamps";
		armor = 400;
		aggregateReflectors[] =
		{
			{"Light_1"}
		};
		
		class Reflectors {
			class Light_1
			{
				color[]				= {2500,4000,6000};
				ambient[]			= {2.5,4,6};
				intensity			= 2;
				size				= 1;					/// size of the light point seen from distance
				innerAngle			= 100;					/// angle of full light
				outerAngle			= 165;					/// angle of some light
				coneFadeCoef		= 4;					/// attenuation of light between the above angles

				position			= "Light_1_pos";		/// memory point for start of the light and flare
				direction			= "Light_1_dir";		/// memory point for the light direction
				hitpoint			= "Light_1_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection			= "";					/// selection for artificial glow around the bulb, not much used any more

				useFlare			= true;
				flareSize			= 2;
				flareMaxDistance	= 130;

				class Attenuation
				{
					start			= 0;
					constant		= 0;
					linear			= 0;
					quadratic		= 0.3;

					hardLimitStart	= 50;
					hardLimitEnd	= 65;
				};
			};
		};
	};
	class Land_rnc_lamp1_single_dgreen: Land_rnc_lamp1_single_dblue {
		_generalMacro = "rnc_lamp1_single_dgreen";
		displayName = "Lamp-1/Single/Dark Green";
		model = "\rnc_misc\rnc_lamp1_single_dgreen.p3d";
	};
	class Land_rnc_lamp1_single_dgray: Land_rnc_lamp1_single_dblue {
		_generalMacro = "rnc_lamp1_single_dgray";
		displayName = "Lamp-1/Single/Dark Gray";
		model = "\rnc_misc\rnc_lamp1_single_dgray.p3d";
	};
	class Land_rnc_lamp1_single_lgray: Land_rnc_lamp1_single_dblue {
		_generalMacro = "rnc_lamp1_single_lgray";
		displayName = "Lamp-1/Single/Light Gray";
		model = "\rnc_misc\rnc_lamp1_single_lgray.p3d";
	};
	
	class Land_rnc_lamp1_cdouble_dblue: Land_rnc_lamp1_cdouble_dblue_off {
		author = "Rumm & Coke Team";
		mapSize = 0.7;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 3.102;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_LampStreet_small_F.jpg";
		_generalMacro = "rnc_lamp1_cdouble_dblue";
		scope = 2;
		scopeCurator = 2;
		displayName = "Lamp-1/Triple/Dark Green";
		model = "\rnc_misc\rnc_lamp1_single_dblue.p3d";
		icon = "iconObject_circle";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "rnc_lamps";
		armor = 500;
		aggregateReflectors[] =
		{
			{"Light_1"}
		};
		
		class Reflectors {
			class Light_1
			{
				color[]				= {2500,4000,6000};
				ambient[]			= {2.5,4,6};
				intensity			= 2;
				size				= 1;					/// size of the light point seen from distance
				innerAngle			= 100;					/// angle of full light
				outerAngle			= 165;					/// angle of some light
				coneFadeCoef		= 4;					/// attenuation of light between the above angles

				position			= "Light_1_pos";		/// memory point for start of the light and flare
				direction			= "Light_1_dir";		/// memory point for the light direction
				hitpoint			= "Light_1_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection			= "";					/// selection for artificial glow around the bulb, not much used any more

				useFlare			= true;
				flareSize			= 2;
				flareMaxDistance	= 130;

				class Attenuation
				{
					start			= 0;
					constant		= 0;
					linear			= 0;
					quadratic		= 0.3;

					hardLimitStart	= 50;
					hardLimitEnd	= 65;
				};
			};
			class Light_2: Light_1
			{
				position = "Light_2_pos";
				direction = "Light_2_dir";
				hitpoint = "Light_2_hitpoint";
			};
		};
	};
	class Land_rnc_lamp1_cdouble_dgreen: Land_rnc_lamp1_cdouble_dblue {
		_generalMacro = "rnc_lamp1_cdouble_dgreen";
		displayName = "Lamp-1/Corner Double/Dark Green";
		model = "\rnc_misc\rnc_lamp1_cdouble_dgreen.p3d";
	};
	class Land_rnc_lamp1_cdouble_dgray: Land_rnc_lamp1_cdouble_dblue {
		_generalMacro = "rnc_lamp1_cdouble_dgray";
		displayName = "Lamp-1/Corner Double/Dark Gray";
		model = "\rnc_misc\rnc_lamp1_cdouble_dgray.p3d";
	};
	class Land_rnc_lamp1_cdouble_lgray: Land_rnc_lamp1_cdouble_dblue {
		_generalMacro = "rnc_lamp1_cdouble_lgray";
		displayName = "Lamp-1/Corner Double/Light Gray";
		model = "\rnc_misc\rnc_lamp1_cdouble_lgray.p3d";
	};
	class Land_rnc_lamp1_sdouble_dblue: Land_rnc_lamp1_cdouble_dblue {
		_generalMacro = "rnc_lamp1_sdouble_dgreen";
		displayName = "Lamp-1/Straight Double/Dark Green";
		model = "\rnc_misc\rnc_lamp1_sdouble_dgreen.p3d";
	};
	class Land_rnc_lamp1_sdouble_dgreen: Land_rnc_lamp1_cdouble_dblue {
		_generalMacro = "rnc_lamp1_sdouble_dgreen";
		displayName = "Lamp-1/Straight Double/Dark Green";
		model = "\rnc_misc\rnc_lamp1_sdouble_dgreen.p3d";
	};
	class Land_rnc_lamp1_sdouble_dgray: Land_rnc_lamp1_cdouble_dblue {
		_generalMacro = "rnc_lamp1_sdouble_dgray";
		displayName = "Lamp-1/Straight Double/Dark Gray";
		model = "\rnc_misc\rnc_lamp1_sdouble_dgray.p3d";
	};
	class Land_rnc_lamp1_sdouble_lgray: Land_rnc_lamp1_cdouble_dblue {
		_generalMacro = "rnc_lamp1_sdouble_lgray";
		displayName = "Lamp-1/Straight Double/Light Gray";
		model = "\rnc_misc\rnc_lamp1_sdouble_lgray.p3d";
	};

	class Land_rnc_lamp1_triple_dblue: Land_rnc_lamp1_triple_dblue_off {
		author = "Rumm & Coke Team";
		mapSize = 0.7;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 3.102;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_LampStreet_small_F.jpg";
		_generalMacro = "rnc_lamp1_triple_dblue";
		scope = 2;
		scopeCurator = 2;
		displayName = "Lamp-1/Triple/Dark Green";
		model = "\rnc_misc\rnc_lamp1_single_dblue.p3d";
		icon = "iconObject_circle";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "rnc_lamps";
		armor = 500;
		aggregateReflectors[] =
		{
			{"Light_1"}
		};
		
		class Reflectors {
			class Light_1
			{
				color[]				= {2500,4000,6000};
				ambient[]			= {2.5,4,6};
				intensity			= 2;
				size				= 1;					/// size of the light point seen from distance
				innerAngle			= 100;					/// angle of full light
				outerAngle			= 165;					/// angle of some light
				coneFadeCoef		= 4;					/// attenuation of light between the above angles

				position			= "Light_1_pos";		/// memory point for start of the light and flare
				direction			= "Light_1_dir";		/// memory point for the light direction
				hitpoint			= "Light_1_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection			= "";					/// selection for artificial glow around the bulb, not much used any more

				useFlare			= true;
				flareSize			= 2;
				flareMaxDistance	= 130;

				class Attenuation
				{
					start			= 0;
					constant		= 0;
					linear			= 0;
					quadratic		= 0.3;

					hardLimitStart	= 50;
					hardLimitEnd	= 65;
				};
			};
			class Light_2: Light_1
			{
				position = "Light_2_pos";
				direction = "Light_2_dir";
				hitpoint = "Light_2_hitpoint";
			};
			class Light_3: Light_1
			{
				position = "Light_3_pos";
				direction = "Light_3_dir";
				hitpoint = "Light_3_hitpoint";
			};
		};
	};
	class Land_rnc_lamp1_triple_dgreen: Land_rnc_lamp1_triple_dblue {
		_generalMacro = "rnc_lamp1_triple_dgreen";
		displayName = "Lamp-1/Triple/Dark Green";
		model = "\rnc_misc\rnc_lamp1_triple_dgreen.p3d";
	};
	class Land_rnc_lamp1_triple_dgray: Land_rnc_lamp1_triple_dblue {
		_generalMacro = "rnc_lamp1_triple_dgray";
		displayName = "Lamp-1/Triple/Dark Gray";
		model = "\rnc_misc\rnc_lamp1_triple_dgray.p3d";
	};
	class Land_rnc_lamp1_triple_lgray: Land_rnc_lamp1_triple_dblue {
		_generalMacro = "rnc_lamp1_triple_lgray";
		displayName = "Lamp-1/Triple/Light Gray";
		model = "\rnc_misc\rnc_lamp1_triple_lgray.p3d";
	};

	class Land_rnc_lamp1_quad_dblue: Land_rnc_lamp1_quad_dblue_off {
		author = "Rumm & Coke Team";
		mapSize = 0.7;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 3.102;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_LampStreet_small_F.jpg";
		_generalMacro = "rnc_lamp1_quad_dblue";
		scope = 2;
		scopeCurator = 2;
		displayName = "Lamp-1/Quad/Dark Green";
		model = "\rnc_misc\rnc_lamp1_single_dblue.p3d";
		icon = "iconObject_circle";
		editorCategory = "rnc_miscObjects";
		editorSubcategory = "rnc_lamps";
		armor = 500;
		aggregateReflectors[] =
		{
			{"Light_1"}
		};
		
		class Reflectors {
			class Light_1
			{
				color[]				= {2500,4000,6000};
				ambient[]			= {2.5,4,6};
				intensity			= 2;
				size				= 1;					/// size of the light point seen from distance
				innerAngle			= 100;					/// angle of full light
				outerAngle			= 165;					/// angle of some light
				coneFadeCoef		= 4;					/// attenuation of light between the above angles

				position			= "Light_1_pos";		/// memory point for start of the light and flare
				direction			= "Light_1_dir";		/// memory point for the light direction
				hitpoint			= "Light_1_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection			= "";					/// selection for artificial glow around the bulb, not much used any more

				useFlare			= true;
				flareSize			= 2;
				flareMaxDistance	= 130;

				class Attenuation
				{
					start			= 0;
					constant		= 0;
					linear			= 0;
					quadratic		= 0.3;

					hardLimitStart	= 50;
					hardLimitEnd	= 65;
				};
			};
			class Light_2: Light_1
			{
				position = "Light_2_pos";
				direction = "Light_2_dir";
				hitpoint = "Light_2_hitpoint";
			};
			class Light_3: Light_1
			{
				position = "Light_3_pos";
				direction = "Light_3_dir";
				hitpoint = "Light_3_hitpoint";
			};
			class Light_4: Light_1
			{
				position = "Light_4_pos";
				direction = "Light_4_dir";
				hitpoint = "Light_4_hitpoint";
			};
		};
	};
	class Land_rnc_lamp1_quad_dgreen: Land_rnc_lamp1_quad_dblue {
		_generalMacro = "rnc_lamp1_quad_dgreen";
		displayName = "Lamp-1/Quad/Dark Green";
		model = "\rnc_misc\rnc_lamp1_quad_dgreen.p3d";
	};
	class Land_rnc_lamp1_quad_dgray: Land_rnc_lamp1_quad_dblue {
		_generalMacro = "rnc_lamp1_quad_dgray";
		displayName = "Lamp-1/Quad/Dark Gray";
		model = "\rnc_misc\rnc_lamp1_quad_dgray.p3d";
	};
	class Land_rnc_lamp1_quad_lgray: Land_rnc_lamp1_quad_dblue {
		_generalMacro = "rnc_lamp1_quad_lgray";
		displayName = "Lamp-1/Quad/Light Gray";
		model = "\rnc_misc\rnc_lamp1_quad_lgray.p3d";
	};
};
