using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.XR.CoreUtils;

public class LightManager : MonoBehaviour
{
    public Light pointLight;
    public XROrigin rig;

    [Range(-1, 1)]
    public float normHRDelta;
    public float normThreshHigh;
    public float normThreshLow;

    public float baseIntensity;

    public float k;

    // Start is called before the first frame update
    void Start()
    {
        pointLight.color = Color.white;
        pointLight.range = 50;
        pointLight.intensity = baseIntensity = 0.5f;

        normThreshHigh = 0.05f;
        normThreshLow = -0.02f;

        // constant of proportionality
        k = 5;
    }

    // Update is called once per frame
    void Update()
    {
        pointLight.transform.position = rig.transform.position;

        if (normHRDelta > normThreshHigh)
        {
            if (changeColorTo(Color.red))
                pointLight.intensity = k * normHRDelta + baseIntensity;
        }
        else if (normHRDelta < normThreshLow)
        {
            if (changeColorTo(Color.blue))
                pointLight.intensity = k * -normHRDelta + baseIntensity;
        }
        else
            changeColorTo(Color.white);
    }

    private bool changeColorTo(Color color)
    {
        // first, fade intensity out to 0, at a rate proportional to the intensity (as intensity decreases, rate of change will also decrease)
        if (pointLight.color != color && pointLight.intensity > 0)
            pointLight.intensity = pointLight.intensity - pointLight.intensity * 0.01f - 0.01f;

        // second, when the fade is complete (intensity = 0) set the point light's color to the desired color
        if (pointLight.intensity == 0)
            pointLight.color = color;

        // third, once the new color has been set, raise the intensity back up
        if (pointLight.color == color && pointLight.intensity < baseIntensity)
            pointLight.intensity += 0.01f;

        // lastly, if the intensity has been maxed out for the new color, return true
        if (pointLight.color == color && pointLight.intensity >= baseIntensity)
            return true;

        return false;
    }
}