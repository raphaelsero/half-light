using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class PlayerTextController : MonoBehaviour {

	public Player player;
	float speed;
	Vector3 direction;
	float min;
	float max;
	float units = 1.0f;

//
//	void Start(){
////		player = GetComponentInParent<Player> ();
////		Text text = GetComponent<Text> ();
////
////		text.text = "-1";
////
////		//Set first direction to be down
////		direction = Vector3.up;
////		StartCoroutine(MyCoroutine());
////
////		GameObject go = this.gameObject;
////		go.SetActive(true);
//
//	}
//
//	void Update(){
//		max = player.transform.position.y + units;
//		min = player.transform.position.y;
//		if (player.transform.localScale.x == -1f) {
//			transform.rotation = new Quaternion(0, 180, 0, 0);
//
//		} else {
//			transform.rotation = new Quaternion(0, 0, 0, 0);
//		}
//
//		//Change speed depending on direction of object translation.
//		if(direction == Vector3.down)
//		{
//			speed = .50f;
//		}
//
//		else if(direction == Vector3.up)
//		{
//			speed = .50f;
//		}
//
//
//
//
//		//Use transform.Translate to move the current direction and current speed.
//		transform.Translate(direction * speed * Time.deltaTime);
//
//
//
//		//Change direction if object has reached min or max position on the Y axis (up and down).
//		if(transform.position.y >= max)
//		{
//			direction = Vector3.down;
//		}
//
//		if(transform.position.y <= min)
//		{
//			direction = Vector3.up;    
//		}
//	}
//
//
//
//	IEnumerator MyCoroutine ()
//	{
//		
//
//		print("Reached the target.");
//
//		yield return new WaitForSeconds(3f);
//
//		GameObject go = this.gameObject;
//		go.SetActive( false);
//		print("MyCoroutine is now finished.");
//	}


}
