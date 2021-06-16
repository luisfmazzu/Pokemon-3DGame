using MySql.Data.MySqlClient;
using System.Collections.Generic;
using UnityEngine;

public class DAOPlayer
{
    #region Private Variables
    MySQLConnector con = new MySQLConnector();

    MySqlConnection dbconn = null;
    MySqlCommand dbcmd = null;
    MySqlDataReader reader = null;

    private string database = "leonar14_pokemon_unity";
    #endregion

    public void connectToDB()
    {
        con.ConnectToDB(ref dbconn, database);

        Debug.Log("Connected to DB");
    }

    public void closeConnection()
    {
        con.CloseConnection(ref dbconn, ref dbcmd);

        Debug.Log("Closed Connection with DB");
    }

    public int getPlayerID(string username, string password)
    {
        int id = 0;

        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, "SELECT players.playerID" +
                                                            " FROM " + database + ".Players players, " + database + ".Accounts accounts" +
                                                            " WHERE accounts.username = '" + username + "'" +
                                                            " AND accounts.password = '" + password + "'" +
                                                            " AND players.accountID = accounts.accountID");

        while (reader.Read())
        {
            id = reader.GetInt32(0);
        }

        reader.Close();

        return id;
    }

    public string getPlayerName(int playerID)
    {
        string name = null;

        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, "SELECT players.name" +
                                                            " FROM " + database + ".Players players" +
                                                            " WHERE players.playerID = " + playerID);

        while (reader.Read())
        {
            name = reader.GetString(0);
        }

        reader.Close();

        return name;
    }

    public string getPlayerClass(int playerID)
    {
        string playerClass = null;

        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, "SELECT playableClasses.name" +
                                                            " FROM " + database + ".Players players, " + database + ".PlayableClasses playableClasses" +
                                                            " WHERE players.playerID = " + playerID +
                                                            " AND playableClasses.classID = players.classID");

        while (reader.Read())
        {
            playerClass = reader.GetString(0);
        }

        reader.Close();

        return playerClass;
    }

    public int getPlayerBaseLvl(int playerID)
    {
        int lvl = 0;

        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, "SELECT players.baseLvl" +
                                                            " FROM " + database + ".Players players" +
                                                            " WHERE players.playerID = " + playerID);
        while (reader.Read())
        {
            lvl = reader.GetInt32(0);
        }

        reader.Close();

        return lvl;
    }

    public float getPlayerBaseLvlExp(int playerID)
    {
        float exp = 0;

        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, "SELECT players.baseLvlExp" +
                                                            " FROM " + database + ".Players players" +
                                                            " WHERE players.playerID = " + playerID);
        while (reader.Read())
        {
            exp = reader.GetFloat(0);
        }

        reader.Close();

        return exp;
    }

    public string getPlayerCurrentMap(int playerID)
    {
        string currentMap = null;

        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, "SELECT maps.name" +
                                                            " FROM " + database + ".Players players, " + database + ".Maps maps" +
                                                            " WHERE players.playerID = " + playerID +
                                                            " AND players. = maps.mapID");

        while (reader.Read())
        {
            currentMap = reader.GetString(0);
        }

        reader.Close();

        return currentMap;
    }

    public Vector3 getPosition(int playerID)
    {
        Vector3 position = Vector3.zero;

        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, "SELECT players.positionX, players.positionY, players.positionZ" +
                                                            " FROM " + database + ".Players players" +
                                                            " WHERE players.playerID = " + playerID);
        while (reader.Read())
        {
            position.x = reader.GetFloat(0);
            position.y = reader.GetFloat(1);
            position.z = reader.GetFloat(2);
        }

        reader.Close();

        return position;
    }

    public int getPlayerMoney(int playerID)
    {
        int money = 0;

        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, "SELECT players.money" +
                                                            " FROM " + database + ".Players players" +
                                                            " WHERE players.playerID = " + playerID);
        while (reader.Read())
        {
            money = reader.GetInt32(0);
        }

        reader.Close();

        return money;
    }

    public void getPlayerInfo(int playerID, out string playerName, out string playerClass, out int playerBaseLvl, out float playerBaseLvlExp, out string playerCurrentMap, out Vector3 playerPosition, out int playerMoney)
    {
        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, "SELECT Players.name, PlayableClasses.name, Players.baseLvl, Players.baseLvlExp, Maps.scene, Players.positionX, Players.positionY, Players.positionZ, Players.money" +
                                                            " FROM " + database + ".Players INNER JOIN " + database + ".PlayableClasses ON Players.classID = PlayableClasses.classID" +
                                                            " LEFT JOIN " + database + ".Maps ON Players.currentMapID = Maps.mapID" +
                                                            " WHERE Players.playerID = " + playerID);

        playerName = "";
        playerClass = "";
        playerBaseLvl = 1;
        playerBaseLvlExp = 0;
        playerCurrentMap = "";
        playerPosition = Vector3.zero;
        playerMoney = 0;

        while (reader.Read())
        {
            playerName = reader.GetString(0);
            playerClass = reader.GetString(1);
            playerBaseLvl = reader.GetInt32(2);
            playerBaseLvlExp = reader.GetFloat(3);
            playerCurrentMap = reader.GetString(4);
            playerPosition.x = reader.GetFloat(5);
            playerPosition.y = reader.GetFloat(6);
            playerPosition.z = reader.GetFloat(7);
            playerMoney = reader.GetInt32(8);
        }

        reader.Close();
    }

    public bool accountExists(string username)
    {
        bool exists = false;

        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, "SELECT Accounts.username" +
                                                            " FROM " + database + ".Accounts" +
                                                            " WHERE Accounts.username='" + username + "'");

        while (reader.Read())
        {
            exists = true;
        }

        reader.Close();

        return exists;
    }

    public bool getAccountId(string username, string passwordHash, out int id)
    {
        bool success = false;

        id = 0;

        string query = "SELECT Accounts.accountID" +
                       " FROM " + database + ".Accounts" +
                       " WHERE Accounts.username='" + username + "' AND Accounts.passwordHash='" + passwordHash + "'";

        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, query);

        while(reader.Read())
        {
            id = reader.GetInt32(0);

            success = true;
        }

        reader.Close();

        return success;
    }

    public void registerPlayer(string username, string passwordHash)
    {
        string query = "INSERT INTO " + database + ".Accounts(`username`, `passwordHash`) VALUES ('" + username + "', '" + passwordHash + "')";

        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, query);

        reader.Close();
    }

    public void getPlayerLineUp(int playerID, out List<int> pokemonID)
    {
        pokemonID = new List<int>();

        string query = "SELECT PlayerLineUp.pokemonID" + 
                       " FROM " + database + ".PlayerLineUp" +
                       " WHERE PlayerLineUp.playerID=" + playerID +
                       " ORDER BY PlayerLineUp.teamPosition ASC";

        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, query);

        while(reader.Read())
        {
            pokemonID.Add(reader.GetInt32(0));
        }

        reader.Close();
    }

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
                       " FROM " + database + ".Pokemons" +
                       " WHERE Pokemons.pokemonID=" + pokemonID;

        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, query);

        while(reader.Read())
        {
            // reader.GetInt32(0) is pokemonID
            // reader.GetInt32(1) is currentPlayerID

            _speciesID          = reader.GetInt32(2);
            _originalTrainerID  = reader.GetInt32(3);
            _variantID          = reader.GetInt32(4);
            _nickname           = reader.GetString(5);
            _currentHP          = reader.GetInt32(6);
            _baseLvl            = reader.GetInt32(7);
            _baseLvlExp         = reader.GetFloat(8);
            _ivs                = new IV(reader.GetInt32(9), reader.GetInt32(10), reader.GetInt32(11), reader.GetInt32(12), reader.GetInt32(13), reader.GetInt32(14));
            _untrainedEVs       = new EV(reader.GetInt32(15), reader.GetInt32(16), reader.GetInt32(17), reader.GetInt32(18), reader.GetInt32(19), reader.GetInt32(20));
            _trainedEVs         = new EV(reader.GetInt32(21), reader.GetInt32(22), reader.GetInt32(23), reader.GetInt32(24), reader.GetInt32(25), reader.GetInt32(26));
            _abilityID          = reader.GetInt32(27);
            _natureID           = reader.GetInt32(28);
            _captureBallID      = reader.GetInt32(29);
            _genderID           = reader.GetInt32(30);
        }

        reader.Close();
    }
}