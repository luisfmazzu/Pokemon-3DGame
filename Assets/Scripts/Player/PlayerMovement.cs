using UnityEngine;
using System.Collections;

/// <summary>
/// Class responsable for the Player's Movement.
/// </summary>
public class PlayerMovement : MonoBehaviour
{
    private Rigidbody2D m_rBody;
    private Animator m_anim;

    /// <summary>
    /// Use this for initialization.
    /// </summary>
    void Start ()
    {
        m_rBody = GetComponent<Rigidbody2D>();
        m_anim = GetComponent<Animator>();
	}

    /// <summary>
    /// Update is called once per frame.
    /// </summary>
    void Update ()
    {
        Vector2 movement_vector = new Vector2(Input.GetAxisRaw("Horizontal"), Input.GetAxisRaw("Vertical"));

        if (movement_vector != Vector2.zero)
        { 
            m_anim.SetBool("isWalking", true);

            m_anim.SetFloat("input_x", movement_vector.x);
            m_anim.SetFloat("input_y", movement_vector.y);
        }
        else
            m_anim.SetBool("isWalking", false);

        m_rBody.MovePosition(m_rBody.position + movement_vector * Time.deltaTime);
    }
}