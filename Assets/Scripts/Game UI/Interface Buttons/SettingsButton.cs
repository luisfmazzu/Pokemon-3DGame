using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.U2D;
using UnityEngine.UI;

public class SettingsButton : MonoBehaviour
{
    #region Public Variables Declaration
    #endregion

    void Start()
    {
        GUIScreenInfo screenInfo = gameObject.AddComponent<GUIScreenInfo>();

        RectTransform transform = gameObject.GetComponent<RectTransform>();

        GUIScreenInfo.ScreenRatio ratio = screenInfo.currentToDefaultRatio;

        float widthRatio = 0.0169f / ratio.width;
        float heigthRatio = 1.3f / ratio.heigth;

        transform.position = new Vector3((transform.rect.width / widthRatio), Screen.height - (transform.rect.height / heigthRatio), 0.0f);
    }
}