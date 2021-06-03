using UnityEngine;

public class BagButton : MonoBehaviour
{
    #region Public Variables Declaration
    #endregion

    void Start()
    {
        GUIScreenInfo screenInfo = gameObject.AddComponent<GUIScreenInfo>();

        RectTransform transform = gameObject.GetComponent<RectTransform>();

        GUIScreenInfo.ScreenRatio ratio = screenInfo.currentToDefaultRatio;

        float widthRatio = 0.0189f / ratio.width;
        float heigthRatio = 1.3f / ratio.heigth;

        transform.position = new Vector3((transform.rect.width / widthRatio), Screen.height - (transform.rect.height / heigthRatio), 0.0f);
    }
}