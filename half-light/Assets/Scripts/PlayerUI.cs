using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PlayerUI : MonoBehaviour {
	public float timeLeft = 99.99f;
	public float playerHealth = 100;
	public float playerCurrentHealth;
	public float playerEnergy = 100;
	public float playerCurrentEnergy;
	public int targetsRemaining = 10;

	public bool isDamaged;
	public bool playerIsDead;

	public float flashSpeed = 5f;
	public Color flashColour = new Color (1f, 0f, 0f, 0.1f);

	public Slider HealthSlider;
	public Slider EnergySlider;

	public Text EnergyText;
	public Text HealthText;
	public Text Timer;
	public Text BigText;

	public float timeTruncated;
	public SpriteRenderer playerSprite;
	public AudioSource playerhit;
	public Color ogColor;

	void Awake(){
		playerCurrentHealth = playerHealth;
		playerCurrentEnergy = playerEnergy;

		HealthSlider.maxValue = playerHealth;
		HealthSlider.value = playerHealth;
		var healthSlideColor = HealthSlider.colors;
		healthSlideColor.colorMultiplier = 2f;
		healthSlideColor.highlightedColor = Color.red;
		healthSlideColor.normalColor = Color.red;

//		EnergySlider.maxValue = playerEnergy;
		EnergySlider.value = playerEnergy;
		var energySlideColor = EnergySlider.colors;
		energySlideColor.colorMultiplier = 2f;
		energySlideColor.highlightedColor = Color.magenta;
		energySlideColor.normalColor = Color.magenta;

		Timer.text = timeLeft.ToString ("#.00");


	}

	// Use this for initialization
	void Start () {
		ogColor = playerSprite.color;

		HealthText.text = playerHealth.ToString();
		EnergyText.text = playerEnergy.ToString();
	}
	
	// Update is called once per frame
	void Update () {
//		if (isDamaged) {
//		
//		}
		HealthText.text = playerCurrentHealth.ToString("#");
		HealthSlider.value = playerCurrentHealth;
		EnergyText.text = playerCurrentEnergy.ToString();
		EnergySlider.value = playerCurrentEnergy;

		if (Time.timeSinceLevelLoad < 3f) {
			BigText.text = "BREAK THE TARGETS";
		} else {
			BigText.text = "";
		}

		if (timeLeft > 0.01f) {
			timeLeft -= Time.deltaTime;
			Timer.text =  timeLeft.ToString("#.00");

		}else {
			playerCurrentHealth = 0;
		}

		if(playerCurrentHealth <= 0f){
			
			SceneManager.LoadScene("menu");
		}
		if (targetsRemaining == 0) {
			BigText.text = "YOU WIN!!!";
		}
	}

	public void TakeDamage(int damage){
		isDamaged = true;
		playerCurrentHealth = playerCurrentHealth - damage;
		HealthSlider.value = playerCurrentHealth;
		StartCoroutine (FlashDamage());			
		playerhit.Play ();
		Handheld.Vibrate ();
		if (playerCurrentHealth <= 0 && !playerIsDead) {
			playerIsDead = true;
			Death ();
		}
	}

	IEnumerator FlashDamage(){
		playerSprite.color = Color.red;
		yield return new  WaitForSeconds(0.05F);
		playerSprite.color = ogColor;
	}

	public void Death ()
	{
		SceneManager.LoadScene ("menu");
	}


}
