using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissileController : MonoBehaviour
{
    public PlayerController playerController;

    public GameObject signPrefab;
    public GameObject coinPrefab;
    public GameObject explosionPrefab;

    public float degreesRotatePerFrame;
    public float speed;
    public float magnetSpeed;
    public float magnetRadius;

    private GameObject sign;
    private GameObject canvas;
    private Rigidbody rb;

    private void Start()
    {
        canvas = GameObject.FindGameObjectWithTag("Canvas");
        sign = Instantiate(signPrefab, Vector3.zero, Quaternion.identity);
        sign.transform.SetParent(canvas.transform, false);
    }

    public void Destroy()
    {
        int i = 0;
        while (i < gameObject.transform.childCount)
        {
            float delay = 0f;
            Transform child = gameObject.transform.GetChild(i);
            if (child.tag == "Particle") delay = 3f;
            Destroy(child.gameObject, delay);
            i++;
        }
        gameObject.transform.DetachChildren();
        Destroy(gameObject);
        Destroy(sign);
        Instantiate(explosionPrefab, transform.position, Quaternion.identity);
    }

    private void FixedUpdate()
    {
        Rotate();
        MagnetMissiles();
        TraceSign();
        rb.velocity = rb.transform.forward * speed;
    }

    private void TraceSign()
    {
        Vector2 screenPoint = Camera.main.WorldToViewportPoint(gameObject.transform.position);

        bool onScreen = screenPoint.x > 0 && screenPoint.x < 1 && screenPoint.y > 0 && screenPoint.y < 1;
        sign.SetActive(!onScreen);

        if (sign.activeSelf)
        {
            RectTransform signRect = sign.GetComponent<RectTransform>();
            RectTransform canvasRect = canvas.GetComponent<RectTransform>();

            float x = Mathf.Max(Mathf.Min(screenPoint.x, 0.93f), 0.07f);
            float y = Mathf.Max(Mathf.Min(screenPoint.y, 0.9f), 0.05f);

            Vector2 screenPosition = new Vector2(
                x * canvasRect.sizeDelta.x,
                y * canvasRect.sizeDelta.y
            );
            signRect.anchoredPosition = screenPosition;
        }
    }

    private void Rotate()
    {
        rb = GetComponent<Rigidbody>();
        Vector3 toPlayer = (playerController.missileTarget - rb.transform.position).normalized;
        Vector3 lookRotation = Quaternion.LookRotation(toPlayer).eulerAngles;
        Vector3 oldRotation = rb.rotation.eulerAngles;

        float diff = (lookRotation.y - oldRotation.y + 180f) % 360f - 180f;

        float norm = Mathf.Max(-degreesRotatePerFrame, Mathf.Min(degreesRotatePerFrame, diff < -180f ? diff + 360f : diff));
        float toRotateY = norm + oldRotation.y;

        rb.MoveRotation(Quaternion.Euler
            (
                oldRotation.x,
                toRotateY,
                oldRotation.z
            )
        );
    }

    private void MagnetMissiles()
    {
        Collider[] hitColliders = Physics.OverlapSphere(transform.position, magnetRadius);
        int i = 0;
        while (i < hitColliders.Length)
        {
            if (hitColliders[i].tag == "Missile" && hitColliders[i].gameObject != gameObject)
            {
                Vector3 oldPos = hitColliders[i].gameObject.transform.position;
                Vector3 velocity = (transform.position - oldPos).normalized;
                Vector3 newPos = oldPos + velocity * magnetSpeed * Time.deltaTime;
                hitColliders[i].gameObject.transform.position = newPos;
            }
            i++;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Missile")
        {
            Destroy();
            SpawnCoin();
        }
    }

    private void SpawnCoin()
    {
        float rand = Random.Range(0f, 1f);
        if (rand < 0.99f)
        {
            Instantiate(coinPrefab, transform.position, coinPrefab.transform.rotation);
        }
    }
}
