using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    #region SerializeFields
    [SerializeField] private float normalSpeed = 1f;
    [SerializeField] private float runningSpeed = 2.5f;
    [SerializeField] private float playerGraphicsScale = 20f;
    [SerializeField] private float turnSmoothTime = 0.1f;
    #endregion

    #region PrivateVariables
    private Player player;

    private CharacterController controller;

    private Animator animator;

    private float turnSmoothVelocity;

    private bool isRunning = false;

    private string CurrentAreaTransitionName = "";
    #endregion

    #region GettersAndSetters
    public string GetCurrentAreaTransitionName()
    {
        return CurrentAreaTransitionName;
    }

    public void SetCurrentAreaTransitionName(string CurrentAreaTransitionName)
    {
        this.CurrentAreaTransitionName = CurrentAreaTransitionName;
    }
    #endregion

    private void Awake()
    {
        this.player = Player.Instance;

        this.controller = GetComponent<CharacterController>();
        this.animator   = GetComponent<Animator>();
    }

    IEnumerator Start()
    {
        yield return StartCoroutine(this.player.IsReady()); // Don't do anything until the end of the playerInfo.IsReady() function (this function only GUARANTEE that our Player Class finishes before this one

        controller.Move(this.player.playerPosition);
    }

    void Update()
    {
        isRunning = Input.GetKey(KeyCode.LeftShift);

        float horizontal        = Input.GetAxisRaw("Horizontal");
        float vertical          = Input.GetAxisRaw("Vertical");
        float verticalSpeed     = -9.8f;
        float horizontalSpeed   = isRunning ? runningSpeed : normalSpeed;

        Vector3 direction = new Vector3(-horizontal, 0, -vertical).normalized;

        if(direction.magnitude >= 0.1f)
        {
            float targetAngle   = Mathf.Atan2(direction.x, direction.z) * Mathf.Rad2Deg;
            float angle         = Mathf.SmoothDampAngle(transform.eulerAngles.y, targetAngle, ref turnSmoothVelocity, turnSmoothTime);

            transform.rotation  = Quaternion.Euler(0f, angle, 0f);
        }

        // Update the animator
        animator.SetFloat("DirX", direction.x);
        animator.SetFloat("DirY", direction.z);
        animator.SetBool("IsRunning", isRunning);

        Vector3 updatedMotion = new Vector3(animator.GetFloat("DirX") * horizontalSpeed, verticalSpeed, animator.GetFloat("DirY") * horizontalSpeed);

        updatedMotion.x /= playerGraphicsScale;
        updatedMotion.z /= playerGraphicsScale;

        controller.Move(updatedMotion);
    }
}
