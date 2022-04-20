using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.Interaction.Toolkit;

public class FadeControl : MonoBehaviour
{

    public GameObject fadeEffect;
    public TimeManager timeManager;
    public UIScreen uiScreen;
    private bool fadeFinished;
    public LocomotionSystem locomotionSystem;
    
    void Start()
    {
        fadeFinished = false;
    }

    void Update()
    {
        if (timeManager.gameFinished && !fadeFinished)
        {
            fadeEffect.SetActive(true);
            StartCoroutine(ReturnHome());
            fadeFinished = true;
        }
    }
    IEnumerator ReturnHome()
    {
        // waiting for fade animation to finish when user is at end of cavern
        yield return new WaitForSeconds(3.5f);
        // resetting user's position to start of cave
        gameObject.transform.position = gameObject.GetComponent<PathFollower>().pathCreator.path.GetPointAtDistance(-1f);
        gameObject.transform.rotation = Quaternion.Euler(0, -90, 0);
        // preventing any movement from joystick before scene is reloaded
        locomotionSystem.gameObject.SetActive(false);
        // enabling UI Screen with buttons once user has returned to the start
        uiScreen.canvas.SetActive(true);
        // enabling controller rays when user returns to start
        uiScreen.ShowRayCaster();
        // waiting for a few seconds until scene is reloaded
        yield return new WaitForSeconds(4);
        // reloading scene
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
}
