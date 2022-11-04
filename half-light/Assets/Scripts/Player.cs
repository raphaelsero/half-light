using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

[RequireComponent (typeof (Controller2D))]
public class Player : MonoBehaviour {

	public float maxJumpHeight = 4;
	public float minJumpHeight = 1;
	public float timeToJumpApex = .4f;
	float accelerationTimeAirborne = .2f;
	float accelerationTimeGrounded = .1f;
	public float moveSpeed = 15;

	public Vector2 wallJumpClimb;
	public Vector2 wallJumpOff;
	public Vector2 wallLeap;
	public float wallSlideSpeedMax = 3;
	public float wallStickTime = .25f;
	float timeToWallUnstick;

	float boostSpeed = 15f;
	float gravity;
	public float maxJumpVelocity;
	float minJumpVelocity;
	public Vector3 velocity;
	float velocityXSmoothing;
	public bool? isDashing;
	public bool collisionDetected;
	bool stopDashing;

	Controller2D controller;
	Vector2 directionalInput;
	public bool wallSliding;
	int wallDirX;

	bool? fireRange;
	public bool fireSpecial;
	public bool isShooting;
	public bool isCharging;


	public Transform firePoint;
	public GameObject rangeAttack;
	public GameObject specialAttack;

	public int targetsDestroyed = 0;
	public Text scoreText;
	public Text playerText;

	public Slider energySlider;
	public Slider healthSlider;

	PlayerUI playerUI;
	public AudioSource music;
	public AudioSource drain;
	public AudioSource blast;
	public AudioSource aura;

	public GameObject playerTextCanvas; 
	public float chargeTimeStart;
	public float chargeCount = 0;
	public int textChargeCount = 0;
	PlayerInput playerInput;

	void Start() {
		controller = GetComponent<Controller2D> ();
		playerUI = GetComponent<PlayerUI> ();
		playerInput = GetComponent<PlayerInput> ();
		playerTextCanvas = GameObject.Find ("PlayerTextCanvas");
//		music.Play (44100);
//		Animation animate = GetComponent<Animation> ();
		gravity = -(2 * maxJumpHeight) / Mathf.Pow (timeToJumpApex, 2);
		maxJumpVelocity = Mathf.Abs(gravity) * timeToJumpApex;
		minJumpVelocity = Mathf.Sqrt (2 * Mathf.Abs (gravity) * minJumpHeight);
//		animate.Play ();
		scoreText.text = "Targets Remaining: " + playerUI.targetsRemaining.ToString();
	}

	void Update() {
		
		CalculateVelocity ();
		HandleWallSliding ();

		controller.Move (velocity * Time.deltaTime, directionalInput);

		if (controller.collisions.above || controller.collisions.below) {
			velocity.y = 0;
			collisionDetected = true;
		} else {
			collisionDetected = false;
		}

		if(Input.GetKeyDown(KeyCode.Keypad2) || Input.GetKeyDown(KeyCode.Return))
		{
			isShooting = true;
			isCharging = true;
			chargeTimeStart = Time.realtimeSinceStartup;
			aura.playOnAwake = true;
			Instantiate (aura);
			textChargeCount = 0;

		}

		if(Input.GetKeyUp(KeyCode.Keypad2) || Input.GetKeyUp(KeyCode.Return))
		{
			isShooting = false;
			isCharging = false;
			fireRange = true;
		}
			
		if(Input.GetKeyDown(KeyCode.Keypad3) || Input.GetKeyDown(KeyCode.Quote))
		{
			fireSpecial = true;
			isShooting = true;
			drain.playOnAwake = true;
			Instantiate (drain);
		}

		if(Input.GetKeyUp(KeyCode.Keypad3) || Input.GetKeyUp(KeyCode.Quote))
		{
			fireSpecial = false;
			isShooting = false;
		}

		if (fireRange == true && playerUI.playerCurrentEnergy >= 1) {
			GameObject rangedAttackObj = Instantiate (rangeAttack, firePoint.position, firePoint.rotation);
//			SpriteRenderer sprite = rangedAttackObj.GetComponent<RangedAttackController> ().sprite;
			float chargeCount = rangedAttackObj.GetComponent<RangedAttackController> ().SetChargeCount (chargeTimeStart);

			if (chargeCount > 1 && chargeCount < 2) {
				rangedAttackObj.transform.localScale = new Vector3(rangedAttackObj.transform.localScale.x * 1.5f, rangedAttackObj.transform.localScale.y * 1.5f); 
				iOSHapticFeedback.Instance.Trigger((iOSHapticFeedback.iOSFeedbackType)3);
				chargeCount = 0;
			}

			if (chargeCount > 2) {
				rangedAttackObj.transform.localScale = new Vector3(rangedAttackObj.transform.localScale.x * 2f, rangedAttackObj.transform.localScale.y * 2f); 
				iOSHapticFeedback.Instance.Trigger((iOSHapticFeedback.iOSFeedbackType)6);
				chargeCount = 0;
			}

			rangedAttackObj.SetActive (true);

			fireRange = false;
			blast.playOnAwake = true;
			Instantiate (blast);
			playerUI.playerCurrentEnergy = energySlider.value = energySlider.value - 1f;
		}

		chargeCount = Time.realtimeSinceStartup - chargeTimeStart;

		if (chargeCount >= 1 && textChargeCount == 0 && isCharging) {
			FloatingTextCreator.CreateFloatingText ("1", playerTextCanvas.transform); 
			textChargeCount++;
		}  

		if (chargeCount >= 2 && textChargeCount == 1 && isCharging) {
			FloatingTextCreator.CreateFloatingText ("2", playerTextCanvas.transform); 
			textChargeCount++;
		}



		if(Input.GetKeyDown(KeyCode.P))
		{
			SceneManager.LoadScene("training");
		}
	}

	public void SetDirectionalInput (Vector2 input) {
		directionalInput = input;
	}

	public void OnJumpInputDown() {
		if (wallSliding) {
			if (wallDirX == directionalInput.x) {
//				velocity.x = -wallDirX * wallJumpClimb.x;
//				velocity.y = wallJumpClimb.y;
				velocity.x = -wallDirX * wallLeap.x;
				velocity.y = wallLeap.y;
				transform.localScale = new Vector3 ( transform.localScale.x * -1, transform.localScale.y, transform.localScale.z);
			}
			else if (directionalInput.x == 0) {
				velocity.x = -wallDirX * wallJumpOff.x;
				velocity.y = wallJumpOff.y;
				transform.localScale = new Vector3 ( transform.localScale.x * -1, transform.localScale.y, transform.localScale.z);

			}
			else {
				velocity.x = -wallDirX * wallLeap.x;
				velocity.y = wallLeap.y;
			}
		}
		if (controller.collisions.below) {
			velocity.y = maxJumpVelocity;
		}
//		if (playerInput.doubleJump) {
//			velocity.y = maxJumpVelocity;
//			playerInput.doubleJump = false;
//		}
	}

	public void OnJumpInputUp() {
		if (velocity.y > minJumpVelocity) {
			velocity.y = minJumpVelocity;
		}
	}


	void HandleWallSliding() {
		wallDirX = (controller.collisions.left) ? -1 : 1;
		wallSliding = false;
		firePoint.localPosition = new Vector3 (1f, firePoint.localPosition.y);

		if ((controller.collisions.left || controller.collisions.right) && !controller.collisions.below && velocity.y < 0) {
			wallSliding = true;
			firePoint.localPosition = new Vector3 (firePoint.localPosition.x * -1, firePoint.localPosition.y);
			if (velocity.y < -wallSlideSpeedMax) {
				velocity.y = -wallSlideSpeedMax;
			}

			if (timeToWallUnstick > 0) {
				velocityXSmoothing = 0;
				velocity.x = 0;

				if (directionalInput.x != wallDirX && directionalInput.x != 0) {
					timeToWallUnstick -= Time.deltaTime;
				}
				else {
					timeToWallUnstick = wallStickTime;
				}
			}
			else {
				timeToWallUnstick = wallStickTime;
			}

		}

	}

	void CalculateVelocity() {
		float targetVelocityX = directionalInput.x * moveSpeed;
		if (isDashing == true) {
			targetVelocityX =  directionalInput.x * (moveSpeed + boostSpeed);
		} 
		if(isDashing == false){
			targetVelocityX =  directionalInput.x * moveSpeed;
		}

		velocity.x = Mathf.SmoothDamp (velocity.x, targetVelocityX, ref velocityXSmoothing, (controller.collisions.below)?accelerationTimeGrounded:accelerationTimeAirborne);
		velocity.y += gravity * Time.deltaTime;
	}



		
	public void BtnAttack(){

	}

	public void BtnRanged(){
		isShooting = true;
		isCharging = true;
		chargeTimeStart = Time.realtimeSinceStartup;
		aura.playOnAwake = true;
		Instantiate (aura);
		iOSHapticFeedback.Instance.Trigger((iOSHapticFeedback.iOSFeedbackType)1);


	}

	public void BtnRangedReleased(){
		isShooting = false;
		isCharging = false;
		fireRange = true;
		iOSHapticFeedback.Instance.Trigger((iOSHapticFeedback.iOSFeedbackType)2);

	}

	public void BtnSpecial(){
		iOSHapticFeedback.Instance.Trigger((iOSHapticFeedback.iOSFeedbackType)1);
		fireSpecial = true;
		isShooting = true;
		drain.playOnAwake = true;
		Instantiate (drain);
	}

	public void BtnSpecialReleased(){
		fireSpecial = false;
		isShooting = false;
	}

	public void BtnDash(){
		isDashing = true;
	}

	public void BtnDashReleased(){
		isDashing = false;
	}



	public void BtnReset(){
		SceneManager.LoadScene("menu");
	}

	public void setPlayerText(string text){
	}

//	void OnTriggerEnter2D(Collider2D col){
//		if(col.gameObject.tag == "Spike")
//		{
//			Debug.Log ("Hello");
//			playerUI.TakeDamage(5);
//		}  
//	}
}