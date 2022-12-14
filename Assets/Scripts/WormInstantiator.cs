using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PathCreation;

public class WormInstantiator : MonoBehaviour
{
    public GameObject wormObject; // seed
    public GameObject wormChild1; // child 1
    public GameObject wormChild2; // child 2

    private int amount;
    GameObject[] worms;

    public List<PathCreator> paths = new List<PathCreator>();

    void Start()
    {
        foreach (PathCreator p in paths)
        {
            amount = (int)Mathf.Round(p.path.length) / 15;
            worms = new GameObject[amount];
            worms[0] = Instantiate(wormObject);
            float j = 0f;

            for (int i = 1; i < amount; i++)
            {
                j -= Random.Range(16f, 18f);

                worms[i] = Instantiate(wormObject);
                wormChild1 = Instantiate(wormChild1);
                wormChild2 = Instantiate(wormChild2);

                worms[i].transform.position = new Vector3(p.path.GetPointAtDistance(j)[0], wormObject.transform.position[1], p.path.GetPointAtDistance(j)[2] + Random.Range(-10f, 10f));
                wormChild1.transform.position = new Vector3(worms[i].transform.position[0], worms[i].transform.position[1], worms[i].transform.position[2] + Random.Range(-20f, -10f));
                wormChild2.transform.position = new Vector3(worms[i].transform.position[0], worms[i].transform.position[1], worms[i].transform.position[2] + Random.Range(10f, 20f));
            }
        }
    }
}