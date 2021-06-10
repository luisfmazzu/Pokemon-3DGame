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

    #region Private Variables Declaration
        private         bool        ready       = false;

        private static  Player      _instance;
    #endregion

    public static Player Instance
    {
        get
        {
            if(_instance == null)
            {
                _instance = (Player)GameObject.FindObjectOfType(typeof(Player));

                if(_instance == null)
                {
                    GameObject go = new GameObject("Player:Singleton");

                    _instance = go.AddComponent<Player>();
                }
            }

            return _instance;
        }
        set
        {
            _instance = value;
        }
    }

    private void Awake()
    {
        if(_instance != null && _instance != this)
        {
            Destroy(this.gameObject);
         
            return;
        }

        _instance = this;
        DontDestroyOnLoad(this.gameObject);
    }

    void Start()
    {
    }

    public void RetrievePlayerInformation(CtrlPlayer ctrlPlayer, int _playerID)
    {
        string _playerName          = "";
        string _playerClass         = "";
        int _playerBaseLvl          = 0;
        float _playerBaseLvlExp     = 0;
        string _playerCurrentMap    = "";
        Vector3 _playerPosition     = Vector3.zero;
        int _playerMoney            = 0;

        ctrlPlayer.getPlayerInfo(_playerID, out _playerName, out _playerClass, out _playerBaseLvl, out _playerBaseLvlExp, out _playerCurrentMap, out _playerPosition, out _playerMoney);

        playerName          = _playerName;
        playerClass         = _playerClass;
        playerBaseLvl       = _playerBaseLvl;
        playerBaseLvlExp    = _playerBaseLvlExp;
        playerCurrentMap    = _playerCurrentMap;
        playerPosition      = _playerPosition;
        playerMoney         = _playerMoney;

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
