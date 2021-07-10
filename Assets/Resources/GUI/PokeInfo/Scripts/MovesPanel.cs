using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class MovesPanel : GenericInfoGUI
{
    #region Private Variables Declaration
    #endregion

    public MovesPanel(Pokemon _pokemon, Transform _coreTransform, PokeInfoGUI _rootGUI) : base(_pokemon, _coreTransform, _rootGUI)
    {
    }

    public override void Awake()
    {
    }

    public override void Start()
    {
    }

    public override void Update()
    {

    }

    public override void PanelTaskOnClick()
    {
        this.rootGUI.UpdateState(PokeInfoGUI.FSM.Moves);
    }
}
