using System.Collections;
using UnityEngine;

public class PlayerInfoLevelBar : MonoBehaviour
{
    #region SerializeFields Variables Declaration
        [SerializeField, Range(0, 100)] private float currentExp;
    #endregion

    #region Private Variables Declaration
        //private Player playerInfo;

        RectTransform imageTransform;

        private float fullImageWidth;
    #endregion

    IEnumerator Start()
    {
        Player playerInfo = Player.Instance;

        GUIScreenInfo.ScreenRatio ratio = GUIScreenInfo.Instance.currentToDefaultRatio;

        imageTransform = this.transform.Find("Image").GetComponent<RectTransform>();

        float widthRatio  = 1.05f / ratio.width;
        float heigthRatio = 0.1725f / ratio.heigth;

        imageTransform.position = new Vector3((imageTransform.rect.width / widthRatio), Screen.height - (imageTransform.rect.height / heigthRatio), 0.0f);

        this.fullImageWidth     = imageTransform.rect.width;

        yield return StartCoroutine(playerInfo.IsReady()); // Don't do nothing until the end of the playerInfo.IsReady() function (this function only GUARANTEE that our Player Class finishes before this one

        imageTransform.sizeDelta    = new Vector2(this.fullImageWidth * (playerInfo.playerBaseLvlExp / 100.0f), imageTransform.rect.height);
        imageTransform.position     = new Vector3(imageTransform.position.x - (this.fullImageWidth / 2.0f), imageTransform.position.y, imageTransform.position.z);
    }

    void Update()
    {
        imageTransform.sizeDelta = new Vector2(fullImageWidth * (this.currentExp / 100.0f), imageTransform.rect.height);
    }
}