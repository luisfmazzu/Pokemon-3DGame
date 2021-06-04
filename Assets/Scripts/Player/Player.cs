using System.Collections;
using System.Data;
using UnityEngine;

public class Player : MonoBehaviour
{
    #region Internal Variables Declaration 
        internal int        playerID            { get; set; }
        internal string     playerName          { get; set; }
        internal string     playerClass         { get; set; }
        internal int        playerBaseLvl       { get; set; }
        internal float      playerBaseLvlExp    { get; set; }
        internal string     playerCurrentMap    { get; set; }
        internal Vector3    playerPosition      { get; set; }
        internal int        playerMoney         { get; set; }
    #endregion

    private CtrlPlayer ctrlPlayer;

    private bool ready = false;

    void Start()
    {
        //Rigidbody2D player_rb2D = GameObject.FindGameObjectWithTag("Player").GetComponent<Rigidbody2D>(); // We instantiate our player RigidBody2D, so we can freeze it's movements

        ctrlPlayer = new CtrlPlayer();

        // hard-coded for now
        playerID = 1;

        string  _playerName         = "";
        string  _playerClass        = "";
        int     _playerBaseLvl      = 0;
        float   _playerBaseLvlExp   = 0;
        string  _playerCurrentMap   = "";
        Vector3 _playerPosition     = Vector3.zero;
        int     _playerMoney        = 0;

        ctrlPlayer.getPlayerInfo(playerID, out _playerName, out _playerClass, out _playerBaseLvl, out _playerBaseLvlExp, out _playerCurrentMap, out _playerPosition, out _playerMoney);

        playerName          = _playerName;
        playerClass         = _playerClass;
        playerBaseLvl       = _playerBaseLvl;
        playerBaseLvlExp    = _playerBaseLvlExp;
        playerCurrentMap    = _playerCurrentMap;
        playerPosition      = _playerPosition;
        playerMoney         = _playerMoney;

        /*PlayerID = ctrlPlayer.getPlayerID("LeoWPereira", "Leonardo91"); //TODO: Modify this function call to call with the values of the user's input at the menu screen 

        player_rb2D.position = PlayerPosition; // Here we set the player Position in World Coords*/

        ready = true;
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
}
