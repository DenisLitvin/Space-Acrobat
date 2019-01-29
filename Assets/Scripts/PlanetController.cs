using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlanetController : MonoBehaviour
{
    public GameObject planetSpawner;

    public int planetId;

    public float minRotationSpeed = 0.1f;
    public float maxRotationSpeed = 0.5f;

    private PlanetSpawner planetSpawnerScript;
    private float rotationSpeed;

    void Start()
    {
        planetSpawnerScript = planetSpawner.GetComponent<PlanetSpawner>();
        rotationSpeed = Random.Range(minRotationSpeed, maxRotationSpeed);
    }

    void Update()
    {
        transform.Rotate(new Vector3(0f,0f,rotationSpeed), Space.Self);
    }

    private void OnCollisionEnter(Collision other)
    {
        if (other.collider.gameObject.tag == "Environment")
        {
            planetSpawnerScript.ReclaimPlanet(gameObject);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Boundary")
        {
            planetSpawnerScript.ReclaimPlanet(gameObject);
        }
    }
}
