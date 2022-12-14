using System.Collections;

using System.Collections.Generic;

using System.Net;

using System.Net.Sockets;

using UnityEngine;

using System.Text;

using System;


public class UDPListener : MonoBehaviour

{

    UdpClient clientData;

    int portData = 37020;

    public int receiveBufferSize = 120000;

    public bool showDebug = false;

    IPEndPoint ipEndPointData;

    private object obj = null;

    private System.AsyncCallback AC;

    byte[] receivedBytes;

    public static double heartRate = 0.0;

    public static List<double> heartRateList = new List<double>();

    public static int IBI = 0;

    public static int currBiome = 1;

    public static List<int> IBIList1 = new List<int>();

    public static List<int> IBIList2 = new List<int>();

    public static List<int> IBIList3 = new List<int>();

    public static List<int> IBIList4 = new List<int>();
    
    public static List<int> IBIList5 = new List<int>();

    public static double sigmoidBPM = 0.0;

    public static double prevSigmoidBPM = 0.0;

    public static double normHRDelta = 0.0; //deltaSigmoidBPM

    public static List<double> sigmoidBPMList = new List<double>();

    System.String udpReceiveString = "";

    string[] udpReceiveArr;


    public bool isRecieved = false;

    public float constant = 1;

    public float idealHeartRate = 70;



    void Start()

    {

        InitializeUDPListener();

    }

    public void InitializeUDPListener()

    {

        ipEndPointData = new IPEndPoint(IPAddress.Any, portData);

        clientData = new UdpClient();

        clientData.Client.ReceiveBufferSize = receiveBufferSize;

        clientData.Client.SetSocketOption(SocketOptionLevel.Socket, SocketOptionName.ReuseAddress, optionValue: true);

        clientData.ExclusiveAddressUse = false;

        clientData.EnableBroadcast = true;

        clientData.Client.Bind(ipEndPointData);

        clientData.DontFragment = true;

        if (showDebug) Debug.Log("BufSize: " + clientData.Client.ReceiveBufferSize);

        AC = new System.AsyncCallback(ReceivedUDPPacket);

        clientData.BeginReceive(AC, obj);

        Debug.Log("UDP - Start Receiving..");

    }

    void ReceivedUDPPacket(System.IAsyncResult result)

    {

        //stopwatch.Start();

        receivedBytes = clientData.EndReceive(result, ref ipEndPointData);


        ParsePacket();


        clientData.BeginReceive(AC, obj);


        //stopwatch.Stop();

        //Debug.Log(stopwatch.ElapsedTicks);

        //stopwatch.Reset();

    } // ReceiveCallBack


    void ParsePacket()

    {

        // work with receivedBytes

        Debug.Log("receivedBytes len = " + receivedBytes.Length);

        // Debug.Log("receievedBytes = " + receivedBytes);

        udpReceiveString = Encoding.ASCII.GetString(receivedBytes);

        if (udpReceiveString.Length > 1)

        {

            udpReceiveArr = udpReceiveString.Split(',');
            
            heartRate = Convert.ToDouble(udpReceiveArr[0]);

            if(!isRecieved)
            {
                constant = idealHeartRate / (float) heartRate;
                isRecieved = true;
            }

            heartRate *= constant;
            Debug.Log("Adjusted for inflation " + heartRate + "constant is: " + constant);

            IBI = Convert.ToInt32(udpReceiveArr[1]);

            heartRateList.Add(heartRate);


            if (currBiome == 1) IBIList1.Add(IBI);

            if (currBiome == 2) IBIList2.Add(IBI);

            if (currBiome == 3) IBIList3.Add(IBI);

            if (currBiome == 4) IBIList4.Add(IBI);

            if (currBiome == 5) IBIList5.Add(IBI);


            if (heartRate > 140) heartRate = 140;

            else if (heartRate < 40) heartRate = 40;

            else sigmoidBPM = (1 / -0.75) * Math.Log(60 / heartRate);

            sigmoidBPMList.Add(sigmoidBPM);

            normHRDelta = sigmoidBPM - prevSigmoidBPM;

            Debug.Log("normHR: " + normHRDelta);
            Debug.Log("sigmoidBPM: " + sigmoidBPM);
         


        }

        // heartRate = Convert.ToDouble(udpReceiveString);

        Debug.Log("raw heartrate = " + Encoding.ASCII.GetString(receivedBytes));

        // Debug.Log("int converted = " + BitConverter.ToInt32(receivedBytes, 0));


    }

    void OnDestroy()

    {

        if (clientData != null)

        {

            clientData.Close();

        }


    }

}

