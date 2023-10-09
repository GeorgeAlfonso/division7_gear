class CfgPatches
{
  class division7_gear_nvg
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
  class OPTRE_NVG;
  class DIV7_HUL3 : OPTRE_NVG
  {
    dlc = "DIV7";
    author = "EpicHoma";
    displayName = "[DIV7] HUL3";
    model = "division7_gear\facewear\HUL3\HUL3.p3d";
    visionMode[] =
    {
        "Normal",
        "NVG"
    };
    thermalMode[] = {0};
    class ItemInfo
    {
      type = 616;
      hmdType = 0;
      uniformModel = "division7_gear\facewear\HUL3\HUL3.p3d";
      modelOff = "division7_gear\facewear\HUL3\HUL3.p3d";
      mass = 1;
    };
  };

  class DIV7_HUL3_Spartan : DIV7_HUL3
  {
    dlc = "DIV7";
    author = "EpicHoma";
    displayName = "[DIV7] HUL3 [Spartan]";
    model = "division7_gear\facewear\HUL3\HUL3_S.p3d";
    visionMode[] =
    {
      "Normal",
      "NVG"
    };
    thermalMode[] = {0};
    class ItemInfo
    {
      type = 616;
      hmdType = 0;
      uniformModel = "division7_gear\facewear\HUL3\HUL3_S.p3d";
      modelOff = "division7_gear\facewear\HUL3\HUL3_S.p3d";
      mass = 1;
    };
  };

};

class CfgGlasses
{
  class G_Spectacles;
  class DIV7_CBRN : G_Spectacles
  {
    dlc = "DIV7";
    scope = 2;
    scopeArsenal = 2;
    author = "EpicHoma";
    displayName = "[DIV7] CBRN";
    picture = "\division7_gear\facewear\CBRN\Icon.paa";
    model = "division7_gear\facewear\CBRN\CBRN.p3d";
    identitytypes[] = {};
    hiddenSelections[] = {"CBRN"};
    hiddenSelectionsTextures[] = {"division7_gear\facewear\CBRN\DIV7_CBRN_co.paa"};
    hiddenSelectionsMaterials[] = {"division7_gear\facewear\CBRN\DIV7_CBRN.rvmat"};
  };

  class CBRN_S : DIV7_CBRN
  {
    dlc = "DIV7";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[DIV7] CBRN S1";
    model = "division7_gear\facewear\CBRN\CBRN_S.p3d";
  };
};