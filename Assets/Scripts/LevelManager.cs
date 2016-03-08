using UnityEngine;
using System.Collections;

public class LevelManager : MonoBehaviour {

    public GameWorld game;
    public FightManager fight;
    public UIScript ui;
    public PersistenceManager persistence;

    // Use this for initialization
    void Start () {
	    
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    // LEVEL CONTROLS

    public void GoToLevel(int levelNumber)
    {
        Debug.Log("GO TO LEVEL" + levelNumber);
        int newLevel = levelNumber;
        newLevel = CheckLevelNum(newLevel);
        ui.StopListeners();
        ApplySettingsForLevel(newLevel);
        UpdateButtonLevelText(newLevel);
        game.levelNumber = newLevel;
        persistence.SaveLevel(newLevel);
        ui.StartListeners();
    }

    public void IsCustomLevel()
    {
        Debug.Log("IS CUSTOM LEVEL");
        persistence.SaveLevel(999);
        UpdateButtonLevelText(999);
    }

    public void HitNextLevel(bool start)
    {
        Debug.Log("GO NEXT LEVEL");
        int newLevel = game.levelNumber + 1;
        newLevel = CheckLevelNum(newLevel);
        GoToLevel(newLevel);
        if (start)
        {
            game.HitStartButton();
        }
    }

    public void HitSameLevel(bool start)
    {
        Debug.Log("GO SAME LEVEL");
        int newLevel = game.levelNumber;
        newLevel = CheckLevelNum(newLevel);
        GoToLevel(newLevel);
        if (start)
        {
            game.HitStartButton();
        }
    }

    public void HitPrevLevel(bool start)
    {
        Debug.Log("GO PREV LEVEL");
        int newLevel = game.levelNumber - 1;
        newLevel = CheckLevelNum(newLevel);
        GoToLevel(newLevel);
        if (start)
        {
            game.HitStartButton();
        }
    }

    public void HitMainMenuButton()
    {
        Debug.Log("GO MAIN MENU");
        game.HitMainMenuButton();
    }

    public int CheckLevelNum(int level)
    {
        if (level == 1000)
            return 1;
        if (level == 999)
            return level;
        if (level > 11)
            level = 11;
        if (level < 1)
            level = 1;
        return level;
    }

    // LEVELS

    public void UpdateButtonLevelText(int level)
    {
        if (level >= 0)
            ui.levelText.text = "LEVEL " + level;
        if (level == 999)
            ui.levelText.text = "CUSTOM";
    }

    public void ApplySettingsForLevel(int level)
    {

        Debug.Log("APPLYING SETTINGS FOR LEVEL " + level);
        
        // wipe the slate clean

        fight.RemoveAllAttacks();
        fight.SetGuardSpeed(0.1f);

        // now add what each level is

        fight.fightTime = 30.0f;

        switch (level)
        {
            case 1:
                fight.AddAttack("JabLeft");
                fight.AddAttack("JabRight");
                fight.SetAnimationSpeed(0.2f);
                fight.SetGuardSpeed(0.05f);
                fight.delayMin = 4f;
                fight.delayMax = 5f;
                fight.fightTime = 30f;
                break;
            case 2:
                fight.AddAttack("HookLeft");
                fight.AddAttack("HookRight");
                fight.SetAnimationSpeed(0.2f);
                fight.SetGuardSpeed(0.2f);
                fight.delayMin = 3f;
                fight.delayMax = 5f;
                fight.fightTime = 30f;
                break;
            case 3:
                fight.AddAttack("JabLeft");
                fight.AddAttack("JabRight");
                fight.AddAttack("HookLeft");
                fight.AddAttack("HookRight");
                fight.SetAnimationSpeed(0.2f);
                fight.SetGuardSpeed(0.2f);
                fight.delayMin = 4f;
                fight.delayMax = 4.5f;
                fight.fightTime = 35f;
                break;
            case 4:
                fight.AddAttack("JabLeft");
                fight.AddAttack("JabRight");
                fight.AddAttack("HookLeft");
                fight.AddAttack("HookRight");
                fight.SetAnimationSpeed(0.3f);
                fight.SetGuardSpeed(0.3f);
                fight.delayMin = 4f;
                fight.delayMax = 5f;
                fight.fightTime = 40f;
                break;
            case 5:
                fight.AddAttack("JabLeft");
                fight.AddAttack("JabRight");
                fight.AddAttack("HookLeft");
                fight.AddAttack("HookRight");
                fight.SetAnimationSpeed(0.4f);
                fight.SetGuardSpeed(0.4f);
                fight.delayMin = 3f;
                fight.delayMax = 4f;
                fight.fightTime = 40f;
                break;
            case 6:
                fight.AddAttack("HookLeft");
                fight.AddAttack("HookRight");
                fight.AddAttack("UppercutLeft");
                fight.AddAttack("UppercutRight");
                fight.SetAnimationSpeed(0.4f);
                fight.SetGuardSpeed(0.4f);
                fight.delayMin = 3f;
                fight.delayMax = 5f;
                fight.fightTime = 40f;
                break;
            case 7:
                fight.AddAttack("JabLeft");
                fight.AddAttack("JabRight");
                fight.AddAttack("HookLeft");
                fight.AddAttack("HookRight");
                fight.AddAttack("UppercutLeft");
                fight.AddAttack("UppercutRight");
                fight.SetAnimationSpeed(0.5f);
                fight.SetGuardSpeed(0.5f);
                fight.delayMin = 3f;
                fight.delayMax = 4f;
                fight.fightTime = 40f;
                break;
            case 8:
                fight.AddAttack("JabLeft");
                fight.AddAttack("JabRight");
                fight.AddAttack("HookLeft");
                fight.AddAttack("HookRight");
                fight.AddAttack("UppercutLeft");
                fight.AddAttack("UppercutRight");
                fight.SetAnimationSpeed(0.5f);
                fight.SetGuardSpeed(0.5f);
                fight.delayMin = 2f;
                fight.delayMax = 3f;
                fight.fightTime = 40f;
                break;
            case 9:
                fight.AddAttack("JabLeft");
                fight.AddAttack("JabRight");
                fight.AddAttack("HookLeft");
                fight.AddAttack("HookRight");
                fight.AddAttack("UppercutLeft");
                fight.AddAttack("UppercutRight");
                fight.AddAttack("Combo1");
                fight.SetAnimationSpeed(0.65f);
                fight.SetGuardSpeed(0.65f);
                fight.delayMin = 1.9f;
                fight.delayMax = 2.7f;
                fight.fightTime = 50f;
                break;
            case 10:
                fight.AddAttack("JabLeft");
                fight.AddAttack("JabRight");
                fight.AddAttack("HookLeft");
                fight.AddAttack("HookRight");
                fight.AddAttack("UppercutLeft");
                fight.AddAttack("UppercutRight");
                fight.AddAttack("Combo1");
                fight.SetAnimationSpeed(0.8f);
                fight.SetGuardSpeed(0.8f);
                fight.delayMin = 1.2f;
                fight.delayMax = 1.9f;
                fight.fightTime = 55f;
                break;
            case 11:
                fight.AddAttack("JabLeft");
                fight.AddAttack("JabRight");
                fight.AddAttack("HookLeft");
                fight.AddAttack("HookRight");
                fight.AddAttack("UppercutLeft");
                fight.AddAttack("UppercutRight");
                fight.AddAttack("Combo1");
                fight.AddAttack("Combo2");
                fight.AddAttack("Combo3");
                fight.SetAnimationSpeed(1.3f);
                fight.SetGuardSpeed(1.0f);
                fight.delayMin = 1.1f;
                fight.delayMax = 1.5f;
                fight.fightTime = 60f;
                break;
            case 999: // CUSTOM LEVEL
                persistence.LoadCustomSettings();
                break;
            default:
                break;
        }

        // Update UI

        ui.UpdateSettingsWithValues();


    }

}
