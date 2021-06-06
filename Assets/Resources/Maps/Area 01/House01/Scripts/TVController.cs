using UnityEngine;

public class TVController : MonoBehaviour
{
    #region SerializeFields
        [SerializeField] private Material tvOffMaterial;
        [SerializeField] private Material tvOnMaterial;
    #endregion

    #region Private Variables
    SkinnedMeshRenderer meshRenderer;
    #endregion

    void Start()
    {
        this.meshRenderer = GetComponent<SkinnedMeshRenderer>();

        this.meshRenderer.material = this.tvOffMaterial;
    }

    void Update()
    {
    }

    private void OnTriggerStay(Collider other)
    {
        if ((other.tag == "Player") && (Input.GetKeyDown(KeyCode.Space)))
        {
            this.meshRenderer.material = (this.meshRenderer.sharedMaterial == this.tvOffMaterial) ? (this.tvOnMaterial)
                                                                                                  : (this.tvOffMaterial);
        }
    }
}
