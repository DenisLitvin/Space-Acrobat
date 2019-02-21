using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinsIncentiveController : IncentiveController
{
    public GameObject coinPrefab;

    public override void CreateIncentive()
    {
        float coinOffset = 1f;

        float randRows = Random.Range(2, 10);
        float randColumns = Random.Range(2, 10);
        for (int r = 0; r < randRows; r++)
        {
            for (int c = 0; c < randColumns; c++)
            {
                Vector3 coinPosition = new Vector3
                (
                    transform.position.x - randRows / 2 + r * coinOffset,
                    transform.position.y,
                    transform.position.z - randColumns / 2 + c * coinOffset
                );
                GameObject obj = Instantiate(coinPrefab, coinPosition, coinPrefab.transform.rotation);
                obj.transform.SetParent(transform, true);
            }
        }
    }

    public override bool ShouldShowSign()
    {
        return transform.childCount > 0;
    }
}
