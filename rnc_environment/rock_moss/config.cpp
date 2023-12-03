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
	class rnc_rock_moss
	{
		addonRootClass = "rnc_environment";
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
	class Land_rnc_rock_moss_01: Rocks_base_F
	{
		author = "RUMM & COKE Team";
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
		displayName = "Mossy Rock 01";
		model = "rnc_environment\rock_moss\rnc_rock_moss_01.p3d";
		icon = "iconObject_circle";
		editorCategory = "rnc_environment";
		accuracy = 1000;
	};
	
	class Land_rnc_rock_moss_02: Rocks_base_F
	{
		scope = 2;
		displayName = "Mossy Rock 02";
		model = "rnc_environment\rock_moss\rnc_rock_moss_02.p3d";
		editorCategory = "rnc_environment";
		icon = "iconObject_circle";
	};
	
	class Land_rnc_rock_moss_03: Rocks_base_F
	{
		scope = 2;
		displayName = "Mossy Rock 03";
		model = "rnc_environment\rock_moss\rnc_rock_moss_03.p3d";
		editorCategory = "rnc_environment";
		icon = "iconObject_circle";
	};
	
	class Land_rnc_rock_moss_04: Rocks_base_F
	{
		scope = 2;
		displayName = "Mossy Rock 04";
		model = "rnc_environment\rock_moss\rnc_rock_moss_04.p3d";
		editorCategory = "rnc_environment";
		icon = "iconObject_circle";
	};
	
	class Land_rnc_rock_moss_05: Rocks_base_F
	{
		scope = 2;
		displayName = "Mossy Rock 05";
		model = "rnc_environment\rock_moss\rnc_rock_moss_05.p3d";
		editorCategory = "rnc_environment";
		icon = "iconObject_circle";
	};
	
	class Land_rnc_rock_moss_06: Rocks_base_F
	{
		scope = 2;
		displayName = "Mossy Rock 06";
		model = "rnc_environment\rock_moss\rnc_rock_moss_06.p3d";
		editorCategory = "rnc_environment";
		icon = "iconObject_circle";
	};
	
	class Land_rnc_rock_moss_07: Rocks_base_F
	{
		scope = 2;
		displayName = "Mossy Rock 07";
		model = "rnc_environment\rock_moss\rnc_rock_moss_07.p3d";
		editorCategory = "rnc_environment";
		icon = "iconObject_circle";
	};
	
	class Land_rnc_rock_moss_08: Rocks_base_F
	{
		scope = 2;
		displayName = "Mossy Rock 08";
		model = "rnc_environment\rock_moss\rnc_rock_moss_08.p3d";
		editorCategory = "rnc_environment";
		icon = "iconObject_circle";
	};
	
	class Land_rnc_rock_moss_09: Rocks_base_F
	{
		scope = 2;
		displayName = "Mossy Rock 09";
		model = "rnc_environment\rock_moss\rnc_rock_moss_09.p3d";
		editorCategory = "rnc_environment";
		icon = "iconObject_circle";
	};
	
	class Land_rnc_rock_moss_10: Rocks_base_F
	{
		scope = 2;
		displayName = "Mossy Rock 10";
		model = "rnc_environment\rock_moss\rnc_rock_moss_10.p3d";
		editorCategory = "rnc_environment";
		icon = "iconObject_circle";
	};
	
	class Land_rnc_rock_moss_11: Rocks_base_F
	{
		scope = 2;
		displayName = "Mossy Rock 11";
		model = "rnc_environment\rock_moss\rnc_rock_moss_11.p3d";
		editorCategory = "rnc_environment";
		icon = "iconObject_circle";
	};
	
	class Land_rnc_rock_moss_12: Rocks_base_F
	{
		scope = 2;
		displayName = "Mossy Rock 12";
		model = "rnc_environment\rock_moss\rnc_rock_moss_12.p3d";
		editorCategory = "rnc_environment";
		icon = "iconObject_circle";
	};
	
	class Land_rnc_rock_moss_13: Rocks_base_F
	{
		scope = 2;
		displayName = "Mossy Rock 13";
		model = "rnc_environment\rock_moss\rnc_rock_moss_13.p3d";
		editorCategory = "rnc_environment";
		icon = "iconObject_circle";
	};
};
