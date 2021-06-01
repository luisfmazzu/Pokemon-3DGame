using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[ExecuteAlways]
public class LightningManager : MonoBehaviour
{
    #region SerializeFields
        [SerializeField]                private Light           directionalLight;
    
        [SerializeField]                private LightningPreset preset;

        [SerializeField, Range(0, 24)]  private float           timeOfDay;
        [SerializeField, Range(1, 100)] private float           speed;
    #endregion

    #region PrivateVariables
        private float gameTimeRatio;
    #endregion

    void Start()
    {
        const int secsPerHour = 3600;

        gameTimeRatio = (secsPerHour / speed);
    }

    private void Update()
    {
        const float hoursPerDay = 24f;

        if(preset == null)
        {
            return;
        }

        if(Application.isPlaying)
        {
            timeOfDay += (Time.deltaTime / gameTimeRatio);

            timeOfDay %= hoursPerDay; // Clamp between 0-24

            UpdateLightning(timeOfDay / hoursPerDay);
        }
        else
        {
            UpdateLightning(timeOfDay / hoursPerDay);
        }
    }

    private void UpdateLightning(float timePercent)
    {
        RenderSettings.ambientLight = preset.AmbientColor.Evaluate(timePercent);
        RenderSettings.fogColor     = preset.FogColor.Evaluate(timePercent);

        if(directionalLight != null)
        {
            directionalLight.color                      = preset.DirectionalColor.Evaluate(timePercent);
            directionalLight.transform.localRotation    = Quaternion.Euler(new Vector3((timePercent * 360f) - 90f, 170f, 0));
        }
    }

    private void OnValidate()
    {
        if(directionalLight != null)
        {
            return;
        }

        if(RenderSettings.sun != null)
        {
            directionalLight = RenderSettings.sun;
        }
        else
        {
            Light[] lights = GameObject.FindObjectsOfType<Light>();

            foreach(Light light in lights)
            {
                if(light.type == LightType.Directional)
                {
                    directionalLight = light;

                    return;
                }
            }
        }
    }
}
