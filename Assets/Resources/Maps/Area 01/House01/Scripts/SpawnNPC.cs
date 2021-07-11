using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnNPC : MonoBehaviour
{
    #region Private Variables Declaration
        private GameObject woman01;
    #endregion

    void Awake()
    {
        AssetBundle characterModelsBundle = GenericMethods.RetrieveAssetBundle(GenericMethods.AssetBundlesNames.CharacterModels);

        this.woman01 = characterModelsBundle.LoadAsset<GameObject>("Woman01");

        characterModelsBundle.Unload(false);
    }

    void Start()
    {
        this.woman01 = Instantiate(this.woman01, new Vector3(-91.99673f, 0.2515609f, 30.54515f), new Quaternion(0, 0, 0, 0)) as GameObject;
        this.woman01.transform.parent = gameObject.transform;
        this.woman01.AddComponent<Woman01Controller>();
    }
}
