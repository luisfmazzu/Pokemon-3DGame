using UnityEngine;
using System.Collections;

/// <summary>
/// Class responsible for the Warp functions.
/// </summary>
public class Warp : MonoBehaviour
{
    #region Public Variables Declaration

    public Transform warpTarget;

    #endregion

    /// <summary>
    /// Use this for initialization.
    /// </summary>
    IEnumerator OnTriggerEnter2D (Collider2D other)
    {
        ScreenFader sf = GameObject.FindGameObjectWithTag("Fader").GetComponent<ScreenFader>();

        Rigidbody2D player_rb2D = GameObject.FindGameObjectWithTag("Player").GetComponent<Rigidbody2D>(); // We instantiate our player RigidBody2D, so we can freeze it's movements

        player_rb2D.constraints = RigidbodyConstraints2D.FreezePositionX | RigidbodyConstraints2D.FreezePositionY | RigidbodyConstraints2D.FreezeRotation; // Once it reaches a portal, it stops moving

        yield return StartCoroutine(sf.FadeToBlack()); // Don't do nothing until the end of the FadeToBlack() function
        
        // Update Player's and Camera's Position
        other.gameObject.transform.position = warpTarget.position;

        Camera.main.transform.position = warpTarget.position;

        player_rb2D.constraints = RigidbodyConstraints2D.FreezeRotation; // Now we're able to move again!

        yield return StartCoroutine(sf.FadeToClear()); // Don't do nothing until the end of the FadeToClear() function
    }
}