using UnityEngine;

public class EV
{
    #region Constant Variables
        private const int MIN_VALUE = 0;
        private const int MAX_VALUE = 255;
    #endregion

    #region Public Variables Declaration 
        public int hp         { get { return hp; }        set { hp        = Mathf.Clamp(value, MIN_VALUE, MAX_VALUE); } }
        public int attack     { get { return attack; }    set { attack    = Mathf.Clamp(value, MIN_VALUE, MAX_VALUE); } }
        public int defense    { get { return defense; }   set { defense   = Mathf.Clamp(value, MIN_VALUE, MAX_VALUE); } }
        public int spAttack   { get { return spAttack; }  set { spAttack  = Mathf.Clamp(value, MIN_VALUE, MAX_VALUE); } }
        public int spDefense  { get { return spDefense; } set { spDefense = Mathf.Clamp(value, MIN_VALUE, MAX_VALUE); } }
        public int speed      { get { return speed; }     set { speed     = Mathf.Clamp(value, MIN_VALUE, MAX_VALUE); } }
    #endregion
}