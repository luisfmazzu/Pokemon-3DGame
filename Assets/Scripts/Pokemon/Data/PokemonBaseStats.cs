using System;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;

public class PokemonBaseStats
{
    public IEnumerator IsReady()
    {
        while(!ready)
        {
            yield return null;
        }
    }

    #region Private Variables Declaration
        private         bool                            ready               = false;
        private         Dictionary<int, BaseAttributes> pokemonBaseStats    = new Dictionary<int, BaseAttributes>();
    #endregion

    public void LoadBaseStats()
    {
        CtrlPokemon ctrlPokemon = new CtrlPokemon();

        List<Tuple<int, int, int, int, int, int, int>> baseStats;

        ctrlPokemon.getPokemonBaseStats(out baseStats);

        foreach(Tuple<int, int, int, int, int, int, int> baseStat in baseStats)
        {
            this.pokemonBaseStats[baseStat.Item1] = new BaseAttributes(baseStat.Item2, baseStat.Item3, baseStat.Item4, baseStat.Item5, baseStat.Item6, baseStat.Item7);
        }

        this.ready = true;
    }

    public BaseAttributes RetrievePokemonBaseStats(int speciesID)
    {
        return this.pokemonBaseStats[speciesID];
    }
}
