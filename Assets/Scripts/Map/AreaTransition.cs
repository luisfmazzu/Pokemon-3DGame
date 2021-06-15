using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AreaTransition : MonoBehaviour
{
    public string transitionName;
    [SerializeField]
    private Transform playerStartPosition;
    [SerializeField]
    private Transform followerStartPosition;

    // Start is called before the first frame update
    void Start()
    {
        PlayerController player = PlayerManager.Instance.PlayerController;
        PokemonFollower pokemonFollower = PlayerManager.Instance.PokemonFollower;
        if (transitionName == player.GetCurrentAreaTransitionName())
        {
            player.transform.position = playerStartPosition.transform.position;
            pokemonFollower.UpdateFollowerPosition(followerStartPosition.transform.position, followerStartPosition.transform.rotation);
        }

        UIFadeController.Instance.FadeFromBlack();
    }

    // Update is called once per frame
    void Update()
    {

    }
}
