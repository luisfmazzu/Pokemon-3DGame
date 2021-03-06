using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class PokemonFollower : MonoBehaviour
{
    #region SerializeFields
        [SerializeField] private GameObject thePlayer;

        [SerializeField] private float      normalSpeed         = 1f;
        [SerializeField] private float      runningSpeed        = 2.5f;
        [SerializeField] private float      playerGraphicsScale = 20f;
        [SerializeField] private float      allowedDistance     = 2f;
    #endregion

    #region PrivateVariables
        private Animator            animator;

        private CharacterController followerController;

        private float               distanceToRun;

        private float               distanceToStartFollow;

        private bool                isRunning;

        private FSM                 fsm;

        private GameObject          followerInstance;

        private PlayerInfo          playerInfo;
    #endregion

    #region Enums
        private enum FSM
        {
            Idle,
            FollowTarget
        }
    #endregion

    private void Awake()
    {
        this.playerInfo = PlayerManager.Instance.PlayerInfo;

        this.distanceToRun          = (allowedDistance * 2.0f);
        this.distanceToStartFollow  = (allowedDistance * 1.5f);
        this.isRunning              = false;
        this.fsm                    = FSM.Idle;
        this.followerInstance       = null;
    }

    void Start()
    {
        this.playerInfo.setFollowerInstance(this);
    }

    void Update()
    {
        if (this.followerInstance != null)
        {
            float verticalSpeed = -9.8f;

            float TargetDistance = Vector3.Distance(thePlayer.transform.position, this.followerInstance.transform.position);

            if(this.fsm == FSM.Idle)
            {
                if(TargetDistance >= distanceToStartFollow)
                {
                    this.fsm = FSM.FollowTarget;
                }
            }
            else if(this.fsm == FSM.FollowTarget)
            {
                if(TargetDistance >= allowedDistance)
                {
                    this.followerInstance.transform.LookAt(thePlayer.transform);

                    if((TargetDistance <= distanceToRun) && (!isRunning))
                    {
                        animator.Play(PokemonAnimations.animationsDict["Walking"]);
                    }
                    else if(!isRunning)
                    {
                        isRunning = true;

                        animator.Play(PokemonAnimations.animationsDict["Running"]);
                    }

                    float horizontalSpeed = isRunning ? runningSpeed : normalSpeed;

                    Vector3 norm = (thePlayer.transform.position - this.followerInstance.transform.position).normalized;

                    Vector3 updatedMotion = new Vector3(norm.x * horizontalSpeed, verticalSpeed, norm.z * horizontalSpeed);

                    updatedMotion.x /= playerGraphicsScale;
                    updatedMotion.z /= playerGraphicsScale;

                    followerController.Move(updatedMotion);
                }
                else
                {
                    this.fsm = FSM.Idle;

                    animator.Play(PokemonAnimations.animationsDict["Idle"]);

                    isRunning = false;
                }
            }
        }
    }

    public void CreateFollower(GameObject theFollower)
    {
        Vector3 followerPos = new Vector3(this.thePlayer.transform.position.x - 1, this.thePlayer.transform.position.y, this.thePlayer.transform.position.z - 1);

        this.followerInstance = Instantiate(theFollower, followerPos, this.thePlayer.transform.rotation) as GameObject;

        this.followerInstance.name  = this.followerInstance.name.Replace("(Clone)", "").Trim();

        this.followerController     = this.followerInstance.GetComponent<CharacterController>();
        this.animator               = this.followerInstance.GetComponentInChildren<Animator>();
    }

    public void RemoveFollower()
    {
        Destroy(this.followerInstance);
    }

    public void SwitchFollower(GameObject theFollower)
    {
        this.RemoveFollower();
        this.CreateFollower(theFollower);
    }

    public void UpdateFollowerPosition(Vector3 position, Quaternion rotation)
    {
        if (this.followerInstance != null)
        {
            this.followerInstance.transform.position = position;
            this.followerInstance.transform.rotation = rotation;
        }
    }
}
