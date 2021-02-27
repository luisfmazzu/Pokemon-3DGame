using UnityEngine;

public class CtrlPlayer
{
	DAOPlayer dao = new DAOPlayer();

    public int getPlayerID(string username, string password)
    {
        return dao.getPlayerID(username, password);
    }

    public string getPlayerName(int playerID)
    {
        return dao.getPlayerName(playerID);
    }

    public string getPlayerClass(int playerID)
    {
        return dao.getPlayerClass(playerID);
    }

    public int getPlayerBaseLvl(int playerID)
    {
        return dao.getPlayerBaseLvl(playerID);
    }

    public float getPlayerBaseLvlExp(int playerID)
    {
        return dao.getPlayerBaseLvlExp(playerID);
    }

    public Vector2 getPosition(int playerID)
    {
        return dao.getPosition(playerID);
    }

    public int getPlayerMoney(int playerID)
    {
        return dao.getPlayerMoney(playerID);
    }
}


