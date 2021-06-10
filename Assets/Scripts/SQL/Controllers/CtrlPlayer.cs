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

    public bool accountExists(string username)
    {
        bool exists = false;

        if(dao.accountExists(username))
        {
            exists = true;
        }

        return exists;
    }

    public bool getAccountId(string username, string password, out int id)
    {
        string passwordHash = computeSha256Hash(password);

        return dao.getAccountId(username, passwordHash, out id);
    }

    public void registerPlayer(string username, string password)
    {
        string passwordHash = computeSha256Hash(password);

        dao.registerPlayer(username, passwordHash);
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