using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIFadeController : MonoBehaviour
{

    public static UIFadeController _instance;
    public Image fadeImage;

    public float fadeSpeed = 1;

    public bool shouldFadeToBlack;
    public bool shouldFadeFromBlack;

    public static UIFadeController Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = (UIFadeController)GameObject.FindObjectOfType(typeof(UIFadeController));
            }
            return _instance;
        }
        set
        {
            _instance = value;
        }
    }

    void Awake()
    {
        if (_instance != null && _instance != this)
        {
            Destroy(this);

            return;
        }

        _instance = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        fadeSpeed = 1;
    }

    // Update is called once per frame
    void Update()
    {
        if (shouldFadeToBlack)
        {
            fadeImage.color = new Color(fadeImage.color.r, fadeImage.color.g, fadeImage.color.b, Mathf.MoveTowards(fadeImage.color.a, 1f, fadeSpeed * Time.deltaTime));

            if (fadeImage.color.a == 1f)
            {
                shouldFadeToBlack = false;
            }
        }

        if (shouldFadeFromBlack)
        {
            fadeImage.color = new Color(fadeImage.color.r, fadeImage.color.g, fadeImage.color.b, Mathf.MoveTowards(fadeImage.color.a, 0f, fadeSpeed * Time.deltaTime));

            if (fadeImage.color.a == 0f)
            {
                shouldFadeFromBlack = false;
            }
        }
    }

    public void FadeToBlack()
    {
        shouldFadeToBlack = true;
        shouldFadeFromBlack = false;
    }

    public void FadeFromBlack()
    {
        shouldFadeToBlack = false;
        shouldFadeFromBlack = true;
    }
}
