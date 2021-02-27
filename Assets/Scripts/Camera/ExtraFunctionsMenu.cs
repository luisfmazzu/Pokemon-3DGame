using UnityEngine;
using System.Collections;
using JetBrains.Annotations;
using UnityEngine.UI;

public class ExtraFunctionsMenu : MonoBehaviour
{
    #region Public Variables Declaration

    public float buttonWidth = 60.0f;
    public float buttonHeight = 20.0f;
    
    #endregion
    
    bool GUIEnabled = false;
    
    float spacingBetweenButtons = 30.0f;
    float offsetHeight = 0.75f;
    float offsetWidth = 0.927f;

    private TogglePanelButton togglePanel;

    private GameObject pokedexPanel;

    void Start()   
    {
        togglePanel = gameObject.AddComponent<TogglePanelButton>();
        
        pokedexPanel = GameObject.Find("PokedexPanel");
        togglePanel.TogglePanel(pokedexPanel);    
    }

    void Update()
    {
        if ((Input.GetKey(KeyCode.RightControl) || Input.GetKey(KeyCode.LeftControl)) && Input.GetKeyDown(KeyCode.M))
            GUIEnabled = !GUIEnabled;
    }

    void OnGUI()
    {
        float menuWidthPosition = Screen.width * offsetWidth;
        float menuHeightPosition = Screen.height / 2.0f * offsetHeight;
        
        if (GUIEnabled)
        {
            if (GUI.Button(new Rect(menuWidthPosition, menuHeightPosition - (spacingBetweenButtons * 5), buttonWidth, buttonHeight), "World Map"))
            {

            }

            if (GUI.Button(new Rect(menuWidthPosition, menuHeightPosition - (spacingBetweenButtons * 4), buttonWidth, buttonHeight), "Pokedex"))
            {
                togglePanel.TogglePanel(pokedexPanel);
            }

            if (GUI.Button(new Rect(menuWidthPosition, menuHeightPosition - (spacingBetweenButtons * 3), buttonWidth, buttonHeight), "Party"))
            {

            }

            if (GUI.Button(new Rect(menuWidthPosition, menuHeightPosition - (spacingBetweenButtons * 2), buttonWidth, buttonHeight), "Guild"))
            {

            }

            if (GUI.Button(new Rect(menuWidthPosition, menuHeightPosition - spacingBetweenButtons, buttonWidth, buttonHeight), "Chat"))
            {

            }

            if (GUI.Button(new Rect(menuWidthPosition, menuHeightPosition, buttonWidth, buttonHeight), "Quests"))
            {

            }
        }
    }
}