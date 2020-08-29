class CfgPatches
{
	class 102nd
	{
		author = "Keelah";
		units[] = {
			"102nd",
		};
	};
};

class CfgFactionClasses
{
	class 102nd
	{ displayname = "102nd Special Division";};
};
class CfgEditorSubcategories {
	class SubFaction521stP2 {
		displayName = "102st Troopers"; //if you want to make custom subcategories under your faction like "men" or "vehicles"
	};
};

class CfgUnitInsignia
{
    class 521stMP
    {
        displayName = "102nd Special Division";                        // Name displayed in Arsenal
        author = "Keelah";                                    // Author displayed in Arsenal
        texture = "\102nd\data\textures\102nd_Insigna.paa";    // Image path
        textureVehicle = "";                                            // Does nothing, reserved for future use
    };
};

class CfgWeapons
{
	//---- CLASS DECLARATION
	//HELMETS
	class SWLB_P1_SpecOps_Helmet;
	class SWLB_clone_P1_helmet;
	class SWLB_P1_Pilot_Helmet;
	class SWLB_clone_P15_helmet;

	//VESTS
	class JLTS_CloneVestOfficer;
	class JLTS_CloneVestOfficer2;
	class JLTS_CloneVestCommander;
	class JLTS_CloneVestLieutenant;

	//UNIFORMS
	class SWLB_clone_basic_armor;
	class SWLB_clone_uniform;
	class JLTS_CloneArmor;

	//DEFAULTS
	class UniformItem;
	class Default;
	class Binocular;
	class NVGoogles;

	//---- OWN CLASSES
	//BASE HELMET SPEC OPS
	class 102nd_Spec_Helmet_SWLB : SWLB_P1_SpecOps_Helmet
	{
		author = "Keelah";
		displayName = "[102nd] Spec Ops Trooper Helmet";
		hiddenSelectionsTextures[] = {"\102nd\data\textures\102nd_Trooper_Helmet_SpecOps.paa", "\102nd\data\textures\SWLB_P1_SpecOps_Visor_CO.paa"};
	};

	//KEELAH HELMET SPEC OPS
	class 102nd_Spec_Helmet_Keelah_SWLB : SWLB_P1_SpecOps_Helmet
	{
		author = "Keelah";
		displayName = "[102nd] Spec Ops Keelah Helmet";
		hiddenSelectionsTextures[] = {"\102nd\data\textures\102nd_Keelah_Helmet_SpecOps.paa", "\102nd\data\textures\SWLB_P1_SpecOps_Visor_CO.paa"};
	};

	//BASE HELMET P1
	class 102nd_P1_Helmet_SWLB : SWLB_clone_P1_helmet
	{
		author = "Keelah";
		displayName = "[102nd] P1 Trooper Helmet";
		hiddenSelectionsTextures[] = {"\102nd\data\textures\102nd_P1_Helmet_Trooper_.paa"};
	};

	//KEELAH HELMET P1
	class 102nd_P1_Helmet_Keelah_SWLB : SWLB_clone_P1_helmet
	{
		author = "Keelah";
		displayName = "[102nd] P1 Keelah Helmet";
		hiddenSelectionsTextures[] = {"\102nd\data\textures\102nd_P1_Helmet_Keelah_.paa"};
	};

	//TOBY HELMET P1
	class 102nd_P1_Helmet_Toby_SWLB : SWLB_clone_P1_helmet
	{
		author = "Keelah";
		displayName = "[102nd] P1 Toby Helmet";
		hiddenSelectionsTextures[] = {"\102nd\data\textures\102nd_P1_Helmet_Toby_.paa"};
	};

	class 102nd_ARC_P1_Helmet_Zaino : SWLB_clone_P15_helmet 
	{
		author = "Keelah"
		displayName = "[102nd] ARC Zaino Helmet";
		hiddenSelectionsTextures[] = {"\102nd\data\textures\102nd_ARC_P1_Helmet_Zaino.paa"};
	};

	class 102nd_Pilot_P1_Helmet_Gooze : SWLB_P1_Pilot_Helmet
	{
		author = "Keelah";
		displayName = "[102nd] P1 Gooze Pilot Helmet";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\102nd\data\textures\102nd_Pilot_P1_Helmet_Gooze.paa", "\102nd\data\textures\SWLB_P1_Pilot_Lifesupport_CO.paa"};
	}

	//BASE UNIFORM JLTS
	class 102nd_Spec_Uniform_JLTS : JLTS_CloneArmor
	{
		displayName = "[102nd] Trooper Uniform";
		author = "Keelah";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = 102_Spec_Trooper_JLTS;
			containerClass = Supply150;
			mass = 40;
		};
	};

	//MEDIC UNIFORM JLTS
	class 102nd_Medic_Uniform_JLTS : JLTS_CloneArmor
	{
		displayName = "[102nd] Medic Uniform";
		author = "Keelah";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = 102_Spec_Medic_JLTS;
			containerClass = Supply150;
			mass = 40;
		};
	};

	//KEELAH UNIFORM JLTS
	class 102nd_Keelah_Uniform_JLTS : JLTS_CloneArmor
	{
		displayName = "[102nd] Keelah Uniform";
		author = "Keelah";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = 102_Keelah_Trooper_JLTS;
			containerClass = Supply150;
			mass = 40;
		};
	};

	//KEEFE UNIFORM JLTS
	class 102nd_Keefe_Uniform_JLTS : JLTS_CloneArmor
	{
		displayName = "[102nd] Keefe Uniform";
		author = "Keelah";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = 102_Keefe_Trooper_JLTS;
			containerClass = Supply150;
			mass = 40;
		};
	};

	//102nd LIEUTENANT VEST
	class 102nd_Lieutenant_Vest_JLTS : JLTS_CloneVestLieutenant
	{
		displayName = "[102nd] Lieutenant vest";
		author = "Keelah";
		hiddenSelectionsTextures[] = {"\102nd\data\textures\Clone_102Officer_vest_co.paa"};
	};

	class 102nd_Officer_Vest_JLTS : JLTS_CloneVestOfficer
	{
		displayName = "[102nd] Officer vest";
		author = "Keelah";
		hiddenSelectionsTextures[] = {"\102nd\data\textures\Clone_102Officer_vest_co.paa"};
	};

	class 102nd_Commander_Vest_JLTS : JLTS_CloneVestCommander
	{
		displayName = "[102nd] Commander vest";
		author = "Keelah";
		hiddenSelectionsTextures[] = {"\102nd\data\textures\Clone_102Officer_vest_co.paa"};
	};
};

class CfgVehicles
{
	//---- BASE CLASSES
	class SWLB_clone_assault_base_P2;
	class JLTS_Clone_P2_DC15A;
	class JLTS_Clone_P2_medic;
	class JLTS_Clone_P2_lieutenant;
	class JLTS_Clone_ARC_backpack;
	class JLTS_Clone_Backpack_s_RTO;

	//BASE UNIFORM JLTS
	class 102_Spec_Trooper_JLTS : JLTS_Clone_P2_DC15A
	{
		author = "Keelah";
		displayName = "[102nd] Trooper";
		faction = "102nd";
		editorSubcategory = "102nd";
		backpack = "";
		uniformClass = 102nd_Spec_Uniform_JLTS;
		linkedItems[] = {SWLB_clone_basic_armor, 102nd_P1_Helmet_SWLB, ItemMap, ItemCompass, ItemWatch, ItemGPS, JLTS_clone_comlink, JLTS_CloneNVG};
		respawnLinkedItems[] = {SWLB_clone_basic_armor, 102nd_P1_Helmet_SWLB, ItemMap, ItemCompass, ItemWatch, ItemGPS, JLTS_clone_comlink, JLTS_CloneNVG};
		hiddenSelections[] = {"camo1", "camo2", "insignia"};
		hiddenSelectionsTextures[] = {"\102nd\data\textures\Clone_102ndTrooper_armor1_co.paa", "\102nd\data\textures\Clone_102ndTrooper_armor2_co.paa"};
	};

	//MEDIC UNIFORM JLTS
	class 102_Spec_Medic_JLTS : JLTS_Clone_P2_medic
	{
		author = "Keelah";
		displayName = "[102nd] Medic";
		faction = "102nd";
		editorSubcategory = "102nd";
		backpack = "";
		uniformClass = 102nd_Medic_Uniform_JLTS;
		linkedItems[] = {102nd_P1_Helmet_SWLB, ItemMap, ItemCompass, ItemWatch, ItemGPS, JLTS_clone_comlink, JLTS_CloneNVG};
		respawnLinkedItems[] = {102nd_P1_Helmet_SWLB, ItemMap, ItemCompass, ItemWatch, ItemGPS, JLTS_clone_comlink, JLTS_CloneNVG};
		hiddenSelections[] = {"camo1", "camo2", "insignia"};
		hiddenSelectionsTextures[] = {"\102nd\data\textures\Clone_102ndMedic_armor1_co.paa", "\102nd\data\textures\Clone_102ndMedic_armor2_co.paa"};
	};

	//KEELAH UNIFORM JLTS
	class 102_Keelah_Trooper_JLTS : JLTS_Clone_P2_DC15A
	{
		author = "Keelah";
		displayName = "[102nd] Keelah";
		faction = "102nd";
		editorSubcategory = "102nd";
		backpack = JLTS_Clone_Backpack_s_RTO;
		uniformClass = 102nd_Keelah_Uniform_JLTS;
		linkedItems[] = {102nd_Lieutenant_Vest_JLTS, 102nd_P1_Helmet_Keelah_SWLB, ItemMap, ItemCompass, ItemWatch, ItemGPS, JLTS_clone_comlink, JLTS_CloneNVG};
		respawnLinkedItems[] = {102nd_Lieutenant_Vest_JLTS, 102nd_P1_Helmet_Keelah_SWLB, ItemMap, ItemCompass, ItemWatch, ItemGPS, JLTS_clone_comlink, JLTS_CloneNVG};
		weapons[] = {102nd_DC15A_M, JLTS_DC17SA, "Throw", "Put"};
		respawnWeapons[] = {102nd_DC15A_M, JLTS_DC17SA, "Throw", "Put"};
		magazines[] = {"102nd_DC15AM_mag", "102nd_DC15AM_mag", "102nd_DC15AM_mag", "102nd_DC15AM_mag", "102nd_DC15AM_mag", "102nd_DC15AM_mag", "102nd_DC15AM_mag", "102nd_DC15AM_mag", "102nd_DC15AM_mag", "102nd_DC15AM_mag", "102nd_DC15AM_mag", "JLTS_DC17SA_mag", "JLTS_DC17SA_mag", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"102nd_DC15AM_mag", "102nd_DC15AM_mag", "102nd_DC15AM_mag", "102nd_DC15AM_mag", "102nd_DC15AM_mag", "102nd_DC15AM_mag", "102nd_DC15AM_mag", "102nd_DC15AM_mag", "102nd_DC15AM_mag", "102nd_DC15AM_mag", "102nd_DC15AM_mag", "JLTS_DC17SA_mag", "JLTS_DC17SA_mag", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", "HandGrenade", "HandGrenade"};
		hiddenSelections[] = {"camo1", "camo2", "insignia"};
		hiddenSelectionsTextures[] = {"\102nd\data\textures\Clone_102ndKeelah_armor1_co.paa", "\102nd\data\textures\Clone_102ndKeelah_armor2_co.paa"};
	};

	//KEEFE UNIFORM JLTS
	class 102_Keefe_Trooper_JLTS : JLTS_Clone_P2_DC15A
	{
		author = "Keelah";
		displayName = "[102nd] Keefe";
		faction = "102nd";
		editorSubcategory = "102nd";
		backpack = "";
		uniformClass = 102nd_Keefe_Uniform_JLTS;
		linkedItems[] = {SWLB_clone_basic_armor, 102nd_P1_Helmet_SWLB, ItemMap, ItemCompass, ItemWatch, ItemGPS, JLTS_clone_comlink, JLTS_CloneNVGo};
		respawnLinkedItems[] = {SWLB_clone_basic_armor, 102nd_P1_Helmet_SWLB, ItemMap, ItemCompass, ItemWatch, ItemGPS, JLTS_clone_comlink, JLTS_CloneNVG};
		hiddenSelections[] = {"camo1", "camo2", "insignia"};
		hiddenSelectionsTextures[] = {"\102nd\data\textures\Clone_102ndKeefe_armor1_co.paa", "\102nd\data\textures\Clone_102ndKeefe_armor2_co.paa"};
	};

	class 102_Toby_Trooper_JLTS : JLTS_Clone_P2_DC15A
	{
		author = "Keelah";
		displayName = "[102nd] Toby";
		faction = "102nd";
		editorSubcategory = "102nd";
		backpack = "";
		uniformClass = 102nd_Spec_Uniform_JLTS;
		linkedItems[] = {SWLB_clone_basic_armor, 102nd_P1_Helmet_Toby_SWLB, ItemMap, ItemCompass, ItemWatch, ItemGPS, JLTS_clone_comlink, JLTS_CloneNVG};
		respawnLinkedItems[] = {SWLB_clone_basic_armor, 102nd_P1_Helmet_Toby_SWLB, ItemMap, ItemCompass, ItemWatch, ItemGPS, JLTS_clone_comlink, JLTS_CloneNVG};
		hiddenSelections[] = {"camo1", "camo2", "insignia"};
		hiddenSelectionsTextures[] = {"\102nd\data\textures\Clone_102ndTrooper_armor1_co.paa", "\102nd\data\textures\Clone_102ndTrooper_armor2_co.paa"};
	};

	class 102_Zaino_Trooper_JLTS : JLTS_Clone_P2_DC15A
	{
		author = "Keelah";
		displayName = "[102nd] Zaino";
		faction = "102nd";
		editorSubcategory = "102nd";
		backpack = JLTS_Clone_ARC_backpack;
		uniformClass = 102nd_Spec_Uniform_JLTS;
		linkedItems[] = {SWLB_clone_basic_armor, 102nd_ARC_P1_Helmet_Zaino, ItemMap, ItemCompass, ItemWatch, ItemGPS, JLTS_clone_comlink, JLTS_CloneNVG};
		respawnLinkedItems[] = {SWLB_clone_basic_armor, 102nd_ARC_P1_Helmet_Zaino, ItemMap, ItemCompass, ItemWatch, ItemGPS, JLTS_clone_comlink, JLTS_CloneNVG};
		hiddenSelections[] = {"camo1", "camo2", "insignia"};
		hiddenSelectionsTextures[] = {"\102nd\data\textures\Clone_102ndTrooper_armor1_co.paa", "\102nd\data\textures\Clone_102ndTrooper_armor2_co.paa"};
	};

	class 102_Gooze_Pilot_JLTS : JLTS_Clone_P2_DC15A
	{
		author = "Keelah";
		displayName = "[102nd] Gooze";
		faction = "102nd";
		editorSubcategory = "102nd";
		backpack = "";
		uniformClass = 102nd_Spec_Uniform_JLTS;
		linkedItems[] = {SWLB_clone_basic_armor, 102nd_Pilot_P1_Helmet_Gooze, ItemMap, ItemCompass, ItemWatch, ItemGPS, JLTS_clone_comlink, JLTS_CloneNVG};
		respawnLinkedItems[] = {SWLB_clone_basic_armor, 102nd_Pilot_P1_Helmet_Gooze, ItemMap, ItemCompass, ItemWatch, ItemGPS, JLTS_clone_comlink, JLTS_CloneNVG};
		hiddenSelections[] = {"camo1", "camo2", "insignia"};
		hiddenSelectionsTextures[] = {"\102nd\data\textures\Clone_102ndTrooper_armor1_co.paa", "\102nd\data\textures\Clone_102ndTrooper_armor2_co.paa"};
	};
};