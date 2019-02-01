using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class GameController : MonoBehaviour
{
    public MissileSpawner missileSpawner;

    private int level = 1;

    void Start()
    {
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
