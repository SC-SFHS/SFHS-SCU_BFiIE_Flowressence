using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CrystalMovement : MonoBehaviour
{
    public List<GameObject> crystals = new List<GameObject>();

    public float speed;

    // Start is called before the first frame update
    void Start()
    {
        speed = 1;
    }

    // Update is called once per frame
    void Update()
    {
        foreach (GameObject crystal in crystals)
            crystal.transform.position = new Vector3(crystal.transform.position.x, Mathf.Sin(Time.time * Mathf.PI * speed), crystal.transform.position.z);
    }
}