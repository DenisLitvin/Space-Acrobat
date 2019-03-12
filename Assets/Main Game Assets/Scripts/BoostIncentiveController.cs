using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoostIncentiveController : IncentiveController
{
    public override void CreateIncentive()
    {
    }

    public override bool ShouldShowSign()
    {
        return true;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            Destroy(gameObject);

        }
    }
}
