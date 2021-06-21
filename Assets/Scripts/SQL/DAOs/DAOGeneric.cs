using MySql.Data.MySqlClient;
using System;
using System.Collections.Generic;
using UnityEngine;

public class DAOGeneric
{
    #region Private Variables
        public MySQLConnector   con     = new MySQLConnector();

        public MySqlConnection  dbconn  = null;
        public MySqlCommand     dbcmd   = null;
        public MySqlDataReader  reader  = null;

        public string database = "leonar14_pokemon_unity";
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
}