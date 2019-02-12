using UnityEngine;

public class BGScroller : MonoBehaviour
{
    public float scrollSpeed;

    private Vector2 savedOffset;
    private Renderer textureRenderer;

    void Start()
    {
        textureRenderer = GetComponent<Renderer>();
        savedOffset = textureRenderer.sharedMaterial.GetTextureOffset("_MainTex");
    }

    void Update()
    {
        float x = Mathf.Repeat(transform.position.x * scrollSpeed, 1);
        float y = Mathf.Repeat(transform.position.z * scrollSpeed, 1);
        Vector2 offset = new Vector2(x, y);
        textureRenderer.sharedMaterial.SetTextureOffset("_MainTex", offset);
    }

    void OnDisable()
    {
        textureRenderer.sharedMaterial.SetTextureOffset("_MainTex", savedOffset);
    }
}