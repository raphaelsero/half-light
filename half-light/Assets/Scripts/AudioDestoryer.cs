using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioDestoryer : MonoBehaviour {

	AudioSource audio;
	public bool isDrain;
	public bool isBlast;
	public bool isCharge;

	void Start () {
		
		audio = GetComponent<AudioSource> ();
	}
	
	void Update () {
		
		if (audio.isPlaying && isBlast) {
			Destroy (this.gameObject, audio.clip.length);
		} 

		if (audio.isPlaying && isDrain) {
			Player player = GameObject.Find ("Player").GetComponent<Player> ();
			if (player.fireSpecial == false) {
				Destroy (this.gameObject);
			}
		} 

		if (audio.isPlaying && isCharge) {
			Player player = GameObject.Find ("Player").GetComponent<Player> ();
			if (player.isCharging == false) {
				Destroy (this.gameObject);
			}
		}
	}
}
