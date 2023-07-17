class CfgPatches
{
    ///--------------------------------------------
    ///
    ///--------------------------------------------
    class CRDTN_Sounds
    {
        units[] = {""};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "DZ_Data",
            "DZ_Scripts"};
    };
};

class CfgMods
{
    class CRDTN_Sounds
    {
        name = "";
        credits = "";
        author = "freeman@foxapo.com";
        type = "mod";
        dependencies[] = {"Game",
                          "World",
                          "Mission"};
        dir = "CRDTN_Sounds";
        class defs
        {
            class gameScriptModule
            {
                value = "";
                files[] = {"CRDTN_Sounds/Scripts/3_Game"};
            };
            class worldScriptModule
            {
                value = "";
                files[] = {"CRDTN_Sounds/Scripts/4_World"};
            };
            class missionScriptModule
            {
                value = "";
                files[] = {"CRDTN_Sounds/Scripts/5_Mission"};
            };
            class imageSets
            {
                files[] = {};
            };
        };
    };
};

class CfgVehicles
{
};

class CfgSlots
{
};

class CfgWeapons
{
};
