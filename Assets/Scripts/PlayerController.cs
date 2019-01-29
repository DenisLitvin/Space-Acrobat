using UnityEngine;

//[System.Serializable]
//public class Done_Boundary
//{
//    public float xMin, xMax, zMin, zMax;
//}

public class PlayerController : MonoBehaviour
{
    public float speed;
    public float tilt;

    public Transform scrollHolderTransform;

    private Rigidbody rb;

    private void Start()
    {
        rb = GetComponent<Rigidbody>();
    }


    void FixedUpdate()
    {
        float moveHorizontal = Input.GetAxis("Horizontal");
        float moveVertical = Input.GetAxis("Vertical");

        float y = rb.rotation.eulerAngles.y;

        Quaternion rotation = Quaternion.Euler
        (
            0.0f,
            moveHorizontal * 3 + y,
            moveHorizontal * -tilt
        );

        rb.rotation = rotation;

        scrollHolderTransform.position = new Vector3
        (
            rb.transform.position.x,
            scrollHolderTransform.position.y,
            rb.transform.position.z
        );

        rb.velocity = rb.transform.forward * speed;
    }
}
