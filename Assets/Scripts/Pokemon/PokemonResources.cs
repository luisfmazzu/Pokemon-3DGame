using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PokemonResources : MonoBehaviour
{
    public struct Resource
    {
        public Sprite       sprite;
        public GameObject   prefab;

        public Resource(string pokemonFormNumber)
        {
            string spritePath = "Pokemon/" + pokemonFormNumber + "/" + pokemonFormNumber;

            sprite = Resources.Load<Sprite>(spritePath);
            prefab = Resources.Load(spritePath) as GameObject;

            Debug.Log("Pokemon " + pokemonFormNumber + " successfully loaded");
        }
    }

    public IEnumerator IsReady()
    {
        while(!ready)
        {
            yield return null;
        }
    }

    #region Private Variables Declaration
        private         bool                ready;

        private Dictionary<int, Resource>   pokemonResource = new Dictionary<int, Resource>();
    #endregion

    #region Unity Overloaded Methods
        void Start()
        {
        }
    #endregion

    public void LoadResources()
    {
        this.pokemonResource[1] = new Resource("1");
        this.pokemonResource[25] = new Resource("25");

        this.ready = true;
    }

    public Resource RetrievePokemonResource(int pokemonFormID)
    {
        return this.pokemonResource[pokemonFormID];
    }
}
