using UnityEngine;
using UnityEngine.U2D;
using UnityEngine.UI;

public class AchievementsButton : MonoBehaviour
{
    #region Public Variables Declaration
    #endregion

    void Start()
    {
        const float defaultWidth  = 1920.0f;
        const float defaultHeight = 1080.0f;

        RectTransform transform = gameObject.GetComponent<RectTransform>();

        // First we need to find the correct ratio between the actual screen and the default one (Full HD)
        float widthRatio  = (3.25f * (Screen.width / defaultWidth));
        float heigthRatio = (0.75f * (Screen.height / defaultHeight));

        transform.position = new Vector3(Screen.width - (transform.rect.width * widthRatio), Screen.height - (transform.rect.height * heigthRatio), 0.0f);
    }
}