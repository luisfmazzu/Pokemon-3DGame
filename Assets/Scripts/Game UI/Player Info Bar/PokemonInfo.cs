using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class PokemonInfo : MonoBehaviour
{
    #region Constant Variables
    #endregion

    #region Enumerators
    #endregion

    #region Public Variables Declaration
    #endregion

    #region Private Variables Declaration
        private Player playerInfo;
    #endregion

    #region Internal Variables
    #endregion

    private void Awake()
    {
        this.playerInfo = Player.Instance;
    }

    IEnumerator Start()
    {
        Button button = this.GetComponent<Button>();

        button.onClick.AddListener(TaskOnClick);

        yield return StartCoroutine(this.playerInfo.IsReady()); // Don't do nothing until the end of the playerInfo.IsReady() function (this function only GUARANTEE that our Player Class finishes before this one
    }

    private void Update()
    {
        
    }

    void TaskOnClick()
    {
        Debug.Log("You Clicked on a Pokemon");
    }
}