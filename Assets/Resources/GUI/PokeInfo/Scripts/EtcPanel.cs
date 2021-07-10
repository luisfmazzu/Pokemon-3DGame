using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class EtcPanel : GenericInfoGUI
{
    #region Private Variables Declaration
        private Text originalTrainerText;
    #endregion

    public EtcPanel(Pokemon _pokemon, Transform _coreTransform, PokeInfoGUI _rootGUI) : base(_pokemon, _coreTransform, _rootGUI)
    {
    }

    public override void Awake()
    {
        this.originalTrainerText = this.coreTransform.Find("Panel").Find("OT").Find("Value").Find("Value").GetComponent<Text>();
    }

    public override void Start()
    {
        this.originalTrainerText.text = SystemManager.Instance.PlayerData.playersInfo.RetrievePlayer(this.pokemon.originalTrainerID).playerName;
    }

    public override void Update()
    {

    }

    public override void PanelTaskOnClick()
    {
        this.rootGUI.UpdateState(PokeInfoGUI.FSM.Etc);
    }
}
