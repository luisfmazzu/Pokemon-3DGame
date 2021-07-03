using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class PokemonInfo : MonoBehaviour
{
    #region Constant Variables
        private const string pokeInfoPrefabPath = "GUI/PokeInfo/PokeInfo";
    #endregion

    #region Private Variables Declaration
        private PlayerInfo  playerInfo;

        private FSM         fsm             = FSM.Not_Instantiated;

        private GameObject  pokeInfoPrefab  = null;

        private GameObject  pokeInfoGUI     = null;
    #endregion

    #region Public Variables Declaration
        public int pokemonIndex { get; set; } = 0;
    #endregion

    #region Enumerators
    private enum FSM
        {
            Not_Instantiated,
            Instantiated
        }
    #endregion

    private void Awake()
    {
        this.playerInfo = PlayerManager.Instance.PlayerInfo;

        this.pokeInfoPrefab = Resources.Load(pokeInfoPrefabPath) as GameObject;
    }

    IEnumerator Start()
    {
        Button button = this.GetComponent<Button>();

        button.onClick.AddListener(TaskOnClick);

        yield return StartCoroutine(this.playerInfo.IsReady()); // Don't do anything until the end of the playerInfo.IsReady() function (this function only GUARANTEE that our Player Class finishes before this one
    }

    void TaskOnClick()
    {
        switch(this.fsm)
        {
            case FSM.Not_Instantiated:
                this.pokeInfoGUI = Instantiate(this.pokeInfoPrefab) as GameObject;

                this.pokeInfoGUI.GetComponent<PokeInfoGUI>().pokemon = this.playerInfo.RetrievePartyPokemon(this.pokemonIndex);

                this.fsm = FSM.Instantiated;

                break;

            case FSM.Instantiated:
                Destroy(this.pokeInfoGUI);

                this.fsm = FSM.Not_Instantiated;

                break;
        }
    }
}