using UnityEngine;

public class PlayerInitialLoading : MonoBehaviour
{
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
