using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class PokeInfoGUI : MonoBehaviour
{
    #region Constant Values
        private         Vector3 cameraOffset = new Vector3(-1.76f, 1.52f, -5.62f);

        private const   int     RENDER_TEXTURE_DEPTH    = 32;
        private const   int     MIN_16_BITS_VALUE       = -32767;
        private const   int     MAX_16_BITS_VALUE       = 32767;
    #endregion

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
        private FSM             fsm;

        private Text            titleText;

        private InfoPanel       infoPanel;
        private MovesPanel      movesPanel;
        private IVEVPanel       ivevPanel;
        private EtcPanel        etcPanel;

        private GameObject      pokemonModel;
        private Animator        pokemonModelAnimator;
        private RawImage        pokemonRawImage;
        private RenderTexture   pokemonRenderTexture;
        private Dropdown        animationSelector;

        private Camera          pokemonModelCamera;
        private Light           pokemonModelDirectionalLight;
    #endregion

    private void Awake()
    {
        this.fsm = FSM.Info;

        Transform panelTransform = this.transform.Find("Canvas").Find("Panel");
        this.titleText = panelTransform.Find("Header").Find("Text").GetComponent<Text>();

        Transform pokeModelTransform = panelTransform.Find("PokeModel");

        this.animationSelector              = pokeModelTransform.Find("AnimationSelector").GetComponent<Dropdown>();
        this.pokemonRawImage                = pokeModelTransform.Find("Pokemon").GetComponent<RawImage>();

        this.pokemonModelCamera             = this.transform.Find("ModelCamera").GetComponent<Camera>();
        this.pokemonModelDirectionalLight   = this.transform.Find("DirectionalLight").GetComponent<Light>();
    }

    void Start()
    {
        this.titleText.text = SystemManager.Instance.PlayerData.playersInfo.RetrievePlayer(this.pokemon.currentTrainerID).playerName + "' " + this.pokemon.nickname;

        Transform tabsTransform = this.transform.Find("Canvas").Find("Panel").Find("Tabs");

        this.infoPanel  = new InfoPanel(this.pokemon, tabsTransform.Find("Info"), this);
        this.movesPanel = new MovesPanel(this.pokemon, tabsTransform.Find("Moves"), this);
        this.ivevPanel  = new IVEVPanel(this.pokemon, tabsTransform.Find("IVsEVs"), this);
        this.etcPanel   = new EtcPanel(this.pokemon, tabsTransform.Find("Etc"), this);

        this.ConfigureAnimationSelector();
        this.ConfigurePokemonModel();
    }

    void Update()
    {
        switch(this.fsm)
        {
            case FSM.Info:
                this.infoPanel.Update();
                break;

            case FSM.Moves:
                this.movesPanel.Update();
                break;

            case FSM.IVEV:
                this.ivevPanel.Update();
                break;

            case FSM.Etc:
                this.etcPanel.Update();
                break;
        }
    }

    void ConfigureAnimationSelector()
    {
        this.animationSelector.options.Clear();

        foreach(string key in PokemonAnimations.animationsDict.Keys)
        {
            this.animationSelector.options.Add(new Dropdown.OptionData(key));
        }

        this.animationSelector.onValueChanged.AddListener(delegate
        {
            ChangeModelAnimation();
        });
    }

    void ChangeModelAnimation()
    {
        this.pokemonModelAnimator.Play(PokemonAnimations.animationsDict[this.animationSelector.options[this.animationSelector.value].text]);
    }

    void ConfigurePokemonModel()
    {
        RectTransform panelTransform = this.transform.Find("Canvas").Find("Panel").Find("PokeModel").GetComponent<RectTransform>();

        this.pokemonRenderTexture = new RenderTexture((int)panelTransform.rect.width, (int)panelTransform.rect.height, RENDER_TEXTURE_DEPTH);

        this.pokemonModelCamera.targetTexture   = this.pokemonRenderTexture;
        this.pokemonRawImage.texture            = this.pokemonRenderTexture;

        float randomCoord = this.GenerateRandomFloat(DateTime.Now.Millisecond);
        Vector3 randomPosition = new Vector3(randomCoord, randomCoord, randomCoord);

        this.pokemonModel = Instantiate(SystemManager.Instance.PokemonData.pokemonResources.RetrievePokemonResource(this.pokemon.resourceID).prefab, randomPosition, new Quaternion(0, 180, 0, 0)) as GameObject;
        this.pokemonModel.transform.parent = gameObject.transform;

        this.pokemonModelAnimator = this.pokemonModel.GetComponentInChildren<Animator>();

        this.pokemonModelCamera.transform.position = randomPosition + this.cameraOffset;

        this.pokemonModelDirectionalLight.transform.position = this.pokemonModelCamera.transform.position;
    }

    float GenerateRandomFloat(int seed)
    {
        System.Random random = new System.Random(seed);

        double val = random.NextDouble() * (MAX_16_BITS_VALUE - MIN_16_BITS_VALUE) + MIN_16_BITS_VALUE;

        return (float)val;
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
