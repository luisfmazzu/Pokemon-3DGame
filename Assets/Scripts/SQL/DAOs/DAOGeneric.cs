using MySql.Data.MySqlClient;
using UnityEngine;

public class DAOGeneric
{
    #region Private Variables
        private static DAOGeneric _instance = null;

        public MySQLConnector   con     = new MySQLConnector();

        public MySqlConnection  dbconn  = null;
        public MySqlCommand     dbcmd   = null;
        public MySqlDataReader  reader  = null;

        public string database = "leonar14_pokemon_unity";
    #endregion

    public static DAOGeneric Instance
    {
        get
        {
            if(_instance == null)
            {
                _instance = new DAOGeneric();
            }

            return _instance;
        }
    }

    private DAOGeneric()
    {
        this.connectToDB();
    }

    ~DAOGeneric()
    {
        this.closeConnection();
    }

    private void connectToDB()
    {
        this.con.ConnectToDB(ref dbconn, database);

        Debug.Log("Connected to DB");
    }

    private void closeConnection()
    {
        this.con.CloseConnection(ref dbconn, ref dbcmd);

        Debug.Log("Closed Connection with DB");
    }
}