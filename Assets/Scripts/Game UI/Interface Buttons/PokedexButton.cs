using UnityEngine;
using UnityEngine.U2D;
using UnityEngine.UI;

public class PokedexButton : MonoBehaviour
{
    #region Public Variables Declaration
    #endregion

    void Start ()
    {
        RectTransform transform = gameObject.GetComponent<RectTransform>();

        transform.position = new Vector3(Screen.width - ((transform.rect.width * 4) - (transform.rect.width / 2)), Screen.height - (transform.rect.height / 2), 0.0f);
    }
}