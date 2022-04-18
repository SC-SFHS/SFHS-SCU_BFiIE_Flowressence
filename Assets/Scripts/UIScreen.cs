using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIScreen : MonoBehaviour
{
    public Button button;
    public GameObject canvas;
    public Text text;
    public TimeManager timeManager;
    public PathFollower pathFollower;

    // Start is called before the first frame update
    void Start()
    {
        canvas.transform.position = new Vector3(728f, 5f, pathFollower.pathCreator.path.GetPointAtDistance(-1f)[2]);
        button.onClick.AddListener(HideUIScreen);
    }

    // Update is called once per frame
    void Update()
    {

    }

    void HideUIScreen()
    {
        if (text.text == "START")
        {
            canvas.SetActive(false);
            timeManager.gameStarted = true;
        }
        else if (text.text == "EXIT")
        {
            // UnityEditor.EditorApplication.isPlaying = false; // <- exits out of play mode in Unity
            Application.Quit(); // <- quits the actual game, which can be tested after we build the game and run it
        }
    }
}
