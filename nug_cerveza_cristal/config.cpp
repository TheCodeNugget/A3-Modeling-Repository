////////////////////////////////////////////////////////////////////
//DeRap: Items\Food\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sat Nov 11 17:53:36 2023 : 'file' last modified on Tue Aug 01 11:55:50 2023
////////////////////////////////////////////////////////////////////

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
	class nug_cerveza_cristal
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Items"};
		requiredVersion = 0.1;
		units[] = {"Land_BottlePlastic_V1_F","Land_Can_Dented_F","Land_Can_Rusty_F","Land_Can_V1_F","Land_Can_V2_F","Land_Can_V3_F","Land_TacticalBacon_F"};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Items_base_F;
	class nug_cerveza_cristal: Items_base_F
	{
		author = "Ken The Nugget & Polycrow";
		mapSize = 0.05;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.04;
			verticalOffsetWorld = 0;
			init = "''";
		};
		// editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Can_V1_F.jpg";
		_generalMacro = "Land_Can_V1_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Cerveza Cristal Bottle";
		model = "\nug_cerveza_cristal\nug_cerveza_cristal.p3d";
		icon = "iconObject_circle";
		editorSubcategory = "EdSubcat_Food";
	};
};

class CfgAmmo
{
	class ammo_Bomb_LaserGuidedBase;
	class Nug_Bo_cerveza_LGB: ammo_Bomb_LaserGuidedBase
	{
		model = "\nug_cerveza_cristal\nug_cerveza_bomb.p3d";
		proxyShape = "\nug_cerveza_cristal\nug_cerveza_bomb.p3d";
		soundFly[] = {"\nug_cerveza_cristal\data\fly.wss",2,1,700};
		soundHit1[] = {"\nug_cerveza_cristal\data\impact.wss",2,1,2400};
		soundHit2[] = {"\nug_cerveza_cristal\data\impact.wss",2,1,2400};
		soundHit3[] = {"\nug_cerveza_cristal\data\impact.wss",2,1,2400};
		soundHit4[] = {"\nug_cerveza_cristal\data\impact.wss",2,1,2400};
		soundHit5[] = {"\nug_cerveza_cristal\data\impact.wss",2,1,2400};
	};
};

class CfgMagazines
{
	class VehicleMagazine;
	class 1Rnd_Cerveza_LGB: VehicleMagazine
	{
		author = "Ken The Nugget";
		scope = 2;
		displayNameShort = "Cerveza1";
		descriptionShort = "Cerveza2";
		ammo = "Nug_Bo_cerveza_LGB";
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 25;
		nameSound = "cannon";
	};
	
	class PylonMissile_1Rnd_Cerveza: 1Rnd_Cerveza_LGB
	{
		displayName = "Cerveza LGB";
		count = 1;
		model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
		hardpoints[] = {"B_BOMB_PYLON", "B_GBU12"};
		pylonWeapon = "Cerveza_LGB_Launcher";
		mass = 230;
	};
};

class CfgWeapons
{
	class weapon_LGBLauncherBase {
		class LoalAltitude;
	};
	class Cerveza_LGB_Launcher: weapon_LGBLauncherBase
	{
		displayName = "Cerveza Launcher";
		magazines[] = {"1Rnd_Cerveza_LGB","PylonMissile_1Rnd_Cerveza"};
		holdsterAnimValue = 6;
		class LoalAltitude: LoalAltitude
		{
			displayName = "Cerveza3";
		};
	};
};
