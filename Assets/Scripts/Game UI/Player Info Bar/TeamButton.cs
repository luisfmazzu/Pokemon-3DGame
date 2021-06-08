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
        private Canvas      pokemons;

        private FSM         currentState;
    #endregion

    #region Internal Variables
    #endregion

    private void Awake()
    {
        this.playerInfo = Player.Instance;

        this.text       = this.transform.Find("Text").GetComponent<Text>();
        this.pokemons   = this.transform.parent.Find("Pokemon 01").GetComponent<Canvas>();
    }

    IEnumerator Start()
    {
        Button button = this.GetComponent<Button>();

        button.onClick.AddListener(TaskOnClick);

        yield return StartCoroutine(this.playerInfo.IsReady()); // Don't do nothing until the end of the playerInfo.IsReady() function (this function only GUARANTEE that our Player Class finishes before this one

        this.SwitchState(FSM.ShowingTeam);
    }

    private void Update()
    {
        
    }

    void SwitchState(FSM newState)
    {
        switch(newState)
        {
            case FSM.ShowingTeam:
                this.currentState       = FSM.ShowingTeam;
                this.text.text          = HIDE_TEAM;
                this.pokemons.enabled   = true;

                break;

            case FSM.HiddingTeam:
                this.currentState       = FSM.HiddingTeam;
                this.text.text          = SHOW_TEAM;
                this.pokemons.enabled   = false;

                break;

            default:
                break;
        }
    }

    void HandleShowingTeamFSM()
    {
    }

    void HandleHiddingTeamFSM()
    {

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