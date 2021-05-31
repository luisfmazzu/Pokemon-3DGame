using UnityEngine;
using System.Collections;

/// <summary>
/// Class responsible for the Camera's follow script
/// </summary>
public class CameraFollow : MonoBehaviour
{
    #region Public Variables Declaration

    public Transform target;

    public Vector3 offset;

    public float zoom = 1f;
    public float currentYaw = 0f;

    #endregion

    private Camera m_myCam;

    /// <summary>
    /// Use this for initialization.
    /// </summary>
    void Start ()
    {
        m_myCam = GetComponent<Camera>();
	}


    /// <summary>
    /// Update is called once per frame.
    /// </summary>
    void Update ()
    {
        transform.position = target.position + offset * zoom;
        transform.LookAt(target.position);
        transform.RotateAround(target.position, Vector3.up, currentYaw);
	}
}