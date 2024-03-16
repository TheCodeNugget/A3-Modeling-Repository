#define _ARMA_
#include "hitpoint_macros.hpp"

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
	class rnc_houses {
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

	#include "configs\house_1_config.hpp"
	#include "configs\house_2_config.hpp"
	#include "configs\house_3_config.hpp"
	//#include "configs\house_4_config.hpp"
	#include "configs\mayoral_house_config.hpp"
	#include "configs\wooden_kiosk_config.hpp"
	#include "configs\woodenHouse_02_config.hpp"
};
