using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PokemonResources : MonoBehaviour
{
    public struct Resource
    {
        public Sprite       sprite;
        public GameObject   prefab;

        public Resource(string folder, string pokemonForm)
        {
            string spritePath = "Pokemon/" + folder + "/" + folder;
            string prefabPath = "Pokemon/" + folder + "/" + pokemonForm;

            sprite = Resources.Load<Sprite>(spritePath);
            prefab = Resources.Load(prefabPath) as GameObject;

            if(prefab == null)
                Debug.Log("Prefab " + prefabPath + " could not be loaded");
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
        private         bool                            ready           = false;
        private         Dictionary<string, Resource>    pokemonResource = new Dictionary<string, Resource>();
    #endregion

    #region Unity Overloaded Methods
        private void Awake()
        {
        }

        void Start()
        {
        }
    #endregion

    public void LoadResources()
    {
        this.pokemonResource["1_n"]         = new Resource("1", "1_n");                 // Normal Bulbasaur
        this.pokemonResource["1_s"]         = new Resource("1", "1_s");                 // Shiny Bulbasaur
        this.pokemonResource["2_n"]         = new Resource("2", "2_n");                 // Normal Ivysaur
        this.pokemonResource["2_s"]         = new Resource("2", "2_s");                 // Normal Venusaur
        this.pokemonResource["25_n"]        = new Resource("25", "25_n");               // Normal Male Pikachu
        this.pokemonResource["25_s"]        = new Resource("25", "25_s");               // Shiny Male Pikachu
        this.pokemonResource["25f_n"]       = new Resource("25", "25f_n");              // Normal Female Pikachu
        this.pokemonResource["25f_s"]       = new Resource("25", "25f_s");              // Shiny Female Pikachu
        this.pokemonResource["149_n"]       = new Resource("149", "149_n");             // Normal Dragonite
        this.pokemonResource["149_s"]       = new Resource("149", "149_s");             // Shiny Dragonite

        this.ready = true;
    }

    public Resource RetrievePokemonResource(string pokemonFormID)
    {
        return this.pokemonResource[pokemonFormID];
    }
}
