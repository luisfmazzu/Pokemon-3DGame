using System.Collections.Generic;

static class PokemonAnimations
{
    public static Dictionary<string, string> animationsDict = new Dictionary<string, string>()
    {
        { "Idle",    "Motion_0" },
        { "Walking", "Motion_1" },
        { "Running", "Motion_3" }
    };
}