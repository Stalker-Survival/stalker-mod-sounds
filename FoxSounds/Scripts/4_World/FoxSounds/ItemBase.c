modded class ItemBase
{
	override void EEItemLocationChanged(notnull InventoryLocation oldLoc, notnull InventoryLocation newLoc)
    {
        super.EEItemLocationChanged(oldLoc, newLoc);
        if (GetGame().IsServer() && GetGame().IsMultiplayer())
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

		Print("[FoxSounds]: ItemBase Location Changed - Sounds");

        string soundset = InventorySoundsets.GetSoundSet(this);
        EffectSound sound = SEffectManager.CreateSound(soundset, GetGame().GetPlayer().GetPosition());
        if (!sound)
        {
            return;
        }

        sound.SetSoundAutodestroy(true);
        sound.SoundPlay();        
	}
}