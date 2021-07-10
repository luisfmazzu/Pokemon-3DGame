using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public abstract class GenericInfoGUI
{
    #region Protected Variables Declaration
        protected PokeInfoGUI   rootGUI;

        protected Pokemon       pokemon;

        protected Transform     coreTransform;

        protected GameObject    mainPanel;

        protected Button        button;
    #endregion

    public GenericInfoGUI(Pokemon _pokemon, Transform _coreTransform, PokeInfoGUI _rootGUI)
    {
        this.rootGUI        = _rootGUI;
        this.pokemon        = _pokemon;
        this.coreTransform  = _coreTransform;

        this.mainPanel = coreTransform.Find("Panel").gameObject;

        this.button = coreTransform.Find("Button").GetComponent<Button>();
        button.onClick.AddListener(PanelTaskOnClick);

        this.Awake();
        this.Start();
    }

    public abstract void Awake();

    public abstract void Start();

    public abstract void Update();

    public abstract void PanelTaskOnClick();

    public void DisablePanel()
    {
        this.mainPanel.SetActive(false);
        this.button.GetComponent<Image>().color = new Color(0.1886792f, 0.1886792f, 0.1886792f);
    }

    public void EnablePanel()
    {
        this.mainPanel.SetActive(true);
        this.button.GetComponent<Image>().color = new Color(0.5f, 0.4652384f, 0.1910377f);
    }
}
