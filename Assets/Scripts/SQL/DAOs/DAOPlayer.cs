using System.Collections.Generic;
using UnityEngine;

public class DAOPlayer
{
    DAOGeneric daoGeneric = DAOGeneric.Instance;

    public int getPlayerID(string username, string password)
    {
        int id = 0;

        daoGeneric.con.ExecuteQuery(ref daoGeneric.dbconn, ref daoGeneric.dbcmd, ref daoGeneric.reader, "SELECT players.playerID" +
                                                                                                        " FROM " + daoGeneric.database + ".Players players, " + daoGeneric.database + ".Accounts accounts" +
                                                                                                        " WHERE accounts.username = '" + username + "'" +
                                                                                                        " AND accounts.password = '" + password + "'" +
                                                                                                        " AND players.accountID = accounts.accountID");

        while(daoGeneric.reader.Read())
        {
            id = daoGeneric.reader.GetInt32(0);
        }

        daoGeneric.reader.Close();

        return id;
    }

    public string getPlayerName(int playerID)
    {
        string name = null;

        daoGeneric.con.ExecuteQuery(ref daoGeneric.dbconn, ref daoGeneric.dbcmd, ref daoGeneric.reader, "SELECT players.name" +
                                                                                                        " FROM " + daoGeneric.database + ".Players players" +
                                                                                                        " WHERE players.playerID = " + playerID);

        while (daoGeneric.reader.Read())
        {
            name = daoGeneric.reader.GetString(0);
        }

        daoGeneric.reader.Close();

        return name;
    }

    public string getPlayerClass(int playerID)
    {
        string playerClass = null;

        daoGeneric.con.ExecuteQuery(ref daoGeneric.dbconn, ref daoGeneric.dbcmd, ref daoGeneric.reader, "SELECT playableClasses.name" +
                                                                                                        " FROM " + daoGeneric.database + ".Players players, " + daoGeneric.database + ".PlayableClasses playableClasses" +
                                                                                                        " WHERE players.playerID = " + playerID +
                                                                                                        " AND playableClasses.classID = players.classID");

        while (daoGeneric.reader.Read())
        {
            playerClass = daoGeneric.reader.GetString(0);
        }

        daoGeneric.reader.Close();

        return playerClass;
    }

    public int getPlayerBaseLvl(int playerID)
    {
        int lvl = 0;

        daoGeneric.con.ExecuteQuery(ref daoGeneric.dbconn, ref daoGeneric.dbcmd, ref daoGeneric.reader, "SELECT players.baseLvl" +
                                                                                                        " FROM " + daoGeneric.database + ".Players players" +
                                                                                                        " WHERE players.playerID = " + playerID);
        while (daoGeneric.reader.Read())
        {
            lvl = daoGeneric.reader.GetInt32(0);
        }

        daoGeneric.reader.Close();

        return lvl;
    }

    public float getPlayerBaseLvlExp(int playerID)
    {
        float exp = 0;

        daoGeneric.con.ExecuteQuery(ref daoGeneric.dbconn, ref daoGeneric.dbcmd, ref daoGeneric.reader, "SELECT players.baseLvlExp" +
                                                                                                        " FROM " + daoGeneric.database + ".Players players" +
                                                                                                        " WHERE players.playerID = " + playerID);
        while (daoGeneric.reader.Read())
        {
            exp = daoGeneric.reader.GetFloat(0);
        }

        daoGeneric.reader.Close();

        return exp;
    }

    public string getPlayerCurrentMap(int playerID)
    {
        string currentMap = null;

        daoGeneric.con.ExecuteQuery(ref daoGeneric.dbconn, ref daoGeneric.dbcmd, ref daoGeneric.reader, "SELECT maps.name" +
                                                                                                        " FROM " + daoGeneric.database + ".Players players, " + daoGeneric.database + ".Maps maps" +
                                                                                                        " WHERE players.playerID = " + playerID +
                                                                                                        " AND players. = maps.mapID");

        while (daoGeneric.reader.Read())
        {
            currentMap = daoGeneric.reader.GetString(0);
        }

        daoGeneric.reader.Close();

        return currentMap;
    }

    public Vector3 getPosition(int playerID)
    {
        Vector3 position = Vector3.zero;

        daoGeneric.con.ExecuteQuery(ref daoGeneric.dbconn, ref daoGeneric.dbcmd, ref daoGeneric.reader, "SELECT players.positionX, players.positionY, players.positionZ" +
                                                                                                        " FROM " + daoGeneric.database + ".Players players" +
                                                                                                        " WHERE players.playerID = " + playerID);
        while (daoGeneric.reader.Read())
        {
            position.x = daoGeneric.reader.GetFloat(0);
            position.y = daoGeneric.reader.GetFloat(1);
            position.z = daoGeneric.reader.GetFloat(2);
        }

        daoGeneric.reader.Close();

        return position;
    }

    public int getPlayerMoney(int playerID)
    {
        int money = 0;

        daoGeneric.con.ExecuteQuery(ref daoGeneric.dbconn, ref daoGeneric.dbcmd, ref daoGeneric.reader, "SELECT players.money" +
                                                                                                        " FROM " + daoGeneric.database + ".Players players" +
                                                                                                        " WHERE players.playerID = " + playerID);
        while (daoGeneric.reader.Read())
        {
            money = daoGeneric.reader.GetInt32(0);
        }

        daoGeneric.reader.Close();

        return money;
    }

    public void getPlayerInfo(int playerID, out string playerName, out string playerClass, out int playerBaseLvl, out float playerBaseLvlExp, out string playerCurrentMap, out Vector3 playerPosition, out int playerMoney)
    {
        daoGeneric.con.ExecuteQuery(ref daoGeneric.dbconn, ref daoGeneric.dbcmd, ref daoGeneric.reader, "SELECT Players.name, PlayableClasses.name, Players.baseLvl, Players.baseLvlExp, Maps.scene, Players.positionX, Players.positionY, Players.positionZ, Players.money" +
                                                                                                        " FROM " + daoGeneric.database + ".Players INNER JOIN " + daoGeneric.database + ".PlayableClasses ON Players.classID = PlayableClasses.classID" +
                                                                                                        " LEFT JOIN " + daoGeneric.database + ".Maps ON Players.currentMapID = Maps.mapID" +
                                                                                                        " WHERE Players.playerID = " + playerID);

        playerName = "";
        playerClass = "";
        playerBaseLvl = 1;
        playerBaseLvlExp = 0;
        playerCurrentMap = "";
        playerPosition = Vector3.zero;
        playerMoney = 0;

        while (daoGeneric.reader.Read())
        {
            playerName = daoGeneric.reader.GetString(0);
            playerClass = daoGeneric.reader.GetString(1);
            playerBaseLvl = daoGeneric.reader.GetInt32(2);
            playerBaseLvlExp = daoGeneric.reader.GetFloat(3);
            playerCurrentMap = daoGeneric.reader.GetString(4);
            playerPosition.x = daoGeneric.reader.GetFloat(5);
            playerPosition.y = daoGeneric.reader.GetFloat(6);
            playerPosition.z = daoGeneric.reader.GetFloat(7);
            playerMoney = daoGeneric.reader.GetInt32(8);
        }

        daoGeneric.reader.Close();
    }

    public void getPlayerLineUp(int playerID, out List<int> pokemonID)
    {
        pokemonID = new List<int>();

        string query = "SELECT PlayerLineUp.pokemonID" +
                       " FROM " + daoGeneric.database + ".PlayerLineUp" +
                       " WHERE PlayerLineUp.playerID=" + playerID +
                       " ORDER BY PlayerLineUp.teamPosition ASC";

        daoGeneric.con.ExecuteQuery(ref daoGeneric.dbconn, ref daoGeneric.dbcmd, ref daoGeneric.reader, query);

        while (daoGeneric.reader.Read())
        {
            pokemonID.Add(daoGeneric.reader.GetInt32(0));
        }

        daoGeneric.reader.Close();
    }
}