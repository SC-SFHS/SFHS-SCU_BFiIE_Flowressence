using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.XR.CoreUtils;
using System.Diagnostics;
using PathCreation;

public class TimeManager : MonoBehaviour
{
    private Vector3 caveEndCoord;
    private Vector3 gameEndCoord;
    public Stopwatch timer;
    private bool timeCheck;
    private bool timerStarted;
    public bool autoMove;
    public bool gameStarted;
    public bool gameFinished;
    public PathFollower pathFollower;
    public PathCreator pathCave;
    public PathCreator pathWhole;
    public GameObject waterfallGlitter;
    public GameObject graph;

    void Start()
    {
        // coordinate of the path where the cave ends and cavern begins
        caveEndCoord = pathCave.path.GetPoint(0);
        // final point of the path at the end of the cavern (0 because the path is backward)
        gameEndCoord = pathWhole.path.GetPoint(0);
        timer = new Stopwatch();
        timerStarted = false;
        timeCheck = true;
        autoMove = false;
        gameStarted = false;
        gameFinished = false;
        waterfallGlitter.SetActive(false);
        RenderSettings.fogDensity = 0.003f;
        RenderSettings.fog = true;
        graph.SetActive(false);
    }

    void Update()
    {
        StartTime();
        TeleportAfterTime();
        EndScene();
    }

    void StartTime()
    {
        // timer is only started once the game has started (user clicked start)
        // timer should start only once - that is the reason for the boolean value
        if (gameStarted && !timerStarted)
        {
            timer.Start();
            timerStarted = true;
        }
    }

    void TeleportAfterTime()
    {
        // assuming 5 minutes (300 seconds)
        // if time elapsed is greater than 300 seconds AND the speed hasn't incremented to 50 km/hr yet AND the game has started
        if (timer.Elapsed.Seconds >= 300 && timeCheck && gameStarted)
        {
            pathFollower.speed += 0.01f;
            autoMove = true;
        }

        // if the speed has reached 50 km/hr, program doesn't need to increment anymore
        if (pathFollower.speed >= 50f)
            timeCheck = false;

        // if autonomous movement has been activated (user has run out of time)
        if (autoMove == true)
        {
            pathFollower.distanceTraveled -= pathFollower.speed * Time.deltaTime;
            gameObject.transform.position = pathFollower.pathCreator.path.GetPointAtDistance(pathFollower.distanceTraveled);
        }
    }

    

    void EndScene()
    {
        // if the user has reached the end of the cave, decrease density of fog
        if (WaterfallCollision.collided)
        {
            waterfallGlitter.SetActive(true);
            RenderSettings.fogDensity = 0.001f;
        }

        // if the user has reached the end of the cavern
        if (EndCollision.endGameCollided)
        {
            autoMove = false;
            gameFinished = true;
            gameStarted = false;
            timer.Stop();
        }
    }
}
