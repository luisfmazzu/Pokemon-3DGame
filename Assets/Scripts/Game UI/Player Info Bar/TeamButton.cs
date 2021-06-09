using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class TeamButton : MonoBehaviour
{
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
        private Transform[] pokemons    = { null, null, null, null, null, null };

        private FSM         currentState;
    #endregion

    private void Awake()
    {
        this.playerInfo = Player.Instance;

        this.text           = this.transform.Find("Text").GetComponent<Text>();
        this.pokemons[0]    = this.transform.parent.Find("Pokemon 01").Find("Pokemon Info");
        this.pokemons[1]    = this.transform.parent.Find("Pokemon 02").Find("Pokemon Info");
        this.pokemons[2]    = this.transform.parent.Find("Pokemon 03").Find("Pokemon Info");
        this.pokemons[3]    = this.transform.parent.Find("Pokemon 04").Find("Pokemon Info");
        this.pokemons[4]    = this.transform.parent.Find("Pokemon 05").Find("Pokemon Info");
        this.pokemons[5]    = this.transform.parent.Find("Pokemon 06").Find("Pokemon Info");
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
            foreach(Transform pokemon in this.pokemons)
            {
                if (pokemon.Find("Basic Sprite").GetComponent<Image>().sprite != null)
                {
                    pokemon.GetComponent<Canvas>().enabled = true;
                }
            }
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

    void HandleShowingTeamFSM()
    {
        this.currentState   = FSM.ShowingTeam;
        this.text.text      = HIDE_TEAM;

        foreach(Transform pokemon in this.pokemons)
        {
            if(pokemon.Find("Basic Sprite").GetComponent<Image>().sprite != null)
            {
                pokemon.GetComponent<Canvas>().enabled = true;
            }
        }
    }

    void HandleHiddingTeamFSM()
    {
        this.currentState   = FSM.HiddingTeam;
        this.text.text      = SHOW_TEAM;

        foreach(Transform pokemon in this.pokemons)
        {
            pokemon.GetComponent<Canvas>().enabled = false;
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