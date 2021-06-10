using System.Collections;
using System.Data;
using UnityEngine;

public class PlayerInfo : MonoBehaviour
{
    #region Internal Variables Declaration 
        internal int        accountID           { get; set; }
        internal int        playerID            { get; set; }
        internal string     playerName          { get; set; }
        internal string     playerClass         { get; set; }
        internal int        playerBaseLvl       { get; set; }
        internal float      playerBaseLvlExp    { get; set; }
        internal string     playerCurrentMap    { get; set; }
        internal Vector3    playerPosition      { get; set; }
        internal int        playerMoney         { get; set; }
        internal Pokemon[]  partyPokemons       { get; set; } = { null, null, null, null, null, null };
    #endregion

    #region Private Variables Declaration
        private         bool        ready       = false;
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

    }

    void Update()
    {

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
}
