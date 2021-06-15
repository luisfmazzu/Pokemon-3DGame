using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class PokemonFollower : MonoBehaviour
{
    #region SerializeFields
        [SerializeField] private GameObject thePlayer;
        [SerializeField] private GameObject theFollower;

        [SerializeField] private float      normalSpeed         = 1f;
        [SerializeField] private float      runningSpeed        = 2.5f;
        [SerializeField] private float      playerGraphicsScale = 20f;
        [SerializeField] private float      allowedDistance     = 2f;
    #endregion

    #region PrivateVariables
        private Animator            animator;

        private CharacterController followerController;

        private float               distanceToRun;

        private bool                isRunning;
    #endregion

    static class Animations
    {
        public const string Idle        = "Motion_0";
        public const string Walking     = "Motion_1";
        public const string Running     = "Motion_3";
    }

    void Start()
    {
        distanceToRun   = (allowedDistance * 1.5f);

        isRunning       = false;

        Vector3 followerPos = new Vector3(thePlayer.transform.position.x - 1, thePlayer.transform.position.y, thePlayer.transform.position.z - 1);

        theFollower = Instantiate(theFollower, followerPos, thePlayer.transform.rotation) as GameObject;
        // the follower object is a child of the object with this script
        theFollower.transform.parent = gameObject.transform;

        followerController  = theFollower.GetComponent<CharacterController>();
        animator            = theFollower.GetComponentInChildren<Animator>();
    }

    void Update()
    {
        float verticalSpeed = -9.8f;

        float TargetDistance = Vector3.Distance(thePlayer.transform.position, theFollower.transform.position);

        if(TargetDistance >= allowedDistance)
        {
            theFollower.transform.LookAt(thePlayer.transform);

            if((TargetDistance <= distanceToRun) && (isRunning == false))
            {
                animator.Play(Animations.Walking);
            }
            else
            {
                isRunning = true;

                animator.Play(Animations.Running);
            }

            float horizontalSpeed = isRunning ? runningSpeed : normalSpeed;

            Vector3 norm = (thePlayer.transform.position - theFollower.transform.position).normalized;

            Vector3 updatedMotion = new Vector3(norm.x * horizontalSpeed, verticalSpeed, norm.z * horizontalSpeed);
            
            updatedMotion.x /= playerGraphicsScale;
            updatedMotion.z /= playerGraphicsScale;
            
            followerController.Move(updatedMotion);
        }
        else
        {
            animator.Play(Animations.Idle);

            isRunning = false;
        }
    }

    public void UpdateFollowerPosition(Vector3 position, Quaternion rotation)
    {
        theFollower.transform.position = position;
        theFollower.transform.rotation = rotation;
    }
}
