using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IncentiveController : MonoBehaviour
{
    public GameObject signPrefab;

    private GameObject sign;
    private GameObject canvas;

    private void Start()
    {
        canvas = GameObject.FindGameObjectWithTag("Canvas");
        sign = Instantiate(signPrefab, Vector3.zero, Quaternion.identity);
        sign.transform.SetParent(canvas.transform, false);
    }

    private void Update()
    {
        TraceSign();
    }

    private void OnDestroy()
    {
        Destroy(sign);
    }

    private void TraceSign()
    {
        Vector2 screenPoint = Camera.main.WorldToViewportPoint(gameObject.transform.position);

        bool onScreen = screenPoint.x > 0 && screenPoint.x < 1 && screenPoint.y > 0 && screenPoint.y < 1;
        sign.SetActive(!onScreen);

        if (sign.activeSelf)
        {
            RectTransform signRect = sign.GetComponent<RectTransform>();
            RectTransform canvasRect = canvas.GetComponent<RectTransform>();

            float x = Mathf.Max(Mathf.Min(screenPoint.x, 0.93f), 0.07f);
            float y = Mathf.Max(Mathf.Min(screenPoint.y, 0.9f), 0.05f);

            Vector2 screenPosition = new Vector2(
                x * canvasRect.sizeDelta.x,
                y * canvasRect.sizeDelta.y
            );
            signRect.anchoredPosition = screenPosition;
        }
    }
}
