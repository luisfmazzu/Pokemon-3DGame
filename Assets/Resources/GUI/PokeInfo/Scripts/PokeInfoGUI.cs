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
            this.pokemonModelAnimator.Play(PokemonAnimations.animationsDict[this.animationSelector.options[this.animationSelector.value].text]);
        });
    }

    void ConfigurePokemonModel()
    {
        RectTransform panelTransform = this.transform.Find("Canvas").Find("Panel").Find("PokeModel").GetComponent<RectTransform>();

        this.pokemonRenderTexture = new RenderTexture((int)panelTransform.rect.width, (int)panelTransform.rect.height, RENDER_TEXTURE_DEPTH);

        this.pokemonModelCamera.targetTexture   = this.pokemonRenderTexture;
        this.pokemonRawImage.texture            = this.pokemonRenderTexture;

        float randomCoord = GenericMethods.GenerateRandomFloat(DateTime.Now.Millisecond, MIN_16_BITS_VALUE, MAX_16_BITS_VALUE);
        Vector3 randomPosition = new Vector3(randomCoord, randomCoord, randomCoord);

        this.pokemonModel = Instantiate(SystemManager.Instance.PokemonData.pokemonResources.RetrievePokemonResource(this.pokemon.resourceID).prefab, randomPosition, new Quaternion(0, 180, 0, 0)) as GameObject;
        this.pokemonModel.transform.parent = gameObject.transform;

        this.pokemonModelAnimator = this.pokemonModel.GetComponentInChildren<Animator>();

        this.pokemonModelCamera.transform.position = randomPosition + this.cameraOffset;

        this.pokemonModelDirectionalLight.transform.position = this.pokemonModelCamera.transform.position;
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
