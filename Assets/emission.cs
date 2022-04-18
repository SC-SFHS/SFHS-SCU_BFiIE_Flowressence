using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class emission : MonoBehaviour
{
    public GameObject m_EmmissiveObject;

    void Start()
    {
        float emissiveIntensity = 10;
        Color emissiveColor = Color.blue;
        m_EmmissiveObject.GetComponent<Renderer>().material.SetColor("_EmissiveColor", emissiveColor * emissiveIntensity);
    }
}
