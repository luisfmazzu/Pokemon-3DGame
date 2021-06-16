using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class PlayerInfoBar : MonoBehaviour
{
    #region Public Variables Declaration
    #endregion

    #region Private Variables Declaration
        private PlayerInfo  playerInfo;

        private Text        playerLvl;
        private ProgressBar playerBaseLevelProgressBar;

        private Image[]     lineup_small = { null, null, null, null, null, null };
    #endregion

    private void Awake()
    {
        this.playerInfo = PlayerManager.Instance.PlayerInfo;

        var basicSprite = this.transform.Find("Basic Sprite");

        this.playerLvl                  = basicSprite.Find("Player Level").GetComponent<Text>();
        this.playerBaseLevelProgressBar = basicSprite.Find("Player Level Progress Bar").Find("Experience Progress Bar").GetComponent<ProgressBar>();

        var lineUp = basicSprite.Find("Line-Up");

        this.lineup_small[0] = lineUp.Find("Pokemon 01").GetComponent<Image>();
        this.lineup_small[1] = lineUp.Find("Pokemon 02").GetComponent<Image>();
        this.lineup_small[2] = lineUp.Find("Pokemon 03").GetComponent<Image>();
        this.lineup_small[3] = lineUp.Find("Pokemon 04").GetComponent<Image>();
        this.lineup_small[4] = lineUp.Find("Pokemon 05").GetComponent<Image>();
        this.lineup_small[5] = lineUp.Find("Pokemon 06").GetComponent<Image>();
    }

    IEnumerator Start()
    {
        this.playerInfo.setPlayerInfoBar(this);

        yield return StartCoroutine(this.playerInfo.IsReady()); // Don't do anything until the end of the playerInfo.IsReady() function (this function only GUARANTEE that our Player Class finishes before this one

        this.UpdatePlayerName();
        this.UpdatePlayerLevel();
        this.UpdatePlayerLevelProgressBar();
        this.UpdatePlayerLineUp();
    }

    private void Update()
    {
    }

    private void UpdatePlayerName()
    {
        Text text = this.transform.Find("Basic Sprite").Find("Player Name").GetComponent<Text>();

        text.text = this.playerInfo.playerName;
    }

    public void UpdatePlayerLevel()
    {
        this.playerLvl.text = "Lv " + this.playerInfo.playerBaseLvl.ToString();
    }

    public void UpdatePlayerLevelProgressBar()
    {
        this.playerBaseLevelProgressBar.BarValue = this.playerInfo.playerBaseLvlExp;
    }

    public void UpdatePlayerLineUp()
    {
        int i = 0;
        for(; i < this.playerInfo.partyPokemons.Count; i++)
        {
            int id = this.playerInfo.partyPokemons[i].speciesID;
            string spritePath = "Pokemon/" + id + "/" + id;
            this.lineup_small[i].sprite = Resources.Load<Sprite>(spritePath);

            this.lineup_small[i].color = new Color(this.lineup_small[i].color.r, this.lineup_small[i].color.g, this.lineup_small[i].color.b, 1.00f);
        }

        for(; i < 6; i++)
        {
            this.lineup_small[i].color = new Color(this.lineup_small[i].color.r, this.lineup_small[i].color.g, this.lineup_small[i].color.b, 0.00f);
        }
    }
}