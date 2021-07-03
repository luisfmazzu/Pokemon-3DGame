using UnityEngine;
using UnityEngine.UI;

public class PokeInfoGUI : MonoBehaviour
{
    #region Public Variables Declaration
        public Pokemon pokemon { get; set; }
    #endregion

    #region Private Variables Declaration
        private Text titleText;
        private Text hpStat;
        private Text atkStat;
        private Text defStat;
        private Text spAtkStat;
        private Text spDefStat;
        private Text speedStat;
    #endregion

    private void Awake()
    {
        Transform panelTransform = this.transform.Find("Canvas").Find("Panel");
        this.titleText = panelTransform.Find("Header").Find("Text").GetComponent<Text>();

        Transform statsTransform = panelTransform.Find("Tabs").Find("Info").Find("Panel").Find("Stats");
        this.hpStat     = statsTransform.Find("HP").Find("Value").Find("Value").GetComponent<Text>();
        this.atkStat    = statsTransform.Find("Attack").Find("Value").Find("Value").GetComponent<Text>();
        this.defStat    = statsTransform.Find("Defense").Find("Value").Find("Value").GetComponent<Text>();
        this.spAtkStat  = statsTransform.Find("Sp. Attack").Find("Value").Find("Value").GetComponent<Text>();
        this.spDefStat  = statsTransform.Find("Sp. Defense").Find("Value").Find("Value").GetComponent<Text>();
        this.speedStat  = statsTransform.Find("Speed").Find("Value").Find("Value").GetComponent<Text>();
    }

    void Start()
    {
        this.titleText.text = SystemManager.Instance.PlayerData.playersInfo.RetrievePlayer(this.pokemon.currentTrainerID).playerName + "' " + this.pokemon.nickname;
        this.hpStat.text    = this.pokemon.stats.maxHP.ToString();
        this.atkStat.text   = this.pokemon.stats.attack.ToString();
        this.defStat.text   = this.pokemon.stats.defense.ToString();
        this.spAtkStat.text = this.pokemon.stats.spAttack.ToString();
        this.spDefStat.text = this.pokemon.stats.spDefense.ToString();
        this.speedStat.text = this.pokemon.stats.speed.ToString();

        PokemonNatures.Nature nature = SystemManager.Instance.PokemonData.pokemonNatures.RetrievePokemonNature(this.pokemon.natureID);

        if(nature.increased_stat_id != nature.decreased_stat_id)
        {
            switch(nature.increased_stat_id)
            {
                case(int)PokemonEnums.Stats.attack:
                    this.atkStat.color = new Color(0,1, 0);
                    break;

                case(int)PokemonEnums.Stats.defense:
                    this.defStat.color = new Color(0, 1, 0);
                    break;

                case(int)PokemonEnums.Stats.spAttack:
                    this.spAtkStat.color = new Color(0, 1, 0);
                    break;

                case(int)PokemonEnums.Stats.spDefense:
                    this.spDefStat.color = new Color(0, 1, 0);
                    break;

                case(int)PokemonEnums.Stats.speed:
                    this.speedStat.color = new Color(0, 1, 0);
                    break;
            }

            switch(nature.decreased_stat_id)
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
}