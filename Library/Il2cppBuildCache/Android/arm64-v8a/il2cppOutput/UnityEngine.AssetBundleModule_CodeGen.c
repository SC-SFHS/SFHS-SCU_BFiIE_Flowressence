#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UnityEngine.AssetBundle::.ctor()
extern void AssetBundle__ctor_mCE6DB7758AAD0EDDB044FC67C5BC7EC987BF3F71 (void);
// 0x00000002 UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromFile_Internal(System.String,System.UInt32,System.UInt64)
extern void AssetBundle_LoadFromFile_Internal_m27AD5A25C493DDF033E2C0EB8B5E73D1A498D3D9 (void);
// 0x00000003 UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromFile(System.String)
extern void AssetBundle_LoadFromFile_m326379558FA2CA731C294D5F9905EA3EAE3B5E52 (void);
// 0x00000004 UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String)
extern void AssetBundle_LoadAsset_m598BB4E86B07C2BADAE6ED6FFBE5BB5E7A3392D5 (void);
// 0x00000005 T UnityEngine.AssetBundle::LoadAsset(System.String)
// 0x00000006 UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
extern void AssetBundle_LoadAsset_m9139320F8B6D3E43B7D29AA7A60030306AE0A2C6 (void);
// 0x00000007 UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern void AssetBundle_LoadAsset_Internal_mFB165539087545C4B5763BA8B590D84318C6FE1B (void);
// 0x00000008 System.Void UnityEngine.AssetBundle::Unload(System.Boolean)
extern void AssetBundle_Unload_m0DEBACB284F6CECA8DF21486D1BBE1189F6A5D66 (void);
// 0x00000009 System.String[] UnityEngine.AssetBundle::GetAllAssetNames()
extern void AssetBundle_GetAllAssetNames_m7012B92C4E0BDF3975EBC22DE2515AFEB0E9D409 (void);
// 0x0000000A System.String[] UnityEngine.AssetBundle::GetAllScenePaths()
extern void AssetBundle_GetAllScenePaths_mFE0D5927A3BEEC04BDB62FA436FA9051299B7BC6 (void);
static Il2CppMethodPointer s_methodPointers[10] = 
{
	AssetBundle__ctor_mCE6DB7758AAD0EDDB044FC67C5BC7EC987BF3F71,
	AssetBundle_LoadFromFile_Internal_m27AD5A25C493DDF033E2C0EB8B5E73D1A498D3D9,
	AssetBundle_LoadFromFile_m326379558FA2CA731C294D5F9905EA3EAE3B5E52,
	AssetBundle_LoadAsset_m598BB4E86B07C2BADAE6ED6FFBE5BB5E7A3392D5,
	NULL,
	AssetBundle_LoadAsset_m9139320F8B6D3E43B7D29AA7A60030306AE0A2C6,
	AssetBundle_LoadAsset_Internal_mFB165539087545C4B5763BA8B590D84318C6FE1B,
	AssetBundle_Unload_m0DEBACB284F6CECA8DF21486D1BBE1189F6A5D66,
	AssetBundle_GetAllAssetNames_m7012B92C4E0BDF3975EBC22DE2515AFEB0E9D409,
	AssetBundle_GetAllScenePaths_mFE0D5927A3BEEC04BDB62FA436FA9051299B7BC6,
};
static const int32_t s_InvokerIndices[10] = 
{
	5114,
	6435,
	7617,
	3180,
	-1,
	1746,
	1746,
	4117,
	5024,
	5024,
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x06000005, { 0, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[2] = 
{
	{ (Il2CppRGCTXDataType)1, 120 },
	{ (Il2CppRGCTXDataType)2, 120 },
};
extern const CustomAttributesCacheGenerator g_UnityEngine_AssetBundleModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule = 
{
	"UnityEngine.AssetBundleModule.dll",
	10,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	1,
	s_rgctxIndices,
	2,
	s_rgctxValues,
	NULL,
	g_UnityEngine_AssetBundleModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
