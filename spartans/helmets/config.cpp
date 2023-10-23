#define _ARMA_

class CfgPatches
{
	class division7_spartans_helmets
	{
		author = "Division-7";
		url = "https://discord.gg/c2BgeFMgqk";
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"OPTRE_Core", "OPTRE_UNSC_Units", "OPTRE_FC_Vehicles"};
	};
};

class CfgWeapons 
{

	class OPTRE_MJOLNIR_EOD;
	class DIV7_MJOLNIR_EOD : OPTRE_MJOLNIR_EOD
	{
		dlc = "DIV7";
		author = "Division-7";
		displayName = "[DIV7] MJOLNIR Mark V/EOD Helmet";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"division7_gear\spartans\_textures\div7_crimson_eod_helmet_co.paa", "OPTRE_UNSC_Units\army\data\eod_visor_co.paa"};
	};

	class OPTRE_MJOLNIR_ODST;
	class DIV7_MJOLNIR_ODST : OPTRE_MJOLNIR_ODST
	{
		dlc = "DIV7";
		author = "Division-7";
		displayName = "[DIV7] MJOLNIR Mark V/ODST Helmet";
		hiddenSelections[] = {"camo", "camo2"};
		hiddenSelectionsTextures[] = {"division7_gear\spartans\_textures\Div7_Crimson_ODSTM_Helmet_co.paa", "OPTRE_MJOLNIR_Units\data\ODSTM_Visor_co.paa"};
	};

	class OPTRE_MJOLNIR_MkVI_HR;

	class DIV7_MJOLNIR_MkVI :  OPTRE_MJOLNIR_MkVI_HR
	{
		dlc = "DIV7";
		author = "Division-7";
		displayName = "[DIV7] MJOLNIR Mark VI";
		hiddenSelections[] = {"camo", "camo2"};
		hiddenSelectionsTextures[] = {"division7_gear\spartans\_textures\Div7_Crimson_MkVI_Helmet_co.paa", "OPTRE_MJOLNIR_Units\data\ODSTM_Visor_co.paa"};
	};
};
