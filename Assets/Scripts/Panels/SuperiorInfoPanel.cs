using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class SuperiorInfoPanel : MonoBehaviour
{
    public Player player;

    public Text text;

    // Use this for initialization
    IEnumerator Start ()
	{
        yield return StartCoroutine(player.IsReady()); // Don't do nothing until the end of the player.IsReady() function (this function only GUARANTEE that our Player Class finishes before this one

        text = GameObject.Find("playerName").GetComponent<Text>();
        text.text = player.PlayerName;

        text = GameObject.Find("playerClass").GetComponent<Text>();
        text.text = player.PlayerClass;

        text = GameObject.Find("playerBaseLvl").GetComponent<Text>();
        text.text = "Lvl. " + player.PlayerBaseLvl;

        text = GameObject.Find("playerLvlExp").GetComponent<Text>();
        text.text = player.PlayerBaseLvlExp + "%";

        text = GameObject.Find("playerMoney").GetComponent<Text>();
        text.text = player.PlayerMoney.ToString();
    }

    // Update is called once per frame
    void Update ()
    {
	
	}
}