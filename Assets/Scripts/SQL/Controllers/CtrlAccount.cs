using System;
using System.Collections.Generic;
using System.Security.Cryptography;
using System.Text;
using UnityEngine;

public class CtrlAccount
{
    DAOAccount dao = new DAOAccount();

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
    public void registerAccount(string username, string password)
    {
        string passwordHash = computeSha256Hash(password);

        dao.registerAccount(username, passwordHash);
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