#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.HttpTransferUpdate>
struct Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.LinkedAccountList>
struct Callback_t7317E109667EF5A9F367D28A0A803493E9374AF6;
// Oculus.Platform.Message`1/Callback<System.Object>
struct Callback_tE0016C473A8D6B0D8E2502D1AC079D2A433992C9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall>
struct Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall>
struct KeyCollection_tED29345BB862E15DB746D9DBDAE367EAC12E8567;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// Oculus.Platform.Message`1<Oculus.Platform.Models.HttpTransferUpdate>
struct Message_1_t0F97298AE8C3B061E1CBD75F517F5EE037028F68;
// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92;
// Oculus.Platform.Request`1<Oculus.Platform.Models.LinkedAccountList>
struct Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530;
// Oculus.Platform.Request`1<System.Object>
struct Request_1_tA0A1E0EFB2359B26480A6F43E75E5CBA8D19CD46;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall>
struct ValueCollection_tB1AFB79FCAC6F49BE5EFC76853D604E27816C614;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall>[]
struct EntryU5BU5D_t76B74F86DC46D1AA9338B8538B4CA129C930DABC;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Oculus.Platform.ServiceProvider[]
struct ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// Oculus.Platform.Samples.VrHoops.BallEjector
struct BallEjector_t2942414CF5743A1E621B47AE54239C1B6B04470D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Oculus.Platform.Models.Error
struct Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Oculus.Platform.IVoipPCMSource
struct IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC;
// Oculus.Platform.Message
struct Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Oculus.Platform.Samples.VrHoops.Player
struct Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0;
// Oculus.Platform.Samples.VrHoops.RemotePlayer
struct RemotePlayer_t7DD16B282D9368F9DD23369718109795ADEC567C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// Oculus.Platform.Models.User
struct User_tA163463AE919860D9B337F6104B028990A44B69D;
// Oculus.Platform.UserOptions
struct UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Oculus.Platform.VoipAudioSourceHiLevel
struct VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD;
// Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnEnqueueResult
struct OnEnqueueResult_tAE0EEC047F8B1FF9C23B17C2E06B8A21C66D19BE;
// Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnMatchPlayerAdded
struct OnMatchPlayerAdded_t08BB3354D85A439DA0267873495B2754FA74D1E0;
// Oculus.Platform.Message/Callback
struct Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8;
// Oculus.Platform.Message/ExtraMessageTypesHandler
struct ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF;
// Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData
struct RemotePlayerData_t4AEB364F66A738769AD7E4EF022C851AD40EC8DA;
// Oculus.Platform.Samples.VrHoops.P2PManager/StartTimeOffer
struct StartTimeOffer_t6406FF7D45A4261D9BB6B192E729A617BB516170;
// Oculus.Platform.Samples.VrVoiceChat.PlatformManager/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t6F9A2E2E226703452EC82D5BBBE99814A4EF9D1D;
// Oculus.Platform.StandalonePlatform/UnityLogDelegate
struct UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563;
// Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate
struct FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94;
// Oculus.Platform.WindowsPlatform/UnityLogDelegate
struct UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageType_t7B1DFA54C161B3023552B603E7825FAE33FF1C55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5D3879374A4CBD07A4D2F2F9B6DA78099700E5D0;
IL2CPP_EXTERN_C String_t* _stringLiteral68CFB983F069CCE71F266AEFF0FA7DB668B14B66;
IL2CPP_EXTERN_C String_t* _stringLiteralF983B6DFB9BECB29801141D4286B4B7A30B80C2D;
IL2CPP_EXTERN_C const RuntimeMethod* Callback_SetNotificationCallback_TisHttpTransferUpdate_tD2D9BB94C4E6C3D338F883B55CC928639AF911AC_m9CFC8DD9140CCE385DF71285C5D305CF839213F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7F5455159CD9BC8833D1DB3BDD6E6BE098EB1CC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FilterReadDelegate_OnAudioFilterRead_m8ED6BA99D4F148AED5807307B09253A44FBAB59C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m89B6A9C76FF63AD6A099BB1C572EE02D1D35D8E6_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall>
struct Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t76B74F86DC46D1AA9338B8538B4CA129C930DABC* ___entries_1;
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
	KeyCollection_tED29345BB862E15DB746D9DBDAE367EAC12E8567 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB1AFB79FCAC6F49BE5EFC76853D604E27816C614 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED, ___entries_1)); }
	inline EntryU5BU5D_t76B74F86DC46D1AA9338B8538B4CA129C930DABC* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t76B74F86DC46D1AA9338B8538B4CA129C930DABC** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t76B74F86DC46D1AA9338B8538B4CA129C930DABC* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED, ___keys_7)); }
	inline KeyCollection_tED29345BB862E15DB746D9DBDAE367EAC12E8567 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tED29345BB862E15DB746D9DBDAE367EAC12E8567 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tED29345BB862E15DB746D9DBDAE367EAC12E8567 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED, ___values_8)); }
	inline ValueCollection_tB1AFB79FCAC6F49BE5EFC76853D604E27816C614 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB1AFB79FCAC6F49BE5EFC76853D604E27816C614 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB1AFB79FCAC6F49BE5EFC76853D604E27816C614 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
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
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Oculus.Platform.Request
struct Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2  : public RuntimeObject
{
public:
	// Oculus.Platform.Message/Callback Oculus.Platform.Request::callback_
	Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * ___callback__0;
	// System.UInt64 Oculus.Platform.Request::<RequestID>k__BackingField
	uint64_t ___U3CRequestIDU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_callback__0() { return static_cast<int32_t>(offsetof(Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2, ___callback__0)); }
	inline Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * get_callback__0() const { return ___callback__0; }
	inline Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 ** get_address_of_callback__0() { return &___callback__0; }
	inline void set_callback__0(Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * value)
	{
		___callback__0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRequestIDU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2, ___U3CRequestIDU3Ek__BackingField_1)); }
	inline uint64_t get_U3CRequestIDU3Ek__BackingField_1() const { return ___U3CRequestIDU3Ek__BackingField_1; }
	inline uint64_t* get_address_of_U3CRequestIDU3Ek__BackingField_1() { return &___U3CRequestIDU3Ek__BackingField_1; }
	inline void set_U3CRequestIDU3Ek__BackingField_1(uint64_t value)
	{
		___U3CRequestIDU3Ek__BackingField_1 = value;
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

// Oculus.Platform.PlatformInternal/HTTP
struct HTTP_tE160B8E2271028933E732801D6ECC4447A71C3B2  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.PlatformInternal/Users
struct Users_tCAE308317CC9141CCA4C84AD29CE90A5D0EB3843  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.LinkedAccountList>
struct Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t7317E109667EF5A9F367D28A0A803493E9374AF6 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530, ___callback__2)); }
	inline Callback_t7317E109667EF5A9F367D28A0A803493E9374AF6 * get_callback__2() const { return ___callback__2; }
	inline Callback_t7317E109667EF5A9F367D28A0A803493E9374AF6 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t7317E109667EF5A9F367D28A0A803493E9374AF6 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
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


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.UIntPtr
struct UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
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


// Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite
struct Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43 
{
public:
	// System.UInt64 Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite::RoomID
	uint64_t ___RoomID_0;
	// System.String Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite::OwnerID
	String_t* ___OwnerID_1;

public:
	inline static int32_t get_offset_of_RoomID_0() { return static_cast<int32_t>(offsetof(Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43, ___RoomID_0)); }
	inline uint64_t get_RoomID_0() const { return ___RoomID_0; }
	inline uint64_t* get_address_of_RoomID_0() { return &___RoomID_0; }
	inline void set_RoomID_0(uint64_t value)
	{
		___RoomID_0 = value;
	}

	inline static int32_t get_offset_of_OwnerID_1() { return static_cast<int32_t>(offsetof(Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43, ___OwnerID_1)); }
	inline String_t* get_OwnerID_1() const { return ___OwnerID_1; }
	inline String_t** get_address_of_OwnerID_1() { return &___OwnerID_1; }
	inline void set_OwnerID_1(String_t* value)
	{
		___OwnerID_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OwnerID_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite
struct Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshaled_pinvoke
{
	uint64_t ___RoomID_0;
	char* ___OwnerID_1;
};
// Native definition for COM marshalling of Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite
struct Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshaled_com
{
	uint64_t ___RoomID_0;
	Il2CppChar* ___OwnerID_1;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Oculus.Platform.MatchmakingCriterionImportance
struct MatchmakingCriterionImportance_t45A577DC947889204A7B6AE75E3FEF8BB06813BF 
{
public:
	// System.Int32 Oculus.Platform.MatchmakingCriterionImportance::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MatchmakingCriterionImportance_t45A577DC947889204A7B6AE75E3FEF8BB06813BF, ___value___2)); }
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

// Oculus.Platform.PeerConnectionState
struct PeerConnectionState_t5D085CAF9729C2423A256994EED2AA0777E7AEC0 
{
public:
	// System.Int32 Oculus.Platform.PeerConnectionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PeerConnectionState_t5D085CAF9729C2423A256994EED2AA0777E7AEC0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.ServiceProvider
struct ServiceProvider_t7C4CC3124CA1164B0E60FAAE29A4739844A10F2B 
{
public:
	// System.Int32 Oculus.Platform.ServiceProvider::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ServiceProvider_t7C4CC3124CA1164B0E60FAAE29A4739844A10F2B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.UserOptions
struct UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706  : public RuntimeObject
{
public:
	// System.IntPtr Oculus.Platform.UserOptions::Handle
	intptr_t ___Handle_0;

public:
	inline static int32_t get_offset_of_Handle_0() { return static_cast<int32_t>(offsetof(UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706, ___Handle_0)); }
	inline intptr_t get_Handle_0() const { return ___Handle_0; }
	inline intptr_t* get_address_of_Handle_0() { return &___Handle_0; }
	inline void set_Handle_0(intptr_t value)
	{
		___Handle_0 = value;
	}
};


// Oculus.Platform.UserPresenceStatus
struct UserPresenceStatus_tC3D3966C352904696239DB763BA265808C8C536F 
{
public:
	// System.Int32 Oculus.Platform.UserPresenceStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserPresenceStatus_tC3D3966C352904696239DB763BA265808C8C536F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/MatchRoomState
struct MatchRoomState_tEED8FBFF4B70D29C251E6F320C2E92A6B8DC391A 
{
public:
	// System.Int32 Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/MatchRoomState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MatchRoomState_tEED8FBFF4B70D29C251E6F320C2E92A6B8DC391A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.Message/MessageType
struct MessageType_t7B1DFA54C161B3023552B603E7825FAE33FF1C55 
{
public:
	// System.UInt32 Oculus.Platform.Message/MessageType::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageType_t7B1DFA54C161B3023552B603E7825FAE33FF1C55, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.PlatformInternal/MessageTypeInternal
struct MessageTypeInternal_tC303F5428A8AE27696F3C8D2DF55C3AB2B83A551 
{
public:
	// System.UInt32 Oculus.Platform.PlatformInternal/MessageTypeInternal::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageTypeInternal_tC303F5428A8AE27696F3C8D2DF55C3AB2B83A551, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.Samples.VrHoops.PlatformManager/State
struct State_t73E3BD96C06CD53645DD90F2E87CD50D8A08BF82 
{
public:
	// System.Int32 Oculus.Platform.Samples.VrHoops.PlatformManager/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t73E3BD96C06CD53645DD90F2E87CD50D8A08BF82, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.Samples.VrVoiceChat.PlatformManager/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t6F9A2E2E226703452EC82D5BBBE99814A4EF9D1D  : public RuntimeObject
{
public:
	// Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite Oculus.Platform.Samples.VrVoiceChat.PlatformManager/<>c__DisplayClass31_0::invite
	Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43  ___invite_0;

public:
	inline static int32_t get_offset_of_invite_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass31_0_t6F9A2E2E226703452EC82D5BBBE99814A4EF9D1D, ___invite_0)); }
	inline Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43  get_invite_0() const { return ___invite_0; }
	inline Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43 * get_address_of_invite_0() { return &___invite_0; }
	inline void set_invite_0(Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43  value)
	{
		___invite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___invite_0))->___OwnerID_1), (void*)NULL);
	}
};


// Oculus.Platform.Samples.VrVoiceChat.PlatformManager/State
struct State_t232AEB2A77FA706B49B4ABC429362CF1502D9AE4 
{
public:
	// System.Int32 Oculus.Platform.Samples.VrVoiceChat.PlatformManager/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t232AEB2A77FA706B49B4ABC429362CF1502D9AE4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Oculus.Platform.Message
struct Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9  : public RuntimeObject
{
public:
	// Oculus.Platform.Message/MessageType Oculus.Platform.Message::type
	uint32_t ___type_0;
	// System.UInt64 Oculus.Platform.Message::requestID
	uint64_t ___requestID_1;
	// Oculus.Platform.Models.Error Oculus.Platform.Message::error
	Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 * ___error_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9, ___type_0)); }
	inline uint32_t get_type_0() const { return ___type_0; }
	inline uint32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(uint32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_requestID_1() { return static_cast<int32_t>(offsetof(Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9, ___requestID_1)); }
	inline uint64_t get_requestID_1() const { return ___requestID_1; }
	inline uint64_t* get_address_of_requestID_1() { return &___requestID_1; }
	inline void set_requestID_1(uint64_t value)
	{
		___requestID_1 = value;
	}

	inline static int32_t get_offset_of_error_2() { return static_cast<int32_t>(offsetof(Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9, ___error_2)); }
	inline Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 * get_error_2() const { return ___error_2; }
	inline Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 ** get_address_of_error_2() { return &___error_2; }
	inline void set_error_2(Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 * value)
	{
		___error_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_2), (void*)value);
	}
};

struct Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9_StaticFields
{
public:
	// Oculus.Platform.Message/ExtraMessageTypesHandler Oculus.Platform.Message::<HandleExtraMessageTypes>k__BackingField
	ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * ___U3CHandleExtraMessageTypesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CHandleExtraMessageTypesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9_StaticFields, ___U3CHandleExtraMessageTypesU3Ek__BackingField_3)); }
	inline ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * get_U3CHandleExtraMessageTypesU3Ek__BackingField_3() const { return ___U3CHandleExtraMessageTypesU3Ek__BackingField_3; }
	inline ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF ** get_address_of_U3CHandleExtraMessageTypesU3Ek__BackingField_3() { return &___U3CHandleExtraMessageTypesU3Ek__BackingField_3; }
	inline void set_U3CHandleExtraMessageTypesU3Ek__BackingField_3(ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * value)
	{
		___U3CHandleExtraMessageTypesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandleExtraMessageTypesU3Ek__BackingField_3), (void*)value);
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

// Oculus.Platform.Models.User
struct User_tA163463AE919860D9B337F6104B028990A44B69D  : public RuntimeObject
{
public:
	// System.String Oculus.Platform.Models.User::DisplayName
	String_t* ___DisplayName_0;
	// System.UInt64 Oculus.Platform.Models.User::ID
	uint64_t ___ID_1;
	// System.String Oculus.Platform.Models.User::ImageURL
	String_t* ___ImageURL_2;
	// System.String Oculus.Platform.Models.User::InviteToken
	String_t* ___InviteToken_3;
	// System.String Oculus.Platform.Models.User::OculusID
	String_t* ___OculusID_4;
	// System.String Oculus.Platform.Models.User::Presence
	String_t* ___Presence_5;
	// System.String Oculus.Platform.Models.User::PresenceDeeplinkMessage
	String_t* ___PresenceDeeplinkMessage_6;
	// System.String Oculus.Platform.Models.User::PresenceDestinationApiName
	String_t* ___PresenceDestinationApiName_7;
	// System.String Oculus.Platform.Models.User::PresenceLobbySessionId
	String_t* ___PresenceLobbySessionId_8;
	// System.String Oculus.Platform.Models.User::PresenceMatchSessionId
	String_t* ___PresenceMatchSessionId_9;
	// Oculus.Platform.UserPresenceStatus Oculus.Platform.Models.User::PresenceStatus
	int32_t ___PresenceStatus_10;
	// System.String Oculus.Platform.Models.User::SmallImageUrl
	String_t* ___SmallImageUrl_11;

public:
	inline static int32_t get_offset_of_DisplayName_0() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___DisplayName_0)); }
	inline String_t* get_DisplayName_0() const { return ___DisplayName_0; }
	inline String_t** get_address_of_DisplayName_0() { return &___DisplayName_0; }
	inline void set_DisplayName_0(String_t* value)
	{
		___DisplayName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisplayName_0), (void*)value);
	}

	inline static int32_t get_offset_of_ID_1() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___ID_1)); }
	inline uint64_t get_ID_1() const { return ___ID_1; }
	inline uint64_t* get_address_of_ID_1() { return &___ID_1; }
	inline void set_ID_1(uint64_t value)
	{
		___ID_1 = value;
	}

	inline static int32_t get_offset_of_ImageURL_2() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___ImageURL_2)); }
	inline String_t* get_ImageURL_2() const { return ___ImageURL_2; }
	inline String_t** get_address_of_ImageURL_2() { return &___ImageURL_2; }
	inline void set_ImageURL_2(String_t* value)
	{
		___ImageURL_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ImageURL_2), (void*)value);
	}

	inline static int32_t get_offset_of_InviteToken_3() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___InviteToken_3)); }
	inline String_t* get_InviteToken_3() const { return ___InviteToken_3; }
	inline String_t** get_address_of_InviteToken_3() { return &___InviteToken_3; }
	inline void set_InviteToken_3(String_t* value)
	{
		___InviteToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InviteToken_3), (void*)value);
	}

	inline static int32_t get_offset_of_OculusID_4() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___OculusID_4)); }
	inline String_t* get_OculusID_4() const { return ___OculusID_4; }
	inline String_t** get_address_of_OculusID_4() { return &___OculusID_4; }
	inline void set_OculusID_4(String_t* value)
	{
		___OculusID_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OculusID_4), (void*)value);
	}

	inline static int32_t get_offset_of_Presence_5() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___Presence_5)); }
	inline String_t* get_Presence_5() const { return ___Presence_5; }
	inline String_t** get_address_of_Presence_5() { return &___Presence_5; }
	inline void set_Presence_5(String_t* value)
	{
		___Presence_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Presence_5), (void*)value);
	}

	inline static int32_t get_offset_of_PresenceDeeplinkMessage_6() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___PresenceDeeplinkMessage_6)); }
	inline String_t* get_PresenceDeeplinkMessage_6() const { return ___PresenceDeeplinkMessage_6; }
	inline String_t** get_address_of_PresenceDeeplinkMessage_6() { return &___PresenceDeeplinkMessage_6; }
	inline void set_PresenceDeeplinkMessage_6(String_t* value)
	{
		___PresenceDeeplinkMessage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PresenceDeeplinkMessage_6), (void*)value);
	}

	inline static int32_t get_offset_of_PresenceDestinationApiName_7() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___PresenceDestinationApiName_7)); }
	inline String_t* get_PresenceDestinationApiName_7() const { return ___PresenceDestinationApiName_7; }
	inline String_t** get_address_of_PresenceDestinationApiName_7() { return &___PresenceDestinationApiName_7; }
	inline void set_PresenceDestinationApiName_7(String_t* value)
	{
		___PresenceDestinationApiName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PresenceDestinationApiName_7), (void*)value);
	}

	inline static int32_t get_offset_of_PresenceLobbySessionId_8() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___PresenceLobbySessionId_8)); }
	inline String_t* get_PresenceLobbySessionId_8() const { return ___PresenceLobbySessionId_8; }
	inline String_t** get_address_of_PresenceLobbySessionId_8() { return &___PresenceLobbySessionId_8; }
	inline void set_PresenceLobbySessionId_8(String_t* value)
	{
		___PresenceLobbySessionId_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PresenceLobbySessionId_8), (void*)value);
	}

	inline static int32_t get_offset_of_PresenceMatchSessionId_9() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___PresenceMatchSessionId_9)); }
	inline String_t* get_PresenceMatchSessionId_9() const { return ___PresenceMatchSessionId_9; }
	inline String_t** get_address_of_PresenceMatchSessionId_9() { return &___PresenceMatchSessionId_9; }
	inline void set_PresenceMatchSessionId_9(String_t* value)
	{
		___PresenceMatchSessionId_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PresenceMatchSessionId_9), (void*)value);
	}

	inline static int32_t get_offset_of_PresenceStatus_10() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___PresenceStatus_10)); }
	inline int32_t get_PresenceStatus_10() const { return ___PresenceStatus_10; }
	inline int32_t* get_address_of_PresenceStatus_10() { return &___PresenceStatus_10; }
	inline void set_PresenceStatus_10(int32_t value)
	{
		___PresenceStatus_10 = value;
	}

	inline static int32_t get_offset_of_SmallImageUrl_11() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___SmallImageUrl_11)); }
	inline String_t* get_SmallImageUrl_11() const { return ___SmallImageUrl_11; }
	inline String_t** get_address_of_SmallImageUrl_11() { return &___SmallImageUrl_11; }
	inline void set_SmallImageUrl_11(String_t* value)
	{
		___SmallImageUrl_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SmallImageUrl_11), (void*)value);
	}
};


// Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData
struct RemotePlayerData_t4AEB364F66A738769AD7E4EF022C851AD40EC8DA  : public RuntimeObject
{
public:
	// Oculus.Platform.PeerConnectionState Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData::state
	int32_t ___state_0;
	// Oculus.Platform.Samples.VrHoops.RemotePlayer Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData::player
	RemotePlayer_t7DD16B282D9368F9DD23369718109795ADEC567C * ___player_1;
	// System.Single Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData::remoteTimeOffset
	float ___remoteTimeOffset_2;
	// System.Single Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData::lastReceivedBallsTime
	float ___lastReceivedBallsTime_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall> Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData::activeBalls
	Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED * ___activeBalls_4;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(RemotePlayerData_t4AEB364F66A738769AD7E4EF022C851AD40EC8DA, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_player_1() { return static_cast<int32_t>(offsetof(RemotePlayerData_t4AEB364F66A738769AD7E4EF022C851AD40EC8DA, ___player_1)); }
	inline RemotePlayer_t7DD16B282D9368F9DD23369718109795ADEC567C * get_player_1() const { return ___player_1; }
	inline RemotePlayer_t7DD16B282D9368F9DD23369718109795ADEC567C ** get_address_of_player_1() { return &___player_1; }
	inline void set_player_1(RemotePlayer_t7DD16B282D9368F9DD23369718109795ADEC567C * value)
	{
		___player_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_1), (void*)value);
	}

	inline static int32_t get_offset_of_remoteTimeOffset_2() { return static_cast<int32_t>(offsetof(RemotePlayerData_t4AEB364F66A738769AD7E4EF022C851AD40EC8DA, ___remoteTimeOffset_2)); }
	inline float get_remoteTimeOffset_2() const { return ___remoteTimeOffset_2; }
	inline float* get_address_of_remoteTimeOffset_2() { return &___remoteTimeOffset_2; }
	inline void set_remoteTimeOffset_2(float value)
	{
		___remoteTimeOffset_2 = value;
	}

	inline static int32_t get_offset_of_lastReceivedBallsTime_3() { return static_cast<int32_t>(offsetof(RemotePlayerData_t4AEB364F66A738769AD7E4EF022C851AD40EC8DA, ___lastReceivedBallsTime_3)); }
	inline float get_lastReceivedBallsTime_3() const { return ___lastReceivedBallsTime_3; }
	inline float* get_address_of_lastReceivedBallsTime_3() { return &___lastReceivedBallsTime_3; }
	inline void set_lastReceivedBallsTime_3(float value)
	{
		___lastReceivedBallsTime_3 = value;
	}

	inline static int32_t get_offset_of_activeBalls_4() { return static_cast<int32_t>(offsetof(RemotePlayerData_t4AEB364F66A738769AD7E4EF022C851AD40EC8DA, ___activeBalls_4)); }
	inline Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED * get_activeBalls_4() const { return ___activeBalls_4; }
	inline Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED ** get_address_of_activeBalls_4() { return &___activeBalls_4; }
	inline void set_activeBalls_4(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED * value)
	{
		___activeBalls_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeBalls_4), (void*)value);
	}
};


// Oculus.Platform.Matchmaking/CustomQuery/Criterion
struct Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51 
{
public:
	// System.String Oculus.Platform.Matchmaking/CustomQuery/Criterion::key
	String_t* ___key_0;
	// Oculus.Platform.MatchmakingCriterionImportance Oculus.Platform.Matchmaking/CustomQuery/Criterion::importance
	int32_t ___importance_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Oculus.Platform.Matchmaking/CustomQuery/Criterion::parameters
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___parameters_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_importance_1() { return static_cast<int32_t>(offsetof(Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51, ___importance_1)); }
	inline int32_t get_importance_1() const { return ___importance_1; }
	inline int32_t* get_address_of_importance_1() { return &___importance_1; }
	inline void set_importance_1(int32_t value)
	{
		___importance_1 = value;
	}

	inline static int32_t get_offset_of_parameters_2() { return static_cast<int32_t>(offsetof(Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51, ___parameters_2)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_parameters_2() const { return ___parameters_2; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_parameters_2() { return &___parameters_2; }
	inline void set_parameters_2(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___parameters_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parameters_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Oculus.Platform.Matchmaking/CustomQuery/Criterion
struct Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshaled_pinvoke
{
	char* ___key_0;
	int32_t ___importance_1;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___parameters_2;
};
// Native definition for COM marshalling of Oculus.Platform.Matchmaking/CustomQuery/Criterion
struct Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshaled_com
{
	Il2CppChar* ___key_0;
	int32_t ___importance_1;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___parameters_2;
};

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.HttpTransferUpdate>
struct Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A  : public MulticastDelegate_t
{
public:

public:
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


// Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnEnqueueResult
struct OnEnqueueResult_tAE0EEC047F8B1FF9C23B17C2E06B8A21C66D19BE  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnMatchPlayerAdded
struct OnMatchPlayerAdded_t08BB3354D85A439DA0267873495B2754FA74D1E0  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message/Callback
struct Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message/ExtraMessageTypesHandler
struct ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Samples.VrHoops.P2PManager/StartTimeOffer
struct StartTimeOffer_t6406FF7D45A4261D9BB6B192E729A617BB516170  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.StandalonePlatform/UnityLogDelegate
struct UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.WindowsPlatform/UnityLogDelegate
struct UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Oculus.Platform.Samples.VrHoops.Player
struct Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.UInt32 Oculus.Platform.Samples.VrHoops.Player::m_score
	uint32_t ___m_score_7;
	// UnityEngine.UI.Text Oculus.Platform.Samples.VrHoops.Player::m_scoreUI
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_scoreUI_8;
	// UnityEngine.GameObject Oculus.Platform.Samples.VrHoops.Player::m_ballPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_ballPrefab_9;
	// Oculus.Platform.Samples.VrHoops.BallEjector Oculus.Platform.Samples.VrHoops.Player::m_ballEjector
	BallEjector_t2942414CF5743A1E621B47AE54239C1B6B04470D * ___m_ballEjector_10;
	// System.Collections.Generic.Queue`1<UnityEngine.GameObject> Oculus.Platform.Samples.VrHoops.Player::m_balls
	Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * ___m_balls_11;
	// UnityEngine.GameObject Oculus.Platform.Samples.VrHoops.Player::m_heldBall
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_heldBall_12;
	// System.Single Oculus.Platform.Samples.VrHoops.Player::m_nextSpawnTime
	float ___m_nextSpawnTime_13;

public:
	inline static int32_t get_offset_of_m_score_7() { return static_cast<int32_t>(offsetof(Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0, ___m_score_7)); }
	inline uint32_t get_m_score_7() const { return ___m_score_7; }
	inline uint32_t* get_address_of_m_score_7() { return &___m_score_7; }
	inline void set_m_score_7(uint32_t value)
	{
		___m_score_7 = value;
	}

	inline static int32_t get_offset_of_m_scoreUI_8() { return static_cast<int32_t>(offsetof(Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0, ___m_scoreUI_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_scoreUI_8() const { return ___m_scoreUI_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_scoreUI_8() { return &___m_scoreUI_8; }
	inline void set_m_scoreUI_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_scoreUI_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_scoreUI_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ballPrefab_9() { return static_cast<int32_t>(offsetof(Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0, ___m_ballPrefab_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_ballPrefab_9() const { return ___m_ballPrefab_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_ballPrefab_9() { return &___m_ballPrefab_9; }
	inline void set_m_ballPrefab_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_ballPrefab_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ballPrefab_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_ballEjector_10() { return static_cast<int32_t>(offsetof(Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0, ___m_ballEjector_10)); }
	inline BallEjector_t2942414CF5743A1E621B47AE54239C1B6B04470D * get_m_ballEjector_10() const { return ___m_ballEjector_10; }
	inline BallEjector_t2942414CF5743A1E621B47AE54239C1B6B04470D ** get_address_of_m_ballEjector_10() { return &___m_ballEjector_10; }
	inline void set_m_ballEjector_10(BallEjector_t2942414CF5743A1E621B47AE54239C1B6B04470D * value)
	{
		___m_ballEjector_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ballEjector_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_balls_11() { return static_cast<int32_t>(offsetof(Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0, ___m_balls_11)); }
	inline Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * get_m_balls_11() const { return ___m_balls_11; }
	inline Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 ** get_address_of_m_balls_11() { return &___m_balls_11; }
	inline void set_m_balls_11(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * value)
	{
		___m_balls_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_balls_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_heldBall_12() { return static_cast<int32_t>(offsetof(Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0, ___m_heldBall_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_heldBall_12() const { return ___m_heldBall_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_heldBall_12() { return &___m_heldBall_12; }
	inline void set_m_heldBall_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_heldBall_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_heldBall_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_nextSpawnTime_13() { return static_cast<int32_t>(offsetof(Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0, ___m_nextSpawnTime_13)); }
	inline float get_m_nextSpawnTime_13() const { return ___m_nextSpawnTime_13; }
	inline float* get_address_of_m_nextSpawnTime_13() { return &___m_nextSpawnTime_13; }
	inline void set_m_nextSpawnTime_13(float value)
	{
		___m_nextSpawnTime_13 = value;
	}
};


// Oculus.Platform.VoipAudioSourceHiLevel
struct VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Oculus.Platform.VoipAudioSourceHiLevel::initialPlaybackDelayMS
	int32_t ___initialPlaybackDelayMS_4;
	// UnityEngine.AudioSource Oculus.Platform.VoipAudioSourceHiLevel::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_5;
	// System.Single Oculus.Platform.VoipAudioSourceHiLevel::peakAmplitude
	float ___peakAmplitude_6;
	// Oculus.Platform.IVoipPCMSource Oculus.Platform.VoipAudioSourceHiLevel::pcmSource
	RuntimeObject* ___pcmSource_7;

public:
	inline static int32_t get_offset_of_initialPlaybackDelayMS_4() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD, ___initialPlaybackDelayMS_4)); }
	inline int32_t get_initialPlaybackDelayMS_4() const { return ___initialPlaybackDelayMS_4; }
	inline int32_t* get_address_of_initialPlaybackDelayMS_4() { return &___initialPlaybackDelayMS_4; }
	inline void set_initialPlaybackDelayMS_4(int32_t value)
	{
		___initialPlaybackDelayMS_4 = value;
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD, ___audioSource_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_5), (void*)value);
	}

	inline static int32_t get_offset_of_peakAmplitude_6() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD, ___peakAmplitude_6)); }
	inline float get_peakAmplitude_6() const { return ___peakAmplitude_6; }
	inline float* get_address_of_peakAmplitude_6() { return &___peakAmplitude_6; }
	inline void set_peakAmplitude_6(float value)
	{
		___peakAmplitude_6 = value;
	}

	inline static int32_t get_offset_of_pcmSource_7() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD, ___pcmSource_7)); }
	inline RuntimeObject* get_pcmSource_7() const { return ___pcmSource_7; }
	inline RuntimeObject** get_address_of_pcmSource_7() { return &___pcmSource_7; }
	inline void set_pcmSource_7(RuntimeObject* value)
	{
		___pcmSource_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pcmSource_7), (void*)value);
	}
};

struct VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields
{
public:
	// System.Int32 Oculus.Platform.VoipAudioSourceHiLevel::audioSystemPlaybackFrequency
	int32_t ___audioSystemPlaybackFrequency_8;
	// System.Boolean Oculus.Platform.VoipAudioSourceHiLevel::verboseLogging
	bool ___verboseLogging_9;

public:
	inline static int32_t get_offset_of_audioSystemPlaybackFrequency_8() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields, ___audioSystemPlaybackFrequency_8)); }
	inline int32_t get_audioSystemPlaybackFrequency_8() const { return ___audioSystemPlaybackFrequency_8; }
	inline int32_t* get_address_of_audioSystemPlaybackFrequency_8() { return &___audioSystemPlaybackFrequency_8; }
	inline void set_audioSystemPlaybackFrequency_8(int32_t value)
	{
		___audioSystemPlaybackFrequency_8 = value;
	}

	inline static int32_t get_offset_of_verboseLogging_9() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields, ___verboseLogging_9)); }
	inline bool get_verboseLogging_9() const { return ___verboseLogging_9; }
	inline bool* get_address_of_verboseLogging_9() { return &___verboseLogging_9; }
	inline void set_verboseLogging_9(bool value)
	{
		___verboseLogging_9 = value;
	}
};


// Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate
struct FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Oculus.Platform.VoipAudioSourceHiLevel Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate::parent
	VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * ___parent_4;
	// System.Single[] Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate::scratchBuffer
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___scratchBuffer_5;

public:
	inline static int32_t get_offset_of_parent_4() { return static_cast<int32_t>(offsetof(FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94, ___parent_4)); }
	inline VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * get_parent_4() const { return ___parent_4; }
	inline VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD ** get_address_of_parent_4() { return &___parent_4; }
	inline void set_parent_4(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * value)
	{
		___parent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_4), (void*)value);
	}

	inline static int32_t get_offset_of_scratchBuffer_5() { return static_cast<int32_t>(offsetof(FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94, ___scratchBuffer_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_scratchBuffer_5() const { return ___scratchBuffer_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_scratchBuffer_5() { return &___scratchBuffer_5; }
	inline void set_scratchBuffer_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___scratchBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scratchBuffer_5), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Oculus.Platform.ServiceProvider[]
struct ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
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


// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.Callback::SetNotificationCallback<System.Object>(Oculus.Platform.Message/MessageType,Oculus.Platform.Message`1/Callback<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_SetNotificationCallback_TisRuntimeObject_mADABF8A37586170951B38A637B83E57B21FC7126_gshared (uint32_t ___type0, Callback_tE0016C473A8D6B0D8E2502D1AC079D2A433992C9 * ___callback1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<System.Object>::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared (Request_1_tA0A1E0EFB2359B26480A6F43E75E5CBA8D19CD46 * __this, uint64_t ___requestID0, const RuntimeMethod* method);

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall>::.ctor()
inline void Dictionary_2__ctor_m7F5455159CD9BC8833D1DB3BDD6E6BE098EB1CC0 (Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.Callback::SetNotificationCallback<Oculus.Platform.Models.HttpTransferUpdate>(Oculus.Platform.Message/MessageType,Oculus.Platform.Message`1/Callback<T>)
inline void Callback_SetNotificationCallback_TisHttpTransferUpdate_tD2D9BB94C4E6C3D338F883B55CC928639AF911AC_m9CFC8DD9140CCE385DF71285C5D305CF839213F1 (uint32_t ___type0, Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A * ___callback1, const RuntimeMethod* method)
{
	((  void (*) (uint32_t, Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A *, const RuntimeMethod*))Callback_SetNotificationCallback_TisRuntimeObject_mADABF8A37586170951B38A637B83E57B21FC7126_gshared)(___type0, ___callback1, method);
}
// System.Boolean Oculus.Platform.Core::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31 (const RuntimeMethod* method);
// System.Void Oculus.Platform.UserOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions__ctor_mB36DC71745D4B23B74F00DA241F44A2CE804C5A3 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.UserOptions::AddServiceProvider(Oculus.Platform.ServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions_AddServiceProvider_m108F6F6407382322C6E5BF53711F02F5149CF1D6 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.UserOptions::op_Explicit(Oculus.Platform.UserOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UserOptions_op_Explicit_mD0DA9B575CCF52D07D9306D2DCC681C0EAEFD0F5 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * ___options0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetLinkedAccounts(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetLinkedAccounts_m228EB54845ED4F04DB92565773630731EEAFCC9E (intptr_t ___userOptions0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.LinkedAccountList>::.ctor(System.UInt64)
inline void Request_1__ctor_m89B6A9C76FF63AD6A099BB1C572EE02D1D35D8E6 (Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.PlatformManager::AnswerCallOnClick(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager_AnswerCallOnClick_mA7BE446F4D5EC3B444BFCE5E1B23060B4C7AC371 (uint64_t ___roomID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite::.ctor(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Invite__ctor_m320FC26E143321B9DC9CFEEC3E1B8B296585F356 (Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43 * __this, uint64_t ___roomID0, String_t* ___owner1, const RuntimeMethod* method);
// System.UIntPtr Oculus.Platform.CAPI::ovr_Voip_GetOutputBufferMaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_Voip_GetOutputBufferMaxSize_m9799A26F0862BEE54F29A4667ABF9D3C9ED8EF77 (const RuntimeMethod* method);
// System.UInt32 System.UIntPtr::op_Explicit(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF (uintptr_t ___value0, const RuntimeMethod* method);
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F (RuntimeArray * ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m405E9C0A631F815816F349D7591DD545932FF774 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.Matchmaking/CustomQuery/Criterion::.ctor(System.String,Oculus.Platform.MatchmakingCriterionImportance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Criterion__ctor_m4513BE47CA052ABF9DFF08A75757350E0123EAC8 (Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51 * __this, String_t* ___key_0, int32_t ___importance_1, const RuntimeMethod* method);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnEnqueueResult_tAE0EEC047F8B1FF9C23B17C2E06B8A21C66D19BE (OnEnqueueResult_tAE0EEC047F8B1FF9C23B17C2E06B8A21C66D19BE * __this, bool ___successful0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___successful0));

}
// System.Void Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnEnqueueResult::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnEnqueueResult__ctor_m613E2E56B6B2F7D57D8202833C843C533B8C0A29 (OnEnqueueResult_tAE0EEC047F8B1FF9C23B17C2E06B8A21C66D19BE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnEnqueueResult::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnEnqueueResult_Invoke_mC248E0621273813C92F06AEB1A9957808AF7A3FC (OnEnqueueResult_tAE0EEC047F8B1FF9C23B17C2E06B8A21C66D19BE * __this, bool ___successful0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___successful0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___successful0, targetMethod);
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
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___successful0);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___successful0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___successful0);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___successful0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___successful0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnEnqueueResult::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnEnqueueResult_BeginInvoke_mD23777EDE77E3D68732D1004F33E0A6CF99C7266 (OnEnqueueResult_tAE0EEC047F8B1FF9C23B17C2E06B8A21C66D19BE * __this, bool ___successful0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___successful0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnEnqueueResult::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnEnqueueResult_EndInvoke_m542495F9176717DB53ED2B03C2755CF4CA916E80 (OnEnqueueResult_tAE0EEC047F8B1FF9C23B17C2E06B8A21C66D19BE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnMatchPlayerAdded::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMatchPlayerAdded__ctor_m6B607CA10680EF3C718C3DD974C9BD6396EF865D (OnMatchPlayerAdded_t08BB3354D85A439DA0267873495B2754FA74D1E0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Oculus.Platform.Samples.VrHoops.Player Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnMatchPlayerAdded::Invoke(System.Int32,Oculus.Platform.Models.User)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0 * OnMatchPlayerAdded_Invoke_m0606703037BDE0093C98438FB8C3EF7524820901 (OnMatchPlayerAdded_t08BB3354D85A439DA0267873495B2754FA74D1E0 * __this, int32_t ___slot0, User_tA163463AE919860D9B337F6104B028990A44B69D * ___user1, const RuntimeMethod* method)
{
	Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0 * result = NULL;
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
			if (___parameterCount == 2)
			{
				// open
				typedef Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0 * (*FunctionPointerType) (int32_t, User_tA163463AE919860D9B337F6104B028990A44B69D *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___slot0, ___user1, targetMethod);
			}
			else
			{
				// closed
				typedef Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0 * (*FunctionPointerType) (void*, int32_t, User_tA163463AE919860D9B337F6104B028990A44B69D *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___slot0, ___user1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0 *, int32_t, User_tA163463AE919860D9B337F6104B028990A44B69D * >::Invoke(targetMethod, targetThis, ___slot0, ___user1);
					else
						result = GenericVirtFuncInvoker2< Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0 *, int32_t, User_tA163463AE919860D9B337F6104B028990A44B69D * >::Invoke(targetMethod, targetThis, ___slot0, ___user1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0 *, int32_t, User_tA163463AE919860D9B337F6104B028990A44B69D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___slot0, ___user1);
					else
						result = VirtFuncInvoker2< Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0 *, int32_t, User_tA163463AE919860D9B337F6104B028990A44B69D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___slot0, ___user1);
				}
			}
			else
			{
				typedef Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0 * (*FunctionPointerType) (void*, int32_t, User_tA163463AE919860D9B337F6104B028990A44B69D *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___slot0, ___user1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnMatchPlayerAdded::BeginInvoke(System.Int32,Oculus.Platform.Models.User,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnMatchPlayerAdded_BeginInvoke_mB9C1ACD5BC59D5665E0EE9CA76E6432E6A537B26 (OnMatchPlayerAdded_t08BB3354D85A439DA0267873495B2754FA74D1E0 * __this, int32_t ___slot0, User_tA163463AE919860D9B337F6104B028990A44B69D * ___user1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___slot0);
	__d_args[1] = ___user1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Oculus.Platform.Samples.VrHoops.Player Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnMatchPlayerAdded::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0 * OnMatchPlayerAdded_EndInvoke_m61B133FC2F89B83C8E8BBFDEB34653DF9F94F105 (OnMatchPlayerAdded_t08BB3354D85A439DA0267873495B2754FA74D1E0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Message/Callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback__ctor_mAC564D6964EDAEDEB158A4FEB741444645CEFAEB (Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Oculus.Platform.Message/Callback::Invoke(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_Invoke_mDC50EE4F978809B23970C33936C48F628E386C37 (Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * __this, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ___message0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
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
						GenericInterfaceActionInvoker1< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Oculus.Platform.Message/Callback::BeginInvoke(Oculus.Platform.Message,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Callback_BeginInvoke_m5B4DC917F8773EDCD11662E01027295E04086E30 (Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * __this, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Oculus.Platform.Message/Callback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_EndInvoke_m629498715CDFA7B26764CEDBEA3DB2A2F29FE27F (Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Oculus.Platform.Message/ExtraMessageTypesHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtraMessageTypesHandler__ctor_m8CCAD880D1B65AC804C1C29FEEAC2309AB794672 (ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Oculus.Platform.Message Oculus.Platform.Message/ExtraMessageTypesHandler::Invoke(System.IntPtr,Oculus.Platform.Message/MessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ExtraMessageTypesHandler_Invoke_mF3C0E6177A016D6B3AAB79420833149C6A171873 (ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * __this, intptr_t ___messageHandle0, uint32_t ___message_type1, const RuntimeMethod* method)
{
	Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * result = NULL;
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
			if (___parameterCount == 2)
			{
				// open
				typedef Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * (*FunctionPointerType) (intptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___messageHandle0, ___message_type1, targetMethod);
			}
			else
			{
				// closed
				typedef Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * (*FunctionPointerType) (void*, intptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___messageHandle0, ___message_type1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___messageHandle0, ___message_type1);
					else
						result = GenericVirtFuncInvoker2< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___messageHandle0, ___message_type1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___messageHandle0, ___message_type1);
					else
						result = VirtFuncInvoker2< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___messageHandle0, ___message_type1);
				}
			}
			else
			{
				typedef Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * (*FunctionPointerType) (void*, intptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___messageHandle0, ___message_type1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Oculus.Platform.Message/ExtraMessageTypesHandler::BeginInvoke(System.IntPtr,Oculus.Platform.Message/MessageType,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExtraMessageTypesHandler_BeginInvoke_m2EEB388D56B9E86FB9AF9055E09E94CA1080B7B9 (ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * __this, intptr_t ___messageHandle0, uint32_t ___message_type1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageType_t7B1DFA54C161B3023552B603E7825FAE33FF1C55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___messageHandle0);
	__d_args[1] = Box(MessageType_t7B1DFA54C161B3023552B603E7825FAE33FF1C55_il2cpp_TypeInfo_var, &___message_type1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Oculus.Platform.Message Oculus.Platform.Message/ExtraMessageTypesHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ExtraMessageTypesHandler_EndInvoke_mC66AAD40993CE67A2E25F6FE2A45284E5DA71A6D (ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *)__result;;
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
// System.Void Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemotePlayerData__ctor_mF7280EBB08F218CEF343311BEAABA9AAB3E225DF (RemotePlayerData_t4AEB364F66A738769AD7E4EF022C851AD40EC8DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m7F5455159CD9BC8833D1DB3BDD6E6BE098EB1CC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly Dictionary<int, P2PNetworkBall> activeBalls = new Dictionary<int, P2PNetworkBall>();
		Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED * L_0 = (Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED *)il2cpp_codegen_object_new(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7F5455159CD9BC8833D1DB3BDD6E6BE098EB1CC0(L_0, /*hidden argument*/Dictionary_2__ctor_m7F5455159CD9BC8833D1DB3BDD6E6BE098EB1CC0_RuntimeMethod_var);
		__this->set_activeBalls_4(L_0);
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
IL2CPP_EXTERN_C  float DelegatePInvokeWrapper_StartTimeOffer_t6406FF7D45A4261D9BB6B192E729A617BB516170 (StartTimeOffer_t6406FF7D45A4261D9BB6B192E729A617BB516170 * __this, float ___remoteTime0, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc)(float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	float returnValue = il2cppPInvokeFunc(___remoteTime0);

	return returnValue;
}
// System.Void Oculus.Platform.Samples.VrHoops.P2PManager/StartTimeOffer::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartTimeOffer__ctor_m04A8B0FEEB8CE958DD034A8D55EF883FF015CD21 (StartTimeOffer_t6406FF7D45A4261D9BB6B192E729A617BB516170 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Single Oculus.Platform.Samples.VrHoops.P2PManager/StartTimeOffer::Invoke(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StartTimeOffer_Invoke_m129F9C3F463B5EE7EC24AEE95B3AD6B3C9EFEFBB (StartTimeOffer_t6406FF7D45A4261D9BB6B192E729A617BB516170 * __this, float ___remoteTime0, const RuntimeMethod* method)
{
	float result = 0.0f;
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
			if (___parameterCount == 1)
			{
				// open
				typedef float (*FunctionPointerType) (float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___remoteTime0, targetMethod);
			}
			else
			{
				// closed
				typedef float (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___remoteTime0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< float, float >::Invoke(targetMethod, targetThis, ___remoteTime0);
					else
						result = GenericVirtFuncInvoker1< float, float >::Invoke(targetMethod, targetThis, ___remoteTime0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___remoteTime0);
					else
						result = VirtFuncInvoker1< float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___remoteTime0);
				}
			}
			else
			{
				typedef float (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___remoteTime0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Oculus.Platform.Samples.VrHoops.P2PManager/StartTimeOffer::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StartTimeOffer_BeginInvoke_mA38697083442B8672FCFC3BD0E8B8DDAF2256CE2 (StartTimeOffer_t6406FF7D45A4261D9BB6B192E729A617BB516170 * __this, float ___remoteTime0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___remoteTime0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Single Oculus.Platform.Samples.VrHoops.P2PManager/StartTimeOffer::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StartTimeOffer_EndInvoke_m2E344C6CFFE9192AF86FCDB0264EE2FCA8D070DE (StartTimeOffer_t6406FF7D45A4261D9BB6B192E729A617BB516170 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.PlatformInternal/HTTP::SetHttpTransferUpdateCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.HttpTransferUpdate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HTTP_SetHttpTransferUpdateCallback_m903F66BAA503323EE1C4E0CD4F3D11A9C450265A (Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_SetNotificationCallback_TisHttpTransferUpdate_tD2D9BB94C4E6C3D338F883B55CC928639AF911AC_m9CFC8DD9140CCE385DF71285C5D305CF839213F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Callback.SetNotificationCallback(
		//   Message.MessageType.Notification_HTTP_Transfer,
		//   callback
		// );
		Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_SetNotificationCallback_TisHttpTransferUpdate_tD2D9BB94C4E6C3D338F883B55CC928639AF911AC_m9CFC8DD9140CCE385DF71285C5D305CF839213F1(((int32_t)2111073839), L_0, /*hidden argument*/Callback_SetNotificationCallback_TisHttpTransferUpdate_tD2D9BB94C4E6C3D338F883B55CC928639AF911AC_m9CFC8DD9140CCE385DF71285C5D305CF839213F1_RuntimeMethod_var);
		// }
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
// Oculus.Platform.Request`1<Oculus.Platform.Models.LinkedAccountList> Oculus.Platform.PlatformInternal/Users::GetLinkedAccounts(Oculus.Platform.ServiceProvider[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 * Users_GetLinkedAccounts_mEEFB6FC17804B8C75BA287AFA1438E0CDC48754A (ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345* ___providers0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m89B6A9C76FF63AD6A099BB1C572EE02D1D35D8E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * V_1 = NULL;
	ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 * V_5 = NULL;
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		// UserOptions userOpts = new UserOptions();
		UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * L_2 = (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 *)il2cpp_codegen_object_new(UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706_il2cpp_TypeInfo_var);
		UserOptions__ctor_mB36DC71745D4B23B74F00DA241F44A2CE804C5A3(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		// foreach (ServiceProvider provider in providers)
		ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345* L_3 = ___providers0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_002c;
	}

IL_0018:
	{
		// foreach (ServiceProvider provider in providers)
		ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (int32_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		// userOpts.AddServiceProvider(provider);
		UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * L_8 = V_1;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UserOptions_AddServiceProvider_m108F6F6407382322C6E5BF53711F02F5149CF1D6(L_8, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002c:
	{
		// foreach (ServiceProvider provider in providers)
		int32_t L_11 = V_3;
		ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345* L_12 = V_2;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_0018;
		}
	}
	{
		// return new Request<Models.LinkedAccountList>(CAPI.ovr_User_GetLinkedAccounts((IntPtr)userOpts));
		UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * L_13 = V_1;
		intptr_t L_14;
		L_14 = UserOptions_op_Explicit_mD0DA9B575CCF52D07D9306D2DCC681C0EAEFD0F5(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_15;
		L_15 = CAPI_ovr_User_GetLinkedAccounts_m228EB54845ED4F04DB92565773630731EEAFCC9E((intptr_t)L_14, /*hidden argument*/NULL);
		Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 * L_16 = (Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 *)il2cpp_codegen_object_new(Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530_il2cpp_TypeInfo_var);
		Request_1__ctor_m89B6A9C76FF63AD6A099BB1C572EE02D1D35D8E6(L_16, L_15, /*hidden argument*/Request_1__ctor_m89B6A9C76FF63AD6A099BB1C572EE02D1D35D8E6_RuntimeMethod_var);
		V_5 = L_16;
		goto IL_004b;
	}

IL_0046:
	{
		// return null;
		V_5 = (Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 *)NULL;
		goto IL_004b;
	}

IL_004b:
	{
		// }
		Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 * L_17 = V_5;
		return L_17;
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
// System.Void Oculus.Platform.Samples.VrVoiceChat.PlatformManager/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m7A414CAB4DCE690FCC12891AB9CF6D817B564E4A (U3CU3Ec__DisplayClass31_0_t6F9A2E2E226703452EC82D5BBBE99814A4EF9D1D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.PlatformManager/<>c__DisplayClass31_0::<SetActiveInvites>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0_U3CSetActiveInvitesU3Eb__0_m6951358EDD02BA91CA5110AFCFDC7C713577FBAD (U3CU3Ec__DisplayClass31_0_t6F9A2E2E226703452EC82D5BBBE99814A4EF9D1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => PlatformManager.AnswerCallOnClick(invite.RoomID));
		Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43 * L_0 = __this->get_address_of_invite_0();
		uint64_t L_1 = L_0->get_RoomID_0();
		IL2CPP_RUNTIME_CLASS_INIT(PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		PlatformManager_AnswerCallOnClick_mA7BE446F4D5EC3B444BFCE5E1B23060B4C7AC371(L_1, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite
IL2CPP_EXTERN_C void Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshal_pinvoke(const Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43& unmarshaled, Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshaled_pinvoke& marshaled)
{
	marshaled.___RoomID_0 = unmarshaled.get_RoomID_0();
	marshaled.___OwnerID_1 = il2cpp_codegen_marshal_string(unmarshaled.get_OwnerID_1());
}
IL2CPP_EXTERN_C void Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshal_pinvoke_back(const Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshaled_pinvoke& marshaled, Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43& unmarshaled)
{
	uint64_t unmarshaled_RoomID_temp_0 = 0;
	unmarshaled_RoomID_temp_0 = marshaled.___RoomID_0;
	unmarshaled.set_RoomID_0(unmarshaled_RoomID_temp_0);
	unmarshaled.set_OwnerID_1(il2cpp_codegen_marshal_string_result(marshaled.___OwnerID_1));
}
// Conversion method for clean up from marshalling of: Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite
IL2CPP_EXTERN_C void Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshal_pinvoke_cleanup(Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___OwnerID_1);
	marshaled.___OwnerID_1 = NULL;
}
// Conversion methods for marshalling of: Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite
IL2CPP_EXTERN_C void Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshal_com(const Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43& unmarshaled, Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshaled_com& marshaled)
{
	marshaled.___RoomID_0 = unmarshaled.get_RoomID_0();
	marshaled.___OwnerID_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_OwnerID_1());
}
IL2CPP_EXTERN_C void Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshal_com_back(const Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshaled_com& marshaled, Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43& unmarshaled)
{
	uint64_t unmarshaled_RoomID_temp_0 = 0;
	unmarshaled_RoomID_temp_0 = marshaled.___RoomID_0;
	unmarshaled.set_RoomID_0(unmarshaled_RoomID_temp_0);
	unmarshaled.set_OwnerID_1(il2cpp_codegen_marshal_bstring_result(marshaled.___OwnerID_1));
}
// Conversion method for clean up from marshalling of: Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite
IL2CPP_EXTERN_C void Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshal_com_cleanup(Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___OwnerID_1);
	marshaled.___OwnerID_1 = NULL;
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite::.ctor(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Invite__ctor_m320FC26E143321B9DC9CFEEC3E1B8B296585F356 (Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43 * __this, uint64_t ___roomID0, String_t* ___owner1, const RuntimeMethod* method)
{
	{
		// this.RoomID = roomID;
		uint64_t L_0 = ___roomID0;
		__this->set_RoomID_0(L_0);
		// this.OwnerID = owner;
		String_t* L_1 = ___owner1;
		__this->set_OwnerID_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Invite__ctor_m320FC26E143321B9DC9CFEEC3E1B8B296585F356_AdjustorThunk (RuntimeObject * __this, uint64_t ___roomID0, String_t* ___owner1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43 * _thisAdjusted = reinterpret_cast<Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43 *>(__this + _offset);
	Invite__ctor_m320FC26E143321B9DC9CFEEC3E1B8B296585F356(_thisAdjusted, ___roomID0, ___owner1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 (UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 * __this, intptr_t ___tag0, intptr_t ___msg1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___tag0, ___msg1);

}
// System.Void Oculus.Platform.StandalonePlatform/UnityLogDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate__ctor_mE62CADC1A93D3878C4AF2CAB4600B7A43E8D656E (UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Oculus.Platform.StandalonePlatform/UnityLogDelegate::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate_Invoke_m4CBFE3D9C43F42E512587B34F68FA069B9EF9989 (UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 * __this, intptr_t ___tag0, intptr_t ___msg1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___tag0, ___msg1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___tag0, ___msg1, targetMethod);
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
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___tag0, ___msg1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___tag0, ___msg1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___tag0, ___msg1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___tag0, ___msg1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___tag0, ___msg1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Oculus.Platform.StandalonePlatform/UnityLogDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityLogDelegate_BeginInvoke_m951569774A2ED1032DEB433269D86118D66270F9 (UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 * __this, intptr_t ___tag0, intptr_t ___msg1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___tag0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___msg1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Oculus.Platform.StandalonePlatform/UnityLogDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate_EndInvoke_mD26CA4B73B70214F81E2A8D930EF8EE00EC37A92 (UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterReadDelegate_Awake_m9538F15D80113236A3A698AD436CB902883F5080 (FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int bufferSizeElements = (int)CAPI.ovr_Voip_GetOutputBufferMaxSize();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_0;
		L_0 = CAPI_ovr_Voip_GetOutputBufferMaxSize_m9799A26F0862BEE54F29A4667ABF9D3C9ED8EF77(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// scratchBuffer = new float[bufferSizeElements];
		int32_t L_2 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->set_scratchBuffer_5(L_3);
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate::OnAudioFilterRead(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterReadDelegate_OnAudioFilterRead_m8ED6BA99D4F148AED5807307B09253A44FBAB59C (FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___channels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D3879374A4CBD07A4D2F2F9B6DA78099700E5D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF983B6DFB9BECB29801141D4286B4B7A30B80C2D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	{
		// int sizeToFetch = data.Length / channels;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___data0;
		NullCheck(L_0);
		int32_t L_1 = ___channels1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))/(int32_t)L_1));
		// int sourceBufferSize = sizeToFetch;
		int32_t L_2 = V_0;
		V_1 = L_2;
		// if (sourceBufferSize > scratchBuffer.Length)
		int32_t L_3 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = __this->get_scratchBuffer_5();
		NullCheck(L_4);
		V_6 = (bool)((((int32_t)L_3) > ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))? 1 : 0);
		bool L_5 = V_6;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		// Array.Clear(data, 0, data.Length);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___data0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = ___data0;
		NullCheck(L_7);
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_6, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), /*hidden argument*/NULL);
		// throw new Exception(string.Format("Audio system tried to pull {0} bytes, max voip internal ring buffer size {1}", sizeToFetch, scratchBuffer.Length));
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_9);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = __this->get_scratchBuffer_5();
		NullCheck(L_11);
		int32_t L_12 = ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)));
		RuntimeObject * L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_12);
		String_t* L_14;
		L_14 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68CFB983F069CCE71F266AEFF0FA7DB668B14B66)), L_10, L_13, /*hidden argument*/NULL);
		Exception_t * L_15 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_15, L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FilterReadDelegate_OnAudioFilterRead_m8ED6BA99D4F148AED5807307B09253A44FBAB59C_RuntimeMethod_var)));
	}

IL_0049:
	{
		// int available = parent.pcmSource.PeekSizeElements();
		VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * L_16 = __this->get_parent_4();
		NullCheck(L_16);
		RuntimeObject* L_17 = L_16->get_pcmSource_7();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Oculus.Platform.IVoipPCMSource::PeekSizeElements() */, IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var, L_17);
		V_2 = L_18;
		// if (available < sourceBufferSize)
		int32_t L_19 = V_2;
		int32_t L_20 = V_1;
		V_7 = (bool)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_009a;
		}
	}
	{
		// if (verboseLogging)
		IL2CPP_RUNTIME_CLASS_INIT(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		bool L_22 = ((VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields*)il2cpp_codegen_static_fields_for(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var))->get_verboseLogging_9();
		V_8 = L_22;
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_0095;
		}
	}
	{
		// Debug.LogFormat(
		//   "Voip starved! Want {0}, but only have {1} available",
		//   sourceBufferSize,
		//   available);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = L_24;
		int32_t L_26 = V_1;
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_28);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = L_25;
		int32_t L_30 = V_2;
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_32);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(_stringLiteral5D3879374A4CBD07A4D2F2F9B6DA78099700E5D0, L_29, /*hidden argument*/NULL);
	}

IL_0095:
	{
		// return;
		goto IL_0151;
	}

IL_009a:
	{
		// int copied = parent.pcmSource.GetPCM(scratchBuffer, sourceBufferSize);
		VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * L_33 = __this->get_parent_4();
		NullCheck(L_33);
		RuntimeObject* L_34 = L_33->get_pcmSource_7();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_35 = __this->get_scratchBuffer_5();
		int32_t L_36 = V_1;
		NullCheck(L_34);
		int32_t L_37;
		L_37 = InterfaceFuncInvoker2< int32_t, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, int32_t >::Invoke(0 /* System.Int32 Oculus.Platform.IVoipPCMSource::GetPCM(System.Single[],System.Int32) */, IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var, L_34, L_35, L_36);
		V_3 = L_37;
		// if (copied < sourceBufferSize)
		int32_t L_38 = V_3;
		int32_t L_39 = V_1;
		V_9 = (bool)((((int32_t)L_38) < ((int32_t)L_39))? 1 : 0);
		bool L_40 = V_9;
		if (!L_40)
		{
			goto IL_00e2;
		}
	}
	{
		// Debug.LogWarningFormat(
		//   "GetPCM() returned {0} samples, expected {1}",
		//   copied,
		//   sourceBufferSize);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_41 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_42 = L_41;
		int32_t L_43 = V_3;
		int32_t L_44 = L_43;
		RuntimeObject * L_45 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_45);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_45);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_46 = L_42;
		int32_t L_47 = V_1;
		int32_t L_48 = L_47;
		RuntimeObject * L_49 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_49);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m405E9C0A631F815816F349D7591DD545932FF774(_stringLiteralF983B6DFB9BECB29801141D4286B4B7A30B80C2D, L_46, /*hidden argument*/NULL);
		// return;
		goto IL_0151;
	}

IL_00e2:
	{
		// int dest = 0;
		V_4 = 0;
		// float tmpPeakAmp = -1;
		V_5 = (-1.0f);
		// for (int i = 0; i < sizeToFetch; i++)
		V_10 = 0;
		goto IL_0139;
	}

IL_00f1:
	{
		// float val = scratchBuffer[i];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_50 = __this->get_scratchBuffer_5();
		int32_t L_51 = V_10;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		float L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_11 = L_53;
		// for (int j = 0; j < channels; j++)
		V_12 = 0;
		goto IL_0127;
	}

IL_0102:
	{
		// data[dest++] = val;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_54 = ___data0;
		int32_t L_55 = V_4;
		int32_t L_56 = L_55;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
		float L_57 = V_11;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (float)L_57);
		// if (val > tmpPeakAmp)
		float L_58 = V_11;
		float L_59 = V_5;
		V_13 = (bool)((((float)L_58) > ((float)L_59))? 1 : 0);
		bool L_60 = V_13;
		if (!L_60)
		{
			goto IL_0120;
		}
	}
	{
		// tmpPeakAmp = val;
		float L_61 = V_11;
		V_5 = L_61;
	}

IL_0120:
	{
		// for (int j = 0; j < channels; j++)
		int32_t L_62 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
	}

IL_0127:
	{
		// for (int j = 0; j < channels; j++)
		int32_t L_63 = V_12;
		int32_t L_64 = ___channels1;
		V_14 = (bool)((((int32_t)L_63) < ((int32_t)L_64))? 1 : 0);
		bool L_65 = V_14;
		if (L_65)
		{
			goto IL_0102;
		}
	}
	{
		// for (int i = 0; i < sizeToFetch; i++)
		int32_t L_66 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
	}

IL_0139:
	{
		// for (int i = 0; i < sizeToFetch; i++)
		int32_t L_67 = V_10;
		int32_t L_68 = V_0;
		V_15 = (bool)((((int32_t)L_67) < ((int32_t)L_68))? 1 : 0);
		bool L_69 = V_15;
		if (L_69)
		{
			goto IL_00f1;
		}
	}
	{
		// parent.peakAmplitude = tmpPeakAmp;
		VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * L_70 = __this->get_parent_4();
		float L_71 = V_5;
		NullCheck(L_70);
		L_70->set_peakAmplitude_6(L_71);
	}

IL_0151:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterReadDelegate__ctor_m30ADF76B8C36FA9BEC6180830B5B661E457DDD78 (FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD (UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD * __this, intptr_t ___tag0, intptr_t ___msg1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___tag0, ___msg1);

}
// System.Void Oculus.Platform.WindowsPlatform/UnityLogDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate__ctor_m75D3B3850C8B2DE6435D1495E90BDF37BDEA5124 (UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Oculus.Platform.WindowsPlatform/UnityLogDelegate::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate_Invoke_mED9E5A5F33A4FC185CA7A813EF24AB13080A2F30 (UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD * __this, intptr_t ___tag0, intptr_t ___msg1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___tag0, ___msg1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___tag0, ___msg1, targetMethod);
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
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___tag0, ___msg1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___tag0, ___msg1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___tag0, ___msg1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___tag0, ___msg1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___tag0, ___msg1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Oculus.Platform.WindowsPlatform/UnityLogDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityLogDelegate_BeginInvoke_m0384626C20F86718E03B4DA02A456C3067B49029 (UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD * __this, intptr_t ___tag0, intptr_t ___msg1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___tag0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___msg1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Oculus.Platform.WindowsPlatform/UnityLogDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate_EndInvoke_mBC6914A5F0EE519B48B8E21FF21FE3DE3E93B658 (UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: Oculus.Platform.Matchmaking/CustomQuery/Criterion
IL2CPP_EXTERN_C void Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshal_pinvoke(const Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51& unmarshaled, Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshaled_pinvoke& marshaled)
{
	Exception_t* ___parameters_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'parameters' of type 'Criterion'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___parameters_2Exception, NULL);
}
IL2CPP_EXTERN_C void Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshal_pinvoke_back(const Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshaled_pinvoke& marshaled, Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51& unmarshaled)
{
	Exception_t* ___parameters_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'parameters' of type 'Criterion'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___parameters_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Oculus.Platform.Matchmaking/CustomQuery/Criterion
IL2CPP_EXTERN_C void Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshal_pinvoke_cleanup(Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Oculus.Platform.Matchmaking/CustomQuery/Criterion
IL2CPP_EXTERN_C void Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshal_com(const Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51& unmarshaled, Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshaled_com& marshaled)
{
	Exception_t* ___parameters_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'parameters' of type 'Criterion'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___parameters_2Exception, NULL);
}
IL2CPP_EXTERN_C void Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshal_com_back(const Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshaled_com& marshaled, Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51& unmarshaled)
{
	Exception_t* ___parameters_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'parameters' of type 'Criterion'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___parameters_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Oculus.Platform.Matchmaking/CustomQuery/Criterion
IL2CPP_EXTERN_C void Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshal_com_cleanup(Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshaled_com& marshaled)
{
}
// System.Void Oculus.Platform.Matchmaking/CustomQuery/Criterion::.ctor(System.String,Oculus.Platform.MatchmakingCriterionImportance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Criterion__ctor_m4513BE47CA052ABF9DFF08A75757350E0123EAC8 (Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51 * __this, String_t* ___key_0, int32_t ___importance_1, const RuntimeMethod* method)
{
	{
		// key = key_;
		String_t* L_0 = ___key_0;
		__this->set_key_0(L_0);
		// importance = importance_;
		int32_t L_1 = ___importance_1;
		__this->set_importance_1(L_1);
		// parameters = null;
		__this->set_parameters_2((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Criterion__ctor_m4513BE47CA052ABF9DFF08A75757350E0123EAC8_AdjustorThunk (RuntimeObject * __this, String_t* ___key_0, int32_t ___importance_1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51 * _thisAdjusted = reinterpret_cast<Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51 *>(__this + _offset);
	Criterion__ctor_m4513BE47CA052ABF9DFF08A75757350E0123EAC8(_thisAdjusted, ___key_0, ___importance_1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
