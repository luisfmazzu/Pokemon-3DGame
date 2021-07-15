using System.Collections.Generic;

static class PokemonAnimations
{
    public class AnimationNames
    {
        public const string IDLE            = "Idle";
        public const string FLYING          = "Flying";
        public const string MOVING_SLOW     = "Moving Slow";
        public const string REACTING        = "Reacting";
        public const string JUMPING         = "Jumping";
        public const string MOVING_FAST     = "Moving Fast";
        public const string JUMP_RUNNING    = "Jump Running";
        public const string ATTACK_01       = "Attack 01";
        public const string ATTACK_02       = "Attack 02";
        public const string ATTACK_03       = "Attack 03";
        public const string TAKING_HIT      = "Taking Hit";
        public const string FAINTING        = "Faiting";
        public const string FAINTING_2      = "Faiting 2";
    }

    public static Dictionary<string, string> overWorldnimationsDict = new Dictionary<string, string>()
    {
        { "Idle",           "Motion_0" },
        { "Flying",         "Motion_0_1" },
        { "Moving Slow",    "Motion_1" },
        { "Reacting",       "Motion_1_1" },
        { "Jumping",        "Motion_2_1" },
        { "Moving Fast",    "Motion_3" },
        { "Jump Running",   "Motion_3_1" }
    };

    public static Dictionary<string, string> battleAnimationsDict = new Dictionary<string, string>()
    {
        { "Idle",           "Motion_0" },
        { "Flying",         "Motion_0_1" },
        { "Attack 01",      "Motion_8" },
        { "Attack 02",      "Motion_9" },
        { "Motion_10",      "Motion_10" },
        { "Motion_11",      "Motion_11" },
        { "Attack 03",      "Motion_12" },
        { "Taking Hit",     "Motion_14" },
        { "Faiting",        "Motion_17" },
        { "Faiting 2",      "Motion_17_1" },
        { "Motion_18",      "Motion_18" },
        { "Motion_19",      "Motion_19" },
        { "Motion_19_1",    "Motion_19_1" },
        { "Motion_20",      "Motion_20" },
        { "Motion_21",      "Motion_21" },
        { "Motion_22",      "Motion_22" },
        { "Motion_23",      "Motion_23" },
        { "Motion_24",      "Motion_24" },
        { "Motion_25",      "Motion_25" }
    };
}