class CfgPatches
{
	class division7_gear_recon
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
	class OPTRE_UNSC_Recon_Helmet;

	class DIV7_Recon_Helmet : OPTRE_UNSC_Recon_Helmet
	{
		dlc = "DIV7";
		scope = 2;
		author = "Division-7";
		displayName = "[DIV7] Recon Helmet";
		hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "H_Ghillie"};
		hiddenSelectionsTextures[] = {"division7_gear\Helmets\recon\_textures\div7_recon_co.paa", "optre_unsc_units\army\data\recon_visor_co.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};
};
