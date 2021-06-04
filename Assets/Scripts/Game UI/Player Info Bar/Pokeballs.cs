using UnityEngine;
using System.Collections.Generic;

public class Pokeballs : MonoBehaviour
{
    #region Private Variables Declaration
        [SerializeField, Range(1, 6)] private int pokeballIndex;

        private Dictionary<int, float> pokeballPlacementDict = new Dictionary<int, float>(){ {1, 0.26f},
                                                                                             {2, 0.205f},
                                                                                             {3, 0.1675f},
                                                                                             {4, 0.1425f},
                                                                                             {5, 0.124f},
                                                                                             {6, 0.11f} };
    #endregion

    void Start()
    {
        GUIScreenInfo screenInfo = gameObject.AddComponent<GUIScreenInfo>();

        RectTransform spriteTransform = this.transform.Find("Sprite").GetComponent<RectTransform>();

        GUIScreenInfo.ScreenRatio ratio = screenInfo.currentToDefaultRatio;

        float pokeballPlacementMultiplier;

        pokeballPlacementDict.TryGetValue(pokeballIndex, out pokeballPlacementMultiplier);

        float widthRatio  = pokeballPlacementMultiplier / ratio.width;
        float heigthRatio = 0.58f / ratio.heigth;

        spriteTransform.position = new Vector3((spriteTransform.rect.width / widthRatio), Screen.height - (spriteTransform.rect.height / heigthRatio), 0.0f);
    }
}