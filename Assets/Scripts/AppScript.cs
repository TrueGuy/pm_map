using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class AppScript : MonoBehaviour {

	private static AppScript sharedInstance;
	public static AppScript getSharedInstance(){
		return sharedInstance == null ? sharedInstance = Camera.main.gameObject.GetComponent<AppScript>() : sharedInstance;
	}

	public FacilitiesManager facilities;
	public PoolSystem pool;

	public Canvas canvas;

	public CameraScript cam;

	void Awake(){
		canvas = GameObject.FindObjectOfType<Canvas> ();
		cam = GetComponent<CameraScript> ();
		facilities = new FacilitiesManager ();
		pool = GameObject.FindObjectOfType<PoolSystem> ();

		Application.targetFrameRate = 60;
	}

	void Start () {

	}
	

	void Update () {
	
	}
}
