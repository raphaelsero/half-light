using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttacksController : MonoBehaviour {

	ParticleSystem particle;
	Player player;

	void Start () {
		
		particle = GetComponent<ParticleSystem> ();
		player = GetComponentInParent<Player> ();
	}

	void Update () {
		
		if (!player.fireSpecial && !player.isCharging) {
			particle.Play ();
		}
	}
}
