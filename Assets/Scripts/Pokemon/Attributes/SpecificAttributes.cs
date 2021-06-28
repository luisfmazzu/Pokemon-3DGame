using System;
using static PokemonNatures;

public class SpecificAttributes
{
    #region Public Variables Declaration
        public int currentHP    { get; set; }
        public int maxHP        { get; set; }
        public int attack       { get; set; }
        public int defense      { get; set; }
        public int spAttack     { get; set; }
        public int spDefense    { get; set; }
        public int speed        { get; set; }
    #endregion

    public SpecificAttributes()
    {
    }

    public SpecificAttributes(int _baseLvl, int _natureID, BaseAttributes _baseStats, BaseAttributes _ivs, BaseAttributes _trainedEVs, int _currentHP)
    {
        Nature nature = SystemManager.Instance.PokemonData.pokemonNatures.RetrievePokemonNature(_natureID);

        /**
         * For HP:
         * ((IV + 2 * BaseStat + (EV/4)) * Level/100) + 10 + Level
         */

        this.maxHP      = Convert.ToInt32(Math.Floor(((_ivs.hp + (2 * _baseStats.hp) + (_trainedEVs.hp / 4)) * (_baseLvl / 100.0f)))) + 10 + _baseLvl;
        this.currentHP  = _currentHP;

        /**
         * For Attack, Defense, Speed, Sp. Attack, Sp. Defense:
         * (((IV + 2 * BaseStat + (EV/4)) * Level/100) + 5) * Nature Value
         */
        this.attack     = Convert.ToInt32(Math.Floor(((_ivs.attack + (2 * _baseStats.attack) + (_trainedEVs.attack / 4)) * (_baseLvl / 100.0f)))) + 5;
        this.defense    = Convert.ToInt32(Math.Floor(((_ivs.defense + (2 * _baseStats.defense) + (_trainedEVs.defense / 4)) * (_baseLvl / 100.0f)))) + 5;
        this.spAttack   = Convert.ToInt32(Math.Floor(((_ivs.spAttack + (2 * _baseStats.spAttack) + (_trainedEVs.spAttack / 4)) * (_baseLvl / 100.0f)))) + 5;
        this.spDefense  = Convert.ToInt32(Math.Floor(((_ivs.spDefense + (2 * _baseStats.spDefense) + (_trainedEVs.spDefense / 4)) * (_baseLvl / 100.0f)))) + 5;
        this.speed      = Convert.ToInt32(Math.Floor(((_ivs.speed + (2 * _baseStats.speed) + (_trainedEVs.speed / 4)) * (_baseLvl / 100.0f)))) + 5;

        if(nature.increased_stat_id != nature.decreased_stat_id)
        {
            switch(nature.increased_stat_id)
            {
                case (int)PokemonEnums.Stats.attack:
                    this.attack = Convert.ToInt32(Math.Floor(this.attack * 1.1f));
                    break;

                case (int)PokemonEnums.Stats.defense:
                    this.defense = Convert.ToInt32(Math.Floor(this.defense * 1.1f));
                    break;
                
                case (int)PokemonEnums.Stats.spAttack:
                    this.spAttack = Convert.ToInt32(Math.Floor(this.spAttack * 1.1f));
                    break;
                
                case (int)PokemonEnums.Stats.spDefense:
                    this.spDefense = Convert.ToInt32(Math.Floor(this.spDefense * 1.1f));
                    break;
                
                case (int)PokemonEnums.Stats.speed:
                    this.speed = Convert.ToInt32(Math.Floor(this.speed * 1.1f));
                    break;
            }

            switch (nature.decreased_stat_id)
            {
                case (int)PokemonEnums.Stats.attack:
                    this.attack = Convert.ToInt32(Math.Floor(this.attack * 0.9f));
                    break;

                case (int)PokemonEnums.Stats.defense:
                    this.defense = Convert.ToInt32(Math.Floor(this.defense * 0.9f));
                    break;

                case (int)PokemonEnums.Stats.spAttack:
                    this.spAttack = Convert.ToInt32(Math.Floor(this.spAttack * 0.9f));
                    break;

                case (int)PokemonEnums.Stats.spDefense:
                    this.spDefense = Convert.ToInt32(Math.Floor(this.spDefense * 0.9f));
                    break;

                case (int)PokemonEnums.Stats.speed:
                    this.speed = Convert.ToInt32(Math.Floor(this.speed * 0.9f));
                    break;
            }
        }
    }
}