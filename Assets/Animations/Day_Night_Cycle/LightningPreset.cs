using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
[CreateAssetMenu(fileName = "Lightning Preset", menuName = "Scriptables/Lightning Preset", order = 1)]

public class LightningPreset : ScriptableObject
{
    #region PublicVariables
        public Gradient AmbientColor;
        public Gradient DirectionalColor;
        public Gradient FogColor;
    #endregion
}
