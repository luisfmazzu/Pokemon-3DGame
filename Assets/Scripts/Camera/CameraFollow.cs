using UnityEngine;
using System.Collections;

/// <summary>
/// Class responsible for the Camera's follow script
/// </summary>
public class CameraFollow : MonoBehaviour
{
    #region SerializeFields
        [SerializeField]                        private Transform  target;
        [SerializeField]                        private Vector3    offset;
        [SerializeField, Range(0.01f, 0.015f)]  private float      zoom         = 0.01f;
        [SerializeField]                        private float      currentYaw   = 0.00f;
    #endregion

    #region PrivateVariables
        private Camera m_myCam;
    #endregion

    void Start()
    {
        m_myCam = GetComponent<Camera>();
	}

    void Update()
    {
        transform.position = target.position + offset * zoom;

        transform.LookAt(target.position);

        transform.RotateAround(target.position, Vector3.up, currentYaw);
	}
}