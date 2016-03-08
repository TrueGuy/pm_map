﻿using UnityEngine;
using System.Collections;

public class CameraScript : MonoBehaviour {

	private Vector3 rotateAroundPos;

	private Vector2 touch1StartPos;
	private Vector2 touch2StartPos;

	private Vector3 rotateAroundTouchStartPos;

	bool firstTouchInMoveMode = true;
	bool firstTouchInRotateMode = true;

	float phi = 10;
	float theta = 5;
	float phiTouchStart = 0;
	float thetaTouchStart = 0;

	public float zoom = 1f;

	public float cameraDistance = 10f;
	float moveSpeed = 0.05f;
	float rotateSpeed = 1f;
	float zoomSpeed = 0.01f;

	void Awake(){
		rotateAroundPos = new Vector3 (0, 4f, 0);
	}

	void Update () {
		// mouse zooming
		if (Input.GetAxis("Mouse ScrollWheel") > 0) {
			// forward
			zoom += zoomSpeed;
		}

		if (Input.GetAxis("Mouse ScrollWheel") < 0){
			// back
			zoom -= zoomSpeed;
		}
	

		if (hasTouches ()) {
			Vector2 touch1Pos = getTouchPos ();

			if (touchCount() == 1 && !Input.GetKey(KeyCode.LeftCommand)) {
				// moving
				firstTouchInRotateMode = true;

				if (firstTouchInMoveMode) {					
					touch1StartPos = touch1Pos;
					rotateAroundTouchStartPos = rotateAroundPos;
				}else {
					var touchDelta = touch1Pos - touch1StartPos;

					var cameraForwardDirection = (Camera.main.transform.forward-new Vector3(0, Camera.main.transform.forward.y, 0)).normalized;
					var cameraRightDirection = (Camera.main.transform.right-new Vector3(0, Camera.main.transform.right.y, 0)).normalized;
					rotateAroundPos = rotateAroundTouchStartPos 
						- cameraForwardDirection*touchDelta.y*moveSpeed
						- cameraRightDirection*touchDelta.x*moveSpeed;
				}

				Debug.LogWarning("Move"); 

				firstTouchInMoveMode = false;

			} else if(touchCount() == 2 || !touchInput() && Input.GetKey(KeyCode.LeftCommand)) {
				// rotating
				firstTouchInMoveMode = true;

				if (firstTouchInRotateMode) {					
					touch1StartPos = touch1Pos;

					if (touchInput ())
						touch2StartPos = getTouch2Pos ();
					
					phiTouchStart = phi;
					thetaTouchStart = theta;
				}else {
					if (touchInput ()) {
						// rotate and zoom camera with 2 fingers
						Vector2 touch2Pos = getTouch2Pos ();
						var deltaDistance = (touch2Pos - touch1Pos).magnitude - (touch2StartPos - touch1StartPos).magnitude;
						zoom += deltaDistance * zoomSpeed;

						var startCenterPoint = (touch1StartPos + touch2StartPos) / 2f;
						var startVector = touch1StartPos - startCenterPoint;

						var currentCenterPoint = (touch1Pos + touch2Pos) / 2f;
						var currentVector = touch1Pos - currentCenterPoint;
						var deltaDegrees = Vector2.Angle (currentVector, startVector);

						var deltaY = currentCenterPoint.y - startCenterPoint.y;

						phi = phiTouchStart - deltaDegrees*rotateSpeed;

						theta = thetaTouchStart - deltaY * rotateSpeed;

					} else {
						// rotate with mouse
						Debug.LogWarning("Rotate with mouse");
						var touchDelta = touch1Pos - touch1StartPos;
						var deltaYRotation = touchDelta.x * rotateSpeed;
						var deltaXRotation = touchDelta.y * rotateSpeed;

						phi = phiTouchStart - deltaYRotation;
						theta = thetaTouchStart - deltaXRotation;
					}

					if (phi > 360f)
						phi = phi - 360f;
					else if(phi < 0)
						phi = phi + 360f;

					if (theta < 10f)
						theta = 10f;
					else if(theta > 100f)
						theta = 100f;
				}

				firstTouchInRotateMode = false;
			}

		}else{
			firstTouchInMoveMode = true;
			firstTouchInRotateMode = true;
		}


		if (zoom < 0.15f)
			zoom = 0.15f;
		else if (zoom > 1f) {
			zoom = 1f;
		}

		// move camera
		Camera.main.transform.position = rotateAroundPos
			//+ Vector3.up  * cameraHeight
			+ Vector3.right * cameraDistance/zoom * Mathf.Sin (theta / 180 * Mathf.PI) * Mathf.Cos (phi / 180 * Mathf.PI)		
			+ Vector3.forward * cameraDistance/zoom * Mathf.Sin (theta / 180 * Mathf.PI) * Mathf.Sin (phi / 180 * Mathf.PI)
			+ Vector3.up * cameraDistance/zoom * Mathf.Cos (theta / 180 * Mathf.PI);



		/*Vector3 relativePos = rotateAroundPos - Camera.main.transform.position;
		Quaternion lookAtrotation = Quaternion.LookRotation(relativePos);*/

		/*Debug.LogWarning ("CameraPos: " + Camera.main.transform.position.ToString ());
		Debug.LogWarning ("AroundPos: "+rotateAroundPos.ToString());
		Debug.LogWarning ("LookAtRot: "+lookAtrotation.eulerAngles.ToString());*/


		
		Camera.main.transform.LookAt(rotateAroundPos, Vector3.up);
	}

	void OnDrawGizmosSelected() {
		Gizmos.color = Color.yellow;
		Gizmos.DrawSphere(rotateAroundPos, 1);
	}

	protected Vector2 getTouchPos(){
		Vector2 touchPos = Vector2.zero;

		if (Application.platform != RuntimePlatform.IPhonePlayer){
			touchPos = Input.mousePosition;
		} else {
			if(Input.touchCount > 0)
				touchPos = Input.touches[0].position;
		}
		return touchPos;
	}

	protected Vector2 getTouch2Pos(){		
		return Input.touches[1].position;
	}

	protected bool hasTouches(){
		if (Application.platform != RuntimePlatform.IPhonePlayer){
			// use the input stuff
			return Input.GetMouseButton(0);
		} else {			
			return (Input.touchCount > 0);
		}
	}

	protected int touchCount(){
		if (touchInput ())
			return Input.touchCount;
		else
			return Input.GetMouseButton (0)?1:0;
	}

	protected bool touchInput(){
		return (Application.platform == RuntimePlatform.IPhonePlayer || Application.platform == RuntimePlatform.Android);
	}

	// convert screen point to world point
	private Vector2 getWorldPoint (Vector2 screenPoint) {
		RaycastHit hit;
		Physics.Raycast(Camera.main.ScreenPointToRay(screenPoint), out hit);
		return hit.point;
	}
}
