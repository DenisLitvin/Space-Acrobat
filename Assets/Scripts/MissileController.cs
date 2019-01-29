using UnityEngine;

public class MissileController : MonoBehaviour
{
    public float degreesRotatePerFrame;
    public float speed;
    public Transform playerTransform;

    private Rigidbody rb;

    private void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    private void Update()
    {
        Vector3 toPlayer = (playerTransform.position - rb.transform.position).normalized;
        Vector3 targetRotationAngles = Quaternion.LookRotation(toPlayer).eulerAngles;
        Vector3 currentRotationAngles = rb.rotation.eulerAngles;

        float diff = (targetRotationAngles.y - currentRotationAngles.y + 180f) % 360f - 180f;

        float norm = Mathf.Max(-degreesRotatePerFrame, Mathf.Min(degreesRotatePerFrame, diff < -180f ? diff + 360f : diff));
        float toRotateY = norm + currentRotationAngles.y;

        rb.MoveRotation(Quaternion.Euler
            (
                currentRotationAngles.x,
                toRotateY,
                currentRotationAngles.z
            )
        );

        rb.velocity = rb.transform.forward * speed;
    }
}
