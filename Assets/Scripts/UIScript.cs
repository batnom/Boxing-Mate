using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class UIScript : MonoBehaviour {

    public GameWorld game;
    public FightManager fight;

    public Slider speedSlider;
    public Slider lengthSlider;

    public void Start()
    {
        speedSlider.onValueChanged.AddListener(delegate { SetSpeedFromSlider(); });
        lengthSlider.onValueChanged.AddListener(delegate { SetFightLengthFromSlider(); });
    }

    // STOP PAUSE

    public void HitPause()
    {
        Debug.Log("PAUSE ME");
    }

    public void HitStop()
    {
        fight.EndFight();
    }

    // LEVELS

    public void HitSameLevel()
    {
        Debug.Log("GO SAME LEVEL");
        game.HitStartButton();
    }

    public void HitNextLevel()
    {
        Debug.Log("GO NEXT LEVEL");
    }

    public void HitPrevLevel()
    {
        Debug.Log("GO PREV LEVEL");
    }

    // SETTINGS

    public void SetFightLengthFromSlider()
    {
        fight.fightTime = lengthSlider.value;
    }

    public void SetSpeedFromSlider()
    {
        fight.SetAnimationSpeed(speedSlider.value);
    }

    public void SetDelayMin(float delayMin)
    {
        fight.delayMin = delayMin;
    }

    public void SetDelayMax(float delayMax)
    {
        fight.delayMax = delayMax;
    }



}
