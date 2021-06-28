using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LoadingScreen : MonoBehaviour
{
    #region Private Variables
        private PlayerInfo          playerInfo;
        private Text                text;
        private ProgressBar         loadingBar;
    #endregion

    static class LoadingSteps
    {
        public static string[] steps = { "Retrieving Pokemons Data", "Retrieving Player Information", "Loading Resources", "Loading Map" };
    }

    private void Awake()
    {
        this.text           = this.transform.Find("Text").GetComponent<Text>();
        this.loadingBar     = this.transform.Find("Loading Bar").GetComponent<ProgressBar>();
    }

    IEnumerator Start()
    {
        this.playerInfo = PlayerManager.Instance.PlayerInfo;

        // Disable existing components while loading
        PlayerManager.Instance.PlayerController.gameObject.SetActive(false);
        PlayerManager.Instance.PokemonFollower.gameObject.SetActive(false);
        SystemManager.Instance.PanelUI.SetActive(false);

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
        yield return StartCoroutine(this.HandleThirdLoadingStep());
        yield return StartCoroutine(this.HandleFourthLoadingStep());
    }

    IEnumerator HandleFirstLoadingStep()
    {
        /**
         * 2nd step -> Load Resouces
         */
        PokemonAbilities pokemonAbilities   = SystemManager.Instance.PokemonData.pokemonAbilities;
        PokemonBaseStats pokemonBaseStats   = SystemManager.Instance.PokemonData.pokemonBaseStats;
        PokemonNatures   pokemonNatures     = SystemManager.Instance.PokemonData.pokemonNatures;

        this.text.text = LoadingSteps.steps[0];

        pokemonAbilities.LoadAbilities();

        yield return StartCoroutine(pokemonAbilities.IsReady());

        pokemonBaseStats.LoadBaseStats();

        yield return StartCoroutine(pokemonBaseStats.IsReady());

        pokemonNatures.LoadNatures();

        yield return StartCoroutine(pokemonNatures.IsReady());

        this.loadingBar.BarValue += (100.0f / LoadingSteps.steps.Length);

        yield return new WaitForSeconds(0.25f);
    }

    IEnumerator HandleSecondLoadingStep()
    {
        /**
         * 1st step -> Retrieve Player Information
         */
        this.text.text = LoadingSteps.steps[1];

        CtrlPlayer  ctrlPlayer  = new CtrlPlayer();
        CtrlPokemon ctrlPokemon = new CtrlPokemon();

        this.playerInfo.RetrievePlayerInformation(ctrlPlayer, ctrlPokemon, this.playerInfo.accountID);

        yield return StartCoroutine(this.playerInfo.IsReady()); // Don't do anything until the end of the playerInfo.IsReady() function (this function only GUARANTEE that our Player Class finishes before this one

        // Sets player position correctly
        PlayerManager.Instance.PlayerController.transform.position = this.playerInfo.playerPosition;

        this.loadingBar.BarValue = (100.0f / LoadingSteps.steps.Length);

        yield return new WaitForSeconds(0.25f);
    }

    IEnumerator HandleThirdLoadingStep()
    {
        /**
         * 3rd step -> Load Resouces
         */
        PokemonResources pokemonResources = SystemManager.Instance.PokemonData.pokemonResources;

        this.text.text = LoadingSteps.steps[2];

        pokemonResources.LoadResources();

        yield return StartCoroutine(pokemonResources.IsReady());

        this.loadingBar.BarValue += (100.0f / LoadingSteps.steps.Length);

        yield return new WaitForSeconds(0.25f);
    }

    IEnumerator HandleFourthLoadingStep()
    {
        /**
         * 4th step -> Load Map
         */
        this.text.text = LoadingSteps.steps[3];

        AsyncOperation loadingOperation = SceneManager.LoadSceneAsync(this.playerInfo.playerCurrentMap);

        while (!loadingOperation.isDone)
        {
            this.loadingBar.BarValue = (100.0f / LoadingSteps.steps.Length) + ((loadingOperation.progress * 100.0f) / LoadingSteps.steps.Length);

            yield return null;
        }
    }
}
