using MySql.Data.MySqlClient;
using System;
using System.Collections.Generic;
using UnityEngine;

public class DAOAccount : DAOGeneric
{
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

        while (reader.Read())
        {
            id = reader.GetInt32(0);

            success = true;
        }

        reader.Close();

        return success;
    }

    public void registerAccount(string username, string passwordHash)
    {
        string query = "INSERT INTO " + database + ".Accounts(`username`, `passwordHash`) VALUES ('" + username + "', '" + passwordHash + "')";

        con.ExecuteQuery(ref dbconn, ref dbcmd, ref reader, query);

        reader.Close();
    }
}