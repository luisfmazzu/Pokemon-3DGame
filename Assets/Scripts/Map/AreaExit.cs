using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class AreaExit : MonoBehaviour
{

    public string areaToLoad;
    public string areaTransitionName;

    public float waitToLoad = 1f;
    private bool shouldLoadAfterFade;

    [SerializeField]
    private PlayerTest player;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (shouldLoadAfterFade)
        {
            waitToLoad -= Time.deltaTime;
            if (waitToLoad <= 0)
            {
                shouldLoadAfterFade = false;
                SceneManager.LoadScene(areaToLoad);
            }
        }
    }

    private void OnTriggerEnter(Collider boundaryArea)
    {
        if (boundaryArea.tag == "Player")
        {
            UIFadeController.instance.FadeToBlack();
            shouldLoadAfterFade = true;

            player.CurrentAreaTransitionName = areaTransitionName;
        }
    }
}
