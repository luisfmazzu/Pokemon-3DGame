using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class PokemonFollower : MonoBehaviour
{
    public GameObject ThePlayer;
    public GameObject ThePokemon;

    public float TargetDistance;
    public float AllowedDistance;    
    public float FollowSpeed;

    public Animator animator;

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
    }

    void Update()
    {
        //Vector3 direction = ThePlayer.transform.position - transform.position;
        TargetDistance = Vector3.Distance(ThePlayer.transform.position, transform.position);

        if(TargetDistance >= AllowedDistance)
        {
            transform.LookAt(ThePlayer.transform);

            if((TargetDistance <= DistanceToRun) && (isRunning == false))
            {
                FollowSpeed = 0.00125f;

                animator.Play(Animations.Walking);
            }
            else
            {
                isRunning = true;

                FollowSpeed = 0.0025f;

                animator.Play(Animations.Running);
            }

            transform.position = Vector3.MoveTowards(transform.position, ThePlayer.transform.position, FollowSpeed);
        }
        else
        {
            FollowSpeed = 0.0f;

            animator.Play(Animations.Idle);

            isRunning = false;
        }
    }
}
