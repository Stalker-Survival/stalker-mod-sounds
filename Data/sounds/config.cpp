/// @brief Big thanks to the creator of CSO - Complete sound overhaul
/// @brief  I used his mod as a base for my mod
class CfgPatches
{
    class CRDTN_SoundMod
    {
        units[] = {""};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
            {
                "DZ_Data",
                "DZ_Scripts",
                "DZ_Sounds_Effects"};
    };
};

class CfgSoundSets
{
    #include "inventory\inventory_sound_sets.hpp"
    #include "creatures\creatures_sound_sets.hpp"
    #include "fx\fx_sound_sets.hpp"
};

class CfgSoundShaders
{
    #include "inventory\inventory_sound_shaders.hpp"
    #include "creatures\creatures_sound_shaders.hpp"
    #include "fx\fx_sound_shaders.hpp"
};

class CfgSounds
{
    #include "creatures\creatures_sounds.hpp"
};