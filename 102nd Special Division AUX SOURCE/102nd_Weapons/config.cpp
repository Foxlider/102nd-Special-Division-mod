#define private		0
#define protected   1
#define public		2

#define true	1
#define false	0


class CfgPatches
{
	class 102nd_Weapons
	{
		author = "Keelah";
		units[] = 
        { "102nd", };
	};
};

class CfgAmmo
{
	class BulletBase;	// External class reference

	class JLTS_plasma_blue;
	class JLTS_bullet_sniper_blue;
	class JLTS_bullet_pistol_blue;

	class B_127x108_Ball : BulletBase {
		class HitEffects;	// External class reference
	};

	class 102nd_bullet_sniper_blue : JLTS_bullet_sniper_blue {
		hit = 35;
	};

	class 102nd_bullet_HiPower_blue : JLTS_bullet_pistol_blue
	{
		explosive = 0.4;
		hit = 25;
		indirectHit = 15;
		indirectHitRange = .5;
		explosionEffects = "ExploAmmoExplosion";
	};
}

// Configuring mags
class CfgMagazines 
{
    class JLTS_DC15A_mag;   // External class reference
	class JLTS_DC17SA_mag;
	class CA_Magazine;	    // External class reference
	
    // DC15A Marksman Magazine
	class 102nd_DC15AM_mag : JLTS_DC15A_mag 
    {
		author = "Keelah";
		count = 20;
		displayName = "[102nd] DC15A Marksman magazine";
		descriptionShort = "A High Power Magazine for DC15 marksman";
		ammo = "102nd_bullet_sniper_blue";
		tracersEvery = 1;
	};

	//DC15 / DC17 Hi Power Magazine
	class 102nd_HiPower_mag : JLTS_DC15A_mag 
    {
		author = "Keelah";
		count = 5;
		displayName = "[102nd] High Power magazine";
		descriptionShort = "A High Power Magazine";
		ammo = "102nd_bullet_HiPower_blue";
		tracersEvery = 1;
	};

	//DC17 Extended Magazine
	class 102nd_DC17AX_mag : JLTS_DC17SA_mag
	{
		author = "Keelah";
		count = 36;
		displayName = "[102nd] DC17A Extended magazine";
	}
};

class CowsSlot;	        // External class reference
class UnderBarrelSlot;	// External class reference
class MuzzleSlot;	    // External class reference
class PointerSlot;	    // External class reference
class Mode_SemiAuto;	// External class reference
class Mode_FullAuto;	// External class reference

// Weapons overrides
class CfgWeapons
{
    class arifle_MX_Base_F;             // External class reference
    class JLTS_DC15A : arifle_MX_Base_F 
    { class WeaponSlotsInfo; };         // External class reference

	class JLTS_stun_muzzle;
	class Pistol_Base_F;	// External class reference
	class hgun_P07_F : Pistol_Base_F {
		class WeaponSlotsInfo;	// External class reference
	};

	//Hi Power muzzle
	class 102nd_HiPower_muzzle : JLTS_stun_muzzle {
		aiDispersionCoefX = 2;
		aiDispersionCoefY = 2;
		autoFire = false;
		ballisticsComputer = 0;
		discreteDistance[] = {50};
		discreteDistanceInitIndex = 0;
		displayName = "High Power";
		drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss", 5, 1, 10};
		fireSpreadAngle = 0.95;
		magazines[] = {"102nd_HiPower_mag"};
		magazineWell[] = {};
		maxZeroing = 50;
		reloadAction = "GestureReloadPistol";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07", 1, 1, 10};
		modes[] = {"Single"};
		
		class Single : Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			
			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			
			class StandardSound : BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {"MRC\JLTS\weapons\DC17SA\sounds\dc17sa_fire_2", 3, 0.9, 1800};
				soundBegin[] = {"begin1", 1};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.5;
			dispersion = 0.0000029;
			minRange = 10;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.6;
			maxRange = 1000;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;	// delay between shots at given distance
			aiRateOfFireDistance = 25;
		};
	};

    // DC 15A Marksman
    class 102nd_DC15A_M : JLTS_DC15A 
    {
		author = "Keelah";
		scope = public;
		displayName = "[102nd] DC15A Marksman";
		hiddenSelections[] = {"camo1", "illum"};
		hiddenSelectionsTextures[] = {"\102nd_Weapons\data\textures\DC15A_co.paa"};
		magazines[] = {"102nd_DC15AM_mag", "JLTS_DC15A_mag"};
        fireLightDiffuse[] = {0, 0, 1};
				
		class Pointer 
        {
			irLaserPos = "laser pos";
			irLaserEnd = "laser dir";
			irDistance = 5;
		};
		
        //Added optics
        class OpticsModes 
        {
			class sight 
            {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"Default"};
				opticsDisablePeripherialVision = false;
				opticsZoomMin = 0.5;
				opticsZoomMax = 0.25;
				opticsZoomInit = 0.75;
				discreteInitIndex = 0;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsFlare = "false";
				cameraDir = "";
			};
			
			class scope : sight 
            {
				opticsID = 2;
				opticsZoomMin = 0.0105;
				opticsZoomMax = 0.042;
				opticsZoomInit = 0.042;
				discretefov[] = {0.042, 0.0105};
				distanceZoomMin = 100;
				distanceZoomMax = 700;
				discreteDistanceInitIndex = 2;
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
			};
		};

		class WeaponSlotsInfo : WeaponSlotsInfo 
        {
			mass = (4.4*22.04622622)-((4.4*22.04622622)%1);
			
			class CowsSlot : CowsSlot 
            { compatibleItems[] = {}; };
			class MuzzleSlot : MuzzleSlot 
            { compatibleItems[] = {}; };
			class PointerSlot : PointerSlot 
            { compatibleItems[] = {}; };
			class UnderBarrelSlot : UnderBarrelSlot 
            { compatibleItems[] = {}; };
		};
	};

	//Special DC17 pistol
	class 102_DC17SA : hgun_P07_F
	{
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "JLTS_DC17SA_fried";
		JLTS_repairTime = 20;
		JLTS_canHaveShield = 1;
		JLTS_shieldedWeapon = "JLTS_DC17SA_shield";
		descriptionShort = "$STR_JLTS_descs_BlasterPistol";
		
		author = "Keelah";
		displayName = "[102nd] Modified DC17X";
		scope = public;
		baseWeapon = 102_DC17SA;
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA.p3d";
		hiddenSelections[] = {"camo1", "illum"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DC17SA\data\DC17SA_co.paa"};
		hiddenSelectionsMaterials[] = {"", "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		magazines[] = {"JLTS_DC17SA_mag", "102nd_DC17AX_mag", "JLTS_EMP_mag"};
		magazineWell[] = {};
		fireLightDiffuse[] = {0, 0, 1};
		drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss", 5, 1, 10};
		muzzles[] = {this, "HiPower", "Stun"};

		class HiPower : 102nd_HiPower_muzzle {
			reloadAction = "GestureReloadPistol";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07", 1, 1, 10};
		};

		class Stun : JLTS_stun_muzzle {
			reloadAction = "GestureReloadPistol";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07", 1, 1, 10};
		};
		
		class Single : Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			
			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			
			class StandardSound : BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {"MRC\JLTS\weapons\DC17SA\sounds\dc17sa_fire_2", 3, 0.9, 1800};
				soundBegin[] = {"begin1", 1};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.12;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;	// delay between shots at given distance
			aiRateOfFireDistance = 25;
		};

		class WeaponSlotsInfo : WeaponSlotsInfo {
			mass = 20;
			
			class CowsSlot {};
			
			class PointerSlot : PointerSlot {
				compatibleItems[] = {"JLTS_DC17SA_flashlight"};
			};
			
			class MuzzleSlot : MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconPosition[] = {0.24, 0.35};
				iconScale = 0.2;
			};
			
			class UnderBarrelSlot : UnderBarrelSlot {
				compatibleItems[] = {};
			};
		};
	};

	//Burst Fire DC17
	class 102_DC17SB : 102_DC17SA
	{
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "JLTS_DC17SA_fried";
		JLTS_repairTime = 20;
		JLTS_canHaveShield = 1;
		JLTS_shieldedWeapon = "JLTS_DC17SA_shield";
		descriptionShort = "$STR_JLTS_descs_BlasterPistol";
		
		author = "Keelah";
		displayName = "[102nd] Burst DC17A";
		scope = public;
		baseWeapon = 102_DC17SB;
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA.p3d";
		hiddenSelections[] = {"camo1", "illum"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DC17SA\data\DC17SA_co.paa"};
		hiddenSelectionsMaterials[] = {"", "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		magazines[] = {"JLTS_DC17SA_mag", "102nd_DC17AX_mag", "JLTS_EMP_mag"};
		magazineWell[] = {};
		fireLightDiffuse[] = {0, 0, 1};
		drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss", 5, 1, 10};
		muzzles[] = {this, "HiPower"};
		modes[] = { "Single", "Burst" };

		class HiPower : 102nd_HiPower_muzzle {
			reloadAction = "GestureReloadPistol";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07", 1, 1, 10};
		};
		

		class Single : Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			
			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			
			class StandardSound : BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {"MRC\JLTS\weapons\DC17SA\sounds\dc17sa_fire_2", 3, 0.9, 1800};
				soundBegin[] = {"begin1", 1};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.12;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;	// delay between shots at given distance
			aiRateOfFireDistance = 25;
		};

		class Burst : Mode_SemiAuto {
			burst = 2;
			sounds[] = {"StandardSound"};
			descriptionShort = "Burst Mode";
			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			
			class StandardSound : BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {"MRC\JLTS\weapons\DC17SA\sounds\dc17sa_fire_2", 3, 0.9, 1800};
				soundBegin[] = {"begin1", 1};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.06;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;	// delay between shots at given distance
			aiRateOfFireDistance = 25;
		};

		class WeaponSlotsInfo : WeaponSlotsInfo {
			mass = 20;
			
			class CowsSlot {};
			
			class PointerSlot : PointerSlot {
				compatibleItems[] = {"JLTS_DC17SA_flashlight"};
			};
			
			class MuzzleSlot : MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconPosition[] = {0.24, 0.35};
				iconScale = 0.2;
			};
			
			class UnderBarrelSlot : UnderBarrelSlot {
				compatibleItems[] = {};
			};
		};
	};
}