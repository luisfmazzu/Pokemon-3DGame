public class DAOAccount
{
    DAOGeneric daoGeneric = DAOGeneric.Instance;

    public bool accountExists(string username)
    {
        bool exists = false;

        daoGeneric.con.ExecuteQuery(ref daoGeneric.dbconn, ref daoGeneric.dbcmd, ref daoGeneric.reader, "SELECT Accounts.username" +
                                                                                                        " FROM " + daoGeneric.database + ".Accounts" +
                                                                                                        " WHERE Accounts.username='" + username + "'");

        while(daoGeneric.reader.Read())
        {
            exists = true;
        }

        daoGeneric.reader.Close();

        return exists;
    }

    public bool getAccountId(string username, string passwordHash, out int id)
    {
        bool success = false;

        id = 0;

        string query = "SELECT Accounts.accountID" +
                       " FROM " + daoGeneric.database + ".Accounts" +
                       " WHERE Accounts.username='" + username + "' AND Accounts.passwordHash='" + passwordHash + "'";

        daoGeneric.con.ExecuteQuery(ref daoGeneric.dbconn, ref daoGeneric.dbcmd, ref daoGeneric.reader, query);

        while(daoGeneric.reader.Read())
        {
            id = daoGeneric.reader.GetInt32(0);

            success = true;
        }

        daoGeneric.reader.Close();

        return success;
    }

    public void registerAccount(string username, string passwordHash)
    {
        string query = "INSERT INTO " + daoGeneric.database + ".Accounts(`username`, `passwordHash`) VALUES ('" + username + "', '" + passwordHash + "')";

        daoGeneric.con.ExecuteQuery(ref daoGeneric.dbconn, ref daoGeneric.dbcmd, ref daoGeneric.reader, query);

        daoGeneric.reader.Close();
    }
}