using UnityEngine;
using System.Collections.Generic;
using System.Collections;

public class PlanetSpawner : MonoBehaviour
{
    public Transform playerTransform;

    public GameObject[] planetPrefabs;

    public float radius;
    public float spawnAngleInRadians = 1f;

    public float minScale = 0.8f;
    public float maxScale = 1.5f;

    public float speed;

    public int maxPlanetCount = 10;
    public int maxPlanetChacheSize = 5;

    private List<GameObject>[] pools;
    private int planetCount;

    void Awake()
    {
        CreatePools();
        StartCoroutine("SpawnPlanet");
        SpawnInitialPlanets();
    }

    private void SpawnInitialPlanets()
    {
        while (planetCount < maxPlanetCount)
        {
            float randomX = Random.Range(-radius, radius);
            float randomZ = Random.Range(-radius, radius);
            Vector3 position = new Vector3(randomX, 0f, randomZ);
            SpawnPlanetAtPosition(position);
        }
    }

    private void CreatePools()
    {
        pools = new List<GameObject>[planetPrefabs.Length];
        for (int i = 0; i < pools.Length; i++)
        {
            pools[i] = new List<GameObject>();
        }
    }

    void Update()
    {
        Vector3 delta = Time.deltaTime * speed * -playerTransform.forward;
        delta.y = 0f;
        transform.position = transform.position + delta;

        if (planetCount < maxPlanetCount) SpawnPlanet();
    }

    private void SpawnPlanet()
    {
        float x = playerTransform.forward.x;
        float z = playerTransform.forward.z;

        float randomAngle = Random.Range(-spawnAngleInRadians, spawnAngleInRadians);

        float newX = x * Mathf.Cos(randomAngle) - z * Mathf.Sin(randomAngle);
        float newZ = x * Mathf.Sin(randomAngle) + z * Mathf.Cos(randomAngle);

        Vector3 randomPosition = playerTransform.position + new Vector3(newX, 0f, newZ) * radius;
        randomPosition.y = -10f;
        SpawnPlanetAtPosition(randomPosition);
    }

    private void SpawnPlanetAtPosition(Vector3 position)
    {
        Quaternion rotation = Random.rotation;
        float scale = Random.Range(minScale, maxScale);
        int id = Random.Range(0, planetPrefabs.Length - 1);

        GameObject planet = InstantiatePlanet(id);
        planet.transform.position = position;
        planet.transform.rotation = rotation;
        planet.transform.localScale = new Vector3(scale, scale, scale);
        planet.transform.parent = transform;
        PlanetController controller = planet.GetComponent<PlanetController>();
        controller.planetSpawner = gameObject;
        controller.planetId = id;
    }

    public void ReclaimPlanet(GameObject planet)
    {
        planetCount -= 1;

        PlanetController controller = planet.GetComponent<PlanetController>();

        List<GameObject> pool = pools[controller.planetId];
        if (pool.Count >= maxPlanetChacheSize)
        {
        Destroy(planet);
            return;
        }
        planet.SetActive(false);
        pool.Add(planet);
    }

    private GameObject InstantiatePlanet(int idx)
    {
        planetCount += 1;

        if (pools == null)
        {
            CreatePools();
        }

        List<GameObject> pool = pools[idx];
        if (pool.Count > 0)
        {
            GameObject planet = pool[pool.Count - 1];
            planet.SetActive(true);
            pool.RemoveAt(pool.Count - 1);
            return planet;
        }
        return Instantiate(planetPrefabs[idx]);
    }

    private void OnDrawGizmos()
    {
        ////float newX = x * Mathf.Cos(tr) - z * Mathf.Sin(randomAngle);
        ////float newZ = x * Mathf.Sin(randomAngle) + z * Mathf.Cos(randomAngle);
        ////var from = new Vector3newx)
        //Gizmos.DrawLine(transform.position + playerTransform.forward * radius, transform.position);
    }
}
