using UnityEngine;
using System.Collections.Generic;
using UnityEngine.UI;

public class PlayerInfoPokeballs : MonoBehaviour
{
    #region Private Variables Declaration
        [SerializeField, Range(1, 6)] private int pokeballIndex;

        private Dictionary<int, float> pokeballPlacementDict = new Dictionary<int, float>(){ {1, 0.2725f},
                                                                                             {2, 0.2135f},
                                                                                             {3, 0.175f},
                                                                                             {4, 0.1471f},
                                                                                             {5, 0.127f},
                                                                                             {6, 0.1123f} };
    #endregion

    void Start()
    {
        GUIScreenInfo.ScreenRatio ratio = GUIScreenInfo.Instance.currentToDefaultRatio;

        float pokeballPlacementMultiplier;

        pokeballPlacementDict.TryGetValue(pokeballIndex, out pokeballPlacementMultiplier);

        float widthRatio  = pokeballPlacementMultiplier / ratio.width;
        float heigthRatio = 0.61f / ratio.heigth;

        /**
         * Now we handle the Pokeballs
         */
        RectTransform   spriteTransform = this.transform.Find("Ball Sprite").GetComponent<RectTransform>();
        Image           image           = this.transform.Find("Ball Sprite").GetComponent<Image>();

        spriteTransform.position = new Vector3((spriteTransform.rect.width / widthRatio), Screen.height - (spriteTransform.rect.height / heigthRatio), 0.0f);

        /**
         * Now we handle the Pokemon Icons
         */
        RectTransform   pokemonIconSpriteTransform  = this.transform.Find("Pokemon Sprite").GetComponent<RectTransform>();
        Image           pokemonIconImage            = this.transform.Find("Pokemon Sprite").GetComponent<Image>();

        pokemonIconSpriteTransform.position = spriteTransform.position;

        if(pokemonIconImage.sprite == null)
        {
            image.color             = new Color(image.color.r, image.color.g, image.color.b, 0.75f);
            pokemonIconImage.color  = new Color(image.color.r, image.color.g, image.color.b, 0.00f);
        }
        else
        {
            image.color             = new Color(image.color.r, image.color.g, image.color.b, 0.50f);
            pokemonIconImage.color  = new Color(image.color.r, image.color.g, image.color.b, 0.75f);
        }
    }
}