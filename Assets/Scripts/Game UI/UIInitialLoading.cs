using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIInitialLoading : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        SystemManager.Instance.PanelUI.SetActive(true);
    }
}
