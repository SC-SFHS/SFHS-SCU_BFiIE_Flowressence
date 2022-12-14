using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EmissionHRV : MonoBehaviour
{
    public float emission = 0;
    public float currEmission = 4;
    public bool isDefault = true;
    public int count = 0;
    public float startTime;
    public bool timerFlag = false;
    public bool flag = true;
    public int numTimes = 15;

    void Start()
    {
        startTime = Time.time;
    }

    // Update is called once per frame
    void Update()
    {
        Renderer renderer = GetComponent<Renderer>();
        Material mat = renderer.material;

        //emission = (float) HRCollector.sigmoidHeartRate * 10;
        if (flag)
        {
            emission = HRCollector.testingCrystalVariability;
            flag = false;
        }

        //Debug.Log("EMISSION" + emission);

        if (emission == currEmission)
        {
            emission = HRCollector.testingCrystalVariability;
        }


        if (emission != currEmission)
        {
            if (count < numTimes)
            {
                currEmission = (emission > currEmission) ? currEmission + emission / numTimes : currEmission - emission / numTimes;
               // Debug.Log("increment" + currEmission);
                mat.SetFloat("_EmissionPower", currEmission);
                count++;
            }

            if (count >= numTimes)
            {
                mat.SetFloat("_EmissionPower", emission);
                currEmission = emission;
                flag = false;
                count = 0;
            }


        }
    }
}
