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
        internal float              baseLvlExp          { get; set; }
        internal BaseAttributes     ivs                 { get; set; }
        internal BaseAttributes     untrainedEVs        { get; set; }
        internal BaseAttributes     trainedEVs          { get; set; }
        internal SpecificAttributes stats               { get; set; }
        internal string             resourceID          { get; set; }
    #endregion

    public Pokemon(int _pokemonID, int _speciesID, int _originalTrainerID, int _currentTrainerID, int _variantID, string _nickname, int _currentHP, int _baseLvl, int _abilityID, int _natureID, int _captureBallID, int _genderID, float _baseLvlExp, BaseAttributes _ivs, BaseAttributes _untrainedEVs, BaseAttributes _trainedEVs)
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
        this.baseLvlExp         = _baseLvlExp;
        this.ivs                = _ivs;
        this.untrainedEVs       = _untrainedEVs;
        this.trainedEVs         = _trainedEVs;
        this.stats              = new SpecificAttributes(this.baseLvl, this.natureID, SystemManager.Instance.PokemonData.pokemonBaseStats.RetrievePokemonBaseStats(this.speciesID), this.ivs, this.trainedEVs, _currentHP);

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
}
