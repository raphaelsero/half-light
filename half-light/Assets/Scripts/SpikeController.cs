using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpikeController : MonoBehaviour {
	public PlayerUI playerUI;
	public BoxCollider2D boxCollider;
	public GameObject playerTextCanvas; 


	// Use this for initialization
	void Start () {
		playerTextCanvas = GameObject.Find ("PlayerTextCanvas");
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnTriggerEnter2D (Collider2D col)
	{
		if(col.CompareTag("Player"))
		{
			playerUI.TakeDamage(10);
			FloatingTextCreator.CreateFloatingText ("-10", playerTextCanvas.transform); 

		}
	}
}
