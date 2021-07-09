using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PokemonResources
{
    public struct Resource
    {
        public Sprite       sprite;
        public GameObject   prefab;

        public Resource(Sprite _icon, GameObject _model)
        {
            this.sprite = _icon;
            this.prefab = _model;

            if(prefab == null)
            { 
                Debug.Log("Prefab " + _model.name + " could not be loaded");
            }
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

    public void LoadResources()
    {
        string AssetBundlePath = Application.streamingAssetsPath + "/AssetBundles/StandaloneWindows/";

        AssetBundle pokemonIconsBundle  = AssetBundle.LoadFromFile(AssetBundlePath + "pokemonicons");
        AssetBundle pokemonModelsBundle = AssetBundle.LoadFromFile(AssetBundlePath + "pokemonmodels");

        this.pokemonResource["1_n"]         = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("1"),        pokemonModelsBundle.LoadAsset<GameObject>("1_n"));                 // Normal Bulbasaur
        this.pokemonResource["1_s"]         = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("1"),        pokemonModelsBundle.LoadAsset<GameObject>("1_s"));                 // Shiny Bulbasaur
        this.pokemonResource["2_n"]         = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("2"),        pokemonModelsBundle.LoadAsset<GameObject>("2_n"));                 // Normal Ivysaur
        this.pokemonResource["2_s"]         = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("2"),        pokemonModelsBundle.LoadAsset<GameObject>("2_s"));                 // Shiny Ivysaur
        this.pokemonResource["3_n"]         = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("3"),        pokemonModelsBundle.LoadAsset<GameObject>("3_n"));                 // Normal Male Venusaur
        this.pokemonResource["3_s"]         = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("3"),        pokemonModelsBundle.LoadAsset<GameObject>("3_s"));                 // Shiny Male Venusaur
        this.pokemonResource["3f_n"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("3"),        pokemonModelsBundle.LoadAsset<GameObject>("3f_n"));                // Normal Female Venusaur
        this.pokemonResource["3f_s"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("3"),        pokemonModelsBundle.LoadAsset<GameObject>("3f_s"));                // Shiny Female Venusaur
        this.pokemonResource["3m_n"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("3m"),       pokemonModelsBundle.LoadAsset<GameObject>("3m_n"));                // Normal Mega Venusaur
        this.pokemonResource["3m_s"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("3m"),       pokemonModelsBundle.LoadAsset<GameObject>("3m_s"));                // Shiny Mega Venusaur
        this.pokemonResource["4_n"]         = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("4"),        pokemonModelsBundle.LoadAsset<GameObject>("4_n"));                 // Normal Charmander
        this.pokemonResource["4_s"]         = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("4"),        pokemonModelsBundle.LoadAsset<GameObject>("4_s"));                 // Shiny Charmander
        this.pokemonResource["5_n"]         = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("5"),        pokemonModelsBundle.LoadAsset<GameObject>("5_n"));                 // Normal Charmeleon
        this.pokemonResource["5_s"]         = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("5"),        pokemonModelsBundle.LoadAsset<GameObject>("5_s"));                 // Shiny Charmeleon
        this.pokemonResource["6_n"]         = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("6"),        pokemonModelsBundle.LoadAsset<GameObject>("6_n"));                 // Normal Charizard
        this.pokemonResource["6_s"]         = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("6"),        pokemonModelsBundle.LoadAsset<GameObject>("6_s"));                 // Shiny Charizard
        this.pokemonResource["6mx_n"]       = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("6mx"),      pokemonModelsBundle.LoadAsset<GameObject>("6mx_n"));               // Normal Mega Charizard X
        this.pokemonResource["6mx_s"]       = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("6mx"),      pokemonModelsBundle.LoadAsset<GameObject>("6mx_s"));               // Shiny Mega Charizard X
        this.pokemonResource["6my_n"]       = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("6my"),      pokemonModelsBundle.LoadAsset<GameObject>("6my_n"));               // Normal Mega Charizard Y
        this.pokemonResource["6my_s"]       = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("6my"),      pokemonModelsBundle.LoadAsset<GameObject>("6my_s"));               // Shiny Mega Charizard Y
        this.pokemonResource["7_n"]         = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("7"),        pokemonModelsBundle.LoadAsset<GameObject>("7_n"));                 // Normal Squirtle
        this.pokemonResource["7_s"]         = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("7"),        pokemonModelsBundle.LoadAsset<GameObject>("7_s"));                 // Shiny Squirtle
        this.pokemonResource["8_n"]         = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("8"),        pokemonModelsBundle.LoadAsset<GameObject>("8_n"));                 // Normal Wartortle
        this.pokemonResource["8_s"]         = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("8"),        pokemonModelsBundle.LoadAsset<GameObject>("8_s"));                 // Shiny Wartortle
        this.pokemonResource["9_n"]         = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("9"),        pokemonModelsBundle.LoadAsset<GameObject>("9_n"));                 // Normal Blastoise
        this.pokemonResource["9_s"]         = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("9"),        pokemonModelsBundle.LoadAsset<GameObject>("9_s"));                 // Shiny Blastoise
        this.pokemonResource["9m_n"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("9m"),       pokemonModelsBundle.LoadAsset<GameObject>("9m_n"));                // Normal Mega Blastoise
        this.pokemonResource["9m_s"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("9m"),       pokemonModelsBundle.LoadAsset<GameObject>("9m_s"));                // Shiny Mega Blastoise
        this.pokemonResource["25_n"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("25"),       pokemonModelsBundle.LoadAsset<GameObject>("25_n"));                // Normal Male Pikachu
        this.pokemonResource["25_s"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("25"),       pokemonModelsBundle.LoadAsset<GameObject>("25_s"));                // Shiny Male Pikachu
        this.pokemonResource["25f_n"]       = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("25"),       pokemonModelsBundle.LoadAsset<GameObject>("25f_n"));               // Normal Female Pikachu
        this.pokemonResource["25f_s"]       = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("25"),       pokemonModelsBundle.LoadAsset<GameObject>("25f_s"));               // Shiny Female Pikachu
        this.pokemonResource["149_n"]       = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("149"),      pokemonModelsBundle.LoadAsset<GameObject>("149_n"));               // Normal Dragonite
        this.pokemonResource["149_s"]       = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("149"),      pokemonModelsBundle.LoadAsset<GameObject>("149_s"));               // Shiny Dragonite

        this.ready = true;
    }

    public Resource RetrievePokemonResource(string pokemonFormID)
    {
        return this.pokemonResource[pokemonFormID];
    }
}
