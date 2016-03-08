using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameWorld : MonoBehaviour {

    // Variables that we can set

    public FightManager fight;
    public UIScript ui;
    public LevelManager levels;
    public PersistenceManager persistence;

    public GameObject HUDCanvas;
    public GameObject MenuCanvas;
    public GameObject SettingsCanvas;
    public GameObject LevelDoneCanvas;

    public int levelNumber;

    void Awake ()
    {
        // Ensure the Settings UI is showing the correct settings
        ui.UpdateSettingsWithValues();
        SettingsCanvas.SetActive(false);

        MenuCanvas.SetActive(true);
        LevelDoneCanvas.SetActive(false);
        HUDCanvas.SetActive(false);

        levelNumber = persistence.LoadLevel();
    }

    void Start () {

        levels.GoToLevel(levelNumber);

        /*
        // ANIMATION LIST HERE
        fight.AddAttack("JabLeft");
        fight.AddAttack("JabRight");
        fight.AddAttack("HookLeft");
        fight.AddAttack("HookRight");
        fight.AddAttack("UppercutLeft");
        fight.AddAttack("UppercutRight");
        fight.AddAttack("Combo1");
        fight.AddAttack("Combo2");
        fight.AddAttack("Combo3");
        ui.UpdateSettingsWithValues();
        */
    }

    public void HitStartButton()
    {
        MenuCanvas.SetActive(false);
        LevelDoneCanvas.SetActive(false);
        SettingsCanvas.SetActive(false);
        HUDCanvas.SetActive(true);

        if (levelNumber == 999)
            persistence.SaveCustomSettings();

        //SetupFight(12.0f, 1.0f, null, 1.0f, 2.0f);
        StartFight();
    }

    public void HitCustomiseButton()
    {
        if (SettingsCanvas.active)
        {
            SettingsCanvas.SetActive(false);
        } else {
            SettingsCanvas.SetActive(true);
        }
        
    }

    public void HitMainMenuButton()
    {

        SettingsCanvas.SetActive(false);
        MenuCanvas.SetActive(true);
        LevelDoneCanvas.SetActive(false);
        HUDCanvas.SetActive(false);

        levelNumber = persistence.LoadLevel();
        Debug.Log("Loaded level: " + levelNumber);
        levels.GoToLevel(levelNumber);
        if (levelNumber == 999)
        {
            persistence.LoadCustomSettings();
            //ui.StartListeners();
            ui.UpdateSettingsWithValues();
        }


    }

    public void SetupFight(float length, float speed, ArrayList attackMoves, float delayMin, float delayMax)
    {
        Debug.Log("Setting up and starting fight!");

        // Setup Fight

        fight.fightTime = length;
        fight.attackSpeed = speed;
        fight.attackMoveArray = attackMoves;
        fight.delayMin = delayMin;
        fight.delayMax = delayMax;

        ui.UpdateSettingsWithValues();
    }

    public void StartFight()
    {
        fight.StartFight();
    }

    public void FightFinished()
    {
        //MenuCanvas.SetActive(true);
        ShowLevelDoneOptions();
        //SettingsCanvas.SetActive(true);
        HUDCanvas.SetActive(false);
    }

    public void ShowLevelDoneOptions()
    {
        ui.DonePrevLevel.GetComponent<Button>().gameObject.SetActive(true);
        ui.DoneNextLevel.GetComponent<Button>().gameObject.SetActive(true);

        if (levelNumber == 999)
        {
            ui.DoneSameLevelButtonText.text = "REPLAY"; // was Go Custom Round Again
            ui.DonePrevLevel.GetComponent<Button>().gameObject.SetActive(false);
            ui.DoneNextLevel.GetComponent<Button>().gameObject.SetActive(false);
        }
        else
        {
            ui.DoneSameLevelButtonText.text = "REPLAY"; // was Let's do that again
        }
        LevelDoneCanvas.SetActive(true);
    }
	
	// Update is called once per frame
	void Update () {
	
	}

}
