using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AddToEachChild : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        foreach (Transform child in transform)
        {
            if (child.name[0] != 'P')
            {
                child.gameObject.AddComponent<EmissionHRV>();
            }
                
        }
    }

    // Update is called once per frame
    void Update()
    {

    }
}
