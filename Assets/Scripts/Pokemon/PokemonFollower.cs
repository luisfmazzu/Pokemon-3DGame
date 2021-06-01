using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class PokemonFollower : MonoBehaviour
{
    [SerializeField]
    private GameObject ThePlayer;
    [SerializeField]
    private GameObject TheFollower;
    [SerializeField]
    private float normalSpeed = 1f;
    [SerializeField]
    private float runningSpeed = 1.2f;
    [SerializeField]
    private float player_graphics_scale = 425.0f;

    public float TargetDistance;
    public float AllowedDistance;

    private Animator            animator;
    private CharacterController followerController;

    private float DistanceToRun;

    private bool isRunning;

    static class Animations
    {
        public const string Idle        = "Motion_0";
        public const string Walking     = "Motion_1";
        public const string Running     = "Motion_3";
    }

    void Start()
    {
        DistanceToRun = AllowedDistance * 1.5f;

        isRunning = false;

        Vector3 followerPos = new Vector3(ThePlayer.transform.position.x - 1, ThePlayer.transform.position.y, ThePlayer.transform.position.z - 1);

        TheFollower = Instantiate(TheFollower, followerPos, ThePlayer.transform.rotation) as GameObject;

        followerController  = TheFollower.GetComponent<CharacterController>();
        animator            = TheFollower.GetComponentInChildren<Animator>();
    }

    void Update()
    {
        float verticalSpeed = -9.8f;

        TargetDistance = Vector3.Distance(ThePlayer.transform.position, TheFollower.transform.position);

        if(TargetDistance >= AllowedDistance)
        {
            TheFollower.transform.LookAt(ThePlayer.transform);

            if((TargetDistance <= DistanceToRun) && (isRunning == false))
            {
                animator.Play(Animations.Walking);
            }
            else
            {
                isRunning = true;

                animator.Play(Animations.Running);
            }

            float horizontalSpeed = isRunning ? runningSpeed : normalSpeed;

            Vector3 norm = (ThePlayer.transform.position - TheFollower.transform.position).normalized;

            Vector3 updatedMotion = new Vector3(norm.x * horizontalSpeed, verticalSpeed, norm.z * horizontalSpeed);
            updatedMotion.x /= player_graphics_scale;
            updatedMotion.z /= player_graphics_scale;
            followerController.Move(updatedMotion);
        }
        else
        {
            animator.Play(Animations.Idle);

            isRunning = false;
        }
    }
}
