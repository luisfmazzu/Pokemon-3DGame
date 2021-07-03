using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerInitialLoading : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        PlayerController playerController = PlayerManager.Instance.PlayerController;
        PlayerInfo playerInfo = PlayerManager.Instance.PlayerInfo;
        if (playerController.IsFirstLoading())
        {
            playerController.transform.position = playerInfo.playerData.playerPosition;
            playerController.SetIsFirstLoading(false);
            playerController.SetIsPlaying(true);
        }
        playerController.gameObject.SetActive(true);
    }
}
