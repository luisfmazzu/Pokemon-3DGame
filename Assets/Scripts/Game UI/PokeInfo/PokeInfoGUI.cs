using UnityEngine;
using UnityEngine.UI;

public class PokeInfoGUI : MonoBehaviour
{
    #region Public Variables Declaration
        public Pokemon pokemon { get; set; }
    #endregion

    #region Private Variables Declaration
    private Text titleText;
    #endregion

    private void Awake()
    {
        this.titleText = this.transform.Find("Canvas").Find("Panel").Find("Image").Find("Text").GetComponent<Text>();
    }

    void Start()
    {
        this.titleText.text = SystemManager.Instance.PlayerData.playersInfo.RetrievePlayer(this.pokemon.currentTrainerID).playerName + "' " + this.pokemon.nickname;
    }
}