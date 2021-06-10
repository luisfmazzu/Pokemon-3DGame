using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LoadingScreen : MonoBehaviour
{
    #region Serialize Fields
    #endregion

    #region Private Variables
        private Player      playerInfo;
        private CtrlPlayer  ctrlPlayer;
        private Text        text;
        private ProgressBar loadingBar;
    #endregion

    static class LoadingSteps
    {
        public static string[] steps = { "Retrieving Player Information", "Loading Map" };
    }

    private void Awake()
    {
        this.text           = this.transform.Find("Text").GetComponent<Text>();
        this.loadingBar     = this.transform.Find("Loading Bar").GetComponent<ProgressBar>();
    }

    IEnumerator Start()
    {
        ctrlPlayer = new CtrlPlayer();

        this.playerInfo = Player.Instance;

        yield return StartCoroutine(this.HandleLoadingSteps());
    }

    private void Update()
    {   
    }

    IEnumerator HandleLoadingSteps()
    {
        this.loadingBar.BarValue = 0.00f;

        yield return StartCoroutine(this.HandleFirstLoadingStep());
        yield return StartCoroutine(this.HandleSecondLoadingStep());
    }

    IEnumerator HandleFirstLoadingStep()
    {
        /**
         * 1st step -> Retrieve Player Information
         */
        this.text.text = LoadingSteps.steps[0];

        this.playerInfo.RetrievePlayerInformation(ctrlPlayer, this.playerInfo.accountID);

        yield return StartCoroutine(this.playerInfo.IsReady()); // Don't do anything until the end of the playerInfo.IsReady() function (this function only GUARANTEE that our Player Class finishes before this one

        this.loadingBar.BarValue = (100.0f / LoadingSteps.steps.Length);

        yield return new WaitForSeconds(0.5f);
    }

    IEnumerator HandleSecondLoadingStep()
    {
        /**
         * 2nd step -> Load Map
         */
        this.text.text = LoadingSteps.steps[1];

        AsyncOperation loadingOperation = SceneManager.LoadSceneAsync(this.playerInfo.playerCurrentMap);

        while (!loadingOperation.isDone)
        {
            this.loadingBar.BarValue = (100.0f / LoadingSteps.steps.Length) + ((loadingOperation.progress * 100.0f) / LoadingSteps.steps.Length);

            yield return null;
        }
    }
}
