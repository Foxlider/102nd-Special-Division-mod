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
	class SubFaction102nd {
		displayName = "102st Troopers"; //if you want to make custom subcategories under your faction like "men" or "vehicles"
	};
};

class CfgUnitInsignia
{
    class 102nd
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

	//ZAINO HELMET ARC
	class 102nd_ARC_P1_Helmet_Zaino : SWLB_clone_P15_helmet 
	{
		author = "Keelah"
		displayName = "[102nd] ARC Zaino Helmet";
		hiddenSelectionsTextures[] = {"\102nd\data\textures\102nd_ARC_P1_Helmet_Zaino.paa"};
	};

	//GOOZE HELMET PILOT
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
	class JLTS_Clone_jumppack;

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
	
	
	// BACKPACKS
	class 102nd_Clone_Jumppack : JLTS_Clone_jumppack {
		author = "Keelah";
		displayName = "[102nd] Clone Jumppack";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\102nd\data\textures\Clone_jumppack_co.paa"};
		RD501_jumppack_is_jumppack = 1;
		RD501_jumppack_spam_delay = 1;
		RD501_jumppack_energy_capacity = 400;
		RD501_jumppack_recharge = 5;
		RD501_jumppack_jump_effect_script = "RD501_jumppack_fnc_effect_jt_21";
		RD501_jumppack_effect_points[] = {{"spine3", {0, -0.3, -0.1}}};
		RD501_jumppack_sound_ignite[] = {"RD501_Jumppack\sounds\cdv21Start.ogg"};
		RD501_jumppack_sound_land[] = {"RD501_Jumppack\sounds\cdv21End.ogg"};
		RD501_jumppack_sound_idle[] = {"RD501_Jumppack\sounds\cdv21Idle.ogg"};
		RD501_jumppack_skin_group[] = {"default_texture_group"};
		RD501_jumppack_jump_types[] = {{"Forward Jump", {12, 20, 50, 0, 0, 0}}, {"Short Jump", {12, 5, 30, 0, 1, 0}}, {"Fall Saver", {5, 5, 60, 0, 1, 1}}};
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 400;
		NSM_jumppack_recharge = 5;
		NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = {{"effect1", {0, 0.6, 1}}, {"effect2", {0, 0.6, 1}}};
		NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
		NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
		NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
		NSM_jumppack_jump_types[] = {{"Forward Jump", {12, 20, 50, 0, 0, 0}}, {"Short Jump", {12, 5, 30, 0, 1, 0}}, {"Fall Saver", {0, 5, 60, 0, 1, 1}}};
	};

	class 102nd_Officer_Jumppack : JLTS_Clone_jumppack {
		author = "Keelah";
		displayName = "[102nd] Officer Jumppack";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\102nd\data\textures\Officer_jumppack_co.paa"};
		RD501_jumppack_is_jumppack = 1;
		RD501_jumppack_spam_delay = 1;
		RD501_jumppack_energy_capacity = 200;
		RD501_jumppack_recharge = 5;
		RD501_jumppack_jump_effect_script = "RD501_jumppack_fnc_effect_jt_21";
		RD501_jumppack_effect_points[] = {{"spine3", {0, -0.3, -0.1}}};
		RD501_jumppack_sound_ignite[] = {"RD501_Jumppack\sounds\cdv21Start.ogg"};
		RD501_jumppack_sound_land[] = {"RD501_Jumppack\sounds\cdv21End.ogg"};
		RD501_jumppack_sound_idle[] = {"RD501_Jumppack\sounds\cdv21Idle.ogg"};
		RD501_jumppack_skin_group[] = {"default_texture_group"};
		RD501_jumppack_jump_types[] = {{"Forward Jump", {12, 20, 50, 0, 0, 0}}, {"Short Jump", {12, 5, 30, 0, 1, 0}}, {"Fall Saver", {5, 5, 60, 0, 1, 1}}};
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 200;
		NSM_jumppack_recharge = 5;
		NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = {{"effect1", {0, 0.6, 1}}, {"effect2", {0, 0.6, 1}}};
		NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
		NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
		NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
		NSM_jumppack_jump_types[] = {{"Forward Jump", {12, 20, 50, 0, 0, 0}}, {"Short Jump", {12, 5, 30, 0, 1, 0}}, {"Fall Saver", {0, 5, 60, 0, 1, 1}}};
		tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 12000;
		tf_subtype = "digital_lr";
	};
};