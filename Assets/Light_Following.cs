using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.XR.CoreUtils;


public class Light_Following : MonoBehaviour
{
    public Light pointLight;
    public XROrigin rig;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        pointLight.transform.position = rig.transform.position;

    }
}
