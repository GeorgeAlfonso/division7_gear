class CfgPatches
{
	class division7_gear_m52d
	{
		author = "Division-7";
		url = "https://discord.gg/c2BgeFMgqk";
		units[] = {};
		weapons[] = {"DIV7_UNSC_M52D_White","DIV7_UNSC_M52D_Green","DIV7_UNSC_M52D_Blue","DIV7_UNSC_M52D_Red","DIV7_UNSC_M52D_Yellow","DIV7_UNSC_M52D_Grey","DIV7_UNSC_M52A_Pilot","DIV7_UNSC_M52A_Fleecer","DIV7_UNSC_M52A_Maskit","DIV7_UNSC_M52D_Custom_Collector","DIV7_UNSC_M52D_Custom_Nomad","DIV7_UNSC_M52D_Custom_Cherry","DIV7_UNSC_M52D_Custom_Sanya","DIV7_UNSC_M52D_Custom_Homa"};
		magazines[] = {};
		ammo[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"OPTRE_Core","OPTRE_UNSC_Units"};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class DIV7_VEST_M52D
		{
			label = "$STR_DIV7_M52D";
			author = "Division-7";
			options[] = {"color"};
			class color
			{
				label = "$STR_DIV7_M52D_Color";
				values[] = {"basic","grey","white","yellow","blue","red","green"};
				alwaysSelectable = 1;
				class grey
				{
					label = "$STR_Color_Grey";
				};
				class white
				{
					label = "$STR_Color_White";
					image = "#(rgb,8,8,3)color(0.9,0.9,0.9,1)";
				};
				class yellow
				{
					label = "$STR_Color_Yellow";
					image = "#(rgb,8,8,3)color(0.64,0.56,0.14,1)";
				};
				class blue
				{
					label = "$STR_Color_Blue";
					image = "#(rgb,8,8,3)color(0.18,0.22,0.54,1)";
				};
				class red
				{
					label = "$STR_Color_Red";
					image = "#(rgb,8,8,3)color(0.48,0.13,0.13,1)";
				};
				class green
				{
					label = "$STR_Color_Green";
					image = "#(rgb,8,8,3)color(0.2,0.34,0.08,1)";
				};
			};
		};
		class DIV7_VEST_M52D_Custom
		{
			label = "$STR_DIV7_M52D_Custom";
			author = "Division-7";
			options[] = {"camo"};
			class camo
			{
				label = "сamo";
				values[] = {"anamnez","collector","nomad","homa","cherry","sanya"};
				alwaysSelectable = 1;
				class anamnez
				{
					label = "Anamnez";
				};
				class collector
				{
					label = "Collector";
				};
				class nomad
				{
					label = "Nomad";
				};
				class homa
				{
					label = "Homa";
				};
				class cherry
				{
					label = "Cherry";
				};
				class sanya
				{
					label = "Sanya";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class DIV7_UNSC_M52D_Grey
		{
			model = "DIV7_VEST_M52D";
			color = "grey";
		};
		class DIV7_UNSC_M52D_White
		{
			model = "DIV7_VEST_M52D";
			color = "white";
		};
		class DIV7_UNSC_M52D_Yellow
		{
			model = "DIV7_VEST_M52D";
			color = "yellow";
		};
		class DIV7_UNSC_M52D_Blue
		{
			model = "DIV7_VEST_M52D";
			color = "blue";
		};
		class DIV7_UNSC_M52D_Red
		{
			model = "DIV7_VEST_M52D";
			color = "red";
		};
		class DIV7_UNSC_M52D_Green
		{
			model = "DIV7_VEST_M52D";
			color = "green";
		};
		class DIV7_UNSC_M52D_Custom_Anamnez
		{
			model = "DIV7_VEST_M52D_Custom";
			camo = "anamnez";
		};
		class DIV7_UNSC_M52D_Custom_Collector
		{
			model = "DIV7_VEST_M52D_Custom";
			camo = "collector";
		};
		class DIV7_UNSC_M52D_Custom_Nomad
		{
			model = "DIV7_VEST_M52D_Custom";
			camo = "nomad";
		};
		class DIV7_UNSC_M52D_Custom_Homa
		{
			model = "DIV7_VEST_M52D_Custom";
			camo = "homa";
		};
		class DIV7_UNSC_M52D_Custom_Cherry
		{
			model = "DIV7_VEST_M52D_Custom";
			camo = "cherry";
		};
		class DIV7_UNSC_M52D_Custom_Sanya
		{
			model = "DIV7_VEST_M52D_Custom";
			camo = "sanya";
		};
	};
};
class CfgWeapons
{
	class OPTRE_UNSC_M52D_Armor;
	class VestItem;
	class DIV7_UNSC_M52D_Base: OPTRE_UNSC_M52D_Armor
	{
		scope = 0;
		scopeArsenal = 0;
		scopeCurator = 0;
		picture = "\OPTRE_UNSC_Units\Army\icons\ODST_Vest";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","optre_unsc_units\army\data\legs_odst_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\odst_armor_co.paa"};
		hiddenSelectionsMaterials[] = {"division7_gear\_materials\M52\M52_V.rvmat","division7_gear\_materials\M52\M52.rvmat","division7_gear\_materials\M52\M52_L.rvmat","","division7_gear\_materials\M52\M52_O.rvmat"};
		class ItemInfo: VestItem
		{
			vestType = "Rebreather";
			containerClass = "Supply160";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass = 80;
			modelSides[] = {6};
			hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch"};
			hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","optre_unsc_units\army\data\legs_odst_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\odst_armor_co.paa"};
			hiddenSelectionsMaterials[] = {"division7_gear\_materials\M52\M52_V.rvmat","division7_gear\_materials\M52\M52.rvmat","division7_gear\_materials\M52\M52_L.rvmat","","division7_gear\_materials\M52\M52_O.rvmat"};
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
	class DIV7_UNSC_M52D_Basic: DIV7_UNSC_M52D_Base
	{
		displayName = "[DIV7] M52D Basic";
		hiddenSelectionsTextures[] = {"division7_gear\_textures\M52D\div7_vest_odst_co.paa","division7_gear\_textures\M52D\div7_armor_odst_co.paa","division7_gear\_textures\M52D\div7_legs_odst_co","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\odst_armor_co.paa"};
	};
	class DIV7_UNSC_M52D_White: DIV7_UNSC_M52D_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "[DIV7] M52D White";
		hiddenSelectionsTextures[] = {"division7_gear\_textures\M52D\div7_vest_odst_co.paa","division7_gear\_textures\M52D\div7_armor_odst_co.paa","division7_gear\_textures\M52D\div7_legs_odst_co","optre_unsc_units\army\data\ghillie_woodland_co.paa","division7_gear\_textures\M52D\div7_odst_vest_white.paa"};
	};
	class DIV7_UNSC_M52D_Green: DIV7_UNSC_M52D_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "$STR_M52D_Green";
		hiddenSelectionsTextures[] = {"division7_gear\_textures\M52D\div7_vest_odst_co.paa","division7_gear\_textures\M52D\div7_armor_odst_co.paa","division7_gear\_textures\M52D\div7_legs_odst_co","optre_unsc_units\army\data\ghillie_woodland_co.paa","division7_gear\_textures\M52D\div7_odst_vest_green.paa"};
	};
	class DIV7_UNSC_M52D_Blue: DIV7_UNSC_M52D_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "$STR_M52D_Blue";
		hiddenSelectionsTextures[] = {"division7_gear\_textures\M52D\div7_vest_odst_co.paa","division7_gear\_textures\M52D\div7_armor_odst_co.paa","division7_gear\_textures\M52D\div7_legs_odst_co","optre_unsc_units\army\data\ghillie_woodland_co.paa","division7_gear\_textures\M52D\div7_odst_vest_blue.paa"};
	};
	class DIV7_UNSC_M52D_Red: DIV7_UNSC_M52D_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "$STR_M52D_Red";
		hiddenSelectionsTextures[] = {"division7_gear\_textures\M52D\div7_vest_odst_co.paa","division7_gear\_textures\M52D\div7_armor_odst_co.paa","division7_gear\_textures\M52D\div7_legs_odst_co","optre_unsc_units\army\data\ghillie_woodland_co.paa","division7_gear\_textures\M52D\div7_odst_vest_red.paa"};
	};
	class DIV7_UNSC_M52D_Yellow: DIV7_UNSC_M52D_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "$STR_M52D_Yellow";
		hiddenSelectionsTextures[] = {"division7_gear\_textures\M52D\div7_vest_odst_co.paa","division7_gear\_textures\M52D\div7_armor_odst_co.paa","division7_gear\_textures\M52D\div7_legs_odst_co","optre_unsc_units\army\data\ghillie_woodland_co.paa","division7_gear\_textures\M52D\div7_odst_vest_yellow.paa"};
	};
	class DIV7_UNSC_M52D_Grey: DIV7_UNSC_M52D_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "$STR_M52D_Grey";
		hiddenSelectionsTextures[] = {"division7_gear\_textures\M52D\div7_vest_odst_co.paa","division7_gear\_textures\M52D\div7_armor_odst_co.paa","division7_gear\_textures\M52D\div7_legs_odst_co","optre_unsc_units\army\data\ghillie_woodland_co.paa","division7_gear\_textures\M52D\div7_odst_vest_grey.paa"};
	};
	class DIV7_UNSC_M52A_Pilot: DIV7_UNSC_M52D_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "$STR_DIV7_M52A";
		hiddenSelectionsTextures[] = {"division7_gear\_textures\M52A\Pilot_gambeson_co.paa","division7_gear\_textures\M52A\Pilot_plates_co.paa","division7_gear\_textures\M52D\div7_legs_odst_co","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\odst_armor_co.paa"};
		hiddenSelectionsMaterials[] = {"division7_gear\_materials\M52\M52_V.rvmat","division7_gear\_materials\M52\M52.rvmat","division7_gear\_materials\M52\M52_L.rvmat","","division7_gear\_materials\M52\M52_O.rvmat"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_Ghillie","A_KneesLeft","A_KneesRight","A_KneesMarLeft","A_KneesMarRight","A_ODST","A_ShinArmorLeft","A_ShinArmorRight","A_TacPad","A_ThighArmorLeft","A_ThighArmorRight","AS_BaseLeft","AS_BaseRight","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Pack","AP_Knife","AP_MGThigh","AP_AR","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch"};
		};
	};
	class DIV7_UNSC_M52A_Fleecer: DIV7_UNSC_M52A_Pilot
	{
		displayName = "$STR_DIV7_M52A_Fleecer";
		hiddenSelectionsTextures[] = {"division7_gear\_textures\M52A\Pilot_gambeson_co.paa","division7_gear\_textures\M52A\pilot_plates_fleecer_co.paa","division7_gear\_textures\M52D\div7_legs_odst_co","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\odst_armor_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_ShinArmorLeft","A_ShinArmorRight","A_Ghillie","A_ODST","A_TacPad","AS_BaseLeft","AS_LargeLeft","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Pack","AP_MGThigh","AP_AR","AP_Rounds","AP_SG","AP_Pistol","AP_SMG","AP_Sniper","AP_Smoke","AP_Thigh","AP_Frag","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch"};
		};
	};
	class DIV7_UNSC_M52A_Maskit: DIV7_UNSC_M52A_Pilot
	{
		displayName = "$STR_DIV7_M52A_Maskit";
		hiddenSelectionsTextures[] = {"division7_gear\_textures\M52A\Pilot_gambeson_co.paa","division7_gear\_textures\M52A\div7_pilot_plates_maskit_co.paa","division7_gear\_textures\M52D\div7_legs_odst_co","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\odst_armor_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_ShinArmorLeft","A_ShinArmorRight","A_Ghillie","A_ODST","A_TacPad","AS_BaseLeft","AS_LargeLeft","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Rounds","AP_SG","AP_Pistol","AP_SMG","AP_Sniper","AP_Smoke","AP_Thigh","AP_Frag","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch"};
		};
	};
	class DIV7_UNSC_M52D_Custom_Collector: DIV7_UNSC_M52D_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "[DIV7] M52D Collector";
		hiddenSelectionsTextures[] = {"division7_gear\_textures\M52D\custom\div7_collector_vest_odst_co.paa","division7_gear\_textures\M52D\div7_armor_odst_co.paa","division7_gear\_textures\M52D\custom\div7_collector_legs_odst_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","division7_gear\_textures\M52D\custom\div7_collector_armor_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_SmallLeft","AS_SmallRight","A_TacPad","AP_Canteen","AP_SG","AP_AR","AP_BR","AP_GL","AP_MGThigh","AP_Pack","AP_SMG","AP_Pistol","AP_Rounds","AP_Sniper","AP_Thigh","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch"};
		};
	};
	class DIV7_UNSC_M52D_Custom_Nomad: DIV7_UNSC_M52D_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "[DIV7] M52D Nomad";
		hiddenSelectionsTextures[] = {"division7_gear\_textures\M52D\div7_vest_odst_co.paa","division7_gear\_textures\M52D\div7_armor_odst_co.paa","division7_gear\_textures\M52D\custom\DIV7_N0mad_Legs.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","division7_gear\_textures\M52D\custom\DIV7_N0mad_ArmorODST_.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTRight","AS_ODSTSniperLeft","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch"};
		};
	};
	class DIV7_UNSC_M52D_Custom_Cherry: DIV7_UNSC_M52D_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "[DIV7] M52D Cherry";
		hiddenSelectionsTextures[] = {"division7_gear\_textures\M52D\custom\div7_vest_cherry_co.paa","division7_gear\_textures\M52D\div7_armor_odst_co.paa","division7_gear\_textures\M52D\custom\div7_legs_cherry_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","division7_gear\_textures\M52D\custom\div7_cherry_armor_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SMG","AP_Sniper","AP_Frag","APO_AR","APO_BR","APO_SMG","APO_Sniper","CustomKit_Scorch"};
		};
	};
	class DIV7_UNSC_M52D_Custom_Sanya: DIV7_UNSC_M52D_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "[DIV7] M52D Sanya";
		hiddenSelectionsTextures[] = {"division7_gear\_textures\M52D\div7_vest_odst_co.paa","division7_gear\_textures\M52D\div7_armor_odst_co.paa","division7_gear\_textures\M52D\div7_legs_odst_co","optre_unsc_units\army\data\ghillie_woodland_co.paa","division7_gear\_textures\M52D\custom\div7_odst_vest_sanya.paa"};
	};
	class DIV7_UNSC_M52D_Custom_Homa: DIV7_UNSC_M52D_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "[DIV7] M52D Test Homa";
		hiddenSelectionsTextures[] = {"division7_gear\_textures\M52D\div7_vest_odst_co.paa","division7_gear\_textures\M52D\div7_armor_odst_co.paa","division7_gear\_textures\M52D\div7_legs_odst_co","optre_unsc_units\army\data\ghillie_woodland_co.paa","division7_gear\_textures\M52D\div7_odst_vest_grey.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTSniperLeft","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_GL","AP_Knife","AP_MGThigh","AP_Pack","AP_SG","AP_SMG","AP_Thigh","AP_Frag","AP_Smoke","AP_Sniper","APO_AR","APO_BR","APO_SMG","CustomKit_Scorch"};
		};
	};
};
