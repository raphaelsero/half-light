using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticleController : MonoBehaviour {

	ParticleSystem particle;
	// Use this for initialization
	void Start () {
		particle = GetComponent<ParticleSystem> ();


	}
	
	// Update is called once per frame
	void Update () {
		Material particleMaterial = new Material(Shader.Find("Particles/Alpha Blended Premultiply"));

		particle.GetComponent <ParticleSystemRenderer> ().material = particleMaterial;
		var main = particle.main;
		main.startColor = Color.magenta;

		var emitParams = new ParticleSystem.EmitParams ();
		emitParams.startColor = Color.magenta;
		//particle.Emit (emitParams, 10);
	}


}
