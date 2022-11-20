using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CrystalMovement : MonoBehaviour
{
    public List<GameObject> crystals = new List<GameObject>();

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
        foreach (GameObject crystal in crystals)
            crystal.transform.localPosition = new Vector3(crystal.transform.position.x, 100 + Mathf.Sin(Time.time * Mathf.PI * speed), crystal.transform.position.z);
    }
}