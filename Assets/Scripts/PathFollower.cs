using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PathCreation;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR.Interaction.Toolkit.Inputs;
using UnityEngine.InputSystem.Controls;
using UnityEngine.InputSystem;

public class PathFollower : MonoBehaviour
{
    public PathCreator pathCreator;
    public float speed;
    public float distanceTraveled;
    public InputActionReference m_LeftHandLocomotionMove;
    Vector2 leftHandJoystickValue;
    public TimeManager timeManager;

    // Start is called before the first frame update
    void Start()
    {
        ResetToStart();
        transform.rotation = Quaternion.Euler(0, -90, 0);
    }

    // Update is called once per frame
    void Update()
    {
        ResetToStart();
        JoystickInputManager();
    }

    void ResetToStart()
    {
        if (!timeManager.gameStarted && !timeManager.gameFinished)
        {
            transform.position = pathCreator.path.GetPointAtDistance(-1f);
        }
    }

    void JoystickInputManager()
    {
        if (!timeManager.autoMove && !timeManager.gameFinished && timeManager.gameStarted)
        {
            leftHandJoystickValue = m_LeftHandLocomotionMove.action?.ReadValue<Vector2>() ?? Vector2.zero;
            if (Mathf.Abs(leftHandJoystickValue.y) > 0)
            {
                distanceTraveled += Mathf.Sign(-leftHandJoystickValue.y) * speed * Time.deltaTime;
                if (distanceTraveled <= 0)
                    transform.position = pathCreator.path.GetPointAtDistance(distanceTraveled);
                else
                {
                    transform.position = pathCreator.path.GetPointAtDistance(-1f);
                    transform.rotation = Quaternion.Euler(0, -90, 0);
                    distanceTraveled = 0;
                }
            }
        }
    }
}
