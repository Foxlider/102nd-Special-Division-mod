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

// Configuring mags
class CfgMagazines 
{
    class JLTS_DC15A_mag;   // External class reference
	class CA_Magazine;	    // External class reference
	
    // DC15A Marksman Magazine
	class 102nd_DC15AM_mag : JLTS_DC15A_mag 
    {
		author = "Keelah";
		count = 20;
		displayName = "[102nd] DC15A Marksman magazine";
		descriptionShort = "$STR_JLTS_descs_DC15A_mag";
		ammo = "JLTS_bullet_sniper_blue";
		tracersEvery = 1;
	};
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
		
        // Semi-auto mode
		class Single : Mode_SemiAuto 
        {
			sounds[] = {"StandardSound"};
			
			class BaseSoundModeType 
            {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			
			class StandardSound : BaseSoundModeType 
            {
				weaponSoundEffect = "";
				begin1[] = {"\102nd_Weapons\data\sounds\dc15a_fire", 1, 1, 1800};
				soundBegin[] = {"begin1", 1};
			};
			reloadTime = 0.096;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			dispersion = 3.015e-005;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
		};
		
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
}