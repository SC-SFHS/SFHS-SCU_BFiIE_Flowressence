using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.XR.CoreUtils;
using UnityEngine.XR.Interaction.Toolkit;

public class TimeManager : MonoBehaviour
{
    private XROrigin XROrigin;
    private float caveEndXCoord;
    private float spiralEndYCoord;
    private Vector3 gameEndCoord;
    private bool timeCheck;
    public bool autoMove;
    public bool gameStarted;
    public bool gameFinished;
    public PathFollower pathFollower;

    void Start()
    {
        XROrigin = GetComponent<XROrigin>();
        caveEndXCoord = -155f; // random value for end of cave and beginning of cavern
        spiralEndYCoord = -215f; // random value for y-coord of spiral path where rig starts slowing down
        gameEndCoord = gameObject.GetComponent<PathFollower>().pathCreator.path.GetPoint(0); // final point of the path (0 b/c the path is backward)
        timeCheck = true;
        autoMove = false;
        gameStarted = false;
        gameFinished = false;
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
            pathFollower.speed += 0.01f;
            autoMove = true;
        }

        if (pathFollower.speed >= 10f)
            timeCheck = false;

        if (autoMove == true)
        {
            pathFollower.distanceTraveled -= pathFollower.speed * Time.deltaTime;
            gameObject.transform.position = pathFollower.pathCreator.path.GetPointAtDistance(pathFollower.distanceTraveled);
        }
    }

    void EndScene()
    {
        if (gameObject.transform.position[0] <= caveEndXCoord)
        {
            if (pathFollower.speed > 5f)
                pathFollower.speed -= 0.01f;
        }
        if (gameObject.transform.position[1] <= spiralEndYCoord)
        {
            if (pathFollower.speed > 3f)
                pathFollower.speed -= 0.01f;
        }
        if (gameObject.transform.position[0] <= gameEndCoord[0] & gameObject.transform.position[1] <= gameEndCoord[1])
        {
            autoMove = false;
            gameFinished = true;
            gameStarted = false;
        }
    }
}
