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

class XtdGearModels
{
	class CfgWeapons
	{
		class DIV7_ECH252_Custom_Helmets
		{
			label = "$STR_DIV7_ECH252";
			author = "Division-7";
			options[] = {"camo"};
			class camo
			{
				label = "$STR_DIV7_ECH252_CAMO";
				values[] = {"basic", "fleecer", "maskit"};
				class basic
				{
					label = "basic";
				};
				class fleecer
				{
					label = "$STR_Name_Fleecer";
				};
				class maskit
				{
					label = "$STR_Name_Maskit";
				};
			};
		};
		class DIV7_CH252_Light_Infantry
		{
			label = "$STR_DIV7_CH252_LI";
			author = "Division-7";
			options[] = {"vacuum"};
			class vacuum
			{
				alwaysSelectable = 1;
				label = "$STR_DIV7_CH252_Vacuum";
				values[] = {"no","yes"};
				class no
				{
					label = "$STR_DIV7_NO";
				};
				class yes
				{
					label = "$STR_DIV7_YES";
				};
			};
		};
	};
};

class XtdGearInfos
{
	class CfgWeapons
	{
		class DIV7_CH252_Pilot
		{
			model = "DIV7_ECH252_Custom_Helmets";
			camo = "basic";
		};

		class DIV7_CH252_Fleecer
		{
			model = "DIV7_ECH252_Custom_Helmets";
			camo = "fleecer";
		};

		class DIV7_CH252_Maskit
		{
			model = "DIV7_ECH252_Custom_Helmets";
			camo = "maskit";
		};

		class DIV7_CH252_Helmet_Basic
		{
			model = "DIV7_CH252_Light_Infantry";
			vacuum = "no";
		};

		class DIV7_ECH252_Helmet_Basic
		{
			model = "DIV7_CH252_Light_Infantry";
			vacuum = "yes";
		};
	};
};

class CfgWeapons
{
	class HeadgearItem;
	class OPTRE_UNSC_CH252_Helmet_Base;
	class OPTRE_UNSC_CH252_Helmet_Vacuum_WDL;
	class OPTRE_UNSC_CH252_Helmet2_Vacuum_WDL;
	class DIV7_CH252_Helmet_Base : OPTRE_UNSC_CH252_Helmet_Base
	{
		dlc = "DIV7";
		author = "Division-7";
		scope = 0;
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
		hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "H_Collar", "H_Neck", "H_UNSCVacLower", "H_UNSCVacVisor", "H_VacCollar", "H_Ghillie"};
		hiddenSelectionsTextures[] = {"division7_gear\Helmets\CH252\_textures\Div7_LI_CH252.paa", "optre_unsc_units\army\data\helmet_visor_ca.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_ECH252_Helmet_Base : OPTRE_UNSC_CH252_Helmet2_Vacuum_WDL
	{
		dlc = "DIV7";
		author = "Division-7";
		scope = 0;
		displayName = "[DIV7] ECH252 Helmet";
		model = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
		hiddenSelectionsTextures[] = {"division7_gear\Helmets\CH252\_textures\Div7_LI_CH252.paa", "optre_unsc_units\army\data\helmet_visor_ca.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252_Pilot : DIV7_ECH252_Helmet_Base
	{
		dlc = "DIV7";
		scope = 2;
		author = "Makarov-B312";
		displayName = "$STR_ECH252_Pilot";
		model = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
		hiddenSelectionsTextures[] = {"division7_gear\_textures\ECH252\DIV7_Pilot_helmet_co.paa", "division7_gear\_textures\ECH252\DIV7_Pilot_helmet_visor_co.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};
	class DIV7_CH252_Fleecer : DIV7_CH252_Pilot
	{
		dlc = "DIV7";
		author = "Makarov-B312";
		displayName = "$STR_ECH252_Fleecer";
		hiddenSelectionsTextures[] = {"division7_gear\_textures\ECH252\DIV7_Pilot_helmet_fleecer_co.paa", "division7_gear\_textures\ECH252\div7_pilot_helmet_visor_fleecer_co.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};
	class DIV7_CH252_Maskit : DIV7_CH252_Pilot
	{
		dlc = "DIV7";
		author = "Makarov-B312";
		displayName = "$STR_ECH252_Maskit";
		hiddenSelectionsTextures[] = {"division7_gear\_textures\ECH252\DIV7_Pilot_helmet_maskit_co.paa", "division7_gear\_textures\ECH252\div7_pilot_helmet_visor_maskit_co.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252_Helmet_Basic : DIV7_CH252_Helmet_Base 
	{
		scope = 2;
		displayname = "[DIV7] CH252";
		hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "H_Collar", "H_Neck", "H_UNSCVacLower", "H_UNSCVacVisor", "H_VacCollar", "H_Ghillie"};
		hiddenSelectionsTextures[] = {"division7_gear\Helmets\CH252\_textures\Div7_LI_CH252.paa", "optre_unsc_units\army\data\odst_helmet_visor_co.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_ECH252_Helmet_Basic : DIV7_ECH252_Helmet_Base
	{
		scope = 2;
		displayname = "[DIV7] ECH252 Basic";
		hiddenSelectionsTextures[] = {"division7_gear\Helmets\CH252\_textures\Div7_LI_CH252.paa", "optre_unsc_units\army\data\helmet_visor_ca.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

};
