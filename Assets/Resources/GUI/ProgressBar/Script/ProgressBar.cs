using UnityEngine;
using UnityEngine.UI;

public class ProgressBar : MonoBehaviour
{
    #region Enumerators
        enum BarTypes
        {
            ExperienceBar,
            HealthBar
        }
    #endregion

    #region Delegates
        public delegate void HandlerDelegate();
    #endregion

    #region Constant Variables
        private const float MIN_BAR_VALUE = 0.0f;
        private const float MAX_BAR_VALUE = 100.0f;
    #endregion

    #region SerializeFields
        [Header("Bar Setting")]
        [SerializeField]                    private Color      BarColor;
        [SerializeField]                    private Color      BarBackGroundColor;
        [SerializeField]                    private Sprite     BarBackGroundSprite;
        [SerializeField]                    private BarTypes   BarType;
        [SerializeField, Range(0.5f, 5f)]   private float      BarUpdateSpeedPerFrame = 1.0f;
        [SerializeField]                    private bool       IsTextAvailable;
    #endregion

    #region Private Variables Declaration
        private Image   bar;
        private Image   barBackground;
        private Text    text;
        private float   barValue;
    #endregion

    #region Internal Variables Declaration
        internal float CurrentBarValue;

        internal HandlerDelegate HandleBarFunction;
    #endregion

    public float BarValue
    {
        get { return barValue; }

        set
        {
            value = Mathf.Clamp(value, MIN_BAR_VALUE, MAX_BAR_VALUE);
            barValue = value;
        }
    }

    private void Awake()
    {
        bar             = transform.Find("Bar").GetComponent<Image>();
        barBackground   = transform.Find("BarBackground").GetComponent<Image>();

        if(IsTextAvailable)
        {
            text = transform.Find("Text With Trigger Button").Find("Text").GetComponent<Text>();
        }
    }

    private void Start()
    {
        bar.color               = BarColor;
        barBackground.color     = BarBackGroundColor;
        barBackground.sprite    = BarBackGroundSprite;

        UpdateValue(barValue);

        if (this.BarType == BarTypes.ExperienceBar)
        {
            this.HandleBarFunction = this.HandleExperienceBar;
        }
        else if (this.BarType == BarTypes.HealthBar)
        {
            this.HandleBarFunction = this.HandleHealthBar;
        }
    }

    void UpdateValue(float val)
    {
        bar.fillAmount  = this.GetValueNormalized(val);
        CurrentBarValue = val;

        if (IsTextAvailable)
        {
            text.text = val.ToString("F2") + "%";
        }
    }

    float GetValueNormalized(float val)
    {
        return val / MAX_BAR_VALUE;
    }

    float GetValueTimesDelta(float val)
    {
        return val * Time.deltaTime * BarUpdateSpeedPerFrame;
    }

    private void Update()
    {
        this.HandleBarFunction();
    }

    private void HandleExperienceBar()
    {
        if(this.barValue > this.CurrentBarValue) // Gained Experience without leveling up
        {
            this.CurrentBarValue += this.GetValueTimesDelta(this.barValue);
            this.CurrentBarValue  = Mathf.Clamp(this.CurrentBarValue, MIN_BAR_VALUE, this.barValue);

            this.UpdateValue(this.CurrentBarValue);
        }
        else if(this.barValue < this.CurrentBarValue) // Leveled Up
        {
            if(this.CurrentBarValue < 100.0f)
            {
                this.CurrentBarValue += this.GetValueTimesDelta(MAX_BAR_VALUE);
                this.CurrentBarValue  = Mathf.Clamp(this.CurrentBarValue, MIN_BAR_VALUE, MAX_BAR_VALUE);
            }
            else
            {
                this.CurrentBarValue = 0.0f;
            }

            this.UpdateValue(this.CurrentBarValue);
        }
    }

    private void HandleHealthBar()
    {
        if(this.barValue > this.CurrentBarValue)    // Health Increased
        {
            this.CurrentBarValue += this.GetValueTimesDelta(this.barValue);
            this.CurrentBarValue  = Mathf.Clamp(this.CurrentBarValue, MIN_BAR_VALUE, this.barValue);

            this.UpdateValue(this.CurrentBarValue);
        }
        else if (this.barValue < this.CurrentBarValue)  // Health Decreased
        {
            this.CurrentBarValue -= this.GetValueTimesDelta(this.barValue);
            this.CurrentBarValue  = Mathf.Clamp(this.CurrentBarValue, this.barValue, MAX_BAR_VALUE);

            this.UpdateValue(this.CurrentBarValue);
        }
    }
}
