using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CrystalMovement1 : MonoBehaviour
{
    public float speed;
    public float magnitude;

    // Start is called before the first frame update
    void Start()
    {
        speed = 1;
        //magnitude = 10;
    }

    // Update is called once per frame
    void Update()
    {
        foreach (Transform child in transform)
            child.transform.position = new Vector3(child.transform.position.x, child.transform.position.y - Mathf.Sin(Time.time * Mathf.PI * speed), child.transform.position.z);
    }
}