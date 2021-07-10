using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class IVEVPanel : GenericInfoGUI
{
    #region Private Variables Declaration
        private Text hpIV;
        private Text attackIV;
        private Text defenseIV;
        private Text spAttackIV;
        private Text spDefenseIV;
        private Text speedIV;
        private Text hpTrainedEV;
        private Text attackTrainedEV;
        private Text defenseTrainedEV;
        private Text spAttackTrainedEV;
        private Text spDefenseTrainedEV;
        private Text speedTrainedEV;
        private Text hpAvailableEV;
        private Text attackAvailableEV;
        private Text defenseAvailableEV;
        private Text spAttackAvailableEV;
        private Text spDefenseAvailableEV;
        private Text speedAvailableEV;

        private Button  hpEVButton;
        private Button  hpAttackButton;
        private Button  hpDefenseButton;
        private Button  hpSpAttackButton;
        private Button  hpSpDefenseButton;
        private Button  hpSpeedButton;
    #endregion

    public IVEVPanel(Pokemon _pokemon, Transform _coreTransform, PokeInfoGUI _rootGUI) : base(_pokemon, _coreTransform, _rootGUI)
    {
    }

    public override void Awake()
    {
        Transform statsTransform = this.coreTransform.Find("Panel").Find("Attributes");

        this.hpIV                   = statsTransform.Find("HP").Find("IV").Find("Value").GetComponent<Text>();
        this.hpTrainedEV            = statsTransform.Find("HP").Find("EV").Find("Trained EV").GetComponent<Text>();
        this.hpAvailableEV          = statsTransform.Find("HP").Find("EV").Find("Available EV").GetComponent<Text>();
        this.hpEVButton             = statsTransform.Find("HP").Find("EV").Find("Increment Button").GetComponent<Button>();

        this.attackIV               = statsTransform.Find("Attack").Find("IV").Find("Value").GetComponent<Text>();
        this.attackTrainedEV        = statsTransform.Find("Attack").Find("EV").Find("Trained EV").GetComponent<Text>();
        this.attackAvailableEV      = statsTransform.Find("Attack").Find("EV").Find("Available EV").GetComponent<Text>();
        this.hpAttackButton         = statsTransform.Find("Attack").Find("EV").Find("Increment Button").GetComponent<Button>();

        this.defenseIV              = statsTransform.Find("Defense").Find("IV").Find("Value").GetComponent<Text>();
        this.defenseTrainedEV       = statsTransform.Find("Defense").Find("EV").Find("Trained EV").GetComponent<Text>();
        this.defenseAvailableEV     = statsTransform.Find("Defense").Find("EV").Find("Available EV").GetComponent<Text>();
        this.hpDefenseButton        = statsTransform.Find("Defense").Find("EV").Find("Increment Button").GetComponent<Button>();

        this.spAttackIV             = statsTransform.Find("Sp. Attack").Find("IV").Find("Value").GetComponent<Text>();
        this.spAttackTrainedEV      = statsTransform.Find("Sp. Attack").Find("EV").Find("Trained EV").GetComponent<Text>();
        this.spAttackAvailableEV    = statsTransform.Find("Sp. Attack").Find("EV").Find("Available EV").GetComponent<Text>();
        this.hpSpAttackButton       = statsTransform.Find("Sp. Attack").Find("EV").Find("Increment Button").GetComponent<Button>();

        this.spDefenseIV            = statsTransform.Find("Sp. Defense").Find("IV").Find("Value").GetComponent<Text>();
        this.spDefenseTrainedEV     = statsTransform.Find("Sp. Defense").Find("EV").Find("Trained EV").GetComponent<Text>();
        this.spDefenseAvailableEV   = statsTransform.Find("Sp. Defense").Find("EV").Find("Available EV").GetComponent<Text>();
        this.hpSpDefenseButton      = statsTransform.Find("Sp. Defense").Find("EV").Find("Increment Button").GetComponent<Button>();

        this.speedIV                = statsTransform.Find("Speed").Find("IV").Find("Value").GetComponent<Text>();
        this.speedTrainedEV         = statsTransform.Find("Speed").Find("EV").Find("Trained EV").GetComponent<Text>();
        this.speedAvailableEV       = statsTransform.Find("Speed").Find("EV").Find("Available EV").GetComponent<Text>();
        this.hpSpeedButton          = statsTransform.Find("Speed").Find("EV").Find("Increment Button").GetComponent<Button>();

        this.hpEVButton.onClick.AddListener(HPIncrementOnClick);
        this.hpAttackButton.onClick.AddListener(AttackIncrementOnClick);
        this.hpDefenseButton.onClick.AddListener(DefenseIncrementOnClick);
        this.hpSpAttackButton.onClick.AddListener(SpAttackIncrementOnClick);
        this.hpSpDefenseButton.onClick.AddListener(SpDefenseIncrementOnClick);
        this.hpSpeedButton.onClick.AddListener(SpeedIncrementOnClick);
    }

    public override void Start()
    {
        this.UpdateAttributesIV();
        this.UpdateAttributesEV();
    }

    public override void Update()
    {
        this.UpdateAttributesEV();
    }

    void UpdateAttributesIV()
    {
        this.hpIV.text          = this.pokemon.ivs.hp.ToString();
        this.attackIV.text      = this.pokemon.ivs.attack.ToString();
        this.defenseIV.text     = this.pokemon.ivs.defense.ToString();
        this.spAttackIV.text    = this.pokemon.ivs.spAttack.ToString();
        this.spDefenseIV.text   = this.pokemon.ivs.spDefense.ToString();
        this.speedIV.text       = this.pokemon.ivs.speed.ToString();
    }

    void UpdateAttributesEV()
    {
        this.hpTrainedEV.text           = this.pokemon.trainedEVs.hp.ToString();
        this.attackTrainedEV.text       = this.pokemon.trainedEVs.attack.ToString();
        this.defenseTrainedEV.text      = this.pokemon.trainedEVs.defense.ToString();
        this.spAttackTrainedEV.text     = this.pokemon.trainedEVs.spAttack.ToString();
        this.spDefenseTrainedEV.text    = this.pokemon.trainedEVs.spDefense.ToString();
        this.speedTrainedEV.text        = this.pokemon.trainedEVs.speed.ToString();

        this.hpAvailableEV.text         = "(" + this.pokemon.untrainedEVs.hp.ToString() + ")";
        this.attackAvailableEV.text     = "(" + this.pokemon.untrainedEVs.attack.ToString() + ")";
        this.defenseAvailableEV.text    = "(" + this.pokemon.untrainedEVs.defense.ToString() + ")";
        this.spAttackAvailableEV.text   = "(" + this.pokemon.untrainedEVs.spAttack.ToString() + ")";
        this.spDefenseAvailableEV.text  = "(" + this.pokemon.untrainedEVs.spDefense.ToString() + ")";
        this.speedAvailableEV.text      = "(" + this.pokemon.untrainedEVs.speed.ToString() + ")";
    }

    public override void PanelTaskOnClick()
    {
        this.rootGUI.UpdateState(PokeInfoGUI.FSM.IVEV);
    }

    void HPIncrementOnClick()
    {
        this.pokemon.MoveUntrainedEVToTrainedEV(PokemonEnums.Stats.hp, 1);
    }

    void AttackIncrementOnClick()
    {
        this.pokemon.MoveUntrainedEVToTrainedEV(PokemonEnums.Stats.attack, 1);
    }

    void DefenseIncrementOnClick()
    {
        this.pokemon.MoveUntrainedEVToTrainedEV(PokemonEnums.Stats.defense, 1);
    }

    void SpAttackIncrementOnClick()
    {
        this.pokemon.MoveUntrainedEVToTrainedEV(PokemonEnums.Stats.spAttack, 1);
    }

    void SpDefenseIncrementOnClick()
    {
        this.pokemon.MoveUntrainedEVToTrainedEV(PokemonEnums.Stats.spDefense, 1);
    }

    void SpeedIncrementOnClick()
    {
        this.pokemon.MoveUntrainedEVToTrainedEV(PokemonEnums.Stats.speed, 1);
    }
}
