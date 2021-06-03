using UnityEngine;

public class PlayerInfoBasicSprite : MonoBehaviour
{
    #region Public Variables Declaration
    #endregion

    void Start()
    {
        const float defaultWidth    = 1920.0f;
        const float defaultHeight   = 1080.0f;

        RectTransform transform = gameObject.GetComponent<RectTransform>();

        // First we need to find the correct ratio between the actual screen and the default one (Full HD)
        float widthRatio    = (2.0f / (Screen.width / defaultWidth));
        float heigthRatio   = (2.0f / (Screen.height / defaultHeight));

        transform.position = new Vector3((transform.rect.width / widthRatio), Screen.height - (transform.rect.height / heigthRatio), 0.0f);
    }
}