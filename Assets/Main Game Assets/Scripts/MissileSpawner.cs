using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissileSpawner : MonoBehaviour
{

    public GameObject missilePrefab;

    public Transform playerTransform;
    public float radius;

    private int missilesToSpawn;

    public void SpawnMissiles(int num)
    {
        missilesToSpawn = num;
        StartCoroutine("Spawning");
    }

    public void StopSpawning()
    {
        StopCoroutine("Spawning");
    }

    private IEnumerator Spawning()
    {
        while (true)
        {
            if (missilesToSpawn != 0)
            {
                float rand = Random.Range(0f, 2 * Mathf.PI);

                Vector2 vector = new Vector2(Mathf.Sin(rand), Mathf.Cos(rand));
                Vector2 offset = vector * radius;
                Vector3 pos = playerTransform.position + new Vector3(offset.x, 0f, offset.y);
                pos.y = 0f;
                Quaternion rot = Quaternion.LookRotation(playerTransform.position - pos, Vector3.up);

                GameObject missile = Instantiate(missilePrefab, pos, rot);

                MissileController controller = missile.GetComponent<MissileController>();
                controller.playerController = playerTransform.GetComponent<PlayerController>();
                missilesToSpawn -= 1;
            }
            yield return new WaitForSeconds(Random.Range(0.5f, 1f));
        }
    }
}
