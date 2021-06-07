using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class PlayerInfoBar : MonoBehaviour
{
    #region Public Variables Declaration
    #endregion

    #region Private Variables Declaration
        private Player      playerInfo;

        private Text        playerLvl;
        private ProgressBar playerBaseLevelProgressBar;
    #endregion

    private void Awake()
    {
        this.playerInfo                 = Player.Instance;
        this.playerLvl                  = this.transform.Find("Basic Sprite").Find("Player Level").GetComponent<Text>();
        this.playerBaseLevelProgressBar = this.transform.Find("Basic Sprite").Find("Player Level Progress Bar").GetComponent<ProgressBar>();
    }

    IEnumerator Start()
    {
        yield return StartCoroutine(this.playerInfo.IsReady()); // Don't do nothing until the end of the playerInfo.IsReady() function (this function only GUARANTEE that our Player Class finishes before this one

        this.handlePlayerName();
        this.handlePlayerLevel();
        this.handlePlayerLevelProgressBar();
    }

    void handlePlayerName()
    {
        Text text = this.transform.Find("Basic Sprite").Find("Player Name").GetComponent<Text>();

        text.text = this.playerInfo.playerName;
    }

    void handlePlayerLevel()
    {
        this.playerLvl.text = "Lv " + this.playerInfo.playerBaseLvl.ToString();
    }

    void handlePlayerLevelProgressBar()
    {
        this.playerBaseLevelProgressBar.BarValue = this.playerInfo.playerBaseLvlExp;
    }
}