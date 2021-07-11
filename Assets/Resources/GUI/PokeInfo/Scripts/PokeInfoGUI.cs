using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class PokeInfoGUI : MonoBehaviour
{
    #region Constant Values
        private const   int     RENDER_TEXTURE_DEPTH                = 32;
        private const   int     MIN_16_BITS_VALUE                   = -32767;
        private const   int     MAX_16_BITS_VALUE                   = 32767;
        private const int       NUMBER_OF_FRAMES_TO_UPDATE_MODEL    = 2;
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

        private int             framesToUpdateCamera;
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

        this.framesToUpdateCamera = NUMBER_OF_FRAMES_TO_UPDATE_MODEL;
    }

    void Update()
    {
        if(this.framesToUpdateCamera > 0)
        {
            this.CalculateCameraAndLightConfigs();

            this.framesToUpdateCamera--;
        }

        switch (this.fsm)
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

            this.framesToUpdateCamera = NUMBER_OF_FRAMES_TO_UPDATE_MODEL;
        });
    }

    void ConfigurePokemonModel()
    {
        this.ConfigureRenderTexture();

        this.InstantiateModel();

        this.CalculateCameraAndLightConfigs();
    }

    private void ConfigureRenderTexture()
    {
        RectTransform panelTransform = this.transform.Find("Canvas").Find("Panel").Find("PokeModel").GetComponent<RectTransform>();

        this.pokemonRenderTexture = new RenderTexture((int)panelTransform.rect.width, (int)panelTransform.rect.height, RENDER_TEXTURE_DEPTH);

        this.pokemonModelCamera.targetTexture = this.pokemonRenderTexture;
        this.pokemonRawImage.texture = this.pokemonRenderTexture;
    }

    private void InstantiateModel()
    {
        float randomCoord = GenericMethods.GenerateRandomFloat(DateTime.Now.Millisecond, MIN_16_BITS_VALUE, MAX_16_BITS_VALUE);
        Vector3 randomPosition = new Vector3(randomCoord, randomCoord, randomCoord);

        this.pokemonModel = SystemManager.Instance.PokemonData.pokemonResources.RetrievePokemonResource(this.pokemon.resourceID).prefab;

        this.pokemonModel = Instantiate(this.pokemonModel, randomPosition, new Quaternion(0, 180, 0, 0)) as GameObject;
        this.pokemonModel.transform.parent = gameObject.transform;

        this.pokemonModelAnimator = this.pokemonModel.GetComponentInChildren<Animator>();
    }

    private void CalculateCameraAndLightConfigs()
    {
        Renderer pokemonModelRenderer = this.pokemonModel.GetComponentInChildren<Renderer>();

        Renderer[] childrenRenderers = pokemonModel.GetComponentsInChildren<Renderer>();

        Bounds bounds = pokemonModelRenderer.bounds;
           
        if(childrenRenderers.Length > 0)
        {
            foreach (Renderer renderer in childrenRenderers)
            {
                if (renderer.enabled)
                {
                    bounds.Encapsulate(renderer.bounds);
                }
            }
        }

        float maxExtent = bounds.extents.magnitude;
        float minDistance = (maxExtent * 0.8f) / Mathf.Sin(Mathf.Deg2Rad * this.pokemonModelCamera.fieldOfView / 2f);
        this.pokemonModelCamera.transform.position = this.pokemonModel.transform.position - (Vector3.forward * minDistance);
        this.pokemonModelCamera.transform.position += new Vector3(0, Math.Min(bounds.extents.x, Math.Min(bounds.extents.y, bounds.extents.z)), 0);

        this.pokemonModelCamera.nearClipPlane = minDistance - maxExtent;
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
