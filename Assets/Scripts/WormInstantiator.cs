using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WormInstantiator : MonoBehaviour
{
    public GameObject wormObject;
    public GameObject wormChild1;
    public GameObject wormChild2;
    public int amount = 1000;

    private float xDistance, yDistance, zDistance;

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
            wormChild1 = Instantiate(wormObject);
            wormChild2 = Instantiate(wormObject);

            xDistance = worms[i - 1].transform.localPosition[0] - 1f;
            yDistance = worms[i - 1].transform.localPosition[1];
            zDistance = worms[i - 1].transform.localPosition[2] - Random.Range(-10f, 10f);

            if (worms[i - 1].transform.localPosition[2] < 350)
                zDistance = worms[i - 1].transform.localPosition[2] + Random.Range(5f, 10f);
            if (worms[i - 1].transform.localPosition[2] > 400)
                zDistance = worms[i - 1].transform.localPosition[2] - Random.Range(5f, 10f);

            worms[i].transform.localPosition = new Vector3(
                xDistance,
                yDistance,
                zDistance
            );
            wormChild1.transform.localPosition = new Vector3(
                xDistance,
                yDistance,
                zDistance + 30f
            );
            wormChild2.transform.localPosition = new Vector3(
                xDistance,
                yDistance,
                zDistance - 30f
            );
        }
    }

    // Update is called once per frame
    void Update()
    {

    }
}