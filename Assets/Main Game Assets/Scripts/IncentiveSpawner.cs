using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IncentiveSpawner : MonoBehaviour
{
    public Transform playerTransform;

    public GameObject[] incentivePrefabs;

    public float radius;

    private List<GameObject> currentIncentives;

    private void Start()
    {
        currentIncentives = new List<GameObject>();
    }

    public void SpawnIncentive()
    {
        RemoveCurrentIncentives();

        float rand = Random.Range(0f, 2 * Mathf.PI);

        Vector2 vector = new Vector2(Mathf.Sin(rand), Mathf.Cos(rand));
        Vector2 offset = vector * radius;
        Vector3 pos = playerTransform.position + new Vector3(offset.x, 0f, offset.y);
        pos.y = 0f;

        int randIncentive = Random.Range(0, incentivePrefabs.Length - 1);
        GameObject incentive = Instantiate(incentivePrefabs[randIncentive], pos, Quaternion.identity);
        currentIncentives.Add(incentive);
    }

    private void RemoveCurrentIncentives()
    {
        for (int i = 0; i < currentIncentives.Count; i++)
        {
            Destroy(currentIncentives[i]);
        }
        currentIncentives.Clear();
    }
}
