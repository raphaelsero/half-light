using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[RequireComponent (typeof (PlayerInput))]


public class SpriteAnimator : MonoBehaviour {
	private Animator animator;
	PlayerInput playerInput;
	public bool isMoving;
	public bool isJumping;
	public bool isFalling;
	public bool collisionDetected;
	public bool isWallSliding;
	public bool isShooting;

	// Use this for initialization
	void Start () {
		animator = GetComponent<Animator> ();
		playerInput = GetComponentInParent<PlayerInput> ();

	}
	
	// Update is called once per frame
	void Update () {
		isMoving = playerInput.isMoving;
		isJumping = playerInput.isJumping;
		isFalling = playerInput.isFalling;
		collisionDetected = playerInput.player.collisionDetected;
		isWallSliding = playerInput.player.wallSliding;
		isShooting = playerInput.player.isShooting;


		animator.SetBool("_IsMoving", isMoving);
		animator.SetBool ("_IsJumping", isJumping);
		animator.SetBool ("_IsFalling", isFalling);
		animator.SetBool ("_HitObstacle", collisionDetected);
		animator.SetBool ("_IsWallSliding", isWallSliding);
		animator.SetBool ("_IsShooting", isShooting);
	}
}
