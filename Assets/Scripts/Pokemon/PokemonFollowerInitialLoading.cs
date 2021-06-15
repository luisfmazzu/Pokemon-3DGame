using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PokemonFollowerInitialLoading : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        PlayerManager.Instance.PokemonFollower.gameObject.SetActive(true);
    }
}
