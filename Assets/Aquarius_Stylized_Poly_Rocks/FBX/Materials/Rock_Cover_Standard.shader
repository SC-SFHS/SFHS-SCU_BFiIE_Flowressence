/************************************************************************
*                 Rock Cover Top Shader v. 1.0                          *
*************************************************************************
***    Written by Antonio Ripa ( antonio.ripa@earthshaping.com )      ***
***        and Licensed to AquariusMax under CC BY-ND 4.0             ***
*************************************************************************
*      Creative Commons Attribution-NoDerivatives 4.0 International     *
*            https://creativecommons.org/licenses/by-nd/4.0/            *
*************************************************************************/
Shader "AquariusMax/Rock Cover Top ( Standard )"
{
	Properties{

        [Header(Rock Setting)]     
        _MainColor("Color", Color) = (1,1,1,1)
		_MainTex("Albedo", 2D) = "white" {}
        [NoScaleOffset]_NormalTex("Normal", 2D) = "bump" {}
        _NormalPower("Normal Power",Range(0,5)) = 1
        [NoScaleOffset]_OcclusionMap("Occlusion (AO)", 2D) = "white" {}
        _OcclusionStrength("Occlusion Strength",Range(0,1)) = 0.5
         [NoScaleOffset] _MetallicTex("Metallic Map", 2D) = "black" {}
        _Metallic("Metallic", Range(0, 1)) = 0.5
        _Smoothness("Smoothness ",Range(0,1)) = 0.5
        _MainCon("Contrast", Range(0,4)) = 1.0
        _MainBri("Brightness", Range(0,4)) = 1.0
      
        [Space(8)][Header(Cover Setting)]
		_TopTex("Top Cover Albedo", 2D) = "gray" {}
        [NoScaleOffset][HideInInspector]_TopNormalTex("Top Cover Normal", 2D) = "bump" {}
        _CoverageAmount("Top Coverage Amount", Range(-1 , 1)) = 0
        _CoverageFallOff("Top Coverage FallOff", Range(0 , 10)) = 6
        _TriplanarContrast("Top Triplanar Contrast", Range(0.1,4)) = 4
        
		[HideInInspector] _texcoord("", 2D) = "white" {}
    }

        SubShader{
        Tags{ "RenderType" = "Opaque" "Queue" = "Geometry+0" }
        LOD 200

        CGPROGRAM
        #pragma surface surf Standard vertex:vert fullforwardshadows
        #pragma target 3.0
        #pragma instancing_options procedural:setup
        #pragma multi_compile GPU_FRUSTUM_ON __

        uniform float4 _MainColor;
		sampler2D _MainTex, _NormalTex,_MetallicTex, _OcclusionMap;
        half _NormalPower, _NormalDPower;
		float4 _MainTex_ST, _DetailTex_ST;
        float _OcclusionStrength, _DetailPower, _Smoothness, _Metallic;
        float _MainCon, _MainBri;


        float _TriplanarContrast;

		// Top Coverage
        sampler2D _TopTex;
		float4 _TopTex_ST;
		sampler2D _TopNormalTex;
		float _CoverageAmount,_CoverageFallOff;
 
      

 ///////////////////////////////////////////////////////////////////////////////////
 // Add Vegetation Studio Indirect Instancing Support
 ///////////////////////////////////////////////////////////////////////////////////
#ifdef UNITY_PROCEDURAL_INSTANCING_ENABLED

    struct IndirectShaderData
    {
        float4x4 PositionMatrix;
        float4x4 InversePositionMatrix;
        float4 ControlData;
    };

#if defined(SHADER_API_GLCORE) || defined(SHADER_API_D3D11) || defined(SHADER_API_GLES3) || defined(SHADER_API_METAL) || defined(SHADER_API_VULKAN) || defined(SHADER_API_PSSL) || defined(SHADER_API_XBOXONE)
    StructuredBuffer<IndirectShaderData> IndirectShaderDataBuffer;
    StructuredBuffer<IndirectShaderData> VisibleShaderDataBuffer;
#endif	
#endif

    void setupScale()
    {
#ifdef UNITY_PROCEDURAL_INSTANCING_ENABLED
#ifdef GPU_FRUSTUM_ON
        unity_ObjectToWorld = VisibleShaderDataBuffer[unity_InstanceID].PositionMatrix;
        unity_WorldToObject = VisibleShaderDataBuffer[unity_InstanceID].InversePositionMatrix;
#else
        unity_ObjectToWorld = IndirectShaderDataBuffer[unity_InstanceID].PositionMatrix;
        unity_WorldToObject = IndirectShaderDataBuffer[unity_InstanceID].InversePositionMatrix;
#endif 

#ifdef FAR_CULL_ON_PROCEDURAL_INSTANCING
#define transformPosition mul(unity_ObjectToWorld, float4(0,0,0,1)).xyz
#define distanceToCamera length(transformPosition - _WorldSpaceCameraPos.xyz)
        float cull = 1.0 - saturate((distanceToCamera - _CullFarStart) / _CullFarDistance);
        unity_ObjectToWorld = mul(unity_ObjectToWorld, float4x4(cull, 0, 0, 0, 0, cull, 0, 0, 0, 0, cull, 0, 0, 0, 0, 1));
#undef transformPosition
#undef distanceToCamera
#endif
#endif
    }
    void setup()
    {
#ifdef UNITY_PROCEDURAL_INSTANCING_ENABLED
#ifdef GPU_FRUSTUM_ON
        unity_ObjectToWorld = VisibleShaderDataBuffer[unity_InstanceID].PositionMatrix;
        unity_WorldToObject = VisibleShaderDataBuffer[unity_InstanceID].InversePositionMatrix;
#else
        unity_ObjectToWorld = IndirectShaderDataBuffer[unity_InstanceID].PositionMatrix;
        unity_WorldToObject = IndirectShaderDataBuffer[unity_InstanceID].InversePositionMatrix;
#endif
#endif
    }
 //////////////////////////////////////////////////////////////////////////////////////////////////


	struct Input {
		float2 uv_texcoord;
		float3 worldPos;
		float3 worldNormal;
        float3 localPos;
        float3 localNorm;
        float4 uv_Color : COLOR;
		INTERNAL_DATA
	};


    // work around the way Unity passes the tangent to world matrix to surface shaders to prevent compiler errors
#if defined(INTERNAL_DATA) && (defined(UNITY_PASS_FORWARDBASE) || defined(UNITY_PASS_FORWARDADD) || defined(UNITY_PASS_DEFERRED) || defined(UNITY_PASS_META))
#define WorldToTangentNormalVector(data,normal) mul(normal, half3x3(data.internalSurfaceTtoW0, data.internalSurfaceTtoW1, data.internalSurfaceTtoW2))
#else
#define WorldToTangentNormalVector(data,normal) normal
#endif

///////////////////////////////////////////////////////////////////////////////////
// Triplanar Design Inspired by 
// https://medium.com/@bgolus/normal-mapping-for-a-triplanar-shader-10bf39dca05a
///////////////////////////////////////////////////////////////////////////////////
    half3 blend_rnm(half3 n1, half3 n2)
    {
        n1.z += 1;
        n2.xy = -n2.xy;
        return n1 * dot(n1, n2) / n1.z - n2;
    }
   
    half3 DoTriplanarNormal(sampler2D bump, float4 scaleOffset, float3 worldPos, float3 worldNormal, float triplanarContrast)
    {
        // calculate triplanar blend
        /*	half3 triblend = saturate(pow(i.worldNormal, 4));
        triblend /= max(dot(triblend, half3(1,1,1)), 0.0001);*/
        // Get the absolute value of the world normal.
        half3 n = abs(worldNormal);
        // Force weights to sum to 1.0
        n = normalize(max(n, 0.00001));
        //float b = (n.x + n.y + n.z);
        //n /= half3(b, b, b);
        // Put the blend weights to the power of sharpness, the higher the value, 
        // the sharper the transition between the planar maps will be.
        half3 triblend = pow(n, triplanarContrast);
        // Divide our blend mask by the sum of it's components, this will make x+y+z=1
        triblend = triblend / (triblend.x + triblend.y + triblend.z);
        // calculate triplanar uvs
        // applying texture scale and offset values ala TRANSFORM_TEX macro
        float2 uvX = worldPos.zy * scaleOffset.xy + scaleOffset.zw;
        float2 uvY = worldPos.xz * scaleOffset.xy + scaleOffset.zw;
        float2 uvZ = worldPos.xy * scaleOffset.xy + scaleOffset.zw;
        // offset UVs to prevent obvious mirroring
#if defined(TRIPLANAR_UV_OFFSET)
        uvY += 0.33;
        uvZ += 0.67;
#endif
        // minor optimization of sign(). prevents return value of 0
        half3 axisSign = worldNormal < 0 ? -1 : 1;
        // flip UVs horizontally to correct for back side projection
#if defined(TRIPLANAR_CORRECT_PROJECTED_U)
        uvX.x *= axisSign.x;
        uvY.x *= axisSign.y;
        uvZ.x *= -axisSign.z;
#endif



        // tangent space normal maps
        half3 tnormalX = UnpackNormal(tex2D(bump, uvX));
        half3 tnormalY = UnpackNormal(tex2D(bump, uvY));
        half3 tnormalZ = UnpackNormal(tex2D(bump, uvZ));;
        // flip normal maps' x axis to account for flipped UVs
#if defined(TRIPLANAR_CORRECT_PROJECTED_U)
        tnormalX.x *= axisSign.x;
        tnormalY.x *= axisSign.y;
        tnormalZ.x *= -axisSign.z;
#endif
        // swizzle world normals to match tangent space and apply reoriented normal mapping blend
        tnormalX = blend_rnm(half3(worldNormal.zy, n.x), tnormalX);
        tnormalY = blend_rnm(half3(worldNormal.xz, n.y), tnormalY);
        tnormalZ = blend_rnm(half3(worldNormal.xy, n.z), tnormalZ);

        // apply world space sign to tangent space Z
        tnormalX.z *= axisSign.x;
        tnormalY.z *= axisSign.y;
        tnormalZ.z *= axisSign.z;

        // sizzle tangent normals to match world normal and blend together
        half3 normal = normalize(
            tnormalX.zyx * triblend.x +
            tnormalY.xzy * triblend.y +
            tnormalZ.xyz * triblend.z
        );
        return normal;
    }
 
    half4 DoTriplanar(sampler2D tex, float4 scaleOffset, float3 worldPos, float3 worldNormal, float triplanarContrast)
    {
        // calculate triplanar blend
        /*	half3 triblend = saturate(pow(i.worldNormal, 4));
        triblend /= max(dot(triblend, half3(1,1,1)), 0.0001);*/
        // Get the absolute value of the world normal.
        half3 n = abs(worldNormal);
        // Force weights to sum to 1.0
        n = normalize(max(n, 0.00001));
        //float b = (n.x + n.y + n.z);
        //n /= half3(b, b, b);
        // Put the blend weights to the power of sharpness, the higher the value, 
        // the sharper the transition between the planar maps will be.
        half3 triblend = pow(n, triplanarContrast);
        // Divide our blend mask by the sum of it's components, this will make x+y+z=1
        triblend = triblend / (triblend.x + triblend.y + triblend.z);
        // calculate triplanar uvs
        // applying texture scale and offset values ala TRANSFORM_TEX macro
        float2 uvX = worldPos.zy * scaleOffset.xy + scaleOffset.zw;
        float2 uvY = worldPos.xz * scaleOffset.xy + scaleOffset.zw;
        float2 uvZ = worldPos.xy * scaleOffset.xy + scaleOffset.zw;
        // offset UVs to prevent obvious mirroring
#if defined(TRIPLANAR_UV_OFFSET)
        uvY += 0.33;
        uvZ += 0.67;
#endif
        // minor optimization of sign(). prevents return value of 0
        half3 axisSign = worldNormal < 0 ? -1 : 1;
        // flip UVs horizontally to correct for back side projection
#if defined(TRIPLANAR_CORRECT_PROJECTED_U)
        uvX.x *= axisSign.x;
        uvY.x *= axisSign.y;
        uvZ.x *= -axisSign.z;
#endif

        fixed4 colX = tex2D(tex, uvX);
        fixed4 colY = tex2D(tex, uvY);
        fixed4 colZ = tex2D(tex, uvZ);
        fixed4 col = colX * triblend.x + colY * triblend.y + colZ * triblend.z;

        return col;
    }
///////////////////////////////////////////////////////////////////////////////////

    // Blend Albedo and Detail Map
    fixed4 DoBlendDetails(fixed4 col, float4 blendTex,float intensity)
    {
      return lerp(col,(saturate(((col > 0.5) ? 2.0 * col*(1-blendTex)  + blendTex - 1.0  :2.0 * col * blendTex))),intensity);
    }
  
    void vert(inout appdata_full v, out Input o)
    {
        UNITY_INITIALIZE_OUTPUT(Input, o);
        o.localPos = v.vertex.xyz;
        o.localNorm = v.normal.xyz;
    }
	void surf(Input i, inout SurfaceOutputStandard o)
	{
        // work around bug where Input.worldNormal is always (0,0,0)
        i.worldNormal = WorldNormalVector(i, float3(0, 0, 1));
        float3 pos = i.localPos;
        float3 norm = i.localNorm;
// Albedo        
        float2 uv= i.uv_texcoord *  _MainTex_ST.xy + _MainTex_ST.zw;
        fixed4 col = tex2D(_MainTex, uv);
    
 // Do Cover       
        fixed4 top = DoTriplanar(_TopTex, _TopTex_ST, i.worldPos, i.worldNormal, _TriplanarContrast);
        float coverPower = pow(saturate(i.worldNormal + _CoverageAmount), 10.3 -_CoverageFallOff).y;
        col = lerp(col, top, coverPower);

 // Bri and Contr
     
        o.Albedo = pow(col * _MainColor, _MainCon) * _MainBri;
     
 // Normal
        fixed3 texNormal = UnpackNormal(tex2D(_NormalTex, uv));
        texNormal.x *= _NormalPower;
        texNormal.y *= _NormalPower;
        o.Normal = normalize(texNormal);
 // Occlusion   
        float ao = lerp(1, tex2D(_OcclusionMap, uv).g, _OcclusionStrength);
        o.Occlusion = ao;
// Met & Smoot   
        o.Metallic = tex2D(_MetallicTex, uv)*_Metallic;
        o.Smoothness = _Smoothness;
// Alpha
        o.Alpha = col.a;

	}


	ENDCG
	}
	FallBack "Diffuse"
}