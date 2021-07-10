using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class InfoPanel : GenericInfoGUI
{
    #region Private Variables Declaration
        private Text        hpStat;
        private Text        atkStat;
        private Text        defStat;
        private Text        spAtkStat;
        private Text        spDefStat;
        private Text        speedStat;

        private Text        natureText;
        private Text        abilityText;

        private ProgressBar hpBar;
        private ProgressBar happinessBar;
    #endregion

    public InfoPanel(Pokemon _pokemon, Transform _coreTransform, PokeInfoGUI _rootGUI) : base(_pokemon, _coreTransform, _rootGUI)
    {
    }

    public override void Awake()
    {
        Transform statsTransform = this.coreTransform.Find("Panel").Find("Stats");
        this.hpStat     = statsTransform.Find("HP").Find("Value").Find("Value").GetComponent<Text>();
        this.atkStat    = statsTransform.Find("Attack").Find("Value").Find("Value").GetComponent<Text>();
        this.defStat    = statsTransform.Find("Defense").Find("Value").Find("Value").GetComponent<Text>();
        this.spAtkStat  = statsTransform.Find("Sp. Attack").Find("Value").Find("Value").GetComponent<Text>();
        this.spDefStat  = statsTransform.Find("Sp. Defense").Find("Value").Find("Value").GetComponent<Text>();
        this.speedStat  = statsTransform.Find("Speed").Find("Value").Find("Value").GetComponent<Text>();

        this.natureText     = this.coreTransform.Find("Panel").Find("Nature").Find("Value").Find("Value").GetComponent<Text>();
        this.abilityText    = this.coreTransform.Find("Panel").Find("Ability").Find("Value").Find("Value").GetComponent<Text>();

        this.hpBar          = this.coreTransform.Find("Panel").Find("HP").Find("Value").Find("Health Bar").GetComponent<ProgressBar>();
        this.happinessBar   = this.coreTransform.Find("Panel").Find("Happiness").Find("Value").Find("Happinness Bar").GetComponent<ProgressBar>();
    }

    public override void Start()
    {
        this.happinessBar.MaxIntBarValue    = BaseAttributes.MAX_HAPPINESS_VALUE;

        this.natureText.text    = SystemManager.Instance.PokemonData.pokemonNatures.RetrievePokemonNature(this.pokemon.natureID).name;
        this.abilityText.text   = SystemManager.Instance.PokemonData.pokemonAbilities.RetrievePokemonAbility(this.pokemon.abilityID).name;

        this.UpdateStats();
        this.UpdateBars();
    }

    public override void Update()
    {
        this.UpdateStats();
        this.UpdateBars();
    }

    public void UpdateStats()
    {
        this.hpStat.text = this.pokemon.stats.maxHP.ToString();
        this.atkStat.text = this.pokemon.stats.attack.ToString();
        this.defStat.text = this.pokemon.stats.defense.ToString();
        this.spAtkStat.text = this.pokemon.stats.spAttack.ToString();
        this.spDefStat.text = this.pokemon.stats.spDefense.ToString();
        this.speedStat.text = this.pokemon.stats.speed.ToString();

        PokemonNatures.Nature nature = SystemManager.Instance.PokemonData.pokemonNatures.RetrievePokemonNature(this.pokemon.natureID);

        if (nature.increased_stat_id != nature.decreased_stat_id)
        {
            switch (nature.increased_stat_id)
            {
                case (int)PokemonEnums.Stats.attack:
                    this.atkStat.color = new Color(0, 1, 0);
                    break;

                case (int)PokemonEnums.Stats.defense:
                    this.defStat.color = new Color(0, 1, 0);
                    break;

                case (int)PokemonEnums.Stats.spAttack:
                    this.spAtkStat.color = new Color(0, 1, 0);
                    break;

                case (int)PokemonEnums.Stats.spDefense:
                    this.spDefStat.color = new Color(0, 1, 0);
                    break;

                case (int)PokemonEnums.Stats.speed:
                    this.speedStat.color = new Color(0, 1, 0);
                    break;
            }

            switch (nature.decreased_stat_id)
            {
                case (int)PokemonEnums.Stats.attack:
                    this.atkStat.color = new Color(1, 0, 0);
                    break;

                case (int)PokemonEnums.Stats.defense:
                    this.defStat.color = new Color(1, 0, 0);
                    break;

                case (int)PokemonEnums.Stats.spAttack:
                    this.spAtkStat.color = new Color(1, 0, 0);
                    break;

                case (int)PokemonEnums.Stats.spDefense:
                    this.spDefStat.color = new Color(1, 0, 0);
                    break;

                case (int)PokemonEnums.Stats.speed:
                    this.speedStat.color = new Color(1, 0, 0);
                    break;
            }
        }
    }

    public void UpdateBars()
    {
        this.hpBar.MaxIntBarValue   = this.pokemon.stats.maxHP;
        this.hpBar.BarValue         = (this.pokemon.stats.currentHP / (float)this.pokemon.stats.maxHP) * 100.0f;
        this.happinessBar.BarValue  = (this.pokemon.happinness / (float)BaseAttributes.MAX_HAPPINESS_VALUE) * 100.0f;
    }

    public override void PanelTaskOnClick()
    {
        this.rootGUI.UpdateState(PokeInfoGUI.FSM.Info);
    }
}
