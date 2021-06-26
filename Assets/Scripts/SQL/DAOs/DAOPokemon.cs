using MySql.Data.MySqlClient;
using System;
using System.Collections.Generic;
using UnityEngine;

public class DAOPokemon
{
    DAOGeneric daoGeneric = DAOGeneric.Instance;

    public void getPokemonInformation(int pokemonID, out int _speciesID, out int _originalTrainerID, out int _variantID, out string _nickname, out int _currentHP, out int _baseLvl, out int _abilityID, out int _natureID, out int _captureBallID, out int _genderID, out float _baseLvlExp, out IV _ivs, out EV _untrainedEVs, out EV _trainedEVs)
    {
        _speciesID          = 0;
        _originalTrainerID  = 0;
        _variantID          = 0;
        _nickname           = "";
        _currentHP          = 0;
        _baseLvl            = 0;
        _abilityID          = 0;
        _natureID           = 0;
        _captureBallID      = 0;
        _genderID           = 0;
        _baseLvlExp         = 0;
        _ivs                = new IV(0, 0, 0, 0, 0, 0);
        _untrainedEVs       = new EV(0, 0, 0, 0, 0, 0);
        _trainedEVs         = new EV(0, 0, 0, 0, 0, 0);

        string query = "SELECT Pokemons.*" +
                       " FROM " + daoGeneric.database + ".Pokemons" +
                       " WHERE Pokemons.pokemonID=" + pokemonID;

        daoGeneric.con.ExecuteQuery(ref daoGeneric.dbconn, ref daoGeneric.dbcmd, ref daoGeneric.reader, query);

        while(daoGeneric.reader.Read())
        {
            // daoGeneric.reader.GetInt32(0) is pokemonID
            // daoGeneric.reader.GetInt32(1) is currentPlayerID

            _speciesID          = daoGeneric.reader.GetInt32(2);
            _originalTrainerID  = daoGeneric.reader.GetInt32(3);
            _variantID          = daoGeneric.reader.GetInt32(4);
            _nickname           = daoGeneric.reader.GetString(5);
            _currentHP          = daoGeneric.reader.GetInt32(6);
            _baseLvl            = daoGeneric.reader.GetInt32(7);
            _baseLvlExp         = daoGeneric.reader.GetFloat(8);
            _ivs                = new IV(daoGeneric.reader.GetInt32(9), daoGeneric.reader.GetInt32(10), daoGeneric.reader.GetInt32(11), daoGeneric.reader.GetInt32(12), daoGeneric.reader.GetInt32(13), daoGeneric.reader.GetInt32(14));
            _untrainedEVs       = new EV(daoGeneric.reader.GetInt32(15), daoGeneric.reader.GetInt32(16), daoGeneric.reader.GetInt32(17), daoGeneric.reader.GetInt32(18), daoGeneric.reader.GetInt32(19), daoGeneric.reader.GetInt32(20));
            _trainedEVs         = new EV(daoGeneric.reader.GetInt32(21), daoGeneric.reader.GetInt32(22), daoGeneric.reader.GetInt32(23), daoGeneric.reader.GetInt32(24), daoGeneric.reader.GetInt32(25), daoGeneric.reader.GetInt32(26));
            _abilityID          = daoGeneric.reader.GetInt32(27);
            _natureID           = daoGeneric.reader.GetInt32(28);
            _captureBallID      = daoGeneric.reader.GetInt32(29);
            _genderID           = daoGeneric.reader.GetInt32(30);
        }

        daoGeneric.reader.Close();
    }

    public void getPokemonAbilities(out List<Tuple<int, string, string>> abilities)
    {
        abilities = new List<Tuple<int, string, string>>();

        string query = "SELECT abilities.id, abilities.identifier, abilities_texts.effect" +
                       " FROM " + daoGeneric.database + ".abilities INNER JOIN " + daoGeneric.database + ".abilities_texts ON abilities.id = abilities_texts.ability_id";

        daoGeneric.con.ExecuteQuery(ref daoGeneric.dbconn, ref daoGeneric.dbcmd, ref daoGeneric.reader, query);

        while(daoGeneric.reader.Read())
        {
            abilities.Add(new Tuple<int, string, string>(daoGeneric.reader.GetInt32(0), daoGeneric.reader.GetString(1), daoGeneric.reader.GetString(2)));
        }

        daoGeneric.reader.Close();
    }
}