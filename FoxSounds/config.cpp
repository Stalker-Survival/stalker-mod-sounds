class CfgPatches
{
    class FoxSounds
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "DZ_Data",
            "DZ_Scripts",
            "DZ_Characters_Backpacks",
			"DZ_Characters_Belts",
			"DZ_Characters_Glasses",
			"DZ_Characters_Gloves",
			"DZ_Characters_Headgear",
			"DZ_Characters_Masks",
			"DZ_Characters_Pants",
			"DZ_Characters_Shoes",
			"DZ_Characters_Tops",
			"DZ_Characters_Vests",
			"DZ_Gear_Books",
			"DZ_Gear_Camping",
			"DZ_Gear_Consumables",
			"DZ_Gear_Containers",
			"DZ_Gear_Cooking",
			"DZ_Gear_Crafting",
			"DZ_Gear_Cultivation",
			"DZ_Gear_Drinks",
			"DZ_Gear_Food",
			"DZ_Gear_Medical",
			"DZ_Gear_Navigation",
			"DZ_Gear_Optics",
			"DZ_Radio",
			"DZ_Gear_Tools",
			"DZ_Gear_Traps",
			"DZ_Vehicles_Parts",
			"DZ_Vehicles_Wheeled",
			"DZ_Weapons_Ammunition",
			"DZ_Weapons_Lights",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Muzzles",
			"DZ_Weapons_Optics",
			"DZ_Weapons_Supports",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Melee_Blade",
			"DZ_Weapons_Melee_Blunt",
			"DZ_Weapons_Melee_Powered"
        };
    };
};

class CfgMods
{
    class FoxSounds
    {
        name="Stalker Inventory Sounds by Fox";
        credits="";
		author="foxFreeman";
        type = "mod";
        dependencies[] = {"World", "Mission"};
        dir = "FoxSounds";

        class defs
        {
			class worldScriptModule
			{
				value="";
				files[]= {"FoxSounds/scripts/4_World"};
			};
			class missionScriptModule
			{
				value="";
				files[]= {"FoxSounds/scripts/5_Mission"};
			};
        };
    };
};

class CfgSoundSets
{
    class SoundSet_Inv_Base
    {
        volumeFactor = 0.2;
        frequencyFactor = 1;
        spatial = 0;
    };

    class SoundSet_InvOpen : SoundSet_Inv_Base
    {
        soundShaders[] = {"SoundShader_InvOpen"};
    };

    class SoundSet_InvClose : SoundSet_Inv_Base
    {
        soundShaders[] = {"SoundShader_InvClose"};
    };

    class SoundSet_InvMove_Generic : SoundSet_Inv_Base
    {
        soundShaders[] = {"SoundShader_InvMove_Generic"};
    };

    class SoundSet_InvMove_Action : SoundSet_Inv_Base
    {
        soundShaders[] = {"SoundShader_InvMove_Action"};
    };

    class SoundSet_InvMove_BigItem : SoundSet_Inv_Base
    {
        soundShaders[] = {"SoundShader_InvMove_BigItem"};
    };

    // -------------------------------------------------
    // Resources section - parts, materials etc...
    // -------------------------------------------------

    class SoundSet_InvMove_Cloth : SoundSet_Inv_Base
    {
        soundShaders[] = {"SoundShader_InvMove_Cloth"};
    };

    class SoundSet_InvMove_Parts : SoundSet_Inv_Base
    {
        soundShaders[] = {"SoundShader_InvMove_Parts"};
    };

    class SoundSet_InvMove_Key : SoundSet_Inv_Base
    {
        soundShaders[] = {"SoundShader_InvMove_Key"};
    };

    class SoundSet_InvMove_Coin : SoundSet_Inv_Base
    {
        soundShaders[] = {"SoundShader_InvMove_Coin"};
    };

    class SoundSet_InvMove_Paper : SoundSet_Inv_Base
    {
        soundShaders[] = {"SoundShader_InvMove_Paper"};
    };

    // -------------------------------------------------
    // Meds & Food section
    // -------------------------------------------------

    class SoundSet_InvMove_Pills : SoundSet_Inv_Base
    {
        soundShaders[] = {"SoundShader_InvMove_Pills"};
    };

    class SoundSet_InvMove_Bottle : SoundSet_Inv_Base
    {
        soundShaders[] = {"SoundShader_InvMove_Bottle"};
    };

    // -------------------------------------------------
    // Weaponry section 
    // -------------------------------------------------

    class SoundSet_InvMove_Wpn : SoundSet_Inv_Base
    {
        soundShaders[] = {"SoundShader_InvMove_Wpn"};
    };

    class SoundSet_InvMove_Grenade : SoundSet_Inv_Base
    {
        soundShaders[] = {"SoundShader_InvMove_Grenade"};
    };

    class SoundSet_InvMove_AmmoSound : SoundSet_Inv_Base
    {
        soundShaders[] = {"SoundShader_InvMove_AmmoSound"};
    };

};

class CfgSoundShaders
{
    class SoundShader_Inv_Base
    {
        volume = 0.2;
    };

    class SoundShader_InvOpen : SoundShader_Inv_Base
    {
        samples[] = {{"\FoxSounds\Sounds\Inventory\inv_open.ogg",1}};
    };

    class SoundShader_InvClose : SoundShader_Inv_Base
    {
        samples[] = {{"\FoxSounds\Sounds\Inventory\inv_close.ogg",1}};
    };

    class SoundShader_InvMove_Generic : SoundShader_Inv_Base
    {
        samples[] = {
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_generic_1.ogg", 1},
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_generic_2.ogg", 1},
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_generic_3.ogg", 1},
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_generic_4.ogg", 1},
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_generic_5.ogg", 1},
        };
    };

    class SoundShader_InvMove_Action : SoundShader_Inv_Base {
        samples[] = {
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_take_all.ogg", 1},
        };
    };

    class SoundShader_InvMove_Cloth : SoundShader_Inv_Base {
        samples[] = {
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_cloth_1.ogg", 1},
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_cloth_2.ogg", 1},
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_cloth_3.ogg", 1},
        };
    }

    class SoundShader_InvMove_BigItem : SoundShader_Inv_Base
    {
        samples[] = {
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_wpnbig_1.ogg", 1},
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_wpnbig_2.ogg", 1},
        };
    }

    // -------------------------------------------------
    // Resources section - parts, materials etc...
    // -------------------------------------------------

    class SoundShader_InvMove_Parts : SoundShader_Inv_Base {
        samples[] = {
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_parts_1.ogg", 1},
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_parts_2.ogg", 1},
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_parts_3.ogg", 1},
        };
    };

    class SoundShader_InvMove_Key : SoundShader_Inv_Base {
        samples[] = {
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_key_1.ogg", 1},
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_key_2.ogg", 1},
        };
    };

    class SoundShader_InvMove_Coin : SoundShader_Inv_Base {
        samples[] = {
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_money_coin_1.ogg", 1},
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_money_coin_2.ogg", 1},
        };
    };

    class SoundShader_InvMove_Paper : SoundShader_Inv_Base {
        samples[] = {
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_money_paper.ogg", 1},
        };
    };

    // -------------------------------------------------
    // Meds & Food section
    // -------------------------------------------------

    class SoundShader_InvMove_Pills : SoundShader_Inv_Base {
        samples[] = {
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_pills_1.ogg", 1},
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_pills_2.ogg", 1},
        };
    };

    class SoundShader_InvMove_Bottle : SoundShader_Inv_Base {
        samples[] = {
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_bottle_1.ogg", 1},
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_bottle_2.ogg", 1},
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_bottle_3.ogg", 1},
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_bottle_4.ogg", 1},
        };
    };

    // -------------------------------------------------
    // Weaponry section 
    // -------------------------------------------------

    class SoundShader_InvMove_Wpn : SoundShader_Inv_Base {
        samples[] = {
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_wpn_1.ogg", 1},
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_wpn_2.ogg", 1},
        };
    };

    class SoundShader_InvMove_Grenade : SoundShader_Inv_Base {
        samples[] = {
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_grenade_1.ogg", 1},
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_grenade_2.ogg", 1},
        };
    }

    class SoundShader_InvMove_AmmoSound : SoundShader_Inv_Base
    {
        samples[] = {
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_ammo_1.ogg", 1},
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_ammo_2.ogg", 1},
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_ammo_3.ogg", 1},
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_ammo_4.ogg", 1},
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_ammo_5.ogg", 1},
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_ammo_6.ogg", 1},
            {"\FoxSounds\Sounds\Inventory\Items\inv_items_ammo_7.ogg", 1}
        };
    };

};
