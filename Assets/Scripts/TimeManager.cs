using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.XR.CoreUtils;

public class TimeManager : MonoBehaviour
{
    private XROrigin XROrigin;
    private Vector3 endGameCoords;
    private bool timeCheck;
    
    void Start()
    {
        XROrigin = GetComponent<XROrigin>();
        endGameCoords = new Vector3(0.0f, 0.0f, 0.0f);
        timeCheck = true;
    }

    
    void Update()
    {
        TeleportAfterTime();
    }

    void TeleportAfterTime()
    {
        // assuming 5 minutes
        if (Time.time >= 300 && timeCheck)
        {
            XROrigin.transform.position = endGameCoords;
            timeCheck = false;
            EndScene();
        }
    }

    void EndScene()
    {
        // execute ending sequence
        return;
    }
}
