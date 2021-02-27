using UnityEngine;
using System.Collections;

/// <summary>
/// Class responsible for the Camera's follow script
/// </summary>
public class CameraFollow : MonoBehaviour
{
    #region Public Variables Declaration

    public Transform target;

    public float cameraScale = 4.0f; // The Camera Scale
    public float cameraSpeed = 0.1f; // The Velocity the Camera "runs afer" the Player

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
        Vector3 CAMERA_POSITION = new Vector3(0.0f, 0.0f, -10.0f); // The Camera in Unity is in a 3D World, knowing this we need to "add" the Z-Coord in our new Position

        m_myCam.orthographicSize = (Screen.height / 100.0f) / cameraScale;

        if (target)
            transform.position = Vector3.Lerp(transform.position, target.position, cameraSpeed) + CAMERA_POSITION;
	}
}