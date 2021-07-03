using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TeamButton : MonoBehaviour
{
    public class PokemonObjects
    {
        public Canvas   canvas  { get; set; } = null;
        public Image    image   { get; set; } = null;
        public Text     name    { get; set; } = null;
        public Text     lvl     { get; set; } = null;

        public PokemonObjects(Canvas _canvas, Image _image, Text _name, Text _lvl)
        {
            this.canvas = _canvas;
            this.image  = _image;
            this.name   = _name;
            this.lvl    = _lvl;
        }
    }

    #region Constant Variables
        private const string SHOW_TEAM = "Show Team";
        private const string HIDE_TEAM = "Hide Team";
    #endregion

    #region Enumerators
        private enum FSM
        {
            ShowingTeam,
            HiddingTeam
        }
    #endregion

    #region Public Variables Declaration
    #endregion

    #region Private Variables Declaration
        private PlayerInfo              playerInfo;
        private PokemonResources        pokemonResources;

        private Text                    text;
        private List<PokemonObjects>    pokemons;

        private FSM                     currentState;
    #endregion

    private void Awake()
    {
        this.playerInfo         = PlayerManager.Instance.PlayerInfo;
        this.pokemonResources   = SystemManager.Instance.PokemonData.pokemonResources;

        this.text       = this.transform.Find("Text").GetComponent<Text>();

        this.pokemons = new List<PokemonObjects>();

        Transform currentTransform  = this.transform.parent.Find("Pokemon 01").Find("Pokemon Info");
        currentTransform.GetComponent<PokemonInfo>().pokemonIndex = 0;
        this.pokemons.Add(new PokemonObjects(currentTransform.GetComponent<Canvas>(), currentTransform.Find("Basic Sprite").GetComponent<Image>(), currentTransform.Find("Pokemon Name").GetComponent<Text>(), currentTransform.Find("Pokemon Level").GetComponent<Text>()));

        currentTransform = this.transform.parent.Find("Pokemon 02").Find("Pokemon Info");
        currentTransform.GetComponent<PokemonInfo>().pokemonIndex = 1;
        this.pokemons.Add(new PokemonObjects(currentTransform.GetComponent<Canvas>(), currentTransform.Find("Basic Sprite").GetComponent<Image>(), currentTransform.Find("Pokemon Name").GetComponent<Text>(), currentTransform.Find("Pokemon Level").GetComponent<Text>()));

        currentTransform = this.transform.parent.Find("Pokemon 03").Find("Pokemon Info");
        currentTransform.GetComponent<PokemonInfo>().pokemonIndex = 2;
        this.pokemons.Add(new PokemonObjects(currentTransform.GetComponent<Canvas>(), currentTransform.Find("Basic Sprite").GetComponent<Image>(), currentTransform.Find("Pokemon Name").GetComponent<Text>(), currentTransform.Find("Pokemon Level").GetComponent<Text>()));

        currentTransform = this.transform.parent.Find("Pokemon 04").Find("Pokemon Info");
        currentTransform.GetComponent<PokemonInfo>().pokemonIndex = 3;
        this.pokemons.Add(new PokemonObjects(currentTransform.GetComponent<Canvas>(), currentTransform.Find("Basic Sprite").GetComponent<Image>(), currentTransform.Find("Pokemon Name").GetComponent<Text>(), currentTransform.Find("Pokemon Level").GetComponent<Text>()));

        currentTransform = this.transform.parent.Find("Pokemon 05").Find("Pokemon Info");
        currentTransform.GetComponent<PokemonInfo>().pokemonIndex = 4;
        this.pokemons.Add(new PokemonObjects(currentTransform.GetComponent<Canvas>(), currentTransform.Find("Basic Sprite").GetComponent<Image>(), currentTransform.Find("Pokemon Name").GetComponent<Text>(), currentTransform.Find("Pokemon Level").GetComponent<Text>()));

        currentTransform = this.transform.parent.Find("Pokemon 06").Find("Pokemon Info");
        currentTransform.GetComponent<PokemonInfo>().pokemonIndex = 5;
        this.pokemons.Add(new PokemonObjects(currentTransform.GetComponent<Canvas>(), currentTransform.Find("Basic Sprite").GetComponent<Image>(), currentTransform.Find("Pokemon Name").GetComponent<Text>(), currentTransform.Find("Pokemon Level").GetComponent<Text>()));
    }

    IEnumerator Start()
    {
        this.playerInfo.setTeamButtonInstance(this);

        Button button = this.GetComponent<Button>();

        button.onClick.AddListener(TaskOnClick);

        this.SwitchState(FSM.HiddingTeam);

        yield return StartCoroutine(this.playerInfo.IsReady()); // Don't do nothing until the end of the playerInfo.IsReady() function (this function only GUARANTEE that our Player Class finishes before this one

        yield return StartCoroutine(this.pokemonResources.IsReady());

        this.UpdatePokemons();
    }

    private void Update()
    {
    }

    public void UpdatePokemons()
    {
        int i = 0;
        for(; i < this.playerInfo.partyPokemons.Count; i++)
        {
            Pokemon pokemon = this.playerInfo.partyPokemons[i];

            this.pokemons[i].image.sprite   = this.pokemonResources.RetrievePokemonResource(pokemon.resourceID).sprite;
            this.pokemons[i].name.text      = pokemon.nickname;
            this.pokemons[i].lvl.text       = "Lv " + pokemon.baseLvl;
        }

        for (; i < 6; i++)
        {
            this.pokemons[i].image.sprite = null;
        }
    }

    void SwitchState(FSM newState)
    {
        switch(newState)
        {
            case FSM.ShowingTeam:
                this.HandleShowingTeamFSM();

                break;

            case FSM.HiddingTeam:
                this.HandleHiddingTeamFSM();

                break;

            default:
                break;
        }
    }

    void EnableCanvasIfPokemonExists()
    {
        foreach(PokemonObjects pokemon in this.pokemons)
        {
            pokemon.canvas.enabled = (pokemon.image.sprite != null) ? (true) : (false);
        }
    }

    void HandleShowingTeamFSM()
    {
        this.currentState   = FSM.ShowingTeam;
        this.text.text      = HIDE_TEAM;

        this.EnableCanvasIfPokemonExists();
    }

    void HandleHiddingTeamFSM()
    {
        this.currentState   = FSM.HiddingTeam;
        this.text.text      = SHOW_TEAM;

        foreach(PokemonObjects pokemon in this.pokemons)
        {
            pokemon.canvas.enabled = false;
        }
    }

    void TaskOnClick()
    {
        switch(this.currentState)
        {
            case FSM.ShowingTeam:
                this.SwitchState(FSM.HiddingTeam);

                break;

            case FSM.HiddingTeam:
                this.SwitchState(FSM.ShowingTeam);

                break;

            default:
                break;
        }
    }
}