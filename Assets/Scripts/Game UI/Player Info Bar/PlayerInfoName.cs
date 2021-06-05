using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class PlayerInfoName : MonoBehaviour
{
    #region Public Variables Declaration
    #endregion

    IEnumerator Start()
    {
        GUIScreenInfo   screenInfo      = gameObject.AddComponent<GUIScreenInfo>();
        Player          playerInfo      = Player.Instance;

        RectTransform   textTransform   = this.transform.Find("Text").GetComponent<RectTransform>();

        Text            text            = this.transform.Find("Text").GetComponent<Text>();
        
        GUIScreenInfo.ScreenRatio ratio = screenInfo.currentToDefaultRatio;

        float widthRatio  = 1.0f / ratio.width;
        float heigthRatio = 2.0f / ratio.heigth;

        textTransform.position = new Vector3((textTransform.rect.width / widthRatio), Screen.height - (textTransform.rect.height / heigthRatio), 0.0f);

        yield return StartCoroutine(playerInfo.IsReady()); // Don't do nothing until the end of the playerInfo.IsReady() function (this function only GUARANTEE that our Player Class finishes before this one

        text.text = playerInfo.playerName;
    }
}