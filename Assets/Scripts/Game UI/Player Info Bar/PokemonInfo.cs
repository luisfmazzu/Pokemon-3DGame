using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class PokemonInfo : MonoBehaviour
{
    #region Serialize Fields
        [SerializeField, Range(0, 5)] private int pokemonIndex;
    #endregion

    #region Private Variables Declaration
        private PlayerInfo playerInfo;
    #endregion

    private void Awake()
    {
        this.playerInfo = PlayerManager.Instance.PlayerInfo;
    }

    IEnumerator Start()
    {
        Button button = this.GetComponent<Button>();

        button.onClick.AddListener(TaskOnClick);

        yield return StartCoroutine(this.playerInfo.IsReady()); // Don't do anything until the end of the playerInfo.IsReady() function (this function only GUARANTEE that our Player Class finishes before this one
    }

    private void Update()
    {
        
    }

    void TaskOnClick()
    {
        Debug.Log("You Clicked on Pokemon " + this.pokemonIndex);

        GameObject follower = Resources.Load("Pokemon/25/25") as GameObject;

        this.playerInfo.EnableFollower(follower);
    }
}