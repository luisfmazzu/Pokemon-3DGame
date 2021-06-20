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
        CtrlPlayer ctrlPlayer = new CtrlPlayer();

        List<Tuple<int, string, string>> abilities;

        ctrlPlayer.getPokemonAbilities(out abilities);

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
}
