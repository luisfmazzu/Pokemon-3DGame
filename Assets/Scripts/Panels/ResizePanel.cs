using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System;

public class ResizePanel : MonoBehaviour, IPointerDownHandler, IDragHandler
{
    public Vector2 minSize;
    public Vector2 maxSize;

    private RectTransform m_rectTransform;
    private Vector2 m_currentPointerPosition;
    private Vector2 m_previousPointerPosition;

    private Vector2 m_previousScreenSize;

    void Awake()
    {
        m_rectTransform = transform.parent.GetComponent<RectTransform>();        
    }

    public void OnPointerDown(PointerEventData data)
    {
        m_rectTransform.SetAsLastSibling();
        RectTransformUtility.ScreenPointToLocalPointInRectangle(m_rectTransform, data.position, data.pressEventCamera, out m_previousPointerPosition);
    }

    public void OnDrag(PointerEventData data)
    {
        m_previousScreenSize = m_rectTransform.sizeDelta;

        if (m_rectTransform == null)
            return;

        Vector2 sizeDelta = m_rectTransform.sizeDelta;
        
        RectTransformUtility.ScreenPointToLocalPointInRectangle(m_rectTransform, data.position, data.pressEventCamera, out m_currentPointerPosition);
        Vector2 resizeValue = m_currentPointerPosition - m_previousPointerPosition;

        sizeDelta += new Vector2(resizeValue.x, -resizeValue.y);
        sizeDelta = new Vector2(
            Mathf.Clamp(sizeDelta.x, minSize.x, maxSize.x),
            Mathf.Clamp(sizeDelta.y, minSize.y, maxSize.y)
            );

        m_rectTransform.sizeDelta = sizeDelta;
        m_previousPointerPosition = m_currentPointerPosition;

        // From now on we just resize the GIF image! We could disable it, but i think it's fancy

        float draggedX = (float)Math.Round(sizeDelta.x / m_previousScreenSize.x, 5);
        float draggedY = (float)Math.Round(sizeDelta.y / m_previousScreenSize.y, 5);

        var gifViewerComponent = GameObject.Find("Battle Sprite Viewer");

        gifViewerComponent.GetComponent<Image>().rectTransform.sizeDelta = new Vector2(draggedX * gifViewerComponent.GetComponent<Image>().rectTransform.sizeDelta.x,
                                                                                       draggedY * gifViewerComponent.GetComponent<Image>().rectTransform.sizeDelta.y);        
    }
}