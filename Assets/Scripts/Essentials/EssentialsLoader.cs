using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class EssentialsLoader : MonoBehaviour
{
    public GameObject Global;
    public GameObject Character;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void LoadEssentialObjects()
    {
        GameObject characterInstance = Instantiate(Character);
        DontDestroyOnLoad(characterInstance);
        PlayerManager.Instance = characterInstance.GetComponent<PlayerManager>();

        GameObject globalInstance = Instantiate(Global);
        DontDestroyOnLoad(globalInstance);
        UIFadeController.Instance = globalInstance.GetComponentInChildren<UIFadeController>();
    }
}
