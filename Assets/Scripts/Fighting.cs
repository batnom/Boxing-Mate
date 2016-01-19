using UnityEngine;
using System.Collections;

public class Fighting : MonoBehaviour {

    public float speed = 6f;

    Vector3 movement;
    Animator anim;
    Rigidbody fighterRigidBody;
    int floorMask;
    float camRayLength = 100f;

    void Awake() {
        floorMask = LayerMask.GetMask("Floor");
        anim = GetComponent<Animator>();
        fighterRigidBody = GetComponent<Rigidbody>();
    }

    // Runs with physics, every physics step
    void FixedUpdate() {
        // get if default keys hit 1/0/-1
        // using raw so it immediately snaps to full speed
        float h = Input.GetAxisRaw("Horizontal"); 
        float v = Input.GetAxisRaw("Vertical");

        // Now calll the other functions that handle stuff
        //Move(h, v);
        //Turning();
        //Animating(h, v);

    }

    void Move (float h, float v) {
        movement.Set(h, 0f, v); // y is 0 so flat on the ground
        // so there's no advantage going X and Y 
        movement = movement.normalized * speed * Time.deltaTime; // times by the speed * per second
        fighterRigidBody.MovePosition(transform.position + movement); // update it from their post + the movement
    }

    // so the player looks at the mouse - camera looking at pointer on screen and drawing a ray to the floor
    void Turning() {
        Ray camRay = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit floorHit;
        if (Physics.Raycast (camRay, out floorHit, camRayLength, floorMask)) // out = get information out of that var
        {
            Vector3 playerToMouse = floorHit.point - transform.position;
            playerToMouse.y = 0f; // so he doesn't lean back
            Quaternion newRotation = Quaternion.LookRotation(playerToMouse);
            fighterRigidBody.MoveRotation(newRotation); // finally update it
        }
    }

    // sets the Animator flag for walking
    void Animating(float h, float v) {
        bool walking = h != 0f || v != 0f; // if h or v isn't 0, player is walking
        anim.SetBool("IsWalking", walking);
    }

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
