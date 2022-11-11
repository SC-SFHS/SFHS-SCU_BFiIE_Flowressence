using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.XR.CoreUtils;

[System.Serializable] public class LightManager : MonoBehaviour
{
    public Light pointLight;
    public XROrigin rig;

    public float normHRDelta;
    public float normThreshHigh;
    public float normThreshLow;

    public float red;
    public float green;
    public float blue;

    public float k;

    // Start is called before the first frame update
    void Start()
    {
        pointLight.color = Color.white;
        pointLight.range = 50;
        pointLight.intensity = 1;

        normThreshHigh = 0.05f;
        normThreshLow = -0.02f;

        red = green = blue = 0.0f;

        // constant of proportionality
        k = 5;
    }

    // Update is called once per frame
    void Update()
    {
        pointLight.transform.position = rig.transform.position;
        if (normHRDelta > normThreshHigh)
        {
            blue = 0.0f;
            red = k * normHRDelta;
        }
        if (normHRDelta < normThreshLow)
        {
            red = 0.0f;
            blue = k * normHRDelta;
        }

        pointLight.color = new Color(red, green, blue);
    }
}
