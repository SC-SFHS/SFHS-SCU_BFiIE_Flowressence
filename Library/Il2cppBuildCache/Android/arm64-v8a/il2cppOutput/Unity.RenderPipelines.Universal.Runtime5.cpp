#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Comparison`1<UnityEngine.Camera>
struct Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Rendering.ProfilingSampler>
struct Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738;
// System.Func`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>
struct Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64;
// System.Func`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>
struct Func_2_tA55660D7B36BC919063457215A12594F309CFDF1;
// System.Func`2<System.Int32,System.Int32>
struct Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Rendering.ProfilingSampler>
struct KeyCollection_tA141C8E6DB7131E689E68E056497028A4991A392;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRenderPass>
struct List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRView>
struct List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE;
// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Dict`1/Node<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Tess/ActiveRegion>
struct Node_tB11B0F3EB615193C2A33C839707F719C0E0E7B04;
// System.Predicate`1<UnityEngine.Camera>
struct Predicate_1_t316C1C65C60519BA48CD9A5C9EEAC4E6B166DE1B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Rendering.ProfilingSampler>
struct ValueCollection_t93BFE35B854E356D4E5960A081A1FD6870917BDE;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.Rendering.ProfilingSampler>[]
struct EntryU5BU5D_t52441A43217BB5969C83E0C56DBB52D911C6AC2B;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.Light[]
struct LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Rendering.RenderBufferStoreAction[]
struct RenderBufferStoreActionU5BU5D_t705A51FC56751EAFDABE1033BBDEF052671F97CF;
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17;
// UnityEngine.Rendering.Universal.ScriptableRenderPass[]
struct ScriptableRenderPassU5BU5D_t46A06EF48C35EDE887A0F172659C53017B7B74F8;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29;
// UnityEngine.Profiling.CustomSampler
struct CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Rendering.ProfilingSampler
struct ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92;
// UnityEngine.Profiling.Recorder
struct Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// UnityEngine.Rendering.Universal.ScriptableRenderPass
struct ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Rendering.Universal.XRPass
struct XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Edge
struct Edge_t8458BC94DDDAA5C58DCF23C65754A86CEDB97335;
// UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures
struct RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404;
// UnityEngine.Rendering.Universal.ShaderUtils/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tA907A016E0C359EBDDC774D0987930EA70877B40;
// UnityEngine.Experimental.Rendering.Universal.ShadowUtility/<>c
struct U3CU3Ec_tA26AB1914240759F2BFCB355DFC8A90C4DBEDCD2;
// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Tess/ActiveRegion
struct ActiveRegion_tCA66125CCAEAF17E6FA218A9BFD6007E85FA4EBA;
// UnityEngine.Rendering.Universal.UniversalAdditionalCameraData/<>c
struct U3CU3Ec_tE7F5CE7780F26678A15FEF4C6D58C2101212BA4C;
// UnityEngine.Rendering.Universal.UniversalRenderPipeline/<>c
struct U3CU3Ec_t455C8088007063E0848091BFA6C351BACBE76DE7;
// UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/MaterialResources
struct MaterialResources_tCF43A6C5DD1D40B13BA318B673BF24E0EE8244B9;
// UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/ShaderResources
struct ShaderResources_t27CE230476CFEDB08B4B6B2F246CD4949F5CF9C5;
// UnityEngine.Rendering.Universal.XRPass/CustomMirrorView
struct CustomMirrorView_t85B3412384E1B25E4A3D103FDFCAD87FFA728027;
// UnityEngine.Rendering.Universal.XRSystemData/ShaderResources
struct ShaderResources_tD419B97943EFC871C08C6465BFB3F34ED72CBBB6;

IL2CPP_EXTERN_C RuntimeClass* Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Context_t8BECE9FB3DB6EE3DFC66BAE423F28A0A468763AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Profiling_t39C0DC7692E61CE063CD6F20CCCC7C5638435E09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderBlock_tBEC3973B1449F9E894570A7B5A44D25B2017D62C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderPass_t654BE67EC7D412BFA61B9B60A7679B2C59A0BDB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Renderer_t196605490C564E48831EDFEA040CF712FFDBE135_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t455C8088007063E0848091BFA6C351BACBE76DE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA26AB1914240759F2BFCB355DFC8A90C4DBEDCD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE7F5CE7780F26678A15FEF4C6D58C2101212BA4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XR_tD069CFDA1F46495AC33865862CDA4DE58C5F9773_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral088F5103DAE59E9314BB73FAA5D3B1795AA80A24;
IL2CPP_EXTERN_C String_t* _stringLiteral0FC055EB677272ECB03EAE6A35BD064C00E89CBB;
IL2CPP_EXTERN_C String_t* _stringLiteral150E23F7EB9EFFF8736BC3ED290A2DC8F85A2D43;
IL2CPP_EXTERN_C String_t* _stringLiteral20003DF48CDE7BC9F64F81EDAF1099FDD7F339F1;
IL2CPP_EXTERN_C String_t* _stringLiteral2B045E2D739D3915A98BB5E0296A98441E118DD3;
IL2CPP_EXTERN_C String_t* _stringLiteral327EE2A11980B2E517221882311651C5F4AB4F7B;
IL2CPP_EXTERN_C String_t* _stringLiteral355871A53683A0CE41651908009466DB1F5FEBC7;
IL2CPP_EXTERN_C String_t* _stringLiteral3F1BFCACEFDC98F691CA4EEA7601E20BEAA9CD4D;
IL2CPP_EXTERN_C String_t* _stringLiteral509024B23E1B755770EA1716E9719DC4A2E9C6EF;
IL2CPP_EXTERN_C String_t* _stringLiteral5D0ADE43EA4B31A70EE3D0222D5B89B201786A35;
IL2CPP_EXTERN_C String_t* _stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C;
IL2CPP_EXTERN_C String_t* _stringLiteral622D58827F4D648D42584A558A4DB718DB3A5D3F;
IL2CPP_EXTERN_C String_t* _stringLiteral7617AD9A8BB08A2EE20EE130A46017992FE1DAC7;
IL2CPP_EXTERN_C String_t* _stringLiteral778024949B6296D760E01A5C9A19C1BDCD9C4050;
IL2CPP_EXTERN_C String_t* _stringLiteral8DD2D0B8D9AC5400490848DF5DFE2A85EB1380AC;
IL2CPP_EXTERN_C String_t* _stringLiteral92832D3159F78C5F88AC11744E8E09C41464C672;
IL2CPP_EXTERN_C String_t* _stringLiteralA15241D01BB37C045E429CFCC870A886B24A80D1;
IL2CPP_EXTERN_C String_t* _stringLiteralA17366220E713ADFBBB8558BF7AEB7BAA4CD1702;
IL2CPP_EXTERN_C String_t* _stringLiteralA73E9A514AB6BA241F22ECD97E1F6FB143B7A9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralAD55BBE002A4BC0071CA6DBD44F5DB3747D7C007;
IL2CPP_EXTERN_C String_t* _stringLiteralBB0F51847C1296E8FF634F30C60761FBE4C30200;
IL2CPP_EXTERN_C String_t* _stringLiteralBF2D2E12926702FF829550D91885E37FB7AD0E97;
IL2CPP_EXTERN_C String_t* _stringLiteralD6A8468EB362203CA26E60195CD60E1AA2513A9C;
IL2CPP_EXTERN_C String_t* _stringLiteralE2DC1C4F67F18CAF79E60F4F78FA88811E5E36C1;
IL2CPP_EXTERN_C String_t* _stringLiteralF8B3C6035C05097B8D37222B0E2227A4F44FF43E;
IL2CPP_EXTERN_C String_t* _stringLiteralF9318578B55C050E20BB84CED278EA5587351810;
IL2CPP_EXTERN_C String_t* _stringLiteralFA438FF199C699E7C62ABE67E79362A48E814795;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mABCD91B640CA38E90D89A02B1CC4E0249C62145B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m67DD82A95384FC31D204C1CB307668C13F13D742_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m35A1CC2C64F6914C8489FD4CE7D2B4E6E82A5AAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1B26D5D1FBF1760D3A3791A96B2E2DBFDD7AB6E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7897CAC5C03FBB2A5AF3616776991B75461BC0A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m69DBDA47FE3991A47E9CFCBFB3292676D22D7655_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mB770E3C3D16F3E41F3E9190617659B7141EA7EA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m001FCAD07C1100FAA1AA3C38CA5C493FC25B2292_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mC1E683684695F637A7F6264DD486C8839D0C1264_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Rendering.ProfilingSampler>
struct Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52441A43217BB5969C83E0C56DBB52D911C6AC2B* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tA141C8E6DB7131E689E68E056497028A4991A392 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t93BFE35B854E356D4E5960A081A1FD6870917BDE * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738, ___entries_1)); }
	inline EntryU5BU5D_t52441A43217BB5969C83E0C56DBB52D911C6AC2B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52441A43217BB5969C83E0C56DBB52D911C6AC2B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52441A43217BB5969C83E0C56DBB52D911C6AC2B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738, ___keys_7)); }
	inline KeyCollection_tA141C8E6DB7131E689E68E056497028A4991A392 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA141C8E6DB7131E689E68E056497028A4991A392 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA141C8E6DB7131E689E68E056497028A4991A392 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738, ___values_8)); }
	inline ValueCollection_t93BFE35B854E356D4E5960A081A1FD6870917BDE * get_values_8() const { return ___values_8; }
	inline ValueCollection_t93BFE35B854E356D4E5960A081A1FD6870917BDE ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t93BFE35B854E356D4E5960A081A1FD6870917BDE * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRenderPass>
struct List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ScriptableRenderPassU5BU5D_t46A06EF48C35EDE887A0F172659C53017B7B74F8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F, ____items_1)); }
	inline ScriptableRenderPassU5BU5D_t46A06EF48C35EDE887A0F172659C53017B7B74F8* get__items_1() const { return ____items_1; }
	inline ScriptableRenderPassU5BU5D_t46A06EF48C35EDE887A0F172659C53017B7B74F8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ScriptableRenderPassU5BU5D_t46A06EF48C35EDE887A0F172659C53017B7B74F8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ScriptableRenderPassU5BU5D_t46A06EF48C35EDE887A0F172659C53017B7B74F8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F_StaticFields, ____emptyArray_5)); }
	inline ScriptableRenderPassU5BU5D_t46A06EF48C35EDE887A0F172659C53017B7B74F8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ScriptableRenderPassU5BU5D_t46A06EF48C35EDE887A0F172659C53017B7B74F8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ScriptableRenderPassU5BU5D_t46A06EF48C35EDE887A0F172659C53017B7B74F8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.Rendering.ProfilingSampler
struct ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92  : public RuntimeObject
{
public:
	// UnityEngine.Profiling.CustomSampler UnityEngine.Rendering.ProfilingSampler::<sampler>k__BackingField
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ___U3CsamplerU3Ek__BackingField_0;
	// UnityEngine.Profiling.CustomSampler UnityEngine.Rendering.ProfilingSampler::<inlineSampler>k__BackingField
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ___U3CinlineSamplerU3Ek__BackingField_1;
	// System.String UnityEngine.Rendering.ProfilingSampler::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_2;
	// UnityEngine.Profiling.Recorder UnityEngine.Rendering.ProfilingSampler::m_Recorder
	Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 * ___m_Recorder_3;
	// UnityEngine.Profiling.Recorder UnityEngine.Rendering.ProfilingSampler::m_InlineRecorder
	Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 * ___m_InlineRecorder_4;

public:
	inline static int32_t get_offset_of_U3CsamplerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92, ___U3CsamplerU3Ek__BackingField_0)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get_U3CsamplerU3Ek__BackingField_0() const { return ___U3CsamplerU3Ek__BackingField_0; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of_U3CsamplerU3Ek__BackingField_0() { return &___U3CsamplerU3Ek__BackingField_0; }
	inline void set_U3CsamplerU3Ek__BackingField_0(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		___U3CsamplerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsamplerU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinlineSamplerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92, ___U3CinlineSamplerU3Ek__BackingField_1)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get_U3CinlineSamplerU3Ek__BackingField_1() const { return ___U3CinlineSamplerU3Ek__BackingField_1; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of_U3CinlineSamplerU3Ek__BackingField_1() { return &___U3CinlineSamplerU3Ek__BackingField_1; }
	inline void set_U3CinlineSamplerU3Ek__BackingField_1(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		___U3CinlineSamplerU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinlineSamplerU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92, ___U3CnameU3Ek__BackingField_2)); }
	inline String_t* get_U3CnameU3Ek__BackingField_2() const { return ___U3CnameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_2() { return &___U3CnameU3Ek__BackingField_2; }
	inline void set_U3CnameU3Ek__BackingField_2(String_t* value)
	{
		___U3CnameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Recorder_3() { return static_cast<int32_t>(offsetof(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92, ___m_Recorder_3)); }
	inline Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 * get_m_Recorder_3() const { return ___m_Recorder_3; }
	inline Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 ** get_address_of_m_Recorder_3() { return &___m_Recorder_3; }
	inline void set_m_Recorder_3(Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 * value)
	{
		___m_Recorder_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Recorder_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_InlineRecorder_4() { return static_cast<int32_t>(offsetof(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92, ___m_InlineRecorder_4)); }
	inline Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 * get_m_InlineRecorder_4() const { return ___m_InlineRecorder_4; }
	inline Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 ** get_address_of_m_InlineRecorder_4() { return &___m_InlineRecorder_4; }
	inline void set_m_InlineRecorder_4(Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 * value)
	{
		___m_InlineRecorder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InlineRecorder_4), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.Rendering.Universal.ScriptableRenderer/RenderPassBlock
struct RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C  : public RuntimeObject
{
public:

public:
};

struct RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_StaticFields
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderer/RenderPassBlock::BeforeRendering
	int32_t ___BeforeRendering_0;
	// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderer/RenderPassBlock::MainRenderingOpaque
	int32_t ___MainRenderingOpaque_1;
	// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderer/RenderPassBlock::MainRenderingTransparent
	int32_t ___MainRenderingTransparent_2;
	// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderer/RenderPassBlock::AfterRendering
	int32_t ___AfterRendering_3;

public:
	inline static int32_t get_offset_of_BeforeRendering_0() { return static_cast<int32_t>(offsetof(RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_StaticFields, ___BeforeRendering_0)); }
	inline int32_t get_BeforeRendering_0() const { return ___BeforeRendering_0; }
	inline int32_t* get_address_of_BeforeRendering_0() { return &___BeforeRendering_0; }
	inline void set_BeforeRendering_0(int32_t value)
	{
		___BeforeRendering_0 = value;
	}

	inline static int32_t get_offset_of_MainRenderingOpaque_1() { return static_cast<int32_t>(offsetof(RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_StaticFields, ___MainRenderingOpaque_1)); }
	inline int32_t get_MainRenderingOpaque_1() const { return ___MainRenderingOpaque_1; }
	inline int32_t* get_address_of_MainRenderingOpaque_1() { return &___MainRenderingOpaque_1; }
	inline void set_MainRenderingOpaque_1(int32_t value)
	{
		___MainRenderingOpaque_1 = value;
	}

	inline static int32_t get_offset_of_MainRenderingTransparent_2() { return static_cast<int32_t>(offsetof(RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_StaticFields, ___MainRenderingTransparent_2)); }
	inline int32_t get_MainRenderingTransparent_2() const { return ___MainRenderingTransparent_2; }
	inline int32_t* get_address_of_MainRenderingTransparent_2() { return &___MainRenderingTransparent_2; }
	inline void set_MainRenderingTransparent_2(int32_t value)
	{
		___MainRenderingTransparent_2 = value;
	}

	inline static int32_t get_offset_of_AfterRendering_3() { return static_cast<int32_t>(offsetof(RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_StaticFields, ___AfterRendering_3)); }
	inline int32_t get_AfterRendering_3() const { return ___AfterRendering_3; }
	inline int32_t* get_address_of_AfterRendering_3() { return &___AfterRendering_3; }
	inline void set_AfterRendering_3(int32_t value)
	{
		___AfterRendering_3 = value;
	}
};


// UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures
struct RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures::<cameraStacking>k__BackingField
	bool ___U3CcameraStackingU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures::<msaa>k__BackingField
	bool ___U3CmsaaU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CcameraStackingU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404, ___U3CcameraStackingU3Ek__BackingField_0)); }
	inline bool get_U3CcameraStackingU3Ek__BackingField_0() const { return ___U3CcameraStackingU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CcameraStackingU3Ek__BackingField_0() { return &___U3CcameraStackingU3Ek__BackingField_0; }
	inline void set_U3CcameraStackingU3Ek__BackingField_0(bool value)
	{
		___U3CcameraStackingU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CmsaaU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404, ___U3CmsaaU3Ek__BackingField_1)); }
	inline bool get_U3CmsaaU3Ek__BackingField_1() const { return ___U3CmsaaU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CmsaaU3Ek__BackingField_1() { return &___U3CmsaaU3Ek__BackingField_1; }
	inline void set_U3CmsaaU3Ek__BackingField_1(bool value)
	{
		___U3CmsaaU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.Rendering.Universal.ShaderUtils/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tA907A016E0C359EBDDC774D0987930EA70877B40  : public RuntimeObject
{
public:
	// System.String UnityEngine.Rendering.Universal.ShaderUtils/<>c__DisplayClass2_0::path
	String_t* ___path_0;

public:
	inline static int32_t get_offset_of_path_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tA907A016E0C359EBDDC774D0987930EA70877B40, ___path_0)); }
	inline String_t* get_path_0() const { return ___path_0; }
	inline String_t** get_address_of_path_0() { return &___path_0; }
	inline void set_path_0(String_t* value)
	{
		___path_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_0), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.Universal.ShadowUtility/<>c
struct U3CU3Ec_tA26AB1914240759F2BFCB355DFC8A90C4DBEDCD2  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tA26AB1914240759F2BFCB355DFC8A90C4DBEDCD2_StaticFields
{
public:
	// UnityEngine.Experimental.Rendering.Universal.ShadowUtility/<>c UnityEngine.Experimental.Rendering.Universal.ShadowUtility/<>c::<>9
	U3CU3Ec_tA26AB1914240759F2BFCB355DFC8A90C4DBEDCD2 * ___U3CU3E9_0;
	// System.Func`2<System.Int32,System.Int32> UnityEngine.Experimental.Rendering.Universal.ShadowUtility/<>c::<>9__8_0
	Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___U3CU3E9__8_0_1;
	// System.Func`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3> UnityEngine.Experimental.Rendering.Universal.ShadowUtility/<>c::<>9__8_1
	Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * ___U3CU3E9__8_1_2;
	// System.Func`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color> UnityEngine.Experimental.Rendering.Universal.ShadowUtility/<>c::<>9__8_2
	Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * ___U3CU3E9__8_2_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA26AB1914240759F2BFCB355DFC8A90C4DBEDCD2_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tA26AB1914240759F2BFCB355DFC8A90C4DBEDCD2 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tA26AB1914240759F2BFCB355DFC8A90C4DBEDCD2 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tA26AB1914240759F2BFCB355DFC8A90C4DBEDCD2 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA26AB1914240759F2BFCB355DFC8A90C4DBEDCD2_StaticFields, ___U3CU3E9__8_0_1)); }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * get_U3CU3E9__8_0_1() const { return ___U3CU3E9__8_0_1; }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA ** get_address_of_U3CU3E9__8_0_1() { return &___U3CU3E9__8_0_1; }
	inline void set_U3CU3E9__8_0_1(Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * value)
	{
		___U3CU3E9__8_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA26AB1914240759F2BFCB355DFC8A90C4DBEDCD2_StaticFields, ___U3CU3E9__8_1_2)); }
	inline Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * get_U3CU3E9__8_1_2() const { return ___U3CU3E9__8_1_2; }
	inline Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 ** get_address_of_U3CU3E9__8_1_2() { return &___U3CU3E9__8_1_2; }
	inline void set_U3CU3E9__8_1_2(Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * value)
	{
		___U3CU3E9__8_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA26AB1914240759F2BFCB355DFC8A90C4DBEDCD2_StaticFields, ___U3CU3E9__8_2_3)); }
	inline Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * get_U3CU3E9__8_2_3() const { return ___U3CU3E9__8_2_3; }
	inline Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 ** get_address_of_U3CU3E9__8_2_3() { return &___U3CU3E9__8_2_3; }
	inline void set_U3CU3E9__8_2_3(Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * value)
	{
		___U3CU3E9__8_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_2_3), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Tess/ActiveRegion
struct ActiveRegion_tCA66125CCAEAF17E6FA218A9BFD6007E85FA4EBA  : public RuntimeObject
{
public:
	// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Edge UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Tess/ActiveRegion::_eUp
	Edge_t8458BC94DDDAA5C58DCF23C65754A86CEDB97335 * ____eUp_0;
	// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Dict`1/Node<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Tess/ActiveRegion> UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Tess/ActiveRegion::_nodeUp
	Node_tB11B0F3EB615193C2A33C839707F719C0E0E7B04 * ____nodeUp_1;
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Tess/ActiveRegion::_windingNumber
	int32_t ____windingNumber_2;
	// System.Boolean UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Tess/ActiveRegion::_inside
	bool ____inside_3;
	// System.Boolean UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Tess/ActiveRegion::_sentinel
	bool ____sentinel_4;
	// System.Boolean UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Tess/ActiveRegion::_dirty
	bool ____dirty_5;
	// System.Boolean UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Tess/ActiveRegion::_fixUpperEdge
	bool ____fixUpperEdge_6;

public:
	inline static int32_t get_offset_of__eUp_0() { return static_cast<int32_t>(offsetof(ActiveRegion_tCA66125CCAEAF17E6FA218A9BFD6007E85FA4EBA, ____eUp_0)); }
	inline Edge_t8458BC94DDDAA5C58DCF23C65754A86CEDB97335 * get__eUp_0() const { return ____eUp_0; }
	inline Edge_t8458BC94DDDAA5C58DCF23C65754A86CEDB97335 ** get_address_of__eUp_0() { return &____eUp_0; }
	inline void set__eUp_0(Edge_t8458BC94DDDAA5C58DCF23C65754A86CEDB97335 * value)
	{
		____eUp_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____eUp_0), (void*)value);
	}

	inline static int32_t get_offset_of__nodeUp_1() { return static_cast<int32_t>(offsetof(ActiveRegion_tCA66125CCAEAF17E6FA218A9BFD6007E85FA4EBA, ____nodeUp_1)); }
	inline Node_tB11B0F3EB615193C2A33C839707F719C0E0E7B04 * get__nodeUp_1() const { return ____nodeUp_1; }
	inline Node_tB11B0F3EB615193C2A33C839707F719C0E0E7B04 ** get_address_of__nodeUp_1() { return &____nodeUp_1; }
	inline void set__nodeUp_1(Node_tB11B0F3EB615193C2A33C839707F719C0E0E7B04 * value)
	{
		____nodeUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nodeUp_1), (void*)value);
	}

	inline static int32_t get_offset_of__windingNumber_2() { return static_cast<int32_t>(offsetof(ActiveRegion_tCA66125CCAEAF17E6FA218A9BFD6007E85FA4EBA, ____windingNumber_2)); }
	inline int32_t get__windingNumber_2() const { return ____windingNumber_2; }
	inline int32_t* get_address_of__windingNumber_2() { return &____windingNumber_2; }
	inline void set__windingNumber_2(int32_t value)
	{
		____windingNumber_2 = value;
	}

	inline static int32_t get_offset_of__inside_3() { return static_cast<int32_t>(offsetof(ActiveRegion_tCA66125CCAEAF17E6FA218A9BFD6007E85FA4EBA, ____inside_3)); }
	inline bool get__inside_3() const { return ____inside_3; }
	inline bool* get_address_of__inside_3() { return &____inside_3; }
	inline void set__inside_3(bool value)
	{
		____inside_3 = value;
	}

	inline static int32_t get_offset_of__sentinel_4() { return static_cast<int32_t>(offsetof(ActiveRegion_tCA66125CCAEAF17E6FA218A9BFD6007E85FA4EBA, ____sentinel_4)); }
	inline bool get__sentinel_4() const { return ____sentinel_4; }
	inline bool* get_address_of__sentinel_4() { return &____sentinel_4; }
	inline void set__sentinel_4(bool value)
	{
		____sentinel_4 = value;
	}

	inline static int32_t get_offset_of__dirty_5() { return static_cast<int32_t>(offsetof(ActiveRegion_tCA66125CCAEAF17E6FA218A9BFD6007E85FA4EBA, ____dirty_5)); }
	inline bool get__dirty_5() const { return ____dirty_5; }
	inline bool* get_address_of__dirty_5() { return &____dirty_5; }
	inline void set__dirty_5(bool value)
	{
		____dirty_5 = value;
	}

	inline static int32_t get_offset_of__fixUpperEdge_6() { return static_cast<int32_t>(offsetof(ActiveRegion_tCA66125CCAEAF17E6FA218A9BFD6007E85FA4EBA, ____fixUpperEdge_6)); }
	inline bool get__fixUpperEdge_6() const { return ____fixUpperEdge_6; }
	inline bool* get_address_of__fixUpperEdge_6() { return &____fixUpperEdge_6; }
	inline void set__fixUpperEdge_6(bool value)
	{
		____fixUpperEdge_6 = value;
	}
};


// UnityEngine.Rendering.Universal.UniversalAdditionalCameraData/<>c
struct U3CU3Ec_tE7F5CE7780F26678A15FEF4C6D58C2101212BA4C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE7F5CE7780F26678A15FEF4C6D58C2101212BA4C_StaticFields
{
public:
	// UnityEngine.Rendering.Universal.UniversalAdditionalCameraData/<>c UnityEngine.Rendering.Universal.UniversalAdditionalCameraData/<>c::<>9
	U3CU3Ec_tE7F5CE7780F26678A15FEF4C6D58C2101212BA4C * ___U3CU3E9_0;
	// System.Predicate`1<UnityEngine.Camera> UnityEngine.Rendering.Universal.UniversalAdditionalCameraData/<>c::<>9__41_0
	Predicate_1_t316C1C65C60519BA48CD9A5C9EEAC4E6B166DE1B * ___U3CU3E9__41_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE7F5CE7780F26678A15FEF4C6D58C2101212BA4C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE7F5CE7780F26678A15FEF4C6D58C2101212BA4C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE7F5CE7780F26678A15FEF4C6D58C2101212BA4C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE7F5CE7780F26678A15FEF4C6D58C2101212BA4C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__41_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE7F5CE7780F26678A15FEF4C6D58C2101212BA4C_StaticFields, ___U3CU3E9__41_0_1)); }
	inline Predicate_1_t316C1C65C60519BA48CD9A5C9EEAC4E6B166DE1B * get_U3CU3E9__41_0_1() const { return ___U3CU3E9__41_0_1; }
	inline Predicate_1_t316C1C65C60519BA48CD9A5C9EEAC4E6B166DE1B ** get_address_of_U3CU3E9__41_0_1() { return &___U3CU3E9__41_0_1; }
	inline void set_U3CU3E9__41_0_1(Predicate_1_t316C1C65C60519BA48CD9A5C9EEAC4E6B166DE1B * value)
	{
		___U3CU3E9__41_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__41_0_1), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.UniversalRenderPipeline/<>c
struct U3CU3Ec_t455C8088007063E0848091BFA6C351BACBE76DE7  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t455C8088007063E0848091BFA6C351BACBE76DE7_StaticFields
{
public:
	// UnityEngine.Rendering.Universal.UniversalRenderPipeline/<>c UnityEngine.Rendering.Universal.UniversalRenderPipeline/<>c::<>9
	U3CU3Ec_t455C8088007063E0848091BFA6C351BACBE76DE7 * ___U3CU3E9_0;
	// System.Comparison`1<UnityEngine.Camera> UnityEngine.Rendering.Universal.UniversalRenderPipeline/<>c::<>9__16_0
	Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15 * ___U3CU3E9__16_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t455C8088007063E0848091BFA6C351BACBE76DE7_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t455C8088007063E0848091BFA6C351BACBE76DE7 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t455C8088007063E0848091BFA6C351BACBE76DE7 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t455C8088007063E0848091BFA6C351BACBE76DE7 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__16_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t455C8088007063E0848091BFA6C351BACBE76DE7_StaticFields, ___U3CU3E9__16_0_1)); }
	inline Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15 * get_U3CU3E9__16_0_1() const { return ___U3CU3E9__16_0_1; }
	inline Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15 ** get_address_of_U3CU3E9__16_0_1() { return &___U3CU3E9__16_0_1; }
	inline void set_U3CU3E9__16_0_1(Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15 * value)
	{
		___U3CU3E9__16_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__16_0_1), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling
struct Profiling_t39C0DC7692E61CE063CD6F20CCCC7C5638435E09  : public RuntimeObject
{
public:

public:
};

struct Profiling_t39C0DC7692E61CE063CD6F20CCCC7C5638435E09_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Rendering.ProfilingSampler> UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling::s_HashSamplerCache
	Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738 * ___s_HashSamplerCache_0;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling::unknownSampler
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___unknownSampler_1;

public:
	inline static int32_t get_offset_of_s_HashSamplerCache_0() { return static_cast<int32_t>(offsetof(Profiling_t39C0DC7692E61CE063CD6F20CCCC7C5638435E09_StaticFields, ___s_HashSamplerCache_0)); }
	inline Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738 * get_s_HashSamplerCache_0() const { return ___s_HashSamplerCache_0; }
	inline Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738 ** get_address_of_s_HashSamplerCache_0() { return &___s_HashSamplerCache_0; }
	inline void set_s_HashSamplerCache_0(Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738 * value)
	{
		___s_HashSamplerCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_HashSamplerCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_unknownSampler_1() { return static_cast<int32_t>(offsetof(Profiling_t39C0DC7692E61CE063CD6F20CCCC7C5638435E09_StaticFields, ___unknownSampler_1)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_unknownSampler_1() const { return ___unknownSampler_1; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_unknownSampler_1() { return &___unknownSampler_1; }
	inline void set_unknownSampler_1(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___unknownSampler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unknownSampler_1), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/MaterialResources
struct MaterialResources_tCF43A6C5DD1D40B13BA318B673BF24E0EE8244B9  : public RuntimeObject
{
public:
	// UnityEngine.Material UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/MaterialResources::lit
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___lit_0;
	// UnityEngine.Material UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/MaterialResources::particleLit
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___particleLit_1;
	// UnityEngine.Material UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/MaterialResources::terrainLit
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___terrainLit_2;

public:
	inline static int32_t get_offset_of_lit_0() { return static_cast<int32_t>(offsetof(MaterialResources_tCF43A6C5DD1D40B13BA318B673BF24E0EE8244B9, ___lit_0)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_lit_0() const { return ___lit_0; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_lit_0() { return &___lit_0; }
	inline void set_lit_0(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___lit_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lit_0), (void*)value);
	}

	inline static int32_t get_offset_of_particleLit_1() { return static_cast<int32_t>(offsetof(MaterialResources_tCF43A6C5DD1D40B13BA318B673BF24E0EE8244B9, ___particleLit_1)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_particleLit_1() const { return ___particleLit_1; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_particleLit_1() { return &___particleLit_1; }
	inline void set_particleLit_1(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___particleLit_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___particleLit_1), (void*)value);
	}

	inline static int32_t get_offset_of_terrainLit_2() { return static_cast<int32_t>(offsetof(MaterialResources_tCF43A6C5DD1D40B13BA318B673BF24E0EE8244B9, ___terrainLit_2)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_terrainLit_2() const { return ___terrainLit_2; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_terrainLit_2() { return &___terrainLit_2; }
	inline void set_terrainLit_2(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___terrainLit_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___terrainLit_2), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/ShaderResources
struct ShaderResources_t27CE230476CFEDB08B4B6B2F246CD4949F5CF9C5  : public RuntimeObject
{
public:
	// UnityEngine.Shader UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/ShaderResources::autodeskInteractivePS
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___autodeskInteractivePS_0;
	// UnityEngine.Shader UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/ShaderResources::autodeskInteractiveTransparentPS
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___autodeskInteractiveTransparentPS_1;
	// UnityEngine.Shader UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/ShaderResources::autodeskInteractiveMaskedPS
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___autodeskInteractiveMaskedPS_2;
	// UnityEngine.Shader UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/ShaderResources::terrainDetailLitPS
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___terrainDetailLitPS_3;
	// UnityEngine.Shader UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/ShaderResources::terrainDetailGrassPS
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___terrainDetailGrassPS_4;
	// UnityEngine.Shader UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/ShaderResources::terrainDetailGrassBillboardPS
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___terrainDetailGrassBillboardPS_5;
	// UnityEngine.Shader UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/ShaderResources::defaultSpeedTree7PS
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___defaultSpeedTree7PS_6;
	// UnityEngine.Shader UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/ShaderResources::defaultSpeedTree8PS
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___defaultSpeedTree8PS_7;

public:
	inline static int32_t get_offset_of_autodeskInteractivePS_0() { return static_cast<int32_t>(offsetof(ShaderResources_t27CE230476CFEDB08B4B6B2F246CD4949F5CF9C5, ___autodeskInteractivePS_0)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_autodeskInteractivePS_0() const { return ___autodeskInteractivePS_0; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_autodeskInteractivePS_0() { return &___autodeskInteractivePS_0; }
	inline void set_autodeskInteractivePS_0(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___autodeskInteractivePS_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___autodeskInteractivePS_0), (void*)value);
	}

	inline static int32_t get_offset_of_autodeskInteractiveTransparentPS_1() { return static_cast<int32_t>(offsetof(ShaderResources_t27CE230476CFEDB08B4B6B2F246CD4949F5CF9C5, ___autodeskInteractiveTransparentPS_1)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_autodeskInteractiveTransparentPS_1() const { return ___autodeskInteractiveTransparentPS_1; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_autodeskInteractiveTransparentPS_1() { return &___autodeskInteractiveTransparentPS_1; }
	inline void set_autodeskInteractiveTransparentPS_1(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___autodeskInteractiveTransparentPS_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___autodeskInteractiveTransparentPS_1), (void*)value);
	}

	inline static int32_t get_offset_of_autodeskInteractiveMaskedPS_2() { return static_cast<int32_t>(offsetof(ShaderResources_t27CE230476CFEDB08B4B6B2F246CD4949F5CF9C5, ___autodeskInteractiveMaskedPS_2)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_autodeskInteractiveMaskedPS_2() const { return ___autodeskInteractiveMaskedPS_2; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_autodeskInteractiveMaskedPS_2() { return &___autodeskInteractiveMaskedPS_2; }
	inline void set_autodeskInteractiveMaskedPS_2(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___autodeskInteractiveMaskedPS_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___autodeskInteractiveMaskedPS_2), (void*)value);
	}

	inline static int32_t get_offset_of_terrainDetailLitPS_3() { return static_cast<int32_t>(offsetof(ShaderResources_t27CE230476CFEDB08B4B6B2F246CD4949F5CF9C5, ___terrainDetailLitPS_3)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_terrainDetailLitPS_3() const { return ___terrainDetailLitPS_3; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_terrainDetailLitPS_3() { return &___terrainDetailLitPS_3; }
	inline void set_terrainDetailLitPS_3(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___terrainDetailLitPS_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___terrainDetailLitPS_3), (void*)value);
	}

	inline static int32_t get_offset_of_terrainDetailGrassPS_4() { return static_cast<int32_t>(offsetof(ShaderResources_t27CE230476CFEDB08B4B6B2F246CD4949F5CF9C5, ___terrainDetailGrassPS_4)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_terrainDetailGrassPS_4() const { return ___terrainDetailGrassPS_4; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_terrainDetailGrassPS_4() { return &___terrainDetailGrassPS_4; }
	inline void set_terrainDetailGrassPS_4(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___terrainDetailGrassPS_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___terrainDetailGrassPS_4), (void*)value);
	}

	inline static int32_t get_offset_of_terrainDetailGrassBillboardPS_5() { return static_cast<int32_t>(offsetof(ShaderResources_t27CE230476CFEDB08B4B6B2F246CD4949F5CF9C5, ___terrainDetailGrassBillboardPS_5)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_terrainDetailGrassBillboardPS_5() const { return ___terrainDetailGrassBillboardPS_5; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_terrainDetailGrassBillboardPS_5() { return &___terrainDetailGrassBillboardPS_5; }
	inline void set_terrainDetailGrassBillboardPS_5(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___terrainDetailGrassBillboardPS_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___terrainDetailGrassBillboardPS_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultSpeedTree7PS_6() { return static_cast<int32_t>(offsetof(ShaderResources_t27CE230476CFEDB08B4B6B2F246CD4949F5CF9C5, ___defaultSpeedTree7PS_6)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_defaultSpeedTree7PS_6() const { return ___defaultSpeedTree7PS_6; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_defaultSpeedTree7PS_6() { return &___defaultSpeedTree7PS_6; }
	inline void set_defaultSpeedTree7PS_6(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___defaultSpeedTree7PS_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultSpeedTree7PS_6), (void*)value);
	}

	inline static int32_t get_offset_of_defaultSpeedTree8PS_7() { return static_cast<int32_t>(offsetof(ShaderResources_t27CE230476CFEDB08B4B6B2F246CD4949F5CF9C5, ___defaultSpeedTree8PS_7)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_defaultSpeedTree8PS_7() const { return ___defaultSpeedTree8PS_7; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_defaultSpeedTree8PS_7() { return &___defaultSpeedTree8PS_7; }
	inline void set_defaultSpeedTree8PS_7(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___defaultSpeedTree8PS_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultSpeedTree8PS_7), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.XRSystem/XRShaderIDs
struct XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB  : public RuntimeObject
{
public:

public:
};

struct XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_StaticFields
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.XRSystem/XRShaderIDs::_SourceTexArraySlice
	int32_t ____SourceTexArraySlice_0;
	// System.Int32 UnityEngine.Rendering.Universal.XRSystem/XRShaderIDs::_SRGBRead
	int32_t ____SRGBRead_1;
	// System.Int32 UnityEngine.Rendering.Universal.XRSystem/XRShaderIDs::_SRGBWrite
	int32_t ____SRGBWrite_2;

public:
	inline static int32_t get_offset_of__SourceTexArraySlice_0() { return static_cast<int32_t>(offsetof(XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_StaticFields, ____SourceTexArraySlice_0)); }
	inline int32_t get__SourceTexArraySlice_0() const { return ____SourceTexArraySlice_0; }
	inline int32_t* get_address_of__SourceTexArraySlice_0() { return &____SourceTexArraySlice_0; }
	inline void set__SourceTexArraySlice_0(int32_t value)
	{
		____SourceTexArraySlice_0 = value;
	}

	inline static int32_t get_offset_of__SRGBRead_1() { return static_cast<int32_t>(offsetof(XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_StaticFields, ____SRGBRead_1)); }
	inline int32_t get__SRGBRead_1() const { return ____SRGBRead_1; }
	inline int32_t* get_address_of__SRGBRead_1() { return &____SRGBRead_1; }
	inline void set__SRGBRead_1(int32_t value)
	{
		____SRGBRead_1 = value;
	}

	inline static int32_t get_offset_of__SRGBWrite_2() { return static_cast<int32_t>(offsetof(XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_StaticFields, ____SRGBWrite_2)); }
	inline int32_t get__SRGBWrite_2() const { return ____SRGBWrite_2; }
	inline int32_t* get_address_of__SRGBWrite_2() { return &____SRGBWrite_2; }
	inline void set__SRGBWrite_2(int32_t value)
	{
		____SRGBWrite_2 = value;
	}
};


// UnityEngine.Rendering.Universal.XRSystemData/ShaderResources
struct ShaderResources_tD419B97943EFC871C08C6465BFB3F34ED72CBBB6  : public RuntimeObject
{
public:
	// UnityEngine.Shader UnityEngine.Rendering.Universal.XRSystemData/ShaderResources::xrOcclusionMeshPS
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___xrOcclusionMeshPS_0;
	// UnityEngine.Shader UnityEngine.Rendering.Universal.XRSystemData/ShaderResources::xrMirrorViewPS
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___xrMirrorViewPS_1;

public:
	inline static int32_t get_offset_of_xrOcclusionMeshPS_0() { return static_cast<int32_t>(offsetof(ShaderResources_tD419B97943EFC871C08C6465BFB3F34ED72CBBB6, ___xrOcclusionMeshPS_0)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_xrOcclusionMeshPS_0() const { return ___xrOcclusionMeshPS_0; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_xrOcclusionMeshPS_0() { return &___xrOcclusionMeshPS_0; }
	inline void set_xrOcclusionMeshPS_0(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___xrOcclusionMeshPS_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xrOcclusionMeshPS_0), (void*)value);
	}

	inline static int32_t get_offset_of_xrMirrorViewPS_1() { return static_cast<int32_t>(offsetof(ShaderResources_tD419B97943EFC871C08C6465BFB3F34ED72CBBB6, ___xrMirrorViewPS_1)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_xrMirrorViewPS_1() const { return ___xrMirrorViewPS_1; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_xrMirrorViewPS_1() { return &___xrMirrorViewPS_1; }
	inline void set_xrMirrorViewPS_1(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___xrMirrorViewPS_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xrMirrorViewPS_1), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.ScriptableRenderer/Profiling/RenderBlock
struct RenderBlock_tBEC3973B1449F9E894570A7B5A44D25B2017D62C  : public RuntimeObject
{
public:

public:
};

struct RenderBlock_tBEC3973B1449F9E894570A7B5A44D25B2017D62C_StaticFields
{
public:
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.ScriptableRenderer/Profiling/RenderBlock::beforeRendering
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___beforeRendering_1;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.ScriptableRenderer/Profiling/RenderBlock::mainRenderingOpaque
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___mainRenderingOpaque_2;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.ScriptableRenderer/Profiling/RenderBlock::mainRenderingTransparent
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___mainRenderingTransparent_3;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.ScriptableRenderer/Profiling/RenderBlock::afterRendering
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___afterRendering_4;

public:
	inline static int32_t get_offset_of_beforeRendering_1() { return static_cast<int32_t>(offsetof(RenderBlock_tBEC3973B1449F9E894570A7B5A44D25B2017D62C_StaticFields, ___beforeRendering_1)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_beforeRendering_1() const { return ___beforeRendering_1; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_beforeRendering_1() { return &___beforeRendering_1; }
	inline void set_beforeRendering_1(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___beforeRendering_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___beforeRendering_1), (void*)value);
	}

	inline static int32_t get_offset_of_mainRenderingOpaque_2() { return static_cast<int32_t>(offsetof(RenderBlock_tBEC3973B1449F9E894570A7B5A44D25B2017D62C_StaticFields, ___mainRenderingOpaque_2)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_mainRenderingOpaque_2() const { return ___mainRenderingOpaque_2; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_mainRenderingOpaque_2() { return &___mainRenderingOpaque_2; }
	inline void set_mainRenderingOpaque_2(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___mainRenderingOpaque_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainRenderingOpaque_2), (void*)value);
	}

	inline static int32_t get_offset_of_mainRenderingTransparent_3() { return static_cast<int32_t>(offsetof(RenderBlock_tBEC3973B1449F9E894570A7B5A44D25B2017D62C_StaticFields, ___mainRenderingTransparent_3)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_mainRenderingTransparent_3() const { return ___mainRenderingTransparent_3; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_mainRenderingTransparent_3() { return &___mainRenderingTransparent_3; }
	inline void set_mainRenderingTransparent_3(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___mainRenderingTransparent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainRenderingTransparent_3), (void*)value);
	}

	inline static int32_t get_offset_of_afterRendering_4() { return static_cast<int32_t>(offsetof(RenderBlock_tBEC3973B1449F9E894570A7B5A44D25B2017D62C_StaticFields, ___afterRendering_4)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_afterRendering_4() const { return ___afterRendering_4; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_afterRendering_4() { return &___afterRendering_4; }
	inline void set_afterRendering_4(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___afterRendering_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___afterRendering_4), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.ScriptableRenderer/Profiling/RenderPass
struct RenderPass_t654BE67EC7D412BFA61B9B60A7679B2C59A0BDB9  : public RuntimeObject
{
public:

public:
};

struct RenderPass_t654BE67EC7D412BFA61B9B60A7679B2C59A0BDB9_StaticFields
{
public:
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.ScriptableRenderer/Profiling/RenderPass::configure
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___configure_1;

public:
	inline static int32_t get_offset_of_configure_1() { return static_cast<int32_t>(offsetof(RenderPass_t654BE67EC7D412BFA61B9B60A7679B2C59A0BDB9_StaticFields, ___configure_1)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_configure_1() const { return ___configure_1; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_configure_1() { return &___configure_1; }
	inline void set_configure_1(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___configure_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___configure_1), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline
struct Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6  : public RuntimeObject
{
public:

public:
};

struct Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields
{
public:
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline::beginFrameRendering
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___beginFrameRendering_0;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline::endFrameRendering
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___endFrameRendering_1;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline::beginCameraRendering
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___beginCameraRendering_2;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline::endCameraRendering
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___endCameraRendering_3;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline::initializeCameraData
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___initializeCameraData_5;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline::initializeStackedCameraData
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___initializeStackedCameraData_6;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline::initializeAdditionalCameraData
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___initializeAdditionalCameraData_7;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline::initializeRenderingData
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___initializeRenderingData_8;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline::initializeShadowData
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___initializeShadowData_9;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline::initializeLightData
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___initializeLightData_10;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline::getPerObjectLightFlags
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___getPerObjectLightFlags_11;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline::getMainLightIndex
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___getMainLightIndex_12;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline::setupPerFrameShaderConstants
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___setupPerFrameShaderConstants_13;

public:
	inline static int32_t get_offset_of_beginFrameRendering_0() { return static_cast<int32_t>(offsetof(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields, ___beginFrameRendering_0)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_beginFrameRendering_0() const { return ___beginFrameRendering_0; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_beginFrameRendering_0() { return &___beginFrameRendering_0; }
	inline void set_beginFrameRendering_0(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___beginFrameRendering_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___beginFrameRendering_0), (void*)value);
	}

	inline static int32_t get_offset_of_endFrameRendering_1() { return static_cast<int32_t>(offsetof(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields, ___endFrameRendering_1)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_endFrameRendering_1() const { return ___endFrameRendering_1; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_endFrameRendering_1() { return &___endFrameRendering_1; }
	inline void set_endFrameRendering_1(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___endFrameRendering_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endFrameRendering_1), (void*)value);
	}

	inline static int32_t get_offset_of_beginCameraRendering_2() { return static_cast<int32_t>(offsetof(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields, ___beginCameraRendering_2)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_beginCameraRendering_2() const { return ___beginCameraRendering_2; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_beginCameraRendering_2() { return &___beginCameraRendering_2; }
	inline void set_beginCameraRendering_2(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___beginCameraRendering_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___beginCameraRendering_2), (void*)value);
	}

	inline static int32_t get_offset_of_endCameraRendering_3() { return static_cast<int32_t>(offsetof(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields, ___endCameraRendering_3)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_endCameraRendering_3() const { return ___endCameraRendering_3; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_endCameraRendering_3() { return &___endCameraRendering_3; }
	inline void set_endCameraRendering_3(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___endCameraRendering_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endCameraRendering_3), (void*)value);
	}

	inline static int32_t get_offset_of_initializeCameraData_5() { return static_cast<int32_t>(offsetof(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields, ___initializeCameraData_5)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_initializeCameraData_5() const { return ___initializeCameraData_5; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_initializeCameraData_5() { return &___initializeCameraData_5; }
	inline void set_initializeCameraData_5(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___initializeCameraData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initializeCameraData_5), (void*)value);
	}

	inline static int32_t get_offset_of_initializeStackedCameraData_6() { return static_cast<int32_t>(offsetof(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields, ___initializeStackedCameraData_6)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_initializeStackedCameraData_6() const { return ___initializeStackedCameraData_6; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_initializeStackedCameraData_6() { return &___initializeStackedCameraData_6; }
	inline void set_initializeStackedCameraData_6(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___initializeStackedCameraData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initializeStackedCameraData_6), (void*)value);
	}

	inline static int32_t get_offset_of_initializeAdditionalCameraData_7() { return static_cast<int32_t>(offsetof(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields, ___initializeAdditionalCameraData_7)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_initializeAdditionalCameraData_7() const { return ___initializeAdditionalCameraData_7; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_initializeAdditionalCameraData_7() { return &___initializeAdditionalCameraData_7; }
	inline void set_initializeAdditionalCameraData_7(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___initializeAdditionalCameraData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initializeAdditionalCameraData_7), (void*)value);
	}

	inline static int32_t get_offset_of_initializeRenderingData_8() { return static_cast<int32_t>(offsetof(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields, ___initializeRenderingData_8)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_initializeRenderingData_8() const { return ___initializeRenderingData_8; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_initializeRenderingData_8() { return &___initializeRenderingData_8; }
	inline void set_initializeRenderingData_8(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___initializeRenderingData_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initializeRenderingData_8), (void*)value);
	}

	inline static int32_t get_offset_of_initializeShadowData_9() { return static_cast<int32_t>(offsetof(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields, ___initializeShadowData_9)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_initializeShadowData_9() const { return ___initializeShadowData_9; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_initializeShadowData_9() { return &___initializeShadowData_9; }
	inline void set_initializeShadowData_9(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___initializeShadowData_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initializeShadowData_9), (void*)value);
	}

	inline static int32_t get_offset_of_initializeLightData_10() { return static_cast<int32_t>(offsetof(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields, ___initializeLightData_10)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_initializeLightData_10() const { return ___initializeLightData_10; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_initializeLightData_10() { return &___initializeLightData_10; }
	inline void set_initializeLightData_10(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___initializeLightData_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initializeLightData_10), (void*)value);
	}

	inline static int32_t get_offset_of_getPerObjectLightFlags_11() { return static_cast<int32_t>(offsetof(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields, ___getPerObjectLightFlags_11)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_getPerObjectLightFlags_11() const { return ___getPerObjectLightFlags_11; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_getPerObjectLightFlags_11() { return &___getPerObjectLightFlags_11; }
	inline void set_getPerObjectLightFlags_11(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___getPerObjectLightFlags_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getPerObjectLightFlags_11), (void*)value);
	}

	inline static int32_t get_offset_of_getMainLightIndex_12() { return static_cast<int32_t>(offsetof(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields, ___getMainLightIndex_12)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_getMainLightIndex_12() const { return ___getMainLightIndex_12; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_getMainLightIndex_12() { return &___getMainLightIndex_12; }
	inline void set_getMainLightIndex_12(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___getMainLightIndex_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getMainLightIndex_12), (void*)value);
	}

	inline static int32_t get_offset_of_setupPerFrameShaderConstants_13() { return static_cast<int32_t>(offsetof(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields, ___setupPerFrameShaderConstants_13)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_setupPerFrameShaderConstants_13() const { return ___setupPerFrameShaderConstants_13; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_setupPerFrameShaderConstants_13() { return &___setupPerFrameShaderConstants_13; }
	inline void set_setupPerFrameShaderConstants_13(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___setupPerFrameShaderConstants_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setupPerFrameShaderConstants_13), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline/Context
struct Context_t8BECE9FB3DB6EE3DFC66BAE423F28A0A468763AE  : public RuntimeObject
{
public:

public:
};

struct Context_t8BECE9FB3DB6EE3DFC66BAE423F28A0A468763AE_StaticFields
{
public:
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline/Context::submit
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___submit_1;

public:
	inline static int32_t get_offset_of_submit_1() { return static_cast<int32_t>(offsetof(Context_t8BECE9FB3DB6EE3DFC66BAE423F28A0A468763AE_StaticFields, ___submit_1)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_submit_1() const { return ___submit_1; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_submit_1() { return &___submit_1; }
	inline void set_submit_1(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___submit_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___submit_1), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline/Renderer
struct Renderer_t196605490C564E48831EDFEA040CF712FFDBE135  : public RuntimeObject
{
public:

public:
};

struct Renderer_t196605490C564E48831EDFEA040CF712FFDBE135_StaticFields
{
public:
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline/Renderer::setupCullingParameters
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___setupCullingParameters_1;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline/Renderer::setup
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___setup_2;

public:
	inline static int32_t get_offset_of_setupCullingParameters_1() { return static_cast<int32_t>(offsetof(Renderer_t196605490C564E48831EDFEA040CF712FFDBE135_StaticFields, ___setupCullingParameters_1)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_setupCullingParameters_1() const { return ___setupCullingParameters_1; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_setupCullingParameters_1() { return &___setupCullingParameters_1; }
	inline void set_setupCullingParameters_1(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___setupCullingParameters_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setupCullingParameters_1), (void*)value);
	}

	inline static int32_t get_offset_of_setup_2() { return static_cast<int32_t>(offsetof(Renderer_t196605490C564E48831EDFEA040CF712FFDBE135_StaticFields, ___setup_2)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_setup_2() const { return ___setup_2; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_setup_2() { return &___setup_2; }
	inline void set_setup_2(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___setup_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setup_2), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline/XR
struct XR_tD069CFDA1F46495AC33865862CDA4DE58C5F9773  : public RuntimeObject
{
public:

public:
};

struct XR_tD069CFDA1F46495AC33865862CDA4DE58C5F9773_StaticFields
{
public:
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline/XR::mirrorView
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___mirrorView_0;

public:
	inline static int32_t get_offset_of_mirrorView_0() { return static_cast<int32_t>(offsetof(XR_tD069CFDA1F46495AC33865862CDA4DE58C5F9773_StaticFields, ___mirrorView_0)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_mirrorView_0() const { return ___mirrorView_0; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_mirrorView_0() { return &___mirrorView_0; }
	inline void set_mirrorView_0(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___mirrorView_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mirrorView_0), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Rendering.CoreCameraValues
struct CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94 
{
public:
	// System.Int32 UnityEngine.Rendering.CoreCameraValues::filterMode
	int32_t ___filterMode_0;
	// System.UInt32 UnityEngine.Rendering.CoreCameraValues::cullingMask
	uint32_t ___cullingMask_1;
	// System.Int32 UnityEngine.Rendering.CoreCameraValues::instanceID
	int32_t ___instanceID_2;

public:
	inline static int32_t get_offset_of_filterMode_0() { return static_cast<int32_t>(offsetof(CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94, ___filterMode_0)); }
	inline int32_t get_filterMode_0() const { return ___filterMode_0; }
	inline int32_t* get_address_of_filterMode_0() { return &___filterMode_0; }
	inline void set_filterMode_0(int32_t value)
	{
		___filterMode_0 = value;
	}

	inline static int32_t get_offset_of_cullingMask_1() { return static_cast<int32_t>(offsetof(CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94, ___cullingMask_1)); }
	inline uint32_t get_cullingMask_1() const { return ___cullingMask_1; }
	inline uint32_t* get_address_of_cullingMask_1() { return &___cullingMask_1; }
	inline void set_cullingMask_1(uint32_t value)
	{
		___cullingMask_1 = value;
	}

	inline static int32_t get_offset_of_instanceID_2() { return static_cast<int32_t>(offsetof(CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94, ___instanceID_2)); }
	inline int32_t get_instanceID_2() const { return ___instanceID_2; }
	inline int32_t* get_address_of_instanceID_2() { return &___instanceID_2; }
	inline void set_instanceID_2(int32_t value)
	{
		___instanceID_2 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 
{
public:
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;

public:
	inline static int32_t get_offset_of_m_red_0() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_red_0)); }
	inline float get_m_red_0() const { return ___m_red_0; }
	inline float* get_address_of_m_red_0() { return &___m_red_0; }
	inline void set_m_red_0(float value)
	{
		___m_red_0 = value;
	}

	inline static int32_t get_offset_of_m_green_1() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_green_1)); }
	inline float get_m_green_1() const { return ___m_green_1; }
	inline float* get_address_of_m_green_1() { return &___m_green_1; }
	inline void set_m_green_1(float value)
	{
		___m_green_1 = value;
	}

	inline static int32_t get_offset_of_m_blue_2() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_blue_2)); }
	inline float get_m_blue_2() const { return ___m_blue_2; }
	inline float* get_address_of_m_blue_2() { return &___m_blue_2; }
	inline void set_m_blue_2(float value)
	{
		___m_blue_2 = value;
	}

	inline static int32_t get_offset_of_m_intensity_3() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_intensity_3)); }
	inline float get_m_intensity_3() const { return ___m_intensity_3; }
	inline float* get_address_of_m_intensity_3() { return &___m_intensity_3; }
	inline void set_m_intensity_3(float value)
	{
		___m_intensity_3 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3
struct Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1 
{
public:
	// System.Single UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3::X
	float ___X_1;
	// System.Single UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3::Y
	float ___Y_2;
	// System.Single UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3::Z
	float ___Z_3;

public:
	inline static int32_t get_offset_of_X_1() { return static_cast<int32_t>(offsetof(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1, ___X_1)); }
	inline float get_X_1() const { return ___X_1; }
	inline float* get_address_of_X_1() { return &___X_1; }
	inline void set_X_1(float value)
	{
		___X_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1, ___Y_2)); }
	inline float get_Y_2() const { return ___Y_2; }
	inline float* get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(float value)
	{
		___Y_2 = value;
	}

	inline static int32_t get_offset_of_Z_3() { return static_cast<int32_t>(offsetof(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1, ___Z_3)); }
	inline float get_Z_3() const { return ___Z_3; }
	inline float* get_address_of_Z_3() { return &___Z_3; }
	inline void set_Z_3(float value)
	{
		___Z_3 = value;
	}
};

struct Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1_StaticFields
{
public:
	// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3 UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3::Zero
	Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1_StaticFields, ___Zero_0)); }
	inline Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  get_Zero_0() const { return ___Zero_0; }
	inline Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  value)
	{
		___Zero_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Rendering.CameraProperties/<layerCullDistances>e__FixedBuffer
struct U3ClayerCullDistancesU3Ee__FixedBuffer_tE71C7AFD9D79A3B7182FA61420BBC853479CB82D 
{
public:
	union
	{
		struct
		{
			// System.Single UnityEngine.Rendering.CameraProperties/<layerCullDistances>e__FixedBuffer::FixedElementField
			float ___FixedElementField_0;
		};
		uint8_t U3ClayerCullDistancesU3Ee__FixedBuffer_tE71C7AFD9D79A3B7182FA61420BBC853479CB82D__padding[128];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3ClayerCullDistancesU3Ee__FixedBuffer_tE71C7AFD9D79A3B7182FA61420BBC853479CB82D, ___FixedElementField_0)); }
	inline float get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline float* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(float value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.Rendering.CameraProperties/<m_CameraCullPlanes>e__FixedBuffer
struct U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t59DEB93CDAC5F35F2FBBDE7FD1ACDEA5CBAE0715 
{
public:
	union
	{
		struct
		{
			// System.Byte UnityEngine.Rendering.CameraProperties/<m_CameraCullPlanes>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t59DEB93CDAC5F35F2FBBDE7FD1ACDEA5CBAE0715__padding[96];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t59DEB93CDAC5F35F2FBBDE7FD1ACDEA5CBAE0715, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.Rendering.CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer
struct U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_t27C8A3E160EA9662D45EE3054CAB0B1E6900FDE2 
{
public:
	union
	{
		struct
		{
			// System.Byte UnityEngine.Rendering.CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_t27C8A3E160EA9662D45EE3054CAB0B1E6900FDE2__padding[96];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_t27C8A3E160EA9662D45EE3054CAB0B1E6900FDE2, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.Rendering.ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer
struct U3Cm_CullingPlanesU3Ee__FixedBuffer_t68E97CADA0C5FB08E8F025822CDE2CC1B8CC1490 
{
public:
	union
	{
		struct
		{
			// System.Byte UnityEngine.Rendering.ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_CullingPlanesU3Ee__FixedBuffer_t68E97CADA0C5FB08E8F025822CDE2CC1B8CC1490__padding[160];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3Cm_CullingPlanesU3Ee__FixedBuffer_t68E97CADA0C5FB08E8F025822CDE2CC1B8CC1490, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer
struct U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_t5B7FC7CD51D4855019C575D8B77A38581146E884 
{
public:
	union
	{
		struct
		{
			// System.Single UnityEngine.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer::FixedElementField
			float ___FixedElementField_0;
		};
		uint8_t U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_t5B7FC7CD51D4855019C575D8B77A38581146E884__padding[128];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_t5B7FC7CD51D4855019C575D8B77A38581146E884, ___FixedElementField_0)); }
	inline float get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline float* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(float value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.Rendering.Universal.XRSystem/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_t00B3B71B1E4591B8DC94C71708DACC81C7FF8400 
{
public:
	// UnityEngine.Camera UnityEngine.Rendering.Universal.XRSystem/<>c__DisplayClass26_0::camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera_0;

public:
	inline static int32_t get_offset_of_camera_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass26_0_t00B3B71B1E4591B8DC94C71708DACC81C7FF8400, ___camera_0)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_camera_0() const { return ___camera_0; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_camera_0() { return &___camera_0; }
	inline void set_camera_0(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___camera_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camera_0), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks/BlockRange
struct BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks/BlockRange::m_Current
	int32_t ___m_Current_0;
	// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks/BlockRange::m_End
	int32_t ___m_End_1;

public:
	inline static int32_t get_offset_of_m_Current_0() { return static_cast<int32_t>(offsetof(BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329, ___m_Current_0)); }
	inline int32_t get_m_Current_0() const { return ___m_Current_0; }
	inline int32_t* get_address_of_m_Current_0() { return &___m_Current_0; }
	inline void set_m_Current_0(int32_t value)
	{
		___m_Current_0 = value;
	}

	inline static int32_t get_offset_of_m_End_1() { return static_cast<int32_t>(offsetof(BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329, ___m_End_1)); }
	inline int32_t get_m_End_1() const { return ___m_End_1; }
	inline int32_t* get_address_of_m_End_1() { return &___m_End_1; }
	inline void set_m_End_1(int32_t value)
	{
		___m_End_1 = value;
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.BuiltinRenderTextureType
struct BuiltinRenderTextureType_t89FFB8A7C9095150BCA40E573A73664CC37F023A 
{
public:
	// System.Int32 UnityEngine.Rendering.BuiltinRenderTextureType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BuiltinRenderTextureType_t89FFB8A7C9095150BCA40E573A73664CC37F023A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.CameraProperties
struct CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A 
{
public:
	// UnityEngine.Rect UnityEngine.Rendering.CameraProperties::screenRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___screenRect_0;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::viewDir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___viewDir_1;
	// System.Single UnityEngine.Rendering.CameraProperties::projectionNear
	float ___projectionNear_2;
	// System.Single UnityEngine.Rendering.CameraProperties::projectionFar
	float ___projectionFar_3;
	// System.Single UnityEngine.Rendering.CameraProperties::cameraNear
	float ___cameraNear_4;
	// System.Single UnityEngine.Rendering.CameraProperties::cameraFar
	float ___cameraFar_5;
	// System.Single UnityEngine.Rendering.CameraProperties::cameraAspect
	float ___cameraAspect_6;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::cameraToWorld
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___cameraToWorld_7;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::actualWorldToClip
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___actualWorldToClip_8;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::cameraClipToWorld
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___cameraClipToWorld_9;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::cameraWorldToClip
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___cameraWorldToClip_10;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::implicitProjection
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___implicitProjection_11;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::stereoWorldToClipLeft
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___stereoWorldToClipLeft_12;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::stereoWorldToClipRight
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___stereoWorldToClipRight_13;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::worldToCamera
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___worldToCamera_14;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::up
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___up_15;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::right
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___right_16;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::transformDirection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___transformDirection_17;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::cameraEuler
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cameraEuler_18;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_19;
	// System.Single UnityEngine.Rendering.CameraProperties::farPlaneWorldSpaceLength
	float ___farPlaneWorldSpaceLength_20;
	// System.UInt32 UnityEngine.Rendering.CameraProperties::rendererCount
	uint32_t ___rendererCount_21;
	// UnityEngine.Rendering.CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer UnityEngine.Rendering.CameraProperties::m_ShadowCullPlanes
	U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_t27C8A3E160EA9662D45EE3054CAB0B1E6900FDE2  ___m_ShadowCullPlanes_22;
	// UnityEngine.Rendering.CameraProperties/<m_CameraCullPlanes>e__FixedBuffer UnityEngine.Rendering.CameraProperties::m_CameraCullPlanes
	U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t59DEB93CDAC5F35F2FBBDE7FD1ACDEA5CBAE0715  ___m_CameraCullPlanes_23;
	// System.Single UnityEngine.Rendering.CameraProperties::baseFarDistance
	float ___baseFarDistance_24;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::shadowCullCenter
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___shadowCullCenter_25;
	// UnityEngine.Rendering.CameraProperties/<layerCullDistances>e__FixedBuffer UnityEngine.Rendering.CameraProperties::layerCullDistances
	U3ClayerCullDistancesU3Ee__FixedBuffer_tE71C7AFD9D79A3B7182FA61420BBC853479CB82D  ___layerCullDistances_26;
	// System.Int32 UnityEngine.Rendering.CameraProperties::layerCullSpherical
	int32_t ___layerCullSpherical_27;
	// UnityEngine.Rendering.CoreCameraValues UnityEngine.Rendering.CameraProperties::coreCameraValues
	CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94  ___coreCameraValues_28;
	// System.UInt32 UnityEngine.Rendering.CameraProperties::cameraType
	uint32_t ___cameraType_29;
	// System.Int32 UnityEngine.Rendering.CameraProperties::projectionIsOblique
	int32_t ___projectionIsOblique_30;
	// System.Int32 UnityEngine.Rendering.CameraProperties::isImplicitProjectionMatrix
	int32_t ___isImplicitProjectionMatrix_31;

public:
	inline static int32_t get_offset_of_screenRect_0() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___screenRect_0)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_screenRect_0() const { return ___screenRect_0; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_screenRect_0() { return &___screenRect_0; }
	inline void set_screenRect_0(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___screenRect_0 = value;
	}

	inline static int32_t get_offset_of_viewDir_1() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___viewDir_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_viewDir_1() const { return ___viewDir_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_viewDir_1() { return &___viewDir_1; }
	inline void set_viewDir_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___viewDir_1 = value;
	}

	inline static int32_t get_offset_of_projectionNear_2() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___projectionNear_2)); }
	inline float get_projectionNear_2() const { return ___projectionNear_2; }
	inline float* get_address_of_projectionNear_2() { return &___projectionNear_2; }
	inline void set_projectionNear_2(float value)
	{
		___projectionNear_2 = value;
	}

	inline static int32_t get_offset_of_projectionFar_3() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___projectionFar_3)); }
	inline float get_projectionFar_3() const { return ___projectionFar_3; }
	inline float* get_address_of_projectionFar_3() { return &___projectionFar_3; }
	inline void set_projectionFar_3(float value)
	{
		___projectionFar_3 = value;
	}

	inline static int32_t get_offset_of_cameraNear_4() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraNear_4)); }
	inline float get_cameraNear_4() const { return ___cameraNear_4; }
	inline float* get_address_of_cameraNear_4() { return &___cameraNear_4; }
	inline void set_cameraNear_4(float value)
	{
		___cameraNear_4 = value;
	}

	inline static int32_t get_offset_of_cameraFar_5() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraFar_5)); }
	inline float get_cameraFar_5() const { return ___cameraFar_5; }
	inline float* get_address_of_cameraFar_5() { return &___cameraFar_5; }
	inline void set_cameraFar_5(float value)
	{
		___cameraFar_5 = value;
	}

	inline static int32_t get_offset_of_cameraAspect_6() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraAspect_6)); }
	inline float get_cameraAspect_6() const { return ___cameraAspect_6; }
	inline float* get_address_of_cameraAspect_6() { return &___cameraAspect_6; }
	inline void set_cameraAspect_6(float value)
	{
		___cameraAspect_6 = value;
	}

	inline static int32_t get_offset_of_cameraToWorld_7() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraToWorld_7)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_cameraToWorld_7() const { return ___cameraToWorld_7; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_cameraToWorld_7() { return &___cameraToWorld_7; }
	inline void set_cameraToWorld_7(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___cameraToWorld_7 = value;
	}

	inline static int32_t get_offset_of_actualWorldToClip_8() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___actualWorldToClip_8)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_actualWorldToClip_8() const { return ___actualWorldToClip_8; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_actualWorldToClip_8() { return &___actualWorldToClip_8; }
	inline void set_actualWorldToClip_8(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___actualWorldToClip_8 = value;
	}

	inline static int32_t get_offset_of_cameraClipToWorld_9() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraClipToWorld_9)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_cameraClipToWorld_9() const { return ___cameraClipToWorld_9; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_cameraClipToWorld_9() { return &___cameraClipToWorld_9; }
	inline void set_cameraClipToWorld_9(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___cameraClipToWorld_9 = value;
	}

	inline static int32_t get_offset_of_cameraWorldToClip_10() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraWorldToClip_10)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_cameraWorldToClip_10() const { return ___cameraWorldToClip_10; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_cameraWorldToClip_10() { return &___cameraWorldToClip_10; }
	inline void set_cameraWorldToClip_10(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___cameraWorldToClip_10 = value;
	}

	inline static int32_t get_offset_of_implicitProjection_11() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___implicitProjection_11)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_implicitProjection_11() const { return ___implicitProjection_11; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_implicitProjection_11() { return &___implicitProjection_11; }
	inline void set_implicitProjection_11(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___implicitProjection_11 = value;
	}

	inline static int32_t get_offset_of_stereoWorldToClipLeft_12() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___stereoWorldToClipLeft_12)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_stereoWorldToClipLeft_12() const { return ___stereoWorldToClipLeft_12; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_stereoWorldToClipLeft_12() { return &___stereoWorldToClipLeft_12; }
	inline void set_stereoWorldToClipLeft_12(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___stereoWorldToClipLeft_12 = value;
	}

	inline static int32_t get_offset_of_stereoWorldToClipRight_13() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___stereoWorldToClipRight_13)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_stereoWorldToClipRight_13() const { return ___stereoWorldToClipRight_13; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_stereoWorldToClipRight_13() { return &___stereoWorldToClipRight_13; }
	inline void set_stereoWorldToClipRight_13(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___stereoWorldToClipRight_13 = value;
	}

	inline static int32_t get_offset_of_worldToCamera_14() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___worldToCamera_14)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_worldToCamera_14() const { return ___worldToCamera_14; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_worldToCamera_14() { return &___worldToCamera_14; }
	inline void set_worldToCamera_14(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___worldToCamera_14 = value;
	}

	inline static int32_t get_offset_of_up_15() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___up_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_up_15() const { return ___up_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_up_15() { return &___up_15; }
	inline void set_up_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___up_15 = value;
	}

	inline static int32_t get_offset_of_right_16() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___right_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_right_16() const { return ___right_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_right_16() { return &___right_16; }
	inline void set_right_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___right_16 = value;
	}

	inline static int32_t get_offset_of_transformDirection_17() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___transformDirection_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_transformDirection_17() const { return ___transformDirection_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_transformDirection_17() { return &___transformDirection_17; }
	inline void set_transformDirection_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___transformDirection_17 = value;
	}

	inline static int32_t get_offset_of_cameraEuler_18() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraEuler_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_cameraEuler_18() const { return ___cameraEuler_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_cameraEuler_18() { return &___cameraEuler_18; }
	inline void set_cameraEuler_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___cameraEuler_18 = value;
	}

	inline static int32_t get_offset_of_velocity_19() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___velocity_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_19() const { return ___velocity_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_19() { return &___velocity_19; }
	inline void set_velocity_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_19 = value;
	}

	inline static int32_t get_offset_of_farPlaneWorldSpaceLength_20() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___farPlaneWorldSpaceLength_20)); }
	inline float get_farPlaneWorldSpaceLength_20() const { return ___farPlaneWorldSpaceLength_20; }
	inline float* get_address_of_farPlaneWorldSpaceLength_20() { return &___farPlaneWorldSpaceLength_20; }
	inline void set_farPlaneWorldSpaceLength_20(float value)
	{
		___farPlaneWorldSpaceLength_20 = value;
	}

	inline static int32_t get_offset_of_rendererCount_21() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___rendererCount_21)); }
	inline uint32_t get_rendererCount_21() const { return ___rendererCount_21; }
	inline uint32_t* get_address_of_rendererCount_21() { return &___rendererCount_21; }
	inline void set_rendererCount_21(uint32_t value)
	{
		___rendererCount_21 = value;
	}

	inline static int32_t get_offset_of_m_ShadowCullPlanes_22() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___m_ShadowCullPlanes_22)); }
	inline U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_t27C8A3E160EA9662D45EE3054CAB0B1E6900FDE2  get_m_ShadowCullPlanes_22() const { return ___m_ShadowCullPlanes_22; }
	inline U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_t27C8A3E160EA9662D45EE3054CAB0B1E6900FDE2 * get_address_of_m_ShadowCullPlanes_22() { return &___m_ShadowCullPlanes_22; }
	inline void set_m_ShadowCullPlanes_22(U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_t27C8A3E160EA9662D45EE3054CAB0B1E6900FDE2  value)
	{
		___m_ShadowCullPlanes_22 = value;
	}

	inline static int32_t get_offset_of_m_CameraCullPlanes_23() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___m_CameraCullPlanes_23)); }
	inline U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t59DEB93CDAC5F35F2FBBDE7FD1ACDEA5CBAE0715  get_m_CameraCullPlanes_23() const { return ___m_CameraCullPlanes_23; }
	inline U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t59DEB93CDAC5F35F2FBBDE7FD1ACDEA5CBAE0715 * get_address_of_m_CameraCullPlanes_23() { return &___m_CameraCullPlanes_23; }
	inline void set_m_CameraCullPlanes_23(U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t59DEB93CDAC5F35F2FBBDE7FD1ACDEA5CBAE0715  value)
	{
		___m_CameraCullPlanes_23 = value;
	}

	inline static int32_t get_offset_of_baseFarDistance_24() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___baseFarDistance_24)); }
	inline float get_baseFarDistance_24() const { return ___baseFarDistance_24; }
	inline float* get_address_of_baseFarDistance_24() { return &___baseFarDistance_24; }
	inline void set_baseFarDistance_24(float value)
	{
		___baseFarDistance_24 = value;
	}

	inline static int32_t get_offset_of_shadowCullCenter_25() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___shadowCullCenter_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_shadowCullCenter_25() const { return ___shadowCullCenter_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_shadowCullCenter_25() { return &___shadowCullCenter_25; }
	inline void set_shadowCullCenter_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___shadowCullCenter_25 = value;
	}

	inline static int32_t get_offset_of_layerCullDistances_26() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___layerCullDistances_26)); }
	inline U3ClayerCullDistancesU3Ee__FixedBuffer_tE71C7AFD9D79A3B7182FA61420BBC853479CB82D  get_layerCullDistances_26() const { return ___layerCullDistances_26; }
	inline U3ClayerCullDistancesU3Ee__FixedBuffer_tE71C7AFD9D79A3B7182FA61420BBC853479CB82D * get_address_of_layerCullDistances_26() { return &___layerCullDistances_26; }
	inline void set_layerCullDistances_26(U3ClayerCullDistancesU3Ee__FixedBuffer_tE71C7AFD9D79A3B7182FA61420BBC853479CB82D  value)
	{
		___layerCullDistances_26 = value;
	}

	inline static int32_t get_offset_of_layerCullSpherical_27() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___layerCullSpherical_27)); }
	inline int32_t get_layerCullSpherical_27() const { return ___layerCullSpherical_27; }
	inline int32_t* get_address_of_layerCullSpherical_27() { return &___layerCullSpherical_27; }
	inline void set_layerCullSpherical_27(int32_t value)
	{
		___layerCullSpherical_27 = value;
	}

	inline static int32_t get_offset_of_coreCameraValues_28() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___coreCameraValues_28)); }
	inline CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94  get_coreCameraValues_28() const { return ___coreCameraValues_28; }
	inline CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94 * get_address_of_coreCameraValues_28() { return &___coreCameraValues_28; }
	inline void set_coreCameraValues_28(CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94  value)
	{
		___coreCameraValues_28 = value;
	}

	inline static int32_t get_offset_of_cameraType_29() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraType_29)); }
	inline uint32_t get_cameraType_29() const { return ___cameraType_29; }
	inline uint32_t* get_address_of_cameraType_29() { return &___cameraType_29; }
	inline void set_cameraType_29(uint32_t value)
	{
		___cameraType_29 = value;
	}

	inline static int32_t get_offset_of_projectionIsOblique_30() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___projectionIsOblique_30)); }
	inline int32_t get_projectionIsOblique_30() const { return ___projectionIsOblique_30; }
	inline int32_t* get_address_of_projectionIsOblique_30() { return &___projectionIsOblique_30; }
	inline void set_projectionIsOblique_30(int32_t value)
	{
		___projectionIsOblique_30 = value;
	}

	inline static int32_t get_offset_of_isImplicitProjectionMatrix_31() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___isImplicitProjectionMatrix_31)); }
	inline int32_t get_isImplicitProjectionMatrix_31() const { return ___isImplicitProjectionMatrix_31; }
	inline int32_t* get_address_of_isImplicitProjectionMatrix_31() { return &___isImplicitProjectionMatrix_31; }
	inline void set_isImplicitProjectionMatrix_31(int32_t value)
	{
		___isImplicitProjectionMatrix_31 = value;
	}
};


// UnityEngine.Rendering.ClearFlag
struct ClearFlag_t2C4E7C8E97B0911D3F71CAE6FD5EAB9A33018532 
{
public:
	// System.Int32 UnityEngine.Rendering.ClearFlag::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClearFlag_t2C4E7C8E97B0911D3F71CAE6FD5EAB9A33018532, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex
struct ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 
{
public:
	// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3 UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex::Position
	Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  ___Position_0;
	// System.Object UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex::Data
	RuntimeObject * ___Data_1;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536, ___Position_0)); }
	inline Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  get_Position_0() const { return ___Position_0; }
	inline Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Data_1() { return static_cast<int32_t>(offsetof(ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536, ___Data_1)); }
	inline RuntimeObject * get_Data_1() const { return ___Data_1; }
	inline RuntimeObject ** get_address_of_Data_1() { return &___Data_1; }
	inline void set_Data_1(RuntimeObject * value)
	{
		___Data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex
struct ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_marshaled_pinvoke
{
	Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  ___Position_0;
	Il2CppIUnknown* ___Data_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex
struct ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_marshaled_com
{
	Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  ___Position_0;
	Il2CppIUnknown* ___Data_1;
};

// UnityEngine.CubemapFace
struct CubemapFace_t74FBCA71A21252C2E10E256E61FE0B1E09D7B9E5 
{
public:
	// System.Int32 UnityEngine.CubemapFace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CubemapFace_t74FBCA71A21252C2E10E256E61FE0B1E09D7B9E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.CullingOptions
struct CullingOptions_t36EEEF842AD217C369EA02DF85EFD28957A87109 
{
public:
	// System.Int32 UnityEngine.Rendering.CullingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CullingOptions_t36EEEF842AD217C369EA02DF85EFD28957A87109, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Experimental.GlobalIllumination.FalloffType
struct FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.FalloffType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.Rendering.GraphicsFormat
struct GraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.LODParameters
struct LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD 
{
public:
	// System.Int32 UnityEngine.Rendering.LODParameters::m_IsOrthographic
	int32_t ___m_IsOrthographic_0;
	// UnityEngine.Vector3 UnityEngine.Rendering.LODParameters::m_CameraPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_CameraPosition_1;
	// System.Single UnityEngine.Rendering.LODParameters::m_FieldOfView
	float ___m_FieldOfView_2;
	// System.Single UnityEngine.Rendering.LODParameters::m_OrthoSize
	float ___m_OrthoSize_3;
	// System.Int32 UnityEngine.Rendering.LODParameters::m_CameraPixelHeight
	int32_t ___m_CameraPixelHeight_4;

public:
	inline static int32_t get_offset_of_m_IsOrthographic_0() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_IsOrthographic_0)); }
	inline int32_t get_m_IsOrthographic_0() const { return ___m_IsOrthographic_0; }
	inline int32_t* get_address_of_m_IsOrthographic_0() { return &___m_IsOrthographic_0; }
	inline void set_m_IsOrthographic_0(int32_t value)
	{
		___m_IsOrthographic_0 = value;
	}

	inline static int32_t get_offset_of_m_CameraPosition_1() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_CameraPosition_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_CameraPosition_1() const { return ___m_CameraPosition_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_CameraPosition_1() { return &___m_CameraPosition_1; }
	inline void set_m_CameraPosition_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_CameraPosition_1 = value;
	}

	inline static int32_t get_offset_of_m_FieldOfView_2() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_FieldOfView_2)); }
	inline float get_m_FieldOfView_2() const { return ___m_FieldOfView_2; }
	inline float* get_address_of_m_FieldOfView_2() { return &___m_FieldOfView_2; }
	inline void set_m_FieldOfView_2(float value)
	{
		___m_FieldOfView_2 = value;
	}

	inline static int32_t get_offset_of_m_OrthoSize_3() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_OrthoSize_3)); }
	inline float get_m_OrthoSize_3() const { return ___m_OrthoSize_3; }
	inline float* get_address_of_m_OrthoSize_3() { return &___m_OrthoSize_3; }
	inline void set_m_OrthoSize_3(float value)
	{
		___m_OrthoSize_3 = value;
	}

	inline static int32_t get_offset_of_m_CameraPixelHeight_4() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_CameraPixelHeight_4)); }
	inline int32_t get_m_CameraPixelHeight_4() const { return ___m_CameraPixelHeight_4; }
	inline int32_t* get_address_of_m_CameraPixelHeight_4() { return &___m_CameraPixelHeight_4; }
	inline void set_m_CameraPixelHeight_4(int32_t value)
	{
		___m_CameraPixelHeight_4 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightMode
struct LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightMode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightType
struct LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArrayOptions
struct NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Rendering.ReflectionProbeSortingCriteria
struct ReflectionProbeSortingCriteria_tAD2F76EF0ECBDCA0334296568300D724E7905708 
{
public:
	// System.Int32 UnityEngine.Rendering.ReflectionProbeSortingCriteria::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReflectionProbeSortingCriteria_tAD2F76EF0ECBDCA0334296568300D724E7905708, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.RenderBufferStoreAction
struct RenderBufferStoreAction_t6C9B7C07638B3B226C3F19899A810CE32595D454 
{
public:
	// System.Int32 UnityEngine.Rendering.RenderBufferStoreAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderBufferStoreAction_t6C9B7C07638B3B226C3F19899A810CE32595D454, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.Universal.RenderPassEvent
struct RenderPassEvent_tA78EC5DDCD3BB90631B4799E949962AC19E48B4C 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.RenderPassEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderPassEvent_tA78EC5DDCD3BB90631B4799E949962AC19E48B4C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureCreationFlags
struct RenderTextureCreationFlags_t24A9C99A84202C1F13828D9F5693BE46CFBD61F3 
{
public:
	// System.Int32 UnityEngine.RenderTextureCreationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureCreationFlags_t24A9C99A84202C1F13828D9F5693BE46CFBD61F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureMemoryless
struct RenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67 
{
public:
	// System.Int32 UnityEngine.RenderTextureMemoryless::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.Universal.ScriptableRenderPassInput
struct ScriptableRenderPassInput_tEDC08733C6ABB031D0ADDF7BD80F0345FC93284C 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderPassInput::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScriptableRenderPassInput_tEDC08733C6ABB031D0ADDF7BD80F0345FC93284C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.ShadowSamplingMode
struct ShadowSamplingMode_t864AB52A05C1F54A738E06F76F47CDF4C26CF7F9 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowSamplingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowSamplingMode_t864AB52A05C1F54A738E06F76F47CDF4C26CF7F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.TextureDimension
struct TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.VRTextureUsage
struct VRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645 
{
public:
	// System.Int32 UnityEngine.VRTextureUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge
struct Edge_tC11235216D5E71087549B2CB09A27043F02FB278 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge::vertexIndex0
	int32_t ___vertexIndex0_0;
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge::vertexIndex1
	int32_t ___vertexIndex1_1;
	// UnityEngine.Vector4 UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge::tangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___tangent_2;
	// System.Boolean UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge::compareReversed
	bool ___compareReversed_3;

public:
	inline static int32_t get_offset_of_vertexIndex0_0() { return static_cast<int32_t>(offsetof(Edge_tC11235216D5E71087549B2CB09A27043F02FB278, ___vertexIndex0_0)); }
	inline int32_t get_vertexIndex0_0() const { return ___vertexIndex0_0; }
	inline int32_t* get_address_of_vertexIndex0_0() { return &___vertexIndex0_0; }
	inline void set_vertexIndex0_0(int32_t value)
	{
		___vertexIndex0_0 = value;
	}

	inline static int32_t get_offset_of_vertexIndex1_1() { return static_cast<int32_t>(offsetof(Edge_tC11235216D5E71087549B2CB09A27043F02FB278, ___vertexIndex1_1)); }
	inline int32_t get_vertexIndex1_1() const { return ___vertexIndex1_1; }
	inline int32_t* get_address_of_vertexIndex1_1() { return &___vertexIndex1_1; }
	inline void set_vertexIndex1_1(int32_t value)
	{
		___vertexIndex1_1 = value;
	}

	inline static int32_t get_offset_of_tangent_2() { return static_cast<int32_t>(offsetof(Edge_tC11235216D5E71087549B2CB09A27043F02FB278, ___tangent_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_tangent_2() const { return ___tangent_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_tangent_2() { return &___tangent_2; }
	inline void set_tangent_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___tangent_2 = value;
	}

	inline static int32_t get_offset_of_compareReversed_3() { return static_cast<int32_t>(offsetof(Edge_tC11235216D5E71087549B2CB09A27043F02FB278, ___compareReversed_3)); }
	inline bool get_compareReversed_3() const { return ___compareReversed_3; }
	inline bool* get_address_of_compareReversed_3() { return &___compareReversed_3; }
	inline void set_compareReversed_3(bool value)
	{
		___compareReversed_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge
struct Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshaled_pinvoke
{
	int32_t ___vertexIndex0_0;
	int32_t ___vertexIndex1_1;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___tangent_2;
	int32_t ___compareReversed_3;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge
struct Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshaled_com
{
	int32_t ___vertexIndex0_0;
	int32_t ___vertexIndex1_1;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___tangent_2;
	int32_t ___compareReversed_3;
};

// UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusion/ScreenSpaceAmbientOcclusionPass/ShaderPasses
struct ShaderPasses_t0CADE457F3633D13C59F79EE75909E8453E658A2 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusion/ScreenSpaceAmbientOcclusionPass/ShaderPasses::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShaderPasses_t0CADE457F3633D13C59F79EE75909E8453E658A2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32Enum>
struct NativeArray_1_tEAC3CE8EC88043FC47CFFFD6A9DC17F368B75F21 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tEAC3CE8EC88043FC47CFFFD6A9DC17F368B75F21, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tEAC3CE8EC88043FC47CFFFD6A9DC17F368B75F21, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tEAC3CE8EC88043FC47CFFFD6A9DC17F368B75F21, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.Universal.RenderPassEvent>
struct NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieID
	int32_t ___cookieID_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieScale
	float ___cookieScale_2;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_4;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_5;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_10;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_11;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_12;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_13;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_14;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_15;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_cookieID_1() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieID_1)); }
	inline int32_t get_cookieID_1() const { return ___cookieID_1; }
	inline int32_t* get_address_of_cookieID_1() { return &___cookieID_1; }
	inline void set_cookieID_1(int32_t value)
	{
		___cookieID_1 = value;
	}

	inline static int32_t get_offset_of_cookieScale_2() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieScale_2)); }
	inline float get_cookieScale_2() const { return ___cookieScale_2; }
	inline float* get_address_of_cookieScale_2() { return &___cookieScale_2; }
	inline void set_cookieScale_2(float value)
	{
		___cookieScale_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___color_3)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_color_3() const { return ___color_3; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_indirectColor_4() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___indirectColor_4)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_indirectColor_4() const { return ___indirectColor_4; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_indirectColor_4() { return &___indirectColor_4; }
	inline void set_indirectColor_4(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___indirectColor_4 = value;
	}

	inline static int32_t get_offset_of_orientation_5() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___orientation_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_orientation_5() const { return ___orientation_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_orientation_5() { return &___orientation_5; }
	inline void set_orientation_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___orientation_5 = value;
	}

	inline static int32_t get_offset_of_position_6() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___position_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_6() const { return ___position_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_6() { return &___position_6; }
	inline void set_position_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_6 = value;
	}

	inline static int32_t get_offset_of_range_7() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___range_7)); }
	inline float get_range_7() const { return ___range_7; }
	inline float* get_address_of_range_7() { return &___range_7; }
	inline void set_range_7(float value)
	{
		___range_7 = value;
	}

	inline static int32_t get_offset_of_coneAngle_8() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___coneAngle_8)); }
	inline float get_coneAngle_8() const { return ___coneAngle_8; }
	inline float* get_address_of_coneAngle_8() { return &___coneAngle_8; }
	inline void set_coneAngle_8(float value)
	{
		___coneAngle_8 = value;
	}

	inline static int32_t get_offset_of_innerConeAngle_9() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___innerConeAngle_9)); }
	inline float get_innerConeAngle_9() const { return ___innerConeAngle_9; }
	inline float* get_address_of_innerConeAngle_9() { return &___innerConeAngle_9; }
	inline void set_innerConeAngle_9(float value)
	{
		___innerConeAngle_9 = value;
	}

	inline static int32_t get_offset_of_shape0_10() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape0_10)); }
	inline float get_shape0_10() const { return ___shape0_10; }
	inline float* get_address_of_shape0_10() { return &___shape0_10; }
	inline void set_shape0_10(float value)
	{
		___shape0_10 = value;
	}

	inline static int32_t get_offset_of_shape1_11() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape1_11)); }
	inline float get_shape1_11() const { return ___shape1_11; }
	inline float* get_address_of_shape1_11() { return &___shape1_11; }
	inline void set_shape1_11(float value)
	{
		___shape1_11 = value;
	}

	inline static int32_t get_offset_of_type_12() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___type_12)); }
	inline uint8_t get_type_12() const { return ___type_12; }
	inline uint8_t* get_address_of_type_12() { return &___type_12; }
	inline void set_type_12(uint8_t value)
	{
		___type_12 = value;
	}

	inline static int32_t get_offset_of_mode_13() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___mode_13)); }
	inline uint8_t get_mode_13() const { return ___mode_13; }
	inline uint8_t* get_address_of_mode_13() { return &___mode_13; }
	inline void set_mode_13(uint8_t value)
	{
		___mode_13 = value;
	}

	inline static int32_t get_offset_of_shadow_14() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shadow_14)); }
	inline uint8_t get_shadow_14() const { return ___shadow_14; }
	inline uint8_t* get_address_of_shadow_14() { return &___shadow_14; }
	inline void set_shadow_14(uint8_t value)
	{
		___shadow_14 = value;
	}

	inline static int32_t get_offset_of_falloff_15() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___falloff_15)); }
	inline uint8_t get_falloff_15() const { return ___falloff_15; }
	inline uint8_t* get_address_of_falloff_15() { return &___falloff_15; }
	inline void set_falloff_15(uint8_t value)
	{
		___falloff_15 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Rendering.RenderTargetIdentifier
struct RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 
{
public:
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_2;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_3;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_4;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_5;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_6;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_7;

public:
	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_NameID_2() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_NameID_2)); }
	inline int32_t get_m_NameID_2() const { return ___m_NameID_2; }
	inline int32_t* get_address_of_m_NameID_2() { return &___m_NameID_2; }
	inline void set_m_NameID_2(int32_t value)
	{
		___m_NameID_2 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_3() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_InstanceID_3)); }
	inline int32_t get_m_InstanceID_3() const { return ___m_InstanceID_3; }
	inline int32_t* get_address_of_m_InstanceID_3() { return &___m_InstanceID_3; }
	inline void set_m_InstanceID_3(int32_t value)
	{
		___m_InstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_BufferPointer_4() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_BufferPointer_4)); }
	inline intptr_t get_m_BufferPointer_4() const { return ___m_BufferPointer_4; }
	inline intptr_t* get_address_of_m_BufferPointer_4() { return &___m_BufferPointer_4; }
	inline void set_m_BufferPointer_4(intptr_t value)
	{
		___m_BufferPointer_4 = value;
	}

	inline static int32_t get_offset_of_m_MipLevel_5() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_MipLevel_5)); }
	inline int32_t get_m_MipLevel_5() const { return ___m_MipLevel_5; }
	inline int32_t* get_address_of_m_MipLevel_5() { return &___m_MipLevel_5; }
	inline void set_m_MipLevel_5(int32_t value)
	{
		___m_MipLevel_5 = value;
	}

	inline static int32_t get_offset_of_m_CubeFace_6() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_CubeFace_6)); }
	inline int32_t get_m_CubeFace_6() const { return ___m_CubeFace_6; }
	inline int32_t* get_address_of_m_CubeFace_6() { return &___m_CubeFace_6; }
	inline void set_m_CubeFace_6(int32_t value)
	{
		___m_CubeFace_6 = value;
	}

	inline static int32_t get_offset_of_m_DepthSlice_7() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_DepthSlice_7)); }
	inline int32_t get_m_DepthSlice_7() const { return ___m_DepthSlice_7; }
	inline int32_t* get_address_of_m_DepthSlice_7() { return &___m_DepthSlice_7; }
	inline void set_m_DepthSlice_7(int32_t value)
	{
		___m_DepthSlice_7 = value;
	}
};


// UnityEngine.RenderTextureDescriptor
struct RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 
{
public:
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<mipCount>k__BackingField
	int32_t ___U3CmipCountU3Ek__BackingField_4;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::_graphicsFormat
	int32_t ____graphicsFormat_5;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<stencilFormat>k__BackingField
	int32_t ___U3CstencilFormatU3Ek__BackingField_6;
	// System.Int32 UnityEngine.RenderTextureDescriptor::_depthBufferBits
	int32_t ____depthBufferBits_7;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_9;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_10;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_11;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_12;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CwidthU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CwidthU3Ek__BackingField_0)); }
	inline int32_t get_U3CwidthU3Ek__BackingField_0() const { return ___U3CwidthU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CwidthU3Ek__BackingField_0() { return &___U3CwidthU3Ek__BackingField_0; }
	inline void set_U3CwidthU3Ek__BackingField_0(int32_t value)
	{
		___U3CwidthU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CheightU3Ek__BackingField_1)); }
	inline int32_t get_U3CheightU3Ek__BackingField_1() const { return ___U3CheightU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CheightU3Ek__BackingField_1() { return &___U3CheightU3Ek__BackingField_1; }
	inline void set_U3CheightU3Ek__BackingField_1(int32_t value)
	{
		___U3CheightU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmsaaSamplesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmsaaSamplesU3Ek__BackingField_2)); }
	inline int32_t get_U3CmsaaSamplesU3Ek__BackingField_2() const { return ___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CmsaaSamplesU3Ek__BackingField_2() { return &___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline void set_U3CmsaaSamplesU3Ek__BackingField_2(int32_t value)
	{
		___U3CmsaaSamplesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CvolumeDepthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CvolumeDepthU3Ek__BackingField_3)); }
	inline int32_t get_U3CvolumeDepthU3Ek__BackingField_3() const { return ___U3CvolumeDepthU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CvolumeDepthU3Ek__BackingField_3() { return &___U3CvolumeDepthU3Ek__BackingField_3; }
	inline void set_U3CvolumeDepthU3Ek__BackingField_3(int32_t value)
	{
		___U3CvolumeDepthU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CmipCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmipCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CmipCountU3Ek__BackingField_4() const { return ___U3CmipCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CmipCountU3Ek__BackingField_4() { return &___U3CmipCountU3Ek__BackingField_4; }
	inline void set_U3CmipCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CmipCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__graphicsFormat_5() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____graphicsFormat_5)); }
	inline int32_t get__graphicsFormat_5() const { return ____graphicsFormat_5; }
	inline int32_t* get_address_of__graphicsFormat_5() { return &____graphicsFormat_5; }
	inline void set__graphicsFormat_5(int32_t value)
	{
		____graphicsFormat_5 = value;
	}

	inline static int32_t get_offset_of_U3CstencilFormatU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CstencilFormatU3Ek__BackingField_6)); }
	inline int32_t get_U3CstencilFormatU3Ek__BackingField_6() const { return ___U3CstencilFormatU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CstencilFormatU3Ek__BackingField_6() { return &___U3CstencilFormatU3Ek__BackingField_6; }
	inline void set_U3CstencilFormatU3Ek__BackingField_6(int32_t value)
	{
		___U3CstencilFormatU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of__depthBufferBits_7() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____depthBufferBits_7)); }
	inline int32_t get__depthBufferBits_7() const { return ____depthBufferBits_7; }
	inline int32_t* get_address_of__depthBufferBits_7() { return &____depthBufferBits_7; }
	inline void set__depthBufferBits_7(int32_t value)
	{
		____depthBufferBits_7 = value;
	}

	inline static int32_t get_offset_of_U3CdimensionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CdimensionU3Ek__BackingField_9)); }
	inline int32_t get_U3CdimensionU3Ek__BackingField_9() const { return ___U3CdimensionU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CdimensionU3Ek__BackingField_9() { return &___U3CdimensionU3Ek__BackingField_9; }
	inline void set_U3CdimensionU3Ek__BackingField_9(int32_t value)
	{
		___U3CdimensionU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CshadowSamplingModeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CshadowSamplingModeU3Ek__BackingField_10)); }
	inline int32_t get_U3CshadowSamplingModeU3Ek__BackingField_10() const { return ___U3CshadowSamplingModeU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CshadowSamplingModeU3Ek__BackingField_10() { return &___U3CshadowSamplingModeU3Ek__BackingField_10; }
	inline void set_U3CshadowSamplingModeU3Ek__BackingField_10(int32_t value)
	{
		___U3CshadowSamplingModeU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CvrUsageU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CvrUsageU3Ek__BackingField_11)); }
	inline int32_t get_U3CvrUsageU3Ek__BackingField_11() const { return ___U3CvrUsageU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CvrUsageU3Ek__BackingField_11() { return &___U3CvrUsageU3Ek__BackingField_11; }
	inline void set_U3CvrUsageU3Ek__BackingField_11(int32_t value)
	{
		___U3CvrUsageU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of__flags_12() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____flags_12)); }
	inline int32_t get__flags_12() const { return ____flags_12; }
	inline int32_t* get_address_of__flags_12() { return &____flags_12; }
	inline void set__flags_12(int32_t value)
	{
		____flags_12 = value;
	}

	inline static int32_t get_offset_of_U3CmemorylessU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmemorylessU3Ek__BackingField_13)); }
	inline int32_t get_U3CmemorylessU3Ek__BackingField_13() const { return ___U3CmemorylessU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CmemorylessU3Ek__BackingField_13() { return &___U3CmemorylessU3Ek__BackingField_13; }
	inline void set_U3CmemorylessU3Ek__BackingField_13(int32_t value)
	{
		___U3CmemorylessU3Ek__BackingField_13 = value;
	}
};

struct RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_StaticFields
{
public:
	// System.Int32[] UnityEngine.RenderTextureDescriptor::depthFormatBits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___depthFormatBits_8;

public:
	inline static int32_t get_offset_of_depthFormatBits_8() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_StaticFields, ___depthFormatBits_8)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_depthFormatBits_8() const { return ___depthFormatBits_8; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_depthFormatBits_8() { return &___depthFormatBits_8; }
	inline void set_depthFormatBits_8(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___depthFormatBits_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___depthFormatBits_8), (void*)value);
	}
};


// UnityEngine.Rendering.ScriptableCullingParameters
struct ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 
{
public:
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_IsOrthographic
	int32_t ___m_IsOrthographic_0;
	// UnityEngine.Rendering.LODParameters UnityEngine.Rendering.ScriptableCullingParameters::m_LODParameters
	LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD  ___m_LODParameters_1;
	// UnityEngine.Rendering.ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer UnityEngine.Rendering.ScriptableCullingParameters::m_CullingPlanes
	U3Cm_CullingPlanesU3Ee__FixedBuffer_t68E97CADA0C5FB08E8F025822CDE2CC1B8CC1490  ___m_CullingPlanes_3;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_CullingPlaneCount
	int32_t ___m_CullingPlaneCount_4;
	// System.UInt32 UnityEngine.Rendering.ScriptableCullingParameters::m_CullingMask
	uint32_t ___m_CullingMask_5;
	// System.UInt64 UnityEngine.Rendering.ScriptableCullingParameters::m_SceneMask
	uint64_t ___m_SceneMask_6;
	// UnityEngine.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer UnityEngine.Rendering.ScriptableCullingParameters::m_LayerFarCullDistances
	U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_t5B7FC7CD51D4855019C575D8B77A38581146E884  ___m_LayerFarCullDistances_8;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_LayerCull
	int32_t ___m_LayerCull_9;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.ScriptableCullingParameters::m_CullingMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_CullingMatrix_10;
	// UnityEngine.Vector3 UnityEngine.Rendering.ScriptableCullingParameters::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_11;
	// System.Single UnityEngine.Rendering.ScriptableCullingParameters::m_ShadowDistance
	float ___m_ShadowDistance_12;
	// UnityEngine.Rendering.CullingOptions UnityEngine.Rendering.ScriptableCullingParameters::m_CullingOptions
	int32_t ___m_CullingOptions_13;
	// UnityEngine.Rendering.ReflectionProbeSortingCriteria UnityEngine.Rendering.ScriptableCullingParameters::m_ReflectionProbeSortingCriteria
	int32_t ___m_ReflectionProbeSortingCriteria_14;
	// UnityEngine.Rendering.CameraProperties UnityEngine.Rendering.ScriptableCullingParameters::m_CameraProperties
	CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A  ___m_CameraProperties_15;
	// System.Single UnityEngine.Rendering.ScriptableCullingParameters::m_AccurateOcclusionThreshold
	float ___m_AccurateOcclusionThreshold_16;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_MaximumPortalCullingJobs
	int32_t ___m_MaximumPortalCullingJobs_17;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.ScriptableCullingParameters::m_StereoViewMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_StereoViewMatrix_18;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.ScriptableCullingParameters::m_StereoProjectionMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_StereoProjectionMatrix_19;
	// System.Single UnityEngine.Rendering.ScriptableCullingParameters::m_StereoSeparationDistance
	float ___m_StereoSeparationDistance_20;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_maximumVisibleLights
	int32_t ___m_maximumVisibleLights_21;

public:
	inline static int32_t get_offset_of_m_IsOrthographic_0() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_IsOrthographic_0)); }
	inline int32_t get_m_IsOrthographic_0() const { return ___m_IsOrthographic_0; }
	inline int32_t* get_address_of_m_IsOrthographic_0() { return &___m_IsOrthographic_0; }
	inline void set_m_IsOrthographic_0(int32_t value)
	{
		___m_IsOrthographic_0 = value;
	}

	inline static int32_t get_offset_of_m_LODParameters_1() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_LODParameters_1)); }
	inline LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD  get_m_LODParameters_1() const { return ___m_LODParameters_1; }
	inline LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD * get_address_of_m_LODParameters_1() { return &___m_LODParameters_1; }
	inline void set_m_LODParameters_1(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD  value)
	{
		___m_LODParameters_1 = value;
	}

	inline static int32_t get_offset_of_m_CullingPlanes_3() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_CullingPlanes_3)); }
	inline U3Cm_CullingPlanesU3Ee__FixedBuffer_t68E97CADA0C5FB08E8F025822CDE2CC1B8CC1490  get_m_CullingPlanes_3() const { return ___m_CullingPlanes_3; }
	inline U3Cm_CullingPlanesU3Ee__FixedBuffer_t68E97CADA0C5FB08E8F025822CDE2CC1B8CC1490 * get_address_of_m_CullingPlanes_3() { return &___m_CullingPlanes_3; }
	inline void set_m_CullingPlanes_3(U3Cm_CullingPlanesU3Ee__FixedBuffer_t68E97CADA0C5FB08E8F025822CDE2CC1B8CC1490  value)
	{
		___m_CullingPlanes_3 = value;
	}

	inline static int32_t get_offset_of_m_CullingPlaneCount_4() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_CullingPlaneCount_4)); }
	inline int32_t get_m_CullingPlaneCount_4() const { return ___m_CullingPlaneCount_4; }
	inline int32_t* get_address_of_m_CullingPlaneCount_4() { return &___m_CullingPlaneCount_4; }
	inline void set_m_CullingPlaneCount_4(int32_t value)
	{
		___m_CullingPlaneCount_4 = value;
	}

	inline static int32_t get_offset_of_m_CullingMask_5() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_CullingMask_5)); }
	inline uint32_t get_m_CullingMask_5() const { return ___m_CullingMask_5; }
	inline uint32_t* get_address_of_m_CullingMask_5() { return &___m_CullingMask_5; }
	inline void set_m_CullingMask_5(uint32_t value)
	{
		___m_CullingMask_5 = value;
	}

	inline static int32_t get_offset_of_m_SceneMask_6() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_SceneMask_6)); }
	inline uint64_t get_m_SceneMask_6() const { return ___m_SceneMask_6; }
	inline uint64_t* get_address_of_m_SceneMask_6() { return &___m_SceneMask_6; }
	inline void set_m_SceneMask_6(uint64_t value)
	{
		___m_SceneMask_6 = value;
	}

	inline static int32_t get_offset_of_m_LayerFarCullDistances_8() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_LayerFarCullDistances_8)); }
	inline U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_t5B7FC7CD51D4855019C575D8B77A38581146E884  get_m_LayerFarCullDistances_8() const { return ___m_LayerFarCullDistances_8; }
	inline U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_t5B7FC7CD51D4855019C575D8B77A38581146E884 * get_address_of_m_LayerFarCullDistances_8() { return &___m_LayerFarCullDistances_8; }
	inline void set_m_LayerFarCullDistances_8(U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_t5B7FC7CD51D4855019C575D8B77A38581146E884  value)
	{
		___m_LayerFarCullDistances_8 = value;
	}

	inline static int32_t get_offset_of_m_LayerCull_9() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_LayerCull_9)); }
	inline int32_t get_m_LayerCull_9() const { return ___m_LayerCull_9; }
	inline int32_t* get_address_of_m_LayerCull_9() { return &___m_LayerCull_9; }
	inline void set_m_LayerCull_9(int32_t value)
	{
		___m_LayerCull_9 = value;
	}

	inline static int32_t get_offset_of_m_CullingMatrix_10() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_CullingMatrix_10)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_CullingMatrix_10() const { return ___m_CullingMatrix_10; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_CullingMatrix_10() { return &___m_CullingMatrix_10; }
	inline void set_m_CullingMatrix_10(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_CullingMatrix_10 = value;
	}

	inline static int32_t get_offset_of_m_Origin_11() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_Origin_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_11() const { return ___m_Origin_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_11() { return &___m_Origin_11; }
	inline void set_m_Origin_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_11 = value;
	}

	inline static int32_t get_offset_of_m_ShadowDistance_12() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_ShadowDistance_12)); }
	inline float get_m_ShadowDistance_12() const { return ___m_ShadowDistance_12; }
	inline float* get_address_of_m_ShadowDistance_12() { return &___m_ShadowDistance_12; }
	inline void set_m_ShadowDistance_12(float value)
	{
		___m_ShadowDistance_12 = value;
	}

	inline static int32_t get_offset_of_m_CullingOptions_13() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_CullingOptions_13)); }
	inline int32_t get_m_CullingOptions_13() const { return ___m_CullingOptions_13; }
	inline int32_t* get_address_of_m_CullingOptions_13() { return &___m_CullingOptions_13; }
	inline void set_m_CullingOptions_13(int32_t value)
	{
		___m_CullingOptions_13 = value;
	}

	inline static int32_t get_offset_of_m_ReflectionProbeSortingCriteria_14() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_ReflectionProbeSortingCriteria_14)); }
	inline int32_t get_m_ReflectionProbeSortingCriteria_14() const { return ___m_ReflectionProbeSortingCriteria_14; }
	inline int32_t* get_address_of_m_ReflectionProbeSortingCriteria_14() { return &___m_ReflectionProbeSortingCriteria_14; }
	inline void set_m_ReflectionProbeSortingCriteria_14(int32_t value)
	{
		___m_ReflectionProbeSortingCriteria_14 = value;
	}

	inline static int32_t get_offset_of_m_CameraProperties_15() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_CameraProperties_15)); }
	inline CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A  get_m_CameraProperties_15() const { return ___m_CameraProperties_15; }
	inline CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A * get_address_of_m_CameraProperties_15() { return &___m_CameraProperties_15; }
	inline void set_m_CameraProperties_15(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A  value)
	{
		___m_CameraProperties_15 = value;
	}

	inline static int32_t get_offset_of_m_AccurateOcclusionThreshold_16() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_AccurateOcclusionThreshold_16)); }
	inline float get_m_AccurateOcclusionThreshold_16() const { return ___m_AccurateOcclusionThreshold_16; }
	inline float* get_address_of_m_AccurateOcclusionThreshold_16() { return &___m_AccurateOcclusionThreshold_16; }
	inline void set_m_AccurateOcclusionThreshold_16(float value)
	{
		___m_AccurateOcclusionThreshold_16 = value;
	}

	inline static int32_t get_offset_of_m_MaximumPortalCullingJobs_17() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_MaximumPortalCullingJobs_17)); }
	inline int32_t get_m_MaximumPortalCullingJobs_17() const { return ___m_MaximumPortalCullingJobs_17; }
	inline int32_t* get_address_of_m_MaximumPortalCullingJobs_17() { return &___m_MaximumPortalCullingJobs_17; }
	inline void set_m_MaximumPortalCullingJobs_17(int32_t value)
	{
		___m_MaximumPortalCullingJobs_17 = value;
	}

	inline static int32_t get_offset_of_m_StereoViewMatrix_18() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_StereoViewMatrix_18)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_StereoViewMatrix_18() const { return ___m_StereoViewMatrix_18; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_StereoViewMatrix_18() { return &___m_StereoViewMatrix_18; }
	inline void set_m_StereoViewMatrix_18(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_StereoViewMatrix_18 = value;
	}

	inline static int32_t get_offset_of_m_StereoProjectionMatrix_19() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_StereoProjectionMatrix_19)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_StereoProjectionMatrix_19() const { return ___m_StereoProjectionMatrix_19; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_StereoProjectionMatrix_19() { return &___m_StereoProjectionMatrix_19; }
	inline void set_m_StereoProjectionMatrix_19(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_StereoProjectionMatrix_19 = value;
	}

	inline static int32_t get_offset_of_m_StereoSeparationDistance_20() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_StereoSeparationDistance_20)); }
	inline float get_m_StereoSeparationDistance_20() const { return ___m_StereoSeparationDistance_20; }
	inline float* get_address_of_m_StereoSeparationDistance_20() { return &___m_StereoSeparationDistance_20; }
	inline void set_m_StereoSeparationDistance_20(float value)
	{
		___m_StereoSeparationDistance_20 = value;
	}

	inline static int32_t get_offset_of_m_maximumVisibleLights_21() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_maximumVisibleLights_21)); }
	inline int32_t get_m_maximumVisibleLights_21() const { return ___m_maximumVisibleLights_21; }
	inline int32_t* get_address_of_m_maximumVisibleLights_21() { return &___m_maximumVisibleLights_21; }
	inline void set_m_maximumVisibleLights_21(int32_t value)
	{
		___m_maximumVisibleLights_21 = value;
	}
};

struct ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1_StaticFields
{
public:
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::maximumCullingPlaneCount
	int32_t ___maximumCullingPlaneCount_2;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::layerCount
	int32_t ___layerCount_7;

public:
	inline static int32_t get_offset_of_maximumCullingPlaneCount_2() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1_StaticFields, ___maximumCullingPlaneCount_2)); }
	inline int32_t get_maximumCullingPlaneCount_2() const { return ___maximumCullingPlaneCount_2; }
	inline int32_t* get_address_of_maximumCullingPlaneCount_2() { return &___maximumCullingPlaneCount_2; }
	inline void set_maximumCullingPlaneCount_2(int32_t value)
	{
		___maximumCullingPlaneCount_2 = value;
	}

	inline static int32_t get_offset_of_layerCount_7() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1_StaticFields, ___layerCount_7)); }
	inline int32_t get_layerCount_7() const { return ___layerCount_7; }
	inline int32_t* get_address_of_layerCount_7() { return &___layerCount_7; }
	inline void set_layerCount_7(int32_t value)
	{
		___layerCount_7 = value;
	}
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Rendering.Universal.ScriptableRenderPass
struct ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.Universal.RenderPassEvent UnityEngine.Rendering.Universal.ScriptableRenderPass::<renderPassEvent>k__BackingField
	int32_t ___U3CrenderPassEventU3Ek__BackingField_0;
	// UnityEngine.Rendering.RenderBufferStoreAction[] UnityEngine.Rendering.Universal.ScriptableRenderPass::m_ColorStoreActions
	RenderBufferStoreActionU5BU5D_t705A51FC56751EAFDABE1033BBDEF052671F97CF* ___m_ColorStoreActions_1;
	// UnityEngine.Rendering.RenderBufferStoreAction UnityEngine.Rendering.Universal.ScriptableRenderPass::m_DepthStoreAction
	int32_t ___m_DepthStoreAction_2;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.ScriptableRenderPass::<profilingSampler>k__BackingField
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___U3CprofilingSamplerU3Ek__BackingField_3;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderPass::<overrideCameraTarget>k__BackingField
	bool ___U3CoverrideCameraTargetU3Ek__BackingField_4;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderPass::<isBlitRenderPass>k__BackingField
	bool ___U3CisBlitRenderPassU3Ek__BackingField_5;
	// UnityEngine.Rendering.RenderTargetIdentifier[] UnityEngine.Rendering.Universal.ScriptableRenderPass::m_ColorAttachments
	RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* ___m_ColorAttachments_6;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.ScriptableRenderPass::m_DepthAttachment
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___m_DepthAttachment_7;
	// UnityEngine.Rendering.Universal.ScriptableRenderPassInput UnityEngine.Rendering.Universal.ScriptableRenderPass::m_Input
	int32_t ___m_Input_8;
	// UnityEngine.Rendering.ClearFlag UnityEngine.Rendering.Universal.ScriptableRenderPass::m_ClearFlag
	int32_t ___m_ClearFlag_9;
	// UnityEngine.Color UnityEngine.Rendering.Universal.ScriptableRenderPass::m_ClearColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_ClearColor_10;

public:
	inline static int32_t get_offset_of_U3CrenderPassEventU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA, ___U3CrenderPassEventU3Ek__BackingField_0)); }
	inline int32_t get_U3CrenderPassEventU3Ek__BackingField_0() const { return ___U3CrenderPassEventU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CrenderPassEventU3Ek__BackingField_0() { return &___U3CrenderPassEventU3Ek__BackingField_0; }
	inline void set_U3CrenderPassEventU3Ek__BackingField_0(int32_t value)
	{
		___U3CrenderPassEventU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_ColorStoreActions_1() { return static_cast<int32_t>(offsetof(ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA, ___m_ColorStoreActions_1)); }
	inline RenderBufferStoreActionU5BU5D_t705A51FC56751EAFDABE1033BBDEF052671F97CF* get_m_ColorStoreActions_1() const { return ___m_ColorStoreActions_1; }
	inline RenderBufferStoreActionU5BU5D_t705A51FC56751EAFDABE1033BBDEF052671F97CF** get_address_of_m_ColorStoreActions_1() { return &___m_ColorStoreActions_1; }
	inline void set_m_ColorStoreActions_1(RenderBufferStoreActionU5BU5D_t705A51FC56751EAFDABE1033BBDEF052671F97CF* value)
	{
		___m_ColorStoreActions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorStoreActions_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_DepthStoreAction_2() { return static_cast<int32_t>(offsetof(ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA, ___m_DepthStoreAction_2)); }
	inline int32_t get_m_DepthStoreAction_2() const { return ___m_DepthStoreAction_2; }
	inline int32_t* get_address_of_m_DepthStoreAction_2() { return &___m_DepthStoreAction_2; }
	inline void set_m_DepthStoreAction_2(int32_t value)
	{
		___m_DepthStoreAction_2 = value;
	}

	inline static int32_t get_offset_of_U3CprofilingSamplerU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA, ___U3CprofilingSamplerU3Ek__BackingField_3)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_U3CprofilingSamplerU3Ek__BackingField_3() const { return ___U3CprofilingSamplerU3Ek__BackingField_3; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_U3CprofilingSamplerU3Ek__BackingField_3() { return &___U3CprofilingSamplerU3Ek__BackingField_3; }
	inline void set_U3CprofilingSamplerU3Ek__BackingField_3(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___U3CprofilingSamplerU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CprofilingSamplerU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoverrideCameraTargetU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA, ___U3CoverrideCameraTargetU3Ek__BackingField_4)); }
	inline bool get_U3CoverrideCameraTargetU3Ek__BackingField_4() const { return ___U3CoverrideCameraTargetU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CoverrideCameraTargetU3Ek__BackingField_4() { return &___U3CoverrideCameraTargetU3Ek__BackingField_4; }
	inline void set_U3CoverrideCameraTargetU3Ek__BackingField_4(bool value)
	{
		___U3CoverrideCameraTargetU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CisBlitRenderPassU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA, ___U3CisBlitRenderPassU3Ek__BackingField_5)); }
	inline bool get_U3CisBlitRenderPassU3Ek__BackingField_5() const { return ___U3CisBlitRenderPassU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CisBlitRenderPassU3Ek__BackingField_5() { return &___U3CisBlitRenderPassU3Ek__BackingField_5; }
	inline void set_U3CisBlitRenderPassU3Ek__BackingField_5(bool value)
	{
		___U3CisBlitRenderPassU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_m_ColorAttachments_6() { return static_cast<int32_t>(offsetof(ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA, ___m_ColorAttachments_6)); }
	inline RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* get_m_ColorAttachments_6() const { return ___m_ColorAttachments_6; }
	inline RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17** get_address_of_m_ColorAttachments_6() { return &___m_ColorAttachments_6; }
	inline void set_m_ColorAttachments_6(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* value)
	{
		___m_ColorAttachments_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorAttachments_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_DepthAttachment_7() { return static_cast<int32_t>(offsetof(ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA, ___m_DepthAttachment_7)); }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  get_m_DepthAttachment_7() const { return ___m_DepthAttachment_7; }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * get_address_of_m_DepthAttachment_7() { return &___m_DepthAttachment_7; }
	inline void set_m_DepthAttachment_7(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		___m_DepthAttachment_7 = value;
	}

	inline static int32_t get_offset_of_m_Input_8() { return static_cast<int32_t>(offsetof(ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA, ___m_Input_8)); }
	inline int32_t get_m_Input_8() const { return ___m_Input_8; }
	inline int32_t* get_address_of_m_Input_8() { return &___m_Input_8; }
	inline void set_m_Input_8(int32_t value)
	{
		___m_Input_8 = value;
	}

	inline static int32_t get_offset_of_m_ClearFlag_9() { return static_cast<int32_t>(offsetof(ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA, ___m_ClearFlag_9)); }
	inline int32_t get_m_ClearFlag_9() const { return ___m_ClearFlag_9; }
	inline int32_t* get_address_of_m_ClearFlag_9() { return &___m_ClearFlag_9; }
	inline void set_m_ClearFlag_9(int32_t value)
	{
		___m_ClearFlag_9 = value;
	}

	inline static int32_t get_offset_of_m_ClearColor_10() { return static_cast<int32_t>(offsetof(ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA, ___m_ClearColor_10)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_ClearColor_10() const { return ___m_ClearColor_10; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_ClearColor_10() { return &___m_ClearColor_10; }
	inline void set_m_ClearColor_10(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_ClearColor_10 = value;
	}
};


// UnityEngine.Rendering.Universal.XRPass
struct XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRView> UnityEngine.Rendering.Universal.XRPass::views
	List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * ___views_0;
	// System.Boolean UnityEngine.Rendering.Universal.XRPass::<xrSdkEnabled>k__BackingField
	bool ___U3CxrSdkEnabledU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Rendering.Universal.XRPass::<copyDepth>k__BackingField
	bool ___U3CcopyDepthU3Ek__BackingField_2;
	// System.Int32 UnityEngine.Rendering.Universal.XRPass::<multipassId>k__BackingField
	int32_t ___U3CmultipassIdU3Ek__BackingField_3;
	// System.Int32 UnityEngine.Rendering.Universal.XRPass::<cullingPassId>k__BackingField
	int32_t ___U3CcullingPassIdU3Ek__BackingField_4;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.XRPass::<renderTarget>k__BackingField
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___U3CrenderTargetU3Ek__BackingField_5;
	// UnityEngine.RenderTextureDescriptor UnityEngine.Rendering.Universal.XRPass::<renderTargetDesc>k__BackingField
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___U3CrenderTargetDescU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Rendering.Universal.XRPass::<renderTargetIsRenderTexture>k__BackingField
	bool ___U3CrenderTargetIsRenderTextureU3Ek__BackingField_8;
	// System.Boolean UnityEngine.Rendering.Universal.XRPass::<isLateLatchEnabled>k__BackingField
	bool ___U3CisLateLatchEnabledU3Ek__BackingField_9;
	// System.Boolean UnityEngine.Rendering.Universal.XRPass::<canMarkLateLatch>k__BackingField
	bool ___U3CcanMarkLateLatchU3Ek__BackingField_10;
	// System.Boolean UnityEngine.Rendering.Universal.XRPass::<hasMarkedLateLatch>k__BackingField
	bool ___U3ChasMarkedLateLatchU3Ek__BackingField_11;
	// UnityEngine.Rendering.ScriptableCullingParameters UnityEngine.Rendering.Universal.XRPass::<cullingParams>k__BackingField
	ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  ___U3CcullingParamsU3Ek__BackingField_12;
	// UnityEngine.Material UnityEngine.Rendering.Universal.XRPass::occlusionMeshMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___occlusionMeshMaterial_13;
	// UnityEngine.Mesh UnityEngine.Rendering.Universal.XRPass::occlusionMeshCombined
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___occlusionMeshCombined_14;
	// System.Int32 UnityEngine.Rendering.Universal.XRPass::occlusionMeshCombinedHashCode
	int32_t ___occlusionMeshCombinedHashCode_15;
	// UnityEngine.Rendering.Universal.XRPass/CustomMirrorView UnityEngine.Rendering.Universal.XRPass::customMirrorView
	CustomMirrorView_t85B3412384E1B25E4A3D103FDFCAD87FFA728027 * ___customMirrorView_16;
	// UnityEngine.Vector4[] UnityEngine.Rendering.Universal.XRPass::stereoEyeIndices
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___stereoEyeIndices_21;
	// UnityEngine.Matrix4x4[] UnityEngine.Rendering.Universal.XRPass::stereoProjectionMatrix
	Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* ___stereoProjectionMatrix_22;
	// UnityEngine.Matrix4x4[] UnityEngine.Rendering.Universal.XRPass::stereoViewMatrix
	Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* ___stereoViewMatrix_23;
	// UnityEngine.Matrix4x4[] UnityEngine.Rendering.Universal.XRPass::stereoCameraProjectionMatrix
	Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* ___stereoCameraProjectionMatrix_24;

public:
	inline static int32_t get_offset_of_views_0() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___views_0)); }
	inline List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * get_views_0() const { return ___views_0; }
	inline List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE ** get_address_of_views_0() { return &___views_0; }
	inline void set_views_0(List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * value)
	{
		___views_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___views_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CxrSdkEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___U3CxrSdkEnabledU3Ek__BackingField_1)); }
	inline bool get_U3CxrSdkEnabledU3Ek__BackingField_1() const { return ___U3CxrSdkEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CxrSdkEnabledU3Ek__BackingField_1() { return &___U3CxrSdkEnabledU3Ek__BackingField_1; }
	inline void set_U3CxrSdkEnabledU3Ek__BackingField_1(bool value)
	{
		___U3CxrSdkEnabledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CcopyDepthU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___U3CcopyDepthU3Ek__BackingField_2)); }
	inline bool get_U3CcopyDepthU3Ek__BackingField_2() const { return ___U3CcopyDepthU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CcopyDepthU3Ek__BackingField_2() { return &___U3CcopyDepthU3Ek__BackingField_2; }
	inline void set_U3CcopyDepthU3Ek__BackingField_2(bool value)
	{
		___U3CcopyDepthU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CmultipassIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___U3CmultipassIdU3Ek__BackingField_3)); }
	inline int32_t get_U3CmultipassIdU3Ek__BackingField_3() const { return ___U3CmultipassIdU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CmultipassIdU3Ek__BackingField_3() { return &___U3CmultipassIdU3Ek__BackingField_3; }
	inline void set_U3CmultipassIdU3Ek__BackingField_3(int32_t value)
	{
		___U3CmultipassIdU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CcullingPassIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___U3CcullingPassIdU3Ek__BackingField_4)); }
	inline int32_t get_U3CcullingPassIdU3Ek__BackingField_4() const { return ___U3CcullingPassIdU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CcullingPassIdU3Ek__BackingField_4() { return &___U3CcullingPassIdU3Ek__BackingField_4; }
	inline void set_U3CcullingPassIdU3Ek__BackingField_4(int32_t value)
	{
		___U3CcullingPassIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CrenderTargetU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___U3CrenderTargetU3Ek__BackingField_5)); }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  get_U3CrenderTargetU3Ek__BackingField_5() const { return ___U3CrenderTargetU3Ek__BackingField_5; }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * get_address_of_U3CrenderTargetU3Ek__BackingField_5() { return &___U3CrenderTargetU3Ek__BackingField_5; }
	inline void set_U3CrenderTargetU3Ek__BackingField_5(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		___U3CrenderTargetU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CrenderTargetDescU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___U3CrenderTargetDescU3Ek__BackingField_6)); }
	inline RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  get_U3CrenderTargetDescU3Ek__BackingField_6() const { return ___U3CrenderTargetDescU3Ek__BackingField_6; }
	inline RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * get_address_of_U3CrenderTargetDescU3Ek__BackingField_6() { return &___U3CrenderTargetDescU3Ek__BackingField_6; }
	inline void set_U3CrenderTargetDescU3Ek__BackingField_6(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  value)
	{
		___U3CrenderTargetDescU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CrenderTargetIsRenderTextureU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___U3CrenderTargetIsRenderTextureU3Ek__BackingField_8)); }
	inline bool get_U3CrenderTargetIsRenderTextureU3Ek__BackingField_8() const { return ___U3CrenderTargetIsRenderTextureU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CrenderTargetIsRenderTextureU3Ek__BackingField_8() { return &___U3CrenderTargetIsRenderTextureU3Ek__BackingField_8; }
	inline void set_U3CrenderTargetIsRenderTextureU3Ek__BackingField_8(bool value)
	{
		___U3CrenderTargetIsRenderTextureU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CisLateLatchEnabledU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___U3CisLateLatchEnabledU3Ek__BackingField_9)); }
	inline bool get_U3CisLateLatchEnabledU3Ek__BackingField_9() const { return ___U3CisLateLatchEnabledU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CisLateLatchEnabledU3Ek__BackingField_9() { return &___U3CisLateLatchEnabledU3Ek__BackingField_9; }
	inline void set_U3CisLateLatchEnabledU3Ek__BackingField_9(bool value)
	{
		___U3CisLateLatchEnabledU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CcanMarkLateLatchU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___U3CcanMarkLateLatchU3Ek__BackingField_10)); }
	inline bool get_U3CcanMarkLateLatchU3Ek__BackingField_10() const { return ___U3CcanMarkLateLatchU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CcanMarkLateLatchU3Ek__BackingField_10() { return &___U3CcanMarkLateLatchU3Ek__BackingField_10; }
	inline void set_U3CcanMarkLateLatchU3Ek__BackingField_10(bool value)
	{
		___U3CcanMarkLateLatchU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3ChasMarkedLateLatchU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___U3ChasMarkedLateLatchU3Ek__BackingField_11)); }
	inline bool get_U3ChasMarkedLateLatchU3Ek__BackingField_11() const { return ___U3ChasMarkedLateLatchU3Ek__BackingField_11; }
	inline bool* get_address_of_U3ChasMarkedLateLatchU3Ek__BackingField_11() { return &___U3ChasMarkedLateLatchU3Ek__BackingField_11; }
	inline void set_U3ChasMarkedLateLatchU3Ek__BackingField_11(bool value)
	{
		___U3ChasMarkedLateLatchU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CcullingParamsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___U3CcullingParamsU3Ek__BackingField_12)); }
	inline ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  get_U3CcullingParamsU3Ek__BackingField_12() const { return ___U3CcullingParamsU3Ek__BackingField_12; }
	inline ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 * get_address_of_U3CcullingParamsU3Ek__BackingField_12() { return &___U3CcullingParamsU3Ek__BackingField_12; }
	inline void set_U3CcullingParamsU3Ek__BackingField_12(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  value)
	{
		___U3CcullingParamsU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_occlusionMeshMaterial_13() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___occlusionMeshMaterial_13)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_occlusionMeshMaterial_13() const { return ___occlusionMeshMaterial_13; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_occlusionMeshMaterial_13() { return &___occlusionMeshMaterial_13; }
	inline void set_occlusionMeshMaterial_13(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___occlusionMeshMaterial_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMeshMaterial_13), (void*)value);
	}

	inline static int32_t get_offset_of_occlusionMeshCombined_14() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___occlusionMeshCombined_14)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_occlusionMeshCombined_14() const { return ___occlusionMeshCombined_14; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_occlusionMeshCombined_14() { return &___occlusionMeshCombined_14; }
	inline void set_occlusionMeshCombined_14(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___occlusionMeshCombined_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMeshCombined_14), (void*)value);
	}

	inline static int32_t get_offset_of_occlusionMeshCombinedHashCode_15() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___occlusionMeshCombinedHashCode_15)); }
	inline int32_t get_occlusionMeshCombinedHashCode_15() const { return ___occlusionMeshCombinedHashCode_15; }
	inline int32_t* get_address_of_occlusionMeshCombinedHashCode_15() { return &___occlusionMeshCombinedHashCode_15; }
	inline void set_occlusionMeshCombinedHashCode_15(int32_t value)
	{
		___occlusionMeshCombinedHashCode_15 = value;
	}

	inline static int32_t get_offset_of_customMirrorView_16() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___customMirrorView_16)); }
	inline CustomMirrorView_t85B3412384E1B25E4A3D103FDFCAD87FFA728027 * get_customMirrorView_16() const { return ___customMirrorView_16; }
	inline CustomMirrorView_t85B3412384E1B25E4A3D103FDFCAD87FFA728027 ** get_address_of_customMirrorView_16() { return &___customMirrorView_16; }
	inline void set_customMirrorView_16(CustomMirrorView_t85B3412384E1B25E4A3D103FDFCAD87FFA728027 * value)
	{
		___customMirrorView_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customMirrorView_16), (void*)value);
	}

	inline static int32_t get_offset_of_stereoEyeIndices_21() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___stereoEyeIndices_21)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_stereoEyeIndices_21() const { return ___stereoEyeIndices_21; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_stereoEyeIndices_21() { return &___stereoEyeIndices_21; }
	inline void set_stereoEyeIndices_21(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___stereoEyeIndices_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stereoEyeIndices_21), (void*)value);
	}

	inline static int32_t get_offset_of_stereoProjectionMatrix_22() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___stereoProjectionMatrix_22)); }
	inline Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* get_stereoProjectionMatrix_22() const { return ___stereoProjectionMatrix_22; }
	inline Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82** get_address_of_stereoProjectionMatrix_22() { return &___stereoProjectionMatrix_22; }
	inline void set_stereoProjectionMatrix_22(Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* value)
	{
		___stereoProjectionMatrix_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stereoProjectionMatrix_22), (void*)value);
	}

	inline static int32_t get_offset_of_stereoViewMatrix_23() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___stereoViewMatrix_23)); }
	inline Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* get_stereoViewMatrix_23() const { return ___stereoViewMatrix_23; }
	inline Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82** get_address_of_stereoViewMatrix_23() { return &___stereoViewMatrix_23; }
	inline void set_stereoViewMatrix_23(Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* value)
	{
		___stereoViewMatrix_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stereoViewMatrix_23), (void*)value);
	}

	inline static int32_t get_offset_of_stereoCameraProjectionMatrix_24() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___stereoCameraProjectionMatrix_24)); }
	inline Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* get_stereoCameraProjectionMatrix_24() const { return ___stereoCameraProjectionMatrix_24; }
	inline Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82** get_address_of_stereoCameraProjectionMatrix_24() { return &___stereoCameraProjectionMatrix_24; }
	inline void set_stereoCameraProjectionMatrix_24(Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* value)
	{
		___stereoCameraProjectionMatrix_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stereoCameraProjectionMatrix_24), (void*)value);
	}
};

struct XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_StaticFields
{
public:
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.XRPass::invalidRT
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___invalidRT_7;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.XRPass::_XRCustomMirrorProfilingSampler
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ____XRCustomMirrorProfilingSampler_18;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.XRPass::_XROcclusionProfilingSampler
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ____XROcclusionProfilingSampler_20;
	// System.Int32 UnityEngine.Rendering.Universal.XRPass::UNITY_STEREO_MATRIX_V
	int32_t ___UNITY_STEREO_MATRIX_V_25;
	// System.Int32 UnityEngine.Rendering.Universal.XRPass::UNITY_STEREO_MATRIX_IV
	int32_t ___UNITY_STEREO_MATRIX_IV_26;
	// System.Int32 UnityEngine.Rendering.Universal.XRPass::UNITY_STEREO_MATRIX_VP
	int32_t ___UNITY_STEREO_MATRIX_VP_27;
	// System.Int32 UnityEngine.Rendering.Universal.XRPass::UNITY_STEREO_MATRIX_IVP
	int32_t ___UNITY_STEREO_MATRIX_IVP_28;

public:
	inline static int32_t get_offset_of_invalidRT_7() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_StaticFields, ___invalidRT_7)); }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  get_invalidRT_7() const { return ___invalidRT_7; }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * get_address_of_invalidRT_7() { return &___invalidRT_7; }
	inline void set_invalidRT_7(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		___invalidRT_7 = value;
	}

	inline static int32_t get_offset_of__XRCustomMirrorProfilingSampler_18() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_StaticFields, ____XRCustomMirrorProfilingSampler_18)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get__XRCustomMirrorProfilingSampler_18() const { return ____XRCustomMirrorProfilingSampler_18; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of__XRCustomMirrorProfilingSampler_18() { return &____XRCustomMirrorProfilingSampler_18; }
	inline void set__XRCustomMirrorProfilingSampler_18(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		____XRCustomMirrorProfilingSampler_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____XRCustomMirrorProfilingSampler_18), (void*)value);
	}

	inline static int32_t get_offset_of__XROcclusionProfilingSampler_20() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_StaticFields, ____XROcclusionProfilingSampler_20)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get__XROcclusionProfilingSampler_20() const { return ____XROcclusionProfilingSampler_20; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of__XROcclusionProfilingSampler_20() { return &____XROcclusionProfilingSampler_20; }
	inline void set__XROcclusionProfilingSampler_20(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		____XROcclusionProfilingSampler_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____XROcclusionProfilingSampler_20), (void*)value);
	}

	inline static int32_t get_offset_of_UNITY_STEREO_MATRIX_V_25() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_StaticFields, ___UNITY_STEREO_MATRIX_V_25)); }
	inline int32_t get_UNITY_STEREO_MATRIX_V_25() const { return ___UNITY_STEREO_MATRIX_V_25; }
	inline int32_t* get_address_of_UNITY_STEREO_MATRIX_V_25() { return &___UNITY_STEREO_MATRIX_V_25; }
	inline void set_UNITY_STEREO_MATRIX_V_25(int32_t value)
	{
		___UNITY_STEREO_MATRIX_V_25 = value;
	}

	inline static int32_t get_offset_of_UNITY_STEREO_MATRIX_IV_26() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_StaticFields, ___UNITY_STEREO_MATRIX_IV_26)); }
	inline int32_t get_UNITY_STEREO_MATRIX_IV_26() const { return ___UNITY_STEREO_MATRIX_IV_26; }
	inline int32_t* get_address_of_UNITY_STEREO_MATRIX_IV_26() { return &___UNITY_STEREO_MATRIX_IV_26; }
	inline void set_UNITY_STEREO_MATRIX_IV_26(int32_t value)
	{
		___UNITY_STEREO_MATRIX_IV_26 = value;
	}

	inline static int32_t get_offset_of_UNITY_STEREO_MATRIX_VP_27() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_StaticFields, ___UNITY_STEREO_MATRIX_VP_27)); }
	inline int32_t get_UNITY_STEREO_MATRIX_VP_27() const { return ___UNITY_STEREO_MATRIX_VP_27; }
	inline int32_t* get_address_of_UNITY_STEREO_MATRIX_VP_27() { return &___UNITY_STEREO_MATRIX_VP_27; }
	inline void set_UNITY_STEREO_MATRIX_VP_27(int32_t value)
	{
		___UNITY_STEREO_MATRIX_VP_27 = value;
	}

	inline static int32_t get_offset_of_UNITY_STEREO_MATRIX_IVP_28() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_StaticFields, ___UNITY_STEREO_MATRIX_IVP_28)); }
	inline int32_t get_UNITY_STEREO_MATRIX_IVP_28() const { return ___UNITY_STEREO_MATRIX_IVP_28; }
	inline int32_t* get_address_of_UNITY_STEREO_MATRIX_IVP_28() { return &___UNITY_STEREO_MATRIX_IVP_28; }
	inline void set_UNITY_STEREO_MATRIX_IVP_28(int32_t value)
	{
		___UNITY_STEREO_MATRIX_IVP_28 = value;
	}
};


// UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks
struct RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Rendering.Universal.RenderPassEvent> UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks::m_BlockEventLimits
	NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1  ___m_BlockEventLimits_0;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks::m_BlockRanges
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___m_BlockRanges_1;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks::m_BlockRangeLengths
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___m_BlockRangeLengths_2;

public:
	inline static int32_t get_offset_of_m_BlockEventLimits_0() { return static_cast<int32_t>(offsetof(RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1, ___m_BlockEventLimits_0)); }
	inline NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1  get_m_BlockEventLimits_0() const { return ___m_BlockEventLimits_0; }
	inline NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 * get_address_of_m_BlockEventLimits_0() { return &___m_BlockEventLimits_0; }
	inline void set_m_BlockEventLimits_0(NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1  value)
	{
		___m_BlockEventLimits_0 = value;
	}

	inline static int32_t get_offset_of_m_BlockRanges_1() { return static_cast<int32_t>(offsetof(RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1, ___m_BlockRanges_1)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_m_BlockRanges_1() const { return ___m_BlockRanges_1; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_m_BlockRanges_1() { return &___m_BlockRanges_1; }
	inline void set_m_BlockRanges_1(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___m_BlockRanges_1 = value;
	}

	inline static int32_t get_offset_of_m_BlockRangeLengths_2() { return static_cast<int32_t>(offsetof(RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1, ___m_BlockRangeLengths_2)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_m_BlockRangeLengths_2() const { return ___m_BlockRangeLengths_2; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_m_BlockRangeLengths_2() { return &___m_BlockRangeLengths_2; }
	inline void set_m_BlockRangeLengths_2(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___m_BlockRangeLengths_2 = value;
	}
};


// UnityEngine.Rendering.Universal.XRPass/CustomMirrorView
struct CustomMirrorView_t85B3412384E1B25E4A3D103FDFCAD87FFA728027  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;

public:
	inline static int32_t get_offset_of_m_BakedIndex_4() { return static_cast<int32_t>(offsetof(Light_tA2F349FE839781469A0344CF6039B51512394275, ___m_BakedIndex_4)); }
	inline int32_t get_m_BakedIndex_4() const { return ___m_BakedIndex_4; }
	inline int32_t* get_address_of_m_BakedIndex_4() { return &___m_BakedIndex_4; }
	inline void set_m_BakedIndex_4(int32_t value)
	{
		___m_BakedIndex_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Light[]
struct LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Light_tA2F349FE839781469A0344CF6039B51512394275 * m_Items[1];

public:
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Unity.Collections.NativeArray`1<System.Int32Enum>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m1045FD385AE12B062D3EDE3D9950C37575ECA215_gshared (NativeArray_1_tEAC3CE8EC88043FC47CFFFD6A9DC17F368B75F21 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Int32>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m001FCAD07C1100FAA1AA3C38CA5C493FC25B2292_gshared (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Int32Enum>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mEA9F18DA50B8AADE365E5F3694E85760EA05E59A_gshared (NativeArray_1_tEAC3CE8EC88043FC47CFFFD6A9DC17F368B75F21 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m69DBDA47FE3991A47E9CFCBFB3292676D22D7655_gshared (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);

// System.Void Unity.Collections.NativeArray`1<UnityEngine.Rendering.Universal.RenderPassEvent>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mC1E683684695F637A7F6264DD486C8839D0C1264 (NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m1045FD385AE12B062D3EDE3D9950C37575ECA215_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Int32>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m001FCAD07C1100FAA1AA3C38CA5C493FC25B2292 (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m001FCAD07C1100FAA1AA3C38CA5C493FC25B2292_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks::FillBlockRanges(System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRenderPass>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderBlocks_FillBlockRanges_m50B52719B25B3F22AE58DECB33902D22A41DC422 (RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1 * __this, List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F * ___activeRenderPassQueue0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Rendering.Universal.RenderPassEvent>::Dispose()
inline void NativeArray_1_Dispose_mB770E3C3D16F3E41F3E9190617659B7141EA7EA0 (NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 *, const RuntimeMethod*))NativeArray_1_Dispose_mEA9F18DA50B8AADE365E5F3694E85760EA05E59A_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks::.ctor(System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRenderPass>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderBlocks__ctor_m907248A1C82B9202FB5114FC79989A6BE2467DAA (RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1 * __this, List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F * ___activeRenderPassQueue0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Int32>::Dispose()
inline void NativeArray_1_Dispose_m69DBDA47FE3991A47E9CFCBFB3292676D22D7655 (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *, const RuntimeMethod*))NativeArray_1_Dispose_m69DBDA47FE3991A47E9CFCBFB3292676D22D7655_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderBlocks_Dispose_m5DB0A58767376A28BF484F88BCD97400EEB11FF3 (RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRenderPass>::get_Count()
inline int32_t List_1_get_Count_m1B26D5D1FBF1760D3A3791A96B2E2DBFDD7AB6E5_inline (List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRenderPass>::get_Item(System.Int32)
inline ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA * List_1_get_Item_m7897CAC5C03FBB2A5AF3616776991B75461BC0A5_inline (List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA * (*) (List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Rendering.Universal.RenderPassEvent UnityEngine.Rendering.Universal.ScriptableRenderPass::get_renderPassEvent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScriptableRenderPass_get_renderPassEvent_mFAFCBC84D67233B252C29E2AD3DBBA392264F2B4_inline (ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderBlocks_GetLength_mB36C7322D5F7A3F7F26DF9FCB3651802D0FC26AD (RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks/BlockRange::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockRange__ctor_m1A25D706EC61BD6C7D00C8DDA41F7F336B4196C6 (BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 * __this, int32_t ___begin0, int32_t ___end1, const RuntimeMethod* method);
// UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks/BlockRange UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks::GetRange(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329  RenderBlocks_GetRange_mAD9FAE2D354F81323FB0763CBCADF51CFEAD6908 (RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Rendering.Universal.ShadowUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m01B294FCAB0017F2E8E79B9FD1F710E060CED3B6 (U3CU3Ec_tA26AB1914240759F2BFCB355DFC8A90C4DBEDCD2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge::AssignVertexIndices(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_AssignVertexIndices_m3E1B5A9AF2B82E8C58B5437699CBFAA67DB07D7C (Edge_tC11235216D5E71087549B2CB09A27043F02FB278 * __this, int32_t ___vi00, int32_t ___vi11, const RuntimeMethod* method);
// System.Int32 UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge::Compare(UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge,UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Edge_Compare_mFDE4C3C7F47390510EB40DF546BE014C5AA69A2B (Edge_tC11235216D5E71087549B2CB09A27043F02FB278 * __this, Edge_tC11235216D5E71087549B2CB09A27043F02FB278  ___a0, Edge_tC11235216D5E71087549B2CB09A27043F02FB278  ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge::CompareTo(UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Edge_CompareTo_m131314C4376EC19CB1FE23CFB8325FAA1658FA1C (Edge_tC11235216D5E71087549B2CB09A27043F02FB278 * __this, Edge_tC11235216D5E71087549B2CB09A27043F02FB278  ___edgeToCompare0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.UniversalAdditionalCameraData/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7C605FDEF818101909BBF36ACE730607B196309D (U3CU3Ec_tE7F5CE7780F26678A15FEF4C6D58C2101212BA4C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.UniversalRenderPipeline/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4FD60E5AB7E158C8D85D0B7702CA709DB95C61B3 (U3CU3Ec_t455C8088007063E0848091BFA6C351BACBE76DE7 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_depth_m063B48665DB9226949AC3A615362EA20193B823D (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::InitNoBake(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_InitNoBake_mF600D612DE9A1CE4355C61317F6173E1AAEFBD57 (LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 * __this, int32_t ___lightInstanceID0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Rendering.ProfilingSampler>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m67DD82A95384FC31D204C1CB307668C13F13D742 (Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738 * __this, int32_t ___key0, ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738 *, int32_t, ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.ProfilingSampler::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89 (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Rendering.ProfilingSampler>::Add(!0,!1)
inline void Dictionary_2_Add_mABCD91B640CA38E90D89A02B1CC4E0249C62145B (Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738 * __this, int32_t ___key0, ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738 *, int32_t, ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Rendering.ProfilingSampler>::.ctor()
inline void Dictionary_2__ctor_m35A1CC2C64F6914C8489FD4CE7D2B4E6E82A5AAD (Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Assertions.Assert::IsTrue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_m983A0A378ACBE8C0EC78AEDDC7CDF6251F0DCEDC (bool ___condition0, const RuntimeMethod* method);
// UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks/BlockRange UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks/BlockRange::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329  BlockRange_GetEnumerator_m415616CE20A7D0C8CD6163A999DDD00F96263ECA (BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks/BlockRange::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BlockRange_MoveNext_mD839BDFE76EE3867E2AB17358B7E78A65B1A03B9 (BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks/BlockRange::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BlockRange_get_Current_mE2693DD2AC46EFE3F67DA70140BDE228C3EEFEAE_inline (BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks/BlockRange::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockRange_Dispose_mD542E5C3A71A3BFA78B95907A00A79489AF5C714 (BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks::.ctor(System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRenderPass>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderBlocks__ctor_m907248A1C82B9202FB5114FC79989A6BE2467DAA (RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1 * __this, List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F * ___activeRenderPassQueue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mB770E3C3D16F3E41F3E9190617659B7141EA7EA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m001FCAD07C1100FAA1AA3C38CA5C493FC25B2292_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mC1E683684695F637A7F6264DD486C8839D0C1264_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// m_BlockEventLimits = new NativeArray<RenderPassEvent>(k_RenderPassBlockCount, Allocator.Temp);
		NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		NativeArray_1__ctor_mC1E683684695F637A7F6264DD486C8839D0C1264((&L_0), 4, 2, 1, /*hidden argument*/NativeArray_1__ctor_mC1E683684695F637A7F6264DD486C8839D0C1264_RuntimeMethod_var);
		__this->set_m_BlockEventLimits_0(L_0);
		// m_BlockRanges = new NativeArray<int>(m_BlockEventLimits.Length + 1, Allocator.Temp);
		NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 * L_1 = __this->get_address_of_m_BlockEventLimits_0();
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 *)L_1)->___m_Length_1);
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeArray_1__ctor_m001FCAD07C1100FAA1AA3C38CA5C493FC25B2292((&L_3), ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), 2, 1, /*hidden argument*/NativeArray_1__ctor_m001FCAD07C1100FAA1AA3C38CA5C493FC25B2292_RuntimeMethod_var);
		__this->set_m_BlockRanges_1(L_3);
		// m_BlockRangeLengths = new NativeArray<int>(m_BlockRanges.Length, Allocator.Temp);
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_4 = __this->get_address_of_m_BlockRanges_1();
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_4)->___m_Length_1);
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_6;
		memset((&L_6), 0, sizeof(L_6));
		NativeArray_1__ctor_m001FCAD07C1100FAA1AA3C38CA5C493FC25B2292((&L_6), L_5, 2, 1, /*hidden argument*/NativeArray_1__ctor_m001FCAD07C1100FAA1AA3C38CA5C493FC25B2292_RuntimeMethod_var);
		__this->set_m_BlockRangeLengths_2(L_6);
		// m_BlockEventLimits[RenderPassBlock.BeforeRendering] = RenderPassEvent.BeforeRenderingPrepasses;
		NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 * L_7 = __this->get_address_of_m_BlockEventLimits_0();
		IL2CPP_RUNTIME_CLASS_INIT(RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_il2cpp_TypeInfo_var);
		int32_t L_8 = ((RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_StaticFields*)il2cpp_codegen_static_fields_for(RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_il2cpp_TypeInfo_var))->get_BeforeRendering_0();
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 *)L_7)->___m_Buffer_0, L_8, (((int32_t)150)));
		// m_BlockEventLimits[RenderPassBlock.MainRenderingOpaque] = RenderPassEvent.AfterRenderingOpaques;
		NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 * L_9 = __this->get_address_of_m_BlockEventLimits_0();
		int32_t L_10 = ((RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_StaticFields*)il2cpp_codegen_static_fields_for(RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_il2cpp_TypeInfo_var))->get_MainRenderingOpaque_1();
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 *)L_9)->___m_Buffer_0, L_10, (((int32_t)300)));
		// m_BlockEventLimits[RenderPassBlock.MainRenderingTransparent] = RenderPassEvent.AfterRenderingPostProcessing;
		NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 * L_11 = __this->get_address_of_m_BlockEventLimits_0();
		int32_t L_12 = ((RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_StaticFields*)il2cpp_codegen_static_fields_for(RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_il2cpp_TypeInfo_var))->get_MainRenderingTransparent_2();
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 *)L_11)->___m_Buffer_0, L_12, (((int32_t)600)));
		// m_BlockEventLimits[RenderPassBlock.AfterRendering] = (RenderPassEvent) Int32.MaxValue;
		NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 * L_13 = __this->get_address_of_m_BlockEventLimits_0();
		int32_t L_14 = ((RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_StaticFields*)il2cpp_codegen_static_fields_for(RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_il2cpp_TypeInfo_var))->get_AfterRendering_3();
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 *)L_13)->___m_Buffer_0, L_14, (((int32_t)2147483647LL)));
		// FillBlockRanges(activeRenderPassQueue);
		List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F * L_15 = ___activeRenderPassQueue0;
		RenderBlocks_FillBlockRanges_m50B52719B25B3F22AE58DECB33902D22A41DC422((RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1 *)__this, L_15, /*hidden argument*/NULL);
		// m_BlockEventLimits.Dispose();
		NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 * L_16 = __this->get_address_of_m_BlockEventLimits_0();
		NativeArray_1_Dispose_mB770E3C3D16F3E41F3E9190617659B7141EA7EA0((NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 *)L_16, /*hidden argument*/NativeArray_1_Dispose_mB770E3C3D16F3E41F3E9190617659B7141EA7EA0_RuntimeMethod_var);
		// for (int i = 0; i < m_BlockRanges.Length - 1; i++)
		V_0 = 0;
		goto IL_00df;
	}

IL_00b1:
	{
		// m_BlockRangeLengths[i] = m_BlockRanges[i + 1] - m_BlockRanges[i];
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_17 = __this->get_address_of_m_BlockRangeLengths_2();
		int32_t L_18 = V_0;
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_19 = __this->get_address_of_m_BlockRanges_1();
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_19)->___m_Buffer_0, ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)));
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_22 = __this->get_address_of_m_BlockRanges_1();
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_22)->___m_Buffer_0, L_23);
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_17)->___m_Buffer_0, L_18, (((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)L_24))));
		// for (int i = 0; i < m_BlockRanges.Length - 1; i++)
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_00df:
	{
		// for (int i = 0; i < m_BlockRanges.Length - 1; i++)
		int32_t L_26 = V_0;
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_27 = __this->get_address_of_m_BlockRanges_1();
		int32_t L_28;
		L_28 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_27)->___m_Length_1);
		V_1 = (bool)((((int32_t)L_26) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1))))? 1 : 0);
		bool L_29 = V_1;
		if (L_29)
		{
			goto IL_00b1;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RenderBlocks__ctor_m907248A1C82B9202FB5114FC79989A6BE2467DAA_AdjustorThunk (RuntimeObject * __this, List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F * ___activeRenderPassQueue0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1 * _thisAdjusted = reinterpret_cast<RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1 *>(__this + _offset);
	RenderBlocks__ctor_m907248A1C82B9202FB5114FC79989A6BE2467DAA(_thisAdjusted, ___activeRenderPassQueue0, method);
}
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderBlocks_Dispose_m5DB0A58767376A28BF484F88BCD97400EEB11FF3 (RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m69DBDA47FE3991A47E9CFCBFB3292676D22D7655_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_BlockRangeLengths.Dispose();
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_0 = __this->get_address_of_m_BlockRangeLengths_2();
		NativeArray_1_Dispose_m69DBDA47FE3991A47E9CFCBFB3292676D22D7655((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_0, /*hidden argument*/NativeArray_1_Dispose_m69DBDA47FE3991A47E9CFCBFB3292676D22D7655_RuntimeMethod_var);
		// m_BlockRanges.Dispose();
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_1 = __this->get_address_of_m_BlockRanges_1();
		NativeArray_1_Dispose_m69DBDA47FE3991A47E9CFCBFB3292676D22D7655((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_1, /*hidden argument*/NativeArray_1_Dispose_m69DBDA47FE3991A47E9CFCBFB3292676D22D7655_RuntimeMethod_var);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RenderBlocks_Dispose_m5DB0A58767376A28BF484F88BCD97400EEB11FF3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1 * _thisAdjusted = reinterpret_cast<RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1 *>(__this + _offset);
	RenderBlocks_Dispose_m5DB0A58767376A28BF484F88BCD97400EEB11FF3(_thisAdjusted, method);
}
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks::FillBlockRanges(System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRenderPass>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderBlocks_FillBlockRanges_m50B52719B25B3F22AE58DECB33902D22A41DC422 (RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1 * __this, List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F * ___activeRenderPassQueue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B26D5D1FBF1760D3A3791A96B2E2DBFDD7AB6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7897CAC5C03FBB2A5AF3616776991B75461BC0A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B6_0 = 0;
	{
		// int currRangeIndex = 0;
		V_0 = 0;
		// int currRenderPass = 0;
		V_1 = 0;
		// m_BlockRanges[currRangeIndex++] = 0;
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_0 = __this->get_address_of_m_BlockRanges_1();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_0)->___m_Buffer_0, L_2, (0));
		// for (int i = 0; i < m_BlockEventLimits.Length - 1; ++i)
		V_2 = 0;
		goto IL_0063;
	}

IL_001b:
	{
		goto IL_0022;
	}

IL_001e:
	{
		// currRenderPass++;
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0022:
	{
		// while (currRenderPass < activeRenderPassQueue.Count &&
		//        activeRenderPassQueue[currRenderPass].renderPassEvent < m_BlockEventLimits[i])
		int32_t L_4 = V_1;
		List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F * L_5 = ___activeRenderPassQueue0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m1B26D5D1FBF1760D3A3791A96B2E2DBFDD7AB6E5_inline(L_5, /*hidden argument*/List_1_get_Count_m1B26D5D1FBF1760D3A3791A96B2E2DBFDD7AB6E5_RuntimeMethod_var);
		if ((((int32_t)L_4) >= ((int32_t)L_6)))
		{
			goto IL_0047;
		}
	}
	{
		List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F * L_7 = ___activeRenderPassQueue0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA * L_9;
		L_9 = List_1_get_Item_m7897CAC5C03FBB2A5AF3616776991B75461BC0A5_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_m7897CAC5C03FBB2A5AF3616776991B75461BC0A5_RuntimeMethod_var);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = ScriptableRenderPass_get_renderPassEvent_mFAFCBC84D67233B252C29E2AD3DBBA392264F2B4_inline(L_9, /*hidden argument*/NULL);
		NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 * L_11 = __this->get_address_of_m_BlockEventLimits_0();
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 *)L_11)->___m_Buffer_0, L_12);
		G_B6_0 = ((((int32_t)L_10) < ((int32_t)L_13))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B6_0 = 0;
	}

IL_0048:
	{
		V_3 = (bool)G_B6_0;
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_001e;
		}
	}
	{
		// m_BlockRanges[currRangeIndex++] = currRenderPass;
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_15 = __this->get_address_of_m_BlockRanges_1();
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		int32_t L_18 = V_1;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_15)->___m_Buffer_0, L_17, (L_18));
		// for (int i = 0; i < m_BlockEventLimits.Length - 1; ++i)
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0063:
	{
		// for (int i = 0; i < m_BlockEventLimits.Length - 1; ++i)
		int32_t L_20 = V_2;
		NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 * L_21 = __this->get_address_of_m_BlockEventLimits_0();
		int32_t L_22;
		L_22 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 *)L_21)->___m_Length_1);
		V_4 = (bool)((((int32_t)L_20) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1))))? 1 : 0);
		bool L_23 = V_4;
		if (L_23)
		{
			goto IL_001b;
		}
	}
	{
		// m_BlockRanges[currRangeIndex] = activeRenderPassQueue.Count;
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_24 = __this->get_address_of_m_BlockRanges_1();
		int32_t L_25 = V_0;
		List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F * L_26 = ___activeRenderPassQueue0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m1B26D5D1FBF1760D3A3791A96B2E2DBFDD7AB6E5_inline(L_26, /*hidden argument*/List_1_get_Count_m1B26D5D1FBF1760D3A3791A96B2E2DBFDD7AB6E5_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_24)->___m_Buffer_0, L_25, (L_27));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RenderBlocks_FillBlockRanges_m50B52719B25B3F22AE58DECB33902D22A41DC422_AdjustorThunk (RuntimeObject * __this, List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F * ___activeRenderPassQueue0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1 * _thisAdjusted = reinterpret_cast<RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1 *>(__this + _offset);
	RenderBlocks_FillBlockRanges_m50B52719B25B3F22AE58DECB33902D22A41DC422(_thisAdjusted, ___activeRenderPassQueue0, method);
}
// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderBlocks_GetLength_mB36C7322D5F7A3F7F26DF9FCB3651802D0FC26AD (RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return m_BlockRangeLengths[index];
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_0 = __this->get_address_of_m_BlockRangeLengths_2();
		int32_t L_1 = ___index0;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_0)->___m_Buffer_0, L_1);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t RenderBlocks_GetLength_mB36C7322D5F7A3F7F26DF9FCB3651802D0FC26AD_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1 * _thisAdjusted = reinterpret_cast<RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RenderBlocks_GetLength_mB36C7322D5F7A3F7F26DF9FCB3651802D0FC26AD(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks/BlockRange UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks::GetRange(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329  RenderBlocks_GetRange_mAD9FAE2D354F81323FB0763CBCADF51CFEAD6908 (RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new BlockRange(m_BlockRanges[index], m_BlockRanges[index + 1]);
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_0 = __this->get_address_of_m_BlockRanges_1();
		int32_t L_1 = ___index0;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_0)->___m_Buffer_0, L_1);
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_3 = __this->get_address_of_m_BlockRanges_1();
		int32_t L_4 = ___index0;
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_3)->___m_Buffer_0, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329  L_6;
		memset((&L_6), 0, sizeof(L_6));
		BlockRange__ctor_m1A25D706EC61BD6C7D00C8DDA41F7F336B4196C6((&L_6), L_2, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329  RenderBlocks_GetRange_mAD9FAE2D354F81323FB0763CBCADF51CFEAD6908_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1 * _thisAdjusted = reinterpret_cast<RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1 *>(__this + _offset);
	BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329  _returnValue;
	_returnValue = RenderBlocks_GetRange_mAD9FAE2D354F81323FB0763CBCADF51CFEAD6908(_thisAdjusted, ___index0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderer/RenderPassBlock::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPassBlock__cctor_mF00C8FE23B2A2EDDB8341F9627D1C91C997C3902 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int BeforeRendering = 0;
		((RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_StaticFields*)il2cpp_codegen_static_fields_for(RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_il2cpp_TypeInfo_var))->set_BeforeRendering_0(0);
		// public static readonly int MainRenderingOpaque = 1;
		((RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_StaticFields*)il2cpp_codegen_static_fields_for(RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_il2cpp_TypeInfo_var))->set_MainRenderingOpaque_1(1);
		// public static readonly int MainRenderingTransparent = 2;
		((RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_StaticFields*)il2cpp_codegen_static_fields_for(RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_il2cpp_TypeInfo_var))->set_MainRenderingTransparent_2(2);
		// public static readonly int AfterRendering = 3;
		((RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_StaticFields*)il2cpp_codegen_static_fields_for(RenderPassBlock_tADF8102D1A508259604BD391744A18A6B41C216C_il2cpp_TypeInfo_var))->set_AfterRendering_3(3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures::get_cameraStacking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderingFeatures_get_cameraStacking_m3AFCF135E16888031294C27633434A09E9CB7A3D (RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404 * __this, const RuntimeMethod* method)
{
	{
		// public bool cameraStacking { get; set; } = false;
		bool L_0 = __this->get_U3CcameraStackingU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures::set_cameraStacking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderingFeatures_set_cameraStacking_m3867C2623C99D5869B13CC720EA3045925D0F814 (RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool cameraStacking { get; set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CcameraStackingU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures::get_msaa()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderingFeatures_get_msaa_m7F96145C6506A6545BF41DE50106CF9E2AE26175 (RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404 * __this, const RuntimeMethod* method)
{
	{
		// public bool msaa { get; set; } = true;
		bool L_0 = __this->get_U3CmsaaU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures::set_msaa(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderingFeatures_set_msaa_m714C26907FACB9CF75F6937219546EB8B8A0723E (RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool msaa { get; set; } = true;
		bool L_0 = ___value0;
		__this->set_U3CmsaaU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderingFeatures__ctor_m5F920B09455AD646C1AA73793A52956615C0E8E1 (RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404 * __this, const RuntimeMethod* method)
{
	{
		// public bool cameraStacking { get; set; } = false;
		__this->set_U3CcameraStackingU3Ek__BackingField_0((bool)0);
		// public bool msaa { get; set; } = true;
		__this->set_U3CmsaaU3Ek__BackingField_1((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.ShaderUtils/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mBBF0934C9F1A0308ACC29BBD599C1CCFD252D227 (U3CU3Ec__DisplayClass2_0_tA907A016E0C359EBDDC774D0987930EA70877B40 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Rendering.Universal.ShaderUtils/<>c__DisplayClass2_0::<GetEnumFromPath>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_0_U3CGetEnumFromPathU3Eb__0_m695093871D95528442E5C8CB4DFA712791943473 (U3CU3Ec__DisplayClass2_0_tA907A016E0C359EBDDC774D0987930EA70877B40 * __this, String_t* ___m0, const RuntimeMethod* method)
{
	{
		// var index = Array.FindIndex(s_ShaderPaths, m => m == path);
		String_t* L_0 = ___m0;
		String_t* L_1 = __this->get_path_0();
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.Rendering.Universal.ShadowUtility/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2E841B9E2F48544E448A62B8FBCADE284E39D450 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA26AB1914240759F2BFCB355DFC8A90C4DBEDCD2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA26AB1914240759F2BFCB355DFC8A90C4DBEDCD2 * L_0 = (U3CU3Ec_tA26AB1914240759F2BFCB355DFC8A90C4DBEDCD2 *)il2cpp_codegen_object_new(U3CU3Ec_tA26AB1914240759F2BFCB355DFC8A90C4DBEDCD2_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m01B294FCAB0017F2E8E79B9FD1F710E060CED3B6(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tA26AB1914240759F2BFCB355DFC8A90C4DBEDCD2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA26AB1914240759F2BFCB355DFC8A90C4DBEDCD2_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.Rendering.Universal.ShadowUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m01B294FCAB0017F2E8E79B9FD1F710E060CED3B6 (U3CU3Ec_tA26AB1914240759F2BFCB355DFC8A90C4DBEDCD2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Experimental.Rendering.Universal.ShadowUtility/<>c::<GenerateShadowMesh>b__8_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGenerateShadowMeshU3Eb__8_0_mB7ACB3C2B88649CC0017B8F028BB6575B7F8D6C2 (U3CU3Ec_tA26AB1914240759F2BFCB355DFC8A90C4DBEDCD2 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// var indicesI = tessI.Elements.Select(i => i).ToArray();
		int32_t L_0 = ___i0;
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Experimental.Rendering.Universal.ShadowUtility/<>c::<GenerateShadowMesh>b__8_1(UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec_U3CGenerateShadowMeshU3Eb__8_1_m4F9DE5301D88CFFD1384FD3E0BC620FA0DD0D707 (U3CU3Ec_tA26AB1914240759F2BFCB355DFC8A90C4DBEDCD2 * __this, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  ___v0, const RuntimeMethod* method)
{
	{
		// var verticesI = tessI.Vertices.Select(v => new Vector3(v.Position.X, v.Position.Y, 0)).ToArray();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_0 = ___v0;
		Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  L_1 = L_0.get_Position_0();
		float L_2 = L_1.get_X_1();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_3 = ___v0;
		Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  L_4 = L_3.get_Position_0();
		float L_5 = L_4.get_Y_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), L_2, L_5, (0.0f), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Color UnityEngine.Experimental.Rendering.Universal.ShadowUtility/<>c::<GenerateShadowMesh>b__8_2(UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  U3CU3Ec_U3CGenerateShadowMeshU3Eb__8_2_m81E9061CFF18F9E4CED45F7169EFE5AAB7D7B716 (U3CU3Ec_tA26AB1914240759F2BFCB355DFC8A90C4DBEDCD2 * __this, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var extrusionI = tessI.Vertices.Select(v => new Color(((Color)v.Data).r, ((Color)v.Data).g, ((Color)v.Data).b, ((Color)v.Data).a)).ToArray();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_0 = ___v0;
		RuntimeObject * L_1 = L_0.get_Data_1();
		float L_2 = ((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)UnBox(L_1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var))->get_r_0();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_3 = ___v0;
		RuntimeObject * L_4 = L_3.get_Data_1();
		float L_5 = ((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)UnBox(L_4, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var))->get_g_1();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_6 = ___v0;
		RuntimeObject * L_7 = L_6.get_Data_1();
		float L_8 = ((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)UnBox(L_7, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var))->get_b_2();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_9 = ___v0;
		RuntimeObject * L_10 = L_9.get_Data_1();
		float L_11 = ((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)UnBox(L_10, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var))->get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge
IL2CPP_EXTERN_C void Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshal_pinvoke(const Edge_tC11235216D5E71087549B2CB09A27043F02FB278& unmarshaled, Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshaled_pinvoke& marshaled)
{
	marshaled.___vertexIndex0_0 = unmarshaled.get_vertexIndex0_0();
	marshaled.___vertexIndex1_1 = unmarshaled.get_vertexIndex1_1();
	marshaled.___tangent_2 = unmarshaled.get_tangent_2();
	marshaled.___compareReversed_3 = static_cast<int32_t>(unmarshaled.get_compareReversed_3());
}
IL2CPP_EXTERN_C void Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshal_pinvoke_back(const Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshaled_pinvoke& marshaled, Edge_tC11235216D5E71087549B2CB09A27043F02FB278& unmarshaled)
{
	int32_t unmarshaled_vertexIndex0_temp_0 = 0;
	unmarshaled_vertexIndex0_temp_0 = marshaled.___vertexIndex0_0;
	unmarshaled.set_vertexIndex0_0(unmarshaled_vertexIndex0_temp_0);
	int32_t unmarshaled_vertexIndex1_temp_1 = 0;
	unmarshaled_vertexIndex1_temp_1 = marshaled.___vertexIndex1_1;
	unmarshaled.set_vertexIndex1_1(unmarshaled_vertexIndex1_temp_1);
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  unmarshaled_tangent_temp_2;
	memset((&unmarshaled_tangent_temp_2), 0, sizeof(unmarshaled_tangent_temp_2));
	unmarshaled_tangent_temp_2 = marshaled.___tangent_2;
	unmarshaled.set_tangent_2(unmarshaled_tangent_temp_2);
	bool unmarshaled_compareReversed_temp_3 = false;
	unmarshaled_compareReversed_temp_3 = static_cast<bool>(marshaled.___compareReversed_3);
	unmarshaled.set_compareReversed_3(unmarshaled_compareReversed_temp_3);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge
IL2CPP_EXTERN_C void Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshal_pinvoke_cleanup(Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge
IL2CPP_EXTERN_C void Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshal_com(const Edge_tC11235216D5E71087549B2CB09A27043F02FB278& unmarshaled, Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshaled_com& marshaled)
{
	marshaled.___vertexIndex0_0 = unmarshaled.get_vertexIndex0_0();
	marshaled.___vertexIndex1_1 = unmarshaled.get_vertexIndex1_1();
	marshaled.___tangent_2 = unmarshaled.get_tangent_2();
	marshaled.___compareReversed_3 = static_cast<int32_t>(unmarshaled.get_compareReversed_3());
}
IL2CPP_EXTERN_C void Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshal_com_back(const Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshaled_com& marshaled, Edge_tC11235216D5E71087549B2CB09A27043F02FB278& unmarshaled)
{
	int32_t unmarshaled_vertexIndex0_temp_0 = 0;
	unmarshaled_vertexIndex0_temp_0 = marshaled.___vertexIndex0_0;
	unmarshaled.set_vertexIndex0_0(unmarshaled_vertexIndex0_temp_0);
	int32_t unmarshaled_vertexIndex1_temp_1 = 0;
	unmarshaled_vertexIndex1_temp_1 = marshaled.___vertexIndex1_1;
	unmarshaled.set_vertexIndex1_1(unmarshaled_vertexIndex1_temp_1);
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  unmarshaled_tangent_temp_2;
	memset((&unmarshaled_tangent_temp_2), 0, sizeof(unmarshaled_tangent_temp_2));
	unmarshaled_tangent_temp_2 = marshaled.___tangent_2;
	unmarshaled.set_tangent_2(unmarshaled_tangent_temp_2);
	bool unmarshaled_compareReversed_temp_3 = false;
	unmarshaled_compareReversed_temp_3 = static_cast<bool>(marshaled.___compareReversed_3);
	unmarshaled.set_compareReversed_3(unmarshaled_compareReversed_temp_3);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge
IL2CPP_EXTERN_C void Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshal_com_cleanup(Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge::AssignVertexIndices(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_AssignVertexIndices_m3E1B5A9AF2B82E8C58B5437699CBFAA67DB07D7C (Edge_tC11235216D5E71087549B2CB09A27043F02FB278 * __this, int32_t ___vi00, int32_t ___vi11, const RuntimeMethod* method)
{
	{
		// vertexIndex0 = vi0;
		int32_t L_0 = ___vi00;
		__this->set_vertexIndex0_0(L_0);
		// vertexIndex1 = vi1;
		int32_t L_1 = ___vi11;
		__this->set_vertexIndex1_1(L_1);
		// compareReversed = vi0 > vi1;
		int32_t L_2 = ___vi00;
		int32_t L_3 = ___vi11;
		__this->set_compareReversed_3((bool)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Edge_AssignVertexIndices_m3E1B5A9AF2B82E8C58B5437699CBFAA67DB07D7C_AdjustorThunk (RuntimeObject * __this, int32_t ___vi00, int32_t ___vi11, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Edge_tC11235216D5E71087549B2CB09A27043F02FB278 * _thisAdjusted = reinterpret_cast<Edge_tC11235216D5E71087549B2CB09A27043F02FB278 *>(__this + _offset);
	Edge_AssignVertexIndices_m3E1B5A9AF2B82E8C58B5437699CBFAA67DB07D7C(_thisAdjusted, ___vi00, ___vi11, method);
}
// System.Int32 UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge::Compare(UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge,UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Edge_Compare_mFDE4C3C7F47390510EB40DF546BE014C5AA69A2B (Edge_tC11235216D5E71087549B2CB09A27043F02FB278 * __this, Edge_tC11235216D5E71087549B2CB09A27043F02FB278  ___a0, Edge_tC11235216D5E71087549B2CB09A27043F02FB278  ___b1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// int adjustedVertexIndex0A = a.compareReversed ? a.vertexIndex1 : a.vertexIndex0;
		Edge_tC11235216D5E71087549B2CB09A27043F02FB278  L_0 = ___a0;
		bool L_1 = L_0.get_compareReversed_3();
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		Edge_tC11235216D5E71087549B2CB09A27043F02FB278  L_2 = ___a0;
		int32_t L_3 = L_2.get_vertexIndex0_0();
		G_B3_0 = L_3;
		goto IL_0017;
	}

IL_0011:
	{
		Edge_tC11235216D5E71087549B2CB09A27043F02FB278  L_4 = ___a0;
		int32_t L_5 = L_4.get_vertexIndex1_1();
		G_B3_0 = L_5;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		// int adjustedVertexIndex1A = a.compareReversed ? a.vertexIndex0 : a.vertexIndex1;
		Edge_tC11235216D5E71087549B2CB09A27043F02FB278  L_6 = ___a0;
		bool L_7 = L_6.get_compareReversed_3();
		if (L_7)
		{
			goto IL_0028;
		}
	}
	{
		Edge_tC11235216D5E71087549B2CB09A27043F02FB278  L_8 = ___a0;
		int32_t L_9 = L_8.get_vertexIndex1_1();
		G_B6_0 = L_9;
		goto IL_002e;
	}

IL_0028:
	{
		Edge_tC11235216D5E71087549B2CB09A27043F02FB278  L_10 = ___a0;
		int32_t L_11 = L_10.get_vertexIndex0_0();
		G_B6_0 = L_11;
	}

IL_002e:
	{
		V_1 = G_B6_0;
		// int adjustedVertexIndex0B = b.compareReversed ? b.vertexIndex1 : b.vertexIndex0;
		Edge_tC11235216D5E71087549B2CB09A27043F02FB278  L_12 = ___b1;
		bool L_13 = L_12.get_compareReversed_3();
		if (L_13)
		{
			goto IL_003f;
		}
	}
	{
		Edge_tC11235216D5E71087549B2CB09A27043F02FB278  L_14 = ___b1;
		int32_t L_15 = L_14.get_vertexIndex0_0();
		G_B9_0 = L_15;
		goto IL_0045;
	}

IL_003f:
	{
		Edge_tC11235216D5E71087549B2CB09A27043F02FB278  L_16 = ___b1;
		int32_t L_17 = L_16.get_vertexIndex1_1();
		G_B9_0 = L_17;
	}

IL_0045:
	{
		V_2 = G_B9_0;
		// int adjustedVertexIndex1B = b.compareReversed ? b.vertexIndex0 : b.vertexIndex1;
		Edge_tC11235216D5E71087549B2CB09A27043F02FB278  L_18 = ___b1;
		bool L_19 = L_18.get_compareReversed_3();
		if (L_19)
		{
			goto IL_0056;
		}
	}
	{
		Edge_tC11235216D5E71087549B2CB09A27043F02FB278  L_20 = ___b1;
		int32_t L_21 = L_20.get_vertexIndex1_1();
		G_B12_0 = L_21;
		goto IL_005c;
	}

IL_0056:
	{
		Edge_tC11235216D5E71087549B2CB09A27043F02FB278  L_22 = ___b1;
		int32_t L_23 = L_22.get_vertexIndex0_0();
		G_B12_0 = L_23;
	}

IL_005c:
	{
		V_3 = G_B12_0;
		// int deltaVI0 = adjustedVertexIndex0A - adjustedVertexIndex0B;
		int32_t L_24 = V_0;
		int32_t L_25 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25));
		// int deltaVI1 = adjustedVertexIndex1A - adjustedVertexIndex1B;
		int32_t L_26 = V_1;
		int32_t L_27 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)L_27));
		// if (deltaVI0 == 0)
		int32_t L_28 = V_4;
		V_6 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_6;
		if (!L_29)
		{
			goto IL_0078;
		}
	}
	{
		// return deltaVI1;
		int32_t L_30 = V_5;
		V_7 = L_30;
		goto IL_007e;
	}

IL_0078:
	{
		// return deltaVI0;
		int32_t L_31 = V_4;
		V_7 = L_31;
		goto IL_007e;
	}

IL_007e:
	{
		// }
		int32_t L_32 = V_7;
		return L_32;
	}
}
IL2CPP_EXTERN_C  int32_t Edge_Compare_mFDE4C3C7F47390510EB40DF546BE014C5AA69A2B_AdjustorThunk (RuntimeObject * __this, Edge_tC11235216D5E71087549B2CB09A27043F02FB278  ___a0, Edge_tC11235216D5E71087549B2CB09A27043F02FB278  ___b1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Edge_tC11235216D5E71087549B2CB09A27043F02FB278 * _thisAdjusted = reinterpret_cast<Edge_tC11235216D5E71087549B2CB09A27043F02FB278 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Edge_Compare_mFDE4C3C7F47390510EB40DF546BE014C5AA69A2B(_thisAdjusted, ___a0, ___b1, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge::CompareTo(UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Edge_CompareTo_m131314C4376EC19CB1FE23CFB8325FAA1658FA1C (Edge_tC11235216D5E71087549B2CB09A27043F02FB278 * __this, Edge_tC11235216D5E71087549B2CB09A27043F02FB278  ___edgeToCompare0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return Compare(this, edgeToCompare);
		Edge_tC11235216D5E71087549B2CB09A27043F02FB278  L_0 = (*(Edge_tC11235216D5E71087549B2CB09A27043F02FB278 *)__this);
		Edge_tC11235216D5E71087549B2CB09A27043F02FB278  L_1 = ___edgeToCompare0;
		int32_t L_2;
		L_2 = Edge_Compare_mFDE4C3C7F47390510EB40DF546BE014C5AA69A2B((Edge_tC11235216D5E71087549B2CB09A27043F02FB278 *)__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t Edge_CompareTo_m131314C4376EC19CB1FE23CFB8325FAA1658FA1C_AdjustorThunk (RuntimeObject * __this, Edge_tC11235216D5E71087549B2CB09A27043F02FB278  ___edgeToCompare0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Edge_tC11235216D5E71087549B2CB09A27043F02FB278 * _thisAdjusted = reinterpret_cast<Edge_tC11235216D5E71087549B2CB09A27043F02FB278 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Edge_CompareTo_m131314C4376EC19CB1FE23CFB8325FAA1658FA1C(_thisAdjusted, ___edgeToCompare0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Tess/ActiveRegion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveRegion__ctor_mC78DA43BB05D9F0091C5FDBF34189F8D6078800C (ActiveRegion_tCA66125CCAEAF17E6FA218A9BFD6007E85FA4EBA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.UniversalAdditionalCameraData/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7B9C47974B7937DFAFFFE4CD197FDC37B206A25B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE7F5CE7780F26678A15FEF4C6D58C2101212BA4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE7F5CE7780F26678A15FEF4C6D58C2101212BA4C * L_0 = (U3CU3Ec_tE7F5CE7780F26678A15FEF4C6D58C2101212BA4C *)il2cpp_codegen_object_new(U3CU3Ec_tE7F5CE7780F26678A15FEF4C6D58C2101212BA4C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m7C605FDEF818101909BBF36ACE730607B196309D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE7F5CE7780F26678A15FEF4C6D58C2101212BA4C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE7F5CE7780F26678A15FEF4C6D58C2101212BA4C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.UniversalAdditionalCameraData/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7C605FDEF818101909BBF36ACE730607B196309D (U3CU3Ec_tE7F5CE7780F26678A15FEF4C6D58C2101212BA4C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData/<>c::<UpdateCameraStack>b__41_0(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CUpdateCameraStackU3Eb__41_0_m5484EA56A0C009FE76D2DE3ECBDF1F34D4EB74CC (U3CU3Ec_tE7F5CE7780F26678A15FEF4C6D58C2101212BA4C * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Cameras.RemoveAll(cam => cam == null);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___cam0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.UniversalRenderPipeline/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6C57B6DE84B7132C879F2FF50C62E51B21E2C911 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t455C8088007063E0848091BFA6C351BACBE76DE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t455C8088007063E0848091BFA6C351BACBE76DE7 * L_0 = (U3CU3Ec_t455C8088007063E0848091BFA6C351BACBE76DE7 *)il2cpp_codegen_object_new(U3CU3Ec_t455C8088007063E0848091BFA6C351BACBE76DE7_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4FD60E5AB7E158C8D85D0B7702CA709DB95C61B3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t455C8088007063E0848091BFA6C351BACBE76DE7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t455C8088007063E0848091BFA6C351BACBE76DE7_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.UniversalRenderPipeline/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4FD60E5AB7E158C8D85D0B7702CA709DB95C61B3 (U3CU3Ec_t455C8088007063E0848091BFA6C351BACBE76DE7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipeline/<>c::<.ctor>b__16_0(UnityEngine.Camera,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_ctorU3Eb__16_0_m24565CBCEFB813023A4D695809775C771DDCE6CA (U3CU3Ec_t455C8088007063E0848091BFA6C351BACBE76DE7 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera10, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// Comparison<Camera> cameraComparison = (camera1, camera2) => { return (int)camera1.depth - (int)camera2.depth; };
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___camera10;
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_depth_m063B48665DB9226949AC3A615362EA20193B823D(L_0, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___camera21;
		NullCheck(L_2);
		float L_3;
		L_3 = Camera_get_depth_m063B48665DB9226949AC3A615362EA20193B823D(L_2, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_1), (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_3)));
		goto IL_0013;
	}

IL_0013:
	{
		// Comparison<Camera> cameraComparison = (camera1, camera2) => { return (int)camera1.depth - (int)camera2.depth; };
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.Rendering.Universal.UniversalRenderPipeline/<>c::<.cctor>b__56_0(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__56_0_m916033764A0BFE4E85B1AC49F72334C522160E18 (U3CU3Ec_t455C8088007063E0848091BFA6C351BACBE76DE7 * __this, LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* ___requests0, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  ___lightsOutput1, const RuntimeMethod* method)
{
	LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Light_tA2F349FE839781469A0344CF6039B51512394275 * V_2 = NULL;
	bool V_3 = false;
	{
		// LightDataGI lightData = new LightDataGI();
		il2cpp_codegen_initobj((&V_0), sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 ));
		// for (int i = 0; i < requests.Length; i++)
		V_1 = 0;
		goto IL_002f;
	}

IL_000d:
	{
		// Light light = requests[i];
		LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* L_0 = ___requests0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_2 = L_3;
		// lightData.InitNoBake(light.GetInstanceID());
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_4 = V_2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_4, /*hidden argument*/NULL);
		LightDataGI_InitNoBake_mF600D612DE9A1CE4355C61317F6173E1AAEFBD57((LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)(&V_0), L_5, /*hidden argument*/NULL);
		// lightsOutput[i] = lightData;
		int32_t L_6 = V_1;
		LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  L_7 = V_0;
		IL2CPP_NATIVEARRAY_SET_ITEM(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 , ((NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 *)(&___lightsOutput1))->___m_Buffer_0, L_6, (L_7));
		// for (int i = 0; i < requests.Length; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002f:
	{
		// for (int i = 0; i < requests.Length; i++)
		int32_t L_9 = V_1;
		LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* L_10 = ___requests0;
		NullCheck(L_10);
		V_3 = (bool)((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))? 1 : 0);
		bool L_11 = V_3;
		if (L_11)
		{
			goto IL_000d;
		}
	}
	{
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling::TryGetOrAddCameraSampler(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * Profiling_TryGetOrAddCameraSampler_m54796F3ECF495B5F89FF19110BB95A2C2EA10123 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mABCD91B640CA38E90D89A02B1CC4E0249C62145B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m67DD82A95384FC31D204C1CB307668C13F13D742_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Profiling_t39C0DC7692E61CE063CD6F20CCCC7C5638435E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral327EE2A11980B2E517221882311651C5F4AB4F7B);
		s_Il2CppMethodInitialized = true;
	}
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * V_4 = NULL;
	{
		// ProfilingSampler ps = null;
		V_0 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)NULL;
		// int cameraId = camera.GetHashCode();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___camera0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_1 = L_1;
		// bool exists = s_HashSamplerCache.TryGetValue(cameraId, out ps);
		IL2CPP_RUNTIME_CLASS_INIT(Profiling_t39C0DC7692E61CE063CD6F20CCCC7C5638435E09_il2cpp_TypeInfo_var);
		Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738 * L_2 = ((Profiling_t39C0DC7692E61CE063CD6F20CCCC7C5638435E09_StaticFields*)il2cpp_codegen_static_fields_for(Profiling_t39C0DC7692E61CE063CD6F20CCCC7C5638435E09_il2cpp_TypeInfo_var))->get_s_HashSamplerCache_0();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m67DD82A95384FC31D204C1CB307668C13F13D742(L_2, L_3, (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m67DD82A95384FC31D204C1CB307668C13F13D742_RuntimeMethod_var);
		V_2 = L_4;
		// if (!exists)
		bool L_5 = V_2;
		V_3 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		// ps = new ProfilingSampler( $"{nameof(UniversalRenderPipeline)}.{nameof(RenderSingleCamera)}: {camera.name}");
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7 = ___camera0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_7, /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral327EE2A11980B2E517221882311651C5F4AB4F7B, L_8, /*hidden argument*/NULL);
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_10 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_10, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// s_HashSamplerCache.Add(cameraId, ps);
		IL2CPP_RUNTIME_CLASS_INIT(Profiling_t39C0DC7692E61CE063CD6F20CCCC7C5638435E09_il2cpp_TypeInfo_var);
		Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738 * L_11 = ((Profiling_t39C0DC7692E61CE063CD6F20CCCC7C5638435E09_StaticFields*)il2cpp_codegen_static_fields_for(Profiling_t39C0DC7692E61CE063CD6F20CCCC7C5638435E09_il2cpp_TypeInfo_var))->get_s_HashSamplerCache_0();
		int32_t L_12 = V_1;
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_13 = V_0;
		NullCheck(L_11);
		Dictionary_2_Add_mABCD91B640CA38E90D89A02B1CC4E0249C62145B(L_11, L_12, L_13, /*hidden argument*/Dictionary_2_Add_mABCD91B640CA38E90D89A02B1CC4E0249C62145B_RuntimeMethod_var);
	}

IL_0045:
	{
		// return ps;
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_14 = V_0;
		V_4 = L_14;
		goto IL_004a;
	}

IL_004a:
	{
		// }
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_15 = V_4;
		return L_15;
	}
}
// System.Void UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profiling__cctor_m6DD89A3AD5E58ADE25F42E14A50CE1951B7E854C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m35A1CC2C64F6914C8489FD4CE7D2B4E6E82A5AAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Profiling_t39C0DC7692E61CE063CD6F20CCCC7C5638435E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<int, ProfilingSampler> s_HashSamplerCache = new Dictionary<int, ProfilingSampler>();
		Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738 * L_0 = (Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738 *)il2cpp_codegen_object_new(Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m35A1CC2C64F6914C8489FD4CE7D2B4E6E82A5AAD(L_0, /*hidden argument*/Dictionary_2__ctor_m35A1CC2C64F6914C8489FD4CE7D2B4E6E82A5AAD_RuntimeMethod_var);
		((Profiling_t39C0DC7692E61CE063CD6F20CCCC7C5638435E09_StaticFields*)il2cpp_codegen_static_fields_for(Profiling_t39C0DC7692E61CE063CD6F20CCCC7C5638435E09_il2cpp_TypeInfo_var))->set_s_HashSamplerCache_0(L_0);
		// public static readonly ProfilingSampler unknownSampler = new ProfilingSampler("Unknown");
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_1 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_1, _stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C, /*hidden argument*/NULL);
		((Profiling_t39C0DC7692E61CE063CD6F20CCCC7C5638435E09_StaticFields*)il2cpp_codegen_static_fields_for(Profiling_t39C0DC7692E61CE063CD6F20CCCC7C5638435E09_il2cpp_TypeInfo_var))->set_unknownSampler_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/MaterialResources::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialResources__ctor_mE5D5D1A9765064B5D2CBA69DD2EE59C70A31B8F6 (MaterialResources_tCF43A6C5DD1D40B13BA318B673BF24E0EE8244B9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/ShaderResources::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderResources__ctor_mACD74E2CFF83F561394B233F08972845B79EB5CF (ShaderResources_t27CE230476CFEDB08B4B6B2F246CD4949F5CF9C5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.XRPass/CustomMirrorView::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomMirrorView__ctor_m475059281857B20C7CE15BAC68A40B79D3AB0230 (CustomMirrorView_t85B3412384E1B25E4A3D103FDFCAD87FFA728027 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Rendering.Universal.XRPass/CustomMirrorView::Invoke(UnityEngine.Rendering.Universal.XRPass,UnityEngine.Rendering.CommandBuffer,UnityEngine.RenderTexture,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomMirrorView_Invoke_m3D97B0AEE1612273019D50A80D4C74D6D8CDD09B (CustomMirrorView_t85B3412384E1B25E4A3D103FDFCAD87FFA728027 * __this, XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * ___pass0, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cmd1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___rt2, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___viewport3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A *, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pass0, ___cmd1, ___rt2, ___viewport3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A *, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pass0, ___cmd1, ___rt2, ___viewport3, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(targetMethod, ___pass0, ___cmd1, ___rt2, ___viewport3);
					else
						GenericVirtActionInvoker3< CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(targetMethod, ___pass0, ___cmd1, ___rt2, ___viewport3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___pass0, ___cmd1, ___rt2, ___viewport3);
					else
						VirtActionInvoker3< CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___pass0, ___cmd1, ___rt2, ___viewport3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A *, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pass0, ___cmd1, ___rt2, ___viewport3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A *, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(targetMethod, targetThis, ___pass0, ___cmd1, ___rt2, ___viewport3);
					else
						GenericVirtActionInvoker4< XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A *, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(targetMethod, targetThis, ___pass0, ___cmd1, ___rt2, ___viewport3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A *, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pass0, ___cmd1, ___rt2, ___viewport3);
					else
						VirtActionInvoker4< XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A *, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pass0, ___cmd1, ___rt2, ___viewport3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A *, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___pass0, ___cmd1, ___rt2, ___viewport3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A *, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___pass0, ___cmd1, ___rt2, ___viewport3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Rendering.Universal.XRPass/CustomMirrorView::BeginInvoke(UnityEngine.Rendering.Universal.XRPass,UnityEngine.Rendering.CommandBuffer,UnityEngine.RenderTexture,UnityEngine.Rect,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomMirrorView_BeginInvoke_mDD89A15673A2E48EDC69BA2829E7B39F3B703637 (CustomMirrorView_t85B3412384E1B25E4A3D103FDFCAD87FFA728027 * __this, XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * ___pass0, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cmd1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___rt2, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___viewport3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___pass0;
	__d_args[1] = ___cmd1;
	__d_args[2] = ___rt2;
	__d_args[3] = Box(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_il2cpp_TypeInfo_var, &___viewport3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void UnityEngine.Rendering.Universal.XRPass/CustomMirrorView::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomMirrorView_EndInvoke_mD403A4F005650120E0A6D12C44B3BA44E5F38C35 (CustomMirrorView_t85B3412384E1B25E4A3D103FDFCAD87FFA728027 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.XRSystem/XRShaderIDs::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRShaderIDs__cctor_mF11B95778345BA7AC7CF34DA2ED6149C2B65CED2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral355871A53683A0CE41651908009466DB1F5FEBC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA17366220E713ADFBBB8558BF7AEB7BAA4CD1702);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2DC1C4F67F18CAF79E60F4F78FA88811E5E36C1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int _SourceTexArraySlice = Shader.PropertyToID("_SourceTexArraySlice");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralE2DC1C4F67F18CAF79E60F4F78FA88811E5E36C1, /*hidden argument*/NULL);
		((XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_StaticFields*)il2cpp_codegen_static_fields_for(XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_il2cpp_TypeInfo_var))->set__SourceTexArraySlice_0(L_0);
		// public static readonly int _SRGBRead            = Shader.PropertyToID("_SRGBRead");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralA17366220E713ADFBBB8558BF7AEB7BAA4CD1702, /*hidden argument*/NULL);
		((XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_StaticFields*)il2cpp_codegen_static_fields_for(XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_il2cpp_TypeInfo_var))->set__SRGBRead_1(L_1);
		// public static readonly int _SRGBWrite           = Shader.PropertyToID("_SRGBWrite");
		int32_t L_2;
		L_2 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral355871A53683A0CE41651908009466DB1F5FEBC7, /*hidden argument*/NULL);
		((XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_StaticFields*)il2cpp_codegen_static_fields_for(XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_il2cpp_TypeInfo_var))->set__SRGBWrite_2(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.XRSystemData/ShaderResources::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderResources__ctor_m35E93A20CFB6037D4AE810D25EC29BAF506BCD04 (ShaderResources_tD419B97943EFC871C08C6465BFB3F34ED72CBBB6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderer/Profiling/RenderBlock::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderBlock__cctor_m07164F16AD72144992D37F9568E2F33C7B08EFCF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderBlock_tBEC3973B1449F9E894570A7B5A44D25B2017D62C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral088F5103DAE59E9314BB73FAA5D3B1795AA80A24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B045E2D739D3915A98BB5E0296A98441E118DD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509024B23E1B755770EA1716E9719DC4A2E9C6EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15241D01BB37C045E429CFCC870A886B24A80D1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly ProfilingSampler beforeRendering          = new ProfilingSampler($"{k_Name}.{nameof(RenderPassBlock.BeforeRendering)}");
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_0 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_0, _stringLiteral509024B23E1B755770EA1716E9719DC4A2E9C6EF, /*hidden argument*/NULL);
		((RenderBlock_tBEC3973B1449F9E894570A7B5A44D25B2017D62C_StaticFields*)il2cpp_codegen_static_fields_for(RenderBlock_tBEC3973B1449F9E894570A7B5A44D25B2017D62C_il2cpp_TypeInfo_var))->set_beforeRendering_1(L_0);
		// public static readonly ProfilingSampler mainRenderingOpaque      = new ProfilingSampler($"{k_Name}.{nameof(RenderPassBlock.MainRenderingOpaque)}");
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_1 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_1, _stringLiteralA15241D01BB37C045E429CFCC870A886B24A80D1, /*hidden argument*/NULL);
		((RenderBlock_tBEC3973B1449F9E894570A7B5A44D25B2017D62C_StaticFields*)il2cpp_codegen_static_fields_for(RenderBlock_tBEC3973B1449F9E894570A7B5A44D25B2017D62C_il2cpp_TypeInfo_var))->set_mainRenderingOpaque_2(L_1);
		// public static readonly ProfilingSampler mainRenderingTransparent = new ProfilingSampler($"{k_Name}.{nameof(RenderPassBlock.MainRenderingTransparent)}");
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_2 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_2, _stringLiteral088F5103DAE59E9314BB73FAA5D3B1795AA80A24, /*hidden argument*/NULL);
		((RenderBlock_tBEC3973B1449F9E894570A7B5A44D25B2017D62C_StaticFields*)il2cpp_codegen_static_fields_for(RenderBlock_tBEC3973B1449F9E894570A7B5A44D25B2017D62C_il2cpp_TypeInfo_var))->set_mainRenderingTransparent_3(L_2);
		// public static readonly ProfilingSampler afterRendering           = new ProfilingSampler($"{k_Name}.{nameof(RenderPassBlock.AfterRendering)}");
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_3 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_3, _stringLiteral2B045E2D739D3915A98BB5E0296A98441E118DD3, /*hidden argument*/NULL);
		((RenderBlock_tBEC3973B1449F9E894570A7B5A44D25B2017D62C_StaticFields*)il2cpp_codegen_static_fields_for(RenderBlock_tBEC3973B1449F9E894570A7B5A44D25B2017D62C_il2cpp_TypeInfo_var))->set_afterRendering_4(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderer/Profiling/RenderPass::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPass__cctor_m4742F7F2CD90242DC57FE2BAD274E9EB10B43D01 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPass_t654BE67EC7D412BFA61B9B60A7679B2C59A0BDB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA73E9A514AB6BA241F22ECD97E1F6FB143B7A9DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly ProfilingSampler configure = new ProfilingSampler($"{k_Name}.{nameof(ScriptableRenderPass.Configure)}");
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_0 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_0, _stringLiteralA73E9A514AB6BA241F22ECD97E1F6FB143B7A9DF, /*hidden argument*/NULL);
		((RenderPass_t654BE67EC7D412BFA61B9B60A7679B2C59A0BDB9_StaticFields*)il2cpp_codegen_static_fields_for(RenderPass_t654BE67EC7D412BFA61B9B60A7679B2C59A0BDB9_il2cpp_TypeInfo_var))->set_configure_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks/BlockRange::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockRange__ctor_m1A25D706EC61BD6C7D00C8DDA41F7F336B4196C6 (BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 * __this, int32_t ___begin0, int32_t ___end1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 * G_B2_0 = NULL;
	BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 * G_B3_1 = NULL;
	BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 * G_B5_0 = NULL;
	BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 * G_B6_1 = NULL;
	{
		// Assertions.Assert.IsTrue(begin <= end);
		int32_t L_0 = ___begin0;
		int32_t L_1 = ___end1;
		IL2CPP_RUNTIME_CLASS_INIT(Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		Assert_IsTrue_m983A0A378ACBE8C0EC78AEDDC7CDF6251F0DCEDC((bool)((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// m_Current = begin < end ? begin : end;
		int32_t L_2 = ___begin0;
		int32_t L_3 = ___end1;
		G_B1_0 = __this;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			G_B2_0 = __this;
			goto IL_0016;
		}
	}
	{
		int32_t L_4 = ___end1;
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0016:
	{
		int32_t L_5 = ___begin0;
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		G_B3_1->set_m_Current_0(G_B3_0);
		// m_End   = end >= begin ? end : begin;
		int32_t L_6 = ___end1;
		int32_t L_7 = ___begin0;
		G_B4_0 = __this;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			G_B5_0 = __this;
			goto IL_0024;
		}
	}
	{
		int32_t L_8 = ___begin0;
		G_B6_0 = L_8;
		G_B6_1 = G_B4_0;
		goto IL_0025;
	}

IL_0024:
	{
		int32_t L_9 = ___end1;
		G_B6_0 = L_9;
		G_B6_1 = G_B5_0;
	}

IL_0025:
	{
		G_B6_1->set_m_End_1(G_B6_0);
		// m_Current -= 1;
		int32_t L_10 = __this->get_m_Current_0();
		__this->set_m_Current_0(((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BlockRange__ctor_m1A25D706EC61BD6C7D00C8DDA41F7F336B4196C6_AdjustorThunk (RuntimeObject * __this, int32_t ___begin0, int32_t ___end1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 * _thisAdjusted = reinterpret_cast<BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 *>(__this + _offset);
	BlockRange__ctor_m1A25D706EC61BD6C7D00C8DDA41F7F336B4196C6(_thisAdjusted, ___begin0, ___end1, method);
}
// UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks/BlockRange UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks/BlockRange::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329  BlockRange_GetEnumerator_m415616CE20A7D0C8CD6163A999DDD00F96263ECA (BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 * __this, const RuntimeMethod* method)
{
	BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public BlockRange GetEnumerator() { return this; }
		BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329  L_0 = (*(BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 *)__this);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public BlockRange GetEnumerator() { return this; }
		BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329  BlockRange_GetEnumerator_m415616CE20A7D0C8CD6163A999DDD00F96263ECA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 * _thisAdjusted = reinterpret_cast<BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 *>(__this + _offset);
	BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329  _returnValue;
	_returnValue = BlockRange_GetEnumerator_m415616CE20A7D0C8CD6163A999DDD00F96263ECA(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks/BlockRange::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BlockRange_MoveNext_mD839BDFE76EE3867E2AB17358B7E78A65B1A03B9 (BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// public bool MoveNext() { return ++m_Current < m_End; }
		int32_t L_0 = __this->get_m_Current_0();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		int32_t L_1 = V_0;
		__this->set_m_Current_0(L_1);
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_m_End_1();
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		goto IL_001d;
	}

IL_001d:
	{
		// public bool MoveNext() { return ++m_Current < m_End; }
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool BlockRange_MoveNext_mD839BDFE76EE3867E2AB17358B7E78A65B1A03B9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 * _thisAdjusted = reinterpret_cast<BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 *>(__this + _offset);
	bool _returnValue;
	_returnValue = BlockRange_MoveNext_mD839BDFE76EE3867E2AB17358B7E78A65B1A03B9(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks/BlockRange::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BlockRange_get_Current_mE2693DD2AC46EFE3F67DA70140BDE228C3EEFEAE (BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 * __this, const RuntimeMethod* method)
{
	{
		// public int Current { get => m_Current; }
		int32_t L_0 = __this->get_m_Current_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t BlockRange_get_Current_mE2693DD2AC46EFE3F67DA70140BDE228C3EEFEAE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 * _thisAdjusted = reinterpret_cast<BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BlockRange_get_Current_mE2693DD2AC46EFE3F67DA70140BDE228C3EEFEAE_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks/BlockRange::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockRange_Dispose_mD542E5C3A71A3BFA78B95907A00A79489AF5C714 (BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 * __this, const RuntimeMethod* method)
{
	{
		// public void Dispose() {}
		return;
	}
}
IL2CPP_EXTERN_C  void BlockRange_Dispose_mD542E5C3A71A3BFA78B95907A00A79489AF5C714_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 * _thisAdjusted = reinterpret_cast<BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 *>(__this + _offset);
	BlockRange_Dispose_mD542E5C3A71A3BFA78B95907A00A79489AF5C714(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipeline__cctor_m344F2F03599CE8C9520168C7A0C61AE4EB55ACED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC055EB677272ECB03EAE6A35BD064C00E89CBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral150E23F7EB9EFFF8736BC3ED290A2DC8F85A2D43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D0ADE43EA4B31A70EE3D0222D5B89B201786A35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622D58827F4D648D42584A558A4DB718DB3A5D3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7617AD9A8BB08A2EE20EE130A46017992FE1DAC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD2D0B8D9AC5400490848DF5DFE2A85EB1380AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92832D3159F78C5F88AC11744E8E09C41464C672);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD55BBE002A4BC0071CA6DBD44F5DB3747D7C007);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF2D2E12926702FF829550D91885E37FB7AD0E97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6A8468EB362203CA26E60195CD60E1AA2513A9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8B3C6035C05097B8D37222B0E2227A4F44FF43E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9318578B55C050E20BB84CED278EA5587351810);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA438FF199C699E7C62ABE67E79362A48E814795);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly ProfilingSampler beginFrameRendering  = new ProfilingSampler($"{nameof(RenderPipeline)}.{nameof(BeginFrameRendering)}");
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_0 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_0, _stringLiteral150E23F7EB9EFFF8736BC3ED290A2DC8F85A2D43, /*hidden argument*/NULL);
		((Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields*)il2cpp_codegen_static_fields_for(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_il2cpp_TypeInfo_var))->set_beginFrameRendering_0(L_0);
		// public static readonly ProfilingSampler endFrameRendering    = new ProfilingSampler($"{nameof(RenderPipeline)}.{nameof(EndFrameRendering)}");
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_1 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_1, _stringLiteral622D58827F4D648D42584A558A4DB718DB3A5D3F, /*hidden argument*/NULL);
		((Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields*)il2cpp_codegen_static_fields_for(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_il2cpp_TypeInfo_var))->set_endFrameRendering_1(L_1);
		// public static readonly ProfilingSampler beginCameraRendering = new ProfilingSampler($"{nameof(RenderPipeline)}.{nameof(BeginCameraRendering)}");
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_2 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_2, _stringLiteralF8B3C6035C05097B8D37222B0E2227A4F44FF43E, /*hidden argument*/NULL);
		((Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields*)il2cpp_codegen_static_fields_for(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_il2cpp_TypeInfo_var))->set_beginCameraRendering_2(L_2);
		// public static readonly ProfilingSampler endCameraRendering   = new ProfilingSampler($"{nameof(RenderPipeline)}.{nameof(EndCameraRendering)}");
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_3 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_3, _stringLiteral92832D3159F78C5F88AC11744E8E09C41464C672, /*hidden argument*/NULL);
		((Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields*)il2cpp_codegen_static_fields_for(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_il2cpp_TypeInfo_var))->set_endCameraRendering_3(L_3);
		// public static readonly ProfilingSampler initializeCameraData           = new ProfilingSampler($"{k_Name}.{nameof(InitializeCameraData)}");
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_4 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_4, _stringLiteralAD55BBE002A4BC0071CA6DBD44F5DB3747D7C007, /*hidden argument*/NULL);
		((Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields*)il2cpp_codegen_static_fields_for(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_il2cpp_TypeInfo_var))->set_initializeCameraData_5(L_4);
		// public static readonly ProfilingSampler initializeStackedCameraData    = new ProfilingSampler($"{k_Name}.{nameof(InitializeStackedCameraData)}");
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_5 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_5, _stringLiteral5D0ADE43EA4B31A70EE3D0222D5B89B201786A35, /*hidden argument*/NULL);
		((Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields*)il2cpp_codegen_static_fields_for(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_il2cpp_TypeInfo_var))->set_initializeStackedCameraData_6(L_5);
		// public static readonly ProfilingSampler initializeAdditionalCameraData = new ProfilingSampler($"{k_Name}.{nameof(InitializeAdditionalCameraData)}");
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_6 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_6, _stringLiteralD6A8468EB362203CA26E60195CD60E1AA2513A9C, /*hidden argument*/NULL);
		((Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields*)il2cpp_codegen_static_fields_for(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_il2cpp_TypeInfo_var))->set_initializeAdditionalCameraData_7(L_6);
		// public static readonly ProfilingSampler initializeRenderingData        = new ProfilingSampler($"{k_Name}.{nameof(InitializeRenderingData)}");
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_7 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_7, _stringLiteralBF2D2E12926702FF829550D91885E37FB7AD0E97, /*hidden argument*/NULL);
		((Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields*)il2cpp_codegen_static_fields_for(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_il2cpp_TypeInfo_var))->set_initializeRenderingData_8(L_7);
		// public static readonly ProfilingSampler initializeShadowData           = new ProfilingSampler($"{k_Name}.{nameof(InitializeShadowData)}");
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_8 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_8, _stringLiteralFA438FF199C699E7C62ABE67E79362A48E814795, /*hidden argument*/NULL);
		((Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields*)il2cpp_codegen_static_fields_for(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_il2cpp_TypeInfo_var))->set_initializeShadowData_9(L_8);
		// public static readonly ProfilingSampler initializeLightData            = new ProfilingSampler($"{k_Name}.{nameof(InitializeLightData)}");
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_9 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_9, _stringLiteralF9318578B55C050E20BB84CED278EA5587351810, /*hidden argument*/NULL);
		((Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields*)il2cpp_codegen_static_fields_for(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_il2cpp_TypeInfo_var))->set_initializeLightData_10(L_9);
		// public static readonly ProfilingSampler getPerObjectLightFlags         = new ProfilingSampler($"{k_Name}.{nameof(GetPerObjectLightFlags)}");
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_10 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_10, _stringLiteral8DD2D0B8D9AC5400490848DF5DFE2A85EB1380AC, /*hidden argument*/NULL);
		((Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields*)il2cpp_codegen_static_fields_for(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_il2cpp_TypeInfo_var))->set_getPerObjectLightFlags_11(L_10);
		// public static readonly ProfilingSampler getMainLightIndex              = new ProfilingSampler($"{k_Name}.{nameof(GetMainLightIndex)}");
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_11 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_11, _stringLiteral7617AD9A8BB08A2EE20EE130A46017992FE1DAC7, /*hidden argument*/NULL);
		((Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields*)il2cpp_codegen_static_fields_for(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_il2cpp_TypeInfo_var))->set_getMainLightIndex_12(L_11);
		// public static readonly ProfilingSampler setupPerFrameShaderConstants   = new ProfilingSampler($"{k_Name}.{nameof(SetupPerFrameShaderConstants)}");
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_12 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_12, _stringLiteral0FC055EB677272ECB03EAE6A35BD064C00E89CBB, /*hidden argument*/NULL);
		((Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_StaticFields*)il2cpp_codegen_static_fields_for(Pipeline_tEE01E7F95F73F2FCC1D7E462F7878E995E1765F6_il2cpp_TypeInfo_var))->set_setupPerFrameShaderConstants_13(L_12);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline/Context::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Context__cctor_m7CD4228E92B1B231B4E3C60833960E53E5384C3E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_t8BECE9FB3DB6EE3DFC66BAE423F28A0A468763AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778024949B6296D760E01A5C9A19C1BDCD9C4050);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly ProfilingSampler submit = new ProfilingSampler($"{k_Name}.{nameof(ScriptableRenderContext.Submit)}");
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_0 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_0, _stringLiteral778024949B6296D760E01A5C9A19C1BDCD9C4050, /*hidden argument*/NULL);
		((Context_t8BECE9FB3DB6EE3DFC66BAE423F28A0A468763AE_StaticFields*)il2cpp_codegen_static_fields_for(Context_t8BECE9FB3DB6EE3DFC66BAE423F28A0A468763AE_il2cpp_TypeInfo_var))->set_submit_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline/Renderer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer__cctor_m48394583BB032D2CD1CD45D88BFE9C11FAFEB397 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Renderer_t196605490C564E48831EDFEA040CF712FFDBE135_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20003DF48CDE7BC9F64F81EDAF1099FDD7F339F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB0F51847C1296E8FF634F30C60761FBE4C30200);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly ProfilingSampler setupCullingParameters = new ProfilingSampler($"{k_Name}.{nameof(ScriptableRenderer.SetupCullingParameters)}");
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_0 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_0, _stringLiteral20003DF48CDE7BC9F64F81EDAF1099FDD7F339F1, /*hidden argument*/NULL);
		((Renderer_t196605490C564E48831EDFEA040CF712FFDBE135_StaticFields*)il2cpp_codegen_static_fields_for(Renderer_t196605490C564E48831EDFEA040CF712FFDBE135_il2cpp_TypeInfo_var))->set_setupCullingParameters_1(L_0);
		// public static readonly ProfilingSampler setup                  = new ProfilingSampler($"{k_Name}.{nameof(ScriptableRenderer.Setup)}");
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_1 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_1, _stringLiteralBB0F51847C1296E8FF634F30C60761FBE4C30200, /*hidden argument*/NULL);
		((Renderer_t196605490C564E48831EDFEA040CF712FFDBE135_StaticFields*)il2cpp_codegen_static_fields_for(Renderer_t196605490C564E48831EDFEA040CF712FFDBE135_il2cpp_TypeInfo_var))->set_setup_2(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline/XR::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XR__cctor_mB3D74BB8CD66C85A950911086E515A5D73FA3350 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XR_tD069CFDA1F46495AC33865862CDA4DE58C5F9773_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F1BFCACEFDC98F691CA4EEA7601E20BEAA9CD4D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly ProfilingSampler mirrorView = new ProfilingSampler("XR Mirror View");
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_0 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_0, _stringLiteral3F1BFCACEFDC98F691CA4EEA7601E20BEAA9CD4D, /*hidden argument*/NULL);
		((XR_tD069CFDA1F46495AC33865862CDA4DE58C5F9773_StaticFields*)il2cpp_codegen_static_fields_for(XR_tD069CFDA1F46495AC33865862CDA4DE58C5F9773_il2cpp_TypeInfo_var))->set_mirrorView_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScriptableRenderPass_get_renderPassEvent_mFAFCBC84D67233B252C29E2AD3DBBA392264F2B4_inline (ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA * __this, const RuntimeMethod* method)
{
	{
		// public RenderPassEvent renderPassEvent { get; set; }
		int32_t L_0 = __this->get_U3CrenderPassEventU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BlockRange_get_Current_mE2693DD2AC46EFE3F67DA70140BDE228C3EEFEAE_inline (BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 * __this, const RuntimeMethod* method)
{
	{
		// public int Current { get => m_Current; }
		int32_t L_0 = __this->get_m_Current_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
