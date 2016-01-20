using UnityEngine;
using System.Collections;

public class GameWorld : MonoBehaviour {

    // Variables that we can set

    public FightManager fight;
    public UIScript ui;

    public GameObject HUDCanvas;
    public GameObject MenuCanvas;
    public GameObject SettingsCanvas;


    void Awake ()
    {
        // Ensure the Settings UI is showing the correct settings
        ui.UpdateSettingsWithValues();
        SettingsCanvas.SetActive(true);

        MenuCanvas.SetActive(true);
        HUDCanvas.SetActive(false);
    }

    void Start () {
        // ANIMATION LIST HERE
        fight.AddAttack("attack1");
        fight.AddAttack("attack2");
        fight.AddAttack("attack3");
        ui.UpdateSettingsWithValues();
    }

    public void HitStartButton()
    {
        MenuCanvas.SetActive(false);
        SettingsCanvas.SetActive(false);
        HUDCanvas.SetActive(true);

        //SetupFight(12.0f, 1.0f, null, 1.0f, 2.0f);
        StartFight();
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
        MenuCanvas.SetActive(true);
        SettingsCanvas.SetActive(true);
        HUDCanvas.SetActive(false);
    }
	
	// Update is called once per frame
	void Update () {
	
	}

}
