using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.XR.CoreUtils;
using PathCreation;

public class LightManager : MonoBehaviour
{
    public Light pointLight;
    public XROrigin rig;
    public PathCreator lanternPath;
    public GameObject lantern;
    public GameObject flame;
    public SpriteRenderer flameColor;

    public float distance;
    public float distanceThreshold;

    [Range(-1, 1)]
    public float normHRDelta;
    public float normThreshHigh;
    public float normThreshLow;
    public float baseIntensity;

    public float red;
    public float green;
    public float blue;

    public float k;

    public PathFollower pathFollower;
    public float distanceTraveled;

    // Start is called before the first frame update
    void Start()
    {
        // normHRDelta = (float)UDPListener.deltaSigmoidBPM;
        flameColor = flame.GetComponent<SpriteRenderer>();

        pointLight.color = Color.white;
        pointLight.range = 120;
        pointLight.intensity = baseIntensity = 5f;

        normThreshHigh = 0.05f;
        normThreshLow = -0.02f;

        red = green = blue = 0.0f;

        // constant of proportionality
        k = 5;

        distanceThreshold = 30f;
        pointLight.transform.position = lanternPath.path.GetPointAtDistance(-1f);
        lantern.transform.position = pointLight.transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        // normHRDelta = (float)UDPListener.deltaSigmoidBPM;

        if (normHRDelta > normThreshHigh)
        {
            increment(ref red, k * normHRDelta, 0.01f);
            green = 0.0f;
            blue = 0.0f;
            increment(ref green, 0.0f, -0.09f);
            increment(ref blue, 0.0f, -0.09f);
        }
        else if (normHRDelta < normThreshLow)
        {
            increment(ref red, 0.0f, -0.09f);
            red = 0.0f;
            increment(ref blue, -k * normHRDelta, 0.01f);
            green = 0.0f;
            increment(ref green, 0.0f, -0.09f);
        }
        else
        {
            increment(ref red, 1.0f, 0.1f);
            increment(ref green, 1.0f, 0.1f);
            increment(ref blue, 1.0f, 0.1f);
        }
        pointLight.color = new Color(red, green, blue);
        flameColor.color = new Color(red, green, blue);

        updatePosition();
    }

    private void increment(ref float color, float value, float incrementer)
    {
        if (color != value)
        {
            if ((color > value && incrementer > 0) || (color < value && incrementer < 0))
                color -= incrementer;
            else
                color += incrementer;
        }
        if ((incrementer > 0 && color >= value) || (incrementer < 0 && color <= value))
            color = value;
    }

    // moves the lantern based on the rig's movement and position
    private void updatePosition()
    {
        distance = (pointLight.transform.position - rig.transform.position).magnitude;
        if (distance <= distanceThreshold)
        {
            distanceTraveled += pathFollower.speed * Time.deltaTime;
            pointLight.transform.position = lanternPath.path.GetPointAtDistance(-distanceTraveled);
        }
        lantern.transform.position = pointLight.transform.position;
    }
}