using System.Collections.Generic;
using UnityEngine;

public static class GenericMethods
{
    public enum AssetBundlesNames
    {
        PokemonModels,
        PokemonIcons,
        CharacterModels
    }

    private static Dictionary<AssetBundlesNames, string> assetBundlesDictionary = new Dictionary<AssetBundlesNames, string>()
    {
        { AssetBundlesNames.PokemonModels,      "pokemonmodels" },
        { AssetBundlesNames.PokemonIcons,       "pokemonicons" },
        { AssetBundlesNames.CharacterModels,    "charactermodels" }
    };

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

    public static AssetBundle RetrieveAssetBundle(AssetBundlesNames _assetBundle)
    {
        string AssetBundlePath = Application.streamingAssetsPath + "/AssetBundles/StandaloneWindows/";

        return AssetBundle.LoadFromFile(AssetBundlePath + assetBundlesDictionary[_assetBundle]);
    }
}
