using UnityEngine;
using UnityEngine.UI;

public class AchievementsButton : MonoBehaviour
{
    #region Private Variables Declaration
    #endregion

    private void Awake()
    {

    }

    void Start()
    {
        Button button = this.GetComponent<Button>();

        button.onClick.AddListener(TaskOnClick);
    }

    void TaskOnClick()
    {
        Debug.Log("You have clicked the Achievements Button!");
    }
}