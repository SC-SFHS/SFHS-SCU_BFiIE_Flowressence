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
    float distanceTraveled;
    public InputActionReference m_LeftHandLocomotionMove;
    Vector2 leftHandJoystickValue;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        JoystickInputManager();
    }

    void JoystickInputManager()
    {
        leftHandJoystickValue = m_LeftHandLocomotionMove.action?.ReadValue<Vector2>() ?? Vector2.zero;
        if (Mathf.Abs(leftHandJoystickValue.y) > 0)
        {
            distanceTraveled += Mathf.Sign(leftHandJoystickValue.y) * speed * Time.deltaTime;
            transform.position = pathCreator.path.GetPointAtDistance(distanceTraveled);
        }
    }
}
