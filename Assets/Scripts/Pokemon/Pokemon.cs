using System.Collections;

public class Pokemon
{
    #region Internal Variables Declaration 
        internal int                pokemonID           { get; set; }
        internal int                speciesID           { get; set; }
        internal int                originalTrainerID   { get; set; }
        internal int                currentTrainerID    { get; set; }
        internal int                variantID           { get; set; }
        internal string             nickname            { get; set; }
        internal int                baseLvl             { get; set; }
        internal int                abilityID           { get; set; }
        internal int                natureID            { get; set; }
        internal int                captureBallID       { get; set; }
        internal int                genderID            { get; set; }
        internal int                happinness          { get; set; }
        internal float              baseLvlExp          { get; set; }
        internal BaseAttributes     ivs                 { get; set; }
        internal BaseAttributes     untrainedEVs        { get; set; }
        internal BaseAttributes     trainedEVs          { get; set; }
        internal int                totalTrainedEVs     { get; set; }
        internal int                totalIVs            { get; set; }
        internal SpecificAttributes stats               { get; set; }
        internal string             resourceID          { get; set; }
    #endregion

    public Pokemon(int _pokemonID, int _speciesID, int _originalTrainerID, int _currentTrainerID, int _variantID, string _nickname, int _currentHP, int _baseLvl, int _abilityID, int _natureID, int _captureBallID, int _genderID, int _happiness, float _baseLvlExp, BaseAttributes _ivs, BaseAttributes _untrainedEVs, BaseAttributes _trainedEVs)
    {
        this.pokemonID          = _pokemonID;
        this.speciesID          = _speciesID;
        this.originalTrainerID  = _originalTrainerID;
        this.currentTrainerID   = _currentTrainerID;
        this.variantID          = _variantID;
        this.nickname           = _nickname;
        this.baseLvl            = _baseLvl;
        this.abilityID          = _abilityID;
        this.natureID           = _natureID;
        this.captureBallID      = _captureBallID;
        this.genderID           = _genderID;
        this.happinness         = _happiness;
        this.baseLvlExp         = _baseLvlExp;
        this.ivs                = _ivs;
        this.untrainedEVs       = _untrainedEVs;
        this.trainedEVs         = _trainedEVs;
        this.stats              = new SpecificAttributes(this.baseLvl, this.natureID, SystemManager.Instance.PokemonData.pokemonBaseStats.RetrievePokemonBaseStats(this.speciesID), this.ivs, this.trainedEVs, _currentHP);

        this.totalTrainedEVs    = this.trainedEVs.SummedAttributes();
        this.totalIVs           = this.ivs.SummedAttributes();

        if(this.variantID == (int)PokemonEnums.Variances.Normal)
        {
            this.resourceID = this.speciesID.ToString() + "_n";
        }
        else if(this.variantID == (int)PokemonEnums.Variances.Shiny)
        {
            this.resourceID = this.speciesID.ToString() + "_s";
        }

        // Still missing to make the differentiation between female models when the pokemon species has gender differences
    }

    public void MoveUntrainedEVToTrainedEV(PokemonEnums.Stats stat, int amount)
    {
        if(this.totalTrainedEVs <= (BaseAttributes.MAX_SUMMED_EV_VALUE - amount))
        {
            bool changed = false;

            switch (stat)
            {
                case PokemonEnums.Stats.hp:
                    if ((this.trainedEVs.hp <= (BaseAttributes.MAX_EV_VALUE - amount)) && (this.untrainedEVs.hp >= amount))
                    {
                        this.untrainedEVs.hp -= amount;
                        this.trainedEVs.hp += amount;

                        changed = true;
                    }

                    break;

                case PokemonEnums.Stats.attack:
                    if ((this.trainedEVs.attack <= (BaseAttributes.MAX_EV_VALUE - amount)) && (this.untrainedEVs.attack >= amount))
                    {
                        this.untrainedEVs.attack -= amount;
                        this.trainedEVs.attack += amount;

                        changed = true;
                    }

                    break;

                case PokemonEnums.Stats.defense:
                    if ((this.trainedEVs.defense <= (BaseAttributes.MAX_EV_VALUE - amount)) && (this.untrainedEVs.defense >= amount))
                    {
                        this.untrainedEVs.defense -= amount;
                        this.trainedEVs.defense += amount;

                        changed = true;
                    }

                    break;

                case PokemonEnums.Stats.spAttack:
                    if ((this.trainedEVs.spAttack <= (BaseAttributes.MAX_EV_VALUE - amount)) && (this.untrainedEVs.spAttack >= amount))
                    {
                        this.untrainedEVs.spAttack -= amount;
                        this.trainedEVs.spAttack += amount;

                        changed = true;
                    }

                    break;

                case PokemonEnums.Stats.spDefense:
                    if ((this.trainedEVs.spDefense <= (BaseAttributes.MAX_EV_VALUE - amount)) && (this.untrainedEVs.spDefense >= amount))
                    {
                        this.untrainedEVs.spDefense -= amount;
                        this.trainedEVs.spDefense += amount;

                        changed = true;
                    }

                    break;

                case PokemonEnums.Stats.speed:
                    if ((this.trainedEVs.speed <= (BaseAttributes.MAX_EV_VALUE - amount)) && (this.untrainedEVs.speed >= amount))
                    {
                        this.untrainedEVs.speed -= amount;
                        this.trainedEVs.speed += amount;

                        changed = true;
                    }

                    break;
            }

            if (changed)
            {
                this.stats.CalculateAttributes(this.baseLvl, this.natureID, SystemManager.Instance.PokemonData.pokemonBaseStats.RetrievePokemonBaseStats(this.speciesID), this.ivs, this.trainedEVs);

                this.totalTrainedEVs += amount;
            }
        }
    }
}
