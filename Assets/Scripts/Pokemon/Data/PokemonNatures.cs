using System;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;

public class PokemonNatures
{
    public struct Nature
    {
        public string   name;
        public int      decreased_stat_id;
        public int      increased_stat_id;

        public Nature(string _name, int _decreased_stat_id, int _increased_stat_id)
        {
            name = char.ToUpper(_name[0]) + _name.Substring(1);

            int toUpperIndex = name.IndexOf("-");

            while (toUpperIndex != -1)
            {
                name = name.Substring(0, toUpperIndex) + " " + char.ToUpper(name[toUpperIndex + 1]) + name.Substring(toUpperIndex + 2);

                toUpperIndex = name.IndexOf("-");
            }

            decreased_stat_id   = _decreased_stat_id;
            increased_stat_id   = _increased_stat_id;
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
        private         bool                    ready           = false;
        private         Dictionary<int, Nature> pokemonNature   = new Dictionary<int, Nature>();
    #endregion

    public void LoadNatures()
    {
        CtrlPokemon ctrlPokemon = new CtrlPokemon();

        List<Tuple<int, string, int, int>> natures;

        ctrlPokemon.getPokemonNatures(out natures);

        foreach(Tuple<int, string, int, int> nature in natures)
        {
            this.pokemonNature[nature.Item1] = new Nature(nature.Item2, nature.Item3, nature.Item4);
        }

        this.ready = true;
    }

    public Nature RetrievePokemonNature(int natureID)
    {
        return this.pokemonNature[natureID];
    }
}
