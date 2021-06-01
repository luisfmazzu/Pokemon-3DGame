using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EssentialsLoader : MonoBehaviour
{
    public GameObject UIScreen;

    // Start is called before the first frame update
    void Start()
    {
        if (UIFadeController.instance == null)
        {
            UIFadeController.instance = Instantiate(UIScreen).GetComponent<UIFadeController>();
        }
    }

    // Update is called once per frame
    void Update()
    {

    }
}
