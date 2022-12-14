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

    public float normHRDelta;
    public float normThreshHigh;
    public float normThreshLow;

    public float lowHRIntensity;
    public float lowHRDuration;

    public float highHRIntensity;
    public float highHRDuration;

    // Start is called before the first frame update
    void Start()
    {
        normHRDelta = (float)UDPListener.normHRDelta;

        normThreshHigh = 0.05f;
        normThreshLow = -0.02f;

        lowHRIntensity = 0.2f;
        lowHRDuration = 0.1f;

        highHRIntensity = 0.5f;
        highHRDuration = 2.0f;
    }

    // Update is called once per frame
    void Update()
    {
        normHRDelta = (float)UDPListener.normHRDelta;

        if (normHRDelta < normThreshLow)
        {
            StartCoroutine(lowHRHaptics());
        }

        if (normHRDelta > normThreshHigh)
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