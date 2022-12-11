using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    public AudioClip defaultAmbience;

    private AudioSource track01, track02;
    private bool isPlayingTrack01;

    public float defaultStartVolume;

    public static AudioManager instance;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }

    // Start is called before the first frame update
    private void Start()
    {
        track01 = gameObject.AddComponent<AudioSource>();
        track01.loop = true;
        track02 = gameObject.AddComponent<AudioSource>();
        track02.loop = true;
        isPlayingTrack01 = true;

        SwapTrack(defaultAmbience, defaultStartVolume);

    }

    public void SwapTrack(AudioClip newClip, float startVolume)
    {
        StopAllCoroutines();

        StartCoroutine(FadeTrack(newClip, startVolume));

        isPlayingTrack01 = !isPlayingTrack01;
    }

    public void ReturnToDefault()
    {
        SwapTrack(defaultAmbience, defaultStartVolume);
    }

    private IEnumerator FadeTrack(AudioClip newClip, float maxVolume)
    {
        float timeToFade = 3f;
        float timeElapsed = 0;

        if (isPlayingTrack01)
        {
            track02.clip = newClip;
            track02.Play();

            while (timeElapsed < timeToFade)
            {
                track02.volume = Mathf.Lerp(0, maxVolume, timeElapsed / timeToFade);
                track01.volume = Mathf.Lerp(maxVolume, 0, timeElapsed / timeToFade);
                timeElapsed += Time.deltaTime;
                yield return null;
            }

            track01.Stop();
        }
        else
        {
            track01.clip = newClip;
            track01.Play();

            while (timeElapsed < timeToFade)
            {
                track01.volume = Mathf.Lerp(0, maxVolume, timeElapsed / timeToFade);
                track02.volume = Mathf.Lerp(maxVolume, 0, timeElapsed / timeToFade);
                timeElapsed += Time.deltaTime;
                yield return null;
            }

            track02.Stop();
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
