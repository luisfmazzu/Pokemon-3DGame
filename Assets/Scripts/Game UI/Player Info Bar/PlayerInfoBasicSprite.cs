using UnityEngine;

public class PlayerInfoBasicSprite : MonoBehaviour
{
    #region Public Variables Declaration
    #endregion

    void Start()
    {
        RectTransform spriteTransform = this.transform.Find("Sprite").GetComponent<RectTransform>();

        GUIScreenInfo.ScreenRatio ratio = GUIScreenInfo.Instance.currentToDefaultRatio;

        float widthRatio = 2.0f / ratio.width;
        float heigthRatio = 2.0f / ratio.heigth;

        spriteTransform.position = new Vector3((spriteTransform.rect.width / widthRatio), Screen.height - (spriteTransform.rect.height / heigthRatio), 0.0f);
    }
}