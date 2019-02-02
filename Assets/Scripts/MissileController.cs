using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissileController : MonoBehaviour
{
    public GameObject explosionPrefab;
    public Transform playerTransform;

    public float degreesRotatePerFrame;
    public float speed;
    public float magnetSpeed;
    public float magnetRadius;


    private Rigidbody rb;

    private void FixedUpdate()
    {
        rb = GetComponent<Rigidbody>();
        Vector3 toPlayer = (playerTransform.position - rb.transform.position).normalized;
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

        rb.velocity = rb.transform.forward * speed;

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
            Instantiate(explosionPrefab, transform.position, Quaternion.identity);
        }
    }
}
