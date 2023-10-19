class CfgPatches
{
	class division7_gear_berrets
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
		class DIV7_Berets
		{
			label = "Berets";
			author = "Division-7";
			options[] = {"camo"};
			class camo
			{
				label = "Color";
				values[] = {"black", "blue", "red"};
				class black
				{
					label = "Black";
				};
				class blue
				{
					label = "Blue";
				};
				class red
				{
					label = "Red";
				};
			};
		};
	};
};

class XtdGearInfos
{
	class CfgWeapons
	{
		class DIV7_Beret_Black
		{
			model = "DIV7_Berets";
			camo = "black";
		};
		class DIV7_Beret_Blue
		{
			model = "DIV7_Berets";
			camo = "blue";
		};
		class DIV7_Beret_Red
		{
			model = "DIV7_Berets";
			camo = "red";
		};
	};
};

class CfgWeapons
{
	class OPTRE_CMA_Beret;

	class DIV7_Beret_Black : OPTRE_CMA_Beret
	{
		author = "Division-7";
		dlc = "DIV7";
		displayName = "[DIV7] Beret Black";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"division7_gear\Helmets\berets\_textures\Div7_Beret_Black.paa"};
	};

	class DIV7_Beret_Blue : OPTRE_CMA_Beret
	{
		author = "Division-7";
		dlc = "DIV7";
		displayName = "[DIV7] Beret Blue";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"division7_gear\Helmets\berets\_textures\Div7_Beret_blue.paa"};
	};

	class DIV7_Beret_Red : OPTRE_CMA_Beret
	{
		author = "Division-7";
		dlc = "DIV7";
		displayName = "[DIV7] Beret Red";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"division7_gear\Helmets\berets\_textures\Div7_Beret_red.paa"};
	};
};
