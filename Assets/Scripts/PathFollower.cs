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

    void Start()
    {
        // positioning rig to start of the path
        ResetToStart();
        transform.rotation = Quaternion.Euler(0, -90, 0);
    }

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

    // gets input from the joystick and moves rig accordingly
    void JoystickInputManager()
    {
        // if autonomous movement has not been enabled AND if the game has not finished AND the game has started
        if (!timeManager.autoMove && !timeManager.gameFinished && timeManager.gameStarted)
        {
            leftHandJoystickValue = m_LeftHandLocomotionMove.action?.ReadValue<Vector2>() ?? Vector2.zero;
            if (Mathf.Abs(leftHandJoystickValue.y) > 0)
            {
                distanceTraveled += Mathf.Sign(-leftHandJoystickValue.y) * speed * Time.deltaTime;
                if (distanceTraveled <= 0)
                {
                    transform.position = pathCreator.path.GetPointAtDistance(distanceTraveled);
                    transform.rotation = pathCreator.path.GetRotationAtDistance(distanceTraveled);
                    transform.rotation = Quaternion.Euler(transform.rotation.eulerAngles.x + 180, transform.rotation.eulerAngles.y, 180);
                }
                else
                {
                    // prevents rig to go off path backward - keeps it restricted to start of path
                    transform.position = pathCreator.path.GetPointAtDistance(-1f);
                    transform.rotation = Quaternion.Euler(0, -90, 0);
                    distanceTraveled = 0;
                }
            }
        }
    }
}
