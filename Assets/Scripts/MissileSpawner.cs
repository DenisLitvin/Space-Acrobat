using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissileSpawner : MonoBehaviour
{
    public Canvas canvas;

    public GameObject signPrefab;
    public GameObject missilePrefab;
    public GameObject missileExplosionPrefab;

    public Transform playerTransform;
    public float radius;

   public void SpawnMissile(int num)
    {
        for (int i = 0; i < num; i++)
        {
            float rand = Random.Range(0f, 2 * Mathf.PI);

            Vector2 vector = new Vector2(Mathf.Sin(rand), Mathf.Cos(rand));
            Vector2 offset = vector * radius;
            Vector3 pos = playerTransform.position + new Vector3(offset.x, 0f, offset.y);
            Quaternion rot = Quaternion.LookRotation(playerTransform.position - pos, Vector3.up);

            GameObject missile = Instantiate(missilePrefab, pos, rot);

            MissileController controller = missile.GetComponent<MissileController>();
            controller.playerTransform = playerTransform;
            controller.explosionPrefab = missileExplosionPrefab;
            GameObject sign = Instantiate(signPrefab, Vector3.zero, Quaternion.identity);
            sign.transform.SetParent(canvas.transform, false);
            controller.sign = sign;
            controller.canvas = canvas;
        }
    }
}
