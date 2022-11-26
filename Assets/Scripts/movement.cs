using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class movement : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        float xMovement = Input.GetAxis("Mouse X") / 10;
        float yMovement = Input.GetAxis("Mouse Y") / 10;
        transform.Translate(xMovement, yMovement, 0f);
    }
}
