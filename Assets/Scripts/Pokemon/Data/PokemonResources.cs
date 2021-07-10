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
        AssetBundle pokemonIconsBundle  = GenericMethods.RetrieveAssetBundle(GenericMethods.AssetBundlesNames.PokemonIcons);
        AssetBundle pokemonModelsBundle = GenericMethods.RetrieveAssetBundle(GenericMethods.AssetBundlesNames.PokemonModels);

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
        this.pokemonResource["10_n"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("10"),       pokemonModelsBundle.LoadAsset<GameObject>("10_n"));                // Normal Caterpie
        this.pokemonResource["10_s"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("10"),       pokemonModelsBundle.LoadAsset<GameObject>("10_s"));                // Shiny Caterpie
        this.pokemonResource["11_n"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("11"),       pokemonModelsBundle.LoadAsset<GameObject>("11_n"));                // Normal Metapod
        this.pokemonResource["11_s"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("11"),       pokemonModelsBundle.LoadAsset<GameObject>("11_s"));                // Shiny Metapod
        this.pokemonResource["12_n"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("12"),       pokemonModelsBundle.LoadAsset<GameObject>("12_n"));                // Normal Butterfree
        this.pokemonResource["12_s"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("12"),       pokemonModelsBundle.LoadAsset<GameObject>("12_s"));                // Shiny Butterfree
        this.pokemonResource["12f_n"]       = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("12"),       pokemonModelsBundle.LoadAsset<GameObject>("12f_n"));               // Normal Female Butterfree
        this.pokemonResource["12f_s"]       = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("12"),       pokemonModelsBundle.LoadAsset<GameObject>("12f_s"));               // Shiny Female Butterfree
        this.pokemonResource["13_n"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("13"),       pokemonModelsBundle.LoadAsset<GameObject>("13_n"));                // Normal Weedle
        this.pokemonResource["13_s"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("13"),       pokemonModelsBundle.LoadAsset<GameObject>("13_s"));                // Shiny Weedle
        this.pokemonResource["14_n"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("14"),       pokemonModelsBundle.LoadAsset<GameObject>("14_n"));                // Normal Kakuna
        this.pokemonResource["14_s"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("14"),       pokemonModelsBundle.LoadAsset<GameObject>("14_s"));                // Shiny Kakuna
        this.pokemonResource["15_n"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("15"),       pokemonModelsBundle.LoadAsset<GameObject>("15_n"));                // Normal Beedrill
        this.pokemonResource["15_s"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("15"),       pokemonModelsBundle.LoadAsset<GameObject>("15_s"));                // Shiny Beedrill
        this.pokemonResource["15m_n"]       = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("15m"),      pokemonModelsBundle.LoadAsset<GameObject>("15m_n"));               // Normal Mega Beedrill
        this.pokemonResource["15m_s"]       = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("15m"),      pokemonModelsBundle.LoadAsset<GameObject>("15m_s"));               // Shiny Mega Beedrill
        this.pokemonResource["16_n"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("16"),       pokemonModelsBundle.LoadAsset<GameObject>("16_n"));                // Normal Pidgey
        this.pokemonResource["16_s"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("16"),       pokemonModelsBundle.LoadAsset<GameObject>("16_s"));                // Shiny Pidgey
        this.pokemonResource["17_n"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("17"),       pokemonModelsBundle.LoadAsset<GameObject>("17_n"));                // Normal Pidgeotto
        this.pokemonResource["17_s"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("17"),       pokemonModelsBundle.LoadAsset<GameObject>("17_s"));                // Shiny Pidgeotto
        this.pokemonResource["18_n"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("18"),       pokemonModelsBundle.LoadAsset<GameObject>("18_n"));                // Normal Pidgeot
        this.pokemonResource["18_s"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("18"),       pokemonModelsBundle.LoadAsset<GameObject>("18_s"));                // Shiny Pidgeot
        this.pokemonResource["18m_n"]       = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("18m"),      pokemonModelsBundle.LoadAsset<GameObject>("18m_n"));               // Normal Mega Pidgeot
        this.pokemonResource["18m_s"]       = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("18m"),      pokemonModelsBundle.LoadAsset<GameObject>("18m_s"));               // Shiny Mega Pidgeot
        this.pokemonResource["19_n"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("19"),       pokemonModelsBundle.LoadAsset<GameObject>("19_n"));                // Normal Rattata
        this.pokemonResource["19_s"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("19"),       pokemonModelsBundle.LoadAsset<GameObject>("19_s"));                // Shiny Rattata
        this.pokemonResource["19f_n"]       = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("19"),       pokemonModelsBundle.LoadAsset<GameObject>("19f_n"));               // Normal Female Rattata
        this.pokemonResource["19f_s"]       = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("19"),       pokemonModelsBundle.LoadAsset<GameObject>("19f_s"));               // Shiny Female Rattata
        this.pokemonResource["19a_n"]       = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("19a"),      pokemonModelsBundle.LoadAsset<GameObject>("19a_n"));               // Normal Alolan Rattata
        this.pokemonResource["19a_s"]       = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("19a"),      pokemonModelsBundle.LoadAsset<GameObject>("19a_s"));               // Shiny Alolan Rattata
        this.pokemonResource["20_n"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("20"),       pokemonModelsBundle.LoadAsset<GameObject>("20_n"));                // Normal Raticate
        this.pokemonResource["20_s"]        = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("20"),       pokemonModelsBundle.LoadAsset<GameObject>("20_s"));                // Shiny Raticate
        this.pokemonResource["20f_n"]       = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("20"),       pokemonModelsBundle.LoadAsset<GameObject>("20f_n"));               // Normal Female Raticate
        this.pokemonResource["20f_s"]       = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("20"),       pokemonModelsBundle.LoadAsset<GameObject>("20f_s"));               // Shiny Female Raticate
        this.pokemonResource["20a_n"]       = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("20a"),      pokemonModelsBundle.LoadAsset<GameObject>("20a_n"));               // Normal Alolan Raticate
        this.pokemonResource["20a_s"]       = new Resource(pokemonIconsBundle.LoadAsset<Sprite>("20a"),      pokemonModelsBundle.LoadAsset<GameObject>("20a_s"));               // Shiny Alolan Raticate
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
