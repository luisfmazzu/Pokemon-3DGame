using MySql.Data.MySqlClient;
using System;
using System.Collections.Generic;
using UnityEngine;

public class DAOPokemon : DAOGeneric
{
    public void getPokemonInformation(int pokemonID, out int _speciesID, out int _originalTrainerID, out int _variantID, out string _nickname, out int _currentHP, out int _baseLvl, out int _abilityID, out int _natureID, out int _captureBallID, out int _genderID, out float _baseLvlExp, out IV _ivs, out EV _untrainedEVs, out EV _trainedEVs)
    {
        _speciesID = 0;
        _originalTrainerID = 0;
        _variantID = 0;
        _nickname = "";
        _currentHP = 0;
        _baseLvl = 0;
        _abilityID = 0;
        _natureID = 0;
        _captureBallID = 0;
        _genderID = 0;
        _baseLvlExp = 0;
        _ivs = new IV(0, 0, 0, 0, 0, 0);
        _untrainedEVs = new EV(0, 0, 0, 0, 0, 0);
        _trainedEVs = new EV(0, 0, 0, 0, 0, 0);

        string query = "SELECT Pokemons.*" +
                       " FROM " + database + ".Pokemons" +
                       " WHERE Pokemons.pokemonID=" + pokemonID;

        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, query);

        while(reader.Read())
        {
            // reader.GetInt32(0) is pokemonID
            // reader.GetInt32(1) is currentPlayerID

            _speciesID = reader.GetInt32(2);
            _originalTrainerID = reader.GetInt32(3);
            _variantID = reader.GetInt32(4);
            _nickname = reader.GetString(5);
            _currentHP = reader.GetInt32(6);
            _baseLvl = reader.GetInt32(7);
            _baseLvlExp = reader.GetFloat(8);
            _ivs = new IV(reader.GetInt32(9), reader.GetInt32(10), reader.GetInt32(11), reader.GetInt32(12), reader.GetInt32(13), reader.GetInt32(14));
            _untrainedEVs = new EV(reader.GetInt32(15), reader.GetInt32(16), reader.GetInt32(17), reader.GetInt32(18), reader.GetInt32(19), reader.GetInt32(20));
            _trainedEVs = new EV(reader.GetInt32(21), reader.GetInt32(22), reader.GetInt32(23), reader.GetInt32(24), reader.GetInt32(25), reader.GetInt32(26));
            _abilityID = reader.GetInt32(27);
            _natureID = reader.GetInt32(28);
            _captureBallID = reader.GetInt32(29);
            _genderID = reader.GetInt32(30);
        }

        reader.Close();
    }

    public void getPokemonAbilities(out List<Tuple<int, string, string>> abilities)
    {
        abilities = new List<Tuple<int, string, string>>();

        string query = "SELECT abilities.id, abilities.identifier, abilities_texts.effect" +
                       " FROM " + database + ".abilities INNER JOIN " + database + ".abilities_texts ON abilities.id = abilities_texts.ability_id";

        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, query);

        while (reader.Read())
        {
            abilities.Add(new Tuple<int, string, string>(reader.GetInt32(0), reader.GetString(1), reader.GetString(2)));
        }

        reader.Close();
    }
}