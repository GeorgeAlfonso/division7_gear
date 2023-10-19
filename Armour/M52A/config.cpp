class CfgPatches
{
	class division7_gear_m52a
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
		class DIV7_VEST_M52A_Pilot
		{
			label = "$STR_DIV7_M52A_Pilot";
			author = "Division-7";
			options[] = {"camo"};
			class camo
			{
				label = "camo";
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
	};
};

class XtdGearInfos
{
	class CfgWeapons
	{
		class DIV7_UNSC_M52A_Pilot
		{
			model = "DIV7_VEST_M52A_Pilot";
			camo = "basic";
		};

		class DIV7_UNSC_M52A_Fleecer : DIV7_UNSC_M52A_Pilot
		{
			camo = "fleecer";
		};

		class DIV7_UNSC_M52A_Maskit : DIV7_UNSC_M52A_Pilot
		{
			camo = "maskit";
		};
	};
};


class CfgWeapons
{
	class VestItem;
	class OPTRE_UNSC_M52A_Armor1_WDL;
	class DIV7_UNSC_M52A_Base : OPTRE_UNSC_M52A_Armor1_WDL
	{
		scope = 0;
		scopeArsenal = 0;
		scopeCurator = 0;
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "camo5", "A_KneesMarLeft", "A_KneesMarRight", "A_Ghillie", "A_TacPad", "AS_LargeLeft", "AS_LargeRight", "AS_MediumLeft", "AS_MediumRight", "AS_ODSTCQBLeft", "AS_ODSTCQBRight", "AS_ODSTSniperLeft", "AS_ODSTSniperRight", "AS_SmallLeft", "AS_SmallRight", "AP_AR", "AP_BR", "AP_Canteen", "AP_GL", "AP_Knife", "AP_MGThigh", "AP_AR", "AP_Pack", "AP_Pistol", "AP_Rounds", "AP_SG", "AP_SMG", "AP_Sniper", "AP_Thigh", "AP_Frag", "AP_Smoke", "APO_AR", "APO_BR", "APO_Knife", "APO_SMG", "APO_Sniper", "CustomKit_Scorch"};
		hiddenSelectionsTextures[] = {"division7_gear\_textures\M52D\div7_vest_odst_co.paa", "division7_gear\Armour\M52A\_textures\Div7_LI_M52A.paa", "division7_gear\_textures\M52D\div7_legs_odst_co", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\odst_armor_co.paa"};
		hiddenSelectionsMaterials[] = {"division7_gear\_materials\M52\M52_V.rvmat", "division7_gear\_materials\M52\M52.rvmat", "division7_gear\_materials\M52\M52_L.rvmat", "", "division7_gear\_materials\M52\M52_O.rvmat"};
		class ItemInfo : VestItem
		{
			vestType = "Rebreather";
			containerClass = "Supply180";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass = 80;
			modelSides[] = {6};
			hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "camo5", "A_KneesMarLeft", "A_KneesMarRight", "A_Ghillie", "A_TacPad", "AS_LargeLeft", "AS_LargeRight", "AS_MediumLeft", "AS_MediumRight", "AS_ODSTCQBLeft", "AS_ODSTCQBRight", "AS_ODSTSniperLeft", "AS_ODSTSniperRight", "AS_SmallLeft", "AS_SmallRight", "AP_AR", "AP_BR", "AP_Canteen", "AP_GL", "AP_Knife", "AP_MGThigh", "AP_AR", "AP_Pack", "AP_Pistol", "AP_Rounds", "AP_SG", "AP_SMG", "AP_Sniper", "AP_Thigh", "AP_Frag", "AP_Smoke", "APO_AR", "APO_BR", "APO_Knife", "APO_SMG", "APO_Sniper", "CustomKit_Scorch"};
			hiddenSelectionsTextures[] = {"division7_gear\_textures\M52D\div7_vest_odst_co.paa", "division7_gear\Armour\M52A\_textures\Div7_LI_M52A.paa", "division7_gear\_textures\M52D\div7_legs_odst_co", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\odst_armor_co.paa"};
			hiddenSelectionsMaterials[] = {"division7_gear\_materials\M52\M52_V.rvmat", "division7_gear\_materials\M52\M52.rvmat", "division7_gear\_materials\M52\M52_L.rvmat", "", "division7_gear\_materials\M52\M52_O.rvmat"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 40;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 40;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 40;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 40;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 40;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 40;
					passThrough = 0.1;
				};
			};
		};
	};

	class DIV7_UNSC_M52A : DIV7_UNSC_M52A_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "DIV7";
		author = "Division-7";
		displayName = "[DIV7] M52A Body Armor";
		hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "camo5", "A_KneesMarLeft", "A_KneesMarRight", "A_Ghillie", "A_ODST", "A_TacPad", "AS_MediumLeft", "AS_LargeRight", "AS_ODSTCQBLeft", "AS_ODSTCQBRight", "AS_ODSTLeft", "AS_ODSTRight", "AS_ODSTSniperLeft", "AS_ODSTSniperRight", "AS_SmallLeft", "AS_MediumRight", "AP_AR", "AP_BR", "AP_Canteen", "AP_GL", "AP_Knife", "AP_AR", "AP_Rounds", "AP_SG", "AP_SMG", "AP_Sniper", "AP_Frag", "AP_Smoke", "APO_AR", "APO_BR", "APO_Knife", "APO_SMG", "APO_Sniper", "CustomKit_Scorch"};

		class ItemInfo : ItemInfo
		{
			containerClass = "Supply180";
			hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "camo5", "A_KneesMarLeft", "A_KneesMarRight", "A_Ghillie", "A_ODST", "A_TacPad", "AS_MediumLeft", "AS_LargeRight", "AS_ODSTCQBLeft", "AS_ODSTCQBRight", "AS_ODSTLeft", "AS_ODSTRight", "AS_ODSTSniperLeft", "AS_ODSTSniperRight", "AS_SmallLeft", "AS_MediumRight", "AP_AR", "AP_BR", "AP_Canteen", "AP_GL", "AP_Knife", "AP_AR", "AP_Rounds", "AP_SG", "AP_SMG", "AP_Sniper", "AP_Frag", "AP_Smoke", "APO_AR", "APO_BR", "APO_Knife", "APO_SMG", "APO_Sniper", "CustomKit_Scorch"};
		};
	};

	class DIV7_UNSC_M52A_Pilot : DIV7_UNSC_M52A_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "$STR_DIV7_M52A";
		hiddenSelectionsTextures[] = {"division7_gear\_textures\M52A\Pilot_gambeson_co.paa", "division7_gear\_textures\M52A\Pilot_plates_co.paa", "division7_gear\_textures\M52D\div7_legs_odst_co", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\odst_armor_co.paa"};
		hiddenSelectionsMaterials[] = {"division7_gear\_materials\M52\M52_V.rvmat", "division7_gear\_materials\M52\M52.rvmat", "division7_gear\_materials\M52\M52_L.rvmat", "", "division7_gear\_materials\M52\M52_O.rvmat"};
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "camo5", "A_Ghillie", "A_KneesLeft", "A_KneesRight", "A_KneesMarLeft", "A_KneesMarRight", "A_ODST", "A_ShinArmorLeft", "A_ShinArmorRight", "A_TacPad", "A_ThighArmorLeft", "A_ThighArmorRight", "AS_BaseLeft", "AS_BaseRight", "AS_LargeLeft", "AS_LargeRight", "AS_MediumLeft", "AS_MediumRight", "AS_ODSTCQBLeft", "AS_ODSTCQBRight", "AS_ODSTLeft", "AS_ODSTRight", "AS_ODSTSniperLeft", "AS_ODSTSniperRight", "AS_SmallLeft", "AS_SmallRight", "AP_AR", "AP_BR", "AP_Canteen", "AP_GL", "AP_Pack", "AP_Knife", "AP_MGThigh", "AP_AR", "AP_Rounds", "AP_SG", "AP_SMG", "AP_Sniper", "AP_Thigh", "AP_Frag", "APO_AR", "APO_BR", "APO_Knife", "APO_SMG", "APO_Sniper", "CustomKit_Scorch"};
		};
	};
	class DIV7_UNSC_M52A_Fleecer : DIV7_UNSC_M52A_Pilot
	{
		displayName = "$STR_DIV7_M52A_Fleecer";
		hiddenSelectionsTextures[] = {"division7_gear\_textures\M52A\Pilot_gambeson_co.paa", "division7_gear\_textures\M52A\pilot_plates_fleecer_co.paa", "division7_gear\_textures\M52D\div7_legs_odst_co", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\odst_armor_co.paa"};
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "camo5", "A_ShinArmorLeft", "A_ShinArmorRight", "A_Ghillie", "A_ODST", "A_TacPad", "AS_BaseLeft", "AS_LargeLeft", "AS_MediumLeft", "AS_MediumRight", "AS_ODSTCQBLeft", "AS_ODSTCQBRight", "AS_ODSTLeft", "AS_ODSTRight", "AS_ODSTSniperLeft", "AS_ODSTSniperRight", "AS_SmallLeft", "AS_SmallRight", "AP_AR", "AP_BR", "AP_Canteen", "AP_GL", "AP_Pack", "AP_MGThigh", "AP_AR", "AP_Rounds", "AP_SG", "AP_Pistol", "AP_SMG", "AP_Sniper", "AP_Smoke", "AP_Thigh", "AP_Frag", "APO_AR", "APO_BR", "APO_Knife", "APO_SMG", "APO_Sniper", "CustomKit_Scorch"};
		};
	};
	class DIV7_UNSC_M52A_Maskit : DIV7_UNSC_M52A_Pilot
	{
		displayName = "$STR_DIV7_M52A_Maskit";
		hiddenSelectionsTextures[] = {"division7_gear\_textures\M52A\Pilot_gambeson_co.paa", "division7_gear\_textures\M52A\div7_pilot_plates_maskit_co.paa", "division7_gear\_textures\M52D\div7_legs_odst_co", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\odst_armor_co.paa"};
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "camo5", "A_ShinArmorLeft", "A_ShinArmorRight", "A_Ghillie", "A_ODST", "A_TacPad", "AS_BaseLeft", "AS_LargeLeft", "AS_MediumLeft", "AS_MediumRight", "AS_ODSTCQBLeft", "AS_ODSTCQBRight", "AS_ODSTLeft", "AS_ODSTRight", "AS_ODSTSniperLeft", "AS_ODSTSniperRight", "AS_SmallLeft", "AS_SmallRight", "AP_AR", "AP_BR", "AP_Canteen", "AP_GL", "AP_Knife", "AP_MGThigh", "AP_AR", "AP_Rounds", "AP_SG", "AP_Pistol", "AP_SMG", "AP_Sniper", "AP_Smoke", "AP_Thigh", "AP_Frag", "APO_AR", "APO_BR", "APO_Knife", "APO_SMG", "APO_Sniper", "CustomKit_Scorch"};
		};
	};
};
