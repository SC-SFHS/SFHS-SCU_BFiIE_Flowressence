using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WormInstantiator : MonoBehaviour
{
    public GameObject wormObject;
    public int amount = 1000;

    GameObject[] worms;
    // Start is called before the first frame update
    void Start()
    {
        if (wormObject == null)
            wormObject = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        worms = new GameObject[amount];
        worms[0] = wormObject;
        for (int i = 1; i < amount; i++)
        {
            worms[i] = Instantiate(wormObject);
            worms[i].transform.localPosition = new Vector3(
                worms[i-1].transform.localPosition[0] - Random.Range(0, 3),
                worms[i-1].transform.localPosition[1],
                worms[i-1].transform.localPosition[2] - Random.Range(-15, 15)
            );
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}