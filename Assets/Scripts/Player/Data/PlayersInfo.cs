using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayersInfo
{
    public class Player
    {
        public string   playerName          { get; set; }
        public string   playerClass         { get; set; }
        public int      playerBaseLvl       { get; set; }
        public float    playerBaseLvlExp    { get; set; }
        public string   playerCurrentMap    { get; set; }
        public Vector3  playerPosition      { get; set; }
        public int      playerMoney         { get; set; }

        public Player(string _name, string _class, int _baseLvl, float _baseLvlExp, string _currentMap, Vector3 _currentPosition, int _money)
        {
            this.playerName         = _name;
            this.playerClass        = _class;
            this.playerBaseLvl      = _baseLvl;
            this.playerBaseLvlExp   = _baseLvlExp;
            this.playerCurrentMap   = _currentMap;
            this.playerPosition     = _currentPosition;
            this.playerMoney        = _money;
        }
    }

    public IEnumerator IsReady()
    {
        while(!ready)
        {
            yield return null;
        }
    }

    #region Private Variables Declaration
        private         bool                    ready   = false;
        private         Dictionary<int, Player> players = new Dictionary<int, Player>();
    #endregion

    public void LoadPlayers()
    {
        CtrlPlayer ctrlPlayer = new CtrlPlayer();

        List<Tuple<int, string, string, int, float, string, Vector3, Tuple<int>>> allPlayers;

        ctrlPlayer.getAllPlayersInfo(out allPlayers);

        foreach(Tuple<int, string, string, int, float, string, Vector3, Tuple<int>> player in allPlayers)
        {
            this.players[player.Item1] = new Player(player.Item2, player.Item3, player.Item4, player.Item5, player.Item6, player.Item7, player.Rest.Item1);
        }

        this.ready = true;
    }

    public Player RetrievePlayer(int playerID)
    {
        return this.players[playerID];
    }
}
