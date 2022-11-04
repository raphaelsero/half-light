using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class FloatingTextController : MonoBehaviour {
	public Animator animator;
	public Player player;
	private Text text;

	void Start(){
		AnimatorClipInfo[] clipInfo = animator.GetCurrentAnimatorClipInfo(0);
		player = GetComponentInParent<Player> ();
		Destroy (this.gameObject, clipInfo [0].clip.length);
	}


	void Update(){
		if (player.transform.localScale.x == -1f) {
			transform.rotation = new Quaternion(0, 180, 0, 0);

		} else {
			transform.rotation = new Quaternion(0, 0, 0, 0);
		}
	}

	public void SetText(string t){
		animator.GetComponent<Text> ().text = t;
	}


}
