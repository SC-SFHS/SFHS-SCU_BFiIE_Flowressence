using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.XR.CoreUtils;

[System.Serializable] public class LightManager : MonoBehaviour
{
    public Light pointLight;
    public bool update2Red, update2Green, update2Blue;
    public XROrigin rig;

    // Start is called before the first frame update
    void Start()
    {
        pointLight.color = Color.white;
        pointLight.range = 50;
        pointLight.intensity = 1;
    }

    // Update is called once per frame
    void Update()
    {
        pointLight.transform.position = rig.transform.position;
        if (update2Red)
        {
            pointLight.color = new Color(1.0f, 0.0f, 0.0f);
            update2Red = false;
        }
        if (update2Green)
        {
            pointLight.color = new Color(0.0f, 1.0f, 0.0f);
            update2Green = false;
        }
        if (update2Blue)
        {
            pointLight.color = new Color(0.0f, 0.0f, 1.0f);
            update2Blue = false;
        }
    }
}
