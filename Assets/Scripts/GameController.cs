using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class GameController : MonoBehaviour
{
    public GameObject[] spaceshipPrefabs;

    public GameObject player;
    public MissileSpawner missileSpawner;

    private int level = 1;

    void Start()
    {
        int rand = Random.Range(0, spaceshipPrefabs.Length - 1);
        GameObject shipPrefab = spaceshipPrefabs[rand];
        GameObject ship = Instantiate(shipPrefab, shipPrefab.transform.position, shipPrefab.transform.rotation);
        ship.transform.parent = player.transform;

        Application.targetFrameRate = 60;
        StartCoroutine("SpawnMissiles");
    }

    IEnumerator SpawnMissiles()
    {
        while (true)
        {
            missileSpawner.SpawnMissile(level);
            level += 1;
            yield return new WaitForSeconds(10f);
        }
    }

    void Update()
    {

    }
}
