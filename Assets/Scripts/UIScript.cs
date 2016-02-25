using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class UIScript : MonoBehaviour {

    public GameWorld game;
    public FightManager fight;
    public LevelManager levels;

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

    public Toggle comboOneToggle;
    public Toggle comboTwoToggle;
    public Toggle comboThreeToggle;

    public Text levelText;

    public Button startFightButton;
    public Button customiseButton;

    public Button DoneSameLevel;
    public Text DoneSameLevelButtonText;
    public Button DoneNextLevel;
    public Button DonePrevLevel;

    public void Start()
    {
        StartListeners();
    }

    // LISTENERS

    public void StartListeners()
    {
        // SETTINGS
        speedSlider.onValueChanged.AddListener(delegate { SetSpeedFromSlider(); });
        lengthSlider.onValueChanged.AddListener(delegate { SetFightLengthFromSlider(); });
        minDelaySlider.onValueChanged.AddListener(delegate { SetMinDelayFromSlider(); });
        maxDelaySlider.onValueChanged.AddListener(delegate { SetMaxDelayFromSlider(); });
        // ANIMATION LIST HERE
        attackOneToggle.onValueChanged.AddListener(delegate { AttackToggled(attackOneToggle, "JabLeft", "JabRight"); });
        attackTwoToggle.onValueChanged.AddListener(delegate { AttackToggled(attackTwoToggle, "HookLeft", "HookRight"); });
        attackThreeToggle.onValueChanged.AddListener(delegate { AttackToggled(attackThreeToggle, "UppercutLeft", "UppercutRight"); });
        comboOneToggle.onValueChanged.AddListener(delegate { AttackToggled(comboOneToggle, "Combo1", ""); });
        comboTwoToggle.onValueChanged.AddListener(delegate { AttackToggled(comboTwoToggle, "Combo2", ""); });
        comboThreeToggle.onValueChanged.AddListener(delegate { AttackToggled(comboThreeToggle, "Combo3", ""); });
    }

    public void StopListeners()
    {
        speedSlider.onValueChanged.RemoveAllListeners();
        lengthSlider.onValueChanged.RemoveAllListeners();
        minDelaySlider.onValueChanged.RemoveAllListeners();
        maxDelaySlider.onValueChanged.RemoveAllListeners();

        attackOneToggle.onValueChanged.RemoveAllListeners();
        attackTwoToggle.onValueChanged.RemoveAllListeners();
        attackThreeToggle.onValueChanged.RemoveAllListeners();
        comboOneToggle.onValueChanged.RemoveAllListeners();
        comboTwoToggle.onValueChanged.RemoveAllListeners();
        comboThreeToggle.onValueChanged.RemoveAllListeners();
    }

    // STOP PAUSE

    public void HitPause()
    {
        Debug.Log("PAUSE ME");
    }

    public void HitStop()
    {
        fight.StopEarly();
        game.FightFinished();
    }

    // LEVELS

    public void HitStartButton()
    {
        Debug.Log("GO SAME LEVEL");
        game.HitStartButton();
    }

    // SETTINGS

    public void HitCustomiseButton()
    {
        game.HitCustomiseButton();
    }

    public void SetFightLengthFromSlider()
    {
        fight.fightTime = lengthSlider.value;
        lengthValueText.text = fight.fightTime.ToString("F0") + " secs";
        levels.IsCustomLevel();
    }

    public void SetSpeedFromSlider()
    {
        fight.SetAnimationSpeed(speedSlider.value);
        speedValueText.text = fight.attackSpeed.ToString("F1") + "x";
        levels.IsCustomLevel();
    }

    public void SetMinDelayFromSlider()
    {
        SetDelayMin(minDelaySlider.value);
        levels.IsCustomLevel();
    }

    public void SetMaxDelayFromSlider()
    {
        SetDelayMax(maxDelaySlider.value);
        levels.IsCustomLevel();
    }

    public void SetDelayMin(float delayMin)
    {
        fight.delayMin = delayMin;
        minDelayValueText.text = fight.delayMin.ToString("F1") + " secs";
        levels.IsCustomLevel();
    }

    public void SetDelayMax(float delayMax)
    {
        fight.delayMax = delayMax;
        maxDelayValueText.text = fight.delayMax.ToString("F1") + " secs";
        levels.IsCustomLevel();
    }

    public void AttackToggled(Toggle thisToggle, string attackname, string attackname2)
    {
        if (thisToggle.isOn)
        {
            fight.AddAttack(attackname);
            if (!attackname2.Equals(""))
                fight.AddAttack(attackname2);
        } else {
            fight.RemoveAttack(attackname);
            if (!attackname2.Equals(""))
                fight.RemoveAttack(attackname2);
        }
        levels.IsCustomLevel();
    }

    // SETTINGS FUNCTIONS

    public void UpdateSettingsWithValues()
    {
        lengthSlider.value = fight.fightTime;
        speedSlider.value = fight.attackSpeed;
        minDelaySlider.value = fight.delayMin;
        maxDelaySlider.value = fight.delayMax;

        attackOneToggle.isOn = false;
        attackTwoToggle.isOn = false;
        attackThreeToggle.isOn = false;
        comboOneToggle.isOn = false;
        comboTwoToggle.isOn = false;
        comboThreeToggle.isOn = false;

        int present = fight.IsAttackPresent("JabLeft");
        if (present >= 0)
            attackOneToggle.isOn = true;

        present = fight.IsAttackPresent("HookLeft");
        if (present >= 0)
            attackTwoToggle.isOn = true;

        present = fight.IsAttackPresent("UppercutLeft");
        if (present >= 0)
            attackThreeToggle.isOn = true;

        present = fight.IsAttackPresent("Combo1");
        if (present >= 0)
            comboOneToggle.isOn = true;

        present = fight.IsAttackPresent("Combo2");
        if (present >= 0)
            comboTwoToggle.isOn = true;

        present = fight.IsAttackPresent("Combo3");
        if (present >= 0)
            comboThreeToggle.isOn = true;

        UpdateAllSettingsValues();

    }

    public void UpdateAllSettingsValues()
    {
        lengthValueText.text = fight.fightTime.ToString("F1") + " secs";
        speedValueText.text = fight.attackSpeed.ToString("F0") + "x";
        minDelayValueText.text = fight.delayMin.ToString("F1") + " secs";
        maxDelayValueText.text = fight.delayMax.ToString("F1") + " secs";
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
            case "combo1":
                thisToggle = comboOneToggle;
                break;
            case "combo2":
                thisToggle = comboTwoToggle;
                break;
            case "combo3":
                thisToggle = comboThreeToggle;
                break;
            default:
                break;
        }
        return thisToggle;
    }

}
