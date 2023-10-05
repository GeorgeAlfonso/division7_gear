class CfgPatches
{
	class division7_gear_ch252
	{
		author = "Division-7";
		url = "https://discord.gg/c2BgeFMgqk";
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"OPTRE_Core", "OPTRE_UNSC_Units"};
	};
};

class CfgWeapons
{
	class HeadgearItem;
	class OPTRE_UNSC_CH252_Helmet_Base;
	class DIV7_CH252_Helmet_Base : OPTRE_UNSC_CH252_Helmet_Base
	{
		scope = 0;
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
		hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "H_Collar", "H_Neck", "H_UNSCVacLower", "H_UNSCVacVisor", "H_VacCollar", "H_Ghillie"};
		hiddenSelectionsTextures[] = {"division7_gear\Helmets\CH252\_textures\Div7_LI_CH252.paa", "optre_unsc_units\army\data\helmet_visor_ca.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
		class ItemInfo : HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
			mass = 40;
			modelSides[] = {6};
			passThrough = 0.1;
			hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "H_Collar", "H_Neck", "H_UNSCVacLower", "H_UNSCVacVisor", "H_VacCollar", "H_Ghillie"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.1;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.1;
				};
			};
		};
	};

	class DIV7_CH252_Helmet_Basic : DIV7_CH252_Helmet_Base 
	{
		scope = 2;
		displayname = "[DIV7] CH252";
		hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "H_Collar", "H_Neck", "H_UNSCVacLower", "H_UNSCVacVisor", "H_VacCollar", "H_Ghillie"};
		hiddenSelectionsTextures[] = {"division7_gear\Helmets\CH252\_textures\Div7_LI_CH252.paa", "optre_unsc_units\army\data\odst_helmet_visor_co.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};
};
