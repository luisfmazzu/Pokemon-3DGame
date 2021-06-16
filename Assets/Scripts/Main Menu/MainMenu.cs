using LukeWaffel.BUI;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenu : MonoBehaviour
{
    #region Serialize Fields
        [SerializeField]                    private UnityEditor.SceneAsset  loadingScreenSceneAsset;

        [SerializeField, Range(0, 10.0f)]   private float                   secondsToDisplayMessageDisappear = 2;

        [SerializeField]                    private EssentialsLoader        essentialsLoader;
    #endregion

    #region Private Variables
        private InputField  username;
        private InputField  password;
        private Button      clientLoginButton;
        private Button      hostLoginButton;
        private Button      registerButton;
        private Text        dynamicDisplayMessage;

        private CtrlPlayer  ctrlPlayer;

        private float       startMessageTime;
        private bool        isMessageBeingDisplayed;
    #endregion

    private void Awake()
    {
        Transform background        = this.transform.Find("Background");

        this.username               = background.Find("Text Fields").Find("Username").Find("InputField").GetComponent<InputField>();
        this.password               = background.Find("Text Fields").Find("Password").Find("InputField").GetComponent<InputField>();
        this.dynamicDisplayMessage  = background.Find("Error Message").GetComponent<Text>();

        this.clientLoginButton      = this.transform.Find("Buttons").Find("Client Login Button").GetComponent<Button>();
        this.hostLoginButton        = this.transform.Find("Buttons").Find("Host Login Button").GetComponent<Button>();
        this.registerButton         = this.transform.Find("Buttons").Find("Register Button").GetComponent<Button>();

        this.isMessageBeingDisplayed = false;
    }

    void Start()
    {
        this.ctrlPlayer = new CtrlPlayer();

        this.clientLoginButton.onClick.AddListener(this.HandleClientLoginButton);
        this.registerButton.onClick.AddListener(this.HandleRegisterButton);
    }

    void Update()
    {
        if(isMessageBeingDisplayed)
        {
            if((Time.time - this.startMessageTime) >= this.secondsToDisplayMessageDisappear)
            {
                this.dynamicDisplayMessage.text = "";
                this.isMessageBeingDisplayed    = false;
            }
        }
    }

    void HandleClientLoginButton()
    {
        int accountID = 0;

        if((!validateInputFields()) || (!ctrlPlayer.getAccountId(this.username.text, this.password.text, out accountID)))
        {
            this.DisplayMessage("Invalid Login Information");
        }
        else
        {
            essentialsLoader.LoadEssentialObjects();

            // Set parameters for the first loading
            PlayerManager.Instance.PlayerInfo.accountID = accountID;

            SceneManager.LoadScene(loadingScreenSceneAsset.name);
        }
    }

    void HandleRegisterButton()
    {
        if(!validateInputFields())
        {
            this.DisplayMessage("Invalid Register Information");
        }
        else if(ctrlPlayer.accountExists(this.username.text))
        {
            this.DisplayMessage("Account already Exists");
        }
        else
        {
            ctrlPlayer.registerPlayer(this.username.text, this.password.text);

            this.DisplayMessage("Account successfully created");
        }
    }

    bool validateInputFields()
    {
        bool valid = true;

        if ((this.username.text == "") || (this.password.text == ""))
        {
            valid = false;
        }

        return valid;
    }

    void DisplayMessage(string message)
    {
        this.dynamicDisplayMessage.text = message;
        this.startMessageTime           = Time.time;
        this.isMessageBeingDisplayed    = true;
    }
}
