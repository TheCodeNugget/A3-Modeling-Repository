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
	class rnc_sea
	{
		addonRootClass = "rnc_main";
		requiredAddons[] = {"rnc_main"};
		requiredVersion = 0.1;
		units[] = {
			"rnc_lateralMark_green",
			"rnc_lateralMark_red"
			};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class NonStrategic;
	class rnc_lateralMark_green: NonStrategic
	{
		author = "RUMM & COKE Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Lateral Mark (Green)";
		model = "rnc_misc\naval_objects\rnc_LateralMark_green.p3d";
		icon = "iconObject_10x1";
		editorCategory = "rnc_structures";
		editorSubcategory = "rnc_waterObj";
		vehicleClass = "Structures";
		destrType = "DestructNo";
		class DestructionEffects{};
	};
	
	class rnc_lateralMark_red: NonStrategic
	{
		author = "RUMM & COKE Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Lateral Mark (Red)";
		model = "rnc_misc\naval_objects\rnc_LateralMark_red.p3d";
		icon = "iconObject_10x1";
		editorCategory = "rnc_structures";
		editorSubcategory = "rnc_waterObj";
		vehicleClass = "Structures";
		destrType = "DestructNo";
		class DestructionEffects{};
	};
};
