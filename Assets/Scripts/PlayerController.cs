using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public float speed;
    public float tilt;
    public float degreesRotatePerFrame;

    public Joystick joystick;
    public Transform scrollHolderTransform;

    private Rigidbody rb;

    private float oldRotationZ;

    private void Start()
    {
        rb = GetComponent<Rigidbody>();
    }


    void Update()
    {
        Vector3 moveVector = (Vector3.right * joystick.Horizontal + Vector3.forward * joystick.Vertical);

        Vector3 oldRotation = transform.rotation.eulerAngles;

        if (moveVector != Vector3.zero)
        {
            Vector3 lookRotation = Quaternion.LookRotation(moveVector).eulerAngles;

            float diff = (lookRotation.y - oldRotation.y + 180f) % 360f - 180f;

            float norm = Mathf.Max(-degreesRotatePerFrame, Mathf.Min(degreesRotatePerFrame, diff < -180f ? diff + 360f : diff));
            float targetRotationY = norm + oldRotation.y;

            float targetRotationZ = (targetRotationY - oldRotation.y) * -tilt;
            float lerpedTargetRotationZ = Mathf.Lerp(oldRotationZ, targetRotationZ, 0.4f);

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

        scrollHolderTransform.position = new Vector3
        (
            transform.position.x,
            scrollHolderTransform.position.y,
            transform.position.z
        );

        rb.velocity = transform.forward * speed;
    }
}
