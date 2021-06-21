using MySql.Data.MySqlClient;
using System;
using System.Collections.Generic;
using UnityEngine;

public class DAOPlayer : DAOGeneric
{
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

    public void getPlayerLineUp(int playerID, out List<int> pokemonID)
    {
        pokemonID = new List<int>();

        string query = "SELECT PlayerLineUp.pokemonID" +
                       " FROM " + database + ".PlayerLineUp" +
                       " WHERE PlayerLineUp.playerID=" + playerID +
                       " ORDER BY PlayerLineUp.teamPosition ASC";

        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, query);

        while (reader.Read())
        {
            pokemonID.Add(reader.GetInt32(0));
        }

        reader.Close();
    }
}