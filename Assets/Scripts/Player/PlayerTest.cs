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
    private float player_graphics_scale = 425.0f;
    [SerializeField]
    private float turnSmoothTime = 0.1f;
    private float turnSmoothVelocity;
    private Animator animator;
    private bool isRunning = false;
    
    void Start()
    {
        animator = GetComponentInChildren<Animator>();
    }

    void Update()
    {
        float horizontal = Input.GetAxisRaw("Horizontal");
        float vertical = Input.GetAxisRaw("Vertical");
        Vector3 direction = new Vector3(-horizontal, 0, -vertical).normalized;

        if(direction.magnitude >= 0.1f)
        {
            float targetAngle = Mathf.Atan2(direction.x, direction.z) * Mathf.Rad2Deg;

            transform.rotation = Quaternion.Euler(0f, targetAngle, 0f);
        }

        // Updates the animator
        animator.SetFloat("DirX", direction.x);
        animator.SetFloat("DirY", direction.z);
        //animator.SetBool("isRunning", isRunning);

        Vector3 updatedPos = new Vector3(animator.GetFloat("DirX"), 0, animator.GetFloat("DirY"));
        updatedPos.x /= player_graphics_scale;
        updatedPos.z /= player_graphics_scale;
        controller.Move(updatedPos);
    }
}
