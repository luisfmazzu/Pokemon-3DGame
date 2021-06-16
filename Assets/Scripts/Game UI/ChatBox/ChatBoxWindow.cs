using UnityEngine;
using System.Collections;

public class ChatBoxWindow : MonoBehaviour
{
    #region Serialize Fields Variables Declaration
        [SerializeField] private GUIStyle   printGUIStyle;
        [SerializeField] private GUISkin    skin;

        [SerializeField] private int        maxLogMessages          = 200;
        [SerializeField] private int        maxStringLength         = 150;

        [SerializeField] private float      boxWidth                = 600.0f;
        [SerializeField] private float      boxHeight               = 60.0f; // This will be changed accordingly to the User's input config file!
        [SerializeField] private float      boxHeightIncreaseRate   = 60.0f;
        [SerializeField] private float      messageSpacing          = 10.0f;
    #endregion

    #region Private Variables Declaration
        private ArrayList       log             = new ArrayList();
        private System.DateTime actualDate      = new System.DateTime();
        private bool            visible         = true;
        private bool            selectTextfield = true;
        private string          stringToEdit    = "";
    #endregion

    #region Constant Variables Declaration
        const float boxHeightmin        = 0.0f;
        const float boxHeightmax        = 300.0f;
        const float maxLogLabelHeight   = 100.0f;
    #endregion

#pragma warning disable 618
    void Start()
    {
        Input.eatKeyPressOnTextFieldFocus = false;
    }
#pragma warning restore 618

    void print(string String)
    {
        log.Add(String);

        if (log.Count > maxLogMessages)
        { 
            log.RemoveAt(0);
        }
    }

    void OnGUI()
    {
        GUI.skin = skin;

        float[] logBoxHeights = new float[log.Count];

        float logBoxHeight  = 0.0f;
        float totalHeight   = 0.0f;
        
        if(visible)
        {
            GUI.SetNextControlName("chatWindow2");
            GUI.TextField(new Rect(0.0f, 5000.0f, 20.0f, 20.0f), "", maxStringLength);

            if(!selectTextfield)
            {
                GUI.SetNextControlName("chatWindow");

                stringToEdit = GUI.TextField(new Rect(0.0f, Screen.height - 50, boxWidth, 20), stringToEdit, maxStringLength); // Change the background GuiSkin.TextField.Focused.background
                
                GUI.FocusControl("chatWindow");
            }

            else
            { 
                GUI.FocusControl("chatWindow2");
            }

            int i = 0;
            foreach (string String in log)
            {
                logBoxHeight = Mathf.Min(maxLogLabelHeight, printGUIStyle.CalcHeight(new GUIContent(String), boxWidth));
                
                logBoxHeights[i++]  = logBoxHeight;
                totalHeight        += logBoxHeight + messageSpacing;
            }

            float innerScrollHeight = totalHeight;

            Vector2 scrollPos = Vector2.zero;

            int lastLogLen = 0;

            // if there's a new message, automatically scroll to bottom
            if(lastLogLen != log.Count)
            {
                scrollPos = new Vector2(0.0f, innerScrollHeight);

                lastLogLen = log.Count;
            }

            scrollPos = GUI.BeginScrollView(new Rect(0.0f, Screen.height - boxHeight - 50.0f, boxWidth, boxHeight), scrollPos, new Rect(0.0f, 0.0f, boxWidth - 20.0f, innerScrollHeight)); // Change the background GuiSkin.ScrollView.Focused.background

            float currY = 0.0f;

            i = 0;
            foreach (string String in log)
            {
                logBoxHeight = logBoxHeights[i++];

                GUI.Label(new Rect(messageSpacing, currY, boxWidth, logBoxHeight), String, printGUIStyle);

                currY += logBoxHeight + messageSpacing;
            }

            GUI.EndScrollView();
        }
    }

    void Update()
    {
        actualDate = System.DateTime.Now;

        string customDateFormat = actualDate.ToString("HH:mm:ss");

        if(Input.GetKeyDown("return"))
        {
            if(selectTextfield)
            { 
                selectTextfield = !selectTextfield;
            }

            if(stringToEdit == " ")
            {
                selectTextfield = true;

                stringToEdit = string.Empty;
            }

            else if(!string.IsNullOrEmpty(stringToEdit))
            {
                log.Add("[" + customDateFormat + "] " + /*player.PlayerName +*/ ": " + stringToEdit);

                selectTextfield = true;

                stringToEdit = string.Empty;
            }
        }

        if(Input.GetKeyDown(KeyCode.F10))
        {
            if (boxHeight <= boxHeightmax)
            { 
                boxHeight += boxHeightIncreaseRate;
            }

            else
            { 
                boxHeight = boxHeightmin;
            }
        }
    }
}