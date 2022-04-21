using System;
using System.Collections.Generic;
using System.Diagnostics.Tracing;
using System.Threading;
using System.IO.Ports;
using UnityEngine;

public class HRCollector : MonoBehaviour
{
    public static double heartRate = 70;
    public static double sigmoidHeartRate = 0.5;
    public static double sigmoidIBI = 600;
    public static double IBI = 40; //work on vairability
    public static bool isHeartRate = true;
    public static float testingCrystalVariability = 0.5f;
    public Vector3 position;

    //SerialPort sp = new SerialPort("\\\\.\\COM3", 9600);


    // Start is called before the first frame update
    void Start()
    {
        //sp.Open();
    }

    // Update is called once per frame
    void Update()
    {
        System.Random rnd = new System.Random();
        //Add try catches here btw bub
        if (true)//if (sp.IsOpen)
        {
            // incomingData = int.Parse(sp.ReadLine());
            //we are sending 1 at a time
            if (isHeartRate)
            {
                //sigmoidHeartRate = Convert.ToDouble(sp.ReadLine());
                sigmoidHeartRate = rnd.NextDouble();
                testingCrystalVariability = (float)rnd.Next(0, 10); //would be heart rate instead
                //Debug.Log(testingCrystalVariability);
                //Debug.Log(sigmoidHeartRate);
                //heartRate = Convert.ToDouble(sp.ReadLine());
                heartRate = rnd.Next(40, 120);
                //Debug.Log(heartRate);
                isHeartRate = false;

            }
            else
            {
                //IBI = int.Parse(sp.ReadLine());
                sigmoidIBI = rnd.NextDouble();

                //Debug.Log(sigmoidIBI);
                //heartRate = Convert.ToDouble(sp.ReadLine());
                IBI = rnd.Next(600, 1200);
                //Debug.Log("IBI" + IBI);
                isHeartRate = true;

            }

        }

    }
}
