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

        private FSM                 fsm;

        private GameObject          followerInstance;

        private PlayerInfo          playerInfo;

        private Pokemon             pokemon;
    #endregion

    #region Enums
        private enum FSM
        {
            Idle,
            MovingSlow,
            MovingFast,
            Reacting,
            Jumping,
            JumpRunning
        }
    #endregion

    #region Unity Overriden Methods
        private void Awake()
        {
            this.playerInfo = PlayerManager.Instance.PlayerInfo;

            this.distanceToRun          = (allowedDistance * 2.0f);
            this.distanceToStartFollow  = (allowedDistance * 1.5f);
            this.fsm                    = FSM.Idle;

            this.ResetFollower();
        }

        void Start()
        {
            this.playerInfo.setFollowerInstance(this);
        }

        void Update()
    {
        if(this.followerInstance != null)
        {
            switch(this.fsm)
            {
                case FSM.Idle:
                    this.HandleIdleState();
                    break;
                
                case FSM.MovingSlow:
                    this.HandleMovingSlowState();
                    break;
                
                case FSM.MovingFast:
                    this.HandleMovingFastState();
                    break;
                
                case FSM.Reacting:
                    this.HandleReactingState();
                    break;
                
                case FSM.Jumping:
                    this.HandleJumpingState();
                    break;
                
                case FSM.JumpRunning:
                    this.HandleJumpRunningState();
                    break;
            }
        }
    }
    #endregion

    #region Finite State Machine Handler Methods
        private void HandleIdleState()
        {
            PokemonEnums.MovementTypes pokemonMovementType = SystemManager.Instance.PokemonData.pokemonSpecies.RetrievePokemonSpecie(this.pokemon.speciesID).movement_type;

            switch(pokemonMovementType)
            {
                case PokemonEnums.MovementTypes.GroundWhenIdleAndFlyingOtherwise:
                case PokemonEnums.MovementTypes.GroundWhenIdleAndSlowlyMovingFlyingOtherwise:
                case PokemonEnums.MovementTypes.AlwaysOnTheGround:
                case PokemonEnums.MovementTypes.AlwaysFlying:
                {
                    this.DoCheckIdleState();

                    break;
                }
            }
        }

        private void HandleMovingSlowState()
        {
            PokemonEnums.MovementTypes pokemonMovementType = SystemManager.Instance.PokemonData.pokemonSpecies.RetrievePokemonSpecie(this.pokemon.speciesID).movement_type;

            // Dont need to consider y direction
            Vector3 playerPos = new Vector3(thePlayer.transform.position.x, 0, thePlayer.transform.position.z);
            Vector3 pokemonPos = new Vector3(followerInstance.transform.position.x, 0, followerInstance.transform.position.z);

            float TargetDistance = Vector3.Distance(playerPos, pokemonPos);

            switch(pokemonMovementType)
            {
                case PokemonEnums.MovementTypes.GroundWhenIdleAndSlowlyMovingFlyingOtherwise:
                case PokemonEnums.MovementTypes.AlwaysOnTheGround:
                {
                    float verticalSpeed = -9.8f;

                    if(TargetDistance > distanceToRun)
                    {
                        this.fsm = FSM.MovingFast;

                        animator.Play(PokemonAnimations.overWorldnimationsDict[PokemonAnimations.AnimationNames.MOVING_FAST]);
                    }
                    else if(TargetDistance >= allowedDistance)
                    {
                        this.followerInstance.transform.LookAt(thePlayer.transform);

                        Vector3 norm = (thePlayer.transform.position - this.followerInstance.transform.position).normalized;

                        Vector3 updatedMotion = new Vector3(norm.x * normalSpeed / playerGraphicsScale, verticalSpeed, norm.z * normalSpeed / playerGraphicsScale);

                        followerController.Move(updatedMotion);
                    }
                    else
                    {
                        animator.Play(PokemonAnimations.overWorldnimationsDict[PokemonAnimations.AnimationNames.IDLE]);

                        this.fsm = FSM.Idle;
                    }

                    break;
                }

                case PokemonEnums.MovementTypes.AlwaysFlying:
                {
                    if (TargetDistance > distanceToRun)
                    {
                        this.fsm = FSM.MovingFast;

                        animator.Play(PokemonAnimations.overWorldnimationsDict[PokemonAnimations.AnimationNames.MOVING_FAST]);
                    }
                    else if(TargetDistance >= allowedDistance)
                    {
                        this.followerInstance.transform.LookAt(thePlayer.transform);

                        Vector3 norm = (playerPos - pokemonPos).normalized;

                        Vector3 updatedMotion = new Vector3(norm.x * normalSpeed / playerGraphicsScale, 0, norm.z * normalSpeed / playerGraphicsScale);

                        followerController.Move(updatedMotion);

                        followerController.transform.position = new Vector3(followerController.transform.position.x, 2, followerController.transform.position.z);
                    }
                    else
                    {
                        this.followerInstance.transform.LookAt(new Vector3(thePlayer.transform.position.x, this.followerInstance.transform.position.y, thePlayer.transform.position.z));

                        animator.Play(PokemonAnimations.overWorldnimationsDict[PokemonAnimations.AnimationNames.IDLE]);

                        this.fsm = FSM.Idle;
                    }

                    break;
                }

                case PokemonEnums.MovementTypes.GroundWhenIdleAndFlyingOtherwise:
                {
                    if(TargetDistance > distanceToRun)
                    {
                        this.fsm = FSM.MovingFast;

                        animator.Play(PokemonAnimations.overWorldnimationsDict[PokemonAnimations.AnimationNames.MOVING_FAST]);
                    }
                    else if(TargetDistance >= allowedDistance)
                    {
                        if(followerController.transform.position.y < 2.0f)
                        {
                            followerController.transform.position = new Vector3(followerController.transform.position.x, followerController.transform.position.y + (Time.deltaTime * 2), followerController.transform.position.z);
                        }
                        else
                        { 
                            this.followerInstance.transform.LookAt(thePlayer.transform);

                            Vector3 norm = (playerPos - pokemonPos).normalized;

                            Vector3 updatedMotion = new Vector3(norm.x * normalSpeed / playerGraphicsScale, 0, norm.z * normalSpeed / playerGraphicsScale);

                            followerController.Move(updatedMotion);

                            followerController.transform.position = new Vector3(followerController.transform.position.x, 2, followerController.transform.position.z);
                        }
                    }
                    else
                    {
                        this.followerInstance.transform.LookAt(new Vector3(thePlayer.transform.position.x, this.followerInstance.transform.position.y, thePlayer.transform.position.z));

                        if(followerController.transform.position.y > 0)
                        {
                            followerController.transform.position = new Vector3(followerController.transform.position.x, followerController.transform.position.y - (Time.deltaTime * 2), followerController.transform.position.z);
                        }
                        else
                        { 
                            animator.Play(PokemonAnimations.overWorldnimationsDict[PokemonAnimations.AnimationNames.IDLE]);

                            this.fsm = FSM.Idle;
                        }
                    }

                    break;
                }
            }
        }

        private void HandleMovingFastState()
        {
            PokemonEnums.MovementTypes pokemonMovementType = SystemManager.Instance.PokemonData.pokemonSpecies.RetrievePokemonSpecie(this.pokemon.speciesID).movement_type;

            Vector3 playerPos = new Vector3(thePlayer.transform.position.x, 0, thePlayer.transform.position.z);
            Vector3 pokemonPos = new Vector3(followerInstance.transform.position.x, 0, followerInstance.transform.position.z);

            float TargetDistance = Vector3.Distance(playerPos, pokemonPos);

            switch(pokemonMovementType)
            {
                case PokemonEnums.MovementTypes.AlwaysOnTheGround:
                {
                    float verticalSpeed = -9.8f;

                    if (TargetDistance >= allowedDistance)
                    {
                        this.followerInstance.transform.LookAt(thePlayer.transform);

                        Vector3 norm = (thePlayer.transform.position - this.followerInstance.transform.position).normalized;

                        Vector3 updatedMotion = new Vector3(norm.x * runningSpeed, verticalSpeed, norm.z * runningSpeed);

                        updatedMotion.x /= playerGraphicsScale;
                        updatedMotion.z /= playerGraphicsScale;

                        followerController.Move(updatedMotion);
                    }
                    else
                    {
                        animator.Play(PokemonAnimations.overWorldnimationsDict[PokemonAnimations.AnimationNames.IDLE]);

                        this.fsm = FSM.Idle;
                    }

                    break;
                }

                case PokemonEnums.MovementTypes.AlwaysFlying:
                {
                    if(TargetDistance >= allowedDistance)
                    {
                        this.followerInstance.transform.LookAt(thePlayer.transform);

                        Vector3 norm = (thePlayer.transform.position - this.followerInstance.transform.position).normalized;

                        Vector3 updatedMotion = new Vector3(norm.x * runningSpeed / playerGraphicsScale, 0, norm.z * runningSpeed / playerGraphicsScale);

                        followerController.Move(updatedMotion);

                        followerController.transform.position = new Vector3(followerController.transform.position.x, 2, followerController.transform.position.z);
                    }
                    else
                    {
                        this.followerInstance.transform.LookAt(new Vector3(thePlayer.transform.position.x, this.followerInstance.transform.position.y, thePlayer.transform.position.z));

                        animator.Play(PokemonAnimations.overWorldnimationsDict[PokemonAnimations.AnimationNames.IDLE]);

                        this.fsm = FSM.Idle;
                    }

                    break;
                }

                case PokemonEnums.MovementTypes.GroundWhenIdleAndSlowlyMovingFlyingOtherwise:
                case PokemonEnums.MovementTypes.GroundWhenIdleAndFlyingOtherwise:
                {
                    if(TargetDistance >= allowedDistance)
                    {
                        if(followerController.transform.position.y < 2.0f)
                        {
                            followerController.transform.position = new Vector3(followerController.transform.position.x, followerController.transform.position.y + (Time.deltaTime * 2), followerController.transform.position.z);
                        }
                        else
                        {
                            this.followerInstance.transform.LookAt(thePlayer.transform);

                            Vector3 norm = (playerPos - pokemonPos).normalized;

                            Vector3 updatedMotion = new Vector3(norm.x * runningSpeed / playerGraphicsScale, 0, norm.z * runningSpeed / playerGraphicsScale);

                            followerController.Move(updatedMotion);

                            followerController.transform.position = new Vector3(followerController.transform.position.x, 2, followerController.transform.position.z);
                        }
                    }
                    else
                    {
                        this.followerInstance.transform.LookAt(new Vector3(thePlayer.transform.position.x, this.followerInstance.transform.position.y, thePlayer.transform.position.z));

                        if (followerController.transform.position.y > 0)
                        {
                            followerController.transform.position = new Vector3(followerController.transform.position.x, followerController.transform.position.y - (Time.deltaTime * 2), followerController.transform.position.z);
                        }
                        else
                        {
                            animator.Play(PokemonAnimations.overWorldnimationsDict[PokemonAnimations.AnimationNames.IDLE]);

                            this.fsm = FSM.Idle;
                        }
                    }

                    break;
                }
            }
        }

        private void HandleReactingState()
        {

        }

        private void HandleJumpingState()
        {

        }

        private void HandleJumpRunningState()
        {

        }
    #endregion

    #region  Finite State Machine Process Methods
        private void DoCheckIdleState()
        {
            Vector3 playerPos = new Vector3(thePlayer.transform.position.x, 0, thePlayer.transform.position.z);
            Vector3 pokemonPos = new Vector3(followerInstance.transform.position.x, 0, followerInstance.transform.position.z);

            float targetDistance = Vector3.Distance(playerPos, pokemonPos);
            
            if(targetDistance >= distanceToStartFollow)
            {
                animator.Play(PokemonAnimations.overWorldnimationsDict[PokemonAnimations.AnimationNames.MOVING_SLOW]);

                this.fsm = FSM.MovingSlow;
            }
        }
    #endregion

    #region Follower Controller Methods
    private void ResetFollower()
        {
            this.followerInstance   = null;
            this.pokemon            = null;
            this.followerController = null;
        }

        public void CreateFollower(GameObject theFollower, Pokemon _pokemon)
        {
            this.pokemon = _pokemon;

            Vector3 followerPos = Vector3.zero;

            PokemonEnums.MovementTypes pokemonMovementType = SystemManager.Instance.PokemonData.pokemonSpecies.RetrievePokemonSpecie(this.pokemon.speciesID).movement_type;

            if(pokemonMovementType == PokemonEnums.MovementTypes.AlwaysFlying)
            {
                followerPos = new Vector3(this.thePlayer.transform.position.x - 1, this.thePlayer.transform.position.y + 2, this.thePlayer.transform.position.z - 1);
            }
            else
            {
                followerPos = new Vector3(this.thePlayer.transform.position.x - 1, this.thePlayer.transform.position.y, this.thePlayer.transform.position.z - 1);
            }

            this.followerInstance = Instantiate(theFollower, followerPos, this.thePlayer.transform.rotation) as GameObject;

            this.followerInstance.transform.parent  = gameObject.transform;
            this.followerInstance.name              = this.followerInstance.name.Replace("(Clone)", "").Trim();

            this.followerController     = this.followerInstance.GetComponent<CharacterController>();
            this.animator               = this.followerInstance.GetComponentInChildren<Animator>();

            this.animator.Play(PokemonAnimations.overWorldnimationsDict[PokemonAnimations.AnimationNames.IDLE]);

            this.fsm = FSM.Idle;
        }

        public void RemoveFollower()
        {
            Destroy(this.followerInstance);

            this.ResetFollower();
        }

        public void SwitchFollower(GameObject theFollower, Pokemon _pokemon)
        {
            this.RemoveFollower();
            this.CreateFollower(theFollower, _pokemon);
        }

        public void UpdateFollowerPosition(Vector3 position, Quaternion rotation)
    {
        if (this.followerInstance != null)
        {
            this.followerInstance.transform.position = position;
            this.followerInstance.transform.rotation = rotation;
        }
    }
    #endregion
}
