using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinSpawner : MonoBehaviour
{
    public Transform playerTransform;

    public GameObject coinPrefab;
    public GameObject signPrefab;

    public float radius;

    private void Start()
    {
        StartCoroutine("SpawningCoins");
    }

    private IEnumerator SpawningCoins()
    {
        while (true)
        {
            SpawnCoins(10);
            yield return new WaitForSeconds(10f);
        }
    }

    private void SpawnCoins(int num)
    {
        float rand = Random.Range(0f, 2 * Mathf.PI);

        Vector2 vector = new Vector2(Mathf.Sin(rand), Mathf.Cos(rand));
        Vector2 offset = vector * radius;
        Vector3 pos = playerTransform.position + new Vector3(offset.x, 0f, offset.y);
        pos.y = 0f;

        float coinOffset = 1f;

        for (int i = 0; i < num; i++)
        {
            Vector3 coinPosition = new Vector3(pos.x + i * coinOffset, pos.y, pos.z);
            Instantiate(coinPrefab, coinPosition, coinPrefab.transform.rotation);
        }
    }
}
