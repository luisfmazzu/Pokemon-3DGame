public static class GenericMethods
{
    public static float GenerateRandomFloat(int seed, int min_val, int max_val)
    {
        System.Random random = new System.Random(seed);

        double val = random.NextDouble() * (max_val - min_val) + min_val;

        return (float)val;
    }

    public static int GenerateRandomInt(int seed, int min_val, int max_val)
    {
        System.Random random = new System.Random(seed);

        return random.Next(min_val, max_val);
    }
}
