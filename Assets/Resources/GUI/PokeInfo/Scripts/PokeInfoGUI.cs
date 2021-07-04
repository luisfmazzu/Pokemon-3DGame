using UnityEngine;
using UnityEngine.UI;

public class PokeInfoGUI : MonoBehaviour
{
    #region FSM
        public enum FSM
        {
            Info,
            Moves,
            IVEV,
            Etc
        }
    #endregion

    #region Public Variables Declaration
        public Pokemon  pokemon { get; set; }
    #endregion

    #region Private Variables Declaration
        private FSM         fsm;

        private Text        titleText;

        private InfoPanel   infoPanel;
        private MovesPanel  movesPanel;
        private IVEVPanel   ivevPanel;
        private EtcPanel    etcPanel;
    #endregion

    private void Awake()
    {
        this.fsm = FSM.Info;

        Transform panelTransform = this.transform.Find("Canvas").Find("Panel");
        this.titleText = panelTransform.Find("Header").Find("Text").GetComponent<Text>();
    }

    void Start()
    {
        this.titleText.text = SystemManager.Instance.PlayerData.playersInfo.RetrievePlayer(this.pokemon.currentTrainerID).playerName + "' " + this.pokemon.nickname;

        Transform tabsTransform = this.transform.Find("Canvas").Find("Panel").Find("Tabs");

        this.infoPanel  = new InfoPanel(this.pokemon, tabsTransform.Find("Info"), this);
        this.movesPanel = new MovesPanel(this.pokemon, tabsTransform.Find("Moves"), this);
        this.ivevPanel  = new IVEVPanel(this.pokemon, tabsTransform.Find("IVsEVs"), this);
        this.etcPanel   = new EtcPanel(this.pokemon, tabsTransform.Find("Etc"), this);
    }

    public void UpdateState(FSM _newState)
    {
        if(_newState != this.fsm)
        {
            switch(this.fsm)
            {
                case FSM.Info:
                    this.infoPanel.DisablePanel();
                    break;

                case FSM.Moves:
                    this.movesPanel.DisablePanel();
                    break;

                case FSM.IVEV:
                    this.ivevPanel.DisablePanel();
                    break;

                case FSM.Etc:
                    this.etcPanel.DisablePanel();
                    break;
            }

            switch(_newState)
            {
                case FSM.Info:
                    this.infoPanel.EnablePanel();
                    break;

                case FSM.Moves:
                    this.movesPanel.EnablePanel();
                    break;

                case FSM.IVEV:
                    this.ivevPanel.EnablePanel();
                    break;

                case FSM.Etc:
                    this.etcPanel.EnablePanel();
                    break;
            }

            this.fsm = _newState;
        }
    }
}

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
        button.onClick.AddListener(TaskOnClick);

        this.Awake();
        this.Start();
    }

    public abstract void Awake();

    public abstract void Start();

    public abstract void TaskOnClick();

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

public class InfoPanel : GenericInfoGUI
{
    #region Private Variables Declaration
        private Text        hpStat;
        private Text        atkStat;
        private Text        defStat;
        private Text        spAtkStat;
        private Text        spDefStat;
        private Text        speedStat;
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
    }

    public override void Start()
    {
        this.hpStat.text    = this.pokemon.stats.maxHP.ToString();
        this.atkStat.text   = this.pokemon.stats.attack.ToString();
        this.defStat.text   = this.pokemon.stats.defense.ToString();
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

    public override void TaskOnClick()
    {
        this.rootGUI.UpdateState(PokeInfoGUI.FSM.Info);
    }
}

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

    public override void TaskOnClick()
    {
        this.rootGUI.UpdateState(PokeInfoGUI.FSM.Moves);
    }
}

public class IVEVPanel : GenericInfoGUI
{
    #region Private Variables Declaration
    #endregion

    public IVEVPanel(Pokemon _pokemon, Transform _coreTransform, PokeInfoGUI _rootGUI) : base(_pokemon, _coreTransform, _rootGUI)
    {
    }

    public override void Awake()
    {
    }

    public override void Start()
    {
    }

    public override void TaskOnClick()
    {
        this.rootGUI.UpdateState(PokeInfoGUI.FSM.IVEV);
    }
}

public class EtcPanel : GenericInfoGUI
{
    #region Private Variables Declaration
    #endregion

    public EtcPanel(Pokemon _pokemon, Transform _coreTransform, PokeInfoGUI _rootGUI) : base(_pokemon, _coreTransform, _rootGUI)
    {
    }

    public override void Awake()
    {
    }

    public override void Start()
    {
    }

    public override void TaskOnClick()
    {
        this.rootGUI.UpdateState(PokeInfoGUI.FSM.Etc);
    }
}
