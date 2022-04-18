using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.XR.CoreUtils;
using PathCreation;

public class TimeManager : MonoBehaviour
{
    private XROrigin XROrigin;
    private float caveEndXCoord;
    private float spiralEndYCoord;
    private Vector3 gameEndCoord;
    private float distanceTraveled;
    private bool timeCheck;
    public bool autoMove;
    public bool gameFinished;

    void Start()
    {
        XROrigin = GetComponent<XROrigin>();
        caveEndXCoord = -155f; // random value for end of cave and beginning of cavern
        spiralEndYCoord = -215f; // random value for y-coord of spiral path where rig starts slowing down
        gameEndCoord = gameObject.GetComponent<PathFollower>().pathCreator.path.GetPoint(0); // final point of the path (0 b/c the path is backward)
        timeCheck = true;
        autoMove = false;
        gameFinished = false;
    }


    void Update()
    {
        TeleportAfterTime();
        EndScene();
        // StartCoroutine(UIScreen());
    }

    void TeleportAfterTime()
    {
        // assuming 5 minutes
        if (Time.time >= 3 && timeCheck)
        {
            gameObject.GetComponent<PathFollower>().speed += 1f;
            autoMove = true;
        }

        if (gameObject.GetComponent<PathFollower>().speed >= 100f)
            timeCheck = false;

        if (autoMove == true)
        {
            distanceTraveled -= gameObject.GetComponent<PathFollower>().speed * Time.deltaTime;
            gameObject.transform.position = gameObject.GetComponent<PathFollower>().pathCreator.path.GetPointAtDistance(distanceTraveled);
        }
    }

    void EndScene()
    {
        if (gameObject.transform.position[0] <= caveEndXCoord)
        {
            if (gameObject.GetComponent<PathFollower>().speed > 100f)
                gameObject.GetComponent<PathFollower>().speed -= 0.01f;
        }
        if (gameObject.transform.position[1] <= spiralEndYCoord)
        {
            if (gameObject.GetComponent<PathFollower>().speed > 90f)
                gameObject.GetComponent<PathFollower>().speed -= 0.01f;
        }
        if (gameObject.transform.position[0] <= gameEndCoord[0] & gameObject.transform.position[1] <= gameEndCoord[1])
        {
            autoMove = false;
            gameFinished = true;
        }
    }
}
