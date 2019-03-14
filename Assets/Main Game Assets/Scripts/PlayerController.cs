using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    [System.NonSerialized]
    public Vector3 MissileTarget;

    public float Speed;
    public float Boost;
    public float Tilt;
    public float MagnetRadius;
    public float Steering;
    public float MissileTargetUpdateThreshold;

    public Joystick Joystick;
    public Transform ScrollHolderTransform;

    public GameObject ExplosionPrefab;

    private Rigidbody rb;
    private GameController gameController;

    private float oldRotationZ;
    private bool isPlaying;
    private float lastMissileTargetSetTime;
    private float boostEnd;

    public void SetPlayingMode(bool isPlaying)
    {
        if (!isPlaying)
        {
            transform.rotation = Quaternion.identity;
        }
        Joystick.joystickMode = JoystickMode.AllAxis;
        Joystick.gameObject.SetActive(isPlaying);
        boostEnd = 0f;
        this.isPlaying = isPlaying;
    }

    private void Start()
    {
        lastMissileTargetSetTime = Time.time;
        rb = GetComponent<Rigidbody>();
        gameController = GameObject.FindGameObjectWithTag("GameController").GetComponent<GameController>();
    }

    private void FixedUpdate()
    {
        Move();
        MagnetCoins();
    }

    private void Move()
    {

        ScrollHolderTransform.position = new Vector3
        (
            transform.position.x,
            ScrollHolderTransform.position.y,
            transform.position.z
        );

        float boost = (boostEnd > Time.time && isPlaying) ? Boost : 0f;
        rb.velocity = transform.forward * (Speed + boost);

        if (!isPlaying) return;

        Vector3 moveVector = (Vector3.right * Joystick.Horizontal + Vector3.forward * Joystick.Vertical);

        Vector3 oldRotation = transform.rotation.eulerAngles;

        if (Time.time - lastMissileTargetSetTime >= MissileTargetUpdateThreshold)
        {
            lastMissileTargetSetTime = Time.time;
            MissileTarget = transform.position + transform.forward * 0.7f;
        }

        if (moveVector != Vector3.zero)
        {
            Vector3 lookRotation = Quaternion.LookRotation(moveVector).eulerAngles;

            float diff = (lookRotation.y - oldRotation.y + 180f) % 360f - 180f;

            float norm = Mathf.Max(-Steering, Mathf.Min(Steering, diff < -180f ? diff + 360f : diff));
            float targetRotationY = norm + oldRotation.y;

            float targetRotationZ = (targetRotationY - oldRotation.y) * -Tilt;
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
                gameController.HandleShipDestroy();
                GameObject explosion = Instantiate(ExplosionPrefab, transform.position, Quaternion.identity);
                Destroy(explosion, 10f);
            }
            else if (other.gameObject.tag == "Coin")
            {
                Destroy(other.gameObject);
                gameController.HandleCoinCollect();
            }
            else if (other.gameObject.tag == "Boost")
            {
                boostEnd = Time.time + 10f;
            }
        }
    }

    private void MagnetCoins()
    {
        Collider[] hitColliders = Physics.OverlapSphere(transform.position, MagnetRadius);
        int i = 0;
        while (i < hitColliders.Length)
        {
            if (hitColliders[i].tag == "Coin")
            {
                Vector3 oldPos = hitColliders[i].gameObject.transform.position;
                Vector3 velocity = (transform.position - oldPos).normalized;
                Vector3 newPos = oldPos + velocity * 10f * Time.deltaTime;
                float scale = (transform.position - newPos).sqrMagnitude / (MagnetRadius * MagnetRadius);
                scale = Mathf.Clamp(scale, 0.2f, 1f);
                hitColliders[i].gameObject.transform.localScale = new Vector3(scale, scale, scale);
                hitColliders[i].gameObject.transform.position = newPos;
            }
            i++;
        }
    }

}
