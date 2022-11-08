using System.Collections;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.InputSystem;

public class HapticFeedback : MonoBehaviour
{
    public ActionBasedController leftHand;
    public ActionBasedController rightHand;

    public InputActionReference leftHandReference;
    public InputActionReference rightHandReference;

    public float lowHRIntensity;
    public float lowHRDuration;

    public float highHRIntensity;
    public float highHRDuration;

    // Start is called before the first frame update
    void Start()
    {
        lowHRIntensity = 0.2f;
        lowHRDuration = 0.1f;

        highHRIntensity = 0.5f;
        highHRDuration = 2.0f;
    }

    // Update is called once per frame
    void Update()
    {
        if (leftHandReference.action.triggered)
        {
            StartCoroutine(lowHRHaptics());
        }

        if (rightHandReference.action.triggered)
        {
            leftHand.SendHapticImpulse(highHRIntensity, highHRDuration);
            rightHand.SendHapticImpulse(highHRIntensity, highHRDuration);
        }
    }

    private IEnumerator lowHRHaptics()
    {
        for (int i = 0; i < 2; i++)
        {
            leftHand.SendHapticImpulse(lowHRIntensity, lowHRDuration);
            rightHand.SendHapticImpulse(lowHRIntensity, lowHRDuration);
            yield return new WaitForSeconds(lowHRDuration * 2);
        }
    }
}