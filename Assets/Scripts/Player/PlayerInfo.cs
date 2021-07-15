using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static PlayersInfo;

public class PlayerInfo : MonoBehaviour
{
    #region Constant Variables
        private const string INVALID_FOLLOWER = "-1";
    #endregion

    #region Internal Variables Declaration
        internal int            accountID           { get; set; }
        internal int            playerID            { get; set; }
        internal Player         playerData          { get; set; }
        internal List<Pokemon>  partyPokemons       { get; set; }   = new List<Pokemon>();
        internal string         followerPokemonIdx  { get; set; }   = INVALID_FOLLOWER;
    #endregion

    #region Private Variables Declaration
        private bool                ready                   = false;

        private PokemonFollower     followerInstance        = null;

        private PlayerInfoBar       playerInfoBarInstance   = null;

        private TeamButton          teamButtonInstance      = null;

        private PokemonResources    pokemonResources        = null;
    #endregion

    public IEnumerator IsReady()
    {
        while(!ready)
        {
            yield return null;
        }
    }

    #region Unity Overloaded Methods
        void Start()
        {
            Debug.Log("Called method PlayerInfo::Start");

            this.pokemonResources = SystemManager.Instance.PokemonData.pokemonResources;
        }
    #endregion

    #region Follower Controller Methods
        public void setFollowerInstance(PokemonFollower value)
        {
            this.followerInstance = value;
        }

        public void HandleFollower(int index)
        {
            string id = this.partyPokemons[index].resourceID;

            if(this.followerPokemonIdx == INVALID_FOLLOWER)
            {
                this.followerInstance.CreateFollower(this.pokemonResources.RetrievePokemonResource(id).prefab, this.partyPokemons[index]);

                this.followerPokemonIdx = id;
            }
            else if(this.followerPokemonIdx == id)
            {
                this.followerInstance.RemoveFollower();

                this.followerPokemonIdx = INVALID_FOLLOWER;
            }
            else
            {
                this.followerInstance.SwitchFollower(this.pokemonResources.RetrievePokemonResource(id).prefab, this.partyPokemons[index]);

                this.followerPokemonIdx = id;
            }
        }
    #endregion

    #region Player Info Bar Methods
        public void setPlayerInfoBarInstance(PlayerInfoBar value)
        {
            this.playerInfoBarInstance = value;
        }
    #endregion

    #region Team Button Methods
        public void setTeamButtonInstance(TeamButton value)
        {
            this.teamButtonInstance = value;
        }
    #endregion

    public void RetrievePlayerInformation(int _playerID)
    {
        this.playerID = _playerID;

        this.GetPlayerInfo();

        this.GetPlayerPartyInfo();

        ready = true;
    }

    private void GetPlayerInfo()
    {
        this.playerData = SystemManager.Instance.PlayerData.playersInfo.RetrievePlayer(this.playerID);
    }

    private void GetPlayerPartyInfo()
    {
        CtrlPlayer  ctrlPlayer  = new CtrlPlayer();
        CtrlPokemon ctrlPokemon = new CtrlPokemon();

        List<int> pokemonIDs;

        ctrlPlayer.getPlayerLineUp(this.playerID, out pokemonIDs);

        foreach(int pokemonID in pokemonIDs)
        {
            int             _speciesID          = 0;
            int             _originalTrainerID  = 0;
            int             _variantID          = 0;
            string          _nickname           = "";
            int             _currentHP          = 0;
            int             _baseLvl            = 0;
            int             _abilityID          = 0;
            int             _natureID           = 0;
            int             _captureBallID      = 0;
            int             _genderID           = 0;
            int             _happiness          = 0;
            float           _baseLvlExp         = 0;
            BaseAttributes  _ivs                = new BaseAttributes(0, 0, 0, 0, 0, 0);
            BaseAttributes  _untrainedEVs       = new BaseAttributes(0, 0, 0, 0, 0, 0);
            BaseAttributes  _trainedEVs         = new BaseAttributes(0, 0, 0, 0, 0, 0);

            ctrlPokemon.getPokemonInformation(pokemonID, out _speciesID, out _originalTrainerID, out _variantID, out _nickname, out _currentHP, out _baseLvl, out _abilityID, out _natureID, out _captureBallID, out _genderID, out _baseLvlExp, out _ivs, out _untrainedEVs, out _trainedEVs, out _happiness);

            this.partyPokemons.Add(new Pokemon(pokemonID, _speciesID, _originalTrainerID, this.playerID, _variantID, _nickname, _currentHP, _baseLvl, _abilityID, _natureID, _captureBallID, _genderID, _happiness, _baseLvlExp, _ivs, _untrainedEVs, _trainedEVs));
        }
    }

    public Pokemon RetrievePartyPokemon(int partyIndex)
    {
        return this.partyPokemons[partyIndex];
    }

    public void AwardExp(float value)
    {
        if((this.playerData.playerBaseLvlExp + value) >= 100.0f)
        {
            this.playerData.playerBaseLvl++;

            this.playerData.playerBaseLvlExp  = (this.playerData.playerBaseLvlExp + value) - 100.0f;

            this.playerInfoBarInstance.UpdatePlayerLevel();
        }
        else
        {
            this.playerData.playerBaseLvlExp += value;
        }

        this.playerInfoBarInstance.UpdatePlayerLevelProgressBar();
    }
}
