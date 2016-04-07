﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class TTWeekScript : MonoBehaviour {

	public Transform daysContainer;

	void Awake(){
		clear ();
	}

	private void clear(){
		foreach(Transform t in daysContainer){
			Destroy (t.gameObject);
		}
	}

	public void addDay(DayTimetable day){
		var d = (Instantiate (Resources.Load("Prefabs/UI/schedule/Day")) as GameObject).GetComponent<TTDayScript>();		
		d.transform.SetParent (daysContainer);
		d.transform.localScale = Vector3.one;
		d.dayTitle.text = day.getTranslatedDay();

		var shadow = Instantiate (Resources.Load("Prefabs/UI/schedule/UnderShadow")) as GameObject;		
		shadow.transform.SetParent (daysContainer);
		shadow.transform.localScale = Vector3.one;


		var timePairDict = new Dictionary<string, List<Pair>> ();
		foreach (var p in day.pairs) {
			if (!timePairDict.ContainsKey (p.time)) {
				timePairDict [p.time] = new List<Pair> ();
			}
			timePairDict [p.time].Add (p);
		}

		var i = 0;
		foreach (var t in timePairDict) {
			var lastTime = i==timePairDict.Count-1;
			d.addTime (t.Key, t.Value, lastTime);
			i++;
		}

	}

	public void updateLayout(){

		foreach (var t in daysContainer.GetComponentsInChildren<TTDayScript>()) {
			t.updateLayout ();
		}

		var sumHeight = 0f;
		foreach(Transform t in daysContainer){			
			sumHeight += t.GetComponent<LayoutElement> ().preferredHeight;
			var day = t.GetComponent<TTDayScript> ();
		}
		Debug.LogWarning ("sumHeight for Week : "+sumHeight);

		GetComponent<LayoutElement> ().preferredHeight = sumHeight;
	}
}
