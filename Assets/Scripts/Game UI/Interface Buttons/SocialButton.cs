using UnityEngine;
using UnityEngine.U2D;
using UnityEngine.UI;

public class SocialButton : MonoBehaviour
{
    #region Public Variables Declaration
    #endregion

    void Start ()
    {
        RectTransform transform = gameObject.GetComponent<RectTransform>();

        transform.position = new Vector3(Screen.width - (transform.rect.width * 2), Screen.height - (transform.rect.height * 0.75f), 0.0f);
    }
}