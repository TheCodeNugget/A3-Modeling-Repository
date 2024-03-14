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
	class rnc_billboards{
		//addonRootClass = "rnc_misc";
		requiredAddons[] = {"rnc_main"};
		requiredVersion = 0.1;
		units[] = {
			
		};
		weapons[] = {};
	};
};
class CfgVehicles {
	class House_Small_F;

	class Land_rnc_bb01_rncrail: House_Small_F {
		scope = 2;
		mapSize = 34.4;
		displayName = "R&C Railways BB01";
		icon = "iconObject_1x2";
		model = "rnc_misc\Billboards\rnc_bb01_rncrail.p3d";

		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 25.907;
			verticalOffsetWorld = 0;
			init = "''";
		};
	
		editorCategory = "rnc_structures";
		editorSubcategory = "EdSubcat_Services";
	};
	
	class Land_rnc_bb01_rubberroom: House_Small_F {
		scope = 2;
		mapSize = 34.4;
		displayName = "Rubber Room BB01";
		icon = "iconObject_1x2";
		model = "rnc_misc\Billboards\rnc_bb01_rubberroom.p3d";

		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 25.907;
			verticalOffsetWorld = 0;
			init = "''";
		};
	
		editorCategory = "rnc_structures";
		editorSubcategory = "EdSubcat_Services";
	};
	
	class Land_rnc_bb01_hgconsult: House_Small_F {
		scope = 2;
		mapSize = 34.4;
		displayName = "Horrible Consult BB01";
		icon = "iconObject_1x2";
		model = "rnc_misc\Billboards\rnc_bb01_hgconsult.p3d";

		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 25.907;
			verticalOffsetWorld = 0;
			init = "''";
		};
	
		editorCategory = "rnc_structures";
		editorSubcategory = "EdSubcat_Services";
	};
	
	class Land_rnc_bb01_tbland: House_Small_F {
		scope = 2;
		mapSize = 34.4;
		displayName = "TB Landscaping BB01";
		icon = "iconObject_1x2";
		model = "rnc_misc\Billboards\rnc_bb01_tbland.p3d";

		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 25.907;
			verticalOffsetWorld = 0;
			init = "''";
		};
	
		editorCategory = "rnc_structures";
		editorSubcategory = "EdSubcat_Services";
	};
	
	class Land_rnc_bb01_flfence: House_Small_F {
		scope = 2;
		mapSize = 34.4;
		displayName = "Flans Fences BB01";
		icon = "iconObject_1x2";
		model = "rnc_misc\Billboards\rnc_bb01_flfence.p3d";

		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 25.907;
			verticalOffsetWorld = 0;
			init = "''";
		};
	
		editorCategory = "rnc_structures";
		editorSubcategory = "EdSubcat_Services";
	};
};
