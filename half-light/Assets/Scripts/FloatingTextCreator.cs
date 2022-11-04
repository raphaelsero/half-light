using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FloatingTextCreator : MonoBehaviour {
	private static FloatingTextController popupText;

	public static void CreateFloatingText(string text, Transform location){
		
		FloatingTextController instance = Instantiate (Resources.Load<FloatingTextController> ("Prefabs/PopupTextParent"));
		instance.SetText (text);
		instance.transform.SetParent (location.transform, false);
		instance.transform.position = location.transform.position;
	}
		
}
