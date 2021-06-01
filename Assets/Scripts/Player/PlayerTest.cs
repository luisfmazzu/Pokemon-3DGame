using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerTest : MonoBehaviour
{
    [SerializeField]
    private CharacterController controller;
    [SerializeField]
    private float normalSpeed = 1f;
    [SerializeField]
    private float runningSpeed = 1.2f;
    [SerializeField]
    private float player_graphics_scale = 425.0f;
    [SerializeField]
    private float turnSmoothTime = 0.1f;
    private float turnSmoothVelocity;
    private Animator animator;
    private bool isRunning = false;

    //private Transform characterParent;
    //private Transform playerTransform;

    void Start()
    {
        animator = GetComponent<Animator>();
    }

    void Update()
    {
        float horizontal = Input.GetAxisRaw("Horizontal");
        float vertical = Input.GetAxisRaw("Vertical");
        isRunning = Input.GetKey(KeyCode.LeftShift);
        Vector3 direction = new Vector3(-horizontal, 0, -vertical).normalized;
        float verticalSpeed = -9.8f;
        float horizontalSpeed = isRunning ? runningSpeed : normalSpeed;

        if (direction.magnitude >= 0.1f)
        {
            float targetAngle = Mathf.Atan2(direction.x, direction.z) * Mathf.Rad2Deg;
            float angle = Mathf.SmoothDampAngle(transform.eulerAngles.y, targetAngle, ref turnSmoothVelocity, turnSmoothTime);
            transform.rotation = Quaternion.Euler(0f, angle, 0f);
        }

        // Updates the animator
        animator.SetFloat("DirX", direction.x);
        animator.SetFloat("DirY", direction.z);
        animator.SetBool("IsRunning", isRunning);

        Vector3 updatedMotion = new Vector3(animator.GetFloat("DirX") * horizontalSpeed, verticalSpeed, animator.GetFloat("DirY") * horizontalSpeed);
        updatedMotion.x /= player_graphics_scale;
        updatedMotion.z /= player_graphics_scale;
        controller.Move(updatedMotion);
    }
}
