public class PokemonEnums
{
    public enum Gender
    {
        Female      = 1,
        Male        = 2,
        Genderless  = 3
    }

    public enum Variances
    {
        Normal  = 1,
        Shiny   = 2
    }

    public enum BattleFormats
    {
        SingleBattle = 1,
        DoubleBattle = 2,
        TripleBattle = 3
    }

    public enum Stats
    {
        hp          = 1,
        attack      = 2,
        defense     = 3,
        spAttack    = 4,
        spDefense   = 5,
        speed       = 6
    }

    public enum MovementTypes
    {
        AlwaysOnTheGround                               = 1,
        AlwaysFlying                                    = 2,
        GroundWhenIdleAndFlyingOtherwise                = 3,
        GroundWhenIdleAndSlowlyMovingFlyingOtherwise    = 4
    }
}
