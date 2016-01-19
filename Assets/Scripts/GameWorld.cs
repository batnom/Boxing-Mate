using UnityEngine;
using System.Collections;

public class GameWorld : MonoBehaviour {

    // Variables that we can set

    public FightManager fight;

    public GameObject HUDCanvas;
    public GameObject MenuCanvas;
    public GameObject SettingsCanvas;


    void Awake ()
    {
        MenuCanvas.SetActive(true);
        SettingsCanvas.SetActive(true);
        HUDCanvas.SetActive(false);
    }

    void Start () {

    }

    public void HitStartButton()
    {
        MenuCanvas.SetActive(false);
        HUDCanvas.SetActive(true);
        SettingsCanvas.SetActive(true);

        //SetupFight(12.0f, 1.0f, null, 1.0f, 2.0f);
        StartFight();
    }

    public void SetupFight(float length, float speed, Transform[] attackMoves, float delayMin, float delayMax)
    {

        Debug.Log("Setting up and starting fight!");

        // Setup Fight

        fight.fightTime = length;
        fight.attackSpeed = speed;
        fight.attackMoveArray = attackMoves;
        fight.delayMin = delayMin;
        fight.delayMax = delayMax;

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
