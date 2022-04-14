using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.XR.CoreUtils;

public class TimeManager : MonoBehaviour
{
    private XROrigin XROrigin;
    private float caveEndXCoord;
    private float spiralEndXCoord;
    private bool timeCheck;


    void Start()
    {
        XROrigin = GetComponent<XROrigin>();
        caveEndXCoord = 327f; // random value for end of cave and beginning of cavern
        spiralEndXCoord = -108f; // random value for x-coord of spiral path where rig starts slowing down
        timeCheck = true;
    }


    void Update()
    {
        TeleportAfterTime();
        EndScene();
    }

    void TeleportAfterTime()
    {
        // assuming 5 minutes
        if (Time.time >= 300 && timeCheck)
        {
            gameObject.GetComponent<PathFollower>().speed = 10f;
            timeCheck = false;
        }
    }

    void EndScene()
    {
        if (gameObject.transform.position[0] <= caveEndXCoord)
        {
            gameObject.GetComponent<PathFollower>().speed = 5f;
        }
        if (gameObject.transform.position[0] <= spiralEndXCoord)
        {
            gameObject.GetComponent<PathFollower>().speed = 2f;
        }
    }
}
