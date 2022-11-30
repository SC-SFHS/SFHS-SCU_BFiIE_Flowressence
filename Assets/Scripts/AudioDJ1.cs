using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioDJ1 : MonoBehaviour
{
    public static bool isMusicPlaying;
    public static System.String currentBiome = "";
    public static System.String collidingObject = "Lantern";

    // Start is called before the first frame update
    void Start()
    {
        // /currentBiome = "";
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log("We're in " + currentBiome);
    }
}
