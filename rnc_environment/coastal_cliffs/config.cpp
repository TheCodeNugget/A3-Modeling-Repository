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

class CfgPatches
{
	class rnc_coastal_cliffs
	{
		requiredAddons[] = {"A3_Rocks_F"};
		requiredVersion = 0.1;
		units[] = {
			
		};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Rocks_base_F;
	class Land_rnc_coastal_cliff_01: Rocks_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 12.99;
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.513;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_BluntRock_apart.jpg";
		scope = 2;
		scopeCurator = 0;
		displayName = "Coastal Cliff 01";
		model = "rnc_environment\coastal_cliffs\rnc_coastal_cliff_01.p3d";
		icon = "iconObject_circle";
		editorCategory = "rnc_environment";
		editorSubcategory = "rnc_cliffs";
		accuracy = 1000;
	};
	
	class Land_rnc_coastal_cliff_02: Rocks_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 12.99;
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.513;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_BluntRock_apart.jpg";
		scope = 2;
		scopeCurator = 0;
		displayName = "Coastal Cliff 02";
		model = "rnc_environment\coastal_cliffs\rnc_coastal_cliff_02.p3d";
		icon = "iconObject_circle";
		editorCategory = "rnc_environment";
		editorSubcategory = "rnc_cliffs";
		accuracy = 1000;
	};
	
	class Land_rnc_coastal_cliff_03: Rocks_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 12.99;
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.513;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_BluntRock_apart.jpg";
		scope = 2;
		scopeCurator = 0;
		displayName = "Coastal Cliff 03";
		model = "rnc_environment\coastal_cliffs\rnc_coastal_cliff_03.p3d";
		icon = "iconObject_circle";
		editorCategory = "rnc_environment";
		editorSubcategory = "rnc_cliffs";
		accuracy = 1000;
	};
};
