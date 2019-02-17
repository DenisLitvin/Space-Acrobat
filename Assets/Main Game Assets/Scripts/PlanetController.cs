using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlanetController : MonoBehaviour
{
    public GameObject PlanetSpawner;

    [System.NonSerialized]
    public int PlanetId;

    [System.NonSerialized]
    public Transform PlayerTransform;

    private float speed;
    public float MinRotationSpeed = 0.1f;
    public float MaxRotationSpeed = 0.5f;

    private PlanetSpawner planetSpawnerScript;
    private float rotationSpeed;

    public void SetSpeed(float speed)
    {
        this.speed = speed * -(1f/transform.localScale.x);
    }

    void Start()
    {
        planetSpawnerScript = PlanetSpawner.GetComponent<PlanetSpawner>();
        rotationSpeed = Random.Range(MinRotationSpeed, MaxRotationSpeed);
    }

    void FixedUpdate()
    {
        transform.Rotate(new Vector3(0f,0f,rotationSpeed), Space.Self);

        Vector3 delta = Time.deltaTime * speed * -PlayerTransform.forward;
        delta.y = 0f;
        transform.position = transform.position + delta;
    }

    //private void OnCollisionEnter(Collision other)
    //{
    //    if (other.collider.gameObject.tag == "Environment")
    //    {
    //        planetSpawnerScript.ReclaimPlanet(gameObject);
    //    }
    //}

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Boundary")
        {
            planetSpawnerScript.ReclaimPlanet(gameObject);
        }
    }
}
