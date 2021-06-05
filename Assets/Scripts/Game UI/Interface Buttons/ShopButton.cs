using UnityEngine;
using UnityEngine.UI;

public class ShopButton : MonoBehaviour
{
    #region Private Variables Declaration
    #endregion

    void Start()
    {
        RectTransform spriteTransform = this.transform.Find("Sprite").GetComponent<RectTransform>();

        GUIScreenInfo.ScreenRatio ratio = GUIScreenInfo.Instance.currentToDefaultRatio;

        float widthRatio = 0.01845f / ratio.width;
        float heigthRatio = 1.3f / ratio.heigth;

        spriteTransform.position = new Vector3((spriteTransform.rect.width / widthRatio), Screen.height - (spriteTransform.rect.height / heigthRatio), 0.0f);

        /**
         * Now we do the work for the Button
         */

        Button button = this.transform.Find("Sprite").GetComponent<Button>();

        button.onClick.AddListener(TaskOnClick);
    }

    void TaskOnClick()
    {
        Debug.Log("You have clicked the Shop Button!");
    }
}