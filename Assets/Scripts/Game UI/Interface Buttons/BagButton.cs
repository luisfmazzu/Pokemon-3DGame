using UnityEngine;
using UnityEngine.UI;

public class BagButton : MonoBehaviour
{
    #region Private Variables Declaration
    #endregion

    void Start()
    {
        GUIScreenInfo screenInfo = gameObject.AddComponent<GUIScreenInfo>();

        RectTransform spriteTransform = this.transform.Find("Sprite").GetComponent<RectTransform>();

        GUIScreenInfo.ScreenRatio ratio = screenInfo.currentToDefaultRatio;

        float widthRatio = 0.0189f / ratio.width;
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
        Debug.Log("You have clicked the Bag Button!");
    }
}