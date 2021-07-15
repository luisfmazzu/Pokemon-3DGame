using System;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;

public class PokemonSpecies
{
    public struct Specie
    {
        public string                       name;
        public PokemonEnums.MovementTypes   movement_type;

        public Specie(string _name, int _movement_type)
        {
            name = char.ToUpper(_name[0]) + _name.Substring(1);

            movement_type = (PokemonEnums.MovementTypes)_movement_type;
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
        private         Dictionary<int, Specie> pokemonSpecies  = new Dictionary<int, Specie>();
    #endregion

    public void LoadSpecies()
    {
        CtrlPokemon ctrlPokemon = new CtrlPokemon();

        List<Tuple<int, string, int>> species;

        ctrlPokemon.getPokemonSpecies(out species);

        foreach(Tuple<int, string, int> specie in species)
        {
            this.pokemonSpecies[specie.Item1] = new Specie(specie.Item2, specie.Item3);
        }

        this.ready = true;
    }

    public Specie RetrievePokemonSpecie(int specieID)
    {
        return this.pokemonSpecies[specieID];
    }
}
