using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpecialAttack : MonoBehaviour {

	public float speed = 8;
	public Player player;
	public ParticleSystem particle;
	public bool isAnimating;
	public PlayerUI playerUI;
	public BoxCollider2D boxCollider;
	public Rigidbody2D rb;

	List<ParticleCollisionEvent> collisionEvents;

	// Use this for initialization
	void Start () {
		player = FindObjectOfType<Player> ();
		playerUI = FindObjectOfType<PlayerUI> ();
		particle = GetComponent<ParticleSystem> ();
		isAnimating = false;
		boxCollider = GetComponent<BoxCollider2D> ();
		rb = GetComponentInChildren<Rigidbody2D> ();
		collisionEvents = new List<ParticleCollisionEvent> ();

	}

	// Update is called once per frame
	void Update () {

		var rememberDirection = player.transform.localScale;
		if (!player.fireSpecial) {
			particle.Play ();
		}

		isAnimating = !particle.isPlaying;
		transform.localScale = player.transform.localScale;

	}
	void OnTriggerEnter2D (Collider2D col)
	{
		if(col.gameObject.tag == "Target")
		{
			Destroy(col.gameObject);
			playerUI.targetsRemaining = playerUI.targetsRemaining -1;
			player.scoreText.text = "Targets Remaining: " + playerUI.targetsRemaining.ToString();
		}
	}

	void OnParticleCollision(GameObject go){
		if(go.tag == "Target")
		{
			Destroy(go);
			playerUI.targetsRemaining = playerUI.targetsRemaining - 1;
			player.scoreText.text = "Targets Remaining: " + playerUI.targetsRemaining.ToString();
			var eT = playerUI.playerCurrentEnergy + 5f;
			playerUI.playerCurrentEnergy = eT;
			playerUI.EnergyText.text = eT.ToString();
			playerUI.playerCurrentHealth = playerUI.playerCurrentHealth + 5;

			playerUI.timeLeft = playerUI.timeLeft + 5;
		}
	}
}
