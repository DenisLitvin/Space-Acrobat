using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinSpawner : MonoBehaviour
{
    public Transform playerTransform;

    public GameObject coinPrefab;
    public GameObject incentivePrefab;
    public GameObject signPrefab;

    public float radius;

    private List<GameObject> currentIncentives;

    private void Start()
    {
        currentIncentives = new List<GameObject>();
        StartCoroutine("SpawningCoins");
    }

    private IEnumerator SpawningCoins()
    {
        while (true)
        {
            yield return new WaitForSeconds(10f);
            RemoveCurrentIncentives();
            SpawnCoins(10);
        }
    }

    private void RemoveCurrentIncentives()
    {
        for (int i = 0; i < currentIncentives.Count; i++)
        {
            Destroy(currentIncentives[i]);
        }
    }

    private void SpawnCoins(int num)
    {
        float rand = Random.Range(0f, 2 * Mathf.PI);

        Vector2 vector = new Vector2(Mathf.Sin(rand), Mathf.Cos(rand));
        Vector2 offset = vector * radius;
        Vector3 pos = playerTransform.position + new Vector3(offset.x, 0f, offset.y);
        pos.y = 0f;

        GameObject incentive = Instantiate(incentivePrefab, pos, Quaternion.identity);
        currentIncentives.Add(incentive);

        float coinOffset = 1f;

        for (int i = 0; i < num; i++)
        {
            Vector3 coinPosition = new Vector3(pos.x + i * coinOffset, pos.y, pos.z);
            GameObject obj = Instantiate(coinPrefab, coinPosition, coinPrefab.transform.rotation);
            currentIncentives.Add(obj);
        }
    }
}
