﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;
using System;
using System.Linq;

using TMPro;
using SPBUTimetable;

public class TTDayScript : MonoBehaviour {

	public DayTimetable _day;

	public TextMeshProUGUI dayTitle;
	public TextMeshProUGUI date;

	public Transform timesContainer;
	public RectTransform todayBadge;




	void Awake(){
		clear ();
	}

	private void clear(){
		foreach(Transform t in timesContainer){
			Destroy (t.gameObject);
		}
	}

	public void addTime(string time, List<Pair> pairs, bool lastTime = false, bool editMode = false){
		var t = (Instantiate (Resources.Load("Prefabs/UI/schedule/Time")) as GameObject).GetComponent<TTTimeScript>();		

		t.transform.SetParent (timesContainer, false);
		t.transform.localScale = Vector3.one;
		t.transform.localScale = Vector3.one;
		t.transform.localRotation = Quaternion.identity;

		t.timeTitle.text = time;




		var i = 0;
		foreach(var p in pairs){
			var lastPair = i == pairs.Count - 1;
			t.addPair (p, lastTime && lastPair, editMode);
			i++;
		}
	}


	public void UpdateLayout(){
		
		foreach (var t in timesContainer.GetComponentsInChildren<TTTimeScript>()) {
			t.UpdateLayout ();
		}

		if (_day.day.Date == DateTime.Today) {
			todayBadge.gameObject.SetActive (true);
			todayBadge.anchoredPosition = new Vector2 (dayTitle.preferredWidth + 20f, todayBadge.anchoredPosition.y);	
		} else {
			todayBadge.gameObject.SetActive (false);
		}



		var sumHeight = dayTitle.rectTransform.rect.size.y + timesContainer.GetComponent<VerticalLayoutGroup> ().padding.bottom;

		foreach(Transform t in timesContainer){						
			sumHeight += t.GetComponent<LayoutElement> ().preferredHeight;
		}

//		Debug.LogWarning ("sumHeight for Day : "+sumHeight);

		GetComponent<LayoutElement> ().preferredHeight = sumHeight;
	}
}
