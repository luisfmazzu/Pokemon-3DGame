public class IV
{
    #region Constant Variables
        private const int MIN_VALUE = 0;
        private const int MAX_VALUE = 31;
    #endregion

    #region Public Variables Declaration
        public int hp           { get; set; }
        public int attack       { get; set; }
        public int defense      { get; set; }
        public int spAttack     { get; set; }
        public int spDefense    { get; set; }
        public int speed        { get; set; }
    #endregion

    public IV()
    {
    }

    public IV(int _hp, int _attack, int _defense, int _spAttack, int _spDefense, int _speed)
    {
        this.hp         = _hp;
        this.attack     = _attack;
        this.defense    = _defense;
        this.spAttack   = _spAttack;
        this.spDefense  = _spDefense;
        this.speed      = _speed;
    }
}