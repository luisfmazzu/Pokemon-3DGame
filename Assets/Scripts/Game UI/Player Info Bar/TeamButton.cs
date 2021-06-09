using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class TeamButton : MonoBehaviour
{
    public class Pokemon
    {
        public Canvas   canvas  { get; set; } = null;
        public Image    image   { get; set; } = null;

        public Pokemon(Canvas _canvas, Image _image)
        {
            this.canvas = _canvas;
            this.image  = _image;
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
        private Player      playerInfo;
        private Text        text;
        private Pokemon[]   pokemons = { null, null, null, null, null, null };

        private FSM         currentState;
    #endregion

    private void Awake()
    {
        this.playerInfo = Player.Instance;

        this.text       = this.transform.Find("Text").GetComponent<Text>();

        Transform currentTransform = this.transform.parent.Find("Pokemon 01").Find("Pokemon Info");
        this.pokemons[0] = new Pokemon(currentTransform.GetComponent<Canvas>(), currentTransform.Find("Basic Sprite").GetComponent<Image>());

        currentTransform = this.transform.parent.Find("Pokemon 02").Find("Pokemon Info");
        this.pokemons[1] = new Pokemon(currentTransform.GetComponent<Canvas>(), currentTransform.Find("Basic Sprite").GetComponent<Image>());

        currentTransform = this.transform.parent.Find("Pokemon 03").Find("Pokemon Info");
        this.pokemons[2] = new Pokemon(currentTransform.GetComponent<Canvas>(), currentTransform.Find("Basic Sprite").GetComponent<Image>());

        currentTransform = this.transform.parent.Find("Pokemon 04").Find("Pokemon Info");
        this.pokemons[3] = new Pokemon(currentTransform.GetComponent<Canvas>(), currentTransform.Find("Basic Sprite").GetComponent<Image>());

        currentTransform = this.transform.parent.Find("Pokemon 05").Find("Pokemon Info");
        this.pokemons[4] = new Pokemon(currentTransform.GetComponent<Canvas>(), currentTransform.Find("Basic Sprite").GetComponent<Image>());

        currentTransform = this.transform.parent.Find("Pokemon 06").Find("Pokemon Info");
        this.pokemons[5] = new Pokemon(currentTransform.GetComponent<Canvas>(), currentTransform.Find("Basic Sprite").GetComponent<Image>());
    }

    IEnumerator Start()
    {
        Button button = this.GetComponent<Button>();

        button.onClick.AddListener(TaskOnClick);

        yield return StartCoroutine(this.playerInfo.IsReady()); // Don't do nothing until the end of the playerInfo.IsReady() function (this function only GUARANTEE that our Player Class finishes before this one

        this.SwitchState(FSM.HiddingTeam);
    }

    private void Update()
    {
        if(this.currentState == FSM.ShowingTeam)
        {
            this.EnableCanvasIfPokemonExists();
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
        foreach(Pokemon pokemon in this.pokemons)
        {
            if(pokemon.image.sprite != null)
            {
                pokemon.canvas.enabled = true;
            }
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

        foreach(Pokemon pokemon in this.pokemons)
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