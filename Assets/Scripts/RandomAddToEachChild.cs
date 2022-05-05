using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomAddToEachChild : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        foreach (Transform child in transform)
        {
            if (child.name[0] != 'P')
            {
                child.gameObject.AddComponent<RandomEmissionHRV>();
            }

        }
    }

    // Update is called once per frame
    void Update()
    {

    }
}
