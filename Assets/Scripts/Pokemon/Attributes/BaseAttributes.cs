public class BaseAttributes
{
    #region Constant Variables
        private const int MIN_VALUE     = 0;
        private const int MAX_IV_VALUE  = 31;
        private const int MAX_EV_VALUE  = 255;
    #endregion

    #region Public Variables Declaration 
        public int hp           { get; set; }
        public int attack       { get; set; }
        public int defense      { get; set; }
        public int spAttack     { get; set; }
        public int spDefense    { get; set; }
        public int speed        { get; set; }
    #endregion

    public BaseAttributes()
    {
    }

    public BaseAttributes(int _hp, int _attack, int _defense, int _spAttack, int _spDefense, int _speed)
    {
        this.hp         = _hp;
        this.attack     = _attack;
        this.defense    = _defense;
        this.spAttack   = _spAttack;
        this.spDefense  = _spDefense;
        this.speed      = _speed;
    }
}