using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PokemonResources : MonoBehaviour
{
    public struct Resource
    {
        public Sprite       sprite;
        public GameObject   prefab;

        public Resource(string folder, string icon, string form)
        {
            string spritePath = "Pokemon/" + folder + "/" + icon;
            string prefabPath = "Pokemon/" + folder + "/" + form;

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
        this.pokemonResource["1_n"]         = new Resource("1", "1", "1_n");                 // Normal Bulbasaur
        this.pokemonResource["1_s"]         = new Resource("1", "1", "1_s");                 // Shiny Bulbasaur
        this.pokemonResource["2_n"]         = new Resource("2", "2", "2_n");                 // Normal Ivysaur
        this.pokemonResource["2_s"]         = new Resource("2", "2", "2_s");                 // Shiny Ivysaur
        this.pokemonResource["3_n"]         = new Resource("3", "3", "3_n");                 // Normal Male Venusaur
        this.pokemonResource["3_s"]         = new Resource("3", "3", "3_s");                 // Shiny Male Venusaur
        this.pokemonResource["3f_n"]        = new Resource("3", "3", "3f_n");                // Normal Female Venusaur
        this.pokemonResource["3f_s"]        = new Resource("3", "3", "3f_s");                // Shiny Female Venusaur
        this.pokemonResource["3m_n"]        = new Resource("3", "3m", "3m_n");               // Normal Mega Venusaur
        this.pokemonResource["3m_s"]        = new Resource("3", "3m", "3m_s");               // Shiny Mega Venusaur
        this.pokemonResource["4_n"]         = new Resource("4", "4", "4_n");                 // Normal Charmander
        this.pokemonResource["4_s"]         = new Resource("4", "4", "4_s");                 // Shiny Charmander
        this.pokemonResource["5_n"]         = new Resource("5", "5", "5_n");                 // Normal Charmeleon
        this.pokemonResource["5_s"]         = new Resource("5", "5", "5_s");                 // Shiny Charmeleon
        this.pokemonResource["6_n"]         = new Resource("6", "6", "6_n");                 // Normal Charizard
        this.pokemonResource["6_s"]         = new Resource("6", "6", "6_s");                 // Shiny Charizard
        this.pokemonResource["6mx_n"]       = new Resource("6", "6mx", "6mx_n");             // Normal Mega Charizard X
        this.pokemonResource["6mx_s"]       = new Resource("6", "6mx", "6mx_s");             // Shiny Mega Charizard X
        this.pokemonResource["6my_n"]       = new Resource("6", "6my", "6my_n");             // Normal Mega Charizard Y
        this.pokemonResource["6my_s"]       = new Resource("6", "6my", "6my_s");             // Shiny Mega Charizard Y
        this.pokemonResource["7_n"]         = new Resource("7", "7", "7_n");                 // Normal Squirtle
        this.pokemonResource["7_s"]         = new Resource("7", "7", "7_s");                 // Shiny Squirtle
        this.pokemonResource["8_n"]         = new Resource("8", "8", "8_n");                 // Normal Wartortle
        this.pokemonResource["8_s"]         = new Resource("8", "8", "8_s");                 // Shiny Wartortle
        this.pokemonResource["9_n"]         = new Resource("9", "9", "9_n");                 // Normal Blastoise
        this.pokemonResource["9_s"]         = new Resource("9", "9", "9_s");                 // Shiny Blastoise
        this.pokemonResource["9m_n"]        = new Resource("9", "9m", "9m_n");               // Normal Mega Blastoise
        this.pokemonResource["9m_s"]        = new Resource("9", "9m", "9m_s");               // Shiny Mega Blastoise
        this.pokemonResource["25_n"]        = new Resource("25", "25", "25_n");              // Normal Male Pikachu
        this.pokemonResource["25_s"]        = new Resource("25", "25", "25_s");              // Shiny Male Pikachu
        this.pokemonResource["25f_n"]       = new Resource("25", "25", "25f_n");             // Normal Female Pikachu
        this.pokemonResource["25f_s"]       = new Resource("25", "25", "25f_s");             // Shiny Female Pikachu
        this.pokemonResource["149_n"]       = new Resource("149", "149", "149_n");           // Normal Dragonite
        this.pokemonResource["149_s"]       = new Resource("149", "149", "149_s");           // Shiny Dragonite

        this.ready = true;
    }

    public Resource RetrievePokemonResource(string pokemonFormID)
    {
        return this.pokemonResource[pokemonFormID];
    }
}
