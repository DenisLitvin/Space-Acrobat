﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public float speed;
    public float tilt;
    public float degreesRotatePerFrame;

    public Joystick joystick;
    public Transform scrollHolderTransform;

    public GameObject explosionPrefab;

    private Rigidbody rb;

    private float oldRotationZ;
    private bool isPlaying = false;

    public void SetPlayingMode(bool isPlaying)
    {
        if (!isPlaying)
        {
            transform.rotation = Quaternion.identity;
        }
        joystick.joystickMode = JoystickMode.AllAxis;
        joystick.gameObject.SetActive(isPlaying);
        this.isPlaying = isPlaying;
    }

    private void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    private void FixedUpdate()
    {

        scrollHolderTransform.position = new Vector3
        (
            transform.position.x,
            scrollHolderTransform.position.y,
            transform.position.z
        );

        rb.velocity = transform.forward * speed;

        if (!isPlaying) return;

        Vector3 moveVector = (Vector3.right * joystick.Horizontal + Vector3.forward * joystick.Vertical);

        Vector3 oldRotation = transform.rotation.eulerAngles;

        if (moveVector != Vector3.zero)
        {
            Vector3 lookRotation = Quaternion.LookRotation(moveVector).eulerAngles;

            float diff = (lookRotation.y - oldRotation.y + 180f) % 360f - 180f;

            float norm = Mathf.Max(-degreesRotatePerFrame, Mathf.Min(degreesRotatePerFrame, diff < -180f ? diff + 360f : diff));
            float targetRotationY = norm + oldRotation.y;

            float targetRotationZ = (targetRotationY - oldRotation.y) * -tilt;
            float lerpedTargetRotationZ = Mathf.Lerp(oldRotationZ, targetRotationZ, 0.05f);

            oldRotationZ = lerpedTargetRotationZ;
            rb.MoveRotation(Quaternion.Euler
            (
                0f,
                targetRotationY,
                lerpedTargetRotationZ
            ));
        }
        else
        {
            float lerpedTargetRotationZ = Mathf.Lerp(oldRotationZ, 0f, 0.4f);
            oldRotationZ = lerpedTargetRotationZ;

            rb.MoveRotation(Quaternion.Euler
            (
                0f,
                oldRotation.y,
                lerpedTargetRotationZ
            ));
        }

    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Missile")
        {
            GameObject[] objs = GameObject.FindGameObjectsWithTag("GameController");
            GameObject gameController = objs[0];
            GameController controllerScript = gameController.GetComponent<GameController>();
            controllerScript.HandleDestroyShip();
            Instantiate(explosionPrefab, transform.position, Quaternion.identity);
        }

    }
}
