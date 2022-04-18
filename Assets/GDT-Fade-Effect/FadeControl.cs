using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FadeControl : MonoBehaviour
{

    public GameObject fadeEffect;
    public TimeManager timeManager;
    private bool fadeFinished;
    

    // Start is called before the first frame update
    void Start()
    {
        fadeFinished = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (timeManager.gameFinished & !fadeFinished)
        {
            fadeEffect.SetActive(true);
            StartCoroutine(ReturnHome());
            fadeFinished = true;
        }
    }
    IEnumerator ReturnHome()
    {
        yield return new WaitForSeconds(4);
        gameObject.transform.position = gameObject.GetComponent<PathFollower>().pathCreator.path.GetPointAtDistance(-1f);
        gameObject.transform.rotation = Quaternion.Euler(0, -90, 0);
    }
}
