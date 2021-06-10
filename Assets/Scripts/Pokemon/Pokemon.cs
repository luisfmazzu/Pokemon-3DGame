using System.Collections;

public class Pokemon
{
    #region Internal Variables Declaration 
        internal int pokemonID          { get; set; }
        internal int speciesID          { get; set; }
        internal int originalTrainerID  { get; set; }
        internal int variantID          { get; set; }
        internal string nickname        { get; set; }
        internal int currentHP          { get; set; }
        internal int baseLvl            { get; set; }
        internal int abilityID          { get; set; }
        internal int natureID           { get; set; }
        internal int captureBallID      { get; set; }
        internal float baseLvlExp       { get; set; }
        internal IV ivs                 { get; set; }
        internal EV untrainedEVs        { get; set; }
        internal EV trainedEVs          { get; set; }
    #endregion
}
