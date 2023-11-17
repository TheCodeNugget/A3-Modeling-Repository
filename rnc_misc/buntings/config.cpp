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
	class rnc_buntings {
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
	class rnc_bunt_base: House_Small_F {
		author = "RUMM & COKE Team";
		mapSize = 1;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.358;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "";
		_generalMacro = "rnc_bunt_base";
		scope = 0;
		scopeCurator = 0;
		icon = "iconObject_5x2";
		editorCategory = "rnc_decorations";
		cost = 2000;
		keepHorizontalPlacement = 0;
	};
	
	// Long Buntings
	// Rectangle Checkered
	class rnc_bunt_long_rect_check_1 : rnc_bunt_base {
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "rnc_buntings_long";
		displayName = "Bunting Long Rectangle Checkered 1";
		model = "rnc_misc\buntings\rnc_bunt_long_rect_check_1.p3d";
	};
	class rnc_bunt_long_rect_check_2 : rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Rectangle Checkered 2";
		model = "rnc_misc\buntings\rnc_bunt_long_rect_check_2.p3d";
	};
	class rnc_bunt_long_rect_check_3 : rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Rectangle Checkered 3";
		model = "rnc_misc\buntings\rnc_bunt_long_rect_check_3.p3d";
	};
	class rnc_bunt_long_rect_check_4: rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Rectangle Checkered 4";
		model = "rnc_misc\buntings\rnc_bunt_long_rect_check_4.p3d";
	};
	class rnc_bunt_long_rect_check_5 : rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Rectangle Checkered 5";
		model = "rnc_misc\buntings\rnc_bunt_long_rect_check_5.p3d";
	};
	
	// Rectangle Solid
	class rnc_bunt_long_rect_solid_1 : rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Rectangle Solid 1";
		model = "rnc_misc\buntings\rnc_bunt_long_rect_solid_1.p3d";
	};
	class rnc_bunt_long_rect_solid_2 : rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Rectangle Solid 2";
		model = "rnc_misc\buntings\rnc_bunt_long_rect_solid_2.p3d";
	};
	class rnc_bunt_long_rect_solid_3 : rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Rectangle Solid 3";
		model = "rnc_misc\buntings\rnc_bunt_long_rect_solid_3.p3d";
	};
	class rnc_bunt_long_rect_solid_4: rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Rectangle Solid 4";
		model = "rnc_misc\buntings\rnc_bunt_long_rect_solid_4.p3d";
	};
	class rnc_bunt_long_rect_solid_5 : rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Rectangle Solid 5";
		model = "rnc_misc\buntings\rnc_bunt_long_rect_solid_5.p3d";
	};
	
	// Triangle Checkered
	class rnc_bunt_long_trig_check_1 : rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Triangle Checkered 1";
		model = "rnc_misc\buntings\rnc_bunt_long_trig_check_1.p3d";
	};
	class rnc_bunt_long_trig_check_2 : rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Triangle Checkered 2";
		model = "rnc_misc\buntings\rnc_bunt_long_trig_check_2.p3d";
	};
	class rnc_bunt_long_trig_check_3 : rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Triangle Checkered 3";
		model = "rnc_misc\buntings\rnc_bunt_long_trig_check_3.p3d";
	};
	class rnc_bunt_long_trig_check_4: rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Triangle Checkered 4";
		model = "rnc_misc\buntings\rnc_bunt_long_trig_check_4.p3d";
	};
	class rnc_bunt_long_trig_check_5 : rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Triangle Checkered 5";
		model = "rnc_misc\buntings\rnc_bunt_long_trig_check_5.p3d";
	};
	
	// Triangle Solid
	class rnc_bunt_long_trig_solid_1 : rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Triangle Solid 1";
		model = "rnc_misc\buntings\rnc_bunt_long_trig_solid_1.p3d";
	};
	class rnc_bunt_long_trig_solid_2 : rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Triangle Solid 2";
		model = "rnc_misc\buntings\rnc_bunt_long_trig_solid_2.p3d";
	};
	class rnc_bunt_long_trig_solid_3 : rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Triangle Solid 3";
		model = "rnc_misc\buntings\rnc_bunt_long_trig_solid_3.p3d";
	};
	class rnc_bunt_long_trig_solid_4: rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Triangle Solid 4";
		model = "rnc_misc\buntings\rnc_bunt_long_trig_solid_4.p3d";
	};
	class rnc_bunt_long_trig_solid_5 : rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Triangle Solid 5";
		model = "rnc_misc\buntings\rnc_bunt_long_trig_solid_5.p3d";
	};
	
	// Cut-Rectangle Checkered
	class rnc_bunt_long_crect_check_1 : rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Cut-Rectangle Checkered 1";
		model = "rnc_misc\buntings\rnc_bunt_long_crect_check_1.p3d";
	};
	class rnc_bunt_long_crect_check_2 : rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Cut-Rectangle Checkered 2";
		model = "rnc_misc\buntings\rnc_bunt_long_crect_check_2.p3d";
	};
	class rnc_bunt_long_crect_check_3 : rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Cut-Rectangle Checkered 3";
		model = "rnc_misc\buntings\rnc_bunt_long_crect_check_3.p3d";
	};
	class rnc_bunt_long_crect_check_4: rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Cut-Rectangle Checkered 4";
		model = "rnc_misc\buntings\rnc_bunt_long_crect_check_4.p3d";
	};
	class rnc_bunt_long_crect_check_5 : rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Cut-Rectangle Checkered 5";
		model = "rnc_misc\buntings\rnc_bunt_long_crect_check_5.p3d";
	};
	
	// Cut-Rectangle Solid
	class rnc_bunt_long_crect_solid_1 : rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Cut-Rectangle Solid 1";
		model = "rnc_misc\buntings\rnc_bunt_long_crect_solid_1.p3d";
	};
	class rnc_bunt_long_crect_solid_2 : rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Cut-Rectangle Solid 2";
		model = "rnc_misc\buntings\rnc_bunt_long_crect_solid_2.p3d";
	};
	class rnc_bunt_long_crect_solid_3 : rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Cut-Rectangle Solid 3";
		model = "rnc_misc\buntings\rnc_bunt_long_crect_solid_3.p3d";
	};
	class rnc_bunt_long_crect_solid_4: rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Cut-Rectangle Solid 4";
		model = "rnc_misc\buntings\rnc_bunt_long_crect_solid_4.p3d";
	};
	class rnc_bunt_long_crect_solid_5 : rnc_bunt_long_rect_check_1 {
		displayName = "Bunting Long Cut-Rectangle Solid 5";
		model = "rnc_misc\buntings\rnc_bunt_long_crect_solid_5.p3d";
	};
	
	// Short Buntings
	// Rectangle Checkered
	class rnc_bunt_short_rect_check_1 : rnc_bunt_base {
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "rnc_buntings_short";
		displayName = "Bunting Short Rectangle Checkered 1";
		model = "rnc_misc\buntings\rnc_bunt_short_rect_check_1.p3d";
	};
	class rnc_bunt_short_rect_check_2 : rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Rectangle Checkered 2";
		model = "rnc_misc\buntings\rnc_bunt_short_rect_check_2.p3d";
	};
	class rnc_bunt_short_rect_check_3 : rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Rectangle Checkered 3";
		model = "rnc_misc\buntings\rnc_bunt_short_rect_check_3.p3d";
	};
	class rnc_bunt_short_rect_check_4: rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Rectangle Checkered 4";
		model = "rnc_misc\buntings\rnc_bunt_short_rect_check_4.p3d";
	};
	class rnc_bunt_short_rect_check_5 : rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Rectangle Checkered 5";
		model = "rnc_misc\buntings\rnc_bunt_short_rect_check_5.p3d";
	};
	
	// Rectangle Solid
	class rnc_bunt_short_rect_solid_1 : rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Rectangle Solid 1";
		model = "rnc_misc\buntings\rnc_bunt_short_rect_solid_1.p3d";
	};
	class rnc_bunt_short_rect_solid_2 : rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Rectangle Solid 2";
		model = "rnc_misc\buntings\rnc_bunt_short_rect_solid_2.p3d";
	};
	class rnc_bunt_short_rect_solid_3 : rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Rectangle Solid 3";
		model = "rnc_misc\buntings\rnc_bunt_short_rect_solid_3.p3d";
	};
	class rnc_bunt_short_rect_solid_4: rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Rectangle Solid 4";
		model = "rnc_misc\buntings\rnc_bunt_short_rect_solid_4.p3d";
	};
	class rnc_bunt_short_rect_solid_5 : rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Rectangle Solid 5";
		model = "rnc_misc\buntings\rnc_bunt_short_rect_solid_5.p3d";
	};
	
	// Triangle Checkered
	class rnc_bunt_short_trig_check_1 : rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Triangle Checkered 1";
		model = "rnc_misc\buntings\rnc_bunt_short_trig_check_1.p3d";
	};
	class rnc_bunt_short_trig_check_2 : rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Triangle Checkered 2";
		model = "rnc_misc\buntings\rnc_bunt_short_trig_check_2.p3d";
	};
	class rnc_bunt_short_trig_check_3 : rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Triangle Checkered 3";
		model = "rnc_misc\buntings\rnc_bunt_short_trig_check_3.p3d";
	};
	class rnc_bunt_short_trig_check_4: rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Triangle Checkered 4";
		model = "rnc_misc\buntings\rnc_bunt_short_trig_check_4.p3d";
	};
	class rnc_bunt_short_trig_check_5 : rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Triangle Checkered 5";
		model = "rnc_misc\buntings\rnc_bunt_short_trig_check_5.p3d";
	};
	
	// Triangle Solid
	class rnc_bunt_short_trig_solid_1 : rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Triangle Solid 1";
		model = "rnc_misc\buntings\rnc_bunt_short_trig_solid_1.p3d";
	};
	class rnc_bunt_short_trig_solid_2 : rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Triangle Solid 2";
		model = "rnc_misc\buntings\rnc_bunt_short_trig_solid_2.p3d";
	};
	class rnc_bunt_short_trig_solid_3 : rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Triangle Solid 3";
		model = "rnc_misc\buntings\rnc_bunt_short_trig_solid_3.p3d";
	};
	class rnc_bunt_short_trig_solid_4: rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Triangle Solid 4";
		model = "rnc_misc\buntings\rnc_bunt_short_trig_solid_4.p3d";
	};
	class rnc_bunt_short_trig_solid_5 : rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Triangle Solid 5";
		model = "rnc_misc\buntings\rnc_bunt_short_trig_solid_5.p3d";
	};
	
	// Cut-Rectangle Checkered
	class rnc_bunt_short_crect_check_1 : rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Cut-Rectangle Checkered 1";
		model = "rnc_misc\buntings\rnc_bunt_short_crect_check_1.p3d";
	};
	class rnc_bunt_short_crect_check_2 : rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Cut-Rectangle Checkered 2";
		model = "rnc_misc\buntings\rnc_bunt_short_crect_check_2.p3d";
	};
	class rnc_bunt_short_crect_check_3 : rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Cut-Rectangle Checkered 3";
		model = "rnc_misc\buntings\rnc_bunt_short_crect_check_3.p3d";
	};
	class rnc_bunt_short_crect_check_4: rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Cut-Rectangle Checkered 4";
		model = "rnc_misc\buntings\rnc_bunt_short_crect_check_4.p3d";
	};
	class rnc_bunt_short_crect_check_5 : rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Cut-Rectangle Checkered 5";
		model = "rnc_misc\buntings\rnc_bunt_short_crect_check_5.p3d";
	};
	
	// Cut-Rectangle Solid
	class rnc_bunt_short_crect_solid_1 : rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Cut-Rectangle Solid 1";
		model = "rnc_misc\buntings\rnc_bunt_short_crect_solid_1.p3d";
	};
	class rnc_bunt_short_crect_solid_2 : rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Cut-Rectangle Solid 2";
		model = "rnc_misc\buntings\rnc_bunt_short_crect_solid_2.p3d";
	};
	class rnc_bunt_short_crect_solid_3 : rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Cut-Rectangle Solid 3";
		model = "rnc_misc\buntings\rnc_bunt_short_crect_solid_3.p3d";
	};
	class rnc_bunt_short_crect_solid_4: rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Cut-Rectangle Solid 4";
		model = "rnc_misc\buntings\rnc_bunt_short_crect_solid_4.p3d";
	};
	class rnc_bunt_short_crect_solid_5 : rnc_bunt_short_rect_check_1 {
		displayName = "Bunting Short Cut-Rectangle Solid 5";
		model = "rnc_misc\buntings\rnc_bunt_short_crect_solid_5.p3d";
	};
};
