using System.Collections;

public class Pokemon
{
    #region Internal Variables Declaration 
        internal int        pokemonID           { get; set; }
        internal int        speciesID           { get; set; }
        internal int        originalTrainerID   { get; set; }
        internal int        variantID           { get; set; }
        internal string     nickname            { get; set; }
        internal int        currentHP           { get; set; }
        internal int        baseLvl             { get; set; }
        internal int        abilityID           { get; set; }
        internal int        natureID            { get; set; }
        internal int        captureBallID       { get; set; }
        internal int        genderID            { get; set; }
        internal float      baseLvlExp          { get; set; }
        internal IV         ivs                 { get; set; }
        internal EV         untrainedEVs        { get; set; }
        internal EV         trainedEVs          { get; set; }
    #endregion

    public Pokemon(int _pokemonID, int _speciesID, int _originalTrainerID, int _variantID, string _nickname, int _currentHP, int _baseLvl, int _abilityID, int _natureID, int _captureBallID, int _genderID, float _baseLvlExp, IV _ivs, EV _untrainedEVs, EV _trainedEVs)
    {
        this.pokemonID          = _pokemonID;
        this.speciesID          = _speciesID;
        this.originalTrainerID  = _originalTrainerID;
        this.variantID          = _variantID;
        this.nickname           = _nickname;
        this.currentHP          = _currentHP;
        this.baseLvl            = _baseLvl;
        this.abilityID          = _abilityID;
        this.natureID           = _natureID;
        this.captureBallID      = _captureBallID;
        this.genderID           = _genderID;
        this.baseLvlExp         = _baseLvlExp;
        this.ivs                = _ivs;
        this.untrainedEVs       = _untrainedEVs;
        this.trainedEVs         = _trainedEVs;
    }
}
