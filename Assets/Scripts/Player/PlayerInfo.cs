using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerInfo : MonoBehaviour
{
    #region Internal Variables Declaration 
        internal int            accountID           { get; set; }
        internal int            playerID            { get; set; }
        internal string         playerName          { get; set; }
        internal string         playerClass         { get; set; }
        internal int            playerBaseLvl       { get; set; }
        internal float          playerBaseLvlExp    { get; set; }
        internal string         playerCurrentMap    { get; set; }
        internal Vector3        playerPosition      { get; set; }
        internal int            playerMoney         { get; set; }
        internal List<Pokemon>  partyPokemons       { get; set; } = new List<Pokemon>();
        internal int            followerPokemonIdx  { get; set; }
    #endregion

    #region Private Variables Declaration
        private bool            ready               = false;

        private PokemonFollower followerInstance    = null;
    #endregion

    void Start()
    {
    }

    public void RetrievePlayerInformation(CtrlPlayer ctrlPlayer, int _playerID)
    {
        this.playerID = _playerID;

        this.GetPlayerInfo(ctrlPlayer);

        this.GetPlayerPartyInfo(ctrlPlayer);

        ready = true;
    }

    private void GetPlayerInfo(CtrlPlayer ctrlPlayer)
    {
        string  _playerName         = "";
        string  _playerClass        = "";
        int     _playerBaseLvl      = 0;
        float   _playerBaseLvlExp   = 0;
        string  _playerCurrentMap   = "";
        Vector3 _playerPosition     = Vector3.zero;
        int     _playerMoney        = 0;

        ctrlPlayer.getPlayerInfo(this.playerID, out _playerName, out _playerClass, out _playerBaseLvl, out _playerBaseLvlExp, out _playerCurrentMap, out _playerPosition, out _playerMoney);

        this.playerName          = _playerName;
        this.playerClass         = _playerClass;
        this.playerBaseLvl       = _playerBaseLvl;
        this.playerBaseLvlExp    = _playerBaseLvlExp;
        this.playerCurrentMap    = _playerCurrentMap;
        this.playerPosition      = _playerPosition;
        this.playerMoney         = _playerMoney;
    }

    private void GetPlayerPartyInfo(CtrlPlayer ctrlPlayer)
    {
        List<int> pokemonIDs;

        ctrlPlayer.getPlayerLineUp(this.playerID, out pokemonIDs);

        foreach(int pokemonID in pokemonIDs)
        {
            int     _speciesID          = 0;
            int     _originalTrainerID  = 0;
            int     _variantID          = 0;
            string  _nickname           = "";
            int     _currentHP          = 0;
            int     _baseLvl            = 0;
            int     _abilityID          = 0;
            int     _natureID           = 0;
            int     _captureBallID      = 0;
            int     _genderID           = 0;
            float   _baseLvlExp         = 0;
            IV      _ivs                = new IV(0, 0, 0, 0, 0, 0);
            EV      _untrainedEVs       = new EV(0, 0, 0, 0, 0, 0);
            EV      _trainedEVs         = new EV(0, 0, 0, 0, 0, 0);

            ctrlPlayer.getPokemonInformation(pokemonID, out _speciesID, out _originalTrainerID, out _variantID, out _nickname, out _currentHP, out _baseLvl, out _abilityID, out _natureID, out _captureBallID, out _genderID, out _baseLvlExp, out _ivs, out _untrainedEVs, out _trainedEVs);

            this.partyPokemons.Add(new Pokemon(pokemonID, _speciesID, _originalTrainerID, _variantID, _nickname, _currentHP, _baseLvl, _abilityID, _natureID, _captureBallID, _genderID, _baseLvlExp, _ivs, _untrainedEVs, _trainedEVs));
        }
    }

    public IEnumerator IsReady()
    {
        while(!ready)
        { 
            yield return null;
        }
    }

    public void AwardExp(float value)
    {
        if((this.playerBaseLvlExp + value) >= 100.0f)
        {
            this.playerBaseLvl++;

            this.playerBaseLvlExp  = (this.playerBaseLvlExp + value) - 100.0f;
        }
        else
        {
            this.playerBaseLvlExp += value;
        }
    }

    public void setFollowerController(PokemonFollower value)
    {
        this.followerInstance = value;
    }

    public void EnableFollower(GameObject theFollower)
    {
        this.followerInstance.CreateFollower(theFollower);
    }

    public void DisableFollower()
    {
        this.followerInstance.RemoveFollower();
    }

    public void ReplaceFollower(GameObject newFollower)
    {
        this.followerInstance.SwitchFollower(newFollower);
    }
}
