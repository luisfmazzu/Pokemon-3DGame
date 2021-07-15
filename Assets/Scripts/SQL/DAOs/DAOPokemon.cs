using System;
using System.Collections.Generic;

public class DAOPokemon
{
    DAOGeneric daoGeneric = DAOGeneric.Instance;

    public void getPokemonInformation(int pokemonID, out int _speciesID, out int _originalTrainerID, out int _variantID, out string _nickname, out int _currentHP, out int _baseLvl, out int _abilityID, out int _natureID, out int _captureBallID, out int _genderID, out float _baseLvlExp, out BaseAttributes _ivs, out BaseAttributes _untrainedEVs, out BaseAttributes _trainedEVs, out int _happiness)
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
        _happiness          = 0;
        _baseLvlExp         = 0;
        _ivs                = new BaseAttributes(0, 0, 0, 0, 0, 0);
        _untrainedEVs       = new BaseAttributes(0, 0, 0, 0, 0, 0);
        _trainedEVs         = new BaseAttributes(0, 0, 0, 0, 0, 0);

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
            _ivs                = new BaseAttributes(daoGeneric.reader.GetInt32(9), daoGeneric.reader.GetInt32(10), daoGeneric.reader.GetInt32(11), daoGeneric.reader.GetInt32(12), daoGeneric.reader.GetInt32(13), daoGeneric.reader.GetInt32(14));
            _untrainedEVs       = new BaseAttributes(daoGeneric.reader.GetInt32(15), daoGeneric.reader.GetInt32(16), daoGeneric.reader.GetInt32(17), daoGeneric.reader.GetInt32(18), daoGeneric.reader.GetInt32(19), daoGeneric.reader.GetInt32(20));
            _trainedEVs         = new BaseAttributes(daoGeneric.reader.GetInt32(21), daoGeneric.reader.GetInt32(22), daoGeneric.reader.GetInt32(23), daoGeneric.reader.GetInt32(24), daoGeneric.reader.GetInt32(25), daoGeneric.reader.GetInt32(26));
            _abilityID          = daoGeneric.reader.GetInt32(27);
            _natureID           = daoGeneric.reader.GetInt32(28);
            _captureBallID      = daoGeneric.reader.GetInt32(29);
            _genderID           = daoGeneric.reader.GetInt32(30);
            _happiness          = daoGeneric.reader.GetInt32(31);
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

    public void getPokemonBaseStats(out List<Tuple<int, int, int, int, int, int, int>> baseStats)
    {
        baseStats = new List<Tuple<int, int, int, int, int, int, int>>();

        string query = "SELECT pokemon_stats.pokemon_id, GROUP_CONCAT(pokemon_stats.base_stat) FROM " + daoGeneric.database + ".pokemon_stats GROUP BY pokemon_stats.pokemon_id ORDER BY pokemon_stats.pokemon_id ASC";

        daoGeneric.con.ExecuteQuery(ref daoGeneric.dbconn, ref daoGeneric.dbcmd, ref daoGeneric.reader, query);

        while(daoGeneric.reader.Read())
        {
            string[] stats = daoGeneric.reader.GetString(1).Split(',');

            baseStats.Add(new Tuple<int, int, int, int, int, int, int>(daoGeneric.reader.GetInt32(0), Int16.Parse(stats[0]), Int16.Parse(stats[1]), Int16.Parse(stats[2]), Int16.Parse(stats[3]), Int16.Parse(stats[4]), Int16.Parse(stats[5])));
        }

        daoGeneric.reader.Close();
    }

    public void getPokemonNatures(out List<Tuple<int, string, int, int>> natures)
    {
        natures = new List<Tuple<int, string, int, int>>();

        string query = "SELECT natures.id, natures.identifier, natures.decreased_stat_id, natures.increased_stat_id" +
                       " FROM " + daoGeneric.database + ".natures" +
                       " ORDER BY natures.id ASC";

        daoGeneric.con.ExecuteQuery(ref daoGeneric.dbconn, ref daoGeneric.dbcmd, ref daoGeneric.reader, query);

        while (daoGeneric.reader.Read())
        {
            natures.Add(new Tuple<int, string, int, int>(daoGeneric.reader.GetInt32(0), daoGeneric.reader.GetString(1), daoGeneric.reader.GetInt32(2), daoGeneric.reader.GetInt32(3)));
        }

        daoGeneric.reader.Close();
    }

    public void getPokemonSpecies(out List<Tuple<int, string, int>> species)
    {
        species = new List<Tuple<int, string, int>>();

        string query = "SELECT pokemon_species.id, pokemon_species.identifier, pokemon_species.movement_type_id" +
                       " FROM " + daoGeneric.database + ".pokemon_species" +
                       " ORDER BY pokemon_species.id ASC";

        daoGeneric.con.ExecuteQuery(ref daoGeneric.dbconn, ref daoGeneric.dbcmd, ref daoGeneric.reader, query);

        while(daoGeneric.reader.Read())
        {
            species.Add(new Tuple<int, string, int>(daoGeneric.reader.GetInt32(0), daoGeneric.reader.GetString(1), daoGeneric.reader.GetInt32(2)));
        }

        daoGeneric.reader.Close();
    }
}