using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomParticleFeedback : MonoBehaviour
{
    public Mesh myMesh;
    private ParticleSystem ps;

    // Start is called before the first frame update
    void Start()
    {
        //Debug.Log(RandomHRCollector.sigmoidIBI);
        //Debug.Log(RandomHRCollector.sigmoidHeartRate);
        //Debug.Log(RandomHRCollector.IBI);
        //Debug.Log(RandomHRCollector.heartRate);
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

        main.startSize = (float)RandomHRCollector.sigmoidHeartRate * 3;
        main.startSpeed = (float)RandomHRCollector.sigmoidHeartRate * 2;
        em.rateOverTime = (float)RandomHRCollector.sigmoidHeartRate * 5;
        // main.duration = 5f;

        //arc mode random or burst spread for circle

        shape.shapeType = ParticleSystemShapeType.Circle;
        shape.radius = (float)RandomHRCollector.sigmoidHeartRate * 2;
        //shape.radiusMode = ParticleSystemShapeMultiModeValue.Random; //can alter with biofeedback, burst for other one!!!!
        shape.enabled = true;

        Color color = new Color((float)RandomHRCollector.sigmoidHeartRate, (float)RandomHRCollector.sigmoidHeartRate, (float)RandomHRCollector.sigmoidHeartRate * 255, (float)RandomHRCollector.sigmoidHeartRate); //constants for other colors
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
