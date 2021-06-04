using UnityEngine;
using UnityEngine.U2D;
using UnityEngine.UI;

public class PokedexButton : MonoBehaviour
{
    #region Public Variables Declaration
    #endregion

    void Start()
    {
        GUIScreenInfo screenInfo = gameObject.AddComponent<GUIScreenInfo>();

        RectTransform spriteTransform = this.transform.Find("Sprite").GetComponent<RectTransform>();

        GUIScreenInfo.ScreenRatio ratio = screenInfo.currentToDefaultRatio;

        float widthRatio = 0.01805f / ratio.width;
        float heigthRatio = 1.3f / ratio.heigth;

        spriteTransform.position = new Vector3((spriteTransform.rect.width / widthRatio), Screen.height - (spriteTransform.rect.height / heigthRatio), 0.0f);
    }
}