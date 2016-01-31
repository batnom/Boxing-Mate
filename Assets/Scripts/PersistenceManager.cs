using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PersistenceManager : MonoBehaviour {

    public UIScript ui;
    public FightManager fight;

    void Awake ()
    {

    }

    public void SaveLevel(int level)
    {
        PlayerPrefs.SetInt("LevelNumber", level);
    }

    public int LoadLevel()
    {
        int level = 1;
        if (PlayerPrefs.HasKey("LevelNumber"))
        {
            level = PlayerPrefs.GetInt("LevelNumber");
        }
        return level;
    }

    public void SaveCustomSettings()
    {
        PlayerPrefs.SetFloat("speed", ui.speedSlider.value);
        PlayerPrefs.SetFloat("length", ui.lengthSlider.value);
        Debug.Log("Saved length to: " + ui.lengthSlider.value);

        PlayerPrefs.SetFloat("minDelay", ui.minDelaySlider.value);
        PlayerPrefs.SetFloat("maxDelay", ui.maxDelaySlider.value);

        PlayerPrefs.SetInt("attackOne", GetToggleValue(ui.attackOneToggle));
        PlayerPrefs.SetInt("attackTwo", GetToggleValue(ui.attackTwoToggle));
        PlayerPrefs.SetInt("attackThree", GetToggleValue(ui.attackThreeToggle));

        PlayerPrefs.SetInt("comboOne", GetToggleValue(ui.comboOneToggle));
        PlayerPrefs.SetInt("comboTwo", GetToggleValue(ui.comboTwoToggle));
        PlayerPrefs.SetInt("comboThree", GetToggleValue(ui.comboThreeToggle));

        PlayerPrefs.Save();
    }

    public void LoadCustomSettings()
    {
        
        ui.StopListeners();

        if (PlayerPrefs.HasKey("speed"))
            fight.attackSpeed = PlayerPrefs.GetFloat("speed");
        if (PlayerPrefs.HasKey("length"))
            fight.fightTime = PlayerPrefs.GetFloat("length");
        Debug.Log("Loaded length to: " + ui.lengthSlider.value);
        if (PlayerPrefs.HasKey("minDelay"))
            fight.delayMin= PlayerPrefs.GetFloat("minDelay");
        if (PlayerPrefs.HasKey("maxDelay"))
            fight.delayMax = PlayerPrefs.GetFloat("maxDelay");

        // Start listeners here so it adds the attacks for us

        ui.StartListeners();

        if (PlayerPrefs.HasKey("attackOne"))
            AssignToggleValue(PlayerPrefs.GetInt("attackOne"), ui.attackOneToggle);
        if (PlayerPrefs.HasKey("attackTwo"))
            AssignToggleValue(PlayerPrefs.GetInt("attackTwo"), ui.attackTwoToggle);
        if (PlayerPrefs.HasKey("attackThree"))
            AssignToggleValue(PlayerPrefs.GetInt("attackThree"), ui.attackThreeToggle);

        if (PlayerPrefs.HasKey("comboOne"))
            AssignToggleValue(PlayerPrefs.GetInt("comboOne"), ui.comboOneToggle);
        if (PlayerPrefs.HasKey("comboTwo"))
            AssignToggleValue(PlayerPrefs.GetInt("comboTwo"), ui.comboTwoToggle);
        if (PlayerPrefs.HasKey("comboThree"))
            AssignToggleValue(PlayerPrefs.GetInt("comboThree"), ui.comboThreeToggle);

        // Now stop listeners again because the Level Manager sets them all to false then ticks the appropriate ones

        ui.StopListeners();

    }

    int GetToggleValue(Toggle thisToggle)
    {
        if (thisToggle.isOn)
            return 1;
        return 0;
    }

    void AssignToggleValue(int isOn, Toggle thisToggle)
    {
        if (isOn == 1)
        {
            thisToggle.isOn = true;
        }
        else
        {
            thisToggle.isOn = false;
        }
    }

}
