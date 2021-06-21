using System;
using System.Collections.Generic;
using System.Security.Cryptography;
using System.Text;
using UnityEngine;

public class CtrlPlayer
{
    DAOPlayer dao = new DAOPlayer();

    public CtrlPlayer()
    {
        dao.connectToDB();
    }

    ~CtrlPlayer()
    {
        dao.closeConnection();
    }

    public int getPlayerID(string username, string password)
    {
        int playerID = 0;

        playerID = dao.getPlayerID(username, password);

        return playerID;
    }

    public string getPlayerName(int playerID)
    {
        string playerName = "";

        playerName = dao.getPlayerName(playerID);

        return playerName;
    }

    public string getPlayerClass(int playerID)
    {
        string playerClass = "";

        playerClass = dao.getPlayerClass(playerID);

        return playerClass;
    }

    public int getPlayerBaseLvl(int playerID)
    {
        int playerBaseLvl = 0;

        playerBaseLvl = dao.getPlayerBaseLvl(playerID);

        return playerBaseLvl;
    }

    public float getPlayerBaseLvlExp(int playerID)
    {
        float playerBaseLvlExp = 0.0f;

        playerBaseLvlExp = dao.getPlayerBaseLvlExp(playerID);

        return playerBaseLvlExp;
    }

    public string getCurrentMap(int playerID)
    {
        string playerMap = "";

        playerMap = dao.getPlayerCurrentMap(playerID);

        return playerMap;
    }

    public Vector3 getPosition(int playerID)
    {
        Vector3 playerPosition = Vector3.zero;

        playerPosition = dao.getPosition(playerID);

        return playerPosition;
    }

    public int getPlayerMoney(int playerID)
    {
        int playerMoney = 0;

        playerMoney = dao.getPlayerMoney(playerID);

        return playerMoney;
    }

    public void getPlayerInfo(int playerID, out string playerName, out string playerClass, out int playerBaseLvl, out float playerBaseLvlExp, out string playerCurrentMap, out Vector3 playerPosition, out int playerMoney)
    {
        dao.getPlayerInfo(playerID, out playerName, out playerClass, out playerBaseLvl, out playerBaseLvlExp, out playerCurrentMap, out playerPosition, out playerMoney);
    }

    public void getPlayerLineUp(int playerID, out List<int> pokemonID)
    {
        dao.getPlayerLineUp(playerID, out pokemonID);
    }
}