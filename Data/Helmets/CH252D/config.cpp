#define _ARMA_

class CfgPatches
{
	class division7_gear_ch252d
	{
		author = "Division-7";
		url = "https://discord.gg/c2BgeFMgqk";
		units[] = {};
		weapons[] = {"Uniform_Black_Basic", "Uniform_Black_Splinter", "Uniform_Black_Woodland", "Uniform_White_Basic", "Uniform_White_Splinter", "Uniform_White_Woodland", "Uniform_Grey_Basic", "Uniform_Grey_Splinter", "Uniform_Grey_Woodland", "Uniform_Red_Splinter", "Uniform_Red_Woodland"};
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
		class DIV7_CH252D_Helmets
		{
			label = "$STR_DIV7_Helmets";
			author = "Division-7";
			options[] = {"color", "colorVisor"};
			class color 
			{
				label = "$STR_DIV7_CH252D_Color";
				values[] = {"no ", "white", "yellow", "blue", "red", "green"};
				alwaysSelectable = 1;

				class no 
				{
					label = "$STR_Color_no";
				};
				
				class white 
				{
					label = "$STR_Color_White";
					image = "#(rgb,8,8,3)color(0,0,0,1)";
				};

				class yellow	
				{
					label = "$STR_Color_Yellow";
					image = "#(rgb,8,8,3)color(0.80,0.8,0,1)";
				};

				class blue 
				{
					label = "$STR_Color_Blue";
					image = "#(rgb,8,8,3)color(0.0,0,0.51,1)";
				};

				class red
				{
					label = "$STR_Color_Red";
					image = "#(rgb,8,8,3)color(0.8,0,0,1)";
				};

				class green 
				{
					label = "$STR_Color_Green";
					image = "#(rgb,8,8,3)color(0.8,0,0,1)";
				};
			};

			class colorVisor 
			{
				label = "$STR_DIV7_CH252D_ColorVisor";
				values[] = {"no", "dark", "yellow", "blue", "red", "green"};
				alwaysSelectable = 1;

				class dark
				{
					label = "$STR_Color_Black";
				};

				class yellow
				{
					label = "$STR_Color_Yellow";
				};

				class blue
				{
					label = "$STR_Color_Blue";
				};

				class red
				{
					label = "$STR_Color_Red";
				};

				class green
				{
					label = "$STR_Color_Green";
				};
				
				class no
				{
					label = "$STR_Color_no";
				};
			};
		};
	};
};

class XtdGearInfos
{
	class CfgWeapons
	{	
		class DIV7_CH252D_White_Basic
		{
			model = "DIV7_CH252D_Helmets";
			color = "white";
			colorVisor = "no";
		};

		class DIV7_CH252D_White_VDark : DIV7_CH252D_White_Basic
		{
			colorVisor = "dark";
		};

		class DIV7_CH252D_White_VBlue : DIV7_CH252D_White_Basic
		{
			colorVisor = "blue";
		};

		class DIV7_CH252D_White_VGreen : DIV7_CH252D_White_Basic
		{
			colorVisor = "green";
		};

		class DIV7_CH252D_White_VRed : DIV7_CH252D_White_Basic
		{
			colorVisor = "red";
		};

		class DIV7_CH252D_White_VYellow : DIV7_CH252D_White_Basic
		{
			colorVisor = "yellow";
		};

		class DIV7_CH252D_Yellow_Basic
		{
			model = "DIV7_CH252D_Helmets";
			color = "yellow";
			colorVisor = "no";
		};

		class DIV7_CH252D_Yellow_VDark : DIV7_CH252D_Yellow_Basic
		{
			colorVisor = "dark";
		};

		class DIV7_CH252D_Yellow_VBlue : DIV7_CH252D_Yellow_Basic
		{
			colorVisor = "blue";
		};

		class DIV7_CH252D_Yellow_VGreen : DIV7_CH252D_Yellow_Basic
		{
			colorVisor = "green";
		};

		class DIV7_CH252D_Yellow_VRed : DIV7_CH252D_Yellow_Basic
		{
			colorVisor = "red";
		};

		class DIV7_CH252D_Yellow_VYellow : DIV7_CH252D_Yellow_Basic
		{
			colorVisor = "yellow";
		};

		class DIV7_CH252D_Blue_Basic
		{
			model = "DIV7_CH252D_Helmets";
			color = "blue";
			colorVisor = "no";
		};

		class DIV7_CH252D_Blue_VDark : DIV7_CH252D_Blue_Basic
		{
			colorVisor = "dark";
		};

		class DIV7_CH252D_Blue_VBlue : DIV7_CH252D_Blue_Basic
		{
			colorVisor = "blue";
		};

		class DIV7_CH252D_Blue_VGreen : DIV7_CH252D_Blue_Basic
		{
			colorVisor = "green";
		};

		class DIV7_CH252D_Blue_VRed : DIV7_CH252D_Blue_Basic
		{
			colorVisor = "red";
		};

		class DIV7_CH252D_Blue_VYellow : DIV7_CH252D_Blue_Basic
		{
			colorVisor = "yellow";
		};

		class DIV7_CH252D_Red_Basic
		{
			model = "DIV7_CH252D_Helmets";
			color = "red";
			colorVisor = "no";
		};

		class DIV7_CH252D_Red_VDark : DIV7_CH252D_Red_Basic
		{
			colorVisor = "dark";
		};

		class DIV7_CH252D_Red_VBlue : DIV7_CH252D_Red_Basic
		{
			colorVisor = "blue";
		};

		class DIV7_CH252D_Red_VGreen : DIV7_CH252D_Red_Basic
		{
			colorVisor = "green";
		};

		class DIV7_CH252D_Red_VRed : DIV7_CH252D_Red_Basic
		{
			colorVisor = "red";
		};

		class DIV7_CH252D_Red_VYellow : DIV7_CH252D_Red_Basic
		{
			colorVisor = "yellow";
		};

		class DIV7_CH252D_Green_Basic
		{
			model = "DIV7_CH252D_Helmets";
			color = "green";
			colorVisor = "no";
		};

		class DIV7_CH252D_Green_VDark : DIV7_CH252D_Green_Basic
		{
			colorVisor = "dark";
		};

		class DIV7_CH252D_Green_VBlue : DIV7_CH252D_Green_Basic
		{
			colorVisor = "blue";
		};

		class DIV7_CH252D_Green_VGreen : DIV7_CH252D_Green_Basic
		{
			colorVisor = "green";
		};

		class DIV7_CH252D_Green_VRed : DIV7_CH252D_Green_Basic
		{
			colorVisor = "red";
		};

		class DIV7_CH252D_Green_VYellow : DIV7_CH252D_Green_Basic
		{
			colorVisor = "yellow";
		};
	};
};

class CfgWeapons
{
	class HeadgearItem;

	class OPTRE_UNSC_CH252D_Helmet;
	class OPTRE_UNSC_CH252D_Helmet_dp;
	

	class DIV7_CH252D_Helmet_Base : OPTRE_UNSC_CH252D_Helmet
	{
		scope = 0;
		picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
		hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\odst_helmet_co.paa", "optre_unsc_units\army\data\odst_helmet_visor_co.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
		hiddenSelectionsMaterials[] = {"division7_gear\Data\_materials\odst_helmet.rvmat"};
		class ItemInfo : HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			mass = 40;
			modelSides[] = {6};
			passThrough = 0.1;
			hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "H_Ghillie"};
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

	class DIV7_CH252D_Helmet_Base_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\odst_helmet_co.paa"};
		hiddenSelectionsMaterials[] = {"division7_gear\Data\_materials\odst_helmet.rvmat"};
		class ItemInfo : HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			mass = 40;
			modelSides[] = {6};
			passThrough = 0.1;
			hiddenSelections[] = {"camo", "H_Ghillie"};
			hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\odst_helmet_co.paa"};
			hiddenSelectionsMaterials[] = {"division7_gear\Data\_materials\odst_helmet.rvmat"};
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

	class DIV7_CH252D_Helmet_Basic : DIV7_CH252D_Helmet_Base
	{
		scope = 2;
		dlc = "DIV7";
		author = "Division-7";
		displayName = "[DIV7] CH252D Helmet Basic";
		hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\odst_helmet_co.paa", "optre_unsc_units\army\data\odst_helmet_visor_co.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Helmet_Basic_dp : DIV7_CH252D_Helmet_Base_dp
	{
		dlc = "DIV7";
		author = "Division-7";
		hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\odst_helmet_co.paa"};
	};

	class DIV7_CH252D_White_Basic : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [WHITE]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_white.paa", "optre_unsc_units\army\data\odst_helmet_visor_co.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_White_Basic_dp : DIV7_CH252D_Helmet_Base_dp
	{
		dlc = "DIV7";
		author = "Division-7";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_white.paa"};
	};

		class DIV7_CH252D_White_VDark : DIV7_CH252D_White_Basic
		{
			displayName = "[DIV7] CH252D Helmet [WHITE]";
			hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_white.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_dark.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_White_VDark_dp : DIV7_CH252D_Helmet_Base_dp
	{
			dlc = "DIV7";
			author = "Division-7";
			hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_white.paa"};
	};

	class DIV7_CH252D_White_VBlue : DIV7_CH252D_White_Basic
	{
		displayName = "[DIV7] CH252D Helmet [WHITE]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_white.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_blue.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_White_VBlue_dp : DIV7_CH252D_Helmet_Base_dp
	{
		dlc = "DIV7";
		author = "Division-7";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_white.paa"};
	};

	class DIV7_CH252D_White_VGreen : DIV7_CH252D_White_Basic
	{
		displayName = "[DIV7] CH252D Helmet [WHITE]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_white.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_green.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_White_VGreen_dp : DIV7_CH252D_Helmet_Base_dp
	{
		dlc = "DIV7";
		author = "Division-7";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_white.paa"};
	};

	class DIV7_CH252D_White_VRed : DIV7_CH252D_White_Basic
	{
		displayName = "[DIV7] CH252D Helmet [WHITE]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_white.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_red.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_White_VRed_dp : DIV7_CH252D_Helmet_Base_dp
	{
		dlc = "DIV7";
		author = "Division-7";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_white.paa"};
	};

	class DIV7_CH252D_White_VYellow : DIV7_CH252D_White_Basic
	{
		displayName = "[DIV7] CH252D Helmet [WHITE]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_white.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_yellow.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_White_VYellow_dp : DIV7_CH252D_Helmet_Base_dp
	{
		dlc = "DIV7";
		author = "Division-7";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_white.paa"};
	};

	class DIV7_CH252D_Yellow_Basic : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [YELLOW]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_yellow.paa", "optre_unsc_units\army\data\odst_helmet_visor_co.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Yellow_Basic_dp : DIV7_CH252D_Helmet_Base_dp
	{
		dlc = "DIV7";
		author = "Division-7";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_yellow.paa"};
	};

	class DIV7_CH252D_Yellow_VDark : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [YELLOW]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_yellow.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_dark.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Yellow_VDark_dp : DIV7_CH252D_Helmet_Base_dp
	{
		dlc = "DIV7";
		author = "Division-7";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_yellow.paa"};
	};

	class DIV7_CH252D_Yellow_VBlue : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [YELLOW]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_yellow.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_blue.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Yellow_VBlue_dp : DIV7_CH252D_Helmet_Base_dp
	{
		dlc = "DIV7";
		author = "Division-7";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_yellow.paa"};
	};

	class DIV7_CH252D_Yellow_VGreen : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [YELLOW]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_yellow.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_green.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Yellow_VGreen_dp : DIV7_CH252D_Helmet_Base_dp
	{
		dlc = "DIV7";
		author = "Division-7";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_yellow.paa"};
	};

	class DIV7_CH252D_Yellow_VRed : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [YELLOW]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_yellow.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_red.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Yellow_VRed_dp : DIV7_CH252D_Helmet_Base_dp
	{
		dlc = "DIV7";
		author = "Division-7";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_yellow.paa"};
	};

	class DIV7_CH252D_Yellow_VYellow : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [YELLOW]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_yellow.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_yellow.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Yellow_VYellow_dp : DIV7_CH252D_Helmet_Base_dp
	{
		dlc = "DIV7";
		author = "Division-7";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_yellow.paa"};
	};

	class DIV7_CH252D_Red_Basic : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [RED]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_red.paa", "optre_unsc_units\army\data\odst_helmet_visor_co.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Red_Basic_dp : DIV7_CH252D_Helmet_Base_dp
	{
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_red.paa"};
	};

	class DIV7_CH252D_Red_VDark : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [RED]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_red.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_dark.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Red_VDark_dp : DIV7_CH252D_Helmet_Base_dp
	{
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_red.paa"};
	};

	class DIV7_CH252D_Red_VBlue : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [RED]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_red.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_blue.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Red_VBlue_dp : DIV7_CH252D_Helmet_Base_dp
	{
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_red.paa"};
	};

	class DIV7_CH252D_Red_VGreen : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [RED]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_red.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_green.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Red_VGreen_dp : DIV7_CH252D_Helmet_Base_dp
	{
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_red.paa"};
	};

	class DIV7_CH252D_Red_VRed : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [RED]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_red.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_red.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Red_VRed_dp : DIV7_CH252D_Helmet_Base_dp
	{
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_red.paa"};
	};

	class DIV7_CH252D_Red_VYellow : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [RED]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_red.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_yellow.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Red_VYellow_dp : DIV7_CH252D_Helmet_Base_dp
	{
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_red.paa"};
	};

	class DIV7_CH252D_Blue_Basic : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [BLUE]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_blue.paa", "optre_unsc_units\army\data\odst_helmet_visor_co.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Blue_Basic_dp : DIV7_CH252D_Helmet_Base_dp
	{
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_blue.paa"};
	};

	class DIV7_CH252D_Blue_VDark : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [BLUE]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_blue.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_dark.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Blue_VDark_dp : DIV7_CH252D_Helmet_Base_dp
	{
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_blue.paa"};
	};

	class DIV7_CH252D_Blue_VBlue : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [BLUE]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_blue.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_blue.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Blue_VBlue_dp : DIV7_CH252D_Helmet_Base_dp
	{
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_blue.paa"};
	};

	class DIV7_CH252D_Blue_VGreen : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [BLUE]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_blue.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_green.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Blue_VGreen_dp : DIV7_CH252D_Helmet_Base_dp
	{
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_blue.paa"};
	};

	class DIV7_CH252D_Blue_VRed : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [BLUE]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_blue.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_red.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Blue_VRed_dp : DIV7_CH252D_Helmet_Base_dp
	{
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_blue.paa"};
	};

	class DIV7_CH252D_Blue_VYellow : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [BLUE]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_blue.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_yellow.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Blue_VYellow_dp : DIV7_CH252D_Helmet_Base_dp
	{
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_blue.paa"};
	};

	class DIV7_CH252D_Green_Basic : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [GREEN]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_green.paa", "optre_unsc_units\army\data\odst_helmet_visor_co.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Green_Basic_dp : DIV7_CH252D_Helmet_Base_dp
	{
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_green.paa"};
	};

	class DIV7_CH252D_Green_VDark : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [GREEN]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_green.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_dark.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Green_VDark_dp : DIV7_CH252D_Helmet_Base_dp
	{
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_green.paa"};
	};

	class DIV7_CH252D_Green_VBlue : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [GREEN]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_green.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_blue.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Green_VBlue_dp : DIV7_CH252D_Helmet_Base_dp
	{
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_green.paa"};
	};

	class DIV7_CH252D_Green_VGreen : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [GREEN]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_green.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_green.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};
	
	class DIV7_CH252D_Green_VGreen_dp : DIV7_CH252D_Helmet_Base_dp
	{
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_green.paa"};
	};

	class DIV7_CH252D_Green_VRed : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [GREEN]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_green.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_red.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Green_VRed_dp : DIV7_CH252D_Helmet_Base_dp
	{
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_green.paa"};
	};
	
	class DIV7_CH252D_Green_VYellow : DIV7_CH252D_Helmet_Basic
	{
		displayName = "[DIV7] CH252D Helmet [GREEN]";
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_green.paa", "division7_gear\Data\_textures\CH252D\div7_odst_visor_yellow.paa", "optre_unsc_units\army\data\ghillie_woodland_co.paa", "optre_unsc_units\army\data\soft_packs_co.paa"};
	};

	class DIV7_CH252D_Green_VYellow_dp : DIV7_CH252D_Helmet_Base_dp
	{
		hiddenSelectionsTextures[] = {"division7_gear\Data\_textures\CH252D\div7_odst_helmet_green.paa"};
	};
};

