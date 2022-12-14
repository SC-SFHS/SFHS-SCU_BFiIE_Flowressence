using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.XR.CoreUtils;

public class EndCollision : MonoBehaviour
{
    // Start is called before the first frame update

    public XROrigin rig;
    public static bool endGameCollided;

    void Start()
    {
        endGameCollided = false;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name.Equals(rig.name))
            endGameCollided = true;
    }

    // Update is called once per frame
    void Update()
    {

    }
}
