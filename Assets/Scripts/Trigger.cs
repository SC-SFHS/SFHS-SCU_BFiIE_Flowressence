using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[RequireComponent(typeof(AudioSource))]
public class Trigger : MonoBehaviour
{
    AudioSource audiosource;
    public AudioClip transitionClip;
    public AudioClip musicSountrack;

    public bool startMusic;


    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name.Equals(AudioDJ.collidingObject))
        {
            Debug.Log(other.gameObject.name + " has entered " + this.gameObject.name);
            audiosource.PlayOneShot(transitionClip, 0.7F);
            AudioDJ.isMusicPlaying = true;
            AudioDJ.currentBiome = this.gameObject.name;
        }

    }

    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.name.Equals(AudioDJ.collidingObject))
        {
            Debug.Log(other.gameObject.name + " is still in " + this.gameObject.name);
        }

    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.name.Equals(AudioDJ.collidingObject))
        {
            audiosource.Stop();
            audiosource.PlayOneShot(musicSountrack, 0.7F);
            Debug.Log(other.gameObject.name + " has exit " + this.gameObject.name);
        }

    }
    // Start is called before the first frame update
    void Start()
    {

        audiosource = GetComponent<AudioSource>();
        startMusic = false;

    }

    // Update is called once per frame
    void Update()
    {
        if (AudioDJ.currentBiome.Equals(this.gameObject.name))
        {
            startMusic = true;
        }
        else if (startMusic == true)
        {
            audiosource.Stop();
            startMusic = false;
        }
    }
}
