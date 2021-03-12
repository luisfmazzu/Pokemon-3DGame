using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerTest : MonoBehaviour
{
    [SerializeField]
    private CharacterController controller;
    [SerializeField]
    private float speed = 0.6f;
    [SerializeField]
    private float turnSmoothTime = 0.1f;
    private float turnSmoothVelocity;
    private Animator animator;
    private bool isRunning = false;

    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponentInChildren<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        float horizontal = Input.GetAxisRaw("Horizontal");
        float vertical = Input.GetAxisRaw("Vertical");
        Vector3 direction = new Vector3(-horizontal, 0, -vertical).normalized;

        if(direction.magnitude >= 0.1f)
        {
            float targetAngle = Mathf.Atan2(direction.x, direction.z) * Mathf.Rad2Deg;
            float angle = Mathf.SmoothDampAngle(transform.eulerAngles.y, targetAngle, ref turnSmoothVelocity, turnSmoothTime);
            transform.rotation = Quaternion.Euler(0f, targetAngle, 0f);

            Vector3 moveDir = Quaternion.Euler(0f, targetAngle, 0f) * Vector3.forward;
            controller.Move(direction * speed * Time.deltaTime);
        }

        // Updates the animator
        animator.SetFloat("DirX", direction.x);
        animator.SetFloat("DirY", direction.z);
        animator.SetBool("isRunning", isRunning);
    }
}
