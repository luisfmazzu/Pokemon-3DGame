using UnityEngine;

public class Woman01Controller : MonoBehaviour
{
    #region SerializeFields
        //[SerializeField] private float normalSpeed          = 1f;
        //[SerializeField] private float playerGraphicsScale  = 20f;
    #endregion

    #region PrivateVariables
        private Animator            animator;

        private CharacterController characterController;
    #endregion

    static class Animations
    {
        public const string Idle    = "wait_01";
        public const string Walking = "walk";
    }

    void Start()
    {
        characterController = GetComponent<CharacterController>();
        animator            = GetComponent<Animator>();

        animator.Play(Animations.Idle);
    }

    void Update()
    {
        /*
        float verticalSpeed     = -9.8f;
        float horizontalSpeed   = normalSpeed;

        Vector3 updatedMotion = new Vector3(animator.GetFloat("DirX") * horizontalSpeed, verticalSpeed, animator.GetFloat("DirY") * horizontalSpeed);

        updatedMotion.x /= playerGraphicsScale;
        updatedMotion.z /= playerGraphicsScale;

        characterController.Move(updatedMotion);

        animator.Play(Animations.Idle);
        */
    }

    private void OnTriggerStay(Collider other)
    {
        if((other.tag == "Player") && (Input.GetKeyDown(KeyCode.Space)))
        {
            Debug.Log("[Woman01] You Started a Conversation with me");
        }
    }
}
