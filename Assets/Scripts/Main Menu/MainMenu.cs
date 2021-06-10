using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenu : MonoBehaviour
{
    #region Serialize Fields
        [SerializeField] UnityEditor.SceneAsset loadingSceneAsset;
    #endregion

    #region Private Variables
        private Player      playerInfo;

        private InputField  username;
        private InputField  password;
        private Button      clientLoginButton;
        private Button      hostLoginButton;
        private Button      registerButton;

        private CtrlPlayer  ctrlPlayer;
    #endregion

    private void Awake()
    {
        this.username           = this.transform.Find("Text Fields").Find("Username").Find("InputField").GetComponent<InputField>();
        this.password           = this.transform.Find("Text Fields").Find("Password").Find("InputField").GetComponent<InputField>();
        this.clientLoginButton  = this.transform.Find("Client Login Button").GetComponent<Button>();
        this.hostLoginButton    = this.transform.Find("Host Login Button").GetComponent<Button>();
        this.registerButton     = this.transform.Find("Register Button").GetComponent<Button>();
    }

    void Start()
    {
        ctrlPlayer = new CtrlPlayer();

        this.clientLoginButton.onClick.AddListener(this.HandleClientLoginButton);
        this.registerButton.onClick.AddListener(this.HandleRegisterButton);
    }

    void Update()
    {
        
    }

    void HandleClientLoginButton()
    {
        this.playerInfo = Player.Instance;

        int accountID = 0;

        if((!validateInputFields()) || (!ctrlPlayer.getAccountId(this.username.text, this.password.text, out accountID)))
        {
            Debug.Log("Invalid Login Information");
        }
        else
        {
            this.playerInfo.accountID = accountID;

            SceneManager.LoadScene(loadingSceneAsset.name);
        }
    }

    void HandleRegisterButton()
    {
        if(!validateInputFields())
        {
            Debug.Log("Invalid Register Information");
        }
        else if(ctrlPlayer.accountExists(this.username.text))
        {
            Debug.Log("Account already Exists");
        }
        else
        {
            ctrlPlayer.registerPlayer(this.username.text, this.password.text);

            Debug.Log("Account successfully created");
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
}
