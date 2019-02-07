using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinSpawner : MonoBehaviour
{
    public GameObject coinPrefab;
    public GameObject signPrefab;

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void SpawnCoin()
    {
        float rand = Random.Range(0f, 1f);
        if (rand < 0.2f)
        {
            Instantiate(coinPrefab, transform.position, coinPrefab.transform.rotation);
        }
    }
}
