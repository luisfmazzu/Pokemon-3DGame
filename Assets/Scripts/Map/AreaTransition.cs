using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AreaTransition : MonoBehaviour
{
    public string transitionName;
    [SerializeField]
    private PlayerTest player;
    [SerializeField]
    private PokemonFollower pokemonFollower;
    [SerializeField]
    private Transform playerStartPosition;
    [SerializeField]
    private Transform followerStartPosition;

    // Start is called before the first frame update
    void Start()
    {
        if (transitionName == player.CurrentAreaTransitionName)
        {
            player.transform.position = transform.position;
            pokemonFollower.UpdateFollowerPosition(transform.position, transform.rotation);
        }

        UIFadeController.instance.FadeFromBlack();
    }

    // Update is called once per frame
    void Update()
    {

    }
}
