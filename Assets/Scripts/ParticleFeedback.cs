using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticleFeedback : MonoBehaviour
{
    public Mesh myMesh;
    private ParticleSystem ps;

    // Start is called before the first frame update
    void Start()
    {
        //Debug.Log(HRCollector.sigmoidIBI);
        //Debug.Log(HRCollector.sigmoidHeartRate);
        //Debug.Log(HRCollector.IBI);
        //Debug.Log(HRCollector.heartRate);
    }

    // Update is called once per frame
    void Update()
    {
        ps = GetComponent<ParticleSystem>();
        var main = ps.main;
        var em = ps.emission;
        var sz = ps.sizeOverLifetime;
        var col = ps.colorBySpeed;
        var shape = ps.shape;

        main.startSize = (float)HRCollector.sigmoidHeartRate * 3;
        main.startSpeed = (float)HRCollector.sigmoidHeartRate * 2;
        em.rateOverTime = (float)HRCollector.sigmoidHeartRate * 5;
        // main.duration = 5f;

        //arc mode random or burst spread for circle

        shape.shapeType = ParticleSystemShapeType.Circle;
        shape.radius = (float)HRCollector.sigmoidHeartRate * 2;
        //shape.radiusMode = ParticleSystemShapeMultiModeValue.Random; //can alter with biofeedback, burst for other one!!!!
        shape.enabled = true;

        Color color = new Color((float)HRCollector.sigmoidHeartRate, (float)HRCollector.sigmoidHeartRate, (float)HRCollector.sigmoidHeartRate * 255, (float)HRCollector.sigmoidHeartRate); //constants for other colors
        Gradient grad = new Gradient();
        //grad.SetKeys(
        //    new GradientColorKey[] { new GradientColorKey(Color.white, 0.0f), new GradientColorKey(Color.blue, 1.0f) },
        //    new GradientAlphaKey[] { new GradientAlphaKey(1.0f, 0.0f), new GradientAlphaKey(1.0f, 1.0f) }
        //);


        main.startColor = color;
        col.enabled = true;
        em.enabled = true;
    }
}