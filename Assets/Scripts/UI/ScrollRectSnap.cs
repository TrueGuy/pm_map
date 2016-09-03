﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;

public class ScrollRectSnap : MonoBehaviour {

	public Action OnSnap = () => {};

	float[] points;
	[Tooltip("how many screens or pages are there within the content (steps)")]
	[HideInInspector]
	public int screens = 1;
	[Tooltip("How quickly the GUI snaps to each panel")]
	public float snapSpeed;
	public float inertiaCutoffMagnitude;
	float stepSize;

	ScrollRect scroll;
	bool LerpH;
	float targetH;
	[Tooltip("Snap horizontally")]
	public bool snapInH = true;

	bool LerpV;
	float targetV;
	[Tooltip("Snap vertically")]
	public bool snapInV = true;

	bool dragInit = true;
	int dragStartNearest;

	void Awake(){
		initSnapper ();
	}

	// Use this for initialization

	public void initSnapper(){
		scroll = gameObject.GetComponent<ScrollRect>();
		scroll.inertia = true;

		if (screens > 0)
		{
			points = new float[screens];
			stepSize = 1 / (float)(screens - 1);

			for (int i = 0; i < screens; i++)
			{
				points[i] = i * stepSize;
			}
		}
		else
		{
			points = new float[1]{0};
		}
	}



	void Update()
	{
		if (LerpH)
		{
			scroll.horizontalNormalizedPosition = Mathf.Lerp(scroll.horizontalNormalizedPosition, targetH, snapSpeed * Time.deltaTime);
			if (Mathf.Approximately (scroll.horizontalNormalizedPosition, targetH)) {
				LerpH = false;
				OnSnap ();
			}
		}
		if (LerpV)
		{
			scroll.verticalNormalizedPosition = Mathf.Lerp(scroll.verticalNormalizedPosition, targetV, snapSpeed * Time.deltaTime);
			if (Mathf.Approximately (scroll.verticalNormalizedPosition, targetV)) {
				LerpV = false;
				OnSnap ();
			}
				
		}
	}

	public void DragEnd()
	{
		int target = FindNearest(scroll.horizontalNormalizedPosition, points);

		if (target == dragStartNearest && scroll.velocity.sqrMagnitude > inertiaCutoffMagnitude * inertiaCutoffMagnitude)
		{
			if (scroll.velocity.x < 0)
			{
				target = dragStartNearest + 1;
			}
			else if (scroll.velocity.x > 1)
			{
				target = dragStartNearest - 1;
			}
			target = Mathf.Clamp(target, 0, points.Length - 1);
		}

		if (scroll.horizontal && snapInH && scroll.horizontalNormalizedPosition > 0f && scroll.horizontalNormalizedPosition < 1f)
		{
			targetH = points[target];
			LerpH = true;
		}
		if (scroll.vertical && snapInV && scroll.verticalNormalizedPosition > 0f && scroll.verticalNormalizedPosition < 1f)
		{
			targetH = points[target];
			LerpH = true;
		}

		dragInit = true;
	}

	public void OnDrag()
	{
		if (dragInit)
		{
			dragStartNearest = FindNearest(scroll.horizontalNormalizedPosition, points);
			dragInit = false;
		}

		LerpH = false;
		LerpV = false;
	}

	public void scrollToPage(int pageIndex){
		targetH = points[pageIndex];
		LerpH = true;
	}

	int FindNearest(float f, float[] array)
	{
		float distance = Mathf.Infinity;
		int output = 0;
		for (int index = 0; index < array.Length; index++)
		{
			if (Mathf.Abs(array[index] - f) < distance)
			{
				distance = Mathf.Abs(array[index] - f);
				output = index;
			}
		}
		return output;
	}

	public int getCurrentPage(){
		return FindNearest (targetH, points);
	}


}
