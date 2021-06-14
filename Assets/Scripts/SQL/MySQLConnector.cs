using UnityEngine;
using MySql.Data.MySqlClient;

public class MySQLConnector
{
    public void ConnectToDB(ref MySqlConnection dbconn, string database)
    {
        bool Pooling = false;

        //string Server = "localhost";
        string Server = "192.185.176.93";
        string User = "leonar14_unity";
        string Password = "Leo.Pereira91";

        string source = @"Server=" + Server +
                        ";Database=" + database +
                        ";User ID=" + User +
                        ";Pooling=" + Pooling +
                        ";Password=" + Password;
        
        dbconn = new MySqlConnection(source);
        
        dbconn.Open();
    }

    public void ExecuteQuery(ref MySqlConnection dbconn, ref MySqlCommand dbcmd, ref MySqlDataReader reader, string sqlQuery)
    {
        dbcmd = dbconn.CreateCommand();

        dbcmd.CommandText = sqlQuery;

        reader = dbcmd.ExecuteReader();
    }

    public void CloseConnection(ref MySqlConnection dbconn, ref MySqlCommand dbcmd)
    {
        dbcmd.Dispose();

        dbconn.Close();
    }
}