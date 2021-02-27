using UnityEngine;
using System.Collections;
public class IngameMenu : MonoBehaviour
{
    #region Public Variables Declaration
    #endregion

    static float buttonWidth    = 160.0f;
    static float buttonHeight   = 20.0f;
    float spacingBetweenButtons = 30.0f;
    float offset                = 1.6f; // offset in %
    float screenCenterWidth     = (Screen.width / 2.0f) - (buttonWidth / 2.0f);
    float screenCenterHeight    = (Screen.height / 2.0f) - (buttonHeight / 2.0f);
    bool GUIEnabled = false;

    void Update ()
    {
        if (Input.GetKeyDown("escape"))
            GUIEnabled = !GUIEnabled;
    }

    void OnGUI ()
    {
        float menuHeightPosition = screenCenterHeight * offset;

        if (GUIEnabled)
        {
            if (GUI.Button(new Rect(screenCenterWidth, menuHeightPosition - (spacingBetweenButtons * 2), buttonWidth, buttonHeight), "Options"))
            {

            }

            if (GUI.Button(new Rect(screenCenterWidth, menuHeightPosition - spacingBetweenButtons, buttonWidth, buttonHeight), "Help"))
            {

            }

            if (GUI.Button(new Rect(screenCenterWidth, menuHeightPosition, buttonWidth, buttonHeight), "Return to Game"))
                GUIEnabled = !GUIEnabled;
        }
    }
}