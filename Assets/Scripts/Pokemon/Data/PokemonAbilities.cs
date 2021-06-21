using System;
using System.Collections;
using System.Collections.Generic;

public class PokemonAbilities
{
    public struct Ability
    {
        public string   name;
        public string   effect;

        public Ability(string _name, string _effect)
        {
            name    = _name;
            effect  = _effect;
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
        private         Dictionary<int, Ability>        pokemonAbility  = new Dictionary<int, Ability>();
    #endregion

    public void LoadAbilities()
    {
        CtrlPokemon ctrlPokemon = new CtrlPokemon();

        List<Tuple<int, string, string>> abilities;

        ctrlPokemon.getPokemonAbilities(out abilities);

        foreach(Tuple<int, string, string> ability in abilities)
        {
            this.pokemonAbility[ability.Item1] = new Ability(ability.Item2, ability.Item3);
        }

        this.ready = true;
    }

    public Ability RetrievePokemonAbility(int abilityID)
    {
        return this.pokemonAbility[abilityID];
    }


    /**
     * The [weather]{mechanic:weather} changes to [rain]{mechanic:rain} when this Pokémon enters battle and does not end unless replaced by another weather condition.

        If multiple Pokémon with this ability, []{ability:drought}, []{ability:sand-stream}, or []{ability:snow-warning} are sent out at the same time, the abilities will activate in order of [Speed]{mechanic:speed}, respecting []{move:trick-room}.  Each ability's weather will cancel the previous weather, and only the weather summoned by the slowest of the Pokémon will stay.
     */


}
