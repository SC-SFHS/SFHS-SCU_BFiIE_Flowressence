using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioSwap : MonoBehaviour
{
    public AudioClip newTrack;
    public float startVolume;

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name.Equals("Lantern"))
        {
            AudioManager.instance.SwapTrack(newTrack, startVolume);
            Debug.Log("lantern enter");
        }

    }

    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.name.Equals("Lantern"))
        {
            AudioManager.currentBiome = this.gameObject.name;
        }
    }
    private void OnTriggerExit(Collider other)
    {
        // other.CompareTag("Lantern")
        if (other.gameObject.name.Equals("Lantern"))
        {
            AudioManager.instance.ReturnToDefault();
            Debug.Log("lantern exit");
        }

    }
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {

    }
}