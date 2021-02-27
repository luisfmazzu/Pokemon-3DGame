using System.Collections;
using System.Data;
using UnityEngine;

public class Player : MonoBehaviour
{
    #region Internal Variables Declaration 

    internal int PlayerID { get; set; }
    internal string PlayerName { get; set; }
    internal string PlayerClass { get; set; }
    internal int PlayerBaseLvl { get; set; }
    internal float PlayerBaseLvlExp { get; set; }
    internal Vector2 PlayerPosition { get; set; }
    internal int PlayerMoney { get; set; }

    #endregion

    private CtrlPlayer ctrlPlayer;

    private bool ready = false;

    // Use this for initialization
    void Start ()
    {
        Rigidbody2D player_rb2D = GameObject.FindGameObjectWithTag("Player").GetComponent<Rigidbody2D>(); // We instantiate our player RigidBody2D, so we can freeze it's movements

        ctrlPlayer = new CtrlPlayer();

        PlayerID = ctrlPlayer.getPlayerID("LeoWPereira", "Leonardo91"); //TODO: Modify this function call to call with the values of the user's input at the menu screen 
        
        PlayerName = ctrlPlayer.getPlayerName(PlayerID);
        PlayerClass = ctrlPlayer.getPlayerClass(PlayerID);
        PlayerBaseLvl = ctrlPlayer.getPlayerBaseLvl(PlayerID);
        PlayerPosition = ctrlPlayer.getPosition(PlayerID);
        PlayerBaseLvlExp = ctrlPlayer.getPlayerBaseLvlExp(PlayerID);
        PlayerMoney = ctrlPlayer.getPlayerMoney(PlayerID);

        player_rb2D.position = PlayerPosition; // Here we set the player Position in World Coords

        ready = true;
    }
	
    // Update is called once per frame
    void Update ()
    {
	
    }

    public IEnumerator IsReady()
    {
        while (!ready)
            yield return null;
    }
}