using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class UIScript : MonoBehaviour {

    public GameWorld game;
    public FightManager fight;

    public Slider speedSlider;
    public Text speedValueText;

    public Slider lengthSlider;
    public Text lengthValueText;

    public Slider minDelaySlider;
    public Text minDelayValueText;

    public Slider maxDelaySlider;
    public Text maxDelayValueText;

    public Toggle attackOneToggle;
    public Toggle attackTwoToggle;
    public Toggle attackThreeToggle;

    public Button startFightButton;


    public void Start()
    {
        speedSlider.onValueChanged.AddListener(delegate { SetSpeedFromSlider(); });
        lengthSlider.onValueChanged.AddListener(delegate { SetFightLengthFromSlider(); });
        minDelaySlider.onValueChanged.AddListener(delegate { SetMinDelayFromSlider(); });
        maxDelaySlider.onValueChanged.AddListener(delegate { SetMaxDelayFromSlider(); });
        // ANIMATION LIST HERE
        attackOneToggle.onValueChanged.AddListener(delegate { AttackToggled( attackOneToggle, "attack1"); });
        attackTwoToggle.onValueChanged.AddListener(delegate { AttackToggled( attackTwoToggle, "attack2"); });
        attackThreeToggle.onValueChanged.AddListener(delegate { AttackToggled( attackThreeToggle, "attack3"); });
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
        lengthValueText.text = fight.fightTime.ToString("F0") + " secs";
    }

    public void SetSpeedFromSlider()
    {
        fight.SetAnimationSpeed(speedSlider.value);
        speedValueText.text = fight.attackSpeed.ToString("F1") + "x";
    }

    public void SetMinDelayFromSlider()
    {
        SetDelayMin(minDelaySlider.value);
    }

    public void SetMaxDelayFromSlider()
    {
        SetDelayMax(maxDelaySlider.value);
    }

    public void SetDelayMin(float delayMin)
    {
        fight.delayMin = delayMin;
        minDelayValueText.text = fight.delayMin.ToString("F1") + " secs";
    }

    public void SetDelayMax(float delayMax)
    {
        fight.delayMax = delayMax;
        maxDelayValueText.text = fight.delayMax.ToString("F1") + " secs";
    }

    public void AttackToggled(Toggle thisToggle, string attackname)
    {
        if (thisToggle.isOn)
        {
            fight.AddAttack(attackname);
        } else {
            fight.RemoveAttack(attackname);
        }
    }

    // SETTINGS FUNCTIONS

    public void UpdateSettingsWithValues()
    {
        lengthSlider.value = fight.fightTime;
        speedSlider.value = fight.attackSpeed;
        minDelaySlider.value = fight.delayMin;
        maxDelaySlider.value = fight.delayMax;

        

        UpdateAllSettingsValues();
    }

    public void UpdateAllSettingsValues()
    {
        lengthValueText.text = fight.fightTime + " secs";
        speedValueText.text = fight.attackSpeed + "x";
        minDelayValueText.text = fight.delayMin + " secs";
        maxDelayValueText.text = fight.delayMax + " secs";
    }

    public void ValidateSettings()
    {
        if (fight.attackMoveArray.Count == 0)
        {
            startFightButton.GetComponent<Button>().interactable = false;
        } else {
            startFightButton.GetComponent<Button>().interactable = true;
        }
    }

    public Toggle GetToggleForAnimation(string name)
    {
        // ANIMATION LIST HERE
        Toggle thisToggle = null;
        switch (name)
        {
            case "attack1":
                thisToggle = attackOneToggle;
                break;
            case "attack2":
                thisToggle = attackTwoToggle;
                break;
            case "attack3":
                thisToggle = attackThreeToggle;
                break;
            default:
                break;
        }
        return thisToggle;
    }

}
