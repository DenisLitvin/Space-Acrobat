using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissileSpawner : MonoBehaviour
{
    public GameObject missilePrefab;
    public GameObject missileExplosionPrefab;

    public Transform playerTransform;
    public float radius;

   public void SpawnMissile(int i)
    {
        Vector2 offset = Random.insideUnitCircle * radius;
        Vector3 pos = playerTransform.position + new Vector3(offset.x, 0f, offset.y);
        Quaternion rot = Quaternion.LookRotation(playerTransform.position - pos, Vector3.up);
        GameObject missile = Instantiate(missilePrefab, pos, rot);
        MissileController controller = missile.GetComponent<MissileController>();
        controller.playerTransform = playerTransform;
        controller.explosionPrefab = missileExplosionPrefab;
    }
}
