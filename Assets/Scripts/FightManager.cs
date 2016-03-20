using UnityEngine;
using UnityEngine.UI;
//using System.Collections.Generic;
using System.Collections;

public class FightManager : MonoBehaviour {

    // Variables that we can set

    public GameObject fighter;
    public GameWorld game;
    public UIScript ui;

    public float fightTime = 10f;
    public int attackMoves = 3;
    public ArrayList attackMoveArray;

    public float delayMin = 1f;
    public float delayMax = 2f;

    public float attackSpeed = 1.0f;
    public float guardSpeed = 0.1f;

    private bool isCoroutineExecuting = false;

    float finishedTimer;
    public float finishedDelay = 0.5f;
    string idlename;
    string guardname;

    // UI

    public Slider timeSlider;
    public Text levelText;

    // Objects
    Animation anim;
    float timer;
    int count;
    int fighting;

    void Awake ()
    {

        // init objects

        anim = fighter.GetComponent<Animation>();
        anim.wrapMode = WrapMode.Loop;
        anim.Stop();

        // inits

        count = 0;
        fighting = 0;
        finishedTimer = 0f;
        attackMoveArray = new ArrayList();
        idlename = "Idle1";
        guardname = "Guard";

    }

	void Start () {

        // Make him start chilling

        anim[idlename].speed = 0.5f;
        anim.CrossFade(idlename, 1.5f);
        //anim.wrapMode = WrapMode.PingPong;

    }

    public void StartFight ()
    {

        // Set this so the attacks happen

        fighting = 1;

        timer = 0f;
        finishedTimer = 0f;

        string showLevel = game.levelNumber.ToString();
        if (game.levelNumber == 999)
            showLevel = "C";

        levelText.text = "" + showLevel + "";

        // Go to Guard then Guard for a while until the first punch kicks in

        //anim.CrossFade("GoToGuard", 0.3f, PlayMode.StopAll);
        //anim.wrapMode = WrapMode.Once;

        QueueGuard();

        // Print out what we've got

        string gotem = "";
        foreach (string test in attackMoveArray)
        {
            gotem = gotem + " " + test;

        }
        Debug.Log("STARTING FIGHT WITH ATTACKS: " + gotem);

        // Start the first attack
        // After it throws one it will automatically start the next

        NextAttack();

    }

    public void EndFight ()
    {

        // set this in case they hit the stop button

        fighting = 0;
        isCoroutineExecuting = false;
        StopAllCoroutines();

        game.FightFinished();

        //anim.CrossFade(idlename, 0.5f, PlayMode.StopAll);
        //anim.wrapMode = WrapMode.PingPong;

    }

    public void StopEarly ()
    {
        timer = fightTime + 1;
        EndFight();
    }

    void NextAttack()
    {

        // First check if the fight is over

        if (fighting == 0)
        {
            //Debug.Log("FIGHT OVER");
            return;
        }

        // See if it just finished

        if (timer >= fightTime && fighting == 1)
        {
            Debug.Log("FIGHT FINISHED WITH " + count + " ATTACKS!");
            EndFight();
            return;
        }

        // All good to throw another attack

        AttackOnce();

    }

    void AttackOnce()
    {

        // Get random attack type

        count += 1;
        int attackNumber = Random.Range(0, attackMoveArray.Count);

        // Get the delay

        float delay = Random.Range(delayMin, delayMax);

        // Call attack

        Debug.Log("[" + count + "] Waiting " + delay.ToString("F2") + "secs then throwing attack type #" + attackNumber);

        StartCoroutine(AttackNumberAfterTime(attackNumber, delay));

    }

    IEnumerator AttackNumberAfterTime(int attackNumber, float time)
    {

        if (isCoroutineExecuting)
            yield break;

        isCoroutineExecuting = true;

        yield return new WaitForSeconds(time);

        // Code to execute after the delay

        string attackAnimation = (string)attackMoveArray[attackNumber];

        Debug.Log("attack #" + count + " with type " + attackNumber + ": " + attackAnimation);

        anim.CrossFade(attackAnimation, 0.2f);
        //anim.CrossFade(attackAnimation, 0.2f, PlayMode.StopAll);
        //anim.wrapMode = WrapMode.Once;

        // Then make them idle again
        // Queue up a few just in case there's a big break

        //QueueGuard(); // don't need to do this any more due to layers

        // Stop the delay loop

        isCoroutineExecuting = false;

        // Call next attack

        NextAttack();

    }

    void QueueGuard ()
    {
        //SetGuardSpeed(guardSpeed);
        anim.CrossFadeQueued(guardname, 0.2f/*, QueueMode.CompleteOthers, PlayMode.StopAll*/);
        /*
        anim.PlayQueued(guardname, QueueMode.CompleteOthers);
        anim.PlayQueued(guardname, QueueMode.CompleteOthers);
        anim.PlayQueued(guardname, QueueMode.CompleteOthers);
        anim.PlayQueued(guardname, QueueMode.CompleteOthers);
        anim.PlayQueued(guardname, QueueMode.CompleteOthers);
        anim.PlayQueued(guardname, QueueMode.CompleteOthers);
        anim.PlayQueued(guardname, QueueMode.CompleteOthers);
        anim.PlayQueued(guardname, QueueMode.CompleteOthers);
        anim.PlayQueued(guardname, QueueMode.CompleteOthers);
        anim.PlayQueued(guardname, QueueMode.CompleteOthers);
        anim.PlayQueued(guardname, QueueMode.CompleteOthers);
        anim.PlayQueued(guardname, QueueMode.CompleteOthers);
        anim.PlayQueued(guardname, QueueMode.CompleteOthers);
        anim.PlayQueued(guardname, QueueMode.CompleteOthers);
        anim.PlayQueued(guardname, QueueMode.CompleteOthers);
        anim.PlayQueued(guardname, QueueMode.CompleteOthers);
        */
    }

    // Update is called once per frame
    void Update () {

        // List animations and their current time

        // if the fight is over wait a bit
        /*
        if (timer >= fightTime && fighting == 0)
        {
            
        }
        */

        // for our time UI at the bottom
        if (fighting == 1)
        {
            timer += Time.deltaTime;
            timeSlider.value = timer / fightTime * 100.0f;
        }

        /*
        // after the fight is over for a bit, go back
        if (finishedTimer >= finishedDelay && fighting == 1)
        {
            Debug.Log("FINISHED FIGHT");
            game.FightFinished();
        }
        */

    }

    public void SetAnimationSpeed(float speed)
    {
        attackSpeed = speed;
        foreach (string x in attackMoveArray)
        {
            anim[x].speed = attackSpeed;
            anim[x].wrapMode = WrapMode.Once;
            anim[x].layer = 1;
            Debug.Log("Animation \"" + x + "\" speed set to: " + attackSpeed);
        }
    }

    public void SetGuardSpeed(float thisSpeed)
    {
        guardSpeed = thisSpeed;
        anim[guardname].speed = thisSpeed;
        anim[guardname].normalizedSpeed = thisSpeed;
        Debug.Log(guardname + " speed set to: " + thisSpeed);

        float otherspeed = thisSpeed;
        if (otherspeed < 0.3f)
        {
            otherspeed = 0.3f;
        }
        anim[idlename].speed = otherspeed;
        //anim[idlename].wrapMode = WrapMode.Loop; // idle wrap mode
        anim["GoToGuard"].speed = otherspeed;
    }

    public void AddAttack(string name)
    {
        int exists = IsAttackPresent(name);
        if (exists == -1)
        {
            Debug.Log("adding " + name);
            attackMoveArray.Add(name);
        }
        ui.ValidateSettings();
    }

    public void RemoveAttack(string name)
    {
        int exists = IsAttackPresent(name);
        if (exists >= 0)
        {
            Debug.Log("removing " + name);
            attackMoveArray.RemoveAt(exists);
        }
        ui.ValidateSettings();
    }

    public void RemoveAllAttacks()
    {
        attackMoveArray = new ArrayList();
        //ui.ValidateSettings();
    }

    public int IsAttackPresent(string thisname)
    {
        int exists = -1;
        int count = 0;        
        foreach (string test in attackMoveArray)
        {
            if (test.Equals(thisname))
            {
                exists = count;
            }
            count++;
        }
        return exists;
    }

}
