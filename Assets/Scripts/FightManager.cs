using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class FightManager : MonoBehaviour {

    // Variables that we can set

    public GameObject fighter;
    public GameWorld game;

    public float fightTime = 10f;
    public int attackMoves = 3;
    public Transform[] attackMoveArray;

    public float delayMin = 1f;
    public float delayMax = 2f;

    public float attackSpeed = 1.0f;

    private bool isCoroutineExecuting = false;

    float finishedTimer;
    public float finishedDelay = 3f;

    // UI

    public Slider timeSlider;

    // Objects
    Animation anim;
    float timer;
    int count;
    int fighting;

    void Awake ()
    {

        // init objects

        anim = fighter.GetComponent<Animation>();

        // inits

        count = 0;
        fighting = 0;
        finishedTimer = 0f;

    }

	void Start () {

        // Make him start chilling

        anim.Play("idle");
        anim.wrapMode = WrapMode.Loop;

    }

    public void StartFight ()
    {

        // Set this so the attacks happen

        fighting = 1;

        timer = 0f;
        finishedTimer = 0f;

        // Start the first attack
        // After it throws one it will automatically start the next

        NextAttack();

    }

    public void EndFight ()
    {

        anim.CrossFade("death", 0.5f);
        anim.wrapMode = WrapMode.Once;

        //anim.CrossFade("idle", 0.5f);
        //anim.wrapMode = WrapMode.Loop;

        fighting = 0;

    }

    void NextAttack()
    {

        // First check if the fight is over

        if (fighting == 0)
        {
            Debug.Log("FIGHT OVER");
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
        int attackNumber = Random.Range(0, attackMoves);

        // Get the delay

        float delay = Random.Range(delayMin, delayMax);

        // Call attack

        Debug.Log("[" + count + "] Waiting " + delay + "secs then throwing attack type #" + attackNumber);

        StartCoroutine(AttackNumberAfterTime(attackNumber, delay));

    }

    IEnumerator AttackNumberAfterTime(int attackNumber, float time)
    {

        if (isCoroutineExecuting)
            yield break;

        isCoroutineExecuting = true;

        yield return new WaitForSeconds(time);

        // Code to execute after the delay

        Debug.Log("attack #" + count + " with type: " + attackNumber);

        // Play the correct attack animation

        switch (attackNumber)
        {
            case 0:
                //anim.Play("attack1");
                anim.CrossFade("attack1", 0.4f);
                anim.wrapMode = WrapMode.Once;
                break;
            case 1:
                //anim.Play("attack2");
                anim.CrossFade("attack2", 0.4f);
                anim.wrapMode = WrapMode.Once;
                break;
            case 2:
                //anim.Play("attack3");
                anim.CrossFade("attack3", 0.4f);
                anim.wrapMode = WrapMode.Once;
                break;
            default:
                Debug.Log("Switch case default: " + attackNumber);
                break;
        }

        // Then make them idle again
        // Queue up a few just in case there's a big break

        anim.CrossFadeQueued("combat_idle", 0.3f, QueueMode.CompleteOthers);
        anim.CrossFadeQueued("combat_idle", 0.3f, QueueMode.CompleteOthers);
        anim.CrossFadeQueued("combat_idle", 0.3f, QueueMode.CompleteOthers);
        anim.CrossFadeQueued("combat_idle", 0.3f, QueueMode.CompleteOthers);
        anim.CrossFadeQueued("combat_idle", 0.3f, QueueMode.CompleteOthers);
        //anim.wrapMode = WrapMode.Loop; // can't do this or it'll apply to the attacks too..

        // Stop the delay loop

        isCoroutineExecuting = false;

        // Call next attack

        NextAttack();

    }

    // Update is called once per frame
    void Update () {

        // for our time UI at the bottom
        if (fighting == 1)
        {
            timer += Time.deltaTime;
            timeSlider.value = timer / fightTime * 100.0f;
        }

        // if the fight is over wait a bit
        if (timer >= fightTime && fighting == 0)
        {
            finishedTimer += Time.deltaTime;
        }

        // after the fight is over for a bit, go back
        if (finishedTimer >= finishedDelay)
        {
            Debug.Log("FINISHED FIGHT");
            game.FightFinished();
        }

    }
}
