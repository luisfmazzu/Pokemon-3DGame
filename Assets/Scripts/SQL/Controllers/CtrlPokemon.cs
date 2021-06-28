using System;
using System.Collections.Generic;
using System.Security.Cryptography;
using System.Text;
using UnityEngine;

public class CtrlPokemon
{
    DAOPokemon dao = new DAOPokemon();

    public void getPokemonInformation(int pokemonID, out int _speciesID, out int _originalTrainerID, out int _variantID, out string _nickname, out int _currentHP, out int _baseLvl, out int _abilityID, out int _natureID, out int _captureBallID, out int _genderID, out float _baseLvlExp, out BaseAttributes _ivs, out BaseAttributes _untrainedEVs, out BaseAttributes _trainedEVs)
    {
        dao.getPokemonInformation(pokemonID, out _speciesID, out _originalTrainerID, out _variantID, out _nickname, out _currentHP, out _baseLvl, out _abilityID, out _natureID, out _captureBallID, out _genderID, out _baseLvlExp, out _ivs, out _untrainedEVs, out _trainedEVs);
    }

    public void getPokemonAbilities(out List<Tuple<int, string, string>> abilities)
    {
        dao.getPokemonAbilities(out abilities);
    }

    public void getPokemonBaseStats(out List<Tuple<int, int, int, int, int, int, int>> baseStats)
    {
        dao.getPokemonBaseStats(out baseStats);
    }

    public void getPokemonNatures(out List<Tuple<int, string, int, int>> natures)
    {
        dao.getPokemonNatures(out natures);
    }
}