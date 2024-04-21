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
		requiredaddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class ItemCore;
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

	class All;
	class Sound: All
	{
		author = "Ken The Nugget";
		mapSize = 10;
		_generalMacro = "Sound";
		scope = 0;
		side = -1;
		animated = 0;
		vehicleClass = "Sounds";
		icon = "iconSound";
		faction = "none";
		editorCategory = "EdCat_Sounds";
		editorSubcategory = "EdSubcat_Sounds";
	};
	class Nug_Sound_Cerveza_Cristal_Chorus: Sound
	{
		scope = 2;
		sound = "Nug_Sound_Cerveza_Cristal_Chorus";
		displayName = "Cerveza Cristal Chorus";
	};
	class Nug_Sound_Cerveza_Cristal: Sound
	{
		scope = 2;
		sound = "Nug_Sound_Cerveza_Cristal";
		displayName = "Cerveza Cristal";
	};
	class Nug_Sound_Cerveza_Cristal_Full: Sound
	{
		scope = 2;
		sound = "Nug_Sound_Cerveza_Cristal_Full";
		displayName = "Cerveza Cristal Full";
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

	class Grenade;
	class CervezaAmmo: Grenade
	{
		hit = 10;
		indirectHit = 10;
		indirectHitRange = 7;
		dangerRadiusHit = 36;
		suppressionRadiusHit = 24;
		typicalspeed = 18;
		model = "\nug_cerveza_cristal\nug_cerveza_grenade.p3d";
		//model = "\nug_cerveza_cristal\nug_cerveza_cristal.p3d";
		visibleFire = 0.5;
		audibleFire = 0.05;
		visibleFireTime = 1;
		fuseDistance = 0;
		deflecting = 3;
		//soundFly[] = {"\nug_cerveza_cristal\data\fly.wss",2,1,700};
		//soundHit1[] = {"\nug_cerveza_cristal\data\impact.wss",2.5118864,1,1500};
		//soundHit2[] = {"\nug_cerveza_cristal\data\impact.wss",2.5118864,1,1500};
		//soundHit3[] = {"\nug_cerveza_cristal\data\impact.wss",2.5118864,1,1500};
		//soundHit4[] = {"\nug_cerveza_cristal\data\impact.wss",2.5118864,1,1500};
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

	class CA_Magazine;
	class CervezaGrenade: CA_Magazine
	{
		author = "Ken The Nugget";
		mass = 5;
		scope = 2;
		value = 1;
		displayName = "Cerveza Cristal";
		//picture = "";
		model = "\nug_cerveza_cristal\nug_cerveza_grenade.p3d";
		//model = "\nug_cerveza_cristal\nug_cerveza_cristal.p3d";
		type = 256;
		ammo = "CervezaAmmo";
		count = 1;
		initSpeed = 21;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
		descriptionShort = "Cerveza Cristal";
		displayNameShort = "Cerveza Cristal";
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

	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		scope = 1;
		autoAimEnabled = 0;
		cursor = "EmptyCursor";
		cursorAim = "throw";
		value = 0;
		type = 0;
		displayName = "$STR_DN_THROW";
		canDrop = 0;
		textureType = "semi";
		magazineReloadTime = 0;
		reloadTime = 0;
		muzzles[] += {"CervezaGrenadeMuzzle"};
		class ThrowMuzzle: GrenadeLauncher
		{
			cursor = "EmptyCursor";
			cursorAim = "throw";
			sound[] = {"",0.00031622776,1};
			reloadSound[] = {"",0.00031622776,1};
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			reloadTime = 0;
			magazineReloadTime = 2.5;
			enableAttack = 0;
			showEmpty = 0;
			autoReload = 1;
			modelOptics = "";
			minRange = 10;
			minRangeProbab = 0.2;
			midRange = 45;
			midRangeProbab = 0.9;
			maxRange = 60;
			maxRangeProbab = 0.03;
			keepInInventory = 1;
		};
		class CervezaGrenadeMuzzle: ThrowMuzzle
		{
			magazines[] = {"CervezaGrenade"};
		};
	};
};

class CfgSFX
{
	class Nug_Sound_Cerveza_Cristal_Chorus
	{
		name = "Cerveza Cristal Chorus";
		sounds[] = {"sfxsound"};
		sfxsound[] = {"\nug_cerveza_cristal\data\fly.wss",10,1,100,1,1,1,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class Nug_Sound_Cerveza_Cristal
	{
		name = "Cerveza Cristal";
		sounds[] = {"sfxsound"};
		sfxsound[] = {"\nug_cerveza_cristal\data\impact.wss",10,1,100,1,3,3,3};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class Nug_Sound_Cerveza_Cristal_Full
	{
		name = "Cerveza Cristal Full";
		sounds[] = {"sfxsound"};
		sfxsound[] = {"\nug_cerveza_cristal\data\cerveza_cristal.wss",12,1,100,1,3,3,3};
		empty[] = {"",0,0,0,0,0,0,0};
	};
};
