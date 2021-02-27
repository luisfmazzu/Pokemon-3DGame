using UnityEngine;
using MySql.Data.MySqlClient;

public class MySQLConnector
{
    public void ConnectToDB(ref MySqlConnection dbconn, string database)
    {
        bool Pooling = false;

        string Server = "localhost";
        string User = "root";
        string Password = "root";

        string source = @"Server=" + Server +
                        ";Database=" + database +
                        ";User ID=" + User +
                        ";Pooling=" + Pooling +
                        ";Password=" + Password;
        
        dbconn = new MySqlConnection(source);
        
        dbconn.Open();
    }

    public void ExecuteQuery(ref MySqlConnection dbconn, ref MySqlCommand dbcmd, ref MySqlDataReader reader, string database, string sqlQuery)
    {
        ConnectToDB(ref dbconn, database);

        dbcmd = dbconn.CreateCommand();

        dbcmd.CommandText = sqlQuery;

        reader = dbcmd.ExecuteReader();
    }

    public void CloseConnection(ref MySqlConnection dbconn, ref MySqlCommand dbcmd, ref MySqlDataReader reader)
    {
        reader.Close();

        dbcmd.Dispose();

        dbconn.Close();
    }
}