modded class Inventory
{
    const string m_soundset_inveOpen = "SoundSet_InvOpen";
    const string m_soundset_inveClose = "SoundSet_InvClose";

    override void OnShow()
    {
        super.OnShow();
        if (GetGame().IsServer())
        {
            return;
        }
        PlaySound(m_soundset_inveOpen);
    }

    override void OnHide()
    {
        super.OnHide();
        
        if (GetGame().IsServer())
        {
            return;
        }
        PlaySound(m_soundset_inveClose);
    }

    void PlaySound(string soundset)
    {
        // Check the mission
        Mission mission = GetGame().GetMission();
        if (!mission)
        {
            return;
        }

        // Check the hud
        IngameHud thishud = IngameHud.Cast(mission.GetHud());
        if (!thishud)
        {
            return;
        }

        // Create a sound
        EffectSound sound = SEffectManager.CreateSound(soundset, GetGame().GetPlayer().GetPosition());
        if (!sound)
        {
            return;
        }

        sound.SetSoundAutodestroy(true);
        sound.SoundPlay();
    }
}