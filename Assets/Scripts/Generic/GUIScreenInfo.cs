﻿using UnityEngine;

public class GUIScreenInfo : MonoBehaviour
{
    #region Public Variables Declaration
        public struct ScreenRatio
        {
            float _width;
            float _heigth;

            public ScreenRatio(float width, float heigth)
            {
                _width = width;
                _heigth = heigth;
            }

            public float width
            {
                get { return _width; }
            }

            public float heigth
            {
                get { return _heigth; }
            }
        }
    #endregion

    #region Private Variables Declaration
        private const float _defaultWidth = 1920.0f;
        private const float _defaultHeigth = 1080.0f;

        private ScreenRatio _currentToDefaultRatio = new ScreenRatio(Screen.width / _defaultWidth, Screen.height / _defaultHeigth);

        private static GUIScreenInfo _instance;
    #endregion

    public static GUIScreenInfo Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = (GUIScreenInfo)GameObject.FindObjectOfType(typeof(GUIScreenInfo));

                if (_instance == null)
                {
                    GameObject go = new GameObject("GUIScreenInfo:Singleton");

                    _instance = go.AddComponent<GUIScreenInfo>();
                }
            }

            return _instance;
        }
        set
        {
            _instance = value;
        }
    }

    public float defaultWidth
    {
        get { return _defaultWidth; }
    }

    public float defaultHeigth
    {
        get { return _defaultHeigth; }
    }

    public ScreenRatio currentToDefaultRatio
    {
        get { return _currentToDefaultRatio; }
    }
}