using UnityEngine;
using System.Collections;

[RequireComponent (typeof (Player))]

public class PlayerInput : MonoBehaviour {
	public Player player;
	public bool? JumpPressed = null;
	public bool isJumping;
	public bool isFalling;

	string btnPressed;
	ClickManager DoubleClick = new ClickManager();
	public bool isMoving;
	public Vector2 directionalInput;
	public bool doubleJump;

	void Start () {
		player = GetComponent<Player> ();
	}

	void Update () {
		directionalInput = new Vector2 (Input.GetAxisRaw ("Horizontal"), Input.GetAxisRaw ("Vertical"));
		switch (btnPressed) {
		case "btnLeftPressed":
			directionalInput = new Vector2 (-1f, 0f);
			isMoving = true;
			break;

		case "btnRightPressed":
			directionalInput = new Vector2 (1f, 0f);
			isMoving = true;
			break;

		case "Released":
			directionalInput = new Vector2 (0f, 0f);
			isMoving = false;
			break;
		}

		if (directionalInput.x == -1) {
			player.transform.localScale = new Vector3 (-1, player.transform.localScale.y, player.transform.localScale.z);
			isMoving = true;

		} 
		if (directionalInput.x == 1) {
			player.transform.localScale = new Vector3 (1, player.transform.localScale.y, player.transform.localScale.z);
			isMoving = true;

		} 

		if (directionalInput.x == 0) {
			isMoving = false;

		}

		player.SetDirectionalInput (directionalInput);

		if (Input.GetKeyDown (KeyCode.W) || JumpPressed == true) {
			player.OnJumpInputDown ();
			isJumping = true;
			bool isDoubleClicked = DoubleClick.DoubleClick ();
			if (isDoubleClicked && doubleJump == false) {
				doubleJump = true;
				player.velocity.y = player.maxJumpVelocity;
			}
			if (player.collisionDetected) {
				doubleJump = false;
			}

		}
		if (Input.GetKeyUp (KeyCode.W) || JumpPressed == false) {
			player.OnJumpInputUp ();
			isJumping = false;
		}


	}

	public void BtnJumpPressed(){
		JumpPressed = true;
		iOSHapticFeedback.Instance.Trigger((iOSHapticFeedback.iOSFeedbackType)1);
	}

	public void BtnJumpReleased(){
		JumpPressed = false;

	}
	public void BtnLeftPressed(){
		btnPressed = "btnLeftPressed";
		iOSHapticFeedback.Instance.Trigger((iOSHapticFeedback.iOSFeedbackType)1);

//		bool isDoubleClicked = DoubleClick.DoubleClick();
//		if (isDoubleClicked) {
//			player.BtnDash();
//		} 
	}
		
	public void BtnRightPressed(){
		btnPressed = "btnRightPressed";
		iOSHapticFeedback.Instance.Trigger((iOSHapticFeedback.iOSFeedbackType)1);

//		bool isDoubleClicked = DoubleClick.DoubleClick();
//		if (isDoubleClicked) {
//			player.BtnDash();
//		} 
	}
		
	public void BtnReleased(){
		btnPressed = "Released";
		if (player.isDashing == true) {
			player.isDashing = false;
		}
	}
		

}
