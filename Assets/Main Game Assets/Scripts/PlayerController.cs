using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    [System.NonSerialized]
    public Vector3 missileTarget;

    public float speed;
    public float tilt;
    public float degreesRotatePerFrame;
    public float missileTargetUpdateThreshold;

    public Joystick joystick;
    public Transform scrollHolderTransform;

    public GameObject explosionPrefab;

    private Rigidbody rb;
    private GameController gameController;

    private float oldRotationZ;
    private bool isPlaying = false;
    private float lastMissileTargetSetTime;

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
        lastMissileTargetSetTime = Time.time;
        rb = GetComponent<Rigidbody>();
        GameObject[] objs = GameObject.FindGameObjectsWithTag("GameController");
        GameObject controller = objs[0];
        gameController = controller.GetComponent<GameController>();
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

        if (Time.time - lastMissileTargetSetTime >= missileTargetUpdateThreshold)
        {
            lastMissileTargetSetTime = Time.time;
            missileTarget = transform.position + transform.forward * 1f;
        }

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
        if (isPlaying)
        {
            if (other.gameObject.tag == "Missile")
            {
                isPlaying = false;
                gameController.HandleDestroyShip();
                GameObject explosion = Instantiate(explosionPrefab, transform.position, Quaternion.identity);
                Destroy(explosion, 10f);
            }
            else if (other.gameObject.tag == "Coin")
            {
                Destroy(other.gameObject);
                gameController.HandleCoinCollect();
            }
        }
    }
}
