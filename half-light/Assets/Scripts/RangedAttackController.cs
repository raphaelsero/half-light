using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RangedAttackController : MonoBehaviour {

	public Player player;
	public PlayerUI playerUI;
	public SpriteRenderer sprite;
	public float chargeCount;
	public float speed = 8;

	void Start () {

		player = FindObjectOfType<Player> ();
		playerUI = FindObjectOfType<PlayerUI> ();
		sprite = GetComponentInChildren<SpriteRenderer> ();

		if (player.transform.localScale.x < 0 ) {
			sprite.transform.localScale = new Vector3 (sprite.transform.localScale.x * -1, sprite.transform.localScale.y);

			if(!player.wallSliding){
				speed = -speed;
			}
		}
	}
	
	void Update () {

		GetComponent<Rigidbody2D>().velocity = new Vector2 (speed, GetComponent<Rigidbody2D>().velocity.y);﻿	
//		if (chargeCount > 1) {
//			sprite.transform.localScale = new Vector3(sprite.transform.localScale.x * 2f, sprite.transform.localScale.y * 2f); 
//			chargeCount = 0;
//		}
	}

	void OnTriggerEnter2D (Collider2D col)
	{
		if(col.gameObject.tag == "Target")
		{
			Destroy(col.gameObject);
			Destroy (this.gameObject);
			playerUI.targetsRemaining = playerUI.targetsRemaining - 1;
			player.scoreText.text = "Targets Remaining: " + playerUI.targetsRemaining.ToString();
		} 

		if (col.gameObject.tag == "Obstacle") {
			Destroy (this.gameObject);
		}
	}

	public float SetChargeCount(float realtimeSinceChargeStarted){

		chargeCount = Time.realtimeSinceStartup - realtimeSinceChargeStarted;
		Debug.Log ("charge count: " + chargeCount);
		return chargeCount;

	}
}
