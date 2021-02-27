using MySql.Data.MySqlClient;
using UnityEngine;

public class DAOPlayer
{
    MySQLConnector con = new MySQLConnector();

    MySqlConnection dbconn = null;
    MySqlCommand dbcmd = null;
    MySqlDataReader reader = null;

    private string database = "tqp_generaldatabase";

    public int getPlayerID(string username, string password)
    {
        int id = 0;
        
        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, database, "SELECT Player.playerID" +
                                                                      " FROM tqp_generaldatabase.player Player, tqp_generaldatabase.accounts Accounts" +
                                                                      " WHERE Accounts.username = '" + username + "'" +
                                                                      " AND Accounts.password = '" + password + "'" +
                                                                      " AND Player.accountID = Accounts.accountID");
        while (reader.Read())
        {
            id = reader.GetInt32(0);
        }

        con.CloseConnection(ref dbconn, ref dbcmd, ref reader);

        return id;
    }

    public string getPlayerName(int playerID)
    {
        string name = null;

        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, database, "SELECT Player.name" +
                                                                      " FROM tqp_generaldatabase.player Player" +
                                                                      " WHERE Player.playerID = " + playerID);

        while (reader.Read())
        {
            name = reader.GetString(0);
        }

        con.CloseConnection(ref dbconn, ref dbcmd, ref reader);

        return name;
    }

    public string getPlayerClass(int playerID)
    {
        string playerClass = null;

        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, database, "SELECT PlayableClasses.name" +
                                                                      " FROM tqp_generaldatabase.player Player, tqp_generaldatabase.playableclasses PlayableClasses" +
                                                                      " WHERE Player.playerID = " + playerID +
                                                                      " AND PlayableClasses.classID = Player.classID");

        while (reader.Read())
        {
            playerClass = reader.GetString(0);
        }

        con.CloseConnection(ref dbconn, ref dbcmd, ref reader);

        return playerClass;
    }

    public int getPlayerBaseLvl(int playerID)
    {
        int lvl = 0;

        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, database, "SELECT Player.baseLvl" +
                                                                      " FROM tqp_generaldatabase.player Player" +
                                                                      " WHERE Player.playerID = " + playerID);
        while (reader.Read())
        {
            lvl = reader.GetInt32(0);
        }

        con.CloseConnection(ref dbconn, ref dbcmd, ref reader);

        return lvl;
    }

    public float getPlayerBaseLvlExp(int playerID)
    {
        float exp = 0;

        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, database, "SELECT Player.baseLvlExp" +
                                                                      " FROM tqp_generaldatabase.player Player" +
                                                                      " WHERE Player.playerID = " + playerID);
        while (reader.Read())
        {
            exp = reader.GetFloat(0);
        }

        con.CloseConnection(ref dbconn, ref dbcmd, ref reader);

        return exp;
    }

    public Vector2 getPosition(int playerID)
    {
        Vector2 position = Vector2.zero;

        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, database, "SELECT Player.positionX, Player.positionY" +
                                                                      " FROM tqp_generaldatabase.player Player" +
                                                                      " WHERE Player.playerID = " + playerID);
        while (reader.Read())
        {
            position.x = reader.GetFloat(0);
            position.y = reader.GetFloat(1);
        }

        con.CloseConnection(ref dbconn, ref dbcmd, ref reader);

        return position;
    }

    public int getPlayerMoney(int playerID)
    {
        int money = 0;

        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, database, "SELECT Player.money" +
                                                                      " FROM tqp_generaldatabase.player Player" +
                                                                      " WHERE Player.playerID = " + playerID);
        while (reader.Read())
        {
            money = reader.GetInt32(0);
        }

        con.CloseConnection(ref dbconn, ref dbcmd, ref reader);

        return money;
    }
}