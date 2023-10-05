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
  class NVGoggles;
  class DIV7_HUL3 : NVGoggles
  {
    dlc = "DIV7";
    author = "EpicHoma";
    displayName = "[DIV7] HUL3";
    model = "division7_gear\facewear\HUL3\HUL3.p3d";
    visionMode[] =
    {
        "Normal",
        "NVG",
        "TI"
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
      "NVG",
      "TI"
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