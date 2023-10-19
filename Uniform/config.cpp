class CfgPatches
{
	class division7_uniform
	{
		author = "Division-7";
		url = "https://discord.gg/c2BgeFMgqk";
		units[] = {};
		weapons[] = {"Uniform_Black_Basic","Uniform_Black_Splinter","Uniform_Black_Woodland","Uniform_White_Basic","Uniform_White_Splinter","Uniform_White_Woodland","Uniform_Grey_Basic","Uniform_Grey_Splinter","Uniform_Grey_Woodland","Uniform_Red_Splinter","Uniform_Red_Woodland","Uniform_Bloodshot"};
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
		class DIV7_Uniforms
		{
			label = "$STR_DIV7_Unifroms";
			author = "Division-7";
			options[] = {"color","camouflage"};
			class color
			{
				label = "$STR_DIV7_Unifroms_Сolors";
				values[] = {"black","grey","white","red","bloodshot"};
				alwaysSelectable = 1;
				class black
				{
					label = "$STR_Color_Black";
					image = "#(rgb,8,8,3)color(0.1,0.1,0.1,1)";
				};
				class grey
				{
					label = "$STR_Color_Grey";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};
				class red
				{
					label = "$STR_Color_Red";
					image = "#(rgb,8,8,3)color(0.48,0.13,0.13,1)";
				};
				class white
				{
					label = "$STR_Color_White";
					image = "#(rgb,8,8,3)color(0.9,0.9,0.9,1)";
				};
				class bloodshot
				{
					label = "Bloodshot";
				};
			};
			class camouflage
			{
				label = "$STR_DIV7_Unifroms_Сamouflages";
				values[] = {"basic","splinter","woodland"};
				alwaysSelectable = 1;
				class basic
				{
					label = "Basic";
				};
				class splinter
				{
					label = "Splinter";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class Uniform_Black_Basic
		{
			model = "DIV7_Uniforms";
			color = "black";
			camouflage = "basic";
		};
		class Uniform_Black_Splinter: Uniform_Black_Basic
		{
			camouflage = "splinter";
		};
		class Uniform_Black_Woodland: Uniform_Black_Basic
		{
			camouflage = "woodland";
		};
		class Uniform_White_Basic
		{
			model = "DIV7_Uniforms";
			color = "white";
			camouflage = "basic";
		};
		class Uniform_White_Splinter: Uniform_White_Basic
		{
			camouflage = "splinter";
		};
		class Uniform_White_Woodland: Uniform_White_Basic
		{
			camouflage = "woodland";
		};
		class Uniform_Grey_Basic
		{
			model = "DIV7_Uniforms";
			color = "grey";
			camouflage = "basic";
		};
		class Uniform_Grey_Splinter: Uniform_Grey_Basic
		{
			camouflage = "splinter";
		};
		class Uniform_Grey_Woodland: Uniform_Grey_Basic
		{
			camouflage = "woodland";
		};
		class Uniform_Red_Splinter
		{
			model = "DIV7_Uniforms";
			color = "red";
			camouflage = "splinter";
		};
		class Uniform_Red_Woodland: Uniform_Red_Splinter
		{
			camouflage = "woodland";
		};
		class Uniform_Bloodshot
		{
			model = "DIV7_Uniforms";
			color = "bloodshot";
			camouflage = "basic";
		};
	};
};
class CfgWeapons
{
	class HeadgearItem;
	class VestItem;
	class UniformItem;
	class Uniform_Base;
	class U_B_CombatUniform_mcam: Uniform_Base
	{
		class ItemInfo;
	};
	class DIV7_Uniform_Basic: U_B_CombatUniform_mcam
	{
		dlc = "Division-7";
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;
		author = "Division-7";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
		CBRN_protection = 1;
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply40";
			mass = 40;
			uniformType = "Neopren";
			uniformModel = "";
		};
	};
	class Uniform_Black_Basic: DIV7_Uniform_Basic
	{
		dlc = "Division-7";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "$STR_ODST_BDU_Black";
		author = "Division-7";
		CBRN_protection = 1;
		class ItemInfo: ItemInfo
		{
			uniformClass = "DIV7_Uniform_Black_Basic";
		};
	};
	class Uniform_Black_Splinter: DIV7_Uniform_Basic
	{
		dlc = "Division-7";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Division-7";
		displayName = "$STR_ODST_BDU_Black_Splinter";
		CBRN_protection = 1;
		class ItemInfo: ItemInfo
		{
			uniformClass = "DIV7_Uniform_Black_Splinter";
		};
	};
	class Uniform_Black_Woodland: DIV7_Uniform_Basic
	{
		dlc = "Division-7";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Division-7";
		displayName = "$STR_ODST_BDU_Black_Woodland";
		CBRN_protection = 1;
		class ItemInfo: ItemInfo
		{
			uniformClass = "DIV7_Uniform_Black_Woodland";
		};
	};
	class Uniform_White_Basic: DIV7_Uniform_Basic
	{
		dlc = "Division-7";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Division-7";
		displayName = "$STR_ODST_BDU_White_Basic";
		CBRN_protection = 1;
		class ItemInfo: ItemInfo
		{
			uniformClass = "DIV7_Uniform_White_Basic";
		};
	};
	class Uniform_White_Splinter: DIV7_Uniform_Basic
	{
		dlc = "Division-7";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Division-7";
		displayName = "$STR_ODST_BDU_White_Splinter";
		CBRN_protection = 1;
		class ItemInfo: ItemInfo
		{
			uniformClass = "DIV7_Uniform_White_Splinter";
		};
	};
	class Uniform_White_Woodland: DIV7_Uniform_Basic
	{
		dlc = "Division-7";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Division-7";
		displayName = "$STR_ODST_BDU_White_Woodland";
		CBRN_protection = 1;
		class ItemInfo: ItemInfo
		{
			uniformClass = "DIV7_Uniform_White_Woodland";
		};
	};
	class Uniform_Grey_Basic: DIV7_Uniform_Basic
	{
		dlc = "Division-7";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Division-7";
		displayName = "$STR_ODST_BDU_Grey_Basic";
		CBRN_protection = 1;
		class ItemInfo: ItemInfo
		{
			uniformClass = "DIV7_Uniform_Grey_Basic";
		};
	};
	class Uniform_Grey_Splinter: DIV7_Uniform_Basic
	{
		dlc = "Division-7";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Division-7";
		displayName = "$STR_ODST_BDU_Grey_Splinter";
		CBRN_protection = 1;
		class ItemInfo: ItemInfo
		{
			uniformClass = "DIV7_Uniform_Grey_Splinter";
		};
	};
	class Uniform_Grey_Woodland: DIV7_Uniform_Basic
	{
		dlc = "Division-7";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Division-7";
		displayName = "$STR_ODST_BDU_Grey_Woodland";
		CBRN_protection = 1;
		class ItemInfo: ItemInfo
		{
			uniformClass = "DIV7_Uniform_Grey_Woodland";
		};
	};
	class Uniform_Red_Splinter: DIV7_Uniform_Basic
	{
		dlc = "Division-7";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Division-7";
		displayName = "$STR_ODST_BDU_Red_Splinter";
		CBRN_protection = 1;
		class ItemInfo: ItemInfo
		{
			uniformClass = "DIV7_Uniform_Red_Splinter";
		};
	};
	class Uniform_Red_Woodland: DIV7_Uniform_Basic
	{
		dlc = "Division-7";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Division-7";
		displayName = "$STR_ODST_BDU_Red_Woodland";
		CBRN_protection = 1;
		class ItemInfo: ItemInfo
		{
			uniformClass = "DIV7_Uniform_Red_Woodland";
		};
	};
	class Uniform_Bloodshot: DIV7_Uniform_Basic
	{
		dlc = "Division-7";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Division-7";
		displayName = "$STR_ODST_BDU_Bloodshot";
		CBRN_protection = 1;
		class ItemInfo: ItemInfo
		{
			uniformClass = "DIV7_Uniform_Bloodshot";
		};
	};
};
class CfgVehicles
{
	class OPTRE_UNSC_Army_Soldier_WDL_SlimLeg;
	class DIV7_Base_Uniform: OPTRE_UNSC_Army_Soldier_WDL_SlimLeg
	{
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 4;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 4;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 4;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 4;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 6;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitArms
			{
				armor = 6;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 0.3;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 2;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 2;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name = "leg_r";
			};
			class ACE_HDBracket
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0;
				radius = 1;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "HitHead";
			};
		};
	};
	class DIV7_Uniform_Black_Basic: DIV7_Base_Uniform
	{
		scope = 1;
		model = "\OPTRE_UNSC_Units\Army\uniform.p3d";
		hiddenSelections[] = {"camo","camo2","insignia","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"division7_gear\Uniform\_textures\DIV7_uniform_black_basic.paa","division7_gear\Uniform\_textures\DIV7_uniform_black_basic.paa"};
		uniformclass = "Uniform_Black_Basic";
	};
	class DIV7_Uniform_Black_Splinter: DIV7_Base_Uniform
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"division7_gear\Uniform\_textures\DIV7_uniform_black_splinter.paa","division7_gear\Uniform\_textures\DIV7_uniform_black_splinter.paa"};
		uniformclass = "Uniform_Black_Splinter";
	};
	class DIV7_Uniform_Black_Woodland: DIV7_Base_Uniform
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"division7_gear\Uniform\_textures\DIV7_uniform_black_woodland.paa","division7_gear\Uniform\_textures\DIV7_uniform_black_woodland.paa"};
		uniformclass = "Uniform_Black_Woodland";
	};
	class DIV7_Uniform_White_Basic: DIV7_Base_Uniform
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"division7_gear\Uniform\_textures\DIV7_uniform_white_basic.paa","division7_gear\Uniform\_textures\DIV7_uniform_white_basic.paa"};
		uniformclass = "Uniform_White_Basic";
	};
	class DIV7_Uniform_White_Splinter: DIV7_Base_Uniform
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"division7_gear\Uniform\_textures\DIV7_uniform_white_splinter.paa","division7_gear\Uniform\_textures\DIV7_uniform_white_splinter.paa"};
		uniformclass = "Uniform_White_Splinter";
	};
	class DIV7_Uniform_White_Woodland: DIV7_Base_Uniform
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"division7_gear\Uniform\_textures\DIV7_uniform_white_woodland.paa","division7_gear\Uniform\_textures\DIV7_uniform_white_woodland.paa"};
		uniformclass = "Uniform_White_Woodland";
	};
	class DIV7_Uniform_Grey_Basic: DIV7_Base_Uniform
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"division7_gear\Uniform\_textures\DIV7_uniform_grey_basic.paa","division7_gear\Uniform\_textures\DIV7_uniform_grey_basic.paa"};
		uniformclass = "Uniform_Grey_Basic";
	};
	class DIV7_Uniform_Grey_Splinter: DIV7_Base_Uniform
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"division7_gear\Uniform\_textures\DIV7_uniform_grey_splinter.paa","division7_gear\Uniform\_textures\DIV7_uniform_grey_splinter.paa"};
		uniformclass = "Uniform_Grey_Splinter";
	};
	class DIV7_Uniform_Grey_Woodland: DIV7_Base_Uniform
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"division7_gear\Uniform\_textures\DIV7_uniform_grey_woodland.paa","division7_gear\Uniform\_textures\DIV7_uniform_grey_woodland.paa"};
		uniformclass = "Uniform_Grey_Woodland";
	};
	class DIV7_Uniform_Red_Splinter: DIV7_Base_Uniform
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"division7_gear\Uniform\_textures\DIV7_uniform_red_splinter.paa","division7_gear\Uniform\_textures\DIV7_uniform_red_splinter.paa"};
		uniformclass = "Uniform_Red_Splinter";
	};
	class DIV7_Uniform_Red_Woodland: DIV7_Base_Uniform
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"division7_gear\Uniform\_textures\DIV7_uniform_red_woodland.paa","division7_gear\Uniform\_textures\DIV7_uniform_red_woodland.paa"};
		uniformclass = "Uniform_Red_Woodland";
	};
	class DIV7_Uniform_Bloodshot: DIV7_Base_Uniform
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"division7_gear\Uniform\_textures\div7_bloodshot_uniform_a_co.paa","division7_gear\Uniform\_textures\div7_bloodshot_uniform_a_co.paa"};
		uniformclass = "Uniform_Bloodshot";
	};
};
