using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SystemManager : MonoBehaviour
{
    #region Public Fields
        public GameObject   Camera;

        public GameObject   PanelUI;

        public GameObject   DayNightCycle;

        public PokemonData  PokemonData;
    #endregion

    #region Private Variables Declaration

    private static SystemManager _instance;
    #endregion

    public static SystemManager Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = (SystemManager)GameObject.FindObjectOfType(typeof(SystemManager));
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
}
