#define _ARMA_

class CfgPatches
{
	class division7_spartans_armour
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

	class VestItem;
	class OPTRE_MJOLNIR_MkVBArmor_Default;
	class DIV7_MJOLNIR_MarkV_036 : OPTRE_MJOLNIR_MkVBArmor_Default
	{
		dlc = "DIV7";
		scope = 2;
		scopeArsenal = 2;
		author = "Division-7";
		displayName = "[DIV7] MJOLNIR Mark V[B] Armor (036)";
		model = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
		hiddenSelections[] = {"camo1", "camo2", "attach_knees_fjpara", "attach_security2", "attach_fjpara1", "attach_fjpara2", "attach_commando1", "attach_commando2", "attach_mkv1", "attach_mkv2", "attach_grenadier1", "attach_grenadier2", "attach_cqc1", "attach_gren_ua", "attach_knees_default"};
		hiddenSelectionsTextures[] = {"division7_gear\spartans\_textures\div7_crimson_036_chest_mkvb_co.paa", "division7_gear\spartans\_textures\div7_crimson_legs_mkvb_co.paa", "division7_gear\spartans\_textures\Div7_Crimson_Knee_Mat_co.paa", "division7_gear\spartans\_textures\Div7_Crimson_CQC_Shoulders_co.paa"};
		class XtdGearInfo
		{

		};
		class ItemInfo : VestItem
		{
			vestType = "Rebreather";
			hiddenSelections[] = {"camo1", "camo2", "attach_knees_fjpara", "attach_cqc2", "attach_security2", "attach_fjpara1", "attach_fjpara2", "attach_commando1", "attach_commando2", "attach_mkv1", "attach_mkv2", "attach_grenadier1", "attach_grenadier2", "attach_cqc1", "attach_gren_ua", "attach_knees_default"};
			hiddenSelectionsTextures[] = {"division7_gear\spartans\_textures\div7_crimson_036_chest_mkvb_co.paa", "division7_gear\spartans\_textures\div7_crimson_legs_mkvb_co.paa", "division7_gear\spartans\_textures\Div7_Crimson_Knee_Mat_co.paa"};
			uniformModel = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
			containerClass = "Supply160";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 45;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 45;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 45;
					passThrough = 0.1;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 45;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 45;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 45;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 45;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 45;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 45;
					passThrough = 0.1;
				};
			};
		};
	};

	class DIV7_MJOLNIR_MarkV_027 : DIV7_MJOLNIR_MarkV_036
	{
		scope = 2;
		dlc = "DIV7";
		author = "Division-7";
		displayName = "[DIV7] MJOLNIR Mark V[B] Armor (027)";
		hiddenSelections[] = {"camo1", "camo2", "attach_knees_fjpara", "attach_mkv1", "attach_mkv2", "attach_security1", "attach_security2", "attach_fjpara1", "attach_fjpara2", "attach_commando1", "attach_commando2", "attach_grenadier1", "attach_grenadier2", "attach_cqc1", "attach_cqc2", "attach_gren_ua", "attach_knees_default"};
		hiddenSelectionsTextures[] = {"division7_gear\spartans\_textures\div7_crimson_027_chest_mkvb_co.paa", "division7_gear\spartans\_textures\div7_crimson_legs_mkvb_co.paa", "division7_gear\spartans\_textures\Div7_Crimson_Knee_Mat_co.paa", "division7_gear\spartans\_textures\Div7_Crimson_Mjolnir_MkV_Shoulder_co.paa", "division7_gear\spartans\_textures\Div7_Crimson_Mjolnir_MkV_Shoulder_co.paa"};
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = {"camo1", "camo2", "attach_knees_fjpara", "attach_mkv1", "attach_mkv2", "attach_security1", "attach_security2", "attach_fjpara1", "attach_fjpara2", "attach_commando1", "attach_commando2", "attach_grenadier1", "attach_grenadier2", "attach_cqc1", "attach_cqc2", "attach_gren_ua", "attach_knees_default"};
			hiddenSelectionsTextures[] = {"division7_gear\spartans\_textures\div7_crimson_027_chest_mkvb_co.paa", "division7_gear\spartans\_textures\div7_crimson_legs_mkvb_co.paa", "division7_gear\spartans\_textures\Div7_Crimson_Knee_Mat_co.paa", "division7_gear\spartans\_textures\Div7_Crimson_Mjolnir_MkV_Shoulder_co.paa", "division7_gear\spartans\_textures\Div7_Crimson_Mjolnir_MkV_Shoulder_co.paa"};
		};
	};

	class DIV7_MJOLNIR_MarkV_063 : DIV7_MJOLNIR_MarkV_036
	{
		scope = 2;
		dlc = "DIV7";
		author = "Division-7";
		displayName = "[DIV7] MJOLNIR Mark V[B] Armor (063)";
		hiddenSelections[] = {"camo1", "camo2", "attach_knees_fjpara", "attach_gren_ua", "attach_grenadier1", "attach_cqc2", "attach_security1", "attach_security2", "attach_fjpara1", "attach_fjpara2", "attach_commando1", "attach_commando2", "attach_mkv1", "attach_mkv2", "attach_grenadier2", "attach_cqc1", "attach_knees_default"};
		hiddenSelectionsTextures[] = {"division7_gear\spartans\_textures\div7_crimson_063_chest_mkvb_co.paa", "division7_gear\spartans\_textures\div7_crimson_legs_mkvb_co.paa", "division7_gear\spartans\_textures\Div7_Crimson_Knee_Mat_co.paa", "division7_gear\spartans\_textures\Div7_Crimson_Collar_Grenadier_co.paa",  "division7_gear\spartans\_textures\Div7_Crimson_Grenadier_Shoulder_co.paa", "division7_gear\spartans\_textures\Div7_Crimson_CQC_Shoulders_co.paa"}; 
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = {"camo1", "camo2", "attach_knees_fjpara", "attach_gren_ua", "attach_grenadier1", "attach_cqc2", "attach_security1", "attach_security2", "attach_fjpara1", "attach_fjpara2", "attach_commando1", "attach_commando2", "attach_mkv1", "attach_mkv2", "attach_grenadier2", "attach_cqc1", "attach_knees_default"};
			hiddenSelectionsTextures[] = {"division7_gear\spartans\_textures\div7_crimson_063_chest_mkvb_co.paa", "division7_gear\spartans\_textures\div7_crimson_legs_mkvb_co.paa", "division7_gear\spartans\_textures\Div7_Crimson_Knee_Mat_co.paa", "division7_gear\spartans\_textures\Div7_Crimson_Collar_Grenadier_co.paa", "division7_gear\spartans\_textures\Div7_Crimson_Grenadier_Shoulder_co.paa", "division7_gear\spartans\_textures\Div7_Crimson_CQC_Shoulders_co.paa"};
		};
	};

};

