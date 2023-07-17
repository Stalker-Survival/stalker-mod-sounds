modded class ItemBase
{
    EffectSound sound = NULL;

    override void EEItemLocationChanged(notnull InventoryLocation oldLoc, notnull InventoryLocation newLoc)
    {
        super.EEItemLocationChanged(oldLoc, newLoc);

        if (GetGame().IsServer())
        {
            return;
        }

        if (!oldLoc || !newLoc)
        {
            return;
        }

        if (oldLoc.GetType() == InventoryLocationType.UNKNOWN || newLoc.GetType() == InventoryLocationType.UNKNOWN)
        {
            return;
        }

        string soundset = InventorySoundsets.GetSoundSet(this);
        sound = SEffectManager.CreateSound(soundset, GetGame().GetPlayer().GetPosition());
        if (!sound)
        {
            return;
        }

        sound.SetSoundAutodestroy(true);
        sound.SoundPlay();
    }
};