using System;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;

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

    public string SimplifyAbilityEffect(string effect)
    {
        /**
         * In a Ability Effect text, three scenarios can happen
         *  1) No Brackets and no Curly Brackets following              --> Nothing needs to be done
         *  2) Non-empty Brackets Followed by non-empty Curly Brackets  --> Must keep only the content after ':' inside the curly brackets
         *  3) Empty Brackets Followed by non-empty Curly Brackets      --> Must keep only the content after ':' inside the curly brackets
         */

        effect = Regex.Replace(effect, @"\[(?<brackets>[^]]*)\]\{(?<type>[^:]*)\:(?<curlyBrackets>[^}]*)\}", "${curlyBrackets}");

        return effect;
    }
}
