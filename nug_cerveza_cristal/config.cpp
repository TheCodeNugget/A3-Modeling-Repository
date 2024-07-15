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
		author = "Ken The Nugget";
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

	class Default;	// External class reference
	class Grenade : Default {};
	class GrenadeHand : Grenade {};
	class mini_Grenade;
	class Nug_Cerveza_Impact : GrenadeHand {
		model = "\nug_cerveza_cristal\nug_cerveza_grenade.p3d";
		hit = 8;
		indirectHit = 8;
		indirectHitRange = 6;
		dangerRadiusHit = -1;
		suppressionRadiusHit = -1;
		typicalspeed = 22;
		cost = 1;
		simulation = "shotGrenade";
		explosive = 1;
		explosionType = "explosive";
		deflecting = 30;
		explosionTime = -1;
		timeToLive = 30;
		fuseDistance = 0;
		soundHit[] = {"",0,1};
		whistleDist = 0;
		weaponType = "Default";
		caliber = 1;
		SoundSetExplosion[] = {};
		soundHit1[] = {"\nug_cerveza_cristal\data\impact.wss",2,1,2400};
		soundHit2[] = {"\nug_cerveza_cristal\data\impact.wss",2,1,2400};
		soundHit3[] = {"\nug_cerveza_cristal\data\impact.wss",2,1,2400};
		soundHit4[] = {"\nug_cerveza_cristal\data\impact.wss",2,1,2400};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		//explosionSoundEffect = "Nug_Sound_Cerveza_Cristal";
	};

	class Nug_Cerveza_Impact_mini  : mini_Grenade {
		model = "\nug_cerveza_cristal\nug_cerveza_grenade_mini.p3d";
		hit = 4;
		indirectHit = 6;
		indirectHitRange = 5;
		dangerRadiusHit = -1;
		suppressionRadiusHit = -1;
		typicalspeed = 22;
		cost = 1;
		simulation = "shotGrenade";
		explosive = 1;
		explosionType = "explosive";
		deflecting = 30;
		explosionTime = -1;
		timeToLive = 30;
		fuseDistance = 0;
		whistleDist = 0;
		weaponType = "Default";
		caliber = 1;
		SoundSetExplosion[] = {};
		soundHit1[] = {"\nug_cerveza_cristal\data\impact.wss",2,1,2400};
		soundHit2[] = {"\nug_cerveza_cristal\data\impact.wss",2,1,2400};
		soundHit3[] = {"\nug_cerveza_cristal\data\impact.wss",2,1,2400};
		soundHit4[] = {"\nug_cerveza_cristal\data\impact.wss",2,1,2400};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
	};

		//model = "\nug_cerveza_cristal\nug_cerveza_grenade.p3d";
		//model = "\nug_cerveza_cristal\nug_cerveza_cristal.p3d";
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

	class Default;	// External class reference
	class CA_Magazine : Default {};
	class HandGrenade : CA_Magazine {};
	class Nug_Cerveza_Impact_Grenade :  HandGrenade {
		author = "Ken The Nugget";
		displayName = "Cerveza Grenade (Impact)";
		picture = "\nug_cerveza_cristal\data\cerveza_icon.paa";
		model = "\nug_cerveza_cristal\nug_cerveza_grenade.p3d";
		value = 2;
		ammo = "Nug_Cerveza_Impact";
		nameSound = "handgrenade";
		descriptionShort = "Cerveza Impact";
		displayNameShort = "Cerveza Impact";
		mass = 8;
		initSpeed = 18;
		type=256;
		maxThrowHoldTime = 2;
		maxThrowIntensityCoef = 1.4;
		minThrowIntensityCoef = 0.3;
		scope=2;
	};

	class Nug_Cerveza_Impact_Grenade_mini :  HandGrenade {
		author = "Ken The Nugget";
		displayName = "Cerveza Grenade Mini (Impact)";
		picture = "\nug_cerveza_cristal\data\cerveza_icon.paa";
		model = "\nug_cerveza_cristal\nug_cerveza_grenade_mini.p3d";
		value = 2;
		ammo = "Nug_Cerveza_Impact_mini";
		nameSound = "handgrenade";
		descriptionShort = "Cerveza Impact Mini";
		displayNameShort = "Cerveza Impact Mini";
		mass = 4;
		initSpeed = 26;
		type=256;
		maxThrowHoldTime = 2;
		maxThrowIntensityCoef = 1.4;
		minThrowIntensityCoef = 0.3;
		scope=2;
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

	class Default;
	class GrenadeLauncher : Default {};
	class Throw : GrenadeLauncher {
		muzzles[] += {"Cerveza_Impact_Muzzle", "Cerveza_Impact_Mini_Muzzle"};
		class  ThrowMuzzle: GrenadeLauncher {
			aidispersioncoefx = 6;
			aidispersioncoefy = 6;
			autoreload = 1;
			cursor = "EmptyCursor";
			cursoraim = "throw";
			enableattack = 1;
			keepininventory = 1;
			magazinereloadtime = 0;
			maxrange = 60;
			maxrangeprobab = 0.03;
			midrange = 45;
			midrangeprobab = 0.9;
			minrange = 10;
			minrangeprobab = 0.2;
			modeloptics = "";
			reloadsound[] = {"", 0.000316228, 1};
			reloadtime = 0;
			showempty = 0;
			sound[] = {"", 0.000316228, 1};
		};

		class Cerveza_Impact_Muzzle: ThrowMuzzle {
			magazines[] = {"Nug_Cerveza_Impact_Grenade"};
		};

		class Cerveza_Impact_Mini_Muzzle: ThrowMuzzle
		{
			magazines[] = {"Nug_Cerveza_Impact_Grenade_mini"};
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
