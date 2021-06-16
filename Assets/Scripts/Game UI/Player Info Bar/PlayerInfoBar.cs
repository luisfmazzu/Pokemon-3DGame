using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class PlayerInfoBar : MonoBehaviour
{
    public class LineUpObjects
    {
        public Image    image   { get; set; } = null;
        public Button   button  { get; set; } = null;

        public LineUpObjects(Image _image, Button _button, UnityAction TaskOnClick)
        {
            this.image  = _image;
            this.button = _button;
            
            this.button.onClick.AddListener(TaskOnClick);
        }
    }

    #region Private Variables Declaration
        private PlayerInfo          playerInfo;
        private PokemonResources    pokemonResources;

        private Text                playerLvl;
        private ProgressBar         playerBaseLevelProgressBar;

        private List<LineUpObjects> lineup;
    #endregion

    #region Unity Overloaded Methods
        private void Awake()
        {
            this.playerInfo         = PlayerManager.Instance.PlayerInfo;
            this.pokemonResources   = SystemManager.Instance.PokemonResources;

            var basicSprite = this.transform.Find("Basic Sprite");

            this.playerLvl                  = basicSprite.Find("Player Level").GetComponent<Text>();
            this.playerBaseLevelProgressBar = basicSprite.Find("Player Level Progress Bar").Find("Experience Progress Bar").GetComponent<ProgressBar>();

            this.lineup = new List<LineUpObjects>();

            var lineUpObject = basicSprite.Find("Line-Up");

            this.lineup.Add(new LineUpObjects(lineUpObject.Find("Pokemon 01").GetComponent<Image>(), lineUpObject.Find("Pokemon 01").GetComponent<Button>(), TaskOnClickPokemon1));
            this.lineup.Add(new LineUpObjects(lineUpObject.Find("Pokemon 02").GetComponent<Image>(), lineUpObject.Find("Pokemon 02").GetComponent<Button>(), TaskOnClickPokemon2));
            this.lineup.Add(new LineUpObjects(lineUpObject.Find("Pokemon 03").GetComponent<Image>(), lineUpObject.Find("Pokemon 03").GetComponent<Button>(), TaskOnClickPokemon3));
            this.lineup.Add(new LineUpObjects(lineUpObject.Find("Pokemon 04").GetComponent<Image>(), lineUpObject.Find("Pokemon 04").GetComponent<Button>(), TaskOnClickPokemon4));
            this.lineup.Add(new LineUpObjects(lineUpObject.Find("Pokemon 05").GetComponent<Image>(), lineUpObject.Find("Pokemon 05").GetComponent<Button>(), TaskOnClickPokemon5));
            this.lineup.Add(new LineUpObjects(lineUpObject.Find("Pokemon 06").GetComponent<Image>(), lineUpObject.Find("Pokemon 06").GetComponent<Button>(), TaskOnClickPokemon6));
        }

        IEnumerator Start()
        {
            this.playerInfo.setPlayerInfoBarInstance(this);

            yield return StartCoroutine(this.playerInfo.IsReady()); // Don't do anything until the end of the playerInfo.IsReady() function (this function only GUARANTEE that our Player Class finishes before this one

            this.UpdatePlayerName();
            this.UpdatePlayerLevel();
            this.UpdatePlayerLevelProgressBar();
            this.UpdatePlayerLineUp();
        }

        private void Update()
        {
        }
    #endregion

    #region Buttons Callbacks
        void TaskOnClickPokemon1()
        {
            if(this.lineup[0].image.sprite != null)
            {
                this.playerInfo.HandleFollower(0);
            }
        }
        void TaskOnClickPokemon2()
        {
            if(this.lineup[1].image.sprite != null)
            {
                this.playerInfo.HandleFollower(1);
            }
        }
        void TaskOnClickPokemon3()
        {
            if(this.lineup[2].image.sprite != null)
            {
                this.playerInfo.HandleFollower(2);
            }
        }
        void TaskOnClickPokemon4()
        {
            if(this.lineup[3].image.sprite != null)
            {
                this.playerInfo.HandleFollower(3);
            }
        }
        void TaskOnClickPokemon5()
        {
            if(this.lineup[4].image.sprite != null)
            {
                this.playerInfo.HandleFollower(4);
            }
        }
        void TaskOnClickPokemon6()
        {
            if(this.lineup[5].image.sprite != null)
            {
                this.playerInfo.HandleFollower(5);
            }
        }
    #endregion

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
            string id = this.playerInfo.partyPokemons[i].resourceID;

            this.lineup[i].image.sprite = this.pokemonResources.RetrievePokemonResource(id).sprite;
            this.lineup[i].image.color  = new Color(this.lineup[i].image.color.r, this.lineup[i].image.color.g, this.lineup[i].image.color.b, 1.00f);
        }

        for(; i < 6; i++)
        {
            this.lineup[i].image.color = new Color(this.lineup[i].image.color.r, this.lineup[i].image.color.g, this.lineup[i].image.color.b, 0.00f);
        }
    }
}