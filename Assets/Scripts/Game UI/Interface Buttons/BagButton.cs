using UnityEngine;
using UnityEngine.UI;

public class BagButton : MonoBehaviour
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
        Debug.Log("You have clicked the Bag Button!");
    }
}