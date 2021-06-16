using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerManager : MonoBehaviour
{
    #region Public Fields
        public PlayerInfo       PlayerInfo;

        public PlayerController PlayerController;

        public PokemonFollower  PokemonFollower;
    #endregion

    #region Private Variables Declaration

    private static PlayerManager _instance;
    #endregion

    public static PlayerManager Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = (PlayerManager)GameObject.FindObjectOfType(typeof(PlayerManager));
            }
            return _instance;
        }
        set
        {
            _instance = value;
        }
    }

    void Awake()
    {
        if (_instance != null && _instance != this)
        {
            Destroy(this);

            return;
        }

        _instance = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
