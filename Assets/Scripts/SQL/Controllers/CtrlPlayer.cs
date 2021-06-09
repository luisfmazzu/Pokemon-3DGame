using System.Security.Cryptography;
using System.Text;
using UnityEngine;

public class CtrlPlayer
{
    DAOPlayer dao = new DAOPlayer();

    public int getPlayerID(string username, string password)
    {
        int playerID = 0;

        dao.connectToDB();

        playerID = dao.getPlayerID(username, password);

        dao.closeConnection();

        return playerID;
    }

    public string getPlayerName(int playerID)
    {
        string playerName = "";

        dao.connectToDB();

        playerName = dao.getPlayerName(playerID);

        dao.closeConnection();

        return playerName;
    }

    public string getPlayerClass(int playerID)
    {
        string playerClass = "";

        dao.connectToDB();

        playerClass = dao.getPlayerClass(playerID);

        dao.closeConnection();

        return playerClass;
    }

    public int getPlayerBaseLvl(int playerID)
    {
        int playerBaseLvl = 0;

        dao.connectToDB();

        playerBaseLvl = dao.getPlayerBaseLvl(playerID);

        dao.closeConnection();

        return playerBaseLvl;
    }

    public float getPlayerBaseLvlExp(int playerID)
    {
        float playerBaseLvlExp = 0.0f;

        dao.connectToDB();

        playerBaseLvlExp = dao.getPlayerBaseLvlExp(playerID);

        dao.closeConnection();

        return playerBaseLvlExp;
    }

    public string getCurrentMap(int playerID)
    {
        string playerMap = "";

        dao.connectToDB();

        playerMap = dao.getPlayerCurrentMap(playerID);

        dao.closeConnection();

        return playerMap;
    }

    public Vector3 getPosition(int playerID)
    {
        Vector3 playerPosition = Vector3.zero;

        dao.connectToDB();

        playerPosition = dao.getPosition(playerID);

        dao.closeConnection();

        return playerPosition;
    }

    public int getPlayerMoney(int playerID)
    {
        int playerMoney = 0;

        dao.connectToDB();

        playerMoney = dao.getPlayerMoney(playerID);

        dao.closeConnection();

        return playerMoney;
    }

    public void getPlayerInfo(int playerID, out string playerName, out string playerClass, out int playerBaseLvl, out float playerBaseLvlExp, out string playerCurrentMap, out Vector3 playerPosition, out int playerMoney)
    {
        dao.connectToDB();

        dao.getPlayerInfo(playerID, out playerName, out playerClass, out playerBaseLvl, out playerBaseLvlExp, out playerCurrentMap, out playerPosition, out playerMoney);

        dao.closeConnection();
    }

    public bool accountExists(string username)
    {
        bool exists = false;

        dao.connectToDB();

        if(dao.accountExists(username))
        {
            exists = true;
        }

        dao.closeConnection();

        return exists;
    }

    public void registerPlayer(string username, string password)
    {
        string passwordHash = computeSha256Hash(password);

        dao.connectToDB();

        dao.registerPlayer(username, passwordHash);

        dao.closeConnection();
    }

    public string computeSha256Hash(string rawData)
    {
        using(SHA256 sha256Hash = SHA256.Create())
        {
            byte[] bytes = sha256Hash.ComputeHash(Encoding.UTF8.GetBytes(rawData));

            StringBuilder builder = new StringBuilder();

            for(int i = 0; i < bytes.Length; i++)
            {
                builder.Append(bytes[i].ToString("x2"));
            }

            return builder.ToString();
        }
    }
}