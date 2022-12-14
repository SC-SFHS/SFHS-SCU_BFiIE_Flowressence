using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class
ParticleFeedback : MonoBehaviour
{
    private ParticleSystem ps;
    public Light glowPointLight;

    //[Range(-1, 1)]
    //public float normHRDelta;
    public float normThreshHigh;
    public float normThreshLow;
    public float baseIntensity;

    public float red;
    public float green;
    public float blue;

    public float k;
    bool hasStarted;

    // Start is called before the first frame update
    void Start()
    {
        glowPointLight.range = 100;
        glowPointLight.intensity = baseIntensity = 2f;
        normThreshHigh = 0.025f;
        normThreshLow = -0.01f;

        red = green = blue = 0.0f;
        hasStarted = false;


        // constant of proportionality
        k = 5;
    }

    // Update is called once per frame
    void Update()
    {
        //needs other scripts global variable

        ps = GetComponent<ParticleSystem>();
        var main = ps.main;
        var em = ps.emission;
        var sz = ps.sizeOverLifetime;
        var col = ps.colorBySpeed;
        var shape = ps.shape;
        bool isHigh = false;

        //change to a fog type thing maybe
        main.startSize = (float)UDPListener.sigmoidBPM;
        main.startSpeed = (float)UDPListener.sigmoidBPM;
        em.rateOverTime = (float)UDPListener.sigmoidBPM * 2;


        // main.duration = 5f;

        //arc mode random or birst spread for circle
        shape.shapeType = ParticleSystemShapeType.Circle;
        shape.radius = (float)UDPListener.sigmoidBPM * 3;
        //shape.radiusMode = ParticleSystemShapeMultiModeValue.Random; //can alter with biofeedback, burst for other one!!!!
        shape.enabled = true;

        if (UDPListener.normHRDelta > normThreshHigh)
        {
            increment(ref red, k * (float)UDPListener.normHRDelta, 0.01f);
            green = 0.0f;
            blue = 0.0f;
            increment(ref green, 0.0f, -0.09f);
            increment(ref blue, 0.0f, -0.09f);
            Debug.Log("normThreshHigh");
            isHigh = true;
        }
        else if (UDPListener.normHRDelta < normThreshLow)
        {
            increment(ref red, 0.0f, -0.09f);
            red = 0.0f;
            increment(ref blue, -k * (float)UDPListener.normHRDelta, 0.01f);
            green = 0.0f;
            increment(ref green, 0.0f, -0.09f);
            Debug.Log("normThreshLow");
            isHigh = false;
        }
        else
        {
            //red = 0.0f;
            //green = 0.0f;
            //blue = 0.0f;
            increment(ref red, 0f, 0.1f);
            increment(ref green, 0f, 0.1f);
            increment(ref blue, 0f, 0.1f);
        }

        glowPointLight.color = new Color(red, green, blue);

        main.startColor = Color.blue; //might change later
        col.enabled = true;
        em.enabled = true;


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
}