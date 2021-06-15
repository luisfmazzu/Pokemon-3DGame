using UnityEngine;
using System.Collections;

/// <summary>
/// Class responsible for the Camera's follow script
/// </summary>
public class CameraFollow : MonoBehaviour
{
    #region Constant Variables
        private const float     minZoom     = 0.0075f;
        private const float     maxZoom     = 0.02f;
        private const float     defaultZoom = 0.01f;
        private const float     zoomIncr    = 0.0005f;
        private const float     offsetIncr  = 20.0f;

        private Vector3 minOffset       { get { return new Vector3(0.0f, 500.0f, -1000.0f); } }
        private Vector3 maxOffset       { get { return new Vector3(0.0f, 2000.0f, 0.0f); } }
        private Vector3 defaultOffset   { get { return new Vector3(0.0f, 1000.0f, -1000.0f); } }
    #endregion

    #region SerializeFields
        [SerializeField] private bool       interiorMap;
    #endregion

    #region PrivateVariables
        private Camera  m_myCam;
        private float   currentYaw          = 180.00f;
        private Vector3 offset              = new Vector3(0.00f, 1000.0f, -1000.00f);
        private float   zoom                = defaultZoom;
        private float   lastMouseYPosition  = 0.0f;
        private Transform target;
    #endregion

    enum MouseButtons
    {
        LEFT_CLICK      = 0,
        RIGHT_CLICK     = 1,
        MIDDLE_CLICK    = 2
    }

    void Start()
    {
        this.m_myCam = GetComponent<Camera>();
        this.target = Player.Instance.transform;

    }

    void Update()
    {
        if(!interiorMap)
        { 
            this.checkMouseWheel();

            this.checkMouseRightButton();
        }

        this.transform.position = this.target.position + this.offset * this.zoom;

        this.transform.LookAt(this.target.position);

        this.transform.RotateAround(this.target.position, Vector3.up, this.currentYaw);
	}

    void checkMouseWheel()
    {
        float mouseWheel = Input.GetAxis("Mouse ScrollWheel");

        if (mouseWheel != 0.00f)
        {
            this.zoom = (mouseWheel > 0.00f) ? (this.zoom - zoomIncr)   // Scrolled Down --> User wants the camera to be closer
                                             : (this.zoom + zoomIncr);  // Scrolled Up   --> User wants the camera to be Further away
        }

        this.zoom = Mathf.Clamp(this.zoom, minZoom, maxZoom);
    }

    void checkMouseRightButton()
    {
        if(Input.GetMouseButton((int)MouseButtons.RIGHT_CLICK))
        {
            float currentMousePosY      = Input.mousePosition.y;
            float deltaMouseYPosition   = currentMousePosY - this.lastMouseYPosition;

            if(deltaMouseYPosition > 0.0f)
            {
                this.offset.y -= offsetIncr;
                this.offset.z -= offsetIncr;
            }
            else if(deltaMouseYPosition < 0.0f)
            {
                this.offset.y += offsetIncr;
                this.offset.z += offsetIncr;
            }

            this.offset.y = Mathf.Clamp(this.offset.y, this.minOffset.y, this.maxOffset.y);
            this.offset.z = Mathf.Clamp(this.offset.z, this.minOffset.z, this.maxOffset.z);

            this.lastMouseYPosition = currentMousePosY;
        }
    }
}