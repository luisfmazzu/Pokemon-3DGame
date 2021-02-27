using UnityEngine;
using System.Collections;

public class ScreenFader : MonoBehaviour
{
    Animator anim;

    bool isFading = false;

    /// <summary>
    /// Use this for initialization.
    /// </summary>
    void Start()
    {
        anim = GetComponent<Animator>();
    }

    /// <summary>
    /// Fades to clear.
    /// </summary>
    /// <returns></returns>
    public IEnumerator FadeToClear ()
    {
        isFading = true;

        anim.SetTrigger("FadeIn");

        while (isFading)
            yield return null;
    }

    /// <summary>
    /// Fades to black.
    /// </summary>
    /// <returns></returns>
    public IEnumerator FadeToBlack ()
    {
        isFading = true;

        anim.SetTrigger("FadeOut");

        while (isFading)
            yield return null;
    }

    /// <summary>
    /// Animations the complete.
    /// </summary>
    void AnimationComplete ()
    {
        isFading = false;
    }
}