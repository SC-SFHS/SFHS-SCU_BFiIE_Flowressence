using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.XR.CoreUtils;

public class collision : MonoBehaviour
{
    // Start is called before the first frame update

    public XROrigin rig;
    public bool collided;

    void Start()
    {
        collided = false;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name.Equals(rig.name))
        {
            collided = true;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
