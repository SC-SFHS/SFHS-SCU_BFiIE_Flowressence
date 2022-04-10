using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class Flipper : MonoBehaviour
{
    [ContextMenu("Flip")]
    public void FlipMeshContext()
    {
        Mesh mesh = GetComponent<MeshFilter>().mesh;
        mesh.triangles = mesh.triangles.Reverse().ToArray();
    }




}
