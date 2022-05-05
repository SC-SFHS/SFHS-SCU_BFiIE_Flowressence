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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,OVR.SoundFX>
struct Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E;
// FastList`1<System.Object>
struct FastList_1_t162D3D3C4FFD9BC65ABF324C0D9AF9BEC9BE0AC7;
// FastList`1<OVR.SoundEmitter>
struct FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5;
// FastList`1<System.String>
struct FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,OVR.SoundFX>
struct KeyCollection_tC3F1C76CB343CB12C97F7DC863A9DE4B54E6194E;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<OVR.SoundEmitter>
struct Predicate_1_t025E23E639B66BD976A09E0C4FC2D954D400A294;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,OVR.SoundFX>
struct ValueCollection_t457989857DD3F372C0866DD00E657A5316D2CB3B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,OVR.SoundFX>[]
struct EntryU5BU5D_tE57762F22AD31036121089FE425B3B33E009CA1B;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
// UnityEngine.Audio.AudioMixerSnapshot[]
struct AudioMixerSnapshotU5BU5D_tED32A17D57452B751009DA3AD9CE85B9FB7CEBDA;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// OVR.SoundEmitter[]
struct SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8;
// OVR.SoundFX[]
struct SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB;
// OVR.SoundFXRef[]
struct SoundFXRefU5BU5D_tEDAF36BD60BD7ADBA0D7C5A4BCDEDB7E91CB664C;
// OVR.SoundGroup[]
struct SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// OVR.AmbienceEmitter
struct AmbienceEmitter_tC44EB9593D9B3F2E4E7C56950D0B2C8BB47B26A5;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioListener
struct AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3;
// OVR.AudioManager
struct AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053;
// UnityEngine.Audio.AudioMixer
struct AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5;
// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F;
// UnityEngine.Audio.AudioMixerSnapshot
struct AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// InspectorCommentAttribute
struct InspectorCommentAttribute_t9219FCDA5E6E5F6CBF8BE522CBCE08E1735E0863;
// InspectorNoteAttribute
struct InspectorNoteAttribute_t7E6A264BFA097C06BF3C9C75E86FC370DE39CB57;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// OVR.MinMaxAttribute
struct MinMaxAttribute_t3C9DB673216A640538472ED870136806B6EDA975;
// OVR.MixerSnapshot
struct MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// ONSPAudioSource
struct ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02;
// OVR.OSPProps
struct OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// OVR.SoundEmitter
struct SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F;
// OVR.SoundFX
struct SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8;
// OVR.SoundFXRef
struct SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7;
// OVR.SoundGroup
struct SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F;
// System.String
struct String_t;
// OVR.TestScript
struct TestScript_tFA72AED664EECA9CC918308C63469BB7F8F36A07;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// OVR.AudioManager/<>c
struct U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7;
// OVR.AudioManager/<>c__DisplayClass77_0
struct U3CU3Ec__DisplayClass77_0_t68997B623E8CD6034DDB01B6BCFAC1C37A7F5037;
// OVR.SoundEmitter/<DelayedSyncTo>d__57
struct U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365;
// OVR.SoundEmitter/<FadeSoundChannel>d__64
struct U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF;
// OVR.SoundEmitter/<FadeSoundChannelTo>d__63
struct U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioMixerSnapshotU5BU5D_tED32A17D57452B751009DA3AD9CE85B9FB7CEBDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t025E23E639B66BD976A09E0C4FC2D954D400A294_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundFXRefU5BU5D_tEDAF36BD60BD7ADBA0D7C5A4BCDEDB7E91CB664C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundPriority_t850DD3C3DC2297827DAAC569120E947DAEF52888_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass77_0_t68997B623E8CD6034DDB01B6BCFAC1C37A7F5037_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0906A238577C8464E6A7F03387A5C1CE1EBD62E2;
IL2CPP_EXTERN_C String_t* _stringLiteral0F5A67BFE407F54916CF5CC33686478EA9815CC1;
IL2CPP_EXTERN_C String_t* _stringLiteral18C38C34BA7EEDB564B1E3DCEA96238332D81112;
IL2CPP_EXTERN_C String_t* _stringLiteral204617F8F093FDDC77E0A1C01A1711FBAF576BE9;
IL2CPP_EXTERN_C String_t* _stringLiteral384182C6ED372515BD4A899C722AF43447B8EC46;
IL2CPP_EXTERN_C String_t* _stringLiteral3B8F07884D1AD3D7A32921269A7BEF7DCEC083B6;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral46B3229F259C14E354D1F381A2B0F2CCD14C905D;
IL2CPP_EXTERN_C String_t* _stringLiteral4E1A73C9AF59513216526CE861448DAE293EF6CE;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEEEA6DE242693D5B3A8C33036B3FED8754F8AE;
IL2CPP_EXTERN_C String_t* _stringLiteral60F53D5C88E08FA67B2ABA19ABEE4BFDD0B44CB5;
IL2CPP_EXTERN_C String_t* _stringLiteral63D3EBEF88DB09499FA60777B4C341B3838D5993;
IL2CPP_EXTERN_C String_t* _stringLiteral65576CF94AD9E7BE47620C06B1AB84B386BA22C1;
IL2CPP_EXTERN_C String_t* _stringLiteral66A25193E8278E64AE4CE8479F17DE582D23BD3A;
IL2CPP_EXTERN_C String_t* _stringLiteral6C9196A3F3826640BEF4A3CCDC1A55FD3ACB7382;
IL2CPP_EXTERN_C String_t* _stringLiteral6DE1D416D02C542C5C98EFCD41210A1BCB0BB04A;
IL2CPP_EXTERN_C String_t* _stringLiteral788E03A6D70DC88329F8CB18C677A1D352D7135E;
IL2CPP_EXTERN_C String_t* _stringLiteral7F85A2723BB62FEF95DD6F8C5F0FF606EA62246A;
IL2CPP_EXTERN_C String_t* _stringLiteral8239DDE7DBC91495DACC42B52FAF15E9C617D4D7;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8ACAA4E0B28437F5FD1A41CE6591A16813F05377;
IL2CPP_EXTERN_C String_t* _stringLiteral925EA72B29D6BF699F98EEEE87E0E8BA9BE96D3B;
IL2CPP_EXTERN_C String_t* _stringLiteralA241E60234684E4305AA9501E613C6E9AFA1636F;
IL2CPP_EXTERN_C String_t* _stringLiteralA87D266F5AAE1AF5998468D25833A8C6AD50D4FD;
IL2CPP_EXTERN_C String_t* _stringLiteralAB2DCC3593CCEB58CA32060CD89A596D12D0ECCC;
IL2CPP_EXTERN_C String_t* _stringLiteralB35ACD812B4FF262FD7B2E564F68FA95CC961E97;
IL2CPP_EXTERN_C String_t* _stringLiteralB9C7F7C8C69A216FC6DF8723580CBEBD2E1DFABB;
IL2CPP_EXTERN_C String_t* _stringLiteralBACB871CE06ABB812CE4839FEF3F31E0DFE238CC;
IL2CPP_EXTERN_C String_t* _stringLiteralC56718EDB3E2AA5DA6956E16EB2CEB24925F9639;
IL2CPP_EXTERN_C String_t* _stringLiteralCA24CD6F07982144E7F00F59BB120516FE9F2C82;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2;
IL2CPP_EXTERN_C String_t* _stringLiteralCDBCEA07DABFC6B25288D8288BBB351C426F5031;
IL2CPP_EXTERN_C String_t* _stringLiteralDACAB8E155817AB3960B789D40F9BA076C12A7DE;
IL2CPP_EXTERN_C String_t* _stringLiteralDB27459F4D29B8C7D0C2162F8206C553EB68F7DD;
IL2CPP_EXTERN_C String_t* _stringLiteralE1825E475DFA146EE65BB812A4B0AD70EE37025C;
IL2CPP_EXTERN_C String_t* _stringLiteralE567A1C94B9074B06255EAAF2AA7ACFFDC194BBB;
IL2CPP_EXTERN_C String_t* _stringLiteralF1D1667616EC3665E0B644D2825CFE550F6D62AE;
IL2CPP_EXTERN_C String_t* _stringLiteralF5D343C25950A0B6471FA4741F28D8D398A82AF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF8221FB3621B9061ACA2C186AD8E11B23FC06460;
IL2CPP_EXTERN_C String_t* _stringLiteralF98F596BF2E383FF7CB4C8AD43AAFAD8DAD3FE45;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02_m56EBC9C7EBB265730A41A9931D5C4344872D346F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m1E3861C8162CFC9D0A3E0C0F36326265DB51A21E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mA5586A1780DDB7F67F29123A4E6B190CC3467268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m146BEB152A3D9B25905630734E7B87689DDFF716_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mAE7EC43AD052465D0E7DCDC708C07A5BEDBB0B8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastList_1_AddUnique_m42950E2B26235B3ACEFC2E1431D2F566FFA9A39D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastList_1_Add_m8212701FA2336834A69CC2EEC9760EFFDCA20662_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastList_1_Add_mBD8D4B1FD7FD4D6C93A0D1846BD65B6448772958_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastList_1_Clear_m56EC53118E6F37D5A363300961E69BA45EF9CC8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastList_1_Clear_mB9884C43EA47201708D11895E770C316BC151006_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastList_1_Contains_m2F2025CEDB1DC29B918CAAB245CE5DD92B03CB26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastList_1_Find_m5D30B12E866C3C0AC46B94484A91704CF9AFBB40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastList_1_RemoveAtFast_mD4EF9EEDE1A17BD46B8855DB261091A7D93D194D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastList_1_RemoveFast_m25971749BF3DF48D4DC340395051686D91C06298_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastList_1_ToArray_m9B07A0977C3112CF3B12E6EC947E4054E2668F77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastList_1__ctor_mA19607DA9ACD62B6C752E2ED87782A3F460D10F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastList_1__ctor_mCE5E70514F2279D49DA1402EAF9C78F8136D3AE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastList_1_get_Count_m10D9047727CC8A5C0D4614311A29C7B4B540A950_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastList_1_get_Count_mEB678DC28ED79B38283E6EBE99B02279850E310D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastList_1_get_Item_mC8254CC72AD0E9CC5833858EAF29EEFE3D794E2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02_mE7A81E1591706BCD8FE9D3E4C3B4354E2A0D2EEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F_mBEE7D4A949DA6B1F2146EA2364470E65F8FAB6AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_mF9AC97661AC42BDE419A2FBB948034F879A3AF5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisAudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3_mF86079EC53E2295B345994270FCD8972E48F2510_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_m1FDE84CCAA021945737527E8A5DCEE8E143EECDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayedSyncToU3Ed__57_System_Collections_IEnumerator_Reset_mA2B82E979F678459A501FF2954DB6A1194CB52C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeSoundChannelToU3Ed__63_System_Collections_IEnumerator_Reset_m496C66F1B3298154F60EAF18E62FC01C71B05058_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeSoundChannelU3Ed__64_System_Collections_IEnumerator_Reset_m53E4F2E495A32DE24F0487B17FFEC367A52FB625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFindFreeEmitterU3Eb__77_1_mE9FBB4E42EC59A4C9032CDDAA0931D3A3DEB80A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass77_0_U3CFindFreeEmitterU3Eb__0_m9C07CC21D9B564DCFDA1B23F3BF292DBD6070EEB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
struct AudioMixerSnapshotU5BU5D_tED32A17D57452B751009DA3AD9CE85B9FB7CEBDA;
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8;
struct SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB;
struct SoundFXRefU5BU5D_tEDAF36BD60BD7ADBA0D7C5A4BCDEDB7E91CB664C;
struct SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t557AD87280168ADFA4D5A474EAF6F97A51DC45C3 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,OVR.SoundFX>
struct Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE57762F22AD31036121089FE425B3B33E009CA1B* ___entries_1;
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
	KeyCollection_tC3F1C76CB343CB12C97F7DC863A9DE4B54E6194E * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t457989857DD3F372C0866DD00E657A5316D2CB3B * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E, ___entries_1)); }
	inline EntryU5BU5D_tE57762F22AD31036121089FE425B3B33E009CA1B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE57762F22AD31036121089FE425B3B33E009CA1B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE57762F22AD31036121089FE425B3B33E009CA1B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E, ___keys_7)); }
	inline KeyCollection_tC3F1C76CB343CB12C97F7DC863A9DE4B54E6194E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC3F1C76CB343CB12C97F7DC863A9DE4B54E6194E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC3F1C76CB343CB12C97F7DC863A9DE4B54E6194E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E, ___values_8)); }
	inline ValueCollection_t457989857DD3F372C0866DD00E657A5316D2CB3B * get_values_8() const { return ___values_8; }
	inline ValueCollection_t457989857DD3F372C0866DD00E657A5316D2CB3B ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t457989857DD3F372C0866DD00E657A5316D2CB3B * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// FastList`1<OVR.SoundEmitter>
struct FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5  : public RuntimeObject
{
public:
	// T[] FastList`1::array
	SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* ___array_0;
	// System.Int32 FastList`1::size
	int32_t ___size_1;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5, ___array_0)); }
	inline SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* get_array_0() const { return ___array_0; }
	inline SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}
};


// FastList`1<System.String>
struct FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F  : public RuntimeObject
{
public:
	// T[] FastList`1::array
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___array_0;
	// System.Int32 FastList`1::size
	int32_t ___size_1;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F, ___array_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_array_0() const { return ___array_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// OVR.MixerSnapshot
struct MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3  : public RuntimeObject
{
public:
	// UnityEngine.Audio.AudioMixerSnapshot OVR.MixerSnapshot::snapshot
	AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 * ___snapshot_0;
	// System.Single OVR.MixerSnapshot::transitionTime
	float ___transitionTime_1;

public:
	inline static int32_t get_offset_of_snapshot_0() { return static_cast<int32_t>(offsetof(MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3, ___snapshot_0)); }
	inline AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 * get_snapshot_0() const { return ___snapshot_0; }
	inline AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 ** get_address_of_snapshot_0() { return &___snapshot_0; }
	inline void set_snapshot_0(AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 * value)
	{
		___snapshot_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___snapshot_0), (void*)value);
	}

	inline static int32_t get_offset_of_transitionTime_1() { return static_cast<int32_t>(offsetof(MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3, ___transitionTime_1)); }
	inline float get_transitionTime_1() const { return ___transitionTime_1; }
	inline float* get_address_of_transitionTime_1() { return &___transitionTime_1; }
	inline void set_transitionTime_1(float value)
	{
		___transitionTime_1 = value;
	}
};


// OVR.SoundFXRef
struct SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7  : public RuntimeObject
{
public:
	// System.String OVR.SoundFXRef::soundFXName
	String_t* ___soundFXName_0;
	// System.Boolean OVR.SoundFXRef::initialized
	bool ___initialized_1;
	// OVR.SoundFX OVR.SoundFXRef::soundFXCached
	SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * ___soundFXCached_2;

public:
	inline static int32_t get_offset_of_soundFXName_0() { return static_cast<int32_t>(offsetof(SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7, ___soundFXName_0)); }
	inline String_t* get_soundFXName_0() const { return ___soundFXName_0; }
	inline String_t** get_address_of_soundFXName_0() { return &___soundFXName_0; }
	inline void set_soundFXName_0(String_t* value)
	{
		___soundFXName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundFXName_0), (void*)value);
	}

	inline static int32_t get_offset_of_initialized_1() { return static_cast<int32_t>(offsetof(SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7, ___initialized_1)); }
	inline bool get_initialized_1() const { return ___initialized_1; }
	inline bool* get_address_of_initialized_1() { return &___initialized_1; }
	inline void set_initialized_1(bool value)
	{
		___initialized_1 = value;
	}

	inline static int32_t get_offset_of_soundFXCached_2() { return static_cast<int32_t>(offsetof(SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7, ___soundFXCached_2)); }
	inline SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * get_soundFXCached_2() const { return ___soundFXCached_2; }
	inline SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 ** get_address_of_soundFXCached_2() { return &___soundFXCached_2; }
	inline void set_soundFXCached_2(SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * value)
	{
		___soundFXCached_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundFXCached_2), (void*)value);
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// OVR.AudioManager/<>c
struct U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7_StaticFields
{
public:
	// OVR.AudioManager/<>c OVR.AudioManager/<>c::<>9
	U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7 * ___U3CU3E9_0;
	// System.Predicate`1<OVR.SoundEmitter> OVR.AudioManager/<>c::<>9__77_1
	Predicate_1_t025E23E639B66BD976A09E0C4FC2D954D400A294 * ___U3CU3E9__77_1_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__77_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7_StaticFields, ___U3CU3E9__77_1_1)); }
	inline Predicate_1_t025E23E639B66BD976A09E0C4FC2D954D400A294 * get_U3CU3E9__77_1_1() const { return ___U3CU3E9__77_1_1; }
	inline Predicate_1_t025E23E639B66BD976A09E0C4FC2D954D400A294 ** get_address_of_U3CU3E9__77_1_1() { return &___U3CU3E9__77_1_1; }
	inline void set_U3CU3E9__77_1_1(Predicate_1_t025E23E639B66BD976A09E0C4FC2D954D400A294 * value)
	{
		___U3CU3E9__77_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__77_1_1), (void*)value);
	}
};


// OVR.SoundEmitter/<DelayedSyncTo>d__57
struct U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365  : public RuntimeObject
{
public:
	// System.Int32 OVR.SoundEmitter/<DelayedSyncTo>d__57::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OVR.SoundEmitter/<DelayedSyncTo>d__57::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// OVR.SoundEmitter OVR.SoundEmitter/<DelayedSyncTo>d__57::other
	SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * ___other_2;
	// System.Single OVR.SoundEmitter/<DelayedSyncTo>d__57::fadeTime
	float ___fadeTime_3;
	// System.Single OVR.SoundEmitter/<DelayedSyncTo>d__57::toVolume
	float ___toVolume_4;
	// OVR.SoundEmitter OVR.SoundEmitter/<DelayedSyncTo>d__57::<>4__this
	SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * ___U3CU3E4__this_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_other_2() { return static_cast<int32_t>(offsetof(U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365, ___other_2)); }
	inline SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * get_other_2() const { return ___other_2; }
	inline SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F ** get_address_of_other_2() { return &___other_2; }
	inline void set_other_2(SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * value)
	{
		___other_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___other_2), (void*)value);
	}

	inline static int32_t get_offset_of_fadeTime_3() { return static_cast<int32_t>(offsetof(U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365, ___fadeTime_3)); }
	inline float get_fadeTime_3() const { return ___fadeTime_3; }
	inline float* get_address_of_fadeTime_3() { return &___fadeTime_3; }
	inline void set_fadeTime_3(float value)
	{
		___fadeTime_3 = value;
	}

	inline static int32_t get_offset_of_toVolume_4() { return static_cast<int32_t>(offsetof(U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365, ___toVolume_4)); }
	inline float get_toVolume_4() const { return ___toVolume_4; }
	inline float* get_address_of_toVolume_4() { return &___toVolume_4; }
	inline void set_toVolume_4(float value)
	{
		___toVolume_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365, ___U3CU3E4__this_5)); }
	inline SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}
};


// OVR.SoundEmitter/<FadeSoundChannelTo>d__63
struct U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281  : public RuntimeObject
{
public:
	// System.Int32 OVR.SoundEmitter/<FadeSoundChannelTo>d__63::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OVR.SoundEmitter/<FadeSoundChannelTo>d__63::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single OVR.SoundEmitter/<FadeSoundChannelTo>d__63::fadeTime
	float ___fadeTime_2;
	// System.Single OVR.SoundEmitter/<FadeSoundChannelTo>d__63::toVolume
	float ___toVolume_3;
	// OVR.SoundEmitter OVR.SoundEmitter/<FadeSoundChannelTo>d__63::<>4__this
	SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * ___U3CU3E4__this_4;
	// System.Single OVR.SoundEmitter/<FadeSoundChannelTo>d__63::<start>5__1
	float ___U3CstartU3E5__1_5;
	// System.Single OVR.SoundEmitter/<FadeSoundChannelTo>d__63::<end>5__2
	float ___U3CendU3E5__2_6;
	// System.Single OVR.SoundEmitter/<FadeSoundChannelTo>d__63::<startTime>5__3
	float ___U3CstartTimeU3E5__3_7;
	// System.Single OVR.SoundEmitter/<FadeSoundChannelTo>d__63::<elapsedTime>5__4
	float ___U3CelapsedTimeU3E5__4_8;
	// System.Single OVR.SoundEmitter/<FadeSoundChannelTo>d__63::<t>5__5
	float ___U3CtU3E5__5_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_fadeTime_2() { return static_cast<int32_t>(offsetof(U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281, ___fadeTime_2)); }
	inline float get_fadeTime_2() const { return ___fadeTime_2; }
	inline float* get_address_of_fadeTime_2() { return &___fadeTime_2; }
	inline void set_fadeTime_2(float value)
	{
		___fadeTime_2 = value;
	}

	inline static int32_t get_offset_of_toVolume_3() { return static_cast<int32_t>(offsetof(U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281, ___toVolume_3)); }
	inline float get_toVolume_3() const { return ___toVolume_3; }
	inline float* get_address_of_toVolume_3() { return &___toVolume_3; }
	inline void set_toVolume_3(float value)
	{
		___toVolume_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281, ___U3CU3E4__this_4)); }
	inline SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281, ___U3CstartU3E5__1_5)); }
	inline float get_U3CstartU3E5__1_5() const { return ___U3CstartU3E5__1_5; }
	inline float* get_address_of_U3CstartU3E5__1_5() { return &___U3CstartU3E5__1_5; }
	inline void set_U3CstartU3E5__1_5(float value)
	{
		___U3CstartU3E5__1_5 = value;
	}

	inline static int32_t get_offset_of_U3CendU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281, ___U3CendU3E5__2_6)); }
	inline float get_U3CendU3E5__2_6() const { return ___U3CendU3E5__2_6; }
	inline float* get_address_of_U3CendU3E5__2_6() { return &___U3CendU3E5__2_6; }
	inline void set_U3CendU3E5__2_6(float value)
	{
		___U3CendU3E5__2_6 = value;
	}

	inline static int32_t get_offset_of_U3CstartTimeU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281, ___U3CstartTimeU3E5__3_7)); }
	inline float get_U3CstartTimeU3E5__3_7() const { return ___U3CstartTimeU3E5__3_7; }
	inline float* get_address_of_U3CstartTimeU3E5__3_7() { return &___U3CstartTimeU3E5__3_7; }
	inline void set_U3CstartTimeU3E5__3_7(float value)
	{
		___U3CstartTimeU3E5__3_7 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__4_8() { return static_cast<int32_t>(offsetof(U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281, ___U3CelapsedTimeU3E5__4_8)); }
	inline float get_U3CelapsedTimeU3E5__4_8() const { return ___U3CelapsedTimeU3E5__4_8; }
	inline float* get_address_of_U3CelapsedTimeU3E5__4_8() { return &___U3CelapsedTimeU3E5__4_8; }
	inline void set_U3CelapsedTimeU3E5__4_8(float value)
	{
		___U3CelapsedTimeU3E5__4_8 = value;
	}

	inline static int32_t get_offset_of_U3CtU3E5__5_9() { return static_cast<int32_t>(offsetof(U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281, ___U3CtU3E5__5_9)); }
	inline float get_U3CtU3E5__5_9() const { return ___U3CtU3E5__5_9; }
	inline float* get_address_of_U3CtU3E5__5_9() { return &___U3CtU3E5__5_9; }
	inline void set_U3CtU3E5__5_9(float value)
	{
		___U3CtU3E5__5_9 = value;
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


// UnityEngine.Keyframe
struct Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};


// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
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


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.AudioRolloffMode
struct AudioRolloffMode_tF03AAD2EA769530A00736FF411F5A77B8C753CA1 
{
public:
	// System.Int32 UnityEngine.AudioRolloffMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioRolloffMode_tF03AAD2EA769530A00736FF411F5A77B8C753CA1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioSourceCurveType
struct AudioSourceCurveType_t033629C32C8A5186C7A58F2E6008335AFFAB8326 
{
public:
	// System.Int32 UnityEngine.AudioSourceCurveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioSourceCurveType_t033629C32C8A5186C7A58F2E6008335AFFAB8326, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioVelocityUpdateMode
struct AudioVelocityUpdateMode_tD7789ACF723BBB71A61298EC9C5E6B4E249CD187 
{
public:
	// System.Int32 UnityEngine.AudioVelocityUpdateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioVelocityUpdateMode_tD7789ACF723BBB71A61298EC9C5E6B4E249CD187, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// OVR.EmitterChannel
struct EmitterChannel_tC876C29AA770581E8226071E3A2D8E15D633DCC8 
{
public:
	// System.Int32 OVR.EmitterChannel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EmitterChannel_tC876C29AA770581E8226071E3A2D8E15D633DCC8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// OVR.Fade
struct Fade_t9769FCA4522711FB4F7BF3059CACB8F54EF8A0AC 
{
public:
	// System.Int32 OVR.Fade::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Fade_t9769FCA4522711FB4F7BF3059CACB8F54EF8A0AC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OVR.FreqHint
struct FreqHint_t81BFDD95A67CAEC1FF63ACE62F2F026B35D39413 
{
public:
	// System.Int32 OVR.FreqHint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FreqHint_t81BFDD95A67CAEC1FF63ACE62F2F026B35D39413, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// InspectorCommentAttribute
struct InspectorCommentAttribute_t9219FCDA5E6E5F6CBF8BE522CBCE08E1735E0863  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String InspectorCommentAttribute::message
	String_t* ___message_0;

public:
	inline static int32_t get_offset_of_message_0() { return static_cast<int32_t>(offsetof(InspectorCommentAttribute_t9219FCDA5E6E5F6CBF8BE522CBCE08E1735E0863, ___message_0)); }
	inline String_t* get_message_0() const { return ___message_0; }
	inline String_t** get_address_of_message_0() { return &___message_0; }
	inline void set_message_0(String_t* value)
	{
		___message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_0), (void*)value);
	}
};


// InspectorNoteAttribute
struct InspectorNoteAttribute_t7E6A264BFA097C06BF3C9C75E86FC370DE39CB57  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String InspectorNoteAttribute::header
	String_t* ___header_0;
	// System.String InspectorNoteAttribute::message
	String_t* ___message_1;

public:
	inline static int32_t get_offset_of_header_0() { return static_cast<int32_t>(offsetof(InspectorNoteAttribute_t7E6A264BFA097C06BF3C9C75E86FC370DE39CB57, ___header_0)); }
	inline String_t* get_header_0() const { return ___header_0; }
	inline String_t** get_address_of_header_0() { return &___header_0; }
	inline void set_header_0(String_t* value)
	{
		___header_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___header_0), (void*)value);
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(InspectorNoteAttribute_t7E6A264BFA097C06BF3C9C75E86FC370DE39CB57, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_1), (void*)value);
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OVR.MinMaxAttribute
struct MinMaxAttribute_t3C9DB673216A640538472ED870136806B6EDA975  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.Single OVR.MinMaxAttribute::minDefaultVal
	float ___minDefaultVal_0;
	// System.Single OVR.MinMaxAttribute::maxDefaultVal
	float ___maxDefaultVal_1;
	// System.Single OVR.MinMaxAttribute::min
	float ___min_2;
	// System.Single OVR.MinMaxAttribute::max
	float ___max_3;

public:
	inline static int32_t get_offset_of_minDefaultVal_0() { return static_cast<int32_t>(offsetof(MinMaxAttribute_t3C9DB673216A640538472ED870136806B6EDA975, ___minDefaultVal_0)); }
	inline float get_minDefaultVal_0() const { return ___minDefaultVal_0; }
	inline float* get_address_of_minDefaultVal_0() { return &___minDefaultVal_0; }
	inline void set_minDefaultVal_0(float value)
	{
		___minDefaultVal_0 = value;
	}

	inline static int32_t get_offset_of_maxDefaultVal_1() { return static_cast<int32_t>(offsetof(MinMaxAttribute_t3C9DB673216A640538472ED870136806B6EDA975, ___maxDefaultVal_1)); }
	inline float get_maxDefaultVal_1() const { return ___maxDefaultVal_1; }
	inline float* get_address_of_maxDefaultVal_1() { return &___maxDefaultVal_1; }
	inline void set_maxDefaultVal_1(float value)
	{
		___maxDefaultVal_1 = value;
	}

	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(MinMaxAttribute_t3C9DB673216A640538472ED870136806B6EDA975, ___min_2)); }
	inline float get_min_2() const { return ___min_2; }
	inline float* get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(float value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(MinMaxAttribute_t3C9DB673216A640538472ED870136806B6EDA975, ___max_3)); }
	inline float get_max_3() const { return ___max_3; }
	inline float* get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(float value)
	{
		___max_3 = value;
	}
};


// OVR.OSPProps
struct OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B  : public RuntimeObject
{
public:
	// System.Boolean OVR.OSPProps::enableSpatialization
	bool ___enableSpatialization_0;
	// System.Boolean OVR.OSPProps::useFastOverride
	bool ___useFastOverride_1;
	// System.Single OVR.OSPProps::gain
	float ___gain_2;
	// System.Boolean OVR.OSPProps::enableInvSquare
	bool ___enableInvSquare_3;
	// System.Single OVR.OSPProps::volumetric
	float ___volumetric_4;
	// UnityEngine.Vector2 OVR.OSPProps::invSquareFalloff
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___invSquareFalloff_5;

public:
	inline static int32_t get_offset_of_enableSpatialization_0() { return static_cast<int32_t>(offsetof(OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B, ___enableSpatialization_0)); }
	inline bool get_enableSpatialization_0() const { return ___enableSpatialization_0; }
	inline bool* get_address_of_enableSpatialization_0() { return &___enableSpatialization_0; }
	inline void set_enableSpatialization_0(bool value)
	{
		___enableSpatialization_0 = value;
	}

	inline static int32_t get_offset_of_useFastOverride_1() { return static_cast<int32_t>(offsetof(OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B, ___useFastOverride_1)); }
	inline bool get_useFastOverride_1() const { return ___useFastOverride_1; }
	inline bool* get_address_of_useFastOverride_1() { return &___useFastOverride_1; }
	inline void set_useFastOverride_1(bool value)
	{
		___useFastOverride_1 = value;
	}

	inline static int32_t get_offset_of_gain_2() { return static_cast<int32_t>(offsetof(OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B, ___gain_2)); }
	inline float get_gain_2() const { return ___gain_2; }
	inline float* get_address_of_gain_2() { return &___gain_2; }
	inline void set_gain_2(float value)
	{
		___gain_2 = value;
	}

	inline static int32_t get_offset_of_enableInvSquare_3() { return static_cast<int32_t>(offsetof(OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B, ___enableInvSquare_3)); }
	inline bool get_enableInvSquare_3() const { return ___enableInvSquare_3; }
	inline bool* get_address_of_enableInvSquare_3() { return &___enableInvSquare_3; }
	inline void set_enableInvSquare_3(bool value)
	{
		___enableInvSquare_3 = value;
	}

	inline static int32_t get_offset_of_volumetric_4() { return static_cast<int32_t>(offsetof(OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B, ___volumetric_4)); }
	inline float get_volumetric_4() const { return ___volumetric_4; }
	inline float* get_address_of_volumetric_4() { return &___volumetric_4; }
	inline void set_volumetric_4(float value)
	{
		___volumetric_4 = value;
	}

	inline static int32_t get_offset_of_invSquareFalloff_5() { return static_cast<int32_t>(offsetof(OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B, ___invSquareFalloff_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_invSquareFalloff_5() const { return ___invSquareFalloff_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_invSquareFalloff_5() { return &___invSquareFalloff_5; }
	inline void set_invSquareFalloff_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___invSquareFalloff_5 = value;
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

// OVR.PreloadSounds
struct PreloadSounds_tBFA091F4634AFF49F96EF3AF8972BA57D393600C 
{
public:
	// System.Int32 OVR.PreloadSounds::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PreloadSounds_tBFA091F4634AFF49F96EF3AF8972BA57D393600C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OVR.SoundFXNext
struct SoundFXNext_t6728FA6CC6708373EE5F6A7D2752011E8B75626B 
{
public:
	// System.Int32 OVR.SoundFXNext::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SoundFXNext_t6728FA6CC6708373EE5F6A7D2752011E8B75626B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OVR.SoundPriority
struct SoundPriority_t850DD3C3DC2297827DAAC569120E947DAEF52888 
{
public:
	// System.Int32 OVR.SoundPriority::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SoundPriority_t850DD3C3DC2297827DAAC569120E947DAEF52888, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OVR.AudioManager/Fade
struct Fade_tC268E474B1921769BB296E0BC0D1B8B77AB711EA 
{
public:
	// System.Int32 OVR.AudioManager/Fade::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Fade_tC268E474B1921769BB296E0BC0D1B8B77AB711EA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OVR.SoundEmitter/FadeState
struct FadeState_tB782F2F0F0B3FECE18B23D868AC7EB390755A352 
{
public:
	// System.Int32 OVR.SoundEmitter/FadeState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FadeState_tB782F2F0F0B3FECE18B23D868AC7EB390755A352, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Audio.AudioMixer
struct AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Audio.AudioMixerSnapshot
struct AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// OVR.SoundFX
struct SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8  : public RuntimeObject
{
public:
	// System.String OVR.SoundFX::name
	String_t* ___name_0;
	// OVR.SoundFXNext OVR.SoundFX::playback
	int32_t ___playback_1;
	// System.Single OVR.SoundFX::volume
	float ___volume_2;
	// UnityEngine.Vector2 OVR.SoundFX::pitchVariance
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pitchVariance_3;
	// UnityEngine.Vector2 OVR.SoundFX::falloffDistance
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___falloffDistance_4;
	// UnityEngine.AudioRolloffMode OVR.SoundFX::falloffCurve
	int32_t ___falloffCurve_5;
	// UnityEngine.AnimationCurve OVR.SoundFX::volumeFalloffCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___volumeFalloffCurve_6;
	// UnityEngine.AnimationCurve OVR.SoundFX::reverbZoneMix
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___reverbZoneMix_7;
	// System.Single OVR.SoundFX::spread
	float ___spread_8;
	// System.Single OVR.SoundFX::pctChanceToPlay
	float ___pctChanceToPlay_9;
	// OVR.SoundPriority OVR.SoundFX::priority
	int32_t ___priority_10;
	// UnityEngine.Vector2 OVR.SoundFX::delay
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___delay_11;
	// System.Boolean OVR.SoundFX::looping
	bool ___looping_12;
	// OVR.OSPProps OVR.SoundFX::ospProps
	OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B * ___ospProps_13;
	// UnityEngine.AudioClip[] OVR.SoundFX::soundClips
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___soundClips_14;
	// System.Boolean OVR.SoundFX::visibilityToggle
	bool ___visibilityToggle_15;
	// OVR.SoundGroup OVR.SoundFX::soundGroup
	SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * ___soundGroup_16;
	// System.Int32 OVR.SoundFX::lastIdx
	int32_t ___lastIdx_17;
	// System.Int32 OVR.SoundFX::playingIdx
	int32_t ___playingIdx_18;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_playback_1() { return static_cast<int32_t>(offsetof(SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8, ___playback_1)); }
	inline int32_t get_playback_1() const { return ___playback_1; }
	inline int32_t* get_address_of_playback_1() { return &___playback_1; }
	inline void set_playback_1(int32_t value)
	{
		___playback_1 = value;
	}

	inline static int32_t get_offset_of_volume_2() { return static_cast<int32_t>(offsetof(SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8, ___volume_2)); }
	inline float get_volume_2() const { return ___volume_2; }
	inline float* get_address_of_volume_2() { return &___volume_2; }
	inline void set_volume_2(float value)
	{
		___volume_2 = value;
	}

	inline static int32_t get_offset_of_pitchVariance_3() { return static_cast<int32_t>(offsetof(SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8, ___pitchVariance_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_pitchVariance_3() const { return ___pitchVariance_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_pitchVariance_3() { return &___pitchVariance_3; }
	inline void set_pitchVariance_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___pitchVariance_3 = value;
	}

	inline static int32_t get_offset_of_falloffDistance_4() { return static_cast<int32_t>(offsetof(SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8, ___falloffDistance_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_falloffDistance_4() const { return ___falloffDistance_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_falloffDistance_4() { return &___falloffDistance_4; }
	inline void set_falloffDistance_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___falloffDistance_4 = value;
	}

	inline static int32_t get_offset_of_falloffCurve_5() { return static_cast<int32_t>(offsetof(SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8, ___falloffCurve_5)); }
	inline int32_t get_falloffCurve_5() const { return ___falloffCurve_5; }
	inline int32_t* get_address_of_falloffCurve_5() { return &___falloffCurve_5; }
	inline void set_falloffCurve_5(int32_t value)
	{
		___falloffCurve_5 = value;
	}

	inline static int32_t get_offset_of_volumeFalloffCurve_6() { return static_cast<int32_t>(offsetof(SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8, ___volumeFalloffCurve_6)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_volumeFalloffCurve_6() const { return ___volumeFalloffCurve_6; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_volumeFalloffCurve_6() { return &___volumeFalloffCurve_6; }
	inline void set_volumeFalloffCurve_6(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___volumeFalloffCurve_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___volumeFalloffCurve_6), (void*)value);
	}

	inline static int32_t get_offset_of_reverbZoneMix_7() { return static_cast<int32_t>(offsetof(SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8, ___reverbZoneMix_7)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_reverbZoneMix_7() const { return ___reverbZoneMix_7; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_reverbZoneMix_7() { return &___reverbZoneMix_7; }
	inline void set_reverbZoneMix_7(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___reverbZoneMix_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reverbZoneMix_7), (void*)value);
	}

	inline static int32_t get_offset_of_spread_8() { return static_cast<int32_t>(offsetof(SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8, ___spread_8)); }
	inline float get_spread_8() const { return ___spread_8; }
	inline float* get_address_of_spread_8() { return &___spread_8; }
	inline void set_spread_8(float value)
	{
		___spread_8 = value;
	}

	inline static int32_t get_offset_of_pctChanceToPlay_9() { return static_cast<int32_t>(offsetof(SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8, ___pctChanceToPlay_9)); }
	inline float get_pctChanceToPlay_9() const { return ___pctChanceToPlay_9; }
	inline float* get_address_of_pctChanceToPlay_9() { return &___pctChanceToPlay_9; }
	inline void set_pctChanceToPlay_9(float value)
	{
		___pctChanceToPlay_9 = value;
	}

	inline static int32_t get_offset_of_priority_10() { return static_cast<int32_t>(offsetof(SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8, ___priority_10)); }
	inline int32_t get_priority_10() const { return ___priority_10; }
	inline int32_t* get_address_of_priority_10() { return &___priority_10; }
	inline void set_priority_10(int32_t value)
	{
		___priority_10 = value;
	}

	inline static int32_t get_offset_of_delay_11() { return static_cast<int32_t>(offsetof(SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8, ___delay_11)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_delay_11() const { return ___delay_11; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_delay_11() { return &___delay_11; }
	inline void set_delay_11(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___delay_11 = value;
	}

	inline static int32_t get_offset_of_looping_12() { return static_cast<int32_t>(offsetof(SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8, ___looping_12)); }
	inline bool get_looping_12() const { return ___looping_12; }
	inline bool* get_address_of_looping_12() { return &___looping_12; }
	inline void set_looping_12(bool value)
	{
		___looping_12 = value;
	}

	inline static int32_t get_offset_of_ospProps_13() { return static_cast<int32_t>(offsetof(SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8, ___ospProps_13)); }
	inline OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B * get_ospProps_13() const { return ___ospProps_13; }
	inline OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B ** get_address_of_ospProps_13() { return &___ospProps_13; }
	inline void set_ospProps_13(OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B * value)
	{
		___ospProps_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ospProps_13), (void*)value);
	}

	inline static int32_t get_offset_of_soundClips_14() { return static_cast<int32_t>(offsetof(SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8, ___soundClips_14)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_soundClips_14() const { return ___soundClips_14; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_soundClips_14() { return &___soundClips_14; }
	inline void set_soundClips_14(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___soundClips_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundClips_14), (void*)value);
	}

	inline static int32_t get_offset_of_visibilityToggle_15() { return static_cast<int32_t>(offsetof(SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8, ___visibilityToggle_15)); }
	inline bool get_visibilityToggle_15() const { return ___visibilityToggle_15; }
	inline bool* get_address_of_visibilityToggle_15() { return &___visibilityToggle_15; }
	inline void set_visibilityToggle_15(bool value)
	{
		___visibilityToggle_15 = value;
	}

	inline static int32_t get_offset_of_soundGroup_16() { return static_cast<int32_t>(offsetof(SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8, ___soundGroup_16)); }
	inline SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * get_soundGroup_16() const { return ___soundGroup_16; }
	inline SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F ** get_address_of_soundGroup_16() { return &___soundGroup_16; }
	inline void set_soundGroup_16(SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * value)
	{
		___soundGroup_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundGroup_16), (void*)value);
	}

	inline static int32_t get_offset_of_lastIdx_17() { return static_cast<int32_t>(offsetof(SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8, ___lastIdx_17)); }
	inline int32_t get_lastIdx_17() const { return ___lastIdx_17; }
	inline int32_t* get_address_of_lastIdx_17() { return &___lastIdx_17; }
	inline void set_lastIdx_17(int32_t value)
	{
		___lastIdx_17 = value;
	}

	inline static int32_t get_offset_of_playingIdx_18() { return static_cast<int32_t>(offsetof(SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8, ___playingIdx_18)); }
	inline int32_t get_playingIdx_18() const { return ___playingIdx_18; }
	inline int32_t* get_address_of_playingIdx_18() { return &___playingIdx_18; }
	inline void set_playingIdx_18(int32_t value)
	{
		___playingIdx_18 = value;
	}
};


// OVR.SoundGroup
struct SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F  : public RuntimeObject
{
public:
	// System.String OVR.SoundGroup::name
	String_t* ___name_0;
	// OVR.SoundFX[] OVR.SoundGroup::soundList
	SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB* ___soundList_1;
	// UnityEngine.Audio.AudioMixerGroup OVR.SoundGroup::mixerGroup
	AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * ___mixerGroup_2;
	// System.Int32 OVR.SoundGroup::maxPlayingSounds
	int32_t ___maxPlayingSounds_3;
	// OVR.PreloadSounds OVR.SoundGroup::preloadAudio
	int32_t ___preloadAudio_4;
	// System.Single OVR.SoundGroup::volumeOverride
	float ___volumeOverride_5;
	// System.Int32 OVR.SoundGroup::playingSoundCount
	int32_t ___playingSoundCount_6;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_soundList_1() { return static_cast<int32_t>(offsetof(SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F, ___soundList_1)); }
	inline SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB* get_soundList_1() const { return ___soundList_1; }
	inline SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB** get_address_of_soundList_1() { return &___soundList_1; }
	inline void set_soundList_1(SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB* value)
	{
		___soundList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundList_1), (void*)value);
	}

	inline static int32_t get_offset_of_mixerGroup_2() { return static_cast<int32_t>(offsetof(SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F, ___mixerGroup_2)); }
	inline AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * get_mixerGroup_2() const { return ___mixerGroup_2; }
	inline AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F ** get_address_of_mixerGroup_2() { return &___mixerGroup_2; }
	inline void set_mixerGroup_2(AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * value)
	{
		___mixerGroup_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixerGroup_2), (void*)value);
	}

	inline static int32_t get_offset_of_maxPlayingSounds_3() { return static_cast<int32_t>(offsetof(SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F, ___maxPlayingSounds_3)); }
	inline int32_t get_maxPlayingSounds_3() const { return ___maxPlayingSounds_3; }
	inline int32_t* get_address_of_maxPlayingSounds_3() { return &___maxPlayingSounds_3; }
	inline void set_maxPlayingSounds_3(int32_t value)
	{
		___maxPlayingSounds_3 = value;
	}

	inline static int32_t get_offset_of_preloadAudio_4() { return static_cast<int32_t>(offsetof(SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F, ___preloadAudio_4)); }
	inline int32_t get_preloadAudio_4() const { return ___preloadAudio_4; }
	inline int32_t* get_address_of_preloadAudio_4() { return &___preloadAudio_4; }
	inline void set_preloadAudio_4(int32_t value)
	{
		___preloadAudio_4 = value;
	}

	inline static int32_t get_offset_of_volumeOverride_5() { return static_cast<int32_t>(offsetof(SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F, ___volumeOverride_5)); }
	inline float get_volumeOverride_5() const { return ___volumeOverride_5; }
	inline float* get_address_of_volumeOverride_5() { return &___volumeOverride_5; }
	inline void set_volumeOverride_5(float value)
	{
		___volumeOverride_5 = value;
	}

	inline static int32_t get_offset_of_playingSoundCount_6() { return static_cast<int32_t>(offsetof(SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F, ___playingSoundCount_6)); }
	inline int32_t get_playingSoundCount_6() const { return ___playingSoundCount_6; }
	inline int32_t* get_address_of_playingSoundCount_6() { return &___playingSoundCount_6; }
	inline void set_playingSoundCount_6(int32_t value)
	{
		___playingSoundCount_6 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// OVR.AudioManager/<>c__DisplayClass77_0
struct U3CU3Ec__DisplayClass77_0_t68997B623E8CD6034DDB01B6BCFAC1C37A7F5037  : public RuntimeObject
{
public:
	// OVR.SoundPriority OVR.AudioManager/<>c__DisplayClass77_0::priority
	int32_t ___priority_0;

public:
	inline static int32_t get_offset_of_priority_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass77_0_t68997B623E8CD6034DDB01B6BCFAC1C37A7F5037, ___priority_0)); }
	inline int32_t get_priority_0() const { return ___priority_0; }
	inline int32_t* get_address_of_priority_0() { return &___priority_0; }
	inline void set_priority_0(int32_t value)
	{
		___priority_0 = value;
	}
};


// OVR.SoundEmitter/<FadeSoundChannel>d__64
struct U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF  : public RuntimeObject
{
public:
	// System.Int32 OVR.SoundEmitter/<FadeSoundChannel>d__64::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OVR.SoundEmitter/<FadeSoundChannel>d__64::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single OVR.SoundEmitter/<FadeSoundChannel>d__64::delaySecs
	float ___delaySecs_2;
	// System.Single OVR.SoundEmitter/<FadeSoundChannel>d__64::fadeTime
	float ___fadeTime_3;
	// OVR.Fade OVR.SoundEmitter/<FadeSoundChannel>d__64::fadeType
	int32_t ___fadeType_4;
	// System.Single OVR.SoundEmitter/<FadeSoundChannel>d__64::defaultVolume
	float ___defaultVolume_5;
	// OVR.SoundEmitter OVR.SoundEmitter/<FadeSoundChannel>d__64::<>4__this
	SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * ___U3CU3E4__this_6;
	// System.Single OVR.SoundEmitter/<FadeSoundChannel>d__64::<start>5__1
	float ___U3CstartU3E5__1_7;
	// System.Single OVR.SoundEmitter/<FadeSoundChannel>d__64::<end>5__2
	float ___U3CendU3E5__2_8;
	// System.Boolean OVR.SoundEmitter/<FadeSoundChannel>d__64::<restartPlay>5__3
	bool ___U3CrestartPlayU3E5__3_9;
	// System.Single OVR.SoundEmitter/<FadeSoundChannel>d__64::<startTime>5__4
	float ___U3CstartTimeU3E5__4_10;
	// System.Single OVR.SoundEmitter/<FadeSoundChannel>d__64::<elapsedTime>5__5
	float ___U3CelapsedTimeU3E5__5_11;
	// System.Single OVR.SoundEmitter/<FadeSoundChannel>d__64::<t>5__6
	float ___U3CtU3E5__6_12;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delaySecs_2() { return static_cast<int32_t>(offsetof(U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF, ___delaySecs_2)); }
	inline float get_delaySecs_2() const { return ___delaySecs_2; }
	inline float* get_address_of_delaySecs_2() { return &___delaySecs_2; }
	inline void set_delaySecs_2(float value)
	{
		___delaySecs_2 = value;
	}

	inline static int32_t get_offset_of_fadeTime_3() { return static_cast<int32_t>(offsetof(U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF, ___fadeTime_3)); }
	inline float get_fadeTime_3() const { return ___fadeTime_3; }
	inline float* get_address_of_fadeTime_3() { return &___fadeTime_3; }
	inline void set_fadeTime_3(float value)
	{
		___fadeTime_3 = value;
	}

	inline static int32_t get_offset_of_fadeType_4() { return static_cast<int32_t>(offsetof(U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF, ___fadeType_4)); }
	inline int32_t get_fadeType_4() const { return ___fadeType_4; }
	inline int32_t* get_address_of_fadeType_4() { return &___fadeType_4; }
	inline void set_fadeType_4(int32_t value)
	{
		___fadeType_4 = value;
	}

	inline static int32_t get_offset_of_defaultVolume_5() { return static_cast<int32_t>(offsetof(U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF, ___defaultVolume_5)); }
	inline float get_defaultVolume_5() const { return ___defaultVolume_5; }
	inline float* get_address_of_defaultVolume_5() { return &___defaultVolume_5; }
	inline void set_defaultVolume_5(float value)
	{
		___defaultVolume_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_6() { return static_cast<int32_t>(offsetof(U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF, ___U3CU3E4__this_6)); }
	inline SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * get_U3CU3E4__this_6() const { return ___U3CU3E4__this_6; }
	inline SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F ** get_address_of_U3CU3E4__this_6() { return &___U3CU3E4__this_6; }
	inline void set_U3CU3E4__this_6(SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * value)
	{
		___U3CU3E4__this_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF, ___U3CstartU3E5__1_7)); }
	inline float get_U3CstartU3E5__1_7() const { return ___U3CstartU3E5__1_7; }
	inline float* get_address_of_U3CstartU3E5__1_7() { return &___U3CstartU3E5__1_7; }
	inline void set_U3CstartU3E5__1_7(float value)
	{
		___U3CstartU3E5__1_7 = value;
	}

	inline static int32_t get_offset_of_U3CendU3E5__2_8() { return static_cast<int32_t>(offsetof(U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF, ___U3CendU3E5__2_8)); }
	inline float get_U3CendU3E5__2_8() const { return ___U3CendU3E5__2_8; }
	inline float* get_address_of_U3CendU3E5__2_8() { return &___U3CendU3E5__2_8; }
	inline void set_U3CendU3E5__2_8(float value)
	{
		___U3CendU3E5__2_8 = value;
	}

	inline static int32_t get_offset_of_U3CrestartPlayU3E5__3_9() { return static_cast<int32_t>(offsetof(U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF, ___U3CrestartPlayU3E5__3_9)); }
	inline bool get_U3CrestartPlayU3E5__3_9() const { return ___U3CrestartPlayU3E5__3_9; }
	inline bool* get_address_of_U3CrestartPlayU3E5__3_9() { return &___U3CrestartPlayU3E5__3_9; }
	inline void set_U3CrestartPlayU3E5__3_9(bool value)
	{
		___U3CrestartPlayU3E5__3_9 = value;
	}

	inline static int32_t get_offset_of_U3CstartTimeU3E5__4_10() { return static_cast<int32_t>(offsetof(U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF, ___U3CstartTimeU3E5__4_10)); }
	inline float get_U3CstartTimeU3E5__4_10() const { return ___U3CstartTimeU3E5__4_10; }
	inline float* get_address_of_U3CstartTimeU3E5__4_10() { return &___U3CstartTimeU3E5__4_10; }
	inline void set_U3CstartTimeU3E5__4_10(float value)
	{
		___U3CstartTimeU3E5__4_10 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__5_11() { return static_cast<int32_t>(offsetof(U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF, ___U3CelapsedTimeU3E5__5_11)); }
	inline float get_U3CelapsedTimeU3E5__5_11() const { return ___U3CelapsedTimeU3E5__5_11; }
	inline float* get_address_of_U3CelapsedTimeU3E5__5_11() { return &___U3CelapsedTimeU3E5__5_11; }
	inline void set_U3CelapsedTimeU3E5__5_11(float value)
	{
		___U3CelapsedTimeU3E5__5_11 = value;
	}

	inline static int32_t get_offset_of_U3CtU3E5__6_12() { return static_cast<int32_t>(offsetof(U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF, ___U3CtU3E5__6_12)); }
	inline float get_U3CtU3E5__6_12() const { return ___U3CtU3E5__6_12; }
	inline float* get_address_of_U3CtU3E5__6_12() { return &___U3CtU3E5__6_12; }
	inline void set_U3CtU3E5__6_12(float value)
	{
		___U3CtU3E5__6_12 = value;
	}
};


// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<OVR.SoundEmitter>
struct Predicate_1_t025E23E639B66BD976A09E0C4FC2D954D400A294  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
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


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// OVR.AmbienceEmitter
struct AmbienceEmitter_tC44EB9593D9B3F2E4E7C56950D0B2C8BB47B26A5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// OVR.SoundFXRef[] OVR.AmbienceEmitter::ambientSounds
	SoundFXRefU5BU5D_tEDAF36BD60BD7ADBA0D7C5A4BCDEDB7E91CB664C* ___ambientSounds_4;
	// System.Boolean OVR.AmbienceEmitter::autoActivate
	bool ___autoActivate_5;
	// System.Boolean OVR.AmbienceEmitter::autoRetrigger
	bool ___autoRetrigger_6;
	// UnityEngine.Vector2 OVR.AmbienceEmitter::randomRetriggerDelaySecs
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___randomRetriggerDelaySecs_7;
	// UnityEngine.Transform[] OVR.AmbienceEmitter::playPositions
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___playPositions_8;
	// System.Boolean OVR.AmbienceEmitter::activated
	bool ___activated_9;
	// System.Int32 OVR.AmbienceEmitter::playingIdx
	int32_t ___playingIdx_10;
	// System.Single OVR.AmbienceEmitter::nextPlayTime
	float ___nextPlayTime_11;
	// System.Single OVR.AmbienceEmitter::fadeTime
	float ___fadeTime_12;
	// System.Int32 OVR.AmbienceEmitter::lastPosIdx
	int32_t ___lastPosIdx_13;

public:
	inline static int32_t get_offset_of_ambientSounds_4() { return static_cast<int32_t>(offsetof(AmbienceEmitter_tC44EB9593D9B3F2E4E7C56950D0B2C8BB47B26A5, ___ambientSounds_4)); }
	inline SoundFXRefU5BU5D_tEDAF36BD60BD7ADBA0D7C5A4BCDEDB7E91CB664C* get_ambientSounds_4() const { return ___ambientSounds_4; }
	inline SoundFXRefU5BU5D_tEDAF36BD60BD7ADBA0D7C5A4BCDEDB7E91CB664C** get_address_of_ambientSounds_4() { return &___ambientSounds_4; }
	inline void set_ambientSounds_4(SoundFXRefU5BU5D_tEDAF36BD60BD7ADBA0D7C5A4BCDEDB7E91CB664C* value)
	{
		___ambientSounds_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ambientSounds_4), (void*)value);
	}

	inline static int32_t get_offset_of_autoActivate_5() { return static_cast<int32_t>(offsetof(AmbienceEmitter_tC44EB9593D9B3F2E4E7C56950D0B2C8BB47B26A5, ___autoActivate_5)); }
	inline bool get_autoActivate_5() const { return ___autoActivate_5; }
	inline bool* get_address_of_autoActivate_5() { return &___autoActivate_5; }
	inline void set_autoActivate_5(bool value)
	{
		___autoActivate_5 = value;
	}

	inline static int32_t get_offset_of_autoRetrigger_6() { return static_cast<int32_t>(offsetof(AmbienceEmitter_tC44EB9593D9B3F2E4E7C56950D0B2C8BB47B26A5, ___autoRetrigger_6)); }
	inline bool get_autoRetrigger_6() const { return ___autoRetrigger_6; }
	inline bool* get_address_of_autoRetrigger_6() { return &___autoRetrigger_6; }
	inline void set_autoRetrigger_6(bool value)
	{
		___autoRetrigger_6 = value;
	}

	inline static int32_t get_offset_of_randomRetriggerDelaySecs_7() { return static_cast<int32_t>(offsetof(AmbienceEmitter_tC44EB9593D9B3F2E4E7C56950D0B2C8BB47B26A5, ___randomRetriggerDelaySecs_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_randomRetriggerDelaySecs_7() const { return ___randomRetriggerDelaySecs_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_randomRetriggerDelaySecs_7() { return &___randomRetriggerDelaySecs_7; }
	inline void set_randomRetriggerDelaySecs_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___randomRetriggerDelaySecs_7 = value;
	}

	inline static int32_t get_offset_of_playPositions_8() { return static_cast<int32_t>(offsetof(AmbienceEmitter_tC44EB9593D9B3F2E4E7C56950D0B2C8BB47B26A5, ___playPositions_8)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_playPositions_8() const { return ___playPositions_8; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_playPositions_8() { return &___playPositions_8; }
	inline void set_playPositions_8(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___playPositions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playPositions_8), (void*)value);
	}

	inline static int32_t get_offset_of_activated_9() { return static_cast<int32_t>(offsetof(AmbienceEmitter_tC44EB9593D9B3F2E4E7C56950D0B2C8BB47B26A5, ___activated_9)); }
	inline bool get_activated_9() const { return ___activated_9; }
	inline bool* get_address_of_activated_9() { return &___activated_9; }
	inline void set_activated_9(bool value)
	{
		___activated_9 = value;
	}

	inline static int32_t get_offset_of_playingIdx_10() { return static_cast<int32_t>(offsetof(AmbienceEmitter_tC44EB9593D9B3F2E4E7C56950D0B2C8BB47B26A5, ___playingIdx_10)); }
	inline int32_t get_playingIdx_10() const { return ___playingIdx_10; }
	inline int32_t* get_address_of_playingIdx_10() { return &___playingIdx_10; }
	inline void set_playingIdx_10(int32_t value)
	{
		___playingIdx_10 = value;
	}

	inline static int32_t get_offset_of_nextPlayTime_11() { return static_cast<int32_t>(offsetof(AmbienceEmitter_tC44EB9593D9B3F2E4E7C56950D0B2C8BB47B26A5, ___nextPlayTime_11)); }
	inline float get_nextPlayTime_11() const { return ___nextPlayTime_11; }
	inline float* get_address_of_nextPlayTime_11() { return &___nextPlayTime_11; }
	inline void set_nextPlayTime_11(float value)
	{
		___nextPlayTime_11 = value;
	}

	inline static int32_t get_offset_of_fadeTime_12() { return static_cast<int32_t>(offsetof(AmbienceEmitter_tC44EB9593D9B3F2E4E7C56950D0B2C8BB47B26A5, ___fadeTime_12)); }
	inline float get_fadeTime_12() const { return ___fadeTime_12; }
	inline float* get_address_of_fadeTime_12() { return &___fadeTime_12; }
	inline void set_fadeTime_12(float value)
	{
		___fadeTime_12 = value;
	}

	inline static int32_t get_offset_of_lastPosIdx_13() { return static_cast<int32_t>(offsetof(AmbienceEmitter_tC44EB9593D9B3F2E4E7C56950D0B2C8BB47B26A5, ___lastPosIdx_13)); }
	inline int32_t get_lastPosIdx_13() const { return ___lastPosIdx_13; }
	inline int32_t* get_address_of_lastPosIdx_13() { return &___lastPosIdx_13; }
	inline void set_lastPosIdx_13(int32_t value)
	{
		___lastPosIdx_13 = value;
	}
};


// UnityEngine.AudioListener
struct AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// OVR.AudioManager
struct AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean OVR.AudioManager::makePersistent
	bool ___makePersistent_4;
	// System.Boolean OVR.AudioManager::enableSpatializedAudio
	bool ___enableSpatializedAudio_5;
	// System.Boolean OVR.AudioManager::enableSpatializedFastOverride
	bool ___enableSpatializedFastOverride_6;
	// UnityEngine.Audio.AudioMixer OVR.AudioManager::audioMixer
	AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * ___audioMixer_7;
	// UnityEngine.Audio.AudioMixerGroup OVR.AudioManager::defaultMixerGroup
	AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * ___defaultMixerGroup_8;
	// UnityEngine.Audio.AudioMixerGroup OVR.AudioManager::reservedMixerGroup
	AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * ___reservedMixerGroup_9;
	// UnityEngine.Audio.AudioMixerGroup OVR.AudioManager::voiceChatMixerGroup
	AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * ___voiceChatMixerGroup_10;
	// System.Boolean OVR.AudioManager::verboseLogging
	bool ___verboseLogging_11;
	// System.Int32 OVR.AudioManager::maxSoundEmitters
	int32_t ___maxSoundEmitters_12;
	// System.Single OVR.AudioManager::volumeSoundFX
	float ___volumeSoundFX_13;
	// System.Single OVR.AudioManager::soundFxFadeSecs
	float ___soundFxFadeSecs_14;
	// System.Single OVR.AudioManager::audioMinFallOffDistance
	float ___audioMinFallOffDistance_15;
	// System.Single OVR.AudioManager::audioMaxFallOffDistance
	float ___audioMaxFallOffDistance_16;
	// OVR.SoundGroup[] OVR.AudioManager::soundGroupings
	SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212* ___soundGroupings_17;
	// System.Collections.Generic.Dictionary`2<System.String,OVR.SoundFX> OVR.AudioManager::soundFXCache
	Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E * ___soundFXCache_18;
	// System.Single OVR.AudioManager::audioMaxFallOffDistanceSqr
	float ___audioMaxFallOffDistanceSqr_24;
	// OVR.SoundEmitter[] OVR.AudioManager::soundEmitters
	SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* ___soundEmitters_25;
	// FastList`1<OVR.SoundEmitter> OVR.AudioManager::playingEmitters
	FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * ___playingEmitters_26;
	// FastList`1<OVR.SoundEmitter> OVR.AudioManager::nextFreeEmitters
	FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * ___nextFreeEmitters_27;
	// OVR.MixerSnapshot OVR.AudioManager::currentSnapshot
	MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 * ___currentSnapshot_28;

public:
	inline static int32_t get_offset_of_makePersistent_4() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053, ___makePersistent_4)); }
	inline bool get_makePersistent_4() const { return ___makePersistent_4; }
	inline bool* get_address_of_makePersistent_4() { return &___makePersistent_4; }
	inline void set_makePersistent_4(bool value)
	{
		___makePersistent_4 = value;
	}

	inline static int32_t get_offset_of_enableSpatializedAudio_5() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053, ___enableSpatializedAudio_5)); }
	inline bool get_enableSpatializedAudio_5() const { return ___enableSpatializedAudio_5; }
	inline bool* get_address_of_enableSpatializedAudio_5() { return &___enableSpatializedAudio_5; }
	inline void set_enableSpatializedAudio_5(bool value)
	{
		___enableSpatializedAudio_5 = value;
	}

	inline static int32_t get_offset_of_enableSpatializedFastOverride_6() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053, ___enableSpatializedFastOverride_6)); }
	inline bool get_enableSpatializedFastOverride_6() const { return ___enableSpatializedFastOverride_6; }
	inline bool* get_address_of_enableSpatializedFastOverride_6() { return &___enableSpatializedFastOverride_6; }
	inline void set_enableSpatializedFastOverride_6(bool value)
	{
		___enableSpatializedFastOverride_6 = value;
	}

	inline static int32_t get_offset_of_audioMixer_7() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053, ___audioMixer_7)); }
	inline AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * get_audioMixer_7() const { return ___audioMixer_7; }
	inline AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 ** get_address_of_audioMixer_7() { return &___audioMixer_7; }
	inline void set_audioMixer_7(AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * value)
	{
		___audioMixer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioMixer_7), (void*)value);
	}

	inline static int32_t get_offset_of_defaultMixerGroup_8() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053, ___defaultMixerGroup_8)); }
	inline AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * get_defaultMixerGroup_8() const { return ___defaultMixerGroup_8; }
	inline AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F ** get_address_of_defaultMixerGroup_8() { return &___defaultMixerGroup_8; }
	inline void set_defaultMixerGroup_8(AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * value)
	{
		___defaultMixerGroup_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultMixerGroup_8), (void*)value);
	}

	inline static int32_t get_offset_of_reservedMixerGroup_9() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053, ___reservedMixerGroup_9)); }
	inline AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * get_reservedMixerGroup_9() const { return ___reservedMixerGroup_9; }
	inline AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F ** get_address_of_reservedMixerGroup_9() { return &___reservedMixerGroup_9; }
	inline void set_reservedMixerGroup_9(AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * value)
	{
		___reservedMixerGroup_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reservedMixerGroup_9), (void*)value);
	}

	inline static int32_t get_offset_of_voiceChatMixerGroup_10() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053, ___voiceChatMixerGroup_10)); }
	inline AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * get_voiceChatMixerGroup_10() const { return ___voiceChatMixerGroup_10; }
	inline AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F ** get_address_of_voiceChatMixerGroup_10() { return &___voiceChatMixerGroup_10; }
	inline void set_voiceChatMixerGroup_10(AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * value)
	{
		___voiceChatMixerGroup_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceChatMixerGroup_10), (void*)value);
	}

	inline static int32_t get_offset_of_verboseLogging_11() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053, ___verboseLogging_11)); }
	inline bool get_verboseLogging_11() const { return ___verboseLogging_11; }
	inline bool* get_address_of_verboseLogging_11() { return &___verboseLogging_11; }
	inline void set_verboseLogging_11(bool value)
	{
		___verboseLogging_11 = value;
	}

	inline static int32_t get_offset_of_maxSoundEmitters_12() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053, ___maxSoundEmitters_12)); }
	inline int32_t get_maxSoundEmitters_12() const { return ___maxSoundEmitters_12; }
	inline int32_t* get_address_of_maxSoundEmitters_12() { return &___maxSoundEmitters_12; }
	inline void set_maxSoundEmitters_12(int32_t value)
	{
		___maxSoundEmitters_12 = value;
	}

	inline static int32_t get_offset_of_volumeSoundFX_13() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053, ___volumeSoundFX_13)); }
	inline float get_volumeSoundFX_13() const { return ___volumeSoundFX_13; }
	inline float* get_address_of_volumeSoundFX_13() { return &___volumeSoundFX_13; }
	inline void set_volumeSoundFX_13(float value)
	{
		___volumeSoundFX_13 = value;
	}

	inline static int32_t get_offset_of_soundFxFadeSecs_14() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053, ___soundFxFadeSecs_14)); }
	inline float get_soundFxFadeSecs_14() const { return ___soundFxFadeSecs_14; }
	inline float* get_address_of_soundFxFadeSecs_14() { return &___soundFxFadeSecs_14; }
	inline void set_soundFxFadeSecs_14(float value)
	{
		___soundFxFadeSecs_14 = value;
	}

	inline static int32_t get_offset_of_audioMinFallOffDistance_15() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053, ___audioMinFallOffDistance_15)); }
	inline float get_audioMinFallOffDistance_15() const { return ___audioMinFallOffDistance_15; }
	inline float* get_address_of_audioMinFallOffDistance_15() { return &___audioMinFallOffDistance_15; }
	inline void set_audioMinFallOffDistance_15(float value)
	{
		___audioMinFallOffDistance_15 = value;
	}

	inline static int32_t get_offset_of_audioMaxFallOffDistance_16() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053, ___audioMaxFallOffDistance_16)); }
	inline float get_audioMaxFallOffDistance_16() const { return ___audioMaxFallOffDistance_16; }
	inline float* get_address_of_audioMaxFallOffDistance_16() { return &___audioMaxFallOffDistance_16; }
	inline void set_audioMaxFallOffDistance_16(float value)
	{
		___audioMaxFallOffDistance_16 = value;
	}

	inline static int32_t get_offset_of_soundGroupings_17() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053, ___soundGroupings_17)); }
	inline SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212* get_soundGroupings_17() const { return ___soundGroupings_17; }
	inline SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212** get_address_of_soundGroupings_17() { return &___soundGroupings_17; }
	inline void set_soundGroupings_17(SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212* value)
	{
		___soundGroupings_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundGroupings_17), (void*)value);
	}

	inline static int32_t get_offset_of_soundFXCache_18() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053, ___soundFXCache_18)); }
	inline Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E * get_soundFXCache_18() const { return ___soundFXCache_18; }
	inline Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E ** get_address_of_soundFXCache_18() { return &___soundFXCache_18; }
	inline void set_soundFXCache_18(Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E * value)
	{
		___soundFXCache_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundFXCache_18), (void*)value);
	}

	inline static int32_t get_offset_of_audioMaxFallOffDistanceSqr_24() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053, ___audioMaxFallOffDistanceSqr_24)); }
	inline float get_audioMaxFallOffDistanceSqr_24() const { return ___audioMaxFallOffDistanceSqr_24; }
	inline float* get_address_of_audioMaxFallOffDistanceSqr_24() { return &___audioMaxFallOffDistanceSqr_24; }
	inline void set_audioMaxFallOffDistanceSqr_24(float value)
	{
		___audioMaxFallOffDistanceSqr_24 = value;
	}

	inline static int32_t get_offset_of_soundEmitters_25() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053, ___soundEmitters_25)); }
	inline SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* get_soundEmitters_25() const { return ___soundEmitters_25; }
	inline SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8** get_address_of_soundEmitters_25() { return &___soundEmitters_25; }
	inline void set_soundEmitters_25(SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* value)
	{
		___soundEmitters_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundEmitters_25), (void*)value);
	}

	inline static int32_t get_offset_of_playingEmitters_26() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053, ___playingEmitters_26)); }
	inline FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * get_playingEmitters_26() const { return ___playingEmitters_26; }
	inline FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 ** get_address_of_playingEmitters_26() { return &___playingEmitters_26; }
	inline void set_playingEmitters_26(FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * value)
	{
		___playingEmitters_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playingEmitters_26), (void*)value);
	}

	inline static int32_t get_offset_of_nextFreeEmitters_27() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053, ___nextFreeEmitters_27)); }
	inline FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * get_nextFreeEmitters_27() const { return ___nextFreeEmitters_27; }
	inline FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 ** get_address_of_nextFreeEmitters_27() { return &___nextFreeEmitters_27; }
	inline void set_nextFreeEmitters_27(FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * value)
	{
		___nextFreeEmitters_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextFreeEmitters_27), (void*)value);
	}

	inline static int32_t get_offset_of_currentSnapshot_28() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053, ___currentSnapshot_28)); }
	inline MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 * get_currentSnapshot_28() const { return ___currentSnapshot_28; }
	inline MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 ** get_address_of_currentSnapshot_28() { return &___currentSnapshot_28; }
	inline void set_currentSnapshot_28(MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 * value)
	{
		___currentSnapshot_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSnapshot_28), (void*)value);
	}
};

struct AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields
{
public:
	// OVR.AudioManager OVR.AudioManager::theAudioManager
	AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * ___theAudioManager_19;
	// FastList`1<System.String> OVR.AudioManager::names
	FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F * ___names_20;
	// System.String[] OVR.AudioManager::defaultSound
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___defaultSound_21;
	// OVR.SoundFX OVR.AudioManager::nullSound
	SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * ___nullSound_22;
	// System.Boolean OVR.AudioManager::hideWarnings
	bool ___hideWarnings_23;
	// UnityEngine.GameObject OVR.AudioManager::soundEmitterParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___soundEmitterParent_29;
	// UnityEngine.Transform OVR.AudioManager::staticListenerPosition
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___staticListenerPosition_30;
	// System.Boolean OVR.AudioManager::showPlayingEmitterCount
	bool ___showPlayingEmitterCount_31;
	// System.Boolean OVR.AudioManager::forceShowEmitterCount
	bool ___forceShowEmitterCount_32;
	// System.Boolean OVR.AudioManager::soundEnabled
	bool ___soundEnabled_33;
	// UnityEngine.AnimationCurve OVR.AudioManager::defaultReverbZoneMix
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___defaultReverbZoneMix_34;

public:
	inline static int32_t get_offset_of_theAudioManager_19() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields, ___theAudioManager_19)); }
	inline AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * get_theAudioManager_19() const { return ___theAudioManager_19; }
	inline AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 ** get_address_of_theAudioManager_19() { return &___theAudioManager_19; }
	inline void set_theAudioManager_19(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * value)
	{
		___theAudioManager_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___theAudioManager_19), (void*)value);
	}

	inline static int32_t get_offset_of_names_20() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields, ___names_20)); }
	inline FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F * get_names_20() const { return ___names_20; }
	inline FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F ** get_address_of_names_20() { return &___names_20; }
	inline void set_names_20(FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F * value)
	{
		___names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___names_20), (void*)value);
	}

	inline static int32_t get_offset_of_defaultSound_21() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields, ___defaultSound_21)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_defaultSound_21() const { return ___defaultSound_21; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_defaultSound_21() { return &___defaultSound_21; }
	inline void set_defaultSound_21(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___defaultSound_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultSound_21), (void*)value);
	}

	inline static int32_t get_offset_of_nullSound_22() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields, ___nullSound_22)); }
	inline SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * get_nullSound_22() const { return ___nullSound_22; }
	inline SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 ** get_address_of_nullSound_22() { return &___nullSound_22; }
	inline void set_nullSound_22(SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * value)
	{
		___nullSound_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nullSound_22), (void*)value);
	}

	inline static int32_t get_offset_of_hideWarnings_23() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields, ___hideWarnings_23)); }
	inline bool get_hideWarnings_23() const { return ___hideWarnings_23; }
	inline bool* get_address_of_hideWarnings_23() { return &___hideWarnings_23; }
	inline void set_hideWarnings_23(bool value)
	{
		___hideWarnings_23 = value;
	}

	inline static int32_t get_offset_of_soundEmitterParent_29() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields, ___soundEmitterParent_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_soundEmitterParent_29() const { return ___soundEmitterParent_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_soundEmitterParent_29() { return &___soundEmitterParent_29; }
	inline void set_soundEmitterParent_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___soundEmitterParent_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundEmitterParent_29), (void*)value);
	}

	inline static int32_t get_offset_of_staticListenerPosition_30() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields, ___staticListenerPosition_30)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_staticListenerPosition_30() const { return ___staticListenerPosition_30; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_staticListenerPosition_30() { return &___staticListenerPosition_30; }
	inline void set_staticListenerPosition_30(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___staticListenerPosition_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___staticListenerPosition_30), (void*)value);
	}

	inline static int32_t get_offset_of_showPlayingEmitterCount_31() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields, ___showPlayingEmitterCount_31)); }
	inline bool get_showPlayingEmitterCount_31() const { return ___showPlayingEmitterCount_31; }
	inline bool* get_address_of_showPlayingEmitterCount_31() { return &___showPlayingEmitterCount_31; }
	inline void set_showPlayingEmitterCount_31(bool value)
	{
		___showPlayingEmitterCount_31 = value;
	}

	inline static int32_t get_offset_of_forceShowEmitterCount_32() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields, ___forceShowEmitterCount_32)); }
	inline bool get_forceShowEmitterCount_32() const { return ___forceShowEmitterCount_32; }
	inline bool* get_address_of_forceShowEmitterCount_32() { return &___forceShowEmitterCount_32; }
	inline void set_forceShowEmitterCount_32(bool value)
	{
		___forceShowEmitterCount_32 = value;
	}

	inline static int32_t get_offset_of_soundEnabled_33() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields, ___soundEnabled_33)); }
	inline bool get_soundEnabled_33() const { return ___soundEnabled_33; }
	inline bool* get_address_of_soundEnabled_33() { return &___soundEnabled_33; }
	inline void set_soundEnabled_33(bool value)
	{
		___soundEnabled_33 = value;
	}

	inline static int32_t get_offset_of_defaultReverbZoneMix_34() { return static_cast<int32_t>(offsetof(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields, ___defaultReverbZoneMix_34)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_defaultReverbZoneMix_34() const { return ___defaultReverbZoneMix_34; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_defaultReverbZoneMix_34() { return &___defaultReverbZoneMix_34; }
	inline void set_defaultReverbZoneMix_34(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___defaultReverbZoneMix_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultReverbZoneMix_34), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// ONSPAudioSource
struct ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean ONSPAudioSource::enableSpatialization
	bool ___enableSpatialization_5;
	// System.Single ONSPAudioSource::gain
	float ___gain_6;
	// System.Boolean ONSPAudioSource::useInvSqr
	bool ___useInvSqr_7;
	// System.Single ONSPAudioSource::near
	float ___near_8;
	// System.Single ONSPAudioSource::far
	float ___far_9;
	// System.Single ONSPAudioSource::volumetricRadius
	float ___volumetricRadius_10;
	// System.Single ONSPAudioSource::reverbSend
	float ___reverbSend_11;
	// System.Boolean ONSPAudioSource::enableRfl
	bool ___enableRfl_12;

public:
	inline static int32_t get_offset_of_enableSpatialization_5() { return static_cast<int32_t>(offsetof(ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02, ___enableSpatialization_5)); }
	inline bool get_enableSpatialization_5() const { return ___enableSpatialization_5; }
	inline bool* get_address_of_enableSpatialization_5() { return &___enableSpatialization_5; }
	inline void set_enableSpatialization_5(bool value)
	{
		___enableSpatialization_5 = value;
	}

	inline static int32_t get_offset_of_gain_6() { return static_cast<int32_t>(offsetof(ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02, ___gain_6)); }
	inline float get_gain_6() const { return ___gain_6; }
	inline float* get_address_of_gain_6() { return &___gain_6; }
	inline void set_gain_6(float value)
	{
		___gain_6 = value;
	}

	inline static int32_t get_offset_of_useInvSqr_7() { return static_cast<int32_t>(offsetof(ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02, ___useInvSqr_7)); }
	inline bool get_useInvSqr_7() const { return ___useInvSqr_7; }
	inline bool* get_address_of_useInvSqr_7() { return &___useInvSqr_7; }
	inline void set_useInvSqr_7(bool value)
	{
		___useInvSqr_7 = value;
	}

	inline static int32_t get_offset_of_near_8() { return static_cast<int32_t>(offsetof(ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02, ___near_8)); }
	inline float get_near_8() const { return ___near_8; }
	inline float* get_address_of_near_8() { return &___near_8; }
	inline void set_near_8(float value)
	{
		___near_8 = value;
	}

	inline static int32_t get_offset_of_far_9() { return static_cast<int32_t>(offsetof(ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02, ___far_9)); }
	inline float get_far_9() const { return ___far_9; }
	inline float* get_address_of_far_9() { return &___far_9; }
	inline void set_far_9(float value)
	{
		___far_9 = value;
	}

	inline static int32_t get_offset_of_volumetricRadius_10() { return static_cast<int32_t>(offsetof(ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02, ___volumetricRadius_10)); }
	inline float get_volumetricRadius_10() const { return ___volumetricRadius_10; }
	inline float* get_address_of_volumetricRadius_10() { return &___volumetricRadius_10; }
	inline void set_volumetricRadius_10(float value)
	{
		___volumetricRadius_10 = value;
	}

	inline static int32_t get_offset_of_reverbSend_11() { return static_cast<int32_t>(offsetof(ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02, ___reverbSend_11)); }
	inline float get_reverbSend_11() const { return ___reverbSend_11; }
	inline float* get_address_of_reverbSend_11() { return &___reverbSend_11; }
	inline void set_reverbSend_11(float value)
	{
		___reverbSend_11 = value;
	}

	inline static int32_t get_offset_of_enableRfl_12() { return static_cast<int32_t>(offsetof(ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02, ___enableRfl_12)); }
	inline bool get_enableRfl_12() const { return ___enableRfl_12; }
	inline bool* get_address_of_enableRfl_12() { return &___enableRfl_12; }
	inline void set_enableRfl_12(bool value)
	{
		___enableRfl_12 = value;
	}
};

struct ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02_StaticFields
{
public:
	// ONSPAudioSource ONSPAudioSource::RoomReflectionGizmoAS
	ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * ___RoomReflectionGizmoAS_13;

public:
	inline static int32_t get_offset_of_RoomReflectionGizmoAS_13() { return static_cast<int32_t>(offsetof(ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02_StaticFields, ___RoomReflectionGizmoAS_13)); }
	inline ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * get_RoomReflectionGizmoAS_13() const { return ___RoomReflectionGizmoAS_13; }
	inline ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 ** get_address_of_RoomReflectionGizmoAS_13() { return &___RoomReflectionGizmoAS_13; }
	inline void set_RoomReflectionGizmoAS_13(ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * value)
	{
		___RoomReflectionGizmoAS_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoomReflectionGizmoAS_13), (void*)value);
	}
};


// OVR.SoundEmitter
struct SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// OVR.EmitterChannel OVR.SoundEmitter::channel
	int32_t ___channel_4;
	// System.Boolean OVR.SoundEmitter::disableSpatialization
	bool ___disableSpatialization_5;
	// OVR.SoundEmitter/FadeState OVR.SoundEmitter::state
	int32_t ___state_6;
	// UnityEngine.AudioSource OVR.SoundEmitter::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_7;
	// OVR.SoundPriority OVR.SoundEmitter::priority
	int32_t ___priority_8;
	// ONSPAudioSource OVR.SoundEmitter::osp
	ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * ___osp_9;
	// System.Single OVR.SoundEmitter::endPlayTime
	float ___endPlayTime_10;
	// UnityEngine.Transform OVR.SoundEmitter::lastParentTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___lastParentTransform_11;
	// System.Single OVR.SoundEmitter::defaultVolume
	float ___defaultVolume_12;
	// UnityEngine.Transform OVR.SoundEmitter::defaultParent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___defaultParent_13;
	// System.Int32 OVR.SoundEmitter::originalIdx
	int32_t ___originalIdx_14;
	// System.Action OVR.SoundEmitter::onFinished
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onFinished_15;
	// System.Action`1<System.Object> OVR.SoundEmitter::onFinishedObject
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___onFinishedObject_16;
	// System.Object OVR.SoundEmitter::onFinishedParam
	RuntimeObject * ___onFinishedParam_17;
	// OVR.SoundGroup OVR.SoundEmitter::playingSoundGroup
	SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * ___playingSoundGroup_18;

public:
	inline static int32_t get_offset_of_channel_4() { return static_cast<int32_t>(offsetof(SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F, ___channel_4)); }
	inline int32_t get_channel_4() const { return ___channel_4; }
	inline int32_t* get_address_of_channel_4() { return &___channel_4; }
	inline void set_channel_4(int32_t value)
	{
		___channel_4 = value;
	}

	inline static int32_t get_offset_of_disableSpatialization_5() { return static_cast<int32_t>(offsetof(SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F, ___disableSpatialization_5)); }
	inline bool get_disableSpatialization_5() const { return ___disableSpatialization_5; }
	inline bool* get_address_of_disableSpatialization_5() { return &___disableSpatialization_5; }
	inline void set_disableSpatialization_5(bool value)
	{
		___disableSpatialization_5 = value;
	}

	inline static int32_t get_offset_of_state_6() { return static_cast<int32_t>(offsetof(SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F, ___state_6)); }
	inline int32_t get_state_6() const { return ___state_6; }
	inline int32_t* get_address_of_state_6() { return &___state_6; }
	inline void set_state_6(int32_t value)
	{
		___state_6 = value;
	}

	inline static int32_t get_offset_of_audioSource_7() { return static_cast<int32_t>(offsetof(SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F, ___audioSource_7)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_7() const { return ___audioSource_7; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_7() { return &___audioSource_7; }
	inline void set_audioSource_7(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_7), (void*)value);
	}

	inline static int32_t get_offset_of_priority_8() { return static_cast<int32_t>(offsetof(SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F, ___priority_8)); }
	inline int32_t get_priority_8() const { return ___priority_8; }
	inline int32_t* get_address_of_priority_8() { return &___priority_8; }
	inline void set_priority_8(int32_t value)
	{
		___priority_8 = value;
	}

	inline static int32_t get_offset_of_osp_9() { return static_cast<int32_t>(offsetof(SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F, ___osp_9)); }
	inline ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * get_osp_9() const { return ___osp_9; }
	inline ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 ** get_address_of_osp_9() { return &___osp_9; }
	inline void set_osp_9(ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * value)
	{
		___osp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___osp_9), (void*)value);
	}

	inline static int32_t get_offset_of_endPlayTime_10() { return static_cast<int32_t>(offsetof(SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F, ___endPlayTime_10)); }
	inline float get_endPlayTime_10() const { return ___endPlayTime_10; }
	inline float* get_address_of_endPlayTime_10() { return &___endPlayTime_10; }
	inline void set_endPlayTime_10(float value)
	{
		___endPlayTime_10 = value;
	}

	inline static int32_t get_offset_of_lastParentTransform_11() { return static_cast<int32_t>(offsetof(SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F, ___lastParentTransform_11)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_lastParentTransform_11() const { return ___lastParentTransform_11; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_lastParentTransform_11() { return &___lastParentTransform_11; }
	inline void set_lastParentTransform_11(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___lastParentTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastParentTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_defaultVolume_12() { return static_cast<int32_t>(offsetof(SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F, ___defaultVolume_12)); }
	inline float get_defaultVolume_12() const { return ___defaultVolume_12; }
	inline float* get_address_of_defaultVolume_12() { return &___defaultVolume_12; }
	inline void set_defaultVolume_12(float value)
	{
		___defaultVolume_12 = value;
	}

	inline static int32_t get_offset_of_defaultParent_13() { return static_cast<int32_t>(offsetof(SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F, ___defaultParent_13)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_defaultParent_13() const { return ___defaultParent_13; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_defaultParent_13() { return &___defaultParent_13; }
	inline void set_defaultParent_13(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___defaultParent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultParent_13), (void*)value);
	}

	inline static int32_t get_offset_of_originalIdx_14() { return static_cast<int32_t>(offsetof(SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F, ___originalIdx_14)); }
	inline int32_t get_originalIdx_14() const { return ___originalIdx_14; }
	inline int32_t* get_address_of_originalIdx_14() { return &___originalIdx_14; }
	inline void set_originalIdx_14(int32_t value)
	{
		___originalIdx_14 = value;
	}

	inline static int32_t get_offset_of_onFinished_15() { return static_cast<int32_t>(offsetof(SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F, ___onFinished_15)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onFinished_15() const { return ___onFinished_15; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onFinished_15() { return &___onFinished_15; }
	inline void set_onFinished_15(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onFinished_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFinished_15), (void*)value);
	}

	inline static int32_t get_offset_of_onFinishedObject_16() { return static_cast<int32_t>(offsetof(SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F, ___onFinishedObject_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_onFinishedObject_16() const { return ___onFinishedObject_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_onFinishedObject_16() { return &___onFinishedObject_16; }
	inline void set_onFinishedObject_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___onFinishedObject_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFinishedObject_16), (void*)value);
	}

	inline static int32_t get_offset_of_onFinishedParam_17() { return static_cast<int32_t>(offsetof(SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F, ___onFinishedParam_17)); }
	inline RuntimeObject * get_onFinishedParam_17() const { return ___onFinishedParam_17; }
	inline RuntimeObject ** get_address_of_onFinishedParam_17() { return &___onFinishedParam_17; }
	inline void set_onFinishedParam_17(RuntimeObject * value)
	{
		___onFinishedParam_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFinishedParam_17), (void*)value);
	}

	inline static int32_t get_offset_of_playingSoundGroup_18() { return static_cast<int32_t>(offsetof(SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F, ___playingSoundGroup_18)); }
	inline SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * get_playingSoundGroup_18() const { return ___playingSoundGroup_18; }
	inline SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F ** get_address_of_playingSoundGroup_18() { return &___playingSoundGroup_18; }
	inline void set_playingSoundGroup_18(SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * value)
	{
		___playingSoundGroup_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playingSoundGroup_18), (void*)value);
	}
};


// OVR.TestScript
struct TestScript_tFA72AED664EECA9CC918308C63469BB7F8F36A07  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// OVR.SoundFXRef OVR.TestScript::testSound1
	SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * ___testSound1_4;
	// OVR.SoundFXRef OVR.TestScript::testSound2
	SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * ___testSound2_5;

public:
	inline static int32_t get_offset_of_testSound1_4() { return static_cast<int32_t>(offsetof(TestScript_tFA72AED664EECA9CC918308C63469BB7F8F36A07, ___testSound1_4)); }
	inline SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * get_testSound1_4() const { return ___testSound1_4; }
	inline SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 ** get_address_of_testSound1_4() { return &___testSound1_4; }
	inline void set_testSound1_4(SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * value)
	{
		___testSound1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___testSound1_4), (void*)value);
	}

	inline static int32_t get_offset_of_testSound2_5() { return static_cast<int32_t>(offsetof(TestScript_tFA72AED664EECA9CC918308C63469BB7F8F36A07, ___testSound2_5)); }
	inline SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * get_testSound2_5() const { return ___testSound2_5; }
	inline SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 ** get_address_of_testSound2_5() { return &___testSound2_5; }
	inline void set_testSound2_5(SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * value)
	{
		___testSound2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___testSound2_5), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// OVR.SoundFXRef[]
struct SoundFXRefU5BU5D_tEDAF36BD60BD7ADBA0D7C5A4BCDEDB7E91CB664C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * m_Items[1];

public:
	inline SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// OVR.SoundGroup[]
struct SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * m_Items[1];

public:
	inline SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// OVR.SoundFX[]
struct SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * m_Items[1];

public:
	inline SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// OVR.SoundEmitter[]
struct SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * m_Items[1];

public:
	inline SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * value)
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
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * m_Items[1];

public:
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Audio.AudioMixerSnapshot[]
struct AudioMixerSnapshotU5BU5D_tED32A17D57452B751009DA3AD9CE85B9FB7CEBDA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 * m_Items[1];

public:
	inline AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  m_Items[1];

public:
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void FastList`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastList_1_Clear_m8BEA9F80C846E1BD87B1D05AB135A8378692AE37_gshared (FastList_1_t162D3D3C4FFD9BC65ABF324C0D9AF9BEC9BE0AC7 * __this, const RuntimeMethod* method);
// System.Void FastList`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastList_1_Add_m90B4351D1BFFDCA081F464410F363C597EC5EC9E_gshared (FastList_1_t162D3D3C4FFD9BC65ABF324C0D9AF9BEC9BE0AC7 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 FastList`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastList_1_get_Count_m8110CBE2FD4F231744F7D0E686F01B596D908E8F_gshared (FastList_1_t162D3D3C4FFD9BC65ABF324C0D9AF9BEC9BE0AC7 * __this, const RuntimeMethod* method);
// T[] FastList`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* FastList_1_ToArray_mEF66D3A9B1956CB143B801E4FA7C1136E3740ADE_gshared (FastList_1_t162D3D3C4FFD9BC65ABF324C0D9AF9BEC9BE0AC7 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// T FastList`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * FastList_1_get_Item_m897BDF4C1F647F6389329054293C689BB6D331B1_gshared (FastList_1_t162D3D3C4FFD9BC65ABF324C0D9AF9BEC9BE0AC7 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void FastList`1<System.Object>::RemoveAtFast(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastList_1_RemoveAtFast_m3E758EEA48692CCC24AD0F3F41476CFB5E3EF859_gshared (FastList_1_t162D3D3C4FFD9BC65ABF324C0D9AF9BEC9BE0AC7 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean FastList`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FastList_1_Contains_m32AA24569913957A0537BE5B58A1BE9C834A2F25_gshared (FastList_1_t162D3D3C4FFD9BC65ABF324C0D9AF9BEC9BE0AC7 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// T FastList`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * FastList_1_Find_m1F478B2BEB61D27F1F5D22519AAD4BD633DC6EA8_gshared (FastList_1_t162D3D3C4FFD9BC65ABF324C0D9AF9BEC9BE0AC7 * __this, Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___match0, const RuntimeMethod* method);
// System.Boolean FastList`1<System.Object>::RemoveFast(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FastList_1_RemoveFast_mE7C99668FEA497B1E23A176A9A380EB84DB0D472_gshared (FastList_1_t162D3D3C4FFD9BC65ABF324C0D9AF9BEC9BE0AC7 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void FastList`1<System.Object>::AddUnique(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastList_1_AddUnique_mC9891631B7FB249D88B597476D6B0EFDD7B0E404_gshared (FastList_1_t162D3D3C4FFD9BC65ABF324C0D9AF9BEC9BE0AC7 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void FastList`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastList_1__ctor_mD317DFE6BACF086D602845F301DABA8FF44086EB_gshared (FastList_1_t162D3D3C4FFD9BC65ABF324C0D9AF9BEC9BE0AC7 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void OVR.AmbienceEmitter::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmbienceEmitter_Play_m8DE86EA3D2BFC66071AA0AE4CEFFFB96CB4A5F0A (AmbienceEmitter_tC44EB9593D9B3F2E4E7C56950D0B2C8BB47B26A5 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 OVR.SoundFXRef::PlaySoundAt(UnityEngine.Vector3,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SoundFXRef_PlaySoundAt_m6D254AE44C2E35236C833573ECA4607725F64F6D (SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, float ___delaySecs1, float ___volume2, float ___pitchMultiplier3, const RuntimeMethod* method);
// System.Void OVR.AudioManager::FadeInSound(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_FadeInSound_mF250DC5FC4E01AB0BD4AC8781F4C3F63105A6FCB (int32_t ___idx0, float ___fadeTime1, const RuntimeMethod* method);
// System.Void OVR.AudioManager::FadeOutSound(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_FadeOutSound_m998C3DD44F9B995A494D4C25D9D8D322378388CA (int32_t ___idx0, float ___fadeTime1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void OVR.AudioManager::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Init_mE778EC27006A3ED7EB127617AB96B1DA473A0B4A (AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void OVR.AudioManager::RebuildSoundFXCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_RebuildSoundFXCache_m59A1FB9E8CE52215E9704999FC8B3AE32F5B6DFF (AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * __this, const RuntimeMethod* method);
// System.Void OVR.AudioManager::InitializeSoundSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_InitializeSoundSystem_mBB7FACC058F5E4FD54334E0C17AB3FF6B68AD062 (AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void OVR.AudioManager::UpdateFreeEmitters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_UpdateFreeEmitters_m48C9C39AD9D6F66C17266798F0B1A621B88A205E (AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,OVR.SoundFX>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m146BEB152A3D9B25905630734E7B87689DDFF716 (Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,OVR.SoundFX>::Add(!0,!1)
inline void Dictionary_2_Add_m1E3861C8162CFC9D0A3E0C0F36326265DB51A21E (Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E * __this, String_t* ___key0, SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E *, String_t*, SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,OVR.SoundFX>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mA5586A1780DDB7F67F29123A4E6B190CC3467268 (Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void OVR.SoundFX::set_Group(OVR.SoundGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundFX_set_Group_mA0824C9068177ADB44DA9CEA2432428BDB9F7E87 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * ___value0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,OVR.SoundFX>::get_Item(!0)
inline SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * Dictionary_2_get_Item_mAE7EC43AD052465D0E7DCDC708C07A5BEDBB0B8D (Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * (*) (Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<OVR.AudioManager>()
inline AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * GameObject_GetComponent_TisAudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_mF9AC97661AC42BDE419A2FBB948034F879A3AF5D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean OVR.AudioManager::FindAudioManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioManager_FindAudioManager_mA564A964ED72C8E271769A102331FE0AABF3A875 (const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Void FastList`1<System.String>::Clear()
inline void FastList_1_Clear_m56EC53118E6F37D5A363300961E69BA45EF9CC8B (FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F * __this, const RuntimeMethod* method)
{
	((  void (*) (FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F *, const RuntimeMethod*))FastList_1_Clear_m8BEA9F80C846E1BD87B1D05AB135A8378692AE37_gshared)(__this, method);
}
// System.Void FastList`1<System.String>::Add(T)
inline void FastList_1_Add_mBD8D4B1FD7FD4D6C93A0D1846BD65B6448772958 (FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F *, String_t*, const RuntimeMethod*))FastList_1_Add_m90B4351D1BFFDCA081F464410F363C597EC5EC9E_gshared)(__this, ___item0, method);
}
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_m3B98D489EF23605CC97E9907AAF1E5E99BBF6A62 (String_t* ___strA0, String_t* ___strB1, bool ___ignoreCase2, const RuntimeMethod* method);
// System.Int32 FastList`1<System.String>::get_Count()
inline int32_t FastList_1_get_Count_mEB678DC28ED79B38283E6EBE99B02279850E310D (FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F *, const RuntimeMethod*))FastList_1_get_Count_m8110CBE2FD4F231744F7D0E686F01B596D908E8F_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// T[] FastList`1<System.String>::ToArray()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* FastList_1_ToArray_m9B07A0977C3112CF3B12E6EC947E4054E2668F77 (FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F *, const RuntimeMethod*))FastList_1_ToArray_mEF66D3A9B1956CB143B801E4FA7C1136E3740ADE_gshared)(__this, method);
}
// System.Int32 OVR.AudioManager::CalculateMaxEmittersSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioManager_CalculateMaxEmittersSize_mEC253E1C7F317C76256626FBC23924C3A257C455 (const RuntimeMethod* method);
// System.Void UnityEngine.AudioSettings::GetDSPBufferSize(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_GetDSPBufferSize_mC28498D69093D2E80A637A40A588230F7E0A2052 (int32_t* ___bufferLength0, int32_t* ___numBuffers1, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioSettings::get_outputSampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_get_outputSampleRate_mF694C528E77284914F1F8F7CA804BD9ECD0D33BE (const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.AudioListener>()
inline AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * Object_FindObjectOfType_TisAudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3_mF86079EC53E2295B345994270FCD8972E48F2510 (const RuntimeMethod* method)
{
	return ((  AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<OVR.SoundEmitter>()
inline SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * GameObject_AddComponent_TisSoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F_mBEE7D4A949DA6B1F2146EA2364470E65F8FAB6AF (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void OVR.SoundEmitter::SetDefaultParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_SetDefaultParent_mB35C9475E42E176115291F7F58838A309D817C67 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, const RuntimeMethod* method);
// System.Void OVR.SoundEmitter::SetChannel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_SetChannel_mCDFADEC11BB7EDD8A3679BF256854E04E53A7530 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, int32_t ____channel0, const RuntimeMethod* method);
// System.Void OVR.SoundEmitter::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_Stop_m3300C33E8D6996E9EC28F0AC81D1702912AC6DE4 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method);
// System.Void OVR.AudioManager::ResetFreeEmitters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_ResetFreeEmitters_m01BBBF5F1928ED3F771FA101F35BF971C899BC2F (AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// T FastList`1<OVR.SoundEmitter>::get_Item(System.Int32)
inline SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * FastList_1_get_Item_mC8254CC72AD0E9CC5833858EAF29EEFE3D794E2F (FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	return ((  SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * (*) (FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 *, int32_t, const RuntimeMethod*))FastList_1_get_Item_m897BDF4C1F647F6389329054293C689BB6D331B1_gshared)(__this, ___i0, method);
}
// System.Void FastList`1<OVR.SoundEmitter>::RemoveAtFast(System.Int32)
inline void FastList_1_RemoveAtFast_mD4EF9EEDE1A17BD46B8855DB261091A7D93D194D (FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 *, int32_t, const RuntimeMethod*))FastList_1_RemoveAtFast_m3E758EEA48692CCC24AD0F3F41476CFB5E3EF859_gshared)(__this, ___index0, method);
}
// System.Boolean OVR.SoundEmitter::IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundEmitter_IsPlaying_m6868357ED357493BD5CD6FA1F3DC079536D03294 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method);
// System.Boolean FastList`1<OVR.SoundEmitter>::Contains(T)
inline bool FastList_1_Contains_m2F2025CEDB1DC29B918CAAB245CE5DD92B03CB26 (FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * __this, SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 *, SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F *, const RuntimeMethod*))FastList_1_Contains_m32AA24569913957A0537BE5B58A1BE9C834A2F25_gshared)(__this, ___item0, method);
}
// System.Void FastList`1<OVR.SoundEmitter>::Add(T)
inline void FastList_1_Add_m8212701FA2336834A69CC2EEC9760EFFDCA20662 (FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * __this, SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 *, SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F *, const RuntimeMethod*))FastList_1_Add_m90B4351D1BFFDCA081F464410F363C597EC5EC9E_gshared)(__this, ___item0, method);
}
// System.String OVR.AudioManager::Fmt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioManager_Fmt_m608A698D902716F4D97FCBA21144D1D5E7E73E68 (AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * __this, int32_t ___count0, const RuntimeMethod* method);
// System.Int32 FastList`1<OVR.SoundEmitter>::get_Count()
inline int32_t FastList_1_get_Count_m10D9047727CC8A5C0D4614311A29C7B4B540A950 (FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 *, const RuntimeMethod*))FastList_1_get_Count_m8110CBE2FD4F231744F7D0E686F01B596D908E8F_gshared)(__this, method);
}
// System.String OVR.AudioManager::FmtFree(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioManager_FmtFree_m11EE96968234055FA3C3EA6828B04F93EB3FBBD3 (AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * __this, int32_t ___count0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void OVR.SoundEmitter::ResetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_ResetParent_m2C67F84BAA510CC69AF6A6539C6D0D15870514EC (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, const RuntimeMethod* method);
// System.Void FastList`1<OVR.SoundEmitter>::Clear()
inline void FastList_1_Clear_mB9884C43EA47201708D11895E770C316BC151006 (FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * __this, const RuntimeMethod* method)
{
	((  void (*) (FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 *, const RuntimeMethod*))FastList_1_Clear_m8BEA9F80C846E1BD87B1D05AB135A8378692AE37_gshared)(__this, method);
}
// System.Void OVR.SoundEmitter::FadeOutDelayed(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_FadeOutDelayed_m7D19FF1D2850F9BEEFBBCB6379C6A2285457EBCB (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, float ___delayedSecs0, float ___fadeTime1, const RuntimeMethod* method);
// System.Void OVR.SoundEmitter::FadeOut(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_FadeOut_m0EAF4076F66795DE7DFC4BC43CFAC4D744F017BF (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, float ___fadeTime0, const RuntimeMethod* method);
// System.Void OVR.SoundEmitter::FadeIn(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_FadeIn_mEE40EB91C25E3F9B538CB3B55A3FB8DDB90483ED (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, float ___fadeTime0, float ___defaultVolume1, const RuntimeMethod* method);
// System.Void OVR.SoundEmitter::FadeIn(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_FadeIn_m3E1B411AA82B979BB00C54D289EAF7763C6D92A5 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, float ___fadeTime0, const RuntimeMethod* method);
// System.Boolean OVR.AudioManager::StopSound(System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioManager_StopSound_m9AA3F244C13AB2EFAC598103877CC1FB9F03D408 (int32_t ___idx0, bool ___fadeOut1, bool ___stopReserved2, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_mute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_mute_m69E2DFCF261D2D187ED756096B7E0DE622292C71 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void OVR.SoundEmitter::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_set_time_m8D4EC2119A92AFDB9F57929A2656C94BE643C47A (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean OVR.AudioManager::get_SoundEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioManager_get_SoundEnabled_m336299F404F149FBC18A3F84F169BDF644CD5ACF (const RuntimeMethod* method);
// System.Int32 OVR.AudioManager::PlaySoundAt(UnityEngine.Vector3,UnityEngine.AudioClip,System.Single,OVR.EmitterChannel,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioManager_PlaySoundAt_m09A5A4D7E7F435A5858C7C53816DE806DC8669BB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip1, float ___volume2, int32_t ___src3, float ___delay4, float ___pitch5, bool ___loop6, const RuntimeMethod* method);
// System.Void OVR.AudioManager/<>c__DisplayClass77_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass77_0__ctor_m6211C85CC9F733CCE647B1F5BF26018311925E64 (U3CU3Ec__DisplayClass77_0_t68997B623E8CD6034DDB01B6BCFAC1C37A7F5037 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<OVR.SoundEmitter>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m1FDE84CCAA021945737527E8A5DCEE8E143EECDF (Predicate_1_t025E23E639B66BD976A09E0C4FC2D954D400A294 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t025E23E639B66BD976A09E0C4FC2D954D400A294 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared)(__this, ___object0, ___method1, method);
}
// T FastList`1<OVR.SoundEmitter>::Find(System.Predicate`1<T>)
inline SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * FastList_1_Find_m5D30B12E866C3C0AC46B94484A91704CF9AFBB40 (FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * __this, Predicate_1_t025E23E639B66BD976A09E0C4FC2D954D400A294 * ___match0, const RuntimeMethod* method)
{
	return ((  SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * (*) (FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 *, Predicate_1_t025E23E639B66BD976A09E0C4FC2D954D400A294 *, const RuntimeMethod*))FastList_1_Find_m1F478B2BEB61D27F1F5D22519AAD4BD633DC6EA8_gshared)(__this, ___match0, method);
}
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Boolean FastList`1<OVR.SoundEmitter>::RemoveFast(T)
inline bool FastList_1_RemoveFast_m25971749BF3DF48D4DC340395051686D91C06298 (FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * __this, SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 *, SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F *, const RuntimeMethod*))FastList_1_RemoveFast_mE7C99668FEA497B1E23A176A9A380EB84DB0D472_gshared)(__this, ___item0, method);
}
// System.Int32 OVR.AudioManager::PlaySoundAt(UnityEngine.Vector3,OVR.SoundFX,OVR.EmitterChannel,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioManager_PlaySoundAt_mD3834EBA87274C016A6855AEDB5400FD7FD4AA63 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * ___soundFX1, int32_t ___src2, float ___delay3, float ___volumeOverride4, float ___pitchMultiplier5, const RuntimeMethod* method);
// UnityEngine.AudioClip OVR.SoundFX::GetClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * SoundFX_GetClip_m0CDE7570629E9E61B1471DC1A2CBE6F2159D498D (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single OVR.SoundFX::get_MaxFalloffDistSquared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SoundFX_get_MaxFalloffDistSquared_m8134461B3B7CDDE5D5D767F32E4EFB64A1567AE1 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, const RuntimeMethod* method);
// System.Boolean OVR.SoundFX::ReachedGroupPlayLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundFX_ReachedGroupPlayLimit_m530866F47FE81D2506E631CFCEC060513FF00897 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, const RuntimeMethod* method);
// System.Int32 OVR.AudioManager::FindFreeEmitter(OVR.EmitterChannel,OVR.SoundPriority)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioManager_FindFreeEmitter_mE7CBF89D34E5CE5F5F59CF3C10327F3C7150AF7D (int32_t ___src0, int32_t ___priority1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Single OVR.SoundFX::get_GroupVolumeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SoundFX_get_GroupVolumeOverride_mA783F03EAC28566B620DB8FCE3FD9F74012E25EB (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Single OVR.SoundFX::GetPitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SoundFX_GetPitch_mE0A71164B687F9546D4BE2EA5581D1B139438926 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_time_mE8F36DDE8E610126F9733D13F299C13F71BCE690 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_spatialBlend(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialBlend_m7DD3DA6F68BA6710EDB2EE8482F876D16F9A9BEC (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_rolloffMode(UnityEngine.AudioRolloffMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_rolloffMode_mCEE552C06C70A8E4E64500C5792AD67D33782B4A (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::SetCustomCurve(UnityEngine.AudioSourceCurveType,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetCustomCurve_m7F9FDB65C9A26D7491E041600157340A09552D56 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, int32_t ___type0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_dopplerLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_dopplerLevel_m3E3187EA638992BE0A7AF9D660DAB1B0D088C2A0 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_spread(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spread_m933BAB5C1122A350F18490CA208257F2ECAC5887 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_minDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_minDistance_m9C1D3410330B09EACA69C64BF634018D71180F91 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_maxDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_maxDistance_m8AF5831BC0B2D070B2D4E1B54CB27082240A5EA8 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Audio.AudioMixerGroup OVR.AudioManager::get_EmitterGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * AudioManager_get_EmitterGroup_mE5C568AFEFB85C193AF097373F2F45A00397B3BA (const RuntimeMethod* method);
// UnityEngine.Audio.AudioMixerGroup OVR.SoundFX::GetMixerGroup(UnityEngine.Audio.AudioMixerGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * SoundFX_GetMixerGroup_m302072EBEFAEE2C1721C91C42424E86755FD2031 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * ___defaultMixerGroup0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_outputAudioMixerGroup(UnityEngine.Audio.AudioMixerGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_outputAudioMixerGroup_mE63B2B8C7E3F4E8C670E2474D1F22F9864DB71C8 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// OVR.SoundGroup OVR.SoundFX::get_Group()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * SoundFX_get_Group_mA26D40F7F76EC4223BBEEA3EB31E2E1651360F57 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, const RuntimeMethod* method);
// System.Void OVR.SoundEmitter::SetPlayingSoundGroup(OVR.SoundGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_SetPlayingSoundGroup_mE25F8571D797ED9DCBB3C1564DE40F2115FAFFA0 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * ___soundGroup0, const RuntimeMethod* method);
// System.Void FastList`1<OVR.SoundEmitter>::AddUnique(T)
inline void FastList_1_AddUnique_m42950E2B26235B3ACEFC2E1431D2F566FFA9A39D (FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * __this, SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 *, SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F *, const RuntimeMethod*))FastList_1_AddUnique_mC9891631B7FB249D88B597476D6B0EFDD7B0E404_gshared)(__this, ___item0, method);
}
// System.Void ONSPAudioSource::set_EnableSpatialization(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ONSPAudioSource_set_EnableSpatialization_m3BE0DD812263ADEC22135EC39114FE032EBB0984 (ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ONSPAudioSource::set_EnableRfl(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ONSPAudioSource_set_EnableRfl_mBE34FE6E52C0A6F191B90AA91554D9C88A2BF6D6 (ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ONSPAudioSource::set_Gain(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ONSPAudioSource_set_Gain_m24D214F42DE72722C2EC011EF326C9AEE6AC7B71 (ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * __this, float ___value0, const RuntimeMethod* method);
// System.Void ONSPAudioSource::set_UseInvSqr(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ONSPAudioSource_set_UseInvSqr_m5A566429E42138EE68B676322EF5066307B5BC2E (ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ONSPAudioSource::set_Near(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ONSPAudioSource_set_Near_mD702B9A6C5679CCE5A31657F12DF3CC9E007D1E5 (ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * __this, float ___value0, const RuntimeMethod* method);
// System.Void ONSPAudioSource::set_Far(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ONSPAudioSource_set_Far_mB2EAED9718ABD8B126AE3F89A5944F660961A471 (ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * __this, float ___value0, const RuntimeMethod* method);
// System.Void ONSPAudioSource::SetParameters(UnityEngine.AudioSource&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ONSPAudioSource_SetParameters_m9D75AB3ABA60F5FD4DFC48A5C7ACFCFB4EF7A78E (ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * __this, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** ___source0, const RuntimeMethod* method);
// System.Single OVR.SoundEmitter::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SoundEmitter_get_volume_mA23181A33F14B9C289E1B8C390AC5C8B3EC26761 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayDelayed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayDelayed_m9C6234595614E2F4A8035CB4D501E83A8C793DD4 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___delay0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Boolean OVR.AudioManager::ValidateEmitterIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioManager_ValidateEmitterIndex_m63B1F23EEA30970C9370B3F920228E05025392D7 (int32_t ___index0, const RuntimeMethod* method);
// System.Void OVR.SoundEmitter::SetOnFinished(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_SetOnFinished_m3A0FAFB78D8980EE76E1DAFB4F0DB40DDD40F499 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onFinished0, const RuntimeMethod* method);
// System.Void OVR.SoundEmitter::SetOnFinished(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_SetOnFinished_m86026FD45DF5511C081B1B4C06120C8711A096EC (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___onFinished0, RuntimeObject * ___obj1, const RuntimeMethod* method);
// System.Void OVR.SoundEmitter::ParentTo(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_ParentTo_m6575F83E7227B5AAEC0D5223D9BE84195CED629D (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, const RuntimeMethod* method);
// System.Void OVR.SoundEmitter::DetachFromParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_DetachFromParent_m49C7265BD79A6E8D21A455D2B98665A4F8C18EFD (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method);
// System.Void OVR.SoundEmitter::SetAudioMixer(UnityEngine.Audio.AudioMixerGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_SetAudioMixer_m289797EF1E40281C57E7ED5CA96DA428EFBF5972 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * ____mixer0, const RuntimeMethod* method);
// System.Void UnityEngine.Audio.AudioMixerSnapshot::TransitionTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixerSnapshot_TransitionTo_mB44DB7A66A7E5A9B589E8F16095D84D2F9778925 (AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 * __this, float ___timeToReach0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Audio.AudioMixer::TransitionToSnapshots(UnityEngine.Audio.AudioMixerSnapshot[],System.Single[],System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixer_TransitionToSnapshots_m8C1AAA0E968610F19B608DAB3292453E0E8DDF3E (AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * __this, AudioMixerSnapshotU5BU5D_tED32A17D57452B751009DA3AD9CE85B9FB7CEBDA* ___snapshots0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___weights1, float ___timeToReach2, const RuntimeMethod* method);
// System.Void FastList`1<OVR.SoundEmitter>::.ctor()
inline void FastList_1__ctor_mA19607DA9ACD62B6C752E2ED87782A3F460D10F8 (FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * __this, const RuntimeMethod* method)
{
	((  void (*) (FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 *, const RuntimeMethod*))FastList_1__ctor_mD317DFE6BACF086D602845F301DABA8FF44086EB_gshared)(__this, method);
}
// System.Void FastList`1<System.String>::.ctor()
inline void FastList_1__ctor_mCE5E70514F2279D49DA1402EAF9C78F8136D3AE1 (FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F * __this, const RuntimeMethod* method)
{
	((  void (*) (FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F *, const RuntimeMethod*))FastList_1__ctor_mD317DFE6BACF086D602845F301DABA8FF44086EB_gshared)(__this, method);
}
// System.Void OVR.SoundFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundFX__ctor_mA431AD6ACCEB3076D59A98225ECD36C34047BF60 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___time0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* ___keys0, const RuntimeMethod* method);
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7 (PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AudioSource::get_pitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_pitch_mB0A139A0693803E201D08B797BFD122B94453C7D (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AudioSource::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_time_m2185448A5B8A50225410220AF67BC34F5596D210 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_loop_m4CC6F50D9332DCC4B3CF380D12622F787BB8FB8D (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_mute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_mute_m87FF3468F096AE68C817B885D9AAC246CA4F1AFE (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// UnityEngine.AudioVelocityUpdateMode UnityEngine.AudioSource::get_velocityUpdateMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_velocityUpdateMode_m883F604B18AB40C1AF65777C13BD05402FF351DB (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_velocityUpdateMode(UnityEngine.AudioVelocityUpdateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_velocityUpdateMode_m63201E0CAC0E5BC81B5F31F96F1796FD8A43982A (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Boolean OVR.AudioManager::get_enableSpatialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioManager_get_enableSpatialization_m7558A52D2084FF429088B79CE146B855D331E372 (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<ONSPAudioSource>()
inline ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * Component_GetComponent_TisONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02_m56EBC9C7EBB265730A41A9931D5C4344872D346F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<ONSPAudioSource>()
inline ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * GameObject_AddComponent_TisONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02_mE7A81E1591706BCD8FE9D3E4C3B4354E2A0D2EEE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_mBE8FAD0E1555C431C56E0DEB4BF7371E76E236F5 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void OVR.SoundGroup::IncrementPlayCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundGroup_IncrementPlayCount_mC015831392FAC4D8D33D1956E67FBD28B6E7C88E (SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * __this, const RuntimeMethod* method);
// System.Boolean OVR.SoundEmitter::get_loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundEmitter_get_loop_m284DB05230F0B87D965A5D692B9E6A8AE8EAF0E5 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method);
// System.Single OVR.SoundEmitter::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SoundEmitter_get_length_mF6904F4A29A0E800A048E29849F06C63D4501A88 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
inline void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744 (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void OVR.SoundGroup::DecrementPlayCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundGroup_DecrementPlayCount_m7B10E17101489B2B39F9B4D01B7BE5C1DE0C7425 (SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioClip::get_samples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioSource::get_timeSamples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_timeSamples_m2D16DA78011B58C24BCA679B44D2BF832DFCA0BE (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator OVR.SoundEmitter::DelayedSyncTo(OVR.SoundEmitter,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SoundEmitter_DelayedSyncTo_m83E0EFFFD7C94E4F99C3898B0E25056FC259C387 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * ___other0, float ___fadeTime1, float ___toVolume2, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void OVR.SoundEmitter/<DelayedSyncTo>d__57::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedSyncToU3Ed__57__ctor_m549600F80A292FC33E37A8C7AE55932C7A955017 (U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator OVR.SoundEmitter::FadeSoundChannelTo(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SoundEmitter_FadeSoundChannelTo_m2E5A2DD182ADF0234C5AD04EC47687AF784CADE3 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, float ___fadeTime0, float ___toVolume1, const RuntimeMethod* method);
// System.Collections.IEnumerator OVR.SoundEmitter::FadeSoundChannel(System.Single,System.Single,OVR.Fade,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SoundEmitter_FadeSoundChannel_m7B7F23737AECD586977C9B56554F3D9D9E92C6EF (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, float ___delaySecs0, float ___fadeTime1, int32_t ___fadeType2, float ___defaultVolume3, const RuntimeMethod* method);
// System.Void OVR.SoundEmitter/<FadeSoundChannelTo>d__63::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeSoundChannelToU3Ed__63__ctor_m9C7EEA204BF98361F0A07E4225458119EAC2B71D (U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void OVR.SoundEmitter/<FadeSoundChannel>d__64::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeSoundChannelU3Ed__64__ctor_m99D1C836FDCC06399523049AC30DED74742E16AE (U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Void OVR.OSPProps::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSPProps__ctor_m247787D8A46948D0709E490A24F40548A50C38F4 (OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B * __this, const RuntimeMethod* method);
// System.Boolean OVR.SoundGroup::CanPlaySound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundGroup_CanPlaySound_mA86BBE2FEA6A9216B411AFE9052550747EDA9DE3 (SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * __this, const RuntimeMethod* method);
// System.Boolean OVR.SoundFX::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundFX_get_IsValid_m244A0EE19D7DA7039F8FF27CB85A8AD1B571F547 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872 (const RuntimeMethod* method);
// System.Int32 OVR.AudioManager::PlaySound(OVR.SoundFX,OVR.EmitterChannel,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioManager_PlaySound_mB659F2F2065BDFC643B6565D92DAFBB0773C3671 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * ___soundFX0, int32_t ___src1, float ___delay2, const RuntimeMethod* method);
// System.Void OVR.AudioManager::SetOnFinished(System.Int32,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_SetOnFinished_m678B02CAA0A2AE535FC6A2E874A1B741F6C2CAFF (int32_t ___emitterIdx0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onFinished1, const RuntimeMethod* method);
// System.Void OVR.AudioManager::SetOnFinished(System.Int32,System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_SetOnFinished_m6150FC91E300F4F7B41FF76B6F84ECEB8063C7AA (int32_t ___emitterIdx0, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___onFinished1, RuntimeObject * ___obj2, const RuntimeMethod* method);
// System.Void OVR.AudioManager::AttachSoundToParent(System.Int32,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_AttachSoundToParent_m07D102FAF95E8725855EA155C15FD0205E13253A (int32_t ___idx0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// System.Void OVR.AudioManager::DetachSoundFromParent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_DetachSoundFromParent_mAF74222C9F0DF11B688E754179F2014ED06E935D (int32_t ___idx0, const RuntimeMethod* method);
// System.Void OVR.SoundFXRef::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundFXRef_Init_m16EC06828D0959792694B288C55B585310EF130B (SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * __this, const RuntimeMethod* method);
// OVR.SoundFX OVR.AudioManager::FindSoundFX(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * AudioManager_FindSoundFX_mB2BCD23EDBE3DA675D71EC6D867692051DC8C2E5 (String_t* ___name0, bool ___rebuildCache1, const RuntimeMethod* method);
// OVR.SoundFX OVR.SoundFXRef::get_soundFX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * SoundFXRef_get_soundFX_m2F67886F7F3ED53A1D3585325F47C956008D7F59 (SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * __this, const RuntimeMethod* method);
// System.Int32 OVR.SoundFX::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SoundFX_get_Length_mC19CCFD4875BD114178BD925FDA4FAE083846AA1 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, const RuntimeMethod* method);
// System.Single OVR.SoundFX::GetClipLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SoundFX_GetClipLength_m1C12FB294B31A946DD413D0277070E2B5F799D81 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, int32_t ___idx0, const RuntimeMethod* method);
// System.Int32 OVR.SoundFX::PlaySound(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SoundFX_PlaySound_m2C9A39B9A6DE1C4F1CF3F75D3ACFD6363566E704 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, float ___delaySecs0, const RuntimeMethod* method);
// System.Int32 OVR.SoundFX::PlaySoundAt(UnityEngine.Vector3,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SoundFX_PlaySoundAt_m9F0A2C7ADF5474F649AD4B80DD3D03DFC95377D0 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, float ___delaySecs1, float ___volumeOverride2, float ___pitchMultiplier3, const RuntimeMethod* method);
// System.Void OVR.SoundFX::SetOnFinished(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundFX_SetOnFinished_mF2831F0155E59C30729D8D3CEED29319B087498D (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onFinished0, const RuntimeMethod* method);
// System.Void OVR.SoundFX::SetOnFinished(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundFX_SetOnFinished_m51E9ED0AD388E0708EFF45F3B5D7DC7007F9A0C7 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___onFinished0, RuntimeObject * ___obj1, const RuntimeMethod* method);
// System.Boolean OVR.SoundFX::StopSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundFX_StopSound_m50722DB55C59851AA8988CB7C976383B5FA4DBA0 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, const RuntimeMethod* method);
// System.Void OVR.SoundFX::AttachToParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundFX_AttachToParent_mABA0F9856538F9B1849061568C73EC433B3D9E0D (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, const RuntimeMethod* method);
// System.Void OVR.SoundFX::DetachFromParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundFX_DetachFromParent_m756C1B67B8284862F54F05763947D740413C8DD1 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void OVR.AudioManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m408F554F528F0C8A1A0A1A01D1274EB4026B4C64 (U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Single OVR.SoundEmitter::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SoundEmitter_get_time_m70625F6BFBB92382FF85E8BD57B3E6393525BBB0 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method);
// System.Void OVR.SoundEmitter::FadeTo(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_FadeTo_m5D863F2B1863CD96FDE40AF00CFBC673A3863851 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, float ___fadeTime0, float ___toVolume1, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
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
// System.Void OVR.AmbienceEmitter::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmbienceEmitter_Awake_m2C1A8773D2C64B49E5F93A8F003E117EFF796B8B (AmbienceEmitter_tC44EB9593D9B3F2E4E7C56950D0B2C8BB47B26A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9C7F7C8C69A216FC6DF8723580CBEBD2E1DFABB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* V_1 = NULL;
	int32_t V_2 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_3 = NULL;
	bool V_4 = false;
	{
		// if ( autoActivate ) {
		bool L_0 = __this->get_autoActivate_5();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// activated = true;
		__this->set_activated_9((bool)1);
		// nextPlayTime = Time.time + Random.Range( randomRetriggerDelaySecs.x, randomRetriggerDelaySecs.y );
		float L_2;
		L_2 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_3 = __this->get_address_of_randomRetriggerDelaySecs_7();
		float L_4 = L_3->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_5 = __this->get_address_of_randomRetriggerDelaySecs_7();
		float L_6 = L_5->get_y_1();
		float L_7;
		L_7 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_4, L_6, /*hidden argument*/NULL);
		__this->set_nextPlayTime_11(((float)il2cpp_codegen_add((float)L_2, (float)L_7)));
	}

IL_003b:
	{
		// foreach ( Transform t in playPositions ) {
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_8 = __this->get_playPositions_8();
		V_1 = L_8;
		V_2 = 0;
		goto IL_0083;
	}

IL_0047:
	{
		// foreach ( Transform t in playPositions ) {
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		// if ( t == null ) {
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_14;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// Debug.LogWarning( "[AmbienceEmitter] Invalid play positions in " + name );
		String_t* L_16;
		L_16 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralB9C7F7C8C69A216FC6DF8723580CBEBD2E1DFABB, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_17, /*hidden argument*/NULL);
		// playPositions = new Transform[0];
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_18 = (TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)SZArrayNew(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_playPositions_8(L_18);
		// break;
		goto IL_0089;
	}

IL_007e:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0083:
	{
		// foreach ( Transform t in playPositions ) {
		int32_t L_20 = V_2;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_0047;
		}
	}

IL_0089:
	{
		// }
		return;
	}
}
// System.Void OVR.AmbienceEmitter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmbienceEmitter_Update_m8FCE2583B6C6A02950F224CAFDAC57CFF5DC1B04 (AmbienceEmitter_tC44EB9593D9B3F2E4E7C56950D0B2C8BB47B26A5 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B4_0 = 0;
	{
		// if ( activated ) {
		bool L_0 = __this->get_activated_9();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		// if ( ( playingIdx == -1 ) || autoRetrigger ) {
		int32_t L_2 = __this->get_playingIdx_10();
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_001d;
		}
	}
	{
		bool L_3 = __this->get_autoRetrigger_6();
		G_B4_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B4_0 = 1;
	}

IL_001e:
	{
		V_1 = (bool)G_B4_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0057;
		}
	}
	{
		// if ( Time.time >= nextPlayTime ) {
		float L_5;
		L_5 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_6 = __this->get_nextPlayTime_11();
		V_2 = (bool)((((int32_t)((!(((float)L_5) >= ((float)L_6)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		// Play();
		AmbienceEmitter_Play_m8DE86EA3D2BFC66071AA0AE4CEFFFB96CB4A5F0A(__this, /*hidden argument*/NULL);
		// if ( !autoRetrigger ) {
		bool L_8 = __this->get_autoRetrigger_6();
		V_3 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		// activated = false;
		__this->set_activated_9((bool)0);
	}

IL_0055:
	{
	}

IL_0056:
	{
	}

IL_0057:
	{
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void OVR.AmbienceEmitter::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmbienceEmitter_OnTriggerEnter_mE81D2272C8875C70C8235C0547B22BA71FA5A3BA (AmbienceEmitter_tC44EB9593D9B3F2E4E7C56950D0B2C8BB47B26A5 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___col0, const RuntimeMethod* method)
{
	{
		// activated = !activated;
		bool L_0 = __this->get_activated_9();
		__this->set_activated_9((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// }
		return;
	}
}
// System.Void OVR.AmbienceEmitter::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmbienceEmitter_Play_m8DE86EA3D2BFC66071AA0AE4CEFFFB96CB4A5F0A (AmbienceEmitter_tC44EB9593D9B3F2E4E7C56950D0B2C8BB47B26A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B6_0 = 0;
	{
		// Transform transformToPlayFrom = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if ( playPositions.Length > 0 ) {
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_1 = __this->get_playPositions_8();
		NullCheck(L_1);
		V_1 = (bool)((!(((uint32_t)(((RuntimeArray*)L_1)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		// int idx = Random.Range( 0, playPositions.Length );
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_3 = __this->get_playPositions_8();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_0039;
	}

IL_0028:
	{
		// idx = Random.Range( 0, playPositions.Length );
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_5 = __this->get_playPositions_8();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/NULL);
		V_2 = L_6;
	}

IL_0039:
	{
		// while ( ( playPositions.Length > 1 ) && ( idx == lastPosIdx ) ) {
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_7 = __this->get_playPositions_8();
		NullCheck(L_7);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_8 = V_2;
		int32_t L_9 = __this->get_lastPosIdx_13();
		G_B6_0 = ((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
		goto IL_0050;
	}

IL_004f:
	{
		G_B6_0 = 0;
	}

IL_0050:
	{
		V_3 = (bool)G_B6_0;
		bool L_10 = V_3;
		if (L_10)
		{
			goto IL_0028;
		}
	}
	{
		// transformToPlayFrom = playPositions[idx];
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_11 = __this->get_playPositions_8();
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = L_14;
		// lastPosIdx = idx;
		int32_t L_15 = V_2;
		__this->set_lastPosIdx_13(L_15);
	}

IL_0065:
	{
		// playingIdx = ambientSounds[Random.Range(0, ambientSounds.Length)].PlaySoundAt( transformToPlayFrom.position );
		SoundFXRefU5BU5D_tEDAF36BD60BD7ADBA0D7C5A4BCDEDB7E91CB664C* L_16 = __this->get_ambientSounds_4();
		SoundFXRefU5BU5D_tEDAF36BD60BD7ADBA0D7C5A4BCDEDB7E91CB664C* L_17 = __this->get_ambientSounds_4();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_16);
		int32_t L_19 = L_18;
		SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * L_20 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = V_0;
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		int32_t L_23;
		L_23 = SoundFXRef_PlaySoundAt_m6D254AE44C2E35236C833573ECA4607725F64F6D(L_20, L_22, (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_playingIdx_10(L_23);
		// if ( playingIdx != -1 ) {
		int32_t L_24 = __this->get_playingIdx_10();
		V_4 = (bool)((((int32_t)((((int32_t)L_24) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00e7;
		}
	}
	{
		// AudioManager.FadeInSound( playingIdx, fadeTime );
		int32_t L_26 = __this->get_playingIdx_10();
		float L_27 = __this->get_fadeTime_12();
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_FadeInSound_mF250DC5FC4E01AB0BD4AC8781F4C3F63105A6FCB(L_26, L_27, /*hidden argument*/NULL);
		// nextPlayTime = Time.time + Random.Range( randomRetriggerDelaySecs.x, randomRetriggerDelaySecs.y );
		float L_28;
		L_28 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_29 = __this->get_address_of_randomRetriggerDelaySecs_7();
		float L_30 = L_29->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_31 = __this->get_address_of_randomRetriggerDelaySecs_7();
		float L_32 = L_31->get_y_1();
		float L_33;
		L_33 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_30, L_32, /*hidden argument*/NULL);
		__this->set_nextPlayTime_11(((float)il2cpp_codegen_add((float)L_28, (float)L_33)));
	}

IL_00e7:
	{
		// }
		return;
	}
}
// System.Void OVR.AmbienceEmitter::EnableEmitter(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmbienceEmitter_EnableEmitter_m8186FFBEF78B60E107FCE9EA4B177E9F47C49887 (AmbienceEmitter_tC44EB9593D9B3F2E4E7C56950D0B2C8BB47B26A5 * __this, bool ___enable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// activated = enable;
		bool L_0 = ___enable0;
		__this->set_activated_9(L_0);
		// if ( enable ) {
		bool L_1 = ___enable0;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// Play();
		AmbienceEmitter_Play_m8DE86EA3D2BFC66071AA0AE4CEFFFB96CB4A5F0A(__this, /*hidden argument*/NULL);
		goto IL_003e;
	}

IL_0018:
	{
		// if ( playingIdx != -1 ) {
		int32_t L_3 = __this->get_playingIdx_10();
		V_1 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// AudioManager.FadeOutSound( playingIdx, fadeTime );
		int32_t L_5 = __this->get_playingIdx_10();
		float L_6 = __this->get_fadeTime_12();
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_FadeOutSound_m998C3DD44F9B995A494D4C25D9D8D322378388CA(L_5, L_6, /*hidden argument*/NULL);
	}

IL_003d:
	{
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void OVR.AmbienceEmitter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmbienceEmitter__ctor_mDD9A74FDCBEF68C1732F612660AF697D027D06E8 (AmbienceEmitter_tC44EB9593D9B3F2E4E7C56950D0B2C8BB47B26A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundFXRefU5BU5D_tEDAF36BD60BD7ADBA0D7C5A4BCDEDB7E91CB664C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SoundFXRef[]        ambientSounds = new SoundFXRef[0];
		SoundFXRefU5BU5D_tEDAF36BD60BD7ADBA0D7C5A4BCDEDB7E91CB664C* L_0 = (SoundFXRefU5BU5D_tEDAF36BD60BD7ADBA0D7C5A4BCDEDB7E91CB664C*)(SoundFXRefU5BU5D_tEDAF36BD60BD7ADBA0D7C5A4BCDEDB7E91CB664C*)SZArrayNew(SoundFXRefU5BU5D_tEDAF36BD60BD7ADBA0D7C5A4BCDEDB7E91CB664C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_ambientSounds_4(L_0);
		// public bool                autoActivate = true;
		__this->set_autoActivate_5((bool)1);
		// public bool                autoRetrigger = true;
		__this->set_autoRetrigger_6((bool)1);
		// public Vector2            randomRetriggerDelaySecs = new Vector2( 2.0f, 4.0f );
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_1), (2.0f), (4.0f), /*hidden argument*/NULL);
		__this->set_randomRetriggerDelaySecs_7(L_1);
		// public Transform[]        playPositions = new Transform[0];
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_2 = (TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)SZArrayNew(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_playPositions_8(L_2);
		// private bool            activated = false;
		__this->set_activated_9((bool)0);
		// private int                playingIdx = -1;
		__this->set_playingIdx_10((-1));
		// private float            nextPlayTime = 0.0f;
		__this->set_nextPlayTime_11((0.0f));
		// private float            fadeTime = 0.25f;
		__this->set_fadeTime_12((0.25f));
		// private int                lastPosIdx = -1;
		__this->set_lastPosIdx_13((-1));
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
// System.Boolean OVR.AudioManager::get_enableSpatialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioManager_get_enableSpatialization_m7558A52D2084FF429088B79CE146B855D331E372 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// static public bool                     enableSpatialization { get { return ( theAudioManager !=null ) ? theAudioManager.enableSpatializedAudio : false; } }
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001b;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_2 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_2);
		bool L_3 = L_2->get_enableSpatializedAudio_5();
		G_B3_0 = ((int32_t)(L_3));
	}

IL_001b:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001e;
	}

IL_001e:
	{
		// static public bool                     enableSpatialization { get { return ( theAudioManager !=null ) ? theAudioManager.enableSpatializedAudio : false; } }
		bool L_4 = V_0;
		return L_4;
	}
}
// OVR.AudioManager OVR.AudioManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * AudioManager_get_Instance_mCB7586368DB95CDB234EF5F20F8114D15A962A52 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * V_0 = NULL;
	{
		// static public AudioManager            Instance { get { return theAudioManager; } }
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// static public AudioManager            Instance { get { return theAudioManager; } }
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_1 = V_0;
		return L_1;
	}
}
// System.Single OVR.AudioManager::get_NearFallOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioManager_get_NearFallOff_m889BE14E0931166F323D8AC6DC7D747BF333F097 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// static public float                    NearFallOff { get { return theAudioManager.audioMinFallOffDistance; } }
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_0);
		float L_1 = L_0->get_audioMinFallOffDistance_15();
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// static public float                    NearFallOff { get { return theAudioManager.audioMinFallOffDistance; } }
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single OVR.AudioManager::get_FarFallOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioManager_get_FarFallOff_m2E46AB91D701654FDA24B0AA73BDC08E9AADBDED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// static public float                    FarFallOff { get { return theAudioManager.audioMaxFallOffDistance; } }
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_0);
		float L_1 = L_0->get_audioMaxFallOffDistance_16();
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// static public float                    FarFallOff { get { return theAudioManager.audioMaxFallOffDistance; } }
		float L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Audio.AudioMixerGroup OVR.AudioManager::get_EmitterGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * AudioManager_get_EmitterGroup_mE5C568AFEFB85C193AF097373F2F45A00397B3BA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * V_0 = NULL;
	{
		// static public AudioMixerGroup        EmitterGroup { get { return theAudioManager.defaultMixerGroup; } }
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_0);
		AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * L_1 = L_0->get_defaultMixerGroup_8();
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// static public AudioMixerGroup        EmitterGroup { get { return theAudioManager.defaultMixerGroup; } }
		AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Audio.AudioMixerGroup OVR.AudioManager::get_ReservedGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * AudioManager_get_ReservedGroup_m2F4F154370C294C34FAC62E05663BCB09E51654F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * V_0 = NULL;
	{
		// static public AudioMixerGroup        ReservedGroup { get { return theAudioManager.reservedMixerGroup; } }
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_0);
		AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * L_1 = L_0->get_reservedMixerGroup_9();
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// static public AudioMixerGroup        ReservedGroup { get { return theAudioManager.reservedMixerGroup; } }
		AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Audio.AudioMixerGroup OVR.AudioManager::get_VoipGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * AudioManager_get_VoipGroup_m3B395B55D3C40A2E761664E0351057D51D3B4B87 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * V_0 = NULL;
	{
		// static public AudioMixerGroup        VoipGroup { get { return theAudioManager.voiceChatMixerGroup; } }
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_0);
		AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * L_1 = L_0->get_voiceChatMixerGroup_10();
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// static public AudioMixerGroup        VoipGroup { get { return theAudioManager.voiceChatMixerGroup; } }
		AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * L_2 = V_0;
		return L_2;
	}
}
// System.Void OVR.AudioManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Awake_m42941A1F74F545F312435C75A4A0DA6773C46054 (AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * __this, const RuntimeMethod* method)
{
	{
		// Init();
		AudioManager_Init_mE778EC27006A3ED7EB127617AB96B1DA473A0B4A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVR.AudioManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_OnDestroy_mB24BCC2B72ADAC9215A5C24BC29DDF5E6E6DADC0 (AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if ( theAudioManager == this ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// if ( soundEmitterParent != null ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_soundEmitterParent_29();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// Destroy( soundEmitterParent );
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_soundEmitterParent_29();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
	}

IL_002d:
	{
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void OVR.AudioManager::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Init_mE778EC27006A3ED7EB127617AB96B1DA473A0B4A (AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1825E475DFA146EE65BB812A4B0AD70EE37025C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// if ( theAudioManager != null ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// if ( Application.isPlaying && ( theAudioManager != this ) ) {
		bool L_3;
		L_3 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_4 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, __this, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_5));
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 0;
	}

IL_0026:
	{
		V_1 = (bool)G_B4_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// return;
		goto IL_0092;
	}

IL_0036:
	{
		// theAudioManager = this;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->set_theAudioManager_19(__this);
		// nullSound.name = "Default Sound";
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_7 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_nullSound_22();
		NullCheck(L_7);
		L_7->set_name_0(_stringLiteralE1825E475DFA146EE65BB812A4B0AD70EE37025C);
		// RebuildSoundFXCache();
		AudioManager_RebuildSoundFXCache_m59A1FB9E8CE52215E9704999FC8B3AE32F5B6DFF(__this, /*hidden argument*/NULL);
		// if ( Application.isPlaying ) {
		bool L_8;
		L_8 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0092;
		}
	}
	{
		// InitializeSoundSystem();
		AudioManager_InitializeSoundSystem_mBB7FACC058F5E4FD54334E0C17AB3FF6B68AD062(__this, /*hidden argument*/NULL);
		// if ( makePersistent && ( transform.parent == null ) ) {
		bool L_10 = __this->get_makePersistent_4();
		if (!L_10)
		{
			goto IL_007e;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B11_0 = ((int32_t)(L_13));
		goto IL_007f;
	}

IL_007e:
	{
		G_B11_0 = 0;
	}

IL_007f:
	{
		V_3 = (bool)G_B11_0;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0091;
		}
	}
	{
		// DontDestroyOnLoad( gameObject );
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_15, /*hidden argument*/NULL);
	}

IL_0091:
	{
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void OVR.AudioManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Update_m5B2B281566DEB665E05118D6C1104215AECC8FC4 (AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * __this, const RuntimeMethod* method)
{
	{
		// UpdateFreeEmitters();
		AudioManager_UpdateFreeEmitters_m48C9C39AD9D6F66C17266798F0B1A621B88A205E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVR.AudioManager::RebuildSoundFXCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_RebuildSoundFXCache_m59A1FB9E8CE52215E9704999FC8B3AE32F5B6DFF (AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m1E3861C8162CFC9D0A3E0C0F36326265DB51A21E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mA5586A1780DDB7F67F29123A4E6B190CC3467268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m146BEB152A3D9B25905630734E7B87689DDFF716_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral204617F8F093FDDC77E0A1C01A1711FBAF576BE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA241E60234684E4305AA9501E613C6E9AFA1636F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// int count = 0;
		V_0 = 0;
		// for ( int group = 0; group < soundGroupings.Length; group++ ) {
		V_1 = 0;
		goto IL_001f;
	}

IL_0007:
	{
		// count += soundGroupings[group].soundList.Length;
		int32_t L_0 = V_0;
		SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212* L_1 = __this->get_soundGroupings_17();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB* L_5 = L_4->get_soundList_1();
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))));
		// for ( int group = 0; group < soundGroupings.Length; group++ ) {
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001f:
	{
		// for ( int group = 0; group < soundGroupings.Length; group++ ) {
		int32_t L_7 = V_1;
		SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212* L_8 = __this->get_soundGroupings_17();
		NullCheck(L_8);
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))? 1 : 0);
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0007;
		}
	}
	{
		// soundFXCache = new Dictionary<string,SoundFX>( count + 1 );
		int32_t L_10 = V_0;
		Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E * L_11 = (Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E *)il2cpp_codegen_object_new(Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m146BEB152A3D9B25905630734E7B87689DDFF716(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)), /*hidden argument*/Dictionary_2__ctor_m146BEB152A3D9B25905630734E7B87689DDFF716_RuntimeMethod_var);
		__this->set_soundFXCache_18(L_11);
		// soundFXCache.Add( nullSound.name, nullSound );
		Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E * L_12 = __this->get_soundFXCache_18();
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_13 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_nullSound_22();
		NullCheck(L_13);
		String_t* L_14 = L_13->get_name_0();
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_15 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_nullSound_22();
		NullCheck(L_12);
		Dictionary_2_Add_m1E3861C8162CFC9D0A3E0C0F36326265DB51A21E(L_12, L_14, L_15, /*hidden argument*/Dictionary_2_Add_m1E3861C8162CFC9D0A3E0C0F36326265DB51A21E_RuntimeMethod_var);
		// for ( int group = 0; group < soundGroupings.Length; group++ ) {
		V_3 = 0;
		goto IL_016a;
	}

IL_005e:
	{
		// for ( int i = 0; i < soundGroupings[group].soundList.Length; i++ ) {
		V_4 = 0;
		goto IL_013b;
	}

IL_0067:
	{
		// if ( soundFXCache.ContainsKey( soundGroupings[group].soundList[i].name ) ) {
		Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E * L_16 = __this->get_soundFXCache_18();
		SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212* L_17 = __this->get_soundGroupings_17();
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB* L_21 = L_20->get_soundList_1();
		int32_t L_22 = V_4;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		String_t* L_25 = L_24->get_name_0();
		NullCheck(L_16);
		bool L_26;
		L_26 = Dictionary_2_ContainsKey_mA5586A1780DDB7F67F29123A4E6B190CC3467268(L_16, L_25, /*hidden argument*/Dictionary_2_ContainsKey_mA5586A1780DDB7F67F29123A4E6B190CC3467268_RuntimeMethod_var);
		V_5 = L_26;
		bool L_27 = V_5;
		if (!L_27)
		{
			goto IL_00e3;
		}
	}
	{
		// Debug.LogError( "ERROR: Duplicate Sound FX name in the audio manager: '" + soundGroupings[group].name + "' > '" + soundGroupings[group].soundList[i].name + "'" );
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_28;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteralA241E60234684E4305AA9501E613C6E9AFA1636F);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA241E60234684E4305AA9501E613C6E9AFA1636F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = L_29;
		SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212* L_31 = __this->get_soundGroupings_17();
		int32_t L_32 = V_3;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		String_t* L_35 = L_34->get_name_0();
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_35);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_35);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = L_30;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteral204617F8F093FDDC77E0A1C01A1711FBAF576BE9);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral204617F8F093FDDC77E0A1C01A1711FBAF576BE9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = L_36;
		SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212* L_38 = __this->get_soundGroupings_17();
		int32_t L_39 = V_3;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB* L_42 = L_41->get_soundList_1();
		int32_t L_43 = V_4;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_45);
		String_t* L_46 = L_45->get_name_0();
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_46);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_46);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_47 = L_37;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		String_t* L_48;
		L_48 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_48, /*hidden argument*/NULL);
		goto IL_0134;
	}

IL_00e3:
	{
		// soundGroupings[group].soundList[i].Group = soundGroupings[group];
		SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212* L_49 = __this->get_soundGroupings_17();
		int32_t L_50 = V_3;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_52);
		SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB* L_53 = L_52->get_soundList_1();
		int32_t L_54 = V_4;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212* L_57 = __this->get_soundGroupings_17();
		int32_t L_58 = V_3;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_56);
		SoundFX_set_Group_mA0824C9068177ADB44DA9CEA2432428BDB9F7E87(L_56, L_60, /*hidden argument*/NULL);
		// soundFXCache.Add( soundGroupings[group].soundList[i].name, soundGroupings[group].soundList[i] );
		Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E * L_61 = __this->get_soundFXCache_18();
		SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212* L_62 = __this->get_soundGroupings_17();
		int32_t L_63 = V_3;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_65);
		SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB* L_66 = L_65->get_soundList_1();
		int32_t L_67 = V_4;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_69);
		String_t* L_70 = L_69->get_name_0();
		SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212* L_71 = __this->get_soundGroupings_17();
		int32_t L_72 = V_3;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		NullCheck(L_74);
		SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB* L_75 = L_74->get_soundList_1();
		int32_t L_76 = V_4;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_61);
		Dictionary_2_Add_m1E3861C8162CFC9D0A3E0C0F36326265DB51A21E(L_61, L_70, L_78, /*hidden argument*/Dictionary_2_Add_m1E3861C8162CFC9D0A3E0C0F36326265DB51A21E_RuntimeMethod_var);
	}

IL_0134:
	{
		// for ( int i = 0; i < soundGroupings[group].soundList.Length; i++ ) {
		int32_t L_79 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
	}

IL_013b:
	{
		// for ( int i = 0; i < soundGroupings[group].soundList.Length; i++ ) {
		int32_t L_80 = V_4;
		SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212* L_81 = __this->get_soundGroupings_17();
		int32_t L_82 = V_3;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_84);
		SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB* L_85 = L_84->get_soundList_1();
		NullCheck(L_85);
		V_6 = (bool)((((int32_t)L_80) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_85)->max_length)))))? 1 : 0);
		bool L_86 = V_6;
		if (L_86)
		{
			goto IL_0067;
		}
	}
	{
		// soundGroupings[group].playingSoundCount = 0;
		SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212* L_87 = __this->get_soundGroupings_17();
		int32_t L_88 = V_3;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_90);
		L_90->set_playingSoundCount_6(0);
		// for ( int group = 0; group < soundGroupings.Length; group++ ) {
		int32_t L_91 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1));
	}

IL_016a:
	{
		// for ( int group = 0; group < soundGroupings.Length; group++ ) {
		int32_t L_92 = V_3;
		SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212* L_93 = __this->get_soundGroupings_17();
		NullCheck(L_93);
		V_7 = (bool)((((int32_t)L_92) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_93)->max_length)))))? 1 : 0);
		bool L_94 = V_7;
		if (L_94)
		{
			goto IL_005e;
		}
	}
	{
		// }
		return;
	}
}
// OVR.SoundFX OVR.AudioManager::FindSoundFX(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * AudioManager_FindSoundFX_mB2BCD23EDBE3DA675D71EC6D867692051DC8C2E5 (String_t* ___name0, bool ___rebuildCache1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mA5586A1780DDB7F67F29123A4E6B190CC3467268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mAE7EC43AD052465D0E7DCDC708C07A5BEDBB0B8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if ( string.IsNullOrEmpty( name ) ) {
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return nullSound;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_3 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_nullSound_22();
		V_1 = L_3;
		goto IL_0059;
	}

IL_0014:
	{
		// if ( rebuildCache ) {
		bool L_4 = ___rebuildCache1;
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		// theAudioManager.RebuildSoundFXCache();
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_6 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_6);
		AudioManager_RebuildSoundFXCache_m59A1FB9E8CE52215E9704999FC8B3AE32F5B6DFF(L_6, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// if ( !theAudioManager.soundFXCache.ContainsKey( name ) ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_7 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_7);
		Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E * L_8 = L_7->get_soundFXCache_18();
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_ContainsKey_mA5586A1780DDB7F67F29123A4E6B190CC3467268(L_8, L_9, /*hidden argument*/Dictionary_2_ContainsKey_mA5586A1780DDB7F67F29123A4E6B190CC3467268_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0046;
		}
	}
	{
		// return nullSound;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_12 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_nullSound_22();
		V_1 = L_12;
		goto IL_0059;
	}

IL_0046:
	{
		// return theAudioManager.soundFXCache[name];
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_13 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_13);
		Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E * L_14 = L_13->get_soundFXCache_18();
		String_t* L_15 = ___name0;
		NullCheck(L_14);
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_16;
		L_16 = Dictionary_2_get_Item_mAE7EC43AD052465D0E7DCDC708C07A5BEDBB0B8D(L_14, L_15, /*hidden argument*/Dictionary_2_get_Item_mAE7EC43AD052465D0E7DCDC708C07A5BEDBB0B8D_RuntimeMethod_var);
		V_1 = L_16;
		goto IL_0059;
	}

IL_0059:
	{
		// }
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_17 = V_1;
		return L_17;
	}
}
// System.Boolean OVR.AudioManager::FindAudioManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioManager_FindAudioManager_mA564A964ED72C8E271769A102331FE0AABF3A875 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_mF9AC97661AC42BDE419A2FBB948034F879A3AF5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB2DCC3593CCEB58CA32060CD89A596D12D0ECCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBACB871CE06ABB812CE4839FEF3F31E0DFE238CC);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		// GameObject audioManagerObject = GameObject.Find( "AudioManager" );
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralAB2DCC3593CCEB58CA32060CD89A596D12D0ECCC, /*hidden argument*/NULL);
		V_0 = L_0;
		// if ( ( audioManagerObject == null ) || ( audioManagerObject.GetComponent<AudioManager>() == null ) ) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_0;
		NullCheck(L_3);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_4;
		L_4 = GameObject_GetComponent_TisAudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_mF9AC97661AC42BDE419A2FBB948034F879A3AF5D(L_3, /*hidden argument*/GameObject_GetComponent_TisAudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_mF9AC97661AC42BDE419A2FBB948034F879A3AF5D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 1;
	}

IL_0024:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		// if ( !hideWarnings ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		bool L_7 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_hideWarnings_23();
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		// Debug.LogError( "[ERROR] AudioManager object missing from hierarchy!" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralBACB871CE06ABB812CE4839FEF3F31E0DFE238CC, /*hidden argument*/NULL);
		// hideWarnings = true;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->set_hideWarnings_23((bool)1);
	}

IL_0048:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_005e;
	}

IL_004c:
	{
		// audioManagerObject.GetComponent<AudioManager>().Init();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_0;
		NullCheck(L_9);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_10;
		L_10 = GameObject_GetComponent_TisAudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_mF9AC97661AC42BDE419A2FBB948034F879A3AF5D(L_9, /*hidden argument*/GameObject_GetComponent_TisAudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_mF9AC97661AC42BDE419A2FBB948034F879A3AF5D_RuntimeMethod_var);
		NullCheck(L_10);
		AudioManager_Init_mE778EC27006A3ED7EB127617AB96B1DA473A0B4A(L_10, /*hidden argument*/NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_005e;
	}

IL_005e:
	{
		// }
		bool L_11 = V_3;
		return L_11;
	}
}
// UnityEngine.GameObject OVR.AudioManager::GetGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * AudioManager_GetGameObject_m9E3DFFDD52D09F2E286079D14FAFDD86AD474137 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	{
		// if ( theAudioManager == null ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// if ( !FindAudioManager() ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = AudioManager_FindAudioManager_mA564A964ED72C8E271769A102331FE0AABF3A875(/*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// return null;
		V_2 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
		goto IL_0030;
	}

IL_0022:
	{
	}

IL_0023:
	{
		// return theAudioManager.gameObject;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_5 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_2;
		return L_7;
	}
}
// System.String OVR.AudioManager::NameMinusGroup(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioManager_NameMinusGroup_m2E938E1895A5CA814C792B15019E3F77C05476F6 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		// if ( name.IndexOf( "/" ) > -1 ) {
		String_t* L_0 = ___name0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_0, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)(-1)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// return name.Substring( name.IndexOf( "/" ) + 1 );
		String_t* L_3 = ___name0;
		String_t* L_4 = ___name0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_4, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_6;
		L_6 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_3, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_002e;
	}

IL_002a:
	{
		// return name;
		String_t* L_7 = ___name0;
		V_1 = L_7;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		String_t* L_8 = V_1;
		return L_8;
	}
}
// System.String[] OVR.AudioManager::GetSoundFXNames(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* AudioManager_GetSoundFXNames_m7D9FEBA181BE30E1C6DDC4BF5EBC9BA633AB0844 (String_t* ___currentValue0, int32_t* ___currentIdx1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastList_1_Add_mBD8D4B1FD7FD4D6C93A0D1846BD65B6448772958_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastList_1_Clear_m56EC53118E6F37D5A363300961E69BA45EF9CC8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastList_1_ToArray_m9B07A0977C3112CF3B12E6EC947E4054E2668F77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastList_1_get_Count_mEB678DC28ED79B38283E6EBE99B02279850E310D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// currentIdx = 0;
		int32_t* L_0 = ___currentIdx1;
		*((int32_t*)L_0) = (int32_t)0;
		// names.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F * L_1 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_names_20();
		NullCheck(L_1);
		FastList_1_Clear_m56EC53118E6F37D5A363300961E69BA45EF9CC8B(L_1, /*hidden argument*/FastList_1_Clear_m56EC53118E6F37D5A363300961E69BA45EF9CC8B_RuntimeMethod_var);
		// if ( theAudioManager == null ) {
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_2 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// if ( !FindAudioManager() ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = AudioManager_FindAudioManager_mA564A964ED72C8E271769A102331FE0AABF3A875(/*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// return defaultSound;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_defaultSound_21();
		V_2 = L_7;
		goto IL_0122;
	}

IL_0037:
	{
	}

IL_0038:
	{
		// names.Add( nullSound.name );
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F * L_8 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_names_20();
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_9 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_nullSound_22();
		NullCheck(L_9);
		String_t* L_10 = L_9->get_name_0();
		NullCheck(L_8);
		FastList_1_Add_mBD8D4B1FD7FD4D6C93A0D1846BD65B6448772958(L_8, L_10, /*hidden argument*/FastList_1_Add_mBD8D4B1FD7FD4D6C93A0D1846BD65B6448772958_RuntimeMethod_var);
		// for ( int group = 0; group < theAudioManager.soundGroupings.Length; group++ ) {
		V_3 = 0;
		goto IL_00fd;
	}

IL_0054:
	{
		// for ( int i = 0; i < theAudioManager.soundGroupings[group].soundList.Length; i++ ) {
		V_4 = 0;
		goto IL_00d8;
	}

IL_005a:
	{
		// if ( string.Compare( currentValue, theAudioManager.soundGroupings[group].soundList[i].name, true ) == 0 ) {
		String_t* L_11 = ___currentValue0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_12 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_12);
		SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212* L_13 = L_12->get_soundGroupings_17();
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB* L_17 = L_16->get_soundList_1();
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		String_t* L_21 = L_20->get_name_0();
		int32_t L_22;
		L_22 = String_Compare_m3B98D489EF23605CC97E9907AAF1E5E99BBF6A62(L_11, L_21, (bool)1, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0092;
		}
	}
	{
		// currentIdx = names.Count;
		int32_t* L_24 = ___currentIdx1;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F * L_25 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_names_20();
		NullCheck(L_25);
		int32_t L_26;
		L_26 = FastList_1_get_Count_mEB678DC28ED79B38283E6EBE99B02279850E310D(L_25, /*hidden argument*/FastList_1_get_Count_mEB678DC28ED79B38283E6EBE99B02279850E310D_RuntimeMethod_var);
		*((int32_t*)L_24) = (int32_t)L_26;
	}

IL_0092:
	{
		// names.Add( theAudioManager.soundGroupings[group].name + "/" + theAudioManager.soundGroupings[group].soundList[i].name );
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F * L_27 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_names_20();
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_28 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_28);
		SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212* L_29 = L_28->get_soundGroupings_17();
		int32_t L_30 = V_3;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		String_t* L_33 = L_32->get_name_0();
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_34 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_34);
		SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212* L_35 = L_34->get_soundGroupings_17();
		int32_t L_36 = V_3;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB* L_39 = L_38->get_soundList_1();
		int32_t L_40 = V_4;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		String_t* L_43 = L_42->get_name_0();
		String_t* L_44;
		L_44 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_33, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_43, /*hidden argument*/NULL);
		NullCheck(L_27);
		FastList_1_Add_mBD8D4B1FD7FD4D6C93A0D1846BD65B6448772958(L_27, L_44, /*hidden argument*/FastList_1_Add_mBD8D4B1FD7FD4D6C93A0D1846BD65B6448772958_RuntimeMethod_var);
		// for ( int i = 0; i < theAudioManager.soundGroupings[group].soundList.Length; i++ ) {
		int32_t L_45 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_00d8:
	{
		// for ( int i = 0; i < theAudioManager.soundGroupings[group].soundList.Length; i++ ) {
		int32_t L_46 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_47 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_47);
		SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212* L_48 = L_47->get_soundGroupings_17();
		int32_t L_49 = V_3;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB* L_52 = L_51->get_soundList_1();
		NullCheck(L_52);
		V_6 = (bool)((((int32_t)L_46) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length)))))? 1 : 0);
		bool L_53 = V_6;
		if (L_53)
		{
			goto IL_005a;
		}
	}
	{
		// for ( int group = 0; group < theAudioManager.soundGroupings.Length; group++ ) {
		int32_t L_54 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_00fd:
	{
		// for ( int group = 0; group < theAudioManager.soundGroupings.Length; group++ ) {
		int32_t L_55 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_56 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_56);
		SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212* L_57 = L_56->get_soundGroupings_17();
		NullCheck(L_57);
		V_7 = (bool)((((int32_t)L_55) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length)))))? 1 : 0);
		bool L_58 = V_7;
		if (L_58)
		{
			goto IL_0054;
		}
	}
	{
		// return names.ToArray();
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F * L_59 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_names_20();
		NullCheck(L_59);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_60;
		L_60 = FastList_1_ToArray_m9B07A0977C3112CF3B12E6EC947E4054E2668F77(L_59, /*hidden argument*/FastList_1_ToArray_m9B07A0977C3112CF3B12E6EC947E4054E2668F77_RuntimeMethod_var);
		V_2 = L_60;
		goto IL_0122;
	}

IL_0122:
	{
		// }
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_61 = V_2;
		return L_61;
	}
}
// System.Boolean OVR.AudioManager::get_SoundEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioManager_get_SoundEnabled_m336299F404F149FBC18A3F84F169BDF644CD5ACF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// static public bool                SoundEnabled { get { return soundEnabled; } }
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		bool L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_soundEnabled_33();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// static public bool                SoundEnabled { get { return soundEnabled; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Int32 OVR.AudioManager::CalculateMaxEmittersSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioManager_CalculateMaxEmittersSize_mEC253E1C7F317C76256626FBC23924C3A257C455 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return theAudioManager.maxSoundEmitters + (int)EmitterChannel.Any;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_maxSoundEmitters_12();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		goto IL_0010;
	}

IL_0010:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean OVR.AudioManager::ValidateEmitterIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioManager_ValidateEmitterIndex_m63B1F23EEA30970C9370B3F920228E05025392D7 (int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return index > -1 && index < CalculateMaxEmittersSize();
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) <= ((int32_t)(-1))))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___index0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = AudioManager_CalculateMaxEmittersSize_mEC253E1C7F317C76256626FBC23924C3A257C455(/*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void OVR.AudioManager::InitializeSoundSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_InitializeSoundSystem_mBB7FACC058F5E4FD54334E0C17AB3FF6B68AD062 (AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F_mBEE7D4A949DA6B1F2146EA2364470E65F8FAB6AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3_mF86079EC53E2295B345994270FCD8972E48F2510_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0906A238577C8464E6A7F03387A5C1CE1EBD62E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEEEA6DE242693D5B3A8C33036B3FED8754F8AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D3EBEF88DB09499FA60777B4C341B3838D5993);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66A25193E8278E64AE4CE8479F17DE582D23BD3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral788E03A6D70DC88329F8CB18C677A1D352D7135E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5D343C25950A0B6471FA4741F28D8D398A82AF7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_8 = NULL;
	bool V_9 = false;
	{
		// int bufferLength = 960;
		V_0 = ((int32_t)960);
		// int numBuffers = 4;
		V_1 = 4;
		// AudioSettings.GetDSPBufferSize( out bufferLength, out numBuffers );
		AudioSettings_GetDSPBufferSize_mC28498D69093D2E80A637A40A588230F7E0A2052((int32_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		// if ( Application.isPlaying ) {
		bool L_0;
		L_0 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		V_3 = L_0;
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_005f;
		}
	}
	{
		// Debug.Log( "[AudioManager] Audio Sample Rate: " + AudioSettings.outputSampleRate );
		int32_t L_2;
		L_2 = AudioSettings_get_outputSampleRate_mF694C528E77284914F1F8F7CA804BD9ECD0D33BE(/*hidden argument*/NULL);
		V_4 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_4), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral63D3EBEF88DB09499FA60777B4C341B3838D5993, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// Debug.Log( "[AudioManager] Audio Buffer Length: " + bufferLength + " Size: " + numBuffers );
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralF5D343C25950A0B6471FA4741F28D8D398A82AF7, L_5, _stringLiteral788E03A6D70DC88329F8CB18C677A1D352D7135E, L_6, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_7, /*hidden argument*/NULL);
	}

IL_005f:
	{
		// AudioListener audioListenerObject = GameObject.FindObjectOfType<AudioListener>() as AudioListener;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * L_8;
		L_8 = Object_FindObjectOfType_TisAudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3_mF86079EC53E2295B345994270FCD8972E48F2510(/*hidden argument*/Object_FindObjectOfType_TisAudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3_mF86079EC53E2295B345994270FCD8972E48F2510_RuntimeMethod_var);
		V_2 = L_8;
		// if ( audioListenerObject == null ) {
		AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * L_9 = V_2;
		bool L_10;
		L_10 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_10;
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0081;
		}
	}
	{
		// Debug.LogError( "[AudioManager] Missing AudioListener object!  Add one to the scene." );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral5BEEEA6DE242693D5B3A8C33036B3FED8754F8AE, /*hidden argument*/NULL);
		goto IL_008e;
	}

IL_0081:
	{
		// staticListenerPosition = audioListenerObject.transform;
		AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * L_12 = V_2;
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->set_staticListenerPosition_30(L_13);
	}

IL_008e:
	{
		// soundEmitters = new SoundEmitter[CalculateMaxEmittersSize()];
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = AudioManager_CalculateMaxEmittersSize_mEC253E1C7F317C76256626FBC23924C3A257C455(/*hidden argument*/NULL);
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_15 = (SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8*)(SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8*)SZArrayNew(SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8_il2cpp_TypeInfo_var, (uint32_t)L_14);
		__this->set_soundEmitters_25(L_15);
		// soundEmitterParent = GameObject.Find( "__SoundEmitters__" );
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral0906A238577C8464E6A7F03387A5C1CE1EBD62E2, /*hidden argument*/NULL);
		((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->set_soundEmitterParent_29(L_16);
		// if ( soundEmitterParent != null ) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_soundEmitterParent_29();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_18;
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00cb;
		}
	}
	{
		// Destroy( soundEmitterParent );
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_soundEmitterParent_29();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_20, /*hidden argument*/NULL);
	}

IL_00cb:
	{
		// soundEmitterParent = new GameObject( "__SoundEmitters__" );
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_21, _stringLiteral0906A238577C8464E6A7F03387A5C1CE1EBD62E2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->set_soundEmitterParent_29(L_21);
		// for ( int i = 0; i < CalculateMaxEmittersSize(); i++ ) {
		V_7 = 0;
		goto IL_018d;
	}

IL_00e2:
	{
		// GameObject emitterObject = new GameObject( "SoundEmitter_" + i );
		String_t* L_22;
		L_22 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_7), /*hidden argument*/NULL);
		String_t* L_23;
		L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral66A25193E8278E64AE4CE8479F17DE582D23BD3A, L_22, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_24, L_23, /*hidden argument*/NULL);
		V_8 = L_24;
		// emitterObject.transform.parent = soundEmitterParent.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = V_8;
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_soundEmitterParent_29();
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_26, L_28, /*hidden argument*/NULL);
		// emitterObject.transform.position = Vector3.zero;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = V_8;
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_30, L_31, /*hidden argument*/NULL);
		// emitterObject.hideFlags = HideFlags.DontSaveInEditor;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = V_8;
		NullCheck(L_32);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_32, 4, /*hidden argument*/NULL);
		// soundEmitters[i] = emitterObject.AddComponent<SoundEmitter>();
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_33 = __this->get_soundEmitters_25();
		int32_t L_34 = V_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = V_8;
		NullCheck(L_35);
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_36;
		L_36 = GameObject_AddComponent_TisSoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F_mBEE7D4A949DA6B1F2146EA2364470E65F8FAB6AF(L_35, /*hidden argument*/GameObject_AddComponent_TisSoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F_mBEE7D4A949DA6B1F2146EA2364470E65F8FAB6AF_RuntimeMethod_var);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F *)L_36);
		// soundEmitters[i].SetDefaultParent( soundEmitterParent.transform );
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_37 = __this->get_soundEmitters_25();
		int32_t L_38 = V_7;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_soundEmitterParent_29();
		NullCheck(L_41);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		SoundEmitter_SetDefaultParent_mB35C9475E42E176115291F7F58838A309D817C67(L_40, L_42, /*hidden argument*/NULL);
		// soundEmitters[i].SetChannel( i );
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_43 = __this->get_soundEmitters_25();
		int32_t L_44 = V_7;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = V_7;
		NullCheck(L_46);
		SoundEmitter_SetChannel_mCDFADEC11BB7EDD8A3679BF256854E04E53A7530(L_46, L_47, /*hidden argument*/NULL);
		// soundEmitters[i].Stop();
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_48 = __this->get_soundEmitters_25();
		int32_t L_49 = V_7;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		SoundEmitter_Stop_m3300C33E8D6996E9EC28F0AC81D1702912AC6DE4(L_51, /*hidden argument*/NULL);
		// soundEmitters[i].originalIdx = i;
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_52 = __this->get_soundEmitters_25();
		int32_t L_53 = V_7;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		int32_t L_56 = V_7;
		NullCheck(L_55);
		L_55->set_originalIdx_14(L_56);
		// for ( int i = 0; i < CalculateMaxEmittersSize(); i++ ) {
		int32_t L_57 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
	}

IL_018d:
	{
		// for ( int i = 0; i < CalculateMaxEmittersSize(); i++ ) {
		int32_t L_58 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		int32_t L_59;
		L_59 = AudioManager_CalculateMaxEmittersSize_mEC253E1C7F317C76256626FBC23924C3A257C455(/*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)L_58) < ((int32_t)L_59))? 1 : 0);
		bool L_60 = V_9;
		if (L_60)
		{
			goto IL_00e2;
		}
	}
	{
		// ResetFreeEmitters();
		AudioManager_ResetFreeEmitters_m01BBBF5F1928ED3F771FA101F35BF971C899BC2F(__this, /*hidden argument*/NULL);
		// soundEmitterParent.hideFlags = HideFlags.DontSaveInEditor;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_61 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_soundEmitterParent_29();
		NullCheck(L_61);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_61, 4, /*hidden argument*/NULL);
		// audioMaxFallOffDistanceSqr = audioMaxFallOffDistance * audioMaxFallOffDistance;
		float L_62 = __this->get_audioMaxFallOffDistance_16();
		float L_63 = __this->get_audioMaxFallOffDistance_16();
		__this->set_audioMaxFallOffDistanceSqr_24(((float)il2cpp_codegen_multiply((float)L_62, (float)L_63)));
		// }
		return;
	}
}
// System.Void OVR.AudioManager::UpdateFreeEmitters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_UpdateFreeEmitters_m48C9C39AD9D6F66C17266798F0B1A621B88A205E (AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastList_1_Add_m8212701FA2336834A69CC2EEC9760EFFDCA20662_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastList_1_Contains_m2F2025CEDB1DC29B918CAAB245CE5DD92B03CB26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastList_1_RemoveAtFast_mD4EF9EEDE1A17BD46B8855DB261091A7D93D194D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastList_1_get_Count_m10D9047727CC8A5C0D4614311A29C7B4B540A950_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastList_1_get_Item_mC8254CC72AD0E9CC5833858EAF29EEFE3D794E2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral384182C6ED372515BD4A899C722AF43447B8EC46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65576CF94AD9E7BE47620C06B1AB84B386BA22C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DE1D416D02C542C5C98EFCD41210A1BCB0BB04A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	int32_t G_B18_0 = 0;
	int32_t G_B32_0 = 0;
	{
		// if ( verboseLogging ) {
		bool L_0 = __this->get_verboseLogging_11();
		V_6 = L_0;
		bool L_1 = V_6;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// if ( Input.GetKeyDown( KeyCode.A ) ) {
		bool L_2;
		L_2 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)97), /*hidden argument*/NULL);
		V_7 = L_2;
		bool L_3 = V_7;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// forceShowEmitterCount = !forceShowEmitterCount;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		bool L_4 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_forceShowEmitterCount_32();
		((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->set_forceShowEmitterCount_32((bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0));
	}

IL_002a:
	{
		// if ( forceShowEmitterCount ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		bool L_5 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_forceShowEmitterCount_32();
		V_8 = L_5;
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// showPlayingEmitterCount = true;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->set_showPlayingEmitterCount_31((bool)1);
	}

IL_003d:
	{
	}

IL_003e:
	{
		// int total = 0, veryLow = 0, low = 0, def = 0, high = 0, veryHigh = 0;
		V_0 = 0;
		// int total = 0, veryLow = 0, low = 0, def = 0, high = 0, veryHigh = 0;
		V_1 = 0;
		// int total = 0, veryLow = 0, low = 0, def = 0, high = 0, veryHigh = 0;
		V_2 = 0;
		// int total = 0, veryLow = 0, low = 0, def = 0, high = 0, veryHigh = 0;
		V_3 = 0;
		// int total = 0, veryLow = 0, low = 0, def = 0, high = 0, veryHigh = 0;
		V_4 = 0;
		// int total = 0, veryLow = 0, low = 0, def = 0, high = 0, veryHigh = 0;
		V_5 = 0;
		// for ( int i = 0; i < playingEmitters.size; ) {
		V_9 = 0;
		goto IL_019b;
	}

IL_0054:
	{
		// if ( playingEmitters[i] == null ) {
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_7 = __this->get_playingEmitters_26();
		int32_t L_8 = V_9;
		NullCheck(L_7);
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_9;
		L_9 = FastList_1_get_Item_mC8254CC72AD0E9CC5833858EAF29EEFE3D794E2F(L_7, L_8, /*hidden argument*/FastList_1_get_Item_mC8254CC72AD0E9CC5833858EAF29EEFE3D794E2F_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_10 = L_10;
		bool L_11 = V_10;
		if (!L_11)
		{
			goto IL_008d;
		}
	}
	{
		// Debug.LogError( "[AudioManager] ERROR: playingEmitters list had a null emitter! Something nuked a sound emitter!!!" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral65576CF94AD9E7BE47620C06B1AB84B386BA22C1, /*hidden argument*/NULL);
		// playingEmitters.RemoveAtFast( i );
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_12 = __this->get_playingEmitters_26();
		int32_t L_13 = V_9;
		NullCheck(L_12);
		FastList_1_RemoveAtFast_mD4EF9EEDE1A17BD46B8855DB261091A7D93D194D(L_12, L_13, /*hidden argument*/FastList_1_RemoveAtFast_mD4EF9EEDE1A17BD46B8855DB261091A7D93D194D_RuntimeMethod_var);
		// return;
		goto IL_0239;
	}

IL_008d:
	{
		// if ( !playingEmitters[i].IsPlaying() ) {
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_14 = __this->get_playingEmitters_26();
		int32_t L_15 = V_9;
		NullCheck(L_14);
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_16;
		L_16 = FastList_1_get_Item_mC8254CC72AD0E9CC5833858EAF29EEFE3D794E2F(L_14, L_15, /*hidden argument*/FastList_1_get_Item_mC8254CC72AD0E9CC5833858EAF29EEFE3D794E2F_RuntimeMethod_var);
		NullCheck(L_16);
		bool L_17;
		L_17 = SoundEmitter_IsPlaying_m6868357ED357493BD5CD6FA1F3DC079536D03294(L_16, /*hidden argument*/NULL);
		V_11 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_11;
		if (!L_18)
		{
			goto IL_011e;
		}
	}
	{
		// if ( verboseLogging ) {
		bool L_19 = __this->get_verboseLogging_11();
		V_12 = L_19;
		bool L_20 = V_12;
		if (!L_20)
		{
			goto IL_00e2;
		}
	}
	{
		// if ( nextFreeEmitters.Contains( playingEmitters[i] ) ) {
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_21 = __this->get_nextFreeEmitters_27();
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_22 = __this->get_playingEmitters_26();
		int32_t L_23 = V_9;
		NullCheck(L_22);
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_24;
		L_24 = FastList_1_get_Item_mC8254CC72AD0E9CC5833858EAF29EEFE3D794E2F(L_22, L_23, /*hidden argument*/FastList_1_get_Item_mC8254CC72AD0E9CC5833858EAF29EEFE3D794E2F_RuntimeMethod_var);
		NullCheck(L_21);
		bool L_25;
		L_25 = FastList_1_Contains_m2F2025CEDB1DC29B918CAAB245CE5DD92B03CB26(L_21, L_24, /*hidden argument*/FastList_1_Contains_m2F2025CEDB1DC29B918CAAB245CE5DD92B03CB26_RuntimeMethod_var);
		V_13 = L_25;
		bool L_26 = V_13;
		if (!L_26)
		{
			goto IL_00e1;
		}
	}
	{
		// Debug.LogError( "[AudioManager] ERROR: playing sound emitter already in the free emitters list!" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral384182C6ED372515BD4A899C722AF43447B8EC46, /*hidden argument*/NULL);
	}

IL_00e1:
	{
	}

IL_00e2:
	{
		// playingEmitters[i].Stop();
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_27 = __this->get_playingEmitters_26();
		int32_t L_28 = V_9;
		NullCheck(L_27);
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_29;
		L_29 = FastList_1_get_Item_mC8254CC72AD0E9CC5833858EAF29EEFE3D794E2F(L_27, L_28, /*hidden argument*/FastList_1_get_Item_mC8254CC72AD0E9CC5833858EAF29EEFE3D794E2F_RuntimeMethod_var);
		NullCheck(L_29);
		SoundEmitter_Stop_m3300C33E8D6996E9EC28F0AC81D1702912AC6DE4(L_29, /*hidden argument*/NULL);
		// nextFreeEmitters.Add( playingEmitters[i] );
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_30 = __this->get_nextFreeEmitters_27();
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_31 = __this->get_playingEmitters_26();
		int32_t L_32 = V_9;
		NullCheck(L_31);
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_33;
		L_33 = FastList_1_get_Item_mC8254CC72AD0E9CC5833858EAF29EEFE3D794E2F(L_31, L_32, /*hidden argument*/FastList_1_get_Item_mC8254CC72AD0E9CC5833858EAF29EEFE3D794E2F_RuntimeMethod_var);
		NullCheck(L_30);
		FastList_1_Add_m8212701FA2336834A69CC2EEC9760EFFDCA20662(L_30, L_33, /*hidden argument*/FastList_1_Add_m8212701FA2336834A69CC2EEC9760EFFDCA20662_RuntimeMethod_var);
		// playingEmitters.RemoveAtFast( i );
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_34 = __this->get_playingEmitters_26();
		int32_t L_35 = V_9;
		NullCheck(L_34);
		FastList_1_RemoveAtFast_mD4EF9EEDE1A17BD46B8855DB261091A7D93D194D(L_34, L_35, /*hidden argument*/FastList_1_RemoveAtFast_mD4EF9EEDE1A17BD46B8855DB261091A7D93D194D_RuntimeMethod_var);
		// continue;
		goto IL_019b;
	}

IL_011e:
	{
		// if ( verboseLogging && showPlayingEmitterCount ) {
		bool L_36 = __this->get_verboseLogging_11();
		if (!L_36)
		{
			goto IL_012d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		bool L_37 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_showPlayingEmitterCount_31();
		G_B18_0 = ((int32_t)(L_37));
		goto IL_012e;
	}

IL_012d:
	{
		G_B18_0 = 0;
	}

IL_012e:
	{
		V_14 = (bool)G_B18_0;
		bool L_38 = V_14;
		if (!L_38)
		{
			goto IL_0194;
		}
	}
	{
		// total++;
		int32_t L_39 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		// switch ( playingEmitters[i].priority ) {
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_40 = __this->get_playingEmitters_26();
		int32_t L_41 = V_9;
		NullCheck(L_40);
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_42;
		L_42 = FastList_1_get_Item_mC8254CC72AD0E9CC5833858EAF29EEFE3D794E2F(L_40, L_41, /*hidden argument*/FastList_1_get_Item_mC8254CC72AD0E9CC5833858EAF29EEFE3D794E2F_RuntimeMethod_var);
		NullCheck(L_42);
		int32_t L_43 = L_42->get_priority_8();
		V_16 = L_43;
		int32_t L_44 = V_16;
		V_15 = L_44;
		int32_t L_45 = V_15;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)((int32_t)-2))))
		{
			case 0:
			{
				goto IL_0171;
			}
			case 1:
			{
				goto IL_0177;
			}
			case 2:
			{
				goto IL_017d;
			}
			case 3:
			{
				goto IL_0183;
			}
			case 4:
			{
				goto IL_018b;
			}
		}
	}
	{
		goto IL_0193;
	}

IL_0171:
	{
		// case SoundPriority.VeryLow: veryLow++; break;
		int32_t L_46 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		// case SoundPriority.VeryLow: veryLow++; break;
		goto IL_0193;
	}

IL_0177:
	{
		// case SoundPriority.Low: low++; break;
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
		// case SoundPriority.Low: low++; break;
		goto IL_0193;
	}

IL_017d:
	{
		// case SoundPriority.Default: def++; break;
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
		// case SoundPriority.Default: def++; break;
		goto IL_0193;
	}

IL_0183:
	{
		// case SoundPriority.High: high++; break;
		int32_t L_49 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
		// case SoundPriority.High: high++; break;
		goto IL_0193;
	}

IL_018b:
	{
		// case SoundPriority.VeryHigh: veryHigh++; break;
		int32_t L_50 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		// case SoundPriority.VeryHigh: veryHigh++; break;
		goto IL_0193;
	}

IL_0193:
	{
	}

IL_0194:
	{
		// i++;
		int32_t L_51 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_019b:
	{
		// for ( int i = 0; i < playingEmitters.size; ) {
		int32_t L_52 = V_9;
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_53 = __this->get_playingEmitters_26();
		NullCheck(L_53);
		int32_t L_54 = L_53->get_size_1();
		V_17 = (bool)((((int32_t)L_52) < ((int32_t)L_54))? 1 : 0);
		bool L_55 = V_17;
		if (L_55)
		{
			goto IL_0054;
		}
	}
	{
		// if ( verboseLogging && showPlayingEmitterCount ) {
		bool L_56 = __this->get_verboseLogging_11();
		if (!L_56)
		{
			goto IL_01c2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		bool L_57 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_showPlayingEmitterCount_31();
		G_B32_0 = ((int32_t)(L_57));
		goto IL_01c3;
	}

IL_01c2:
	{
		G_B32_0 = 0;
	}

IL_01c3:
	{
		V_18 = (bool)G_B32_0;
		bool L_58 = V_18;
		if (!L_58)
		{
			goto IL_0239;
		}
	}
	{
		// Debug.LogWarning( string.Format( "[AudioManager] Playing sounds: Total {0} | VeryLow {1} | Low {2} | Default {3} | High {4} | VeryHigh {5} | Free {6}", Fmt( total ), Fmt( veryLow ), Fmt( low ), Fmt( def ), Fmt( high ), Fmt( veryHigh ), FmtFree( nextFreeEmitters.Count ) ) );
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_59 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_60 = L_59;
		int32_t L_61 = V_0;
		String_t* L_62;
		L_62 = AudioManager_Fmt_m608A698D902716F4D97FCBA21144D1D5E7E73E68(__this, L_61, /*hidden argument*/NULL);
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_62);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_62);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_63 = L_60;
		int32_t L_64 = V_1;
		String_t* L_65;
		L_65 = AudioManager_Fmt_m608A698D902716F4D97FCBA21144D1D5E7E73E68(__this, L_64, /*hidden argument*/NULL);
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_65);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_65);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_66 = L_63;
		int32_t L_67 = V_2;
		String_t* L_68;
		L_68 = AudioManager_Fmt_m608A698D902716F4D97FCBA21144D1D5E7E73E68(__this, L_67, /*hidden argument*/NULL);
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_68);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_68);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_69 = L_66;
		int32_t L_70 = V_3;
		String_t* L_71;
		L_71 = AudioManager_Fmt_m608A698D902716F4D97FCBA21144D1D5E7E73E68(__this, L_70, /*hidden argument*/NULL);
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, L_71);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_71);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_72 = L_69;
		int32_t L_73 = V_4;
		String_t* L_74;
		L_74 = AudioManager_Fmt_m608A698D902716F4D97FCBA21144D1D5E7E73E68(__this, L_73, /*hidden argument*/NULL);
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_74);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_74);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_75 = L_72;
		int32_t L_76 = V_5;
		String_t* L_77;
		L_77 = AudioManager_Fmt_m608A698D902716F4D97FCBA21144D1D5E7E73E68(__this, L_76, /*hidden argument*/NULL);
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_77);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_77);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_78 = L_75;
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_79 = __this->get_nextFreeEmitters_27();
		NullCheck(L_79);
		int32_t L_80;
		L_80 = FastList_1_get_Count_m10D9047727CC8A5C0D4614311A29C7B4B540A950(L_79, /*hidden argument*/FastList_1_get_Count_m10D9047727CC8A5C0D4614311A29C7B4B540A950_RuntimeMethod_var);
		String_t* L_81;
		L_81 = AudioManager_FmtFree_m11EE96968234055FA3C3EA6828B04F93EB3FBBD3(__this, L_80, /*hidden argument*/NULL);
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, L_81);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_81);
		String_t* L_82;
		L_82 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral6DE1D416D02C542C5C98EFCD41210A1BCB0BB04A, L_78, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_82, /*hidden argument*/NULL);
		// showPlayingEmitterCount = false;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->set_showPlayingEmitterCount_31((bool)0);
	}

IL_0239:
	{
		// }
		return;
	}
}
// System.String OVR.AudioManager::Fmt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioManager_Fmt_m608A698D902716F4D97FCBA21144D1D5E7E73E68 (AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * __this, int32_t ___count0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F85A2723BB62FEF95DD6F8C5F0FF606EA62246A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ACAA4E0B28437F5FD1A41CE6591A16813F05377);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA87D266F5AAE1AF5998468D25833A8C6AD50D4FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	{
		// float t = count / (float)theAudioManager.maxSoundEmitters;
		int32_t L_0 = ___count0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_1 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_maxSoundEmitters_12();
		V_0 = ((float)((float)((float)((float)L_0))/(float)((float)((float)L_2))));
		// if ( t < 0.5f ) {
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) < ((float)(0.5f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// return "<color=green>" + count.ToString() + "</color>";
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___count0), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral7F85A2723BB62FEF95DD6F8C5F0FF606EA62246A, L_5, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_007b;
	}

IL_0036:
	{
		// } else if ( t < 0.7 ) {
		float L_7 = V_0;
		V_3 = (bool)((((double)((double)((double)L_7))) < ((double)(0.69999999999999996)))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		// return "<color=yellow>" + count.ToString() + "</color>";
		String_t* L_9;
		L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___count0), /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralA87D266F5AAE1AF5998468D25833A8C6AD50D4FD, L_9, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, /*hidden argument*/NULL);
		V_2 = L_10;
		goto IL_007b;
	}

IL_0061:
	{
		// return "<color=red>" + count.ToString() + "</color>";
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___count0), /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral8ACAA4E0B28437F5FD1A41CE6591A16813F05377, L_11, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, /*hidden argument*/NULL);
		V_2 = L_12;
		goto IL_007b;
	}

IL_007b:
	{
		// }
		String_t* L_13 = V_2;
		return L_13;
	}
}
// System.String OVR.AudioManager::FmtFree(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioManager_FmtFree_m11EE96968234055FA3C3EA6828B04F93EB3FBBD3 (AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * __this, int32_t ___count0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F85A2723BB62FEF95DD6F8C5F0FF606EA62246A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ACAA4E0B28437F5FD1A41CE6591A16813F05377);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA87D266F5AAE1AF5998468D25833A8C6AD50D4FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	{
		// float t = count / (float)theAudioManager.maxSoundEmitters;
		int32_t L_0 = ___count0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_1 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_maxSoundEmitters_12();
		V_0 = ((float)((float)((float)((float)L_0))/(float)((float)((float)L_2))));
		// if ( t < 0.2f ) {
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) < ((float)(0.200000003f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// return "<color=red>" + count.ToString() + "</color>";
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___count0), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral8ACAA4E0B28437F5FD1A41CE6591A16813F05377, L_5, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_007b;
	}

IL_0036:
	{
		// } else if ( t < 0.3 ) {
		float L_7 = V_0;
		V_3 = (bool)((((double)((double)((double)L_7))) < ((double)(0.29999999999999999)))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		// return "<color=yellow>" + count.ToString() + "</color>";
		String_t* L_9;
		L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___count0), /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralA87D266F5AAE1AF5998468D25833A8C6AD50D4FD, L_9, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, /*hidden argument*/NULL);
		V_2 = L_10;
		goto IL_007b;
	}

IL_0061:
	{
		// return "<color=green>" + count.ToString() + "</color>";
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___count0), /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral7F85A2723BB62FEF95DD6F8C5F0FF606EA62246A, L_11, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, /*hidden argument*/NULL);
		V_2 = L_12;
		goto IL_007b;
	}

IL_007b:
	{
		// }
		String_t* L_13 = V_2;
		return L_13;
	}
}
// System.Void OVR.AudioManager::OnPreSceneLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_OnPreSceneLoad_m9E89AEDEE92386CAEF6E748F5A467CF37113CA17 (AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9196A3F3826640BEF4A3CCDC1A55FD3ACB7382);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// Debug.Log( "[AudioManager] OnPreSceneLoad cleanup" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral6C9196A3F3826640BEF4A3CCDC1A55FD3ACB7382, /*hidden argument*/NULL);
		// for ( int i = 0; i < soundEmitters.Length; i++ ) {
		V_0 = 0;
		goto IL_003c;
	}

IL_0010:
	{
		// soundEmitters[i].Stop();
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_0 = __this->get_soundEmitters_25();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		SoundEmitter_Stop_m3300C33E8D6996E9EC28F0AC81D1702912AC6DE4(L_3, /*hidden argument*/NULL);
		// soundEmitters[i].ResetParent( soundEmitterParent.transform );
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_4 = __this->get_soundEmitters_25();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_soundEmitterParent_29();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		SoundEmitter_ResetParent_m2C67F84BAA510CC69AF6A6539C6D0D15870514EC(L_7, L_9, /*hidden argument*/NULL);
		// for ( int i = 0; i < soundEmitters.Length; i++ ) {
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_003c:
	{
		// for ( int i = 0; i < soundEmitters.Length; i++ ) {
		int32_t L_11 = V_0;
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_12 = __this->get_soundEmitters_25();
		NullCheck(L_12);
		V_1 = (bool)((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))? 1 : 0);
		bool L_13 = V_1;
		if (L_13)
		{
			goto IL_0010;
		}
	}
	{
		// ResetFreeEmitters();
		AudioManager_ResetFreeEmitters_m01BBBF5F1928ED3F771FA101F35BF971C899BC2F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVR.AudioManager::ResetFreeEmitters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_ResetFreeEmitters_m01BBBF5F1928ED3F771FA101F35BF971C899BC2F (AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastList_1_Add_m8212701FA2336834A69CC2EEC9760EFFDCA20662_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastList_1_Clear_mB9884C43EA47201708D11895E770C316BC151006_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// nextFreeEmitters.Clear();
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_0 = __this->get_nextFreeEmitters_27();
		NullCheck(L_0);
		FastList_1_Clear_mB9884C43EA47201708D11895E770C316BC151006(L_0, /*hidden argument*/FastList_1_Clear_mB9884C43EA47201708D11895E770C316BC151006_RuntimeMethod_var);
		// playingEmitters.Clear();
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_1 = __this->get_playingEmitters_26();
		NullCheck(L_1);
		FastList_1_Clear_mB9884C43EA47201708D11895E770C316BC151006(L_1, /*hidden argument*/FastList_1_Clear_mB9884C43EA47201708D11895E770C316BC151006_RuntimeMethod_var);
		// for ( int i = (int)EmitterChannel.Any; i < soundEmitters.Length; i++ ) {
		V_0 = 1;
		goto IL_0037;
	}

IL_001d:
	{
		// nextFreeEmitters.Add( soundEmitters[i] );
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_2 = __this->get_nextFreeEmitters_27();
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_3 = __this->get_soundEmitters_25();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		FastList_1_Add_m8212701FA2336834A69CC2EEC9760EFFDCA20662(L_2, L_6, /*hidden argument*/FastList_1_Add_m8212701FA2336834A69CC2EEC9760EFFDCA20662_RuntimeMethod_var);
		// for ( int i = (int)EmitterChannel.Any; i < soundEmitters.Length; i++ ) {
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0037:
	{
		// for ( int i = (int)EmitterChannel.Any; i < soundEmitters.Length; i++ ) {
		int32_t L_8 = V_0;
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_9 = __this->get_soundEmitters_25();
		NullCheck(L_9);
		V_1 = (bool)((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))? 1 : 0);
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_001d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void OVR.AudioManager::FadeOutSoundChannel(System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_FadeOutSoundChannel_mE129E51CF3D41D688BCE85962BA407E566CD8125 (int32_t ___channel0, float ___delaySecs1, float ___fadeTime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// theAudioManager.soundEmitters[channel].FadeOutDelayed( delaySecs, fadeTime );
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_0);
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_1 = L_0->get_soundEmitters_25();
		int32_t L_2 = ___channel0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		float L_5 = ___delaySecs1;
		float L_6 = ___fadeTime2;
		NullCheck(L_4);
		SoundEmitter_FadeOutDelayed_m7D19FF1D2850F9BEEFBBCB6379C6A2285457EBCB(L_4, L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean OVR.AudioManager::StopSound(System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioManager_StopSound_m9AA3F244C13AB2EFAC598103877CC1FB9F03D408 (int32_t ___idx0, bool ___fadeOut1, bool ___stopReserved2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if ( !stopReserved && ( idx == (int)EmitterChannel.Reserved ) ) {
		bool L_0 = ___stopReserved2;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___idx0;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_000b;
	}

IL_000a:
	{
		G_B3_0 = 0;
	}

IL_000b:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0054;
	}

IL_0014:
	{
		// if ( !fadeOut ) {
		bool L_3 = ___fadeOut1;
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// theAudioManager.soundEmitters[idx].Stop();
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_5 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_5);
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_6 = L_5->get_soundEmitters_25();
		int32_t L_7 = ___idx0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		SoundEmitter_Stop_m3300C33E8D6996E9EC28F0AC81D1702912AC6DE4(L_9, /*hidden argument*/NULL);
		goto IL_0050;
	}

IL_0032:
	{
		// theAudioManager.soundEmitters[idx].FadeOut( theAudioManager.soundFxFadeSecs );
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_10 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_10);
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_11 = L_10->get_soundEmitters_25();
		int32_t L_12 = ___idx0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_15 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_15);
		float L_16 = L_15->get_soundFxFadeSecs_14();
		NullCheck(L_14);
		SoundEmitter_FadeOut_m0EAF4076F66795DE7DFC4BC43CFAC4D744F017BF(L_14, L_16, /*hidden argument*/NULL);
	}

IL_0050:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		bool L_17 = V_1;
		return L_17;
	}
}
// System.Void OVR.AudioManager::FadeInSound(System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_FadeInSound_mD06F50F41895467400A460556BE9BB61F8BC3F53 (int32_t ___idx0, float ___fadeTime1, float ___volume2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// theAudioManager.soundEmitters[idx].FadeIn( fadeTime, volume );
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_0);
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_1 = L_0->get_soundEmitters_25();
		int32_t L_2 = ___idx0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		float L_5 = ___fadeTime1;
		float L_6 = ___volume2;
		NullCheck(L_4);
		SoundEmitter_FadeIn_mEE40EB91C25E3F9B538CB3B55A3FB8DDB90483ED(L_4, L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVR.AudioManager::FadeInSound(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_FadeInSound_mF250DC5FC4E01AB0BD4AC8781F4C3F63105A6FCB (int32_t ___idx0, float ___fadeTime1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// theAudioManager.soundEmitters[idx].FadeIn( fadeTime );
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_0);
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_1 = L_0->get_soundEmitters_25();
		int32_t L_2 = ___idx0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		float L_5 = ___fadeTime1;
		NullCheck(L_4);
		SoundEmitter_FadeIn_m3E1B411AA82B979BB00C54D289EAF7763C6D92A5(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVR.AudioManager::FadeOutSound(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_FadeOutSound_m998C3DD44F9B995A494D4C25D9D8D322378388CA (int32_t ___idx0, float ___fadeTime1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// theAudioManager.soundEmitters[idx].FadeOut( fadeTime );
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_0);
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_1 = L_0->get_soundEmitters_25();
		int32_t L_2 = ___idx0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		float L_5 = ___fadeTime1;
		NullCheck(L_4);
		SoundEmitter_FadeOut_m0EAF4076F66795DE7DFC4BC43CFAC4D744F017BF(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVR.AudioManager::StopAllSounds(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_StopAllSounds_m90A3AAA83C30F064F9737493925F52AC25AB91A7 (bool ___fadeOut0, bool ___stopReserved1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for ( int i = 0; i < theAudioManager.soundEmitters.Length; i++ ) {
		V_0 = 0;
		goto IL_0014;
	}

IL_0005:
	{
		// StopSound( i, fadeOut, stopReserved );
		int32_t L_0 = V_0;
		bool L_1 = ___fadeOut0;
		bool L_2 = ___stopReserved1;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = AudioManager_StopSound_m9AA3F244C13AB2EFAC598103877CC1FB9F03D408(L_0, L_1, L_2, /*hidden argument*/NULL);
		// for ( int i = 0; i < theAudioManager.soundEmitters.Length; i++ ) {
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0014:
	{
		// for ( int i = 0; i < theAudioManager.soundEmitters.Length; i++ ) {
		int32_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_6 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_6);
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_7 = L_6->get_soundEmitters_25();
		NullCheck(L_7);
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))? 1 : 0);
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void OVR.AudioManager::MuteAllSounds(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_MuteAllSounds_mEEF3A3FFC8C747FA239D0F94E2B3E5003149EEBF (AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * __this, bool ___mute0, bool ___muteReserved1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
		// for ( int i = 0; i < soundEmitters.Length; i++ ) {
		V_0 = 0;
		goto IL_0030;
	}

IL_0005:
	{
		// if ( !muteReserved && ( i == (int)EmitterChannel.Reserved ) ) {
		bool L_0 = ___muteReserved1;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = V_0;
		G_B4_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B4_0 = 0;
	}

IL_0010:
	{
		V_1 = (bool)G_B4_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// continue;
		goto IL_002c;
	}

IL_0017:
	{
		// soundEmitters[i].audioSource.mute = true;
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_3 = __this->get_soundEmitters_25();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = L_6->get_audioSource_7();
		NullCheck(L_7);
		AudioSource_set_mute_m69E2DFCF261D2D187ED756096B7E0DE622292C71(L_7, (bool)1, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// for ( int i = 0; i < soundEmitters.Length; i++ ) {
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0030:
	{
		// for ( int i = 0; i < soundEmitters.Length; i++ ) {
		int32_t L_9 = V_0;
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_10 = __this->get_soundEmitters_25();
		NullCheck(L_10);
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void OVR.AudioManager::UnMuteAllSounds(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_UnMuteAllSounds_m0B1AE4AA55A10AA4AA69A04FCB5608AE67FED23D (AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * __this, bool ___unmute0, bool ___unmuteReserved1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B4_0 = 0;
	{
		// for ( int i = 0; i < soundEmitters.Length; i++ ) {
		V_0 = 0;
		goto IL_0048;
	}

IL_0005:
	{
		// if ( !unmuteReserved && ( i == (int)EmitterChannel.Reserved ) ) {
		bool L_0 = ___unmuteReserved1;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = V_0;
		G_B4_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B4_0 = 0;
	}

IL_0010:
	{
		V_1 = (bool)G_B4_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// continue;
		goto IL_0044;
	}

IL_0017:
	{
		// if ( soundEmitters[i].audioSource.isPlaying ) {
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_3 = __this->get_soundEmitters_25();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = L_6->get_audioSource_7();
		NullCheck(L_7);
		bool L_8;
		L_8 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		// soundEmitters[i].audioSource.mute = false;
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_10 = __this->get_soundEmitters_25();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_14 = L_13->get_audioSource_7();
		NullCheck(L_14);
		AudioSource_set_mute_m69E2DFCF261D2D187ED756096B7E0DE622292C71(L_14, (bool)0, /*hidden argument*/NULL);
	}

IL_0043:
	{
	}

IL_0044:
	{
		// for ( int i = 0; i < soundEmitters.Length; i++ ) {
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0048:
	{
		// for ( int i = 0; i < soundEmitters.Length; i++ ) {
		int32_t L_16 = V_0;
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_17 = __this->get_soundEmitters_25();
		NullCheck(L_17);
		V_3 = (bool)((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))? 1 : 0);
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Single OVR.AudioManager::GetEmitterEndTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioManager_GetEmitterEndTime_m19FB7C3031443B9BBC0421A1821CC02EE61E8A27 (int32_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return theAudioManager.soundEmitters[idx].endPlayTime;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_0);
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_1 = L_0->get_soundEmitters_25();
		int32_t L_2 = ___idx0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		float L_5 = L_4->get_endPlayTime_10();
		V_0 = L_5;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		float L_6 = V_0;
		return L_6;
	}
}
// System.Single OVR.AudioManager::SetEmitterTime(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioManager_SetEmitterTime_mCB3E92B386178B46F8E7C8A829592514AA11971F (int32_t ___idx0, float ___time1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// return theAudioManager.soundEmitters[idx].time = time;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_0);
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_1 = L_0->get_soundEmitters_25();
		int32_t L_2 = ___idx0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		float L_5 = ___time1;
		float L_6 = L_5;
		V_0 = L_6;
		NullCheck(L_4);
		SoundEmitter_set_time_m8D4EC2119A92AFDB9F57929A2656C94BE643C47A(L_4, L_6, /*hidden argument*/NULL);
		float L_7 = V_0;
		V_1 = L_7;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		float L_8 = V_1;
		return L_8;
	}
}
// System.Int32 OVR.AudioManager::PlaySound(UnityEngine.AudioClip,System.Single,OVR.EmitterChannel,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioManager_PlaySound_m5E0E8F8F770A18652D6C20466BC4FDC1EE3F5B7F (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, float ___volume1, int32_t ___src2, float ___delay3, float ___pitchVariance4, bool ___loop5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	{
		// if ( !SoundEnabled ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AudioManager_get_SoundEnabled_m336299F404F149FBC18A3F84F169BDF644CD5ACF(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return -1;
		V_1 = (-1);
		goto IL_0040;
	}

IL_0012:
	{
		// return PlaySoundAt( ( staticListenerPosition != null ) ? staticListenerPosition.position : Vector3.zero, clip, volume, src, delay, pitchVariance, loop );
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_staticListenerPosition_30();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		G_B5_0 = L_4;
		goto IL_0030;
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_staticListenerPosition_30();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		G_B5_0 = L_6;
	}

IL_0030:
	{
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_7 = ___clip0;
		float L_8 = ___volume1;
		int32_t L_9 = ___src2;
		float L_10 = ___delay3;
		float L_11 = ___pitchVariance4;
		bool L_12 = ___loop5;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = AudioManager_PlaySoundAt_m09A5A4D7E7F435A5858C7C53816DE806DC8669BB(G_B5_0, L_7, L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		int32_t L_14 = V_1;
		return L_14;
	}
}
// System.Int32 OVR.AudioManager::FindFreeEmitter(OVR.EmitterChannel,OVR.SoundPriority)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioManager_FindFreeEmitter_mE7CBF89D34E5CE5F5F59CF3C10327F3C7150AF7D (int32_t ___src0, int32_t ___priority1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastList_1_Find_m5D30B12E866C3C0AC46B94484A91704CF9AFBB40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastList_1_RemoveAtFast_mD4EF9EEDE1A17BD46B8855DB261091A7D93D194D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastList_1_RemoveFast_m25971749BF3DF48D4DC340395051686D91C06298_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastList_1_get_Item_mC8254CC72AD0E9CC5833858EAF29EEFE3D794E2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_m1FDE84CCAA021945737527E8A5DCEE8E143EECDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t025E23E639B66BD976A09E0C4FC2D954D400A294_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundPriority_t850DD3C3DC2297827DAAC569120E947DAEF52888_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFindFreeEmitterU3Eb__77_1_mE9FBB4E42EC59A4C9032CDDAA0931D3A3DEB80A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass77_0_U3CFindFreeEmitterU3Eb__0_m9C07CC21D9B564DCFDA1B23F3BF292DBD6070EEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass77_0_t68997B623E8CD6034DDB01B6BCFAC1C37A7F5037_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18C38C34BA7EEDB564B1E3DCEA96238332D81112);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46B3229F259C14E354D1F381A2B0F2CCD14C905D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC56718EDB3E2AA5DA6956E16EB2CEB24925F9639);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDBCEA07DABFC6B25288D8288BBB351C426F5031);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE567A1C94B9074B06255EAAF2AA7ACFFDC194BBB);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass77_0_t68997B623E8CD6034DDB01B6BCFAC1C37A7F5037 * V_0 = NULL;
	SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	float V_11 = 0.0f;
	bool V_12 = false;
	Predicate_1_t025E23E639B66BD976A09E0C4FC2D954D400A294 * G_B12_0 = NULL;
	FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * G_B12_1 = NULL;
	Predicate_1_t025E23E639B66BD976A09E0C4FC2D954D400A294 * G_B11_0 = NULL;
	FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * G_B11_1 = NULL;
	{
		U3CU3Ec__DisplayClass77_0_t68997B623E8CD6034DDB01B6BCFAC1C37A7F5037 * L_0 = (U3CU3Ec__DisplayClass77_0_t68997B623E8CD6034DDB01B6BCFAC1C37A7F5037 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass77_0_t68997B623E8CD6034DDB01B6BCFAC1C37A7F5037_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass77_0__ctor_m6211C85CC9F733CCE647B1F5BF26018311925E64(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass77_0_t68997B623E8CD6034DDB01B6BCFAC1C37A7F5037 * L_1 = V_0;
		int32_t L_2 = ___priority1;
		NullCheck(L_1);
		L_1->set_priority_0(L_2);
		// SoundEmitter next = theAudioManager.soundEmitters[0];
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_3 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_3);
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_4 = L_3->get_soundEmitters_25();
		NullCheck(L_4);
		int32_t L_5 = 0;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		// if ( src == EmitterChannel.Any ) {
		int32_t L_7 = ___src0;
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)1))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0193;
		}
	}
	{
		// if ( theAudioManager.nextFreeEmitters.size > 0 ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_9 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_9);
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_10 = L_9->get_nextFreeEmitters_27();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_size_1();
		V_3 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		// next = theAudioManager.nextFreeEmitters[0];
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_13 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_13);
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_14 = L_13->get_nextFreeEmitters_27();
		NullCheck(L_14);
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_15;
		L_15 = FastList_1_get_Item_mC8254CC72AD0E9CC5833858EAF29EEFE3D794E2F(L_14, 0, /*hidden argument*/FastList_1_get_Item_mC8254CC72AD0E9CC5833858EAF29EEFE3D794E2F_RuntimeMethod_var);
		V_1 = L_15;
		// theAudioManager.nextFreeEmitters.RemoveAtFast( 0 );
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_16 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_16);
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_17 = L_16->get_nextFreeEmitters_27();
		NullCheck(L_17);
		FastList_1_RemoveAtFast_mD4EF9EEDE1A17BD46B8855DB261091A7D93D194D(L_17, 0, /*hidden argument*/FastList_1_RemoveAtFast_mD4EF9EEDE1A17BD46B8855DB261091A7D93D194D_RuntimeMethod_var);
		goto IL_0192;
	}

IL_0066:
	{
		// if ( priority == SoundPriority.VeryLow ) {
		U3CU3Ec__DisplayClass77_0_t68997B623E8CD6034DDB01B6BCFAC1C37A7F5037 * L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_priority_0();
		V_4 = (bool)((((int32_t)L_19) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_0080;
		}
	}
	{
		// return -1;
		V_5 = (-1);
		goto IL_01dc;
	}

IL_0080:
	{
		// next = theAudioManager.playingEmitters.Find( item => item != null && item.priority < priority );
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_21 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_21);
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_22 = L_21->get_playingEmitters_26();
		U3CU3Ec__DisplayClass77_0_t68997B623E8CD6034DDB01B6BCFAC1C37A7F5037 * L_23 = V_0;
		Predicate_1_t025E23E639B66BD976A09E0C4FC2D954D400A294 * L_24 = (Predicate_1_t025E23E639B66BD976A09E0C4FC2D954D400A294 *)il2cpp_codegen_object_new(Predicate_1_t025E23E639B66BD976A09E0C4FC2D954D400A294_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m1FDE84CCAA021945737527E8A5DCEE8E143EECDF(L_24, L_23, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass77_0_U3CFindFreeEmitterU3Eb__0_m9C07CC21D9B564DCFDA1B23F3BF292DBD6070EEB_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m1FDE84CCAA021945737527E8A5DCEE8E143EECDF_RuntimeMethod_var);
		NullCheck(L_22);
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_25;
		L_25 = FastList_1_Find_m5D30B12E866C3C0AC46B94484A91704CF9AFBB40(L_22, L_24, /*hidden argument*/FastList_1_Find_m5D30B12E866C3C0AC46B94484A91704CF9AFBB40_RuntimeMethod_var);
		V_1 = L_25;
		// if ( next == null ) {
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_26, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_27;
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_0129;
		}
	}
	{
		// if ( priority < SoundPriority.Default ) {
		U3CU3Ec__DisplayClass77_0_t68997B623E8CD6034DDB01B6BCFAC1C37A7F5037 * L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_priority_0();
		V_7 = (bool)((((int32_t)L_30) < ((int32_t)0))? 1 : 0);
		bool L_31 = V_7;
		if (!L_31)
		{
			goto IL_00f6;
		}
	}
	{
		// if ( theAudioManager.verboseLogging ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_32 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_32);
		bool L_33 = L_32->get_verboseLogging_11();
		V_8 = L_33;
		bool L_34 = V_8;
		if (!L_34)
		{
			goto IL_00ee;
		}
	}
	{
		// Debug.LogWarning( "[AudioManager] skipping sound " + priority );
		U3CU3Ec__DisplayClass77_0_t68997B623E8CD6034DDB01B6BCFAC1C37A7F5037 * L_35 = V_0;
		NullCheck(L_35);
		int32_t* L_36 = L_35->get_address_of_priority_0();
		RuntimeObject * L_37 = Box(SoundPriority_t850DD3C3DC2297827DAAC569120E947DAEF52888_il2cpp_TypeInfo_var, L_36);
		NullCheck(L_37);
		String_t* L_38;
		L_38 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_37);
		*L_36 = *(int32_t*)UnBox(L_37);
		String_t* L_39;
		L_39 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE567A1C94B9074B06255EAAF2AA7ACFFDC194BBB, L_38, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_39, /*hidden argument*/NULL);
	}

IL_00ee:
	{
		// return -1;
		V_5 = (-1);
		goto IL_01dc;
	}

IL_00f6:
	{
		// next = theAudioManager.playingEmitters.Find( item => item != null && item.priority <= SoundPriority.Default ); ;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_40 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_40);
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_41 = L_40->get_playingEmitters_26();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7_il2cpp_TypeInfo_var);
		Predicate_1_t025E23E639B66BD976A09E0C4FC2D954D400A294 * L_42 = ((U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7_il2cpp_TypeInfo_var))->get_U3CU3E9__77_1_1();
		Predicate_1_t025E23E639B66BD976A09E0C4FC2D954D400A294 * L_43 = L_42;
		G_B11_0 = L_43;
		G_B11_1 = L_41;
		if (L_43)
		{
			G_B12_0 = L_43;
			G_B12_1 = L_41;
			goto IL_0120;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7_il2cpp_TypeInfo_var);
		U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7 * L_44 = ((U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Predicate_1_t025E23E639B66BD976A09E0C4FC2D954D400A294 * L_45 = (Predicate_1_t025E23E639B66BD976A09E0C4FC2D954D400A294 *)il2cpp_codegen_object_new(Predicate_1_t025E23E639B66BD976A09E0C4FC2D954D400A294_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m1FDE84CCAA021945737527E8A5DCEE8E143EECDF(L_45, L_44, (intptr_t)((intptr_t)U3CU3Ec_U3CFindFreeEmitterU3Eb__77_1_mE9FBB4E42EC59A4C9032CDDAA0931D3A3DEB80A6_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m1FDE84CCAA021945737527E8A5DCEE8E143EECDF_RuntimeMethod_var);
		Predicate_1_t025E23E639B66BD976A09E0C4FC2D954D400A294 * L_46 = L_45;
		((U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7_il2cpp_TypeInfo_var))->set_U3CU3E9__77_1_1(L_46);
		G_B12_0 = L_46;
		G_B12_1 = G_B11_1;
	}

IL_0120:
	{
		NullCheck(G_B12_1);
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_47;
		L_47 = FastList_1_Find_m5D30B12E866C3C0AC46B94484A91704CF9AFBB40(G_B12_1, G_B12_0, /*hidden argument*/FastList_1_Find_m5D30B12E866C3C0AC46B94484A91704CF9AFBB40_RuntimeMethod_var);
		V_1 = L_47;
	}

IL_0129:
	{
		// if ( next != null ) {
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_48 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_48, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_9 = L_49;
		bool L_50 = V_9;
		if (!L_50)
		{
			goto IL_0190;
		}
	}
	{
		// if ( theAudioManager.verboseLogging ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_51 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_51);
		bool L_52 = L_51->get_verboseLogging_11();
		V_10 = L_52;
		bool L_53 = V_10;
		if (!L_53)
		{
			goto IL_0177;
		}
	}
	{
		// Debug.LogWarning( "[AudioManager] cannabalizing " + next.originalIdx + " Time: " + Time.time );
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_54 = V_1;
		NullCheck(L_54);
		int32_t* L_55 = L_54->get_address_of_originalIdx_14();
		String_t* L_56;
		L_56 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_55, /*hidden argument*/NULL);
		float L_57;
		L_57 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		V_11 = L_57;
		String_t* L_58;
		L_58 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_11), /*hidden argument*/NULL);
		String_t* L_59;
		L_59 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralC56718EDB3E2AA5DA6956E16EB2CEB24925F9639, L_56, _stringLiteral46B3229F259C14E354D1F381A2B0F2CCD14C905D, L_58, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_59, /*hidden argument*/NULL);
	}

IL_0177:
	{
		// next.Stop();
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_60 = V_1;
		NullCheck(L_60);
		SoundEmitter_Stop_m3300C33E8D6996E9EC28F0AC81D1702912AC6DE4(L_60, /*hidden argument*/NULL);
		// theAudioManager.playingEmitters.RemoveFast( next );
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_61 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_61);
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_62 = L_61->get_playingEmitters_26();
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_63 = V_1;
		NullCheck(L_62);
		bool L_64;
		L_64 = FastList_1_RemoveFast_m25971749BF3DF48D4DC340395051686D91C06298(L_62, L_63, /*hidden argument*/FastList_1_RemoveFast_m25971749BF3DF48D4DC340395051686D91C06298_RuntimeMethod_var);
	}

IL_0190:
	{
	}

IL_0192:
	{
	}

IL_0193:
	{
		// if ( next == null ) {
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_65 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_66;
		L_66 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_65, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_12 = L_66;
		bool L_67 = V_12;
		if (!L_67)
		{
			goto IL_01d2;
		}
	}
	{
		// Debug.LogError( "[AudioManager] ERROR - absolutely couldn't find a free emitter! Priority = " + priority + " TOO MANY PlaySound* calls!" );
		U3CU3Ec__DisplayClass77_0_t68997B623E8CD6034DDB01B6BCFAC1C37A7F5037 * L_68 = V_0;
		NullCheck(L_68);
		int32_t* L_69 = L_68->get_address_of_priority_0();
		RuntimeObject * L_70 = Box(SoundPriority_t850DD3C3DC2297827DAAC569120E947DAEF52888_il2cpp_TypeInfo_var, L_69);
		NullCheck(L_70);
		String_t* L_71;
		L_71 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_70);
		*L_69 = *(int32_t*)UnBox(L_70);
		String_t* L_72;
		L_72 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralCDBCEA07DABFC6B25288D8288BBB351C426F5031, L_71, _stringLiteral18C38C34BA7EEDB564B1E3DCEA96238332D81112, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_72, /*hidden argument*/NULL);
		// showPlayingEmitterCount = true;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->set_showPlayingEmitterCount_31((bool)1);
		// return -1;
		V_5 = (-1);
		goto IL_01dc;
	}

IL_01d2:
	{
		// return next.originalIdx;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_73 = V_1;
		NullCheck(L_73);
		int32_t L_74 = L_73->get_originalIdx_14();
		V_5 = L_74;
		goto IL_01dc;
	}

IL_01dc:
	{
		// }
		int32_t L_75 = V_5;
		return L_75;
	}
}
// System.Int32 OVR.AudioManager::PlaySound(OVR.SoundFX,OVR.EmitterChannel,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioManager_PlaySound_mB659F2F2065BDFC643B6565D92DAFBB0773C3671 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * ___soundFX0, int32_t ___src1, float ___delay2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	{
		// if ( !SoundEnabled ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AudioManager_get_SoundEnabled_m336299F404F149FBC18A3F84F169BDF644CD5ACF(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return -1;
		V_1 = (-1);
		goto IL_0045;
	}

IL_0012:
	{
		// return PlaySoundAt( ( staticListenerPosition != null ) ? staticListenerPosition.position : Vector3.zero, soundFX, src, delay );
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_staticListenerPosition_30();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		G_B5_0 = L_4;
		goto IL_0030;
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_staticListenerPosition_30();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		G_B5_0 = L_6;
	}

IL_0030:
	{
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_7 = ___soundFX0;
		int32_t L_8 = ___src1;
		float L_9 = ___delay2;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = AudioManager_PlaySoundAt_mD3834EBA87274C016A6855AEDB5400FD7FD4AA63(G_B5_0, L_7, L_8, L_9, (1.0f), (1.0f), /*hidden argument*/NULL);
		V_1 = L_10;
		goto IL_0045;
	}

IL_0045:
	{
		// }
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.Int32 OVR.AudioManager::PlaySoundAt(UnityEngine.Vector3,OVR.SoundFX,OVR.EmitterChannel,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioManager_PlaySoundAt_mD3834EBA87274C016A6855AEDB5400FD7FD4AA63 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * ___soundFX1, int32_t ___src2, float ___delay3, float ___volumeOverride4, float ___pitchMultiplier5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastList_1_AddUnique_m42950E2B26235B3ACEFC2E1431D2F566FFA9A39D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B8F07884D1AD3D7A32921269A7BEF7DCEC083B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E1A73C9AF59513216526CE861448DAE293EF6CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60F53D5C88E08FA67B2ABA19ABEE4BFDD0B44CB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral925EA72B29D6BF699F98EEEE87E0E8BA9BE96D3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDACAB8E155817AB3960B789D40F9BA076C12A7DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB27459F4D29B8C7D0C2162F8206C553EB68F7DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8221FB3621B9061ACA2C186AD8E11B23FC06460);
		s_Il2CppMethodInitialized = true;
	}
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * V_0 = NULL;
	int32_t V_1 = 0;
	SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * V_2 = NULL;
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * V_3 = NULL;
	ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	float V_9 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	float V_20 = 0.0f;
	bool V_21 = false;
	ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * G_B24_0 = NULL;
	ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * G_B22_0 = NULL;
	ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * G_B23_0 = NULL;
	int32_t G_B25_0 = 0;
	ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * G_B25_1 = NULL;
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * G_B27_0 = NULL;
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * G_B26_0 = NULL;
	float G_B28_0 = 0.0f;
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * G_B28_1 = NULL;
	{
		// if ( !SoundEnabled ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AudioManager_get_SoundEnabled_m336299F404F149FBC18A3F84F169BDF644CD5ACF(/*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_5;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return -1;
		V_6 = (-1);
		goto IL_042d;
	}

IL_0018:
	{
		// AudioClip clip = soundFX.GetClip();
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_2 = ___soundFX1;
		NullCheck(L_2);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_3;
		L_3 = SoundFX_GetClip_m0CDE7570629E9E61B1471DC1A2CBE6F2159D498D(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if ( clip == null ) {
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_5;
		bool L_6 = V_7;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// return -1;
		V_6 = (-1);
		goto IL_042d;
	}

IL_0035:
	{
		// if ( staticListenerPosition != null ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_staticListenerPosition_30();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_8 = L_8;
		bool L_9 = V_8;
		if (!L_9)
		{
			goto IL_0099;
		}
	}
	{
		// float distFromListener = ( staticListenerPosition.position - position ).sqrMagnitude;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_staticListenerPosition_30();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___position0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_11, L_12, /*hidden argument*/NULL);
		V_10 = L_13;
		float L_14;
		L_14 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_10), /*hidden argument*/NULL);
		V_9 = L_14;
		// if ( distFromListener > theAudioManager.audioMaxFallOffDistanceSqr ) {
		float L_15 = V_9;
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_16 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_16);
		float L_17 = L_16->get_audioMaxFallOffDistanceSqr_24();
		V_11 = (bool)((((float)L_15) > ((float)L_17))? 1 : 0);
		bool L_18 = V_11;
		if (!L_18)
		{
			goto IL_007f;
		}
	}
	{
		// return -1;
		V_6 = (-1);
		goto IL_042d;
	}

IL_007f:
	{
		// if ( distFromListener > soundFX.MaxFalloffDistSquared ) {
		float L_19 = V_9;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_20 = ___soundFX1;
		NullCheck(L_20);
		float L_21;
		L_21 = SoundFX_get_MaxFalloffDistSquared_m8134461B3B7CDDE5D5D767F32E4EFB64A1567AE1(L_20, /*hidden argument*/NULL);
		V_12 = (bool)((((float)L_19) > ((float)L_21))? 1 : 0);
		bool L_22 = V_12;
		if (!L_22)
		{
			goto IL_0098;
		}
	}
	{
		// return -1;
		V_6 = (-1);
		goto IL_042d;
	}

IL_0098:
	{
	}

IL_0099:
	{
		// if ( soundFX.ReachedGroupPlayLimit() ) {
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_23 = ___soundFX1;
		NullCheck(L_23);
		bool L_24;
		L_24 = SoundFX_ReachedGroupPlayLimit_m530866F47FE81D2506E631CFCEC060513FF00897(L_23, /*hidden argument*/NULL);
		V_13 = L_24;
		bool L_25 = V_13;
		if (!L_25)
		{
			goto IL_00db;
		}
	}
	{
		// if ( theAudioManager.verboseLogging ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_26 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_26);
		bool L_27 = L_26->get_verboseLogging_11();
		V_14 = L_27;
		bool L_28 = V_14;
		if (!L_28)
		{
			goto IL_00d3;
		}
	}
	{
		// Debug.Log( "[AudioManager] PlaySoundAt() with " + soundFX.name + " skipped due to group play limit" );
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_29 = ___soundFX1;
		NullCheck(L_29);
		String_t* L_30 = L_29->get_name_0();
		String_t* L_31;
		L_31 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralF8221FB3621B9061ACA2C186AD8E11B23FC06460, L_30, _stringLiteral4E1A73C9AF59513216526CE861448DAE293EF6CE, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_31, /*hidden argument*/NULL);
	}

IL_00d3:
	{
		// return -1;
		V_6 = (-1);
		goto IL_042d;
	}

IL_00db:
	{
		// int idx = FindFreeEmitter( src, soundFX.priority );
		int32_t L_32 = ___src2;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_33 = ___soundFX1;
		NullCheck(L_33);
		int32_t L_34 = L_33->get_priority_10();
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		int32_t L_35;
		L_35 = AudioManager_FindFreeEmitter_mE7CBF89D34E5CE5F5F59CF3C10327F3C7150AF7D(L_32, L_34, /*hidden argument*/NULL);
		V_1 = L_35;
		// if ( idx == -1 ) {
		int32_t L_36 = V_1;
		V_15 = (bool)((((int32_t)L_36) == ((int32_t)(-1)))? 1 : 0);
		bool L_37 = V_15;
		if (!L_37)
		{
			goto IL_00fb;
		}
	}
	{
		// return -1;
		V_6 = (-1);
		goto IL_042d;
	}

IL_00fb:
	{
		// SoundEmitter emitter = theAudioManager.soundEmitters[idx];
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_38 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_38);
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_39 = L_38->get_soundEmitters_25();
		int32_t L_40 = V_1;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_2 = L_42;
		// emitter.ResetParent( soundEmitterParent.transform );
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_43 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_soundEmitterParent_29();
		NullCheck(L_44);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		SoundEmitter_ResetParent_m2C67F84BAA510CC69AF6A6539C6D0D15870514EC(L_43, L_45, /*hidden argument*/NULL);
		// emitter.gameObject.SetActive( true );
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_46 = V_2;
		NullCheck(L_46);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47;
		L_47 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_47, (bool)1, /*hidden argument*/NULL);
		// AudioSource audioSource = emitter.audioSource;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_48 = V_2;
		NullCheck(L_48);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_49 = L_48->get_audioSource_7();
		V_3 = L_49;
		// ONSPAudioSource osp = emitter.osp;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_50 = V_2;
		NullCheck(L_50);
		ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * L_51 = L_50->get_osp_9();
		V_4 = L_51;
		// audioSource.enabled = true;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_52 = V_3;
		NullCheck(L_52);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_52, (bool)1, /*hidden argument*/NULL);
		// audioSource.volume = Mathf.Clamp01( Mathf.Clamp01( theAudioManager.volumeSoundFX * soundFX.volume ) * volumeOverride * soundFX.GroupVolumeOverride );
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_53 = V_3;
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_54 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_54);
		float L_55 = L_54->get_volumeSoundFX_13();
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_56 = ___soundFX1;
		NullCheck(L_56);
		float L_57 = L_56->get_volume_2();
		float L_58;
		L_58 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)il2cpp_codegen_multiply((float)L_55, (float)L_57)), /*hidden argument*/NULL);
		float L_59 = ___volumeOverride4;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_60 = ___soundFX1;
		NullCheck(L_60);
		float L_61;
		L_61 = SoundFX_get_GroupVolumeOverride_mA783F03EAC28566B620DB8FCE3FD9F74012E25EB(L_60, /*hidden argument*/NULL);
		float L_62;
		L_62 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_58, (float)L_59)), (float)L_61)), /*hidden argument*/NULL);
		NullCheck(L_53);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_53, L_62, /*hidden argument*/NULL);
		// audioSource.pitch = soundFX.GetPitch() * pitchMultiplier;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_63 = V_3;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_64 = ___soundFX1;
		NullCheck(L_64);
		float L_65;
		L_65 = SoundFX_GetPitch_mE0A71164B687F9546D4BE2EA5581D1B139438926(L_64, /*hidden argument*/NULL);
		float L_66 = ___pitchMultiplier5;
		NullCheck(L_63);
		AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC(L_63, ((float)il2cpp_codegen_multiply((float)L_65, (float)L_66)), /*hidden argument*/NULL);
		// audioSource.time = 0.0f;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_67 = V_3;
		NullCheck(L_67);
		AudioSource_set_time_mE8F36DDE8E610126F9733D13F299C13F71BCE690(L_67, (0.0f), /*hidden argument*/NULL);
		// audioSource.spatialBlend = 1.0f;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_68 = V_3;
		NullCheck(L_68);
		AudioSource_set_spatialBlend_m7DD3DA6F68BA6710EDB2EE8482F876D16F9A9BEC(L_68, (1.0f), /*hidden argument*/NULL);
		// audioSource.rolloffMode = soundFX.falloffCurve;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_69 = V_3;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_70 = ___soundFX1;
		NullCheck(L_70);
		int32_t L_71 = L_70->get_falloffCurve_5();
		NullCheck(L_69);
		AudioSource_set_rolloffMode_mCEE552C06C70A8E4E64500C5792AD67D33782B4A(L_69, L_71, /*hidden argument*/NULL);
		// if ( soundFX.falloffCurve == AudioRolloffMode.Custom ) {
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_72 = ___soundFX1;
		NullCheck(L_72);
		int32_t L_73 = L_72->get_falloffCurve_5();
		V_16 = (bool)((((int32_t)L_73) == ((int32_t)2))? 1 : 0);
		bool L_74 = V_16;
		if (!L_74)
		{
			goto IL_01bd;
		}
	}
	{
		// audioSource.SetCustomCurve( AudioSourceCurveType.CustomRolloff, soundFX.volumeFalloffCurve );
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_75 = V_3;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_76 = ___soundFX1;
		NullCheck(L_76);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_77 = L_76->get_volumeFalloffCurve_6();
		NullCheck(L_75);
		AudioSource_SetCustomCurve_m7F9FDB65C9A26D7491E041600157340A09552D56(L_75, 0, L_77, /*hidden argument*/NULL);
	}

IL_01bd:
	{
		// audioSource.SetCustomCurve( AudioSourceCurveType.ReverbZoneMix, soundFX.reverbZoneMix );
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_78 = V_3;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_79 = ___soundFX1;
		NullCheck(L_79);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_80 = L_79->get_reverbZoneMix_7();
		NullCheck(L_78);
		AudioSource_SetCustomCurve_m7F9FDB65C9A26D7491E041600157340A09552D56(L_78, 2, L_80, /*hidden argument*/NULL);
		// audioSource.dopplerLevel = 0;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_81 = V_3;
		NullCheck(L_81);
		AudioSource_set_dopplerLevel_m3E3187EA638992BE0A7AF9D660DAB1B0D088C2A0(L_81, (0.0f), /*hidden argument*/NULL);
		// audioSource.clip = clip;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_82 = V_3;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_83 = V_0;
		NullCheck(L_82);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_82, L_83, /*hidden argument*/NULL);
		// audioSource.spread = soundFX.spread;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_84 = V_3;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_85 = ___soundFX1;
		NullCheck(L_85);
		float L_86 = L_85->get_spread_8();
		NullCheck(L_84);
		AudioSource_set_spread_m933BAB5C1122A350F18490CA208257F2ECAC5887(L_84, L_86, /*hidden argument*/NULL);
		// audioSource.loop = soundFX.looping;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_87 = V_3;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_88 = ___soundFX1;
		NullCheck(L_88);
		bool L_89 = L_88->get_looping_12();
		NullCheck(L_87);
		AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0(L_87, L_89, /*hidden argument*/NULL);
		// audioSource.mute = false;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_90 = V_3;
		NullCheck(L_90);
		AudioSource_set_mute_m69E2DFCF261D2D187ED756096B7E0DE622292C71(L_90, (bool)0, /*hidden argument*/NULL);
		// audioSource.minDistance = soundFX.falloffDistance.x;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_91 = V_3;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_92 = ___soundFX1;
		NullCheck(L_92);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_93 = L_92->get_address_of_falloffDistance_4();
		float L_94 = L_93->get_x_0();
		NullCheck(L_91);
		AudioSource_set_minDistance_m9C1D3410330B09EACA69C64BF634018D71180F91(L_91, L_94, /*hidden argument*/NULL);
		// audioSource.maxDistance = soundFX.falloffDistance.y;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_95 = V_3;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_96 = ___soundFX1;
		NullCheck(L_96);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_97 = L_96->get_address_of_falloffDistance_4();
		float L_98 = L_97->get_y_1();
		NullCheck(L_95);
		AudioSource_set_maxDistance_m8AF5831BC0B2D070B2D4E1B54CB27082240A5EA8(L_95, L_98, /*hidden argument*/NULL);
		// audioSource.outputAudioMixerGroup = soundFX.GetMixerGroup( AudioManager.EmitterGroup );
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_99 = V_3;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_100 = ___soundFX1;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * L_101;
		L_101 = AudioManager_get_EmitterGroup_mE5C568AFEFB85C193AF097373F2F45A00397B3BA(/*hidden argument*/NULL);
		NullCheck(L_100);
		AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * L_102;
		L_102 = SoundFX_GetMixerGroup_m302072EBEFAEE2C1721C91C42424E86755FD2031(L_100, L_101, /*hidden argument*/NULL);
		NullCheck(L_99);
		AudioSource_set_outputAudioMixerGroup_mE63B2B8C7E3F4E8C670E2474D1F22F9864DB71C8(L_99, L_102, /*hidden argument*/NULL);
		// emitter.endPlayTime = Time.time + clip.length + delay;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_103 = V_2;
		float L_104;
		L_104 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_105 = V_0;
		NullCheck(L_105);
		float L_106;
		L_106 = AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4(L_105, /*hidden argument*/NULL);
		float L_107 = ___delay3;
		NullCheck(L_103);
		L_103->set_endPlayTime_10(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_104, (float)L_106)), (float)L_107)));
		// emitter.defaultVolume = audioSource.volume;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_108 = V_2;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_109 = V_3;
		NullCheck(L_109);
		float L_110;
		L_110 = AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556(L_109, /*hidden argument*/NULL);
		NullCheck(L_108);
		L_108->set_defaultVolume_12(L_110);
		// emitter.priority = soundFX.priority;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_111 = V_2;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_112 = ___soundFX1;
		NullCheck(L_112);
		int32_t L_113 = L_112->get_priority_10();
		NullCheck(L_111);
		L_111->set_priority_8(L_113);
		// emitter.onFinished = null;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_114 = V_2;
		NullCheck(L_114);
		L_114->set_onFinished_15((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL);
		// emitter.SetPlayingSoundGroup( soundFX.Group );
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_115 = V_2;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_116 = ___soundFX1;
		NullCheck(L_116);
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_117;
		L_117 = SoundFX_get_Group_mA26D40F7F76EC4223BBEEA3EB31E2E1651360F57(L_116, /*hidden argument*/NULL);
		NullCheck(L_115);
		SoundEmitter_SetPlayingSoundGroup_mE25F8571D797ED9DCBB3C1564DE40F2115FAFFA0(L_115, L_117, /*hidden argument*/NULL);
		// if ( src == EmitterChannel.Any ) {
		int32_t L_118 = ___src2;
		V_17 = (bool)((((int32_t)L_118) == ((int32_t)1))? 1 : 0);
		bool L_119 = V_17;
		if (!L_119)
		{
			goto IL_0294;
		}
	}
	{
		// theAudioManager.playingEmitters.AddUnique( emitter );
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_120 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_120);
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_121 = L_120->get_playingEmitters_26();
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_122 = V_2;
		NullCheck(L_121);
		FastList_1_AddUnique_m42950E2B26235B3ACEFC2E1431D2F566FFA9A39D(L_121, L_122, /*hidden argument*/FastList_1_AddUnique_m42950E2B26235B3ACEFC2E1431D2F566FFA9A39D_RuntimeMethod_var);
	}

IL_0294:
	{
		// if ( osp != null ) {
		ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * L_123 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_124;
		L_124 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_123, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_18 = L_124;
		bool L_125 = V_18;
		if (!L_125)
		{
			goto IL_035f;
		}
	}
	{
		// osp.EnableSpatialization = soundFX.ospProps.enableSpatialization;
		ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * L_126 = V_4;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_127 = ___soundFX1;
		NullCheck(L_127);
		OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B * L_128 = L_127->get_ospProps_13();
		NullCheck(L_128);
		bool L_129 = L_128->get_enableSpatialization_0();
		NullCheck(L_126);
		ONSPAudioSource_set_EnableSpatialization_m3BE0DD812263ADEC22135EC39114FE032EBB0984(L_126, L_129, /*hidden argument*/NULL);
		// osp.EnableRfl = theAudioManager.enableSpatializedFastOverride || soundFX.ospProps.useFastOverride ? true : false;
		ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * L_130 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_131 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_131);
		bool L_132 = L_131->get_enableSpatializedFastOverride_6();
		G_B22_0 = L_130;
		if (L_132)
		{
			G_B24_0 = L_130;
			goto IL_02d7;
		}
	}
	{
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_133 = ___soundFX1;
		NullCheck(L_133);
		OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B * L_134 = L_133->get_ospProps_13();
		NullCheck(L_134);
		bool L_135 = L_134->get_useFastOverride_1();
		G_B23_0 = G_B22_0;
		if (L_135)
		{
			G_B24_0 = G_B22_0;
			goto IL_02d7;
		}
	}
	{
		G_B25_0 = 0;
		G_B25_1 = G_B23_0;
		goto IL_02d8;
	}

IL_02d7:
	{
		G_B25_0 = 1;
		G_B25_1 = G_B24_0;
	}

IL_02d8:
	{
		NullCheck(G_B25_1);
		ONSPAudioSource_set_EnableRfl_mBE34FE6E52C0A6F191B90AA91554D9C88A2BF6D6(G_B25_1, (bool)G_B25_0, /*hidden argument*/NULL);
		// osp.Gain = soundFX.ospProps.gain;
		ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * L_136 = V_4;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_137 = ___soundFX1;
		NullCheck(L_137);
		OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B * L_138 = L_137->get_ospProps_13();
		NullCheck(L_138);
		float L_139 = L_138->get_gain_2();
		NullCheck(L_136);
		ONSPAudioSource_set_Gain_m24D214F42DE72722C2EC011EF326C9AEE6AC7B71(L_136, L_139, /*hidden argument*/NULL);
		// osp.UseInvSqr = soundFX.ospProps.enableInvSquare;
		ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * L_140 = V_4;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_141 = ___soundFX1;
		NullCheck(L_141);
		OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B * L_142 = L_141->get_ospProps_13();
		NullCheck(L_142);
		bool L_143 = L_142->get_enableInvSquare_3();
		NullCheck(L_140);
		ONSPAudioSource_set_UseInvSqr_m5A566429E42138EE68B676322EF5066307B5BC2E(L_140, L_143, /*hidden argument*/NULL);
		// osp.Near = soundFX.ospProps.invSquareFalloff.x;
		ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * L_144 = V_4;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_145 = ___soundFX1;
		NullCheck(L_145);
		OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B * L_146 = L_145->get_ospProps_13();
		NullCheck(L_146);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_147 = L_146->get_address_of_invSquareFalloff_5();
		float L_148 = L_147->get_x_0();
		NullCheck(L_144);
		ONSPAudioSource_set_Near_mD702B9A6C5679CCE5A31657F12DF3CC9E007D1E5(L_144, L_148, /*hidden argument*/NULL);
		// osp.Far  = soundFX.ospProps.invSquareFalloff.y;
		ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * L_149 = V_4;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_150 = ___soundFX1;
		NullCheck(L_150);
		OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B * L_151 = L_150->get_ospProps_13();
		NullCheck(L_151);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_152 = L_151->get_address_of_invSquareFalloff_5();
		float L_153 = L_152->get_y_1();
		NullCheck(L_149);
		ONSPAudioSource_set_Far_mB2EAED9718ABD8B126AE3F89A5944F660961A471(L_149, L_153, /*hidden argument*/NULL);
		// audioSource.spatialBlend = (soundFX.ospProps.enableSpatialization) ? 1.0f : 0.8f;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_154 = V_3;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_155 = ___soundFX1;
		NullCheck(L_155);
		OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B * L_156 = L_155->get_ospProps_13();
		NullCheck(L_156);
		bool L_157 = L_156->get_enableSpatialization_0();
		G_B26_0 = L_154;
		if (L_157)
		{
			G_B27_0 = L_154;
			goto IL_0349;
		}
	}
	{
		G_B28_0 = (0.800000012f);
		G_B28_1 = G_B26_0;
		goto IL_034e;
	}

IL_0349:
	{
		G_B28_0 = (1.0f);
		G_B28_1 = G_B27_0;
	}

IL_034e:
	{
		NullCheck(G_B28_1);
		AudioSource_set_spatialBlend_m7DD3DA6F68BA6710EDB2EE8482F876D16F9A9BEC(G_B28_1, G_B28_0, /*hidden argument*/NULL);
		// osp.SetParameters(ref audioSource);
		ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * L_158 = V_4;
		NullCheck(L_158);
		ONSPAudioSource_SetParameters_m9D75AB3ABA60F5FD4DFC48A5C7ACFCFB4EF7A78E(L_158, (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B **)(&V_3), /*hidden argument*/NULL);
	}

IL_035f:
	{
		// audioSource.transform.position = position;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_159 = V_3;
		NullCheck(L_159);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_160;
		L_160 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_159, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_161 = ___position0;
		NullCheck(L_160);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_160, L_161, /*hidden argument*/NULL);
		// if ( theAudioManager.verboseLogging ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_162 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_162);
		bool L_163 = L_162->get_verboseLogging_11();
		V_19 = L_163;
		bool L_164 = V_19;
		if (!L_164)
		{
			goto IL_0405;
		}
	}
	{
		// Debug.Log( "[AudioManager] PlaySoundAt() channel = " + idx + " soundFX = " + soundFX.name + " volume = " + emitter.volume + " Delay = " + delay + " time = " + Time.time + "\n" );
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_165 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_166 = L_165;
		NullCheck(L_166);
		ArrayElementTypeCheck (L_166, _stringLiteralDB27459F4D29B8C7D0C2162F8206C553EB68F7DD);
		(L_166)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDB27459F4D29B8C7D0C2162F8206C553EB68F7DD);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_167 = L_166;
		String_t* L_168;
		L_168 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_167);
		ArrayElementTypeCheck (L_167, L_168);
		(L_167)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_168);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_169 = L_167;
		NullCheck(L_169);
		ArrayElementTypeCheck (L_169, _stringLiteral3B8F07884D1AD3D7A32921269A7BEF7DCEC083B6);
		(L_169)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3B8F07884D1AD3D7A32921269A7BEF7DCEC083B6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_170 = L_169;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_171 = ___soundFX1;
		NullCheck(L_171);
		String_t* L_172 = L_171->get_name_0();
		NullCheck(L_170);
		ArrayElementTypeCheck (L_170, L_172);
		(L_170)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_172);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_173 = L_170;
		NullCheck(L_173);
		ArrayElementTypeCheck (L_173, _stringLiteral60F53D5C88E08FA67B2ABA19ABEE4BFDD0B44CB5);
		(L_173)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral60F53D5C88E08FA67B2ABA19ABEE4BFDD0B44CB5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_174 = L_173;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_175 = V_2;
		NullCheck(L_175);
		float L_176;
		L_176 = SoundEmitter_get_volume_mA23181A33F14B9C289E1B8C390AC5C8B3EC26761(L_175, /*hidden argument*/NULL);
		V_20 = L_176;
		String_t* L_177;
		L_177 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_20), /*hidden argument*/NULL);
		NullCheck(L_174);
		ArrayElementTypeCheck (L_174, L_177);
		(L_174)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_177);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_178 = L_174;
		NullCheck(L_178);
		ArrayElementTypeCheck (L_178, _stringLiteral925EA72B29D6BF699F98EEEE87E0E8BA9BE96D3B);
		(L_178)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral925EA72B29D6BF699F98EEEE87E0E8BA9BE96D3B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_179 = L_178;
		String_t* L_180;
		L_180 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&___delay3), /*hidden argument*/NULL);
		NullCheck(L_179);
		ArrayElementTypeCheck (L_179, L_180);
		(L_179)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_180);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_181 = L_179;
		NullCheck(L_181);
		ArrayElementTypeCheck (L_181, _stringLiteralDACAB8E155817AB3960B789D40F9BA076C12A7DE);
		(L_181)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralDACAB8E155817AB3960B789D40F9BA076C12A7DE);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_182 = L_181;
		float L_183;
		L_183 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		V_20 = L_183;
		String_t* L_184;
		L_184 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_20), /*hidden argument*/NULL);
		NullCheck(L_182);
		ArrayElementTypeCheck (L_182, L_184);
		(L_182)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_184);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_185 = L_182;
		NullCheck(L_185);
		ArrayElementTypeCheck (L_185, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		String_t* L_186;
		L_186 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_185, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_186, /*hidden argument*/NULL);
	}

IL_0405:
	{
		// if ( delay > 0f ) {
		float L_187 = ___delay3;
		V_21 = (bool)((((float)L_187) > ((float)(0.0f)))? 1 : 0);
		bool L_188 = V_21;
		if (!L_188)
		{
			goto IL_041f;
		}
	}
	{
		// audioSource.PlayDelayed( delay );
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_189 = V_3;
		float L_190 = ___delay3;
		NullCheck(L_189);
		AudioSource_PlayDelayed_m9C6234595614E2F4A8035CB4D501E83A8C793DD4(L_189, L_190, /*hidden argument*/NULL);
		goto IL_0428;
	}

IL_041f:
	{
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_191 = V_3;
		NullCheck(L_191);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_191, /*hidden argument*/NULL);
	}

IL_0428:
	{
		// return idx;
		int32_t L_192 = V_1;
		V_6 = L_192;
		goto IL_042d;
	}

IL_042d:
	{
		// }
		int32_t L_193 = V_6;
		return L_193;
	}
}
// System.Int32 OVR.AudioManager::PlayRandomSoundAt(UnityEngine.Vector3,UnityEngine.AudioClip[],System.Single,OVR.EmitterChannel,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioManager_PlayRandomSoundAt_mA62EC9206DDCD80A316F0B78E9EE84DFFE978DCA (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___clips1, float ___volume2, int32_t ___src3, float ___delay4, float ___pitch5, bool ___loop6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		// if ( ( clips == null ) || ( clips.Length == 0 ) ) {
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_0 = ___clips1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_1 = ___clips1;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return -1;
		V_2 = (-1);
		goto IL_0033;
	}

IL_0015:
	{
		// int idx = Random.Range( 0, clips.Length );
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_3 = ___clips1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), /*hidden argument*/NULL);
		V_0 = L_4;
		// return PlaySoundAt( position, clips[idx], volume, src, delay, pitch, loop );
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___position0;
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_6 = ___clips1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = ___volume2;
		int32_t L_11 = ___src3;
		float L_12 = ___delay4;
		float L_13 = ___pitch5;
		bool L_14 = ___loop6;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = AudioManager_PlaySoundAt_m09A5A4D7E7F435A5858C7C53816DE806DC8669BB(L_5, L_9, L_10, L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		goto IL_0033;
	}

IL_0033:
	{
		// }
		int32_t L_16 = V_2;
		return L_16;
	}
}
// System.Int32 OVR.AudioManager::PlaySoundAt(UnityEngine.Vector3,UnityEngine.AudioClip,System.Single,OVR.EmitterChannel,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioManager_PlaySoundAt_m09A5A4D7E7F435A5858C7C53816DE806DC8669BB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip1, float ___volume2, int32_t ___src3, float ___delay4, float ___pitch5, bool ___loop6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastList_1_AddUnique_m42950E2B26235B3ACEFC2E1431D2F566FFA9A39D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60F53D5C88E08FA67B2ABA19ABEE4BFDD0B44CB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral925EA72B29D6BF699F98EEEE87E0E8BA9BE96D3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDACAB8E155817AB3960B789D40F9BA076C12A7DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB27459F4D29B8C7D0C2162F8206C553EB68F7DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1D1667616EC3665E0B644D2825CFE550F6D62AE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * V_1 = NULL;
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * V_2 = NULL;
	ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	float V_14 = 0.0f;
	bool V_15 = false;
	{
		// if ( !SoundEnabled ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AudioManager_get_SoundEnabled_m336299F404F149FBC18A3F84F169BDF644CD5ACF(/*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return -1;
		V_5 = (-1);
		goto IL_02ad;
	}

IL_0018:
	{
		// if ( clip == null ) {
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = ___clip1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_3;
		bool L_4 = V_6;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// return -1;
		V_5 = (-1);
		goto IL_02ad;
	}

IL_002e:
	{
		// if ( staticListenerPosition != null ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_staticListenerPosition_30();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_6;
		bool L_7 = V_7;
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		// if ( ( staticListenerPosition.position - position ).sqrMagnitude > theAudioManager.audioMaxFallOffDistanceSqr ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_staticListenerPosition_30();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___position0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_9, L_10, /*hidden argument*/NULL);
		V_9 = L_11;
		float L_12;
		L_12 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_9), /*hidden argument*/NULL);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_13 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_13);
		float L_14 = L_13->get_audioMaxFallOffDistanceSqr_24();
		V_8 = (bool)((((float)L_12) > ((float)L_14))? 1 : 0);
		bool L_15 = V_8;
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		// return -1;
		V_5 = (-1);
		goto IL_02ad;
	}

IL_0074:
	{
	}

IL_0075:
	{
		// int idx = FindFreeEmitter( src, 0 );
		int32_t L_16 = ___src3;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = AudioManager_FindFreeEmitter_mE7CBF89D34E5CE5F5F59CF3C10327F3C7150AF7D(L_16, 0, /*hidden argument*/NULL);
		V_0 = L_17;
		// if ( idx == -1 ) {
		int32_t L_18 = V_0;
		V_10 = (bool)((((int32_t)L_18) == ((int32_t)(-1)))? 1 : 0);
		bool L_19 = V_10;
		if (!L_19)
		{
			goto IL_0090;
		}
	}
	{
		// return -1;
		V_5 = (-1);
		goto IL_02ad;
	}

IL_0090:
	{
		// SoundEmitter emitter = theAudioManager.soundEmitters[idx];
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_20 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_20);
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_21 = L_20->get_soundEmitters_25();
		int32_t L_22 = V_0;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_1 = L_24;
		// emitter.ResetParent( soundEmitterParent.transform );
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_25 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_soundEmitterParent_29();
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		SoundEmitter_ResetParent_m2C67F84BAA510CC69AF6A6539C6D0D15870514EC(L_25, L_27, /*hidden argument*/NULL);
		// emitter.gameObject.SetActive( true );
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_28 = V_1;
		NullCheck(L_28);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_29, (bool)1, /*hidden argument*/NULL);
		// AudioSource audioSource = emitter.audioSource;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_30 = V_1;
		NullCheck(L_30);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_31 = L_30->get_audioSource_7();
		V_2 = L_31;
		// ONSPAudioSource osp = emitter.osp;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_32 = V_1;
		NullCheck(L_32);
		ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * L_33 = L_32->get_osp_9();
		V_3 = L_33;
		// audioSource.enabled = true;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_34 = V_2;
		NullCheck(L_34);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_34, (bool)1, /*hidden argument*/NULL);
		// audioSource.volume = Mathf.Clamp01( theAudioManager.volumeSoundFX * volume );
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_35 = V_2;
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_36 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_36);
		float L_37 = L_36->get_volumeSoundFX_13();
		float L_38 = ___volume2;
		float L_39;
		L_39 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)il2cpp_codegen_multiply((float)L_37, (float)L_38)), /*hidden argument*/NULL);
		NullCheck(L_35);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_35, L_39, /*hidden argument*/NULL);
		// audioSource.pitch = pitch;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_40 = V_2;
		float L_41 = ___pitch5;
		NullCheck(L_40);
		AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC(L_40, L_41, /*hidden argument*/NULL);
		// audioSource.spatialBlend = 0.8f;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_42 = V_2;
		NullCheck(L_42);
		AudioSource_set_spatialBlend_m7DD3DA6F68BA6710EDB2EE8482F876D16F9A9BEC(L_42, (0.800000012f), /*hidden argument*/NULL);
		// audioSource.rolloffMode = AudioRolloffMode.Linear;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_43 = V_2;
		NullCheck(L_43);
		AudioSource_set_rolloffMode_mCEE552C06C70A8E4E64500C5792AD67D33782B4A(L_43, 1, /*hidden argument*/NULL);
		// audioSource.SetCustomCurve( AudioSourceCurveType.ReverbZoneMix, defaultReverbZoneMix );
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_44 = V_2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_45 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_defaultReverbZoneMix_34();
		NullCheck(L_44);
		AudioSource_SetCustomCurve_m7F9FDB65C9A26D7491E041600157340A09552D56(L_44, 2, L_45, /*hidden argument*/NULL);
		// audioSource.dopplerLevel = 0.0f;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_46 = V_2;
		NullCheck(L_46);
		AudioSource_set_dopplerLevel_m3E3187EA638992BE0A7AF9D660DAB1B0D088C2A0(L_46, (0.0f), /*hidden argument*/NULL);
		// audioSource.clip = clip;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_47 = V_2;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_48 = ___clip1;
		NullCheck(L_47);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_47, L_48, /*hidden argument*/NULL);
		// audioSource.spread = 0.0f;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_49 = V_2;
		NullCheck(L_49);
		AudioSource_set_spread_m933BAB5C1122A350F18490CA208257F2ECAC5887(L_49, (0.0f), /*hidden argument*/NULL);
		// audioSource.loop = loop;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_50 = V_2;
		bool L_51 = ___loop6;
		NullCheck(L_50);
		AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0(L_50, L_51, /*hidden argument*/NULL);
		// audioSource.mute = false;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_52 = V_2;
		NullCheck(L_52);
		AudioSource_set_mute_m69E2DFCF261D2D187ED756096B7E0DE622292C71(L_52, (bool)0, /*hidden argument*/NULL);
		// audioSource.minDistance = theAudioManager.audioMinFallOffDistance;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_53 = V_2;
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_54 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_54);
		float L_55 = L_54->get_audioMinFallOffDistance_15();
		NullCheck(L_53);
		AudioSource_set_minDistance_m9C1D3410330B09EACA69C64BF634018D71180F91(L_53, L_55, /*hidden argument*/NULL);
		// audioSource.maxDistance = theAudioManager.audioMaxFallOffDistance;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_56 = V_2;
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_57 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_57);
		float L_58 = L_57->get_audioMaxFallOffDistance_16();
		NullCheck(L_56);
		AudioSource_set_maxDistance_m8AF5831BC0B2D070B2D4E1B54CB27082240A5EA8(L_56, L_58, /*hidden argument*/NULL);
		// audioSource.outputAudioMixerGroup = AudioManager.EmitterGroup;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_59 = V_2;
		AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * L_60;
		L_60 = AudioManager_get_EmitterGroup_mE5C568AFEFB85C193AF097373F2F45A00397B3BA(/*hidden argument*/NULL);
		NullCheck(L_59);
		AudioSource_set_outputAudioMixerGroup_mE63B2B8C7E3F4E8C670E2474D1F22F9864DB71C8(L_59, L_60, /*hidden argument*/NULL);
		// emitter.endPlayTime = Time.time + clip.length + delay;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_61 = V_1;
		float L_62;
		L_62 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_63 = ___clip1;
		NullCheck(L_63);
		float L_64;
		L_64 = AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4(L_63, /*hidden argument*/NULL);
		float L_65 = ___delay4;
		NullCheck(L_61);
		L_61->set_endPlayTime_10(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_62, (float)L_64)), (float)L_65)));
		// emitter.defaultVolume = audioSource.volume;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_66 = V_1;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_67 = V_2;
		NullCheck(L_67);
		float L_68;
		L_68 = AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556(L_67, /*hidden argument*/NULL);
		NullCheck(L_66);
		L_66->set_defaultVolume_12(L_68);
		// emitter.priority = 0;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_69 = V_1;
		NullCheck(L_69);
		L_69->set_priority_8(0);
		// emitter.onFinished = null;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_70 = V_1;
		NullCheck(L_70);
		L_70->set_onFinished_15((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL);
		// emitter.SetPlayingSoundGroup( null );
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_71 = V_1;
		NullCheck(L_71);
		SoundEmitter_SetPlayingSoundGroup_mE25F8571D797ED9DCBB3C1564DE40F2115FAFFA0(L_71, (SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F *)NULL, /*hidden argument*/NULL);
		// if ( src == EmitterChannel.Any ) {
		int32_t L_72 = ___src3;
		V_11 = (bool)((((int32_t)L_72) == ((int32_t)1))? 1 : 0);
		bool L_73 = V_11;
		if (!L_73)
		{
			goto IL_01c6;
		}
	}
	{
		// theAudioManager.playingEmitters.AddUnique( emitter );
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_74 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_74);
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_75 = L_74->get_playingEmitters_26();
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_76 = V_1;
		NullCheck(L_75);
		FastList_1_AddUnique_m42950E2B26235B3ACEFC2E1431D2F566FFA9A39D(L_75, L_76, /*hidden argument*/FastList_1_AddUnique_m42950E2B26235B3ACEFC2E1431D2F566FFA9A39D_RuntimeMethod_var);
	}

IL_01c6:
	{
		// if ( osp != null ) {
		ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * L_77 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_78;
		L_78 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_77, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_12 = L_78;
		bool L_79 = V_12;
		if (!L_79)
		{
			goto IL_01dd;
		}
	}
	{
		// osp.EnableSpatialization = false;
		ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * L_80 = V_3;
		NullCheck(L_80);
		ONSPAudioSource_set_EnableSpatialization_m3BE0DD812263ADEC22135EC39114FE032EBB0984(L_80, (bool)0, /*hidden argument*/NULL);
	}

IL_01dd:
	{
		// audioSource.transform.position = position;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_81 = V_2;
		NullCheck(L_81);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_82;
		L_82 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_81, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83 = ___position0;
		NullCheck(L_82);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_82, L_83, /*hidden argument*/NULL);
		// if ( theAudioManager.verboseLogging ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_84 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_84);
		bool L_85 = L_84->get_verboseLogging_11();
		V_13 = L_85;
		bool L_86 = V_13;
		if (!L_86)
		{
			goto IL_0283;
		}
	}
	{
		// Debug.Log( "[AudioManager] PlaySoundAt() channel = " + idx + " clip = " + clip.name + " volume = " + emitter.volume + " Delay = " + delay + " time = " + Time.time + "\n" );
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_87 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_88 = L_87;
		NullCheck(L_88);
		ArrayElementTypeCheck (L_88, _stringLiteralDB27459F4D29B8C7D0C2162F8206C553EB68F7DD);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDB27459F4D29B8C7D0C2162F8206C553EB68F7DD);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_89 = L_88;
		String_t* L_90;
		L_90 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, L_90);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_90);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_91 = L_89;
		NullCheck(L_91);
		ArrayElementTypeCheck (L_91, _stringLiteralF1D1667616EC3665E0B644D2825CFE550F6D62AE);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralF1D1667616EC3665E0B644D2825CFE550F6D62AE);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_92 = L_91;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_93 = ___clip1;
		NullCheck(L_93);
		String_t* L_94;
		L_94 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_93, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_94);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_94);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_95 = L_92;
		NullCheck(L_95);
		ArrayElementTypeCheck (L_95, _stringLiteral60F53D5C88E08FA67B2ABA19ABEE4BFDD0B44CB5);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral60F53D5C88E08FA67B2ABA19ABEE4BFDD0B44CB5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_96 = L_95;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_97 = V_1;
		NullCheck(L_97);
		float L_98;
		L_98 = SoundEmitter_get_volume_mA23181A33F14B9C289E1B8C390AC5C8B3EC26761(L_97, /*hidden argument*/NULL);
		V_14 = L_98;
		String_t* L_99;
		L_99 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_14), /*hidden argument*/NULL);
		NullCheck(L_96);
		ArrayElementTypeCheck (L_96, L_99);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_99);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_100 = L_96;
		NullCheck(L_100);
		ArrayElementTypeCheck (L_100, _stringLiteral925EA72B29D6BF699F98EEEE87E0E8BA9BE96D3B);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral925EA72B29D6BF699F98EEEE87E0E8BA9BE96D3B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_101 = L_100;
		String_t* L_102;
		L_102 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&___delay4), /*hidden argument*/NULL);
		NullCheck(L_101);
		ArrayElementTypeCheck (L_101, L_102);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_102);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_103 = L_101;
		NullCheck(L_103);
		ArrayElementTypeCheck (L_103, _stringLiteralDACAB8E155817AB3960B789D40F9BA076C12A7DE);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralDACAB8E155817AB3960B789D40F9BA076C12A7DE);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_104 = L_103;
		float L_105;
		L_105 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		V_14 = L_105;
		String_t* L_106;
		L_106 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_14), /*hidden argument*/NULL);
		NullCheck(L_104);
		ArrayElementTypeCheck (L_104, L_106);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_106);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_107 = L_104;
		NullCheck(L_107);
		ArrayElementTypeCheck (L_107, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		String_t* L_108;
		L_108 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_107, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_108, /*hidden argument*/NULL);
	}

IL_0283:
	{
		// if ( delay > 0f ) {
		float L_109 = ___delay4;
		V_15 = (bool)((((float)L_109) > ((float)(0.0f)))? 1 : 0);
		bool L_110 = V_15;
		if (!L_110)
		{
			goto IL_029f;
		}
	}
	{
		// audioSource.PlayDelayed( delay );
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_111 = V_2;
		float L_112 = ___delay4;
		NullCheck(L_111);
		AudioSource_PlayDelayed_m9C6234595614E2F4A8035CB4D501E83A8C793DD4(L_111, L_112, /*hidden argument*/NULL);
		goto IL_02a8;
	}

IL_029f:
	{
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_113 = V_2;
		NullCheck(L_113);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_113, /*hidden argument*/NULL);
	}

IL_02a8:
	{
		// return idx;
		int32_t L_114 = V_0;
		V_5 = L_114;
		goto IL_02ad;
	}

IL_02ad:
	{
		// }
		int32_t L_115 = V_5;
		return L_115;
	}
}
// System.Void OVR.AudioManager::SetOnFinished(System.Int32,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_SetOnFinished_m678B02CAA0A2AE535FC6A2E874A1B741F6C2CAFF (int32_t ___emitterIdx0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onFinished1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if ( ValidateEmitterIndex(emitterIdx) ) {
		int32_t L_0 = ___emitterIdx0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AudioManager_ValidateEmitterIndex_m63B1F23EEA30970C9370B3F920228E05025392D7(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// theAudioManager.soundEmitters[emitterIdx].SetOnFinished( onFinished );
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_3 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_3);
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_4 = L_3->get_soundEmitters_25();
		int32_t L_5 = ___emitterIdx0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ___onFinished1;
		NullCheck(L_7);
		SoundEmitter_SetOnFinished_m3A0FAFB78D8980EE76E1DAFB4F0DB40DDD40F499(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void OVR.AudioManager::SetOnFinished(System.Int32,System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_SetOnFinished_m6150FC91E300F4F7B41FF76B6F84ECEB8063C7AA (int32_t ___emitterIdx0, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___onFinished1, RuntimeObject * ___obj2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if ( ValidateEmitterIndex(emitterIdx) ) {
		int32_t L_0 = ___emitterIdx0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AudioManager_ValidateEmitterIndex_m63B1F23EEA30970C9370B3F920228E05025392D7(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// theAudioManager.soundEmitters[emitterIdx].SetOnFinished( onFinished, obj );
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_3 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_3);
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_4 = L_3->get_soundEmitters_25();
		int32_t L_5 = ___emitterIdx0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_8 = ___onFinished1;
		RuntimeObject * L_9 = ___obj2;
		NullCheck(L_7);
		SoundEmitter_SetOnFinished_m86026FD45DF5511C081B1B4C06120C8711A096EC(L_7, L_8, L_9, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void OVR.AudioManager::AttachSoundToParent(System.Int32,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_AttachSoundToParent_m07D102FAF95E8725855EA155C15FD0205E13253A (int32_t ___idx0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8239DDE7DBC91495DACC42B52FAF15E9C617D4D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA24CD6F07982144E7F00F59BB120516FE9F2C82);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	{
		// if ( theAudioManager.verboseLogging ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_0);
		bool L_1 = L_0->get_verboseLogging_11();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_005e;
		}
	}
	{
		// string parentName = parent.name;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ___parent1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if ( parent.parent != null ) {
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ___parent1;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		// parentName = parent.parent.name + "/" + parentName;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = ___parent1;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_10, /*hidden argument*/NULL);
		String_t* L_12 = V_1;
		String_t* L_13;
		L_13 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_11, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
	}

IL_0040:
	{
		// Debug.Log( "[AudioManager] ATTACHING INDEX " + idx + " to " + parentName );
		String_t* L_14;
		L_14 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___idx0), /*hidden argument*/NULL);
		String_t* L_15 = V_1;
		String_t* L_16;
		L_16 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralCA24CD6F07982144E7F00F59BB120516FE9F2C82, L_14, _stringLiteral8239DDE7DBC91495DACC42B52FAF15E9C617D4D7, L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_16, /*hidden argument*/NULL);
	}

IL_005e:
	{
		// theAudioManager.soundEmitters[idx].ParentTo( parent );
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_17 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_17);
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_18 = L_17->get_soundEmitters_25();
		int32_t L_19 = ___idx0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = ___parent1;
		NullCheck(L_21);
		SoundEmitter_ParentTo_m6575F83E7227B5AAEC0D5223D9BE84195CED629D(L_21, L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVR.AudioManager::DetachSoundFromParent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_DetachSoundFromParent_mAF74222C9F0DF11B688E754179F2014ED06E935D (int32_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF98F596BF2E383FF7CB4C8AD43AAFAD8DAD3FE45);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if ( theAudioManager.verboseLogging ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_0);
		bool L_1 = L_0->get_verboseLogging_11();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// Debug.Log( "[AudioManager] DETACHING INDEX " + idx );
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___idx0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralF98F596BF2E383FF7CB4C8AD43AAFAD8DAD3FE45, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// theAudioManager.soundEmitters[idx].DetachFromParent();
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_5 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_5);
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_6 = L_5->get_soundEmitters_25();
		int32_t L_7 = ___idx0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		SoundEmitter_DetachFromParent_m49C7265BD79A6E8D21A455D2B98665A4F8C18EFD(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVR.AudioManager::DetachSoundsFromParent(OVR.SoundEmitter[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_DetachSoundsFromParent_m61F8908294BFE6EED27E036658A831A976579476 (SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* ___emitters0, bool ___stopSounds1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* V_1 = NULL;
	int32_t V_2 = 0;
	SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// if ( emitters == null ) {
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_0 = ___emitters0;
		V_0 = (bool)((((RuntimeObject*)(SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		goto IL_006f;
	}

IL_000c:
	{
		// foreach ( SoundEmitter emitter in emitters ) {
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_2 = ___emitters0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0069;
	}

IL_0013:
	{
		// foreach ( SoundEmitter emitter in emitters ) {
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		// if ( emitter.defaultParent != null ) {
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_7 = V_3;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = L_7->get_defaultParent_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_9;
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		// if ( stopSounds ) {
		bool L_11 = ___stopSounds1;
		V_5 = L_11;
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_003b;
		}
	}
	{
		// emitter.Stop();
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_13 = V_3;
		NullCheck(L_13);
		SoundEmitter_Stop_m3300C33E8D6996E9EC28F0AC81D1702912AC6DE4(L_13, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// emitter.DetachFromParent();
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_14 = V_3;
		NullCheck(L_14);
		SoundEmitter_DetachFromParent_m49C7265BD79A6E8D21A455D2B98665A4F8C18EFD(L_14, /*hidden argument*/NULL);
		// emitter.gameObject.SetActive( true );
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_15 = V_3;
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)1, /*hidden argument*/NULL);
		goto IL_0064;
	}

IL_0052:
	{
		// if ( stopSounds ) {
		bool L_17 = ___stopSounds1;
		V_6 = L_17;
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0063;
		}
	}
	{
		// emitter.Stop();
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_19 = V_3;
		NullCheck(L_19);
		SoundEmitter_Stop_m3300C33E8D6996E9EC28F0AC81D1702912AC6DE4(L_19, /*hidden argument*/NULL);
	}

IL_0063:
	{
	}

IL_0064:
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0069:
	{
		// foreach ( SoundEmitter emitter in emitters ) {
		int32_t L_21 = V_2;
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_0013;
		}
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void OVR.AudioManager::SetEmitterMixerGroup(System.Int32,UnityEngine.Audio.AudioMixerGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_SetEmitterMixerGroup_mD80729A26A59E446254889CC253BCAC023E26CB9 (int32_t ___idx0, AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * ___mixerGroup1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if ( ( theAudioManager != null ) && ( idx > -1 ) ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___idx0;
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)(-1)))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// theAudioManager.soundEmitters[idx].SetAudioMixer( mixerGroup );
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_4 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_4);
		SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8* L_5 = L_4->get_soundEmitters_25();
		int32_t L_6 = ___idx0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * L_9 = ___mixerGroup1;
		NullCheck(L_8);
		SoundEmitter_SetAudioMixer_m289797EF1E40281C57E7ED5CA96DA428EFBF5972(L_8, L_9, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// OVR.MixerSnapshot OVR.AudioManager::GetActiveSnapshot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 * AudioManager_GetActiveSnapshot_mB35948DE137D505095A06D61ACC2766C853C2283 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 * V_0 = NULL;
	MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 * G_B3_0 = NULL;
	{
		// return ( theAudioManager != null ) ? theAudioManager.currentSnapshot : null;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 *)(NULL));
		goto IL_001b;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_2 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_2);
		MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 * L_3 = L_2->get_currentSnapshot_28();
		G_B3_0 = L_3;
	}

IL_001b:
	{
		V_0 = G_B3_0;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 * L_4 = V_0;
		return L_4;
	}
}
// System.Void OVR.AudioManager::SetCurrentSnapshot(OVR.MixerSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_SetCurrentSnapshot_m14A2280B562EBAE847E9F6E9DB1A16DEE8A589D3 (MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 * ___mixerSnapshot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// if ( theAudioManager != null ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		// if ( ( mixerSnapshot != null ) && ( mixerSnapshot.snapshot != null ) ) {
		MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 * L_3 = ___mixerSnapshot0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 * L_4 = ___mixerSnapshot0;
		NullCheck(L_4);
		AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 * L_5 = L_4->get_snapshot_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 0;
	}

IL_0023:
	{
		V_1 = (bool)G_B4_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		// mixerSnapshot.snapshot.TransitionTo( mixerSnapshot.transitionTime );
		MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 * L_8 = ___mixerSnapshot0;
		NullCheck(L_8);
		AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 * L_9 = L_8->get_snapshot_0();
		MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 * L_10 = ___mixerSnapshot0;
		NullCheck(L_10);
		float L_11 = L_10->get_transitionTime_1();
		NullCheck(L_9);
		AudioMixerSnapshot_TransitionTo_mB44DB7A66A7E5A9B589E8F16095D84D2F9778925(L_9, L_11, /*hidden argument*/NULL);
		goto IL_0042;
	}

IL_003d:
	{
		// mixerSnapshot = null;
		___mixerSnapshot0 = (MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 *)NULL;
	}

IL_0042:
	{
		// theAudioManager.currentSnapshot = mixerSnapshot;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_12 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 * L_13 = ___mixerSnapshot0;
		NullCheck(L_12);
		L_12->set_currentSnapshot_28(L_13);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void OVR.AudioManager::BlendWithCurrentSnapshot(OVR.MixerSnapshot,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_BlendWithCurrentSnapshot_m5E1A32BD78FCC5EDB96C5368DB46AE20EE7ED240 (MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 * ___blendSnapshot0, float ___weight1, float ___blendTime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioMixerSnapshotU5BU5D_tED32A17D57452B751009DA3AD9CE85B9FB7CEBDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB35ACD812B4FF262FD7B2E564F68FA95CC961E97);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	AudioMixerSnapshotU5BU5D_tED32A17D57452B751009DA3AD9CE85B9FB7CEBDA* V_6 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_7 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// if ( theAudioManager != null ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_0 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0119;
		}
	}
	{
		// if ( theAudioManager.audioMixer == null ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_3 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_3);
		AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * L_4 = L_3->get_audioMixer_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		// Debug.LogWarning( "[AudioManager] can't call BlendWithCurrentSnapshot if the audio mixer is not set!" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralB35ACD812B4FF262FD7B2E564F68FA95CC961E97, /*hidden argument*/NULL);
		// return;
		goto IL_0119;
	}

IL_0039:
	{
		// if ( blendTime == 0.0f ) {
		float L_7 = ___blendTime2;
		V_2 = (bool)((((float)L_7) == ((float)(0.0f)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		// blendTime = Time.deltaTime;
		float L_9;
		L_9 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		___blendTime2 = L_9;
	}

IL_004e:
	{
		// if ( ( theAudioManager.currentSnapshot != null ) && (theAudioManager.currentSnapshot.snapshot != null ) ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_10 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_10);
		MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 * L_11 = L_10->get_currentSnapshot_28();
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_12 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_12);
		MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 * L_13 = L_12->get_currentSnapshot_28();
		NullCheck(L_13);
		AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 * L_14 = L_13->get_snapshot_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_15));
		goto IL_0072;
	}

IL_0071:
	{
		G_B8_0 = 0;
	}

IL_0072:
	{
		V_3 = (bool)G_B8_0;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0118;
		}
	}
	{
		// if ( ( blendSnapshot != null ) && ( blendSnapshot.snapshot != null ) ) {
		MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 * L_17 = ___blendSnapshot0;
		if (!L_17)
		{
			goto IL_008b;
		}
	}
	{
		MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 * L_18 = ___blendSnapshot0;
		NullCheck(L_18);
		AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 * L_19 = L_18->get_snapshot_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_19, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_20));
		goto IL_008c;
	}

IL_008b:
	{
		G_B12_0 = 0;
	}

IL_008c:
	{
		V_4 = (bool)G_B12_0;
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0117;
		}
	}
	{
		// weight = Mathf.Clamp01( weight );
		float L_22 = ___weight1;
		float L_23;
		L_23 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_22, /*hidden argument*/NULL);
		___weight1 = L_23;
		// if ( weight == 0.0f ) {
		float L_24 = ___weight1;
		V_5 = (bool)((((float)L_24) == ((float)(0.0f)))? 1 : 0);
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		// theAudioManager.currentSnapshot.snapshot.TransitionTo( blendTime );
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_26 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_26);
		MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 * L_27 = L_26->get_currentSnapshot_28();
		NullCheck(L_27);
		AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 * L_28 = L_27->get_snapshot_0();
		float L_29 = ___blendTime2;
		NullCheck(L_28);
		AudioMixerSnapshot_TransitionTo_mB44DB7A66A7E5A9B589E8F16095D84D2F9778925(L_28, L_29, /*hidden argument*/NULL);
		goto IL_0116;
	}

IL_00c6:
	{
		// AudioMixerSnapshot[] snapshots = new AudioMixerSnapshot[] { theAudioManager.currentSnapshot.snapshot, blendSnapshot.snapshot };
		AudioMixerSnapshotU5BU5D_tED32A17D57452B751009DA3AD9CE85B9FB7CEBDA* L_30 = (AudioMixerSnapshotU5BU5D_tED32A17D57452B751009DA3AD9CE85B9FB7CEBDA*)(AudioMixerSnapshotU5BU5D_tED32A17D57452B751009DA3AD9CE85B9FB7CEBDA*)SZArrayNew(AudioMixerSnapshotU5BU5D_tED32A17D57452B751009DA3AD9CE85B9FB7CEBDA_il2cpp_TypeInfo_var, (uint32_t)2);
		AudioMixerSnapshotU5BU5D_tED32A17D57452B751009DA3AD9CE85B9FB7CEBDA* L_31 = L_30;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_32 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_32);
		MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 * L_33 = L_32->get_currentSnapshot_28();
		NullCheck(L_33);
		AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 * L_34 = L_33->get_snapshot_0();
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 *)L_34);
		AudioMixerSnapshotU5BU5D_tED32A17D57452B751009DA3AD9CE85B9FB7CEBDA* L_35 = L_31;
		MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 * L_36 = ___blendSnapshot0;
		NullCheck(L_36);
		AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 * L_37 = L_36->get_snapshot_0();
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(1), (AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 *)L_37);
		V_6 = L_35;
		// float[] weights = new float[] { 1.0f - weight, weight };
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_38 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_39 = L_38;
		float L_40 = ___weight1;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_40)));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_41 = L_39;
		float L_42 = ___weight1;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_42);
		V_7 = L_41;
		// theAudioManager.audioMixer.TransitionToSnapshots( snapshots, weights, blendTime );
		AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * L_43 = ((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->get_theAudioManager_19();
		NullCheck(L_43);
		AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * L_44 = L_43->get_audioMixer_7();
		AudioMixerSnapshotU5BU5D_tED32A17D57452B751009DA3AD9CE85B9FB7CEBDA* L_45 = V_6;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_46 = V_7;
		float L_47 = ___blendTime2;
		NullCheck(L_44);
		AudioMixer_TransitionToSnapshots_m8C1AAA0E968610F19B608DAB3292453E0E8DDF3E(L_44, L_45, L_46, L_47, /*hidden argument*/NULL);
	}

IL_0116:
	{
	}

IL_0117:
	{
	}

IL_0118:
	{
	}

IL_0119:
	{
		// }
		return;
	}
}
// System.Void OVR.AudioManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager__ctor_m2D42F87F988320EEEDADC832ED8801F58E0A4F52 (AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastList_1__ctor_mA19607DA9ACD62B6C752E2ED87782A3F460D10F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool                            makePersistent = true;                            // true = don't destroy on load
		__this->set_makePersistent_4((bool)1);
		// public bool                            enableSpatializedAudio = true;                  // true = enable spatialized audio
		__this->set_enableSpatializedAudio_5((bool)1);
		// public bool                         enableSpatializedFastOverride = false;          // true = disable spatialized reflections override
		__this->set_enableSpatializedFastOverride_6((bool)0);
		// public AudioMixer                   audioMixer = null;
		__this->set_audioMixer_7((AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 *)NULL);
		// public AudioMixerGroup                defaultMixerGroup = null;
		__this->set_defaultMixerGroup_8((AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F *)NULL);
		// public AudioMixerGroup                reservedMixerGroup = null;
		__this->set_reservedMixerGroup_9((AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F *)NULL);
		// public AudioMixerGroup                voiceChatMixerGroup = null;
		__this->set_voiceChatMixerGroup_10((AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F *)NULL);
		// public bool                            verboseLogging = false;                            // true = log all PlaySounds
		__this->set_verboseLogging_11((bool)0);
		// public int                             maxSoundEmitters = 32;                            // total number of sound emitters created
		__this->set_maxSoundEmitters_12(((int32_t)32));
		// public float                        volumeSoundFX = 1.0f;                            // user pref: volume of all sound FX
		__this->set_volumeSoundFX_13((1.0f));
		// public float                        soundFxFadeSecs = 1.0f;                            // sound FX fade time
		__this->set_soundFxFadeSecs_14((1.0f));
		// public float                        audioMinFallOffDistance = 1.0f;                    // minimum falloff distance
		__this->set_audioMinFallOffDistance_15((1.0f));
		// public float                        audioMaxFallOffDistance = 25.0f;                // maximum falloff distance
		__this->set_audioMaxFallOffDistance_16((25.0f));
		// public SoundGroup[]                    soundGroupings = new SoundGroup[0];
		SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212* L_0 = (SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212*)(SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212*)SZArrayNew(SoundGroupU5BU5D_t21B75D52C2AE276D7BA0C39C077B4155501C4212_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_soundGroupings_17(L_0);
		// private Dictionary<string,SoundFX>    soundFXCache = null;
		__this->set_soundFXCache_18((Dictionary_2_t0DC145A6CEE45F0F26B7E4BD7E23486C43D62B8E *)NULL);
		// private float                    audioMaxFallOffDistanceSqr = 25.0f * 25.0f;        // past this distance, sounds are ignored for the local player
		__this->set_audioMaxFallOffDistanceSqr_24((625.0f));
		// private SoundEmitter[]             soundEmitters = null;                           // pool of sound emitters to play sounds through
		__this->set_soundEmitters_25((SoundEmitterU5BU5D_tE737A4327CC23A26BA1D4E95322B190AB16A7CD8*)NULL);
		// private FastList<SoundEmitter>  playingEmitters = new FastList<SoundEmitter>();
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_1 = (FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 *)il2cpp_codegen_object_new(FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5_il2cpp_TypeInfo_var);
		FastList_1__ctor_mA19607DA9ACD62B6C752E2ED87782A3F460D10F8(L_1, /*hidden argument*/FastList_1__ctor_mA19607DA9ACD62B6C752E2ED87782A3F460D10F8_RuntimeMethod_var);
		__this->set_playingEmitters_26(L_1);
		// private FastList<SoundEmitter>  nextFreeEmitters = new FastList<SoundEmitter>();
		FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 * L_2 = (FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5 *)il2cpp_codegen_object_new(FastList_1_tEF4D92DE30FEE938416231A9717AD10CEECC50A5_il2cpp_TypeInfo_var);
		FastList_1__ctor_mA19607DA9ACD62B6C752E2ED87782A3F460D10F8(L_2, /*hidden argument*/FastList_1__ctor_mA19607DA9ACD62B6C752E2ED87782A3F460D10F8_RuntimeMethod_var);
		__this->set_nextFreeEmitters_27(L_2);
		// private MixerSnapshot            currentSnapshot = null;
		__this->set_currentSnapshot_28((MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 *)NULL);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OVR.AudioManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager__cctor_mAE2E4208D5CEEDB0CC7A27DC46E606D045E27AD9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastList_1__ctor_mCE5E70514F2279D49DA1402EAF9C78F8136D3AE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1825E475DFA146EE65BB812A4B0AD70EE37025C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static private AudioManager            theAudioManager = null;
		((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->set_theAudioManager_19((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053 *)NULL);
		// static private FastList<string>     names = new FastList<string>();
		FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F * L_0 = (FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F *)il2cpp_codegen_object_new(FastList_1_tB9FCDDC646EADEC8E9B9FD8562ECEC938FF5138F_il2cpp_TypeInfo_var);
		FastList_1__ctor_mCE5E70514F2279D49DA1402EAF9C78F8136D3AE1(L_0, /*hidden argument*/FastList_1__ctor_mCE5E70514F2279D49DA1402EAF9C78F8136D3AE1_RuntimeMethod_var);
		((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->set_names_20(L_0);
		// static private string[]                defaultSound = new string[1] { "Default Sound" };
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralE1825E475DFA146EE65BB812A4B0AD70EE37025C);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralE1825E475DFA146EE65BB812A4B0AD70EE37025C);
		((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->set_defaultSound_21(L_2);
		// static private SoundFX                nullSound = new SoundFX();
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_3 = (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 *)il2cpp_codegen_object_new(SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8_il2cpp_TypeInfo_var);
		SoundFX__ctor_mA431AD6ACCEB3076D59A98225ECD36C34047BF60(L_3, /*hidden argument*/NULL);
		((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->set_nullSound_22(L_3);
		// static private bool                    hideWarnings = false;
		((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->set_hideWarnings_23((bool)0);
		// static private GameObject        soundEmitterParent = null;                        // parent object for the sound emitters
		((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->set_soundEmitterParent_29((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// static private Transform        staticListenerPosition = null;                  // play position for regular 2D sounds
		((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->set_staticListenerPosition_30((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL);
		// static private bool                showPlayingEmitterCount = false;
		((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->set_showPlayingEmitterCount_31((bool)0);
		// static private bool                forceShowEmitterCount = false;
		((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->set_forceShowEmitterCount_32((bool)0);
		// static private bool                soundEnabled = true;
		((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->set_soundEnabled_33((bool)1);
		// static readonly AnimationCurve    defaultReverbZoneMix = new AnimationCurve( new Keyframe[2] { new Keyframe( 0f, 1.0f ), new Keyframe( 1f, 1f ) } );
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_4 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_5 = L_4;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_6), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_6);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_7 = L_5;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_8), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_8);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_9 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_9, L_7, /*hidden argument*/NULL);
		((AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var))->set_defaultReverbZoneMix_34(L_9);
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
// System.Void InspectorCommentAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InspectorCommentAttribute__ctor_mD8FFBFE467F40D48AB8D863D30C499A85D81DF4B (InspectorCommentAttribute_t9219FCDA5E6E5F6CBF8BE522CBCE08E1735E0863 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// public InspectorCommentAttribute( string message = "" ) {
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
		// this.message = message;
		String_t* L_0 = ___message0;
		__this->set_message_0(L_0);
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
// System.Void InspectorNoteAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InspectorNoteAttribute__ctor_m095FB3E63C0E666FE2215588EFFE41ACA50C6DE3 (InspectorNoteAttribute_t7E6A264BFA097C06BF3C9C75E86FC370DE39CB57 * __this, String_t* ___header0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		// public InspectorNoteAttribute(string header, string message = "")
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
		// this.header = header;
		String_t* L_0 = ___header0;
		__this->set_header_0(L_0);
		// this.message = message;
		String_t* L_1 = ___message1;
		__this->set_message_1(L_1);
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
// System.Void OVR.MinMaxAttribute::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxAttribute__ctor_mD888AE9620572A28B04F55451E38D9726570BE5D (MinMaxAttribute_t3C9DB673216A640538472ED870136806B6EDA975 * __this, float ___minDefaultVal0, float ___maxDefaultVal1, float ___min2, float ___max3, const RuntimeMethod* method)
{
	{
		// public float minDefaultVal = 1.0f;
		__this->set_minDefaultVal_0((1.0f));
		// public float maxDefaultVal = 1.0f;
		__this->set_maxDefaultVal_1((1.0f));
		// public float min = 0.0f;
		__this->set_min_2((0.0f));
		// public float max = 1.0f;
		__this->set_max_3((1.0f));
		// public MinMaxAttribute( float minDefaultVal, float maxDefaultVal, float min, float max ) {
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
		// this.minDefaultVal = minDefaultVal;
		float L_0 = ___minDefaultVal0;
		__this->set_minDefaultVal_0(L_0);
		// this.maxDefaultVal = maxDefaultVal;
		float L_1 = ___maxDefaultVal1;
		__this->set_maxDefaultVal_1(L_1);
		// this.min = min;
		float L_2 = ___min2;
		__this->set_min_2(L_2);
		// this.max = max;
		float L_3 = ___max3;
		__this->set_max_3(L_3);
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
// System.Void OVR.MixerSnapshot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixerSnapshot__ctor_mFAA751237B6D0DC15C64984C261B730C5B223B43 (MixerSnapshot_t360786E784C3C5682C66AE6839ECC1329F5BF2B3 * __this, const RuntimeMethod* method)
{
	{
		// public AudioMixerSnapshot       snapshot = null;
		__this->set_snapshot_0((AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 *)NULL);
		// public float                    transitionTime = 0.25f;
		__this->set_transitionTime_1((0.25f));
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
// System.Void OVR.OSPProps::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSPProps__ctor_m247787D8A46948D0709E490A24F40548A50C38F4 (OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B * __this, const RuntimeMethod* method)
{
	{
		// public bool enableSpatialization = false;
		__this->set_enableSpatialization_0((bool)0);
		// public bool            useFastOverride = false;
		__this->set_useFastOverride_1((bool)0);
		// public float        gain = 0.0f;
		__this->set_gain_2((0.0f));
		// public bool         enableInvSquare = false;
		__this->set_enableInvSquare_3((bool)0);
		// public float volumetric = 0.0f;
		__this->set_volumetric_4((0.0f));
		// public Vector2        invSquareFalloff = new Vector2( 1.0f, 25.0f );
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (1.0f), (25.0f), /*hidden argument*/NULL);
		__this->set_invSquareFalloff_5(L_0);
		// public OSPProps() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// enableSpatialization = false;
		__this->set_enableSpatialization_0((bool)0);
		// useFastOverride = false;
		__this->set_useFastOverride_1((bool)0);
		// gain = 0.0f;
		__this->set_gain_2((0.0f));
		// enableInvSquare = false;
		__this->set_enableInvSquare_3((bool)0);
		// volumetric = 0.0f;
		__this->set_volumetric_4((0.0f));
		// invSquareFalloff = new Vector2( 1.0f, 25.0f );
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_1), (1.0f), (25.0f), /*hidden argument*/NULL);
		__this->set_invSquareFalloff_5(L_1);
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
// System.Single OVR.SoundEmitter::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SoundEmitter_get_volume_mA23181A33F14B9C289E1B8C390AC5C8B3EC26761 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float                     volume { get { return audioSource.volume; } set { audioSource.volume = value; } }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		NullCheck(L_0);
		float L_1;
		L_1 = AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public float                     volume { get { return audioSource.volume; } set { audioSource.volume = value; } }
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void OVR.SoundEmitter::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_set_volume_m69BC378728F77430F3E08F8707B8B7E336C64AD2 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float                     volume { get { return audioSource.volume; } set { audioSource.volume = value; } }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		float L_1 = ___value0;
		NullCheck(L_0);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_0, L_1, /*hidden argument*/NULL);
		// public float                     volume { get { return audioSource.volume; } set { audioSource.volume = value; } }
		return;
	}
}
// System.Single OVR.SoundEmitter::get_pitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SoundEmitter_get_pitch_m1945DEF92F78E7713933F8897C67F8590F883D12 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float                     pitch { get { return audioSource.pitch; } set { audioSource.pitch = value; } }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		NullCheck(L_0);
		float L_1;
		L_1 = AudioSource_get_pitch_mB0A139A0693803E201D08B797BFD122B94453C7D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public float                     pitch { get { return audioSource.pitch; } set { audioSource.pitch = value; } }
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void OVR.SoundEmitter::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_set_pitch_m9899768BEACCF59D53FC0ADB39624D39EC3CC403 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float                     pitch { get { return audioSource.pitch; } set { audioSource.pitch = value; } }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		float L_1 = ___value0;
		NullCheck(L_0);
		AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC(L_0, L_1, /*hidden argument*/NULL);
		// public float                     pitch { get { return audioSource.pitch; } set { audioSource.pitch = value; } }
		return;
	}
}
// UnityEngine.AudioClip OVR.SoundEmitter::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * SoundEmitter_get_clip_mE45EDA68B18AC10B4F75DBE895D3C94EC0E14491 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method)
{
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * V_0 = NULL;
	{
		// public AudioClip                clip { get { return audioSource.clip; } set { audioSource.clip = value; } }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		NullCheck(L_0);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1;
		L_1 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public AudioClip                clip { get { return audioSource.clip; } set { audioSource.clip = value; } }
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = V_0;
		return L_2;
	}
}
// System.Void OVR.SoundEmitter::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_set_clip_m82EE6C32D45FB143C85A4E3D264DC25F6BA78549 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method)
{
	{
		// public AudioClip                clip { get { return audioSource.clip; } set { audioSource.clip = value; } }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = ___value0;
		NullCheck(L_0);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_0, L_1, /*hidden argument*/NULL);
		// public AudioClip                clip { get { return audioSource.clip; } set { audioSource.clip = value; } }
		return;
	}
}
// System.Single OVR.SoundEmitter::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SoundEmitter_get_time_m70625F6BFBB92382FF85E8BD57B3E6393525BBB0 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float                     time { get { return audioSource.time; } set { audioSource.time = value; } }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		NullCheck(L_0);
		float L_1;
		L_1 = AudioSource_get_time_m2185448A5B8A50225410220AF67BC34F5596D210(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public float                     time { get { return audioSource.time; } set { audioSource.time = value; } }
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void OVR.SoundEmitter::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_set_time_m8D4EC2119A92AFDB9F57929A2656C94BE643C47A (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float                     time { get { return audioSource.time; } set { audioSource.time = value; } }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		float L_1 = ___value0;
		NullCheck(L_0);
		AudioSource_set_time_mE8F36DDE8E610126F9733D13F299C13F71BCE690(L_0, L_1, /*hidden argument*/NULL);
		// public float                     time { get { return audioSource.time; } set { audioSource.time = value; } }
		return;
	}
}
// System.Single OVR.SoundEmitter::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SoundEmitter_get_length_mF6904F4A29A0E800A048E29849F06C63D4501A88 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// public float                     length { get { return ( audioSource.clip != null ) ? audioSource.clip.length : 0.0f; } }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		NullCheck(L_0);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1;
		L_1 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		G_B3_0 = (0.0f);
		goto IL_002b;
	}

IL_001b:
	{
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get_audioSource_7();
		NullCheck(L_3);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4;
		L_4 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_002b:
	{
		V_0 = G_B3_0;
		goto IL_002e;
	}

IL_002e:
	{
		// public float                     length { get { return ( audioSource.clip != null ) ? audioSource.clip.length : 0.0f; } }
		float L_6 = V_0;
		return L_6;
	}
}
// System.Boolean OVR.SoundEmitter::get_loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundEmitter_get_loop_m284DB05230F0B87D965A5D692B9E6A8AE8EAF0E5 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool                     loop { get { return audioSource.loop; } set { audioSource.loop = value; } }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioSource_get_loop_m4CC6F50D9332DCC4B3CF380D12622F787BB8FB8D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public bool                     loop { get { return audioSource.loop; } set { audioSource.loop = value; } }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void OVR.SoundEmitter::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_set_loop_mE5ABF4BF273905A24EAB93BBB964031701E716C0 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool                     loop { get { return audioSource.loop; } set { audioSource.loop = value; } }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		bool L_1 = ___value0;
		NullCheck(L_0);
		AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0(L_0, L_1, /*hidden argument*/NULL);
		// public bool                     loop { get { return audioSource.loop; } set { audioSource.loop = value; } }
		return;
	}
}
// System.Boolean OVR.SoundEmitter::get_mute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundEmitter_get_mute_m7D6F72DA7EC170523B75D312A3C524E6EF6DB92F (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool                     mute { get { return audioSource.mute; } set { audioSource.mute = value; } }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioSource_get_mute_m87FF3468F096AE68C817B885D9AAC246CA4F1AFE(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public bool                     mute { get { return audioSource.mute; } set { audioSource.mute = value; } }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void OVR.SoundEmitter::set_mute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_set_mute_m0A10EAD356F4D8B48011C5CE9AE95878A6767533 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool                     mute { get { return audioSource.mute; } set { audioSource.mute = value; } }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		bool L_1 = ___value0;
		NullCheck(L_0);
		AudioSource_set_mute_m69E2DFCF261D2D187ED756096B7E0DE622292C71(L_0, L_1, /*hidden argument*/NULL);
		// public bool                     mute { get { return audioSource.mute; } set { audioSource.mute = value; } }
		return;
	}
}
// UnityEngine.AudioVelocityUpdateMode OVR.SoundEmitter::get_velocityUpdateMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SoundEmitter_get_velocityUpdateMode_m085BA5870529AF518C3739C983C8CC99311D392C (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public AudioVelocityUpdateMode    velocityUpdateMode { get { return audioSource.velocityUpdateMode; } set { audioSource.velocityUpdateMode = value; } }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AudioSource_get_velocityUpdateMode_m883F604B18AB40C1AF65777C13BD05402FF351DB(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public AudioVelocityUpdateMode    velocityUpdateMode { get { return audioSource.velocityUpdateMode; } set { audioSource.velocityUpdateMode = value; } }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void OVR.SoundEmitter::set_velocityUpdateMode(UnityEngine.AudioVelocityUpdateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_set_velocityUpdateMode_m3C44A49A830D1A46EEC0C8E45774E1D0A9607A8B (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public AudioVelocityUpdateMode    velocityUpdateMode { get { return audioSource.velocityUpdateMode; } set { audioSource.velocityUpdateMode = value; } }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		AudioSource_set_velocityUpdateMode_m63201E0CAC0E5BC81B5F31F96F1796FD8A43982A(L_0, L_1, /*hidden argument*/NULL);
		// public AudioVelocityUpdateMode    velocityUpdateMode { get { return audioSource.velocityUpdateMode; } set { audioSource.velocityUpdateMode = value; } }
		return;
	}
}
// System.Boolean OVR.SoundEmitter::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundEmitter_get_isPlaying_m01B972A9B2F1897C02DB55720375907171EF1EE1 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool                        isPlaying { get { return audioSource.isPlaying; } }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public bool                        isPlaying { get { return audioSource.isPlaying; } }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void OVR.SoundEmitter::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_Awake_mAA3470EEB55DA370505D457570F5251C9C95915C (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02_m56EBC9C7EBB265730A41A9931D5C4344872D346F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02_mE7A81E1591706BCD8FE9D3E4C3B4354E2A0D2EEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// audioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_audioSource_7(L_0);
		// if ( audioSource == null ) {
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_audioSource_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// audioSource = gameObject.AddComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5;
		L_5 = GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76(L_4, /*hidden argument*/GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		__this->set_audioSource_7(L_5);
	}

IL_0030:
	{
		// if ( AudioManager.enableSpatialization && !disableSpatialization ) {
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = AudioManager_get_enableSpatialization_m7558A52D2084FF429088B79CE146B855D331E372(/*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		bool L_7 = __this->get_disableSpatialization_5();
		G_B5_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0043;
	}

IL_0042:
	{
		G_B5_0 = 0;
	}

IL_0043:
	{
		V_1 = (bool)G_B5_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0078;
		}
	}
	{
		// osp = GetComponent<ONSPAudioSource>();
		ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * L_9;
		L_9 = Component_GetComponent_TisONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02_m56EBC9C7EBB265730A41A9931D5C4344872D346F(__this, /*hidden argument*/Component_GetComponent_TisONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02_m56EBC9C7EBB265730A41A9931D5C4344872D346F_RuntimeMethod_var);
		__this->set_osp_9(L_9);
		// if ( osp == null ) {
		ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * L_10 = __this->get_osp_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0077;
		}
	}
	{
		// osp = gameObject.AddComponent<ONSPAudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 * L_14;
		L_14 = GameObject_AddComponent_TisONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02_mE7A81E1591706BCD8FE9D3E4C3B4354E2A0D2EEE(L_13, /*hidden argument*/GameObject_AddComponent_TisONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02_mE7A81E1591706BCD8FE9D3E4C3B4354E2A0D2EEE_RuntimeMethod_var);
		__this->set_osp_9(L_14);
	}

IL_0077:
	{
	}

IL_0078:
	{
		// audioSource.playOnAwake = false;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_15 = __this->get_audioSource_7();
		NullCheck(L_15);
		AudioSource_set_playOnAwake_mBE8FAD0E1555C431C56E0DEB4BF7371E76E236F5(L_15, (bool)0, /*hidden argument*/NULL);
		// audioSource.Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_16 = __this->get_audioSource_7();
		NullCheck(L_16);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVR.SoundEmitter::SetPlayingSoundGroup(OVR.SoundGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_SetPlayingSoundGroup_mE25F8571D797ED9DCBB3C1564DE40F2115FAFFA0 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * ___soundGroup0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// playingSoundGroup = soundGroup;
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_0 = ___soundGroup0;
		__this->set_playingSoundGroup_18(L_0);
		// if ( soundGroup != null ) {
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_1 = ___soundGroup0;
		V_0 = (bool)((!(((RuntimeObject*)(SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// soundGroup.IncrementPlayCount();
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_3 = ___soundGroup0;
		NullCheck(L_3);
		SoundGroup_IncrementPlayCount_mC015831392FAC4D8D33D1956E67FBD28B6E7C88E(L_3, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void OVR.SoundEmitter::SetOnFinished(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_SetOnFinished_m3A0FAFB78D8980EE76E1DAFB4F0DB40DDD40F499 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onFinished0, const RuntimeMethod* method)
{
	{
		// this.onFinished = onFinished;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___onFinished0;
		__this->set_onFinished_15(L_0);
		// }
		return;
	}
}
// System.Void OVR.SoundEmitter::SetOnFinished(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_SetOnFinished_m86026FD45DF5511C081B1B4C06120C8711A096EC (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___onFinished0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	{
		// onFinishedObject = onFinished;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_0 = ___onFinished0;
		__this->set_onFinishedObject_16(L_0);
		// onFinishedParam = obj;
		RuntimeObject * L_1 = ___obj1;
		__this->set_onFinishedParam_17(L_1);
		// }
		return;
	}
}
// System.Void OVR.SoundEmitter::SetChannel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_SetChannel_mCDFADEC11BB7EDD8A3679BF256854E04E53A7530 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, int32_t ____channel0, const RuntimeMethod* method)
{
	{
		// channel = (EmitterChannel)_channel;
		int32_t L_0 = ____channel0;
		__this->set_channel_4(L_0);
		// }
		return;
	}
}
// System.Void OVR.SoundEmitter::SetDefaultParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_SetDefaultParent_mB35C9475E42E176115291F7F58838A309D817C67 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, const RuntimeMethod* method)
{
	{
		// defaultParent = parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___parent0;
		__this->set_defaultParent_13(L_0);
		// }
		return;
	}
}
// System.Void OVR.SoundEmitter::SetAudioMixer(UnityEngine.Audio.AudioMixerGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_SetAudioMixer_m289797EF1E40281C57E7ED5CA96DA428EFBF5972 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * ____mixer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if ( audioSource != null ) {
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// audioSource.outputAudioMixerGroup = _mixer;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get_audioSource_7();
		AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * L_4 = ____mixer0;
		NullCheck(L_3);
		AudioSource_set_outputAudioMixerGroup_mE63B2B8C7E3F4E8C670E2474D1F22F9864DB71C8(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Boolean OVR.SoundEmitter::IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundEmitter_IsPlaying_m6868357ED357493BD5CD6FA1F3DC079536D03294 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if ( loop && audioSource.isPlaying ) {
		bool L_0;
		L_0 = SoundEmitter_get_loop_m284DB05230F0B87D965A5D692B9E6A8AE8EAF0E5(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_audioSource_7();
		NullCheck(L_1);
		bool L_2;
		L_2 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0030;
	}

IL_0020:
	{
		// return endPlayTime > Time.time;
		float L_4 = __this->get_endPlayTime_10();
		float L_5;
		L_5 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		goto IL_0030;
	}

IL_0030:
	{
		// }
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Void OVR.SoundEmitter::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_Play_mEFDD037CC6E22E1B7E8173B4BB82C38BF20D2F3A (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method)
{
	{
		// state = FadeState.Null;
		__this->set_state_6(0);
		// endPlayTime = Time.time + length;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_1;
		L_1 = SoundEmitter_get_length_mF6904F4A29A0E800A048E29849F06C63D4501A88(__this, /*hidden argument*/NULL);
		__this->set_endPlayTime_10(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4(__this, /*hidden argument*/NULL);
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_audioSource_7();
		NullCheck(L_2);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVR.SoundEmitter::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_Pause_mF0EF382401E7AB739C5910EAF183061FFC80E5B1 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method)
{
	{
		// state = FadeState.Null;
		__this->set_state_6(0);
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4(__this, /*hidden argument*/NULL);
		// audioSource.Pause();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		NullCheck(L_0);
		AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVR.SoundEmitter::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_Stop_m3300C33E8D6996E9EC28F0AC81D1702912AC6DE4 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// state = FadeState.Null;
		__this->set_state_6(0);
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4(__this, /*hidden argument*/NULL);
		// if ( audioSource != null ) {
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// audioSource.Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get_audioSource_7();
		NullCheck(L_3);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_3, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// if ( onFinished != null ) {
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = __this->get_onFinished_15();
		V_1 = (bool)((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		// onFinished();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = __this->get_onFinished_15();
		NullCheck(L_6);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_6, /*hidden argument*/NULL);
		// onFinished = null;
		__this->set_onFinished_15((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL);
	}

IL_004f:
	{
		// if ( onFinishedObject != null ) {
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_7 = __this->get_onFinishedObject_16();
		V_2 = (bool)((!(((RuntimeObject*)(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0077;
		}
	}
	{
		// onFinishedObject( onFinishedParam );
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_9 = __this->get_onFinishedObject_16();
		RuntimeObject * L_10 = __this->get_onFinishedParam_17();
		NullCheck(L_9);
		Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744(L_9, L_10, /*hidden argument*/Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var);
		// onFinishedObject = null;
		__this->set_onFinishedObject_16((Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)NULL);
	}

IL_0077:
	{
		// if ( playingSoundGroup != null ) {
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_11 = __this->get_playingSoundGroup_18();
		V_3 = (bool)((!(((RuntimeObject*)(SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0099;
		}
	}
	{
		// playingSoundGroup.DecrementPlayCount();
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_13 = __this->get_playingSoundGroup_18();
		NullCheck(L_13);
		SoundGroup_DecrementPlayCount_m7B10E17101489B2B39F9B4D01B7BE5C1DE0C7425(L_13, /*hidden argument*/NULL);
		// playingSoundGroup = null;
		__this->set_playingSoundGroup_18((SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F *)NULL);
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Int32 OVR.SoundEmitter::GetSampleTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SoundEmitter_GetSampleTime_mCB134DFB42984FD76F76979C083E34D20A63D702 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return audioSource.clip.samples - audioSource.timeSamples;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		NullCheck(L_0);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1;
		L_1 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567(L_1, /*hidden argument*/NULL);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get_audioSource_7();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = AudioSource_get_timeSamples_m2D16DA78011B58C24BCA679B44D2BF832DFCA0BE(L_3, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_4));
		goto IL_0020;
	}

IL_0020:
	{
		// }
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void OVR.SoundEmitter::ParentTo(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_ParentTo_m6575F83E7227B5AAEC0D5223D9BE84195CED629D (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F5A67BFE407F54916CF5CC33686478EA9815CC1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if ( lastParentTransform != null ) {
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_lastParentTransform_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogError( "[SoundEmitter] You must detach the sound emitter before parenting to another object!" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral0F5A67BFE407F54916CF5CC33686478EA9815CC1, /*hidden argument*/NULL);
		// return;
		goto IL_003d;
	}

IL_001f:
	{
		// lastParentTransform = transform.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_3, /*hidden argument*/NULL);
		__this->set_lastParentTransform_11(L_4);
		// transform.parent = parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = ___parent0;
		NullCheck(L_5);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_5, L_6, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void OVR.SoundEmitter::DetachFromParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_DetachFromParent_m49C7265BD79A6E8D21A455D2B98665A4F8C18EFD (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if ( lastParentTransform == null ) {
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_lastParentTransform_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// transform.parent = defaultParent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_defaultParent_13();
		NullCheck(L_3);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_3, L_4, /*hidden argument*/NULL);
		// return;
		goto IL_003f;
	}

IL_0026:
	{
		// transform.parent = lastParentTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_lastParentTransform_11();
		NullCheck(L_5);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_5, L_6, /*hidden argument*/NULL);
		// lastParentTransform = null;
		__this->set_lastParentTransform_11((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void OVR.SoundEmitter::ResetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_ResetParent_m2C67F84BAA510CC69AF6A6539C6D0D15870514EC (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, const RuntimeMethod* method)
{
	{
		// transform.parent = parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___parent0;
		NullCheck(L_0);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_0, L_1, /*hidden argument*/NULL);
		// lastParentTransform = null;
		__this->set_lastParentTransform_11((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL);
		// }
		return;
	}
}
// System.Void OVR.SoundEmitter::SyncTo(OVR.SoundEmitter,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_SyncTo_m988C9AFA057ED925AD4C70C91477404DB557866E (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * ___other0, float ___fadeTime1, float ___toVolume2, const RuntimeMethod* method)
{
	{
		// StartCoroutine( DelayedSyncTo( other, fadeTime, toVolume ) );
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_0 = ___other0;
		float L_1 = ___fadeTime1;
		float L_2 = ___toVolume2;
		RuntimeObject* L_3;
		L_3 = SoundEmitter_DelayedSyncTo_m83E0EFFFD7C94E4F99C3898B0E25056FC259C387(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator OVR.SoundEmitter::DelayedSyncTo(OVR.SoundEmitter,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SoundEmitter_DelayedSyncTo_m83E0EFFFD7C94E4F99C3898B0E25056FC259C387 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * ___other0, float ___fadeTime1, float ___toVolume2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365 * L_0 = (U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365 *)il2cpp_codegen_object_new(U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365_il2cpp_TypeInfo_var);
		U3CDelayedSyncToU3Ed__57__ctor_m549600F80A292FC33E37A8C7AE55932C7A955017(L_0, 0, /*hidden argument*/NULL);
		U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_5(__this);
		U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365 * L_2 = L_1;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_3 = ___other0;
		NullCheck(L_2);
		L_2->set_other_2(L_3);
		U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365 * L_4 = L_2;
		float L_5 = ___fadeTime1;
		NullCheck(L_4);
		L_4->set_fadeTime_3(L_5);
		U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365 * L_6 = L_4;
		float L_7 = ___toVolume2;
		NullCheck(L_6);
		L_6->set_toVolume_4(L_7);
		return L_6;
	}
}
// System.Void OVR.SoundEmitter::FadeTo(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_FadeTo_m5D863F2B1863CD96FDE40AF00CFBC673A3863851 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, float ___fadeTime0, float ___toVolume1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if ( state == FadeState.FadingOut ) {
		int32_t L_0 = __this->get_state_6();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_002e;
	}

IL_0011:
	{
		// state = FadeState.Ducking;
		__this->set_state_6(3);
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4(__this, /*hidden argument*/NULL);
		// StartCoroutine( FadeSoundChannelTo( fadeTime, toVolume ) );
		float L_2 = ___fadeTime0;
		float L_3 = ___toVolume1;
		RuntimeObject* L_4;
		L_4 = SoundEmitter_FadeSoundChannelTo_m2E5A2DD182ADF0234C5AD04EC47687AF784CADE3(__this, L_2, L_3, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void OVR.SoundEmitter::FadeIn(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_FadeIn_mEE40EB91C25E3F9B538CB3B55A3FB8DDB90483ED (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, float ___fadeTime0, float ___defaultVolume1, const RuntimeMethod* method)
{
	{
		// audioSource.volume = 0.0f;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		NullCheck(L_0);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_0, (0.0f), /*hidden argument*/NULL);
		// state = FadeState.FadingIn;
		__this->set_state_6(1);
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4(__this, /*hidden argument*/NULL);
		// StartCoroutine( FadeSoundChannel( 0.0f, fadeTime, Fade.In, defaultVolume ) );
		float L_1 = ___fadeTime0;
		float L_2 = ___defaultVolume1;
		RuntimeObject* L_3;
		L_3 = SoundEmitter_FadeSoundChannel_m7B7F23737AECD586977C9B56554F3D9D9E92C6EF(__this, (0.0f), L_1, 0, L_2, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVR.SoundEmitter::FadeIn(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_FadeIn_m3E1B411AA82B979BB00C54D289EAF7763C6D92A5 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, float ___fadeTime0, const RuntimeMethod* method)
{
	{
		// audioSource.volume = 0.0f;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		NullCheck(L_0);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_0, (0.0f), /*hidden argument*/NULL);
		// state = FadeState.FadingIn;
		__this->set_state_6(1);
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4(__this, /*hidden argument*/NULL);
		// StartCoroutine( FadeSoundChannel( 0.0f, fadeTime, Fade.In, defaultVolume ) );
		float L_1 = ___fadeTime0;
		float L_2 = __this->get_defaultVolume_12();
		RuntimeObject* L_3;
		L_3 = SoundEmitter_FadeSoundChannel_m7B7F23737AECD586977C9B56554F3D9D9E92C6EF(__this, (0.0f), L_1, 0, L_2, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVR.SoundEmitter::FadeOut(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_FadeOut_m0EAF4076F66795DE7DFC4BC43CFAC4D744F017BF (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, float ___fadeTime0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if ( !audioSource.isPlaying ) {
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		goto IL_0043;
	}

IL_0016:
	{
		// state = FadeState.FadingOut;
		__this->set_state_6(2);
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4(__this, /*hidden argument*/NULL);
		// StartCoroutine( FadeSoundChannel( 0.0f, fadeTime, Fade.Out, audioSource.volume ) );
		float L_3 = ___fadeTime0;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = __this->get_audioSource_7();
		NullCheck(L_4);
		float L_5;
		L_5 = AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556(L_4, /*hidden argument*/NULL);
		RuntimeObject* L_6;
		L_6 = SoundEmitter_FadeSoundChannel_m7B7F23737AECD586977C9B56554F3D9D9E92C6EF(__this, (0.0f), L_3, 1, L_5, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_6, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void OVR.SoundEmitter::FadeOutDelayed(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter_FadeOutDelayed_m7D19FF1D2850F9BEEFBBCB6379C6A2285457EBCB (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, float ___delayedSecs0, float ___fadeTime1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if ( !audioSource.isPlaying ) {
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		goto IL_003f;
	}

IL_0016:
	{
		// state = FadeState.FadingOut;
		__this->set_state_6(2);
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4(__this, /*hidden argument*/NULL);
		// StartCoroutine( FadeSoundChannel( delayedSecs, fadeTime, Fade.Out, audioSource.volume ) );
		float L_3 = ___delayedSecs0;
		float L_4 = ___fadeTime1;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = __this->get_audioSource_7();
		NullCheck(L_5);
		float L_6;
		L_6 = AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556(L_5, /*hidden argument*/NULL);
		RuntimeObject* L_7;
		L_7 = SoundEmitter_FadeSoundChannel_m7B7F23737AECD586977C9B56554F3D9D9E92C6EF(__this, L_3, L_4, 1, L_6, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_8;
		L_8 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_7, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator OVR.SoundEmitter::FadeSoundChannelTo(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SoundEmitter_FadeSoundChannelTo_m2E5A2DD182ADF0234C5AD04EC47687AF784CADE3 (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, float ___fadeTime0, float ___toVolume1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281 * L_0 = (U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281 *)il2cpp_codegen_object_new(U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281_il2cpp_TypeInfo_var);
		U3CFadeSoundChannelToU3Ed__63__ctor_m9C7EEA204BF98361F0A07E4225458119EAC2B71D(L_0, 0, /*hidden argument*/NULL);
		U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_4(__this);
		U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281 * L_2 = L_1;
		float L_3 = ___fadeTime0;
		NullCheck(L_2);
		L_2->set_fadeTime_2(L_3);
		U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281 * L_4 = L_2;
		float L_5 = ___toVolume1;
		NullCheck(L_4);
		L_4->set_toVolume_3(L_5);
		return L_4;
	}
}
// System.Collections.IEnumerator OVR.SoundEmitter::FadeSoundChannel(System.Single,System.Single,OVR.Fade,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SoundEmitter_FadeSoundChannel_m7B7F23737AECD586977C9B56554F3D9D9E92C6EF (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, float ___delaySecs0, float ___fadeTime1, int32_t ___fadeType2, float ___defaultVolume3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF * L_0 = (U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF *)il2cpp_codegen_object_new(U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF_il2cpp_TypeInfo_var);
		U3CFadeSoundChannelU3Ed__64__ctor_m99D1C836FDCC06399523049AC30DED74742E16AE(L_0, 0, /*hidden argument*/NULL);
		U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_6(__this);
		U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF * L_2 = L_1;
		float L_3 = ___delaySecs0;
		NullCheck(L_2);
		L_2->set_delaySecs_2(L_3);
		U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF * L_4 = L_2;
		float L_5 = ___fadeTime1;
		NullCheck(L_4);
		L_4->set_fadeTime_3(L_5);
		U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF * L_6 = L_4;
		int32_t L_7 = ___fadeType2;
		NullCheck(L_6);
		L_6->set_fadeType_4(L_7);
		U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF * L_8 = L_6;
		float L_9 = ___defaultVolume3;
		NullCheck(L_8);
		L_8->set_defaultVolume_5(L_9);
		return L_8;
	}
}
// System.Void OVR.SoundEmitter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundEmitter__ctor_m9B3985914FF66A4C3DAD17399922BBBFF640255C (SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * __this, const RuntimeMethod* method)
{
	{
		// public EmitterChannel            channel = EmitterChannel.Reserved;
		__this->set_channel_4(0);
		// public bool                        disableSpatialization = false;
		__this->set_disableSpatialization_5((bool)0);
		// private    FadeState                state = FadeState.Null;
		__this->set_state_6(0);
		// public AudioSource                audioSource = null;
		__this->set_audioSource_7((AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)NULL);
		// public SoundPriority            priority = SoundPriority.Default;
		__this->set_priority_8(0);
		// public ONSPAudioSource            osp = null;
		__this->set_osp_9((ONSPAudioSource_tC3F394BCBB35F98FA3EE731FD292665A0AE48E02 *)NULL);
		// public float                    endPlayTime = 0.0f;
		__this->set_endPlayTime_10((0.0f));
		// private Transform                lastParentTransform = null;
		__this->set_lastParentTransform_11((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL);
		// public float                    defaultVolume = 1.0f;
		__this->set_defaultVolume_12((1.0f));
		// public Transform                defaultParent = null;
		__this->set_defaultParent_13((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL);
		// public int                        originalIdx = -1;
		__this->set_originalIdx_14((-1));
		// public System.Action            onFinished = null;
		__this->set_onFinished_15((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL);
		// public System.Action<object>    onFinishedObject = null;
		__this->set_onFinishedObject_16((Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)NULL);
		// public SoundGroup               playingSoundGroup = null;
		__this->set_playingSoundGroup_18((SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F *)NULL);
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
// System.Void OVR.SoundFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundFX__ctor_mA431AD6ACCEB3076D59A98225ECD36C34047BF60 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string            name = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_name_0(L_0);
		// public SoundFXNext        playback = SoundFXNext.Random;
		__this->set_playback_1(0);
		// public float            volume = 1.0f;
		__this->set_volume_2((1.0f));
		// public Vector2            pitchVariance = Vector2.one;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42(/*hidden argument*/NULL);
		__this->set_pitchVariance_3(L_1);
		// public Vector2            falloffDistance = new Vector2( 1.0f, 25.0f );
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), (1.0f), (25.0f), /*hidden argument*/NULL);
		__this->set_falloffDistance_4(L_2);
		// public AudioRolloffMode    falloffCurve = AudioRolloffMode.Linear;
		__this->set_falloffCurve_5(1);
		// public AnimationCurve   volumeFalloffCurve = new AnimationCurve( new Keyframe[2] { new Keyframe( 0f, 1.0f ), new Keyframe( 1f, 1f ) } );
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_3 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_4 = L_3;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_5), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_5);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_6 = L_4;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_7), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_7);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_8 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_8, L_6, /*hidden argument*/NULL);
		__this->set_volumeFalloffCurve_6(L_8);
		// public AnimationCurve   reverbZoneMix = new AnimationCurve( new Keyframe[2] { new Keyframe( 0f, 1.0f ), new Keyframe( 1f, 1f ) } );
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_9 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_10 = L_9;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_11), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_11);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_12 = L_10;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_13), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_13);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_14 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_14, L_12, /*hidden argument*/NULL);
		__this->set_reverbZoneMix_7(L_14);
		// public float            spread = 0.0f;
		__this->set_spread_8((0.0f));
		// public float            pctChanceToPlay = 1.0f;
		__this->set_pctChanceToPlay_9((1.0f));
		// public SoundPriority    priority = SoundPriority.Default;
		__this->set_priority_10(0);
		// public Vector2          delay = Vector2.zero;   // this overrides any delay passed into PlaySound() or PlaySoundAt()
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_delay_11(L_15);
		// public bool                looping = false;
		__this->set_looping_12((bool)0);
		// public OSPProps            ospProps = new OSPProps();
		OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B * L_16 = (OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B *)il2cpp_codegen_object_new(OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B_il2cpp_TypeInfo_var);
		OSPProps__ctor_m247787D8A46948D0709E490A24F40548A50C38F4(L_16, /*hidden argument*/NULL);
		__this->set_ospProps_13(L_16);
		// public AudioClip[]        soundClips = new AudioClip[1];
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_17 = (AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE*)(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE*)SZArrayNew(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_soundClips_14(L_17);
		// public bool             visibilityToggle = false;
		__this->set_visibilityToggle_15((bool)0);
		// private SoundGroup      soundGroup = null;
		__this->set_soundGroup_16((SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F *)NULL);
		// private int                lastIdx = -1;
		__this->set_lastIdx_17((-1));
		// private int                playingIdx = -1;
		__this->set_playingIdx_18((-1));
		// public SoundFX() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// playback = SoundFXNext.Random;
		__this->set_playback_1(0);
		// volume = 1.0f;
		__this->set_volume_2((1.0f));
		// pitchVariance = Vector2.one;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42(/*hidden argument*/NULL);
		__this->set_pitchVariance_3(L_18);
		// falloffDistance = new Vector2( 1.0f, 25.0f );
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_19), (1.0f), (25.0f), /*hidden argument*/NULL);
		__this->set_falloffDistance_4(L_19);
		// falloffCurve = AudioRolloffMode.Linear;
		__this->set_falloffCurve_5(1);
		// volumeFalloffCurve = new AnimationCurve( new Keyframe[2] { new Keyframe( 0f, 1.0f ), new Keyframe( 1f, 1f ) } );
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_20 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_21 = L_20;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_22), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_22);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_23 = L_21;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_24), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_24);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_25 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_25, L_23, /*hidden argument*/NULL);
		__this->set_volumeFalloffCurve_6(L_25);
		// reverbZoneMix = new AnimationCurve( new Keyframe[2] { new Keyframe( 0f, 1.0f ), new Keyframe( 1f, 1f ) } );
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_26 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_27 = L_26;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_28), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_28);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_29 = L_27;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_30), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_30);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_31 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_31, L_29, /*hidden argument*/NULL);
		__this->set_reverbZoneMix_7(L_31);
		// spread = 0.0f;
		__this->set_spread_8((0.0f));
		// pctChanceToPlay = 1.0f;
		__this->set_pctChanceToPlay_9((1.0f));
		// priority = SoundPriority.Default;
		__this->set_priority_10(0);
		// delay = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32;
		L_32 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_delay_11(L_32);
		// looping = false;
		__this->set_looping_12((bool)0);
		// ospProps = new OSPProps();
		OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B * L_33 = (OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B *)il2cpp_codegen_object_new(OSPProps_t1DCD1698C712C3F37F1F6126579E7B7BB8E0555B_il2cpp_TypeInfo_var);
		OSPProps__ctor_m247787D8A46948D0709E490A24F40548A50C38F4(L_33, /*hidden argument*/NULL);
		__this->set_ospProps_13(L_33);
		// }
		return;
	}
}
// System.Int32 OVR.SoundFX::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SoundFX_get_Length_mC19CCFD4875BD114178BD925FDA4FAE083846AA1 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public int                 Length { get { return soundClips.Length; } }
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_0 = __this->get_soundClips_14();
		NullCheck(L_0);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		goto IL_000c;
	}

IL_000c:
	{
		// public int                 Length { get { return soundClips.Length; } }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean OVR.SoundFX::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundFX_get_IsValid_m244A0EE19D7DA7039F8FF27CB85A8AD1B571F547 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// public bool                IsValid { get { return ( ( soundClips.Length != 0 ) && ( soundClips[0] != null ) ); } }
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_0 = __this->get_soundClips_14();
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_001a;
		}
	}
	{
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_1 = __this->get_soundClips_14();
		NullCheck(L_1);
		int32_t L_2 = 0;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001e;
	}

IL_001e:
	{
		// public bool                IsValid { get { return ( ( soundClips.Length != 0 ) && ( soundClips[0] != null ) ); } }
		bool L_5 = V_0;
		return L_5;
	}
}
// OVR.SoundGroup OVR.SoundFX::get_Group()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * SoundFX_get_Group_mA26D40F7F76EC4223BBEEA3EB31E2E1651360F57 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, const RuntimeMethod* method)
{
	SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * V_0 = NULL;
	{
		// public SoundGroup        Group { get { return soundGroup; } set { soundGroup = value; } }
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_0 = __this->get_soundGroup_16();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public SoundGroup        Group { get { return soundGroup; } set { soundGroup = value; } }
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_1 = V_0;
		return L_1;
	}
}
// System.Void OVR.SoundFX::set_Group(OVR.SoundGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundFX_set_Group_mA0824C9068177ADB44DA9CEA2432428BDB9F7E87 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * ___value0, const RuntimeMethod* method)
{
	{
		// public SoundGroup        Group { get { return soundGroup; } set { soundGroup = value; } }
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_0 = ___value0;
		__this->set_soundGroup_16(L_0);
		// public SoundGroup        Group { get { return soundGroup; } set { soundGroup = value; } }
		return;
	}
}
// System.Single OVR.SoundFX::get_MaxFalloffDistSquared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SoundFX_get_MaxFalloffDistSquared_m8134461B3B7CDDE5D5D767F32E4EFB64A1567AE1 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float            MaxFalloffDistSquared { get { return falloffDistance.y * falloffDistance.y; } }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = __this->get_address_of_falloffDistance_4();
		float L_1 = L_0->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_2 = __this->get_address_of_falloffDistance_4();
		float L_3 = L_2->get_y_1();
		V_0 = ((float)il2cpp_codegen_multiply((float)L_1, (float)L_3));
		goto IL_001b;
	}

IL_001b:
	{
		// public float            MaxFalloffDistSquared { get { return falloffDistance.y * falloffDistance.y; } }
		float L_4 = V_0;
		return L_4;
	}
}
// System.Single OVR.SoundFX::get_GroupVolumeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SoundFX_get_GroupVolumeOverride_mA783F03EAC28566B620DB8FCE3FD9F74012E25EB (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// public float            GroupVolumeOverride { get { return ( soundGroup != null ) ? soundGroup.volumeOverride : 1.0f; } }
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_0 = __this->get_soundGroup_16();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (1.0f);
		goto IL_001b;
	}

IL_0010:
	{
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_1 = __this->get_soundGroup_16();
		NullCheck(L_1);
		float L_2 = L_1->get_volumeOverride_5();
		G_B3_0 = L_2;
	}

IL_001b:
	{
		V_0 = G_B3_0;
		goto IL_001e;
	}

IL_001e:
	{
		// public float            GroupVolumeOverride { get { return ( soundGroup != null ) ? soundGroup.volumeOverride : 1.0f; } }
		float L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.AudioClip OVR.SoundFX::GetClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * SoundFX_GetClip_m0CDE7570629E9E61B1471DC1A2CBE6F2159D498D (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	{
		// if ( soundClips.Length == 0 ) {
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_0 = __this->get_soundClips_14();
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)(((RuntimeArray*)L_0)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// return null;
		V_1 = (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)NULL;
		goto IL_00cc;
	}

IL_0017:
	{
		// } else if ( soundClips.Length == 1 ) {
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_2 = __this->get_soundClips_14();
		NullCheck(L_2);
		V_2 = (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// return soundClips[0];
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_4 = __this->get_soundClips_14();
		NullCheck(L_4);
		int32_t L_5 = 0;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		goto IL_00cc;
	}

IL_0035:
	{
		// if ( playback == SoundFXNext.Random ) {
		int32_t L_7 = __this->get_playback_1();
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_008b;
		}
	}
	{
		// int idx = Random.Range( 0, soundClips.Length );
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_9 = __this->get_soundClips_14();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), /*hidden argument*/NULL);
		V_4 = L_10;
		goto IL_0067;
	}

IL_0055:
	{
		// idx = Random.Range( 0, soundClips.Length );
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_11 = __this->get_soundClips_14();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))), /*hidden argument*/NULL);
		V_4 = L_12;
	}

IL_0067:
	{
		// while ( idx == lastIdx ) {
		int32_t L_13 = V_4;
		int32_t L_14 = __this->get_lastIdx_17();
		V_5 = (bool)((((int32_t)L_13) == ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_0055;
		}
	}
	{
		// lastIdx = idx;
		int32_t L_16 = V_4;
		__this->set_lastIdx_17(L_16);
		// return soundClips[idx];
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_17 = __this->get_soundClips_14();
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_1 = L_20;
		goto IL_00cc;
	}

IL_008b:
	{
		// if ( ++lastIdx >= soundClips.Length ) {
		int32_t L_21 = __this->get_lastIdx_17();
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		int32_t L_22 = V_7;
		__this->set_lastIdx_17(L_22);
		int32_t L_23 = V_7;
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_24 = __this->get_soundClips_14();
		NullCheck(L_24);
		V_6 = (bool)((((int32_t)((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_6;
		if (!L_25)
		{
			goto IL_00bc;
		}
	}
	{
		// lastIdx = 0;
		__this->set_lastIdx_17(0);
	}

IL_00bc:
	{
		// return soundClips[lastIdx];
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_26 = __this->get_soundClips_14();
		int32_t L_27 = __this->get_lastIdx_17();
		NullCheck(L_26);
		int32_t L_28 = L_27;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_1 = L_29;
		goto IL_00cc;
	}

IL_00cc:
	{
		// }
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_30 = V_1;
		return L_30;
	}
}
// UnityEngine.Audio.AudioMixerGroup OVR.SoundFX::GetMixerGroup(UnityEngine.Audio.AudioMixerGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * SoundFX_GetMixerGroup_m302072EBEFAEE2C1721C91C42424E86755FD2031 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * ___defaultMixerGroup0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * V_1 = NULL;
	AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * G_B4_0 = NULL;
	{
		// if ( soundGroup != null ) {
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_0 = __this->get_soundGroup_16();
		V_0 = (bool)((!(((RuntimeObject*)(SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		// return ( soundGroup.mixerGroup != null ) ? soundGroup.mixerGroup : defaultMixerGroup;
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_2 = __this->get_soundGroup_16();
		NullCheck(L_2);
		AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * L_3 = L_2->get_mixerGroup_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0025;
		}
	}
	{
		AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * L_5 = ___defaultMixerGroup0;
		G_B4_0 = L_5;
		goto IL_0030;
	}

IL_0025:
	{
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_6 = __this->get_soundGroup_16();
		NullCheck(L_6);
		AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * L_7 = L_6->get_mixerGroup_2();
		G_B4_0 = L_7;
	}

IL_0030:
	{
		V_1 = G_B4_0;
		goto IL_0037;
	}

IL_0033:
	{
		// return defaultMixerGroup;
		AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * L_8 = ___defaultMixerGroup0;
		V_1 = L_8;
		goto IL_0037;
	}

IL_0037:
	{
		// }
		AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * L_9 = V_1;
		return L_9;
	}
}
// System.Boolean OVR.SoundFX::ReachedGroupPlayLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundFX_ReachedGroupPlayLimit_m530866F47FE81D2506E631CFCEC060513FF00897 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if ( soundGroup != null ) {
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_0 = __this->get_soundGroup_16();
		V_0 = (bool)((!(((RuntimeObject*)(SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// return !soundGroup.CanPlaySound();
		SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * L_2 = __this->get_soundGroup_16();
		NullCheck(L_2);
		bool L_3;
		L_3 = SoundGroup_CanPlaySound_mA86BBE2FEA6A9216B411AFE9052550747EDA9DE3(L_2, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0024;
	}

IL_0020:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Single OVR.SoundFX::GetClipLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SoundFX_GetClipLength_m1C12FB294B31A946DD413D0277070E2B5F799D81 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	int32_t G_B5_0 = 0;
	{
		// if ( ( idx == -1 ) || ( soundClips.Length == 0 ) || ( idx >= soundClips.Length ) || ( soundClips[idx] == null ) ) {
		int32_t L_0 = ___idx0;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_1 = __this->get_soundClips_14();
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_2 = ___idx0;
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_3 = __this->get_soundClips_14();
		NullCheck(L_3);
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_4 = __this->get_soundClips_14();
		int32_t L_5 = ___idx0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_8));
		goto IL_002a;
	}

IL_0029:
	{
		G_B5_0 = 1;
	}

IL_002a:
	{
		V_0 = (bool)G_B5_0;
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		// return 0.0f;
		V_1 = (0.0f);
		goto IL_0048;
	}

IL_0037:
	{
		// return soundClips[idx].length;
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_10 = __this->get_soundClips_14();
		int32_t L_11 = ___idx0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		float L_14;
		L_14 = AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4(L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		goto IL_0048;
	}

IL_0048:
	{
		// }
		float L_15 = V_1;
		return L_15;
	}
}
// System.Single OVR.SoundFX::GetPitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SoundFX_GetPitch_mE0A71164B687F9546D4BE2EA5581D1B139438926 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return Random.Range( pitchVariance.x, pitchVariance.y );
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = __this->get_address_of_pitchVariance_3();
		float L_1 = L_0->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_2 = __this->get_address_of_pitchVariance_3();
		float L_3 = L_2->get_y_1();
		float L_4;
		L_4 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		float L_5 = V_0;
		return L_5;
	}
}
// System.Int32 OVR.SoundFX::PlaySound(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SoundFX_PlaySound_m2C9A39B9A6DE1C4F1CF3F75D3ACFD6363566E704 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, float ___delaySecs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		// playingIdx = -1;
		__this->set_playingIdx_18((-1));
		// if ( !IsValid ) {
		bool L_0;
		L_0 = SoundFX_get_IsValid_m244A0EE19D7DA7039F8FF27CB85A8AD1B571F547(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// return playingIdx;
		int32_t L_2 = __this->get_playingIdx_18();
		V_1 = L_2;
		goto IL_008e;
	}

IL_001f:
	{
		// if ( ( pctChanceToPlay > 0.99f ) || ( Random.value < pctChanceToPlay ) ) {
		float L_3 = __this->get_pctChanceToPlay_9();
		if ((((float)L_3) > ((float)(0.99000001f))))
		{
			goto IL_003b;
		}
	}
	{
		float L_4;
		L_4 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		float L_5 = __this->get_pctChanceToPlay_9();
		G_B5_0 = ((((float)L_4) < ((float)L_5))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 1;
	}

IL_003c:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0085;
		}
	}
	{
		// if ( delay.y > 0.0f ) {
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_7 = __this->get_address_of_delay_11();
		float L_8 = L_7->get_y_1();
		V_3 = (bool)((((float)L_8) > ((float)(0.0f)))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0076;
		}
	}
	{
		// delaySecs = Random.Range( delay.x, delay.y );
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_10 = __this->get_address_of_delay_11();
		float L_11 = L_10->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_12 = __this->get_address_of_delay_11();
		float L_13 = L_12->get_y_1();
		float L_14;
		L_14 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_11, L_13, /*hidden argument*/NULL);
		___delaySecs0 = L_14;
	}

IL_0076:
	{
		// playingIdx = AudioManager.PlaySound( this, EmitterChannel.Any, delaySecs );
		float L_15 = ___delaySecs0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		int32_t L_16;
		L_16 = AudioManager_PlaySound_mB659F2F2065BDFC643B6565D92DAFBB0773C3671(__this, 1, L_15, /*hidden argument*/NULL);
		__this->set_playingIdx_18(L_16);
	}

IL_0085:
	{
		// return playingIdx;
		int32_t L_17 = __this->get_playingIdx_18();
		V_1 = L_17;
		goto IL_008e;
	}

IL_008e:
	{
		// }
		int32_t L_18 = V_1;
		return L_18;
	}
}
// System.Int32 OVR.SoundFX::PlaySoundAt(UnityEngine.Vector3,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SoundFX_PlaySoundAt_m9F0A2C7ADF5474F649AD4B80DD3D03DFC95377D0 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, float ___delaySecs1, float ___volumeOverride2, float ___pitchMultiplier3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		// playingIdx = -1;
		__this->set_playingIdx_18((-1));
		// if ( !IsValid ) {
		bool L_0;
		L_0 = SoundFX_get_IsValid_m244A0EE19D7DA7039F8FF27CB85A8AD1B571F547(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// return playingIdx;
		int32_t L_2 = __this->get_playingIdx_18();
		V_1 = L_2;
		goto IL_0092;
	}

IL_001f:
	{
		// if ( ( pctChanceToPlay > 0.99f ) || ( Random.value < pctChanceToPlay ) ) {
		float L_3 = __this->get_pctChanceToPlay_9();
		if ((((float)L_3) > ((float)(0.99000001f))))
		{
			goto IL_003b;
		}
	}
	{
		float L_4;
		L_4 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		float L_5 = __this->get_pctChanceToPlay_9();
		G_B5_0 = ((((float)L_4) < ((float)L_5))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 1;
	}

IL_003c:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0089;
		}
	}
	{
		// if ( delay.y > 0.0f ) {
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_7 = __this->get_address_of_delay_11();
		float L_8 = L_7->get_y_1();
		V_3 = (bool)((((float)L_8) > ((float)(0.0f)))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0076;
		}
	}
	{
		// delaySecs = Random.Range( delay.x, delay.y );
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_10 = __this->get_address_of_delay_11();
		float L_11 = L_10->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_12 = __this->get_address_of_delay_11();
		float L_13 = L_12->get_y_1();
		float L_14;
		L_14 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_11, L_13, /*hidden argument*/NULL);
		___delaySecs1 = L_14;
	}

IL_0076:
	{
		// playingIdx = AudioManager.PlaySoundAt( pos, this, EmitterChannel.Any, delaySecs, volumeOverride, pitchMultiplier );
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = ___pos0;
		float L_16 = ___delaySecs1;
		float L_17 = ___volumeOverride2;
		float L_18 = ___pitchMultiplier3;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = AudioManager_PlaySoundAt_mD3834EBA87274C016A6855AEDB5400FD7FD4AA63(L_15, __this, 1, L_16, L_17, L_18, /*hidden argument*/NULL);
		__this->set_playingIdx_18(L_19);
	}

IL_0089:
	{
		// return playingIdx;
		int32_t L_20 = __this->get_playingIdx_18();
		V_1 = L_20;
		goto IL_0092;
	}

IL_0092:
	{
		// }
		int32_t L_21 = V_1;
		return L_21;
	}
}
// System.Void OVR.SoundFX::SetOnFinished(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundFX_SetOnFinished_mF2831F0155E59C30729D8D3CEED29319B087498D (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onFinished0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if ( playingIdx > -1 ) {
		int32_t L_0 = __this->get_playingIdx_18();
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// AudioManager.SetOnFinished( playingIdx, onFinished );
		int32_t L_2 = __this->get_playingIdx_18();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___onFinished0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_SetOnFinished_m678B02CAA0A2AE535FC6A2E874A1B741F6C2CAFF(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void OVR.SoundFX::SetOnFinished(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundFX_SetOnFinished_m51E9ED0AD388E0708EFF45F3B5D7DC7007F9A0C7 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___onFinished0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if ( playingIdx > -1 ) {
		int32_t L_0 = __this->get_playingIdx_18();
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// AudioManager.SetOnFinished( playingIdx, onFinished, obj );
		int32_t L_2 = __this->get_playingIdx_18();
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_3 = ___onFinished0;
		RuntimeObject * L_4 = ___obj1;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_SetOnFinished_m6150FC91E300F4F7B41FF76B6F84ECEB8063C7AA(L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Boolean OVR.SoundFX::StopSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundFX_StopSound_m50722DB55C59851AA8988CB7C976383B5FA4DBA0 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// bool stopped = false;
		V_0 = (bool)0;
		// if (playingIdx > -1){
		int32_t L_0 = __this->get_playingIdx_18();
		V_1 = (bool)((((int32_t)L_0) > ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// stopped = AudioManager.StopSound(playingIdx);
		int32_t L_2 = __this->get_playingIdx_18();
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = AudioManager_StopSound_m9AA3F244C13AB2EFAC598103877CC1FB9F03D408(L_2, (bool)1, (bool)0, /*hidden argument*/NULL);
		V_0 = L_3;
		// playingIdx = -1;
		__this->set_playingIdx_18((-1));
	}

IL_0027:
	{
		// return stopped;
		bool L_4 = V_0;
		V_2 = L_4;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		bool L_5 = V_2;
		return L_5;
	}
}
// System.Void OVR.SoundFX::AttachToParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundFX_AttachToParent_mABA0F9856538F9B1849061568C73EC433B3D9E0D (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (playingIdx > -1) {
		int32_t L_0 = __this->get_playingIdx_18();
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// AudioManager.AttachSoundToParent(playingIdx, parent);
		int32_t L_2 = __this->get_playingIdx_18();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ___parent0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_AttachSoundToParent_m07D102FAF95E8725855EA155C15FD0205E13253A(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void OVR.SoundFX::DetachFromParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundFX_DetachFromParent_m756C1B67B8284862F54F05763947D740413C8DD1 (SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (playingIdx > -1) {
		int32_t L_0 = __this->get_playingIdx_18();
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// AudioManager.DetachSoundFromParent(playingIdx);
		int32_t L_2 = __this->get_playingIdx_18();
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		AudioManager_DetachSoundFromParent_mAF74222C9F0DF11B688E754179F2014ED06E935D(L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
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
// OVR.SoundFX OVR.SoundFXRef::get_soundFX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * SoundFXRef_get_soundFX_m2F67886F7F3ED53A1D3585325F47C956008D7F59 (SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * V_1 = NULL;
	{
		// if ( !initialized ) {
		bool L_0 = __this->get_initialized_1();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Init();
		SoundFXRef_Init_m16EC06828D0959792694B288C55B585310EF130B(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// return soundFXCached;
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_2 = __this->get_soundFXCached_2();
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_3 = V_1;
		return L_3;
	}
}
// System.String OVR.SoundFXRef::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SoundFXRef_get_name_m65B26D303789F679087019F1819E64D5EE45F7AE (SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// public string name { get { return soundFXName; } set { soundFXName = value; Init(); } }
		String_t* L_0 = __this->get_soundFXName_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public string name { get { return soundFXName; } set { soundFXName = value; Init(); } }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void OVR.SoundFXRef::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundFXRef_set_name_m07B332F7A1045A482FBBE62DC44569B2A2051F16 (SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string name { get { return soundFXName; } set { soundFXName = value; Init(); } }
		String_t* L_0 = ___value0;
		__this->set_soundFXName_0(L_0);
		// public string name { get { return soundFXName; } set { soundFXName = value; Init(); } }
		SoundFXRef_Init_m16EC06828D0959792694B288C55B585310EF130B(__this, /*hidden argument*/NULL);
		// public string name { get { return soundFXName; } set { soundFXName = value; Init(); } }
		return;
	}
}
// System.Void OVR.SoundFXRef::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundFXRef_Init_m16EC06828D0959792694B288C55B585310EF130B (SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// soundFXCached = AudioManager.FindSoundFX( soundFXName );
		String_t* L_0 = __this->get_soundFXName_0();
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_1;
		L_1 = AudioManager_FindSoundFX_mB2BCD23EDBE3DA675D71EC6D867692051DC8C2E5(L_0, (bool)0, /*hidden argument*/NULL);
		__this->set_soundFXCached_2(L_1);
		// if ( soundFXCached == null ) {
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_2 = __this->get_soundFXCached_2();
		V_0 = (bool)((((RuntimeObject*)(SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// soundFXCached = AudioManager.FindSoundFX( string.Empty );
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t330C8FDAB6853A71780B0ED475BB81C42C665053_il2cpp_TypeInfo_var);
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_5;
		L_5 = AudioManager_FindSoundFX_mB2BCD23EDBE3DA675D71EC6D867692051DC8C2E5(L_4, (bool)0, /*hidden argument*/NULL);
		__this->set_soundFXCached_2(L_5);
	}

IL_0033:
	{
		// initialized = true;
		__this->set_initialized_1((bool)1);
		// }
		return;
	}
}
// System.Int32 OVR.SoundFXRef::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SoundFXRef_get_Length_mBA57A7D79BB459CB3C79ACC7FE647AEB25F7F2B5 (SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public int     Length { get { return soundFX.Length; } }
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_0;
		L_0 = SoundFXRef_get_soundFX_m2F67886F7F3ED53A1D3585325F47C956008D7F59(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SoundFX_get_Length_mC19CCFD4875BD114178BD925FDA4FAE083846AA1(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public int     Length { get { return soundFX.Length; } }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean OVR.SoundFXRef::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundFXRef_get_IsValid_mC26E77183D485CC9870B5D6F973C7805CE3CBAEC (SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool IsValid { get { return soundFX.IsValid; } }
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_0;
		L_0 = SoundFXRef_get_soundFX_m2F67886F7F3ED53A1D3585325F47C956008D7F59(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = SoundFX_get_IsValid_m244A0EE19D7DA7039F8FF27CB85A8AD1B571F547(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public bool IsValid { get { return soundFX.IsValid; } }
		bool L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.AudioClip OVR.SoundFXRef::GetClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * SoundFXRef_GetClip_mE77C8308C29B230636882708F578B5261BDC8B28 (SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * __this, const RuntimeMethod* method)
{
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * V_0 = NULL;
	{
		// return soundFX.GetClip();
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_0;
		L_0 = SoundFXRef_get_soundFX_m2F67886F7F3ED53A1D3585325F47C956008D7F59(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1;
		L_1 = SoundFX_GetClip_m0CDE7570629E9E61B1471DC1A2CBE6F2159D498D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = V_0;
		return L_2;
	}
}
// System.Single OVR.SoundFXRef::GetClipLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SoundFXRef_GetClipLength_m9DBAC50CDC8AE43EC5083A8818FA1BA9E6CAC64F (SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return soundFX.GetClipLength( idx );
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_0;
		L_0 = SoundFXRef_get_soundFX_m2F67886F7F3ED53A1D3585325F47C956008D7F59(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___idx0;
		NullCheck(L_0);
		float L_2;
		L_2 = SoundFX_GetClipLength_m1C12FB294B31A946DD413D0277070E2B5F799D81(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
// System.Int32 OVR.SoundFXRef::PlaySound(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SoundFXRef_PlaySound_mC4555E3DBCA43FB1B3AE8E6DCB6EF2055884CCB3 (SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * __this, float ___delaySecs0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return soundFX.PlaySound( delaySecs );
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_0;
		L_0 = SoundFXRef_get_soundFX_m2F67886F7F3ED53A1D3585325F47C956008D7F59(__this, /*hidden argument*/NULL);
		float L_1 = ___delaySecs0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = SoundFX_PlaySound_m2C9A39B9A6DE1C4F1CF3F75D3ACFD6363566E704(L_0, L_1, /*hidden argument*/NULL);
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
// System.Int32 OVR.SoundFXRef::PlaySoundAt(UnityEngine.Vector3,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SoundFXRef_PlaySoundAt_m6D254AE44C2E35236C833573ECA4607725F64F6D (SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, float ___delaySecs1, float ___volume2, float ___pitchMultiplier3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return soundFX.PlaySoundAt( pos, delaySecs, volume, pitchMultiplier );
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_0;
		L_0 = SoundFXRef_get_soundFX_m2F67886F7F3ED53A1D3585325F47C956008D7F59(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___pos0;
		float L_2 = ___delaySecs1;
		float L_3 = ___volume2;
		float L_4 = ___pitchMultiplier3;
		NullCheck(L_0);
		int32_t L_5;
		L_5 = SoundFX_PlaySoundAt_m9F0A2C7ADF5474F649AD4B80DD3D03DFC95377D0(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void OVR.SoundFXRef::SetOnFinished(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundFXRef_SetOnFinished_m103CD7C21492BAAFEF9CB3361183F0A29758C856 (SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onFinished0, const RuntimeMethod* method)
{
	{
		// soundFX.SetOnFinished( onFinished );
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_0;
		L_0 = SoundFXRef_get_soundFX_m2F67886F7F3ED53A1D3585325F47C956008D7F59(__this, /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___onFinished0;
		NullCheck(L_0);
		SoundFX_SetOnFinished_mF2831F0155E59C30729D8D3CEED29319B087498D(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVR.SoundFXRef::SetOnFinished(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundFXRef_SetOnFinished_m327447D0777A8A07402633783DE7FACB6A445365 (SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___onFinished0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	{
		// soundFX.SetOnFinished( onFinished, obj );
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_0;
		L_0 = SoundFXRef_get_soundFX_m2F67886F7F3ED53A1D3585325F47C956008D7F59(__this, /*hidden argument*/NULL);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_1 = ___onFinished0;
		RuntimeObject * L_2 = ___obj1;
		NullCheck(L_0);
		SoundFX_SetOnFinished_m51E9ED0AD388E0708EFF45F3B5D7DC7007F9A0C7(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean OVR.SoundFXRef::StopSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundFXRef_StopSound_mED4AF0E4C6AF45A1C7DF925DE3B7BA1DE542B1E4 (SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return soundFX.StopSound();
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_0;
		L_0 = SoundFXRef_get_soundFX_m2F67886F7F3ED53A1D3585325F47C956008D7F59(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = SoundFX_StopSound_m50722DB55C59851AA8988CB7C976383B5FA4DBA0(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void OVR.SoundFXRef::AttachToParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundFXRef_AttachToParent_m2BD1F013F5C96F3C8DB0FEC35A545F163E0ED650 (SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, const RuntimeMethod* method)
{
	{
		// soundFX.AttachToParent( parent);
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_0;
		L_0 = SoundFXRef_get_soundFX_m2F67886F7F3ED53A1D3585325F47C956008D7F59(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___parent0;
		NullCheck(L_0);
		SoundFX_AttachToParent_mABA0F9856538F9B1849061568C73EC433B3D9E0D(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVR.SoundFXRef::DetachFromParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundFXRef_DetachFromParent_mF742AC9F27034E3498D01A014F86DAB674AF50EA (SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * __this, const RuntimeMethod* method)
{
	{
		// soundFX.DetachFromParent();
		SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 * L_0;
		L_0 = SoundFXRef_get_soundFX_m2F67886F7F3ED53A1D3585325F47C956008D7F59(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SoundFX_DetachFromParent_m756C1B67B8284862F54F05763947D740413C8DD1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVR.SoundFXRef::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundFXRef__ctor_mB7A3DAA5BBA9E026AAE09321B46F2576A370B7BB (SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string            soundFXName = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_soundFXName_0(L_0);
		// private bool            initialized = false;
		__this->set_initialized_1((bool)0);
		// private SoundFX            soundFXCached = null;
		__this->set_soundFXCached_2((SoundFX_t7605775CFD073C2E096C9ADA99E438689B9558B8 *)NULL);
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
// System.Void OVR.SoundGroup::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundGroup__ctor_m631BD7D4B9B762DA98A5EED7D6859F8C03847461 (SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string            name = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_name_0(L_0);
		// public SoundFX[]        soundList = new SoundFX[0];
		SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB* L_1 = (SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB*)(SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB*)SZArrayNew(SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_soundList_1(L_1);
		// public AudioMixerGroup  mixerGroup = null;                        // default = AudioManager.defaultMixerGroup
		__this->set_mixerGroup_2((AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F *)NULL);
		// public int              maxPlayingSounds = 0;                   // default = 0, unlimited
		__this->set_maxPlayingSounds_3(0);
		// public PreloadSounds    preloadAudio = PreloadSounds.Default;    // default = true, audio clip data will be preloaded
		__this->set_preloadAudio_4(0);
		// public float            volumeOverride = 1.0f;                    // default = 1.0
		__this->set_volumeOverride_5((1.0f));
		// public int              playingSoundCount = 0;
		__this->set_playingSoundCount_6(0);
		// public SoundGroup( string name ) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.name = name;
		String_t* L_2 = ___name0;
		__this->set_name_0(L_2);
		// }
		return;
	}
}
// System.Void OVR.SoundGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundGroup__ctor_m70BB93915A6E2278311A6BE4AD0994B30ADCAFDF (SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string            name = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_name_0(L_0);
		// public SoundFX[]        soundList = new SoundFX[0];
		SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB* L_1 = (SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB*)(SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB*)SZArrayNew(SoundFXU5BU5D_t7AB4345809D1E3FC7D3393708F76863F6CBE48DB_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_soundList_1(L_1);
		// public AudioMixerGroup  mixerGroup = null;                        // default = AudioManager.defaultMixerGroup
		__this->set_mixerGroup_2((AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F *)NULL);
		// public int              maxPlayingSounds = 0;                   // default = 0, unlimited
		__this->set_maxPlayingSounds_3(0);
		// public PreloadSounds    preloadAudio = PreloadSounds.Default;    // default = true, audio clip data will be preloaded
		__this->set_preloadAudio_4(0);
		// public float            volumeOverride = 1.0f;                    // default = 1.0
		__this->set_volumeOverride_5((1.0f));
		// public int              playingSoundCount = 0;
		__this->set_playingSoundCount_6(0);
		// public SoundGroup() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// mixerGroup = null;
		__this->set_mixerGroup_2((AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F *)NULL);
		// maxPlayingSounds = 0;
		__this->set_maxPlayingSounds_3(0);
		// preloadAudio = PreloadSounds.Default;
		__this->set_preloadAudio_4(0);
		// volumeOverride = 1.0f;
		__this->set_volumeOverride_5((1.0f));
		// }
		return;
	}
}
// System.Void OVR.SoundGroup::IncrementPlayCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundGroup_IncrementPlayCount_mC015831392FAC4D8D33D1956E67FBD28B6E7C88E (SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// playingSoundCount = Mathf.Clamp( ++playingSoundCount, 0, maxPlayingSounds );
		int32_t L_0 = __this->get_playingSoundCount_6();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		int32_t L_1 = V_0;
		__this->set_playingSoundCount_6(L_1);
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_maxPlayingSounds_3();
		int32_t L_4;
		L_4 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_2, 0, L_3, /*hidden argument*/NULL);
		__this->set_playingSoundCount_6(L_4);
		// }
		return;
	}
}
// System.Void OVR.SoundGroup::DecrementPlayCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundGroup_DecrementPlayCount_m7B10E17101489B2B39F9B4D01B7BE5C1DE0C7425 (SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// playingSoundCount = Mathf.Clamp( --playingSoundCount, 0, maxPlayingSounds );
		int32_t L_0 = __this->get_playingSoundCount_6();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1));
		int32_t L_1 = V_0;
		__this->set_playingSoundCount_6(L_1);
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_maxPlayingSounds_3();
		int32_t L_4;
		L_4 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_2, 0, L_3, /*hidden argument*/NULL);
		__this->set_playingSoundCount_6(L_4);
		// }
		return;
	}
}
// System.Boolean OVR.SoundGroup::CanPlaySound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundGroup_CanPlaySound_mA86BBE2FEA6A9216B411AFE9052550747EDA9DE3 (SoundGroup_t08F32F7D04333133A34B88F49717BD3655AF9D3F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return ( maxPlayingSounds == 0 ) || ( playingSoundCount < maxPlayingSounds );
		int32_t L_0 = __this->get_maxPlayingSounds_3();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = __this->get_playingSoundCount_6();
		int32_t L_2 = __this->get_maxPlayingSounds_3();
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		bool L_3 = V_0;
		return L_3;
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
// System.Void OVR.TestScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestScript_Start_m94D48971E99A195C70589C888B6DD57247BA1634 (TestScript_tFA72AED664EECA9CC918308C63469BB7F8F36A07 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void OVR.TestScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestScript_Update_mF7CD76EF6F177EB07CF61561978FAA537172C8DF (TestScript_tFA72AED664EECA9CC918308C63469BB7F8F36A07 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if ( Input.GetKeyDown( KeyCode.Alpha1 ) )
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)49), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// testSound1.PlaySoundAt( transform.position );
		SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * L_2 = __this->get_testSound1_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_5;
		L_5 = SoundFXRef_PlaySoundAt_m6D254AE44C2E35236C833573ECA4607725F64F6D(L_2, L_4, (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
	}

IL_0034:
	{
		// if ( Input.GetKeyDown( KeyCode.Alpha2 ) ) {
		bool L_6;
		L_6 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)50), /*hidden argument*/NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		// testSound2.PlaySoundAt( new Vector3( 5.0f, 0.0f, 0.0f ) );
		SoundFXRef_tDD3E67DE0F3386C619BA843A562DA5C17D3BEEC7 * L_8 = __this->get_testSound2_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), (5.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_10;
		L_10 = SoundFXRef_PlaySoundAt_m6D254AE44C2E35236C833573ECA4607725F64F6D(L_8, L_9, (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void OVR.TestScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestScript__ctor_mA92ABBC296A84CCB0B1BBF48A265015946E23EE9 (TestScript_tFA72AED664EECA9CC918308C63469BB7F8F36A07 * __this, const RuntimeMethod* method)
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
// System.Void OVR.AudioManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2CA8F64AAD851DA75B2F53FD06697F761C736DFD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7 * L_0 = (U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7 *)il2cpp_codegen_object_new(U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m408F554F528F0C8A1A0A1A01D1274EB4026B4C64(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void OVR.AudioManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m408F554F528F0C8A1A0A1A01D1274EB4026B4C64 (U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean OVR.AudioManager/<>c::<FindFreeEmitter>b__77_1(OVR.SoundEmitter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindFreeEmitterU3Eb__77_1_mE9FBB4E42EC59A4C9032CDDAA0931D3A3DEB80A6 (U3CU3Ec_tCA35A868067FDA82FCF0D5AD9B71A01D256F24A7 * __this, SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// next = theAudioManager.playingEmitters.Find( item => item != null && item.priority <= SoundPriority.Default ); ;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_0 = ___item0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_2 = ___item0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_priority_8();
		G_B3_0 = ((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		return (bool)G_B3_0;
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
// System.Void OVR.AudioManager/<>c__DisplayClass77_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass77_0__ctor_m6211C85CC9F733CCE647B1F5BF26018311925E64 (U3CU3Ec__DisplayClass77_0_t68997B623E8CD6034DDB01B6BCFAC1C37A7F5037 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean OVR.AudioManager/<>c__DisplayClass77_0::<FindFreeEmitter>b__0(OVR.SoundEmitter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass77_0_U3CFindFreeEmitterU3Eb__0_m9C07CC21D9B564DCFDA1B23F3BF292DBD6070EEB (U3CU3Ec__DisplayClass77_0_t68997B623E8CD6034DDB01B6BCFAC1C37A7F5037 * __this, SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// next = theAudioManager.playingEmitters.Find( item => item != null && item.priority < priority );
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_0 = ___item0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_2 = ___item0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_priority_8();
		int32_t L_4 = __this->get_priority_0();
		G_B3_0 = ((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		return (bool)G_B3_0;
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
// System.Void OVR.SoundEmitter/<DelayedSyncTo>d__57::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedSyncToU3Ed__57__ctor_m549600F80A292FC33E37A8C7AE55932C7A955017 (U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void OVR.SoundEmitter/<DelayedSyncTo>d__57::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedSyncToU3Ed__57_System_IDisposable_Dispose_m359425C3E2AE32887DCAA3F7BE82025CD234DF8A (U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean OVR.SoundEmitter/<DelayedSyncTo>d__57::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayedSyncToU3Ed__57_MoveNext_mB1F46EBA0EBF47E39B5965F67DCBF132D48FD360 (U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0034;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_3 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0034:
	{
		__this->set_U3CU3E1__state_0((-1));
		// audioSource.time = other.time;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_4 = __this->get_U3CU3E4__this_5();
		NullCheck(L_4);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = L_4->get_audioSource_7();
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_6 = __this->get_other_2();
		NullCheck(L_6);
		float L_7;
		L_7 = SoundEmitter_get_time_m70625F6BFBB92382FF85E8BD57B3E6393525BBB0(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		AudioSource_set_time_mE8F36DDE8E610126F9733D13F299C13F71BCE690(L_5, L_7, /*hidden argument*/NULL);
		// audioSource.Play();
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_8 = __this->get_U3CU3E4__this_5();
		NullCheck(L_8);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_9 = L_8->get_audioSource_7();
		NullCheck(L_9);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_9, /*hidden argument*/NULL);
		// FadeTo( fadeTime, toVolume );
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_10 = __this->get_U3CU3E4__this_5();
		float L_11 = __this->get_fadeTime_3();
		float L_12 = __this->get_toVolume_4();
		NullCheck(L_10);
		SoundEmitter_FadeTo_m5D863F2B1863CD96FDE40AF00CFBC673A3863851(L_10, L_11, L_12, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object OVR.SoundEmitter/<DelayedSyncTo>d__57::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedSyncToU3Ed__57_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBD0C57B0A0EBCE19CE95B78094502752E1D993D7 (U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void OVR.SoundEmitter/<DelayedSyncTo>d__57::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedSyncToU3Ed__57_System_Collections_IEnumerator_Reset_mA2B82E979F678459A501FF2954DB6A1194CB52C8 (U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayedSyncToU3Ed__57_System_Collections_IEnumerator_Reset_mA2B82E979F678459A501FF2954DB6A1194CB52C8_RuntimeMethod_var)));
	}
}
// System.Object OVR.SoundEmitter/<DelayedSyncTo>d__57::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedSyncToU3Ed__57_System_Collections_IEnumerator_get_Current_m24B701C23322FEEE59081CA1B38A1CAB37A06211 (U3CDelayedSyncToU3Ed__57_t79810E10A5726ADEBC4D7E1322310E5B480B4365 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void OVR.SoundEmitter/<FadeSoundChannel>d__64::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeSoundChannelU3Ed__64__ctor_m99D1C836FDCC06399523049AC30DED74742E16AE (U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void OVR.SoundEmitter/<FadeSoundChannel>d__64::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeSoundChannelU3Ed__64_System_IDisposable_Dispose_m08B7373413EACA5666AF2D0D28B90E327813F0B7 (U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean OVR.SoundEmitter/<FadeSoundChannel>d__64::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeSoundChannelU3Ed__64_MoveNext_m526AD324A543AFA4EE2C234F1C58FA60DA4E5D40 (U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF * G_B11_0 = NULL;
	U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF * G_B10_0 = NULL;
	float G_B12_0 = 0.0f;
	U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF * G_B12_1 = NULL;
	U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF * G_B14_0 = NULL;
	U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF * G_B13_0 = NULL;
	float G_B15_0 = 0.0f;
	U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF * G_B15_1 = NULL;
	int32_t G_B24_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_005a;
	}

IL_001f:
	{
		goto IL_016c;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if ( delaySecs > 0.0f ) {
		float L_2 = __this->get_delaySecs_2();
		V_1 = (bool)((((float)L_2) > ((float)(0.0f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0062;
		}
	}
	{
		// yield return new WaitForSeconds( delaySecs );
		float L_4 = __this->get_delaySecs_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005a:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0062:
	{
		// float start = ( fadeType == Fade.In ) ? 0.0f : defaultVolume;
		int32_t L_6 = __this->get_fadeType_4();
		G_B10_0 = __this;
		if (!L_6)
		{
			G_B11_0 = __this;
			goto IL_0073;
		}
	}
	{
		float L_7 = __this->get_defaultVolume_5();
		G_B12_0 = L_7;
		G_B12_1 = G_B10_0;
		goto IL_0078;
	}

IL_0073:
	{
		G_B12_0 = (0.0f);
		G_B12_1 = G_B11_0;
	}

IL_0078:
	{
		NullCheck(G_B12_1);
		G_B12_1->set_U3CstartU3E5__1_7(G_B12_0);
		// float end = ( fadeType == Fade.In ) ? defaultVolume : 0.0f;
		int32_t L_8 = __this->get_fadeType_4();
		G_B13_0 = __this;
		if (!L_8)
		{
			G_B14_0 = __this;
			goto IL_008d;
		}
	}
	{
		G_B15_0 = (0.0f);
		G_B15_1 = G_B13_0;
		goto IL_0093;
	}

IL_008d:
	{
		float L_9 = __this->get_defaultVolume_5();
		G_B15_0 = L_9;
		G_B15_1 = G_B14_0;
	}

IL_0093:
	{
		NullCheck(G_B15_1);
		G_B15_1->set_U3CendU3E5__2_8(G_B15_0);
		// bool restartPlay = false;
		__this->set_U3CrestartPlayU3E5__3_9((bool)0);
		// if ( fadeType == Fade.In ) {
		int32_t L_10 = __this->get_fadeType_4();
		V_2 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_00ee;
		}
	}
	{
		// if ( Time.time == 0.0f ) {
		float L_12;
		L_12 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		V_3 = (bool)((((float)L_12) == ((float)(0.0f)))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_00c6;
		}
	}
	{
		// restartPlay = true;
		__this->set_U3CrestartPlayU3E5__3_9((bool)1);
	}

IL_00c6:
	{
		// audioSource.volume = 0.0f;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_14 = __this->get_U3CU3E4__this_6();
		NullCheck(L_14);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_15 = L_14->get_audioSource_7();
		NullCheck(L_15);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_15, (0.0f), /*hidden argument*/NULL);
		// audioSource.Play();
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_16 = __this->get_U3CU3E4__this_6();
		NullCheck(L_16);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_17 = L_16->get_audioSource_7();
		NullCheck(L_17);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_17, /*hidden argument*/NULL);
	}

IL_00ee:
	{
		// float startTime = Time.realtimeSinceStartup;
		float L_18;
		L_18 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		__this->set_U3CstartTimeU3E5__4_10(L_18);
		// float elapsedTime = 0.0f;
		__this->set_U3CelapsedTimeU3E5__5_11((0.0f));
		goto IL_01c7;
	}

IL_0109:
	{
		// elapsedTime = Time.realtimeSinceStartup - startTime;
		float L_19;
		L_19 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		float L_20 = __this->get_U3CstartTimeU3E5__4_10();
		__this->set_U3CelapsedTimeU3E5__5_11(((float)il2cpp_codegen_subtract((float)L_19, (float)L_20)));
		// float t = elapsedTime / fadeTime;
		float L_21 = __this->get_U3CelapsedTimeU3E5__5_11();
		float L_22 = __this->get_fadeTime_3();
		__this->set_U3CtU3E5__6_12(((float)((float)L_21/(float)L_22)));
		// audioSource.volume = Mathf.Lerp( start, end, t );
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_23 = __this->get_U3CU3E4__this_6();
		NullCheck(L_23);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_24 = L_23->get_audioSource_7();
		float L_25 = __this->get_U3CstartU3E5__1_7();
		float L_26 = __this->get_U3CendU3E5__2_8();
		float L_27 = __this->get_U3CtU3E5__6_12();
		float L_28;
		L_28 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_25, L_26, L_27, /*hidden argument*/NULL);
		NullCheck(L_24);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_24, L_28, /*hidden argument*/NULL);
		// yield return 0;
		int32_t L_29 = 0;
		RuntimeObject * L_30 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_29);
		__this->set_U3CU3E2__current_1(L_30);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_016c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if ( restartPlay && ( Time.time > 0.0f ) ) {
		bool L_31 = __this->get_U3CrestartPlayU3E5__3_9();
		if (!L_31)
		{
			goto IL_0189;
		}
	}
	{
		float L_32;
		L_32 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		G_B24_0 = ((((float)L_32) > ((float)(0.0f)))? 1 : 0);
		goto IL_018a;
	}

IL_0189:
	{
		G_B24_0 = 0;
	}

IL_018a:
	{
		V_4 = (bool)G_B24_0;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_01aa;
		}
	}
	{
		// audioSource.Play();
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_34 = __this->get_U3CU3E4__this_6();
		NullCheck(L_34);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_35 = L_34->get_audioSource_7();
		NullCheck(L_35);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_35, /*hidden argument*/NULL);
		// restartPlay = false;
		__this->set_U3CrestartPlayU3E5__3_9((bool)0);
	}

IL_01aa:
	{
		// if ( !audioSource.isPlaying ) {
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_36 = __this->get_U3CU3E4__this_6();
		NullCheck(L_36);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_37 = L_36->get_audioSource_7();
		NullCheck(L_37);
		bool L_38;
		L_38 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8(L_37, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_5;
		if (!L_39)
		{
			goto IL_01c6;
		}
	}
	{
		// break;
		goto IL_01de;
	}

IL_01c6:
	{
	}

IL_01c7:
	{
		// while ( elapsedTime < fadeTime ) {
		float L_40 = __this->get_U3CelapsedTimeU3E5__5_11();
		float L_41 = __this->get_fadeTime_3();
		V_6 = (bool)((((float)L_40) < ((float)L_41))? 1 : 0);
		bool L_42 = V_6;
		if (L_42)
		{
			goto IL_0109;
		}
	}

IL_01de:
	{
		// if ( fadeType == Fade.Out ) {
		int32_t L_43 = __this->get_fadeType_4();
		V_7 = (bool)((((int32_t)L_43) == ((int32_t)1))? 1 : 0);
		bool L_44 = V_7;
		if (!L_44)
		{
			goto IL_01fb;
		}
	}
	{
		// Stop();
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_45 = __this->get_U3CU3E4__this_6();
		NullCheck(L_45);
		SoundEmitter_Stop_m3300C33E8D6996E9EC28F0AC81D1702912AC6DE4(L_45, /*hidden argument*/NULL);
	}

IL_01fb:
	{
		// state = FadeState.Null;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_46 = __this->get_U3CU3E4__this_6();
		NullCheck(L_46);
		L_46->set_state_6(0);
		// }
		return (bool)0;
	}
}
// System.Object OVR.SoundEmitter/<FadeSoundChannel>d__64::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeSoundChannelU3Ed__64_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBAADA377C50691E3F96BC96709DDD133D8339EF3 (U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void OVR.SoundEmitter/<FadeSoundChannel>d__64::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeSoundChannelU3Ed__64_System_Collections_IEnumerator_Reset_m53E4F2E495A32DE24F0487B17FFEC367A52FB625 (U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeSoundChannelU3Ed__64_System_Collections_IEnumerator_Reset_m53E4F2E495A32DE24F0487B17FFEC367A52FB625_RuntimeMethod_var)));
	}
}
// System.Object OVR.SoundEmitter/<FadeSoundChannel>d__64::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeSoundChannelU3Ed__64_System_Collections_IEnumerator_get_Current_m04A64953984C7BCCB4471D0D307EAAA4404D03A5 (U3CFadeSoundChannelU3Ed__64_t136FDCD84D98F11B8D10D94849DDD6B6CCE0D7DF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void OVR.SoundEmitter/<FadeSoundChannelTo>d__63::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeSoundChannelToU3Ed__63__ctor_m9C7EEA204BF98361F0A07E4225458119EAC2B71D (U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void OVR.SoundEmitter/<FadeSoundChannelTo>d__63::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeSoundChannelToU3Ed__63_System_IDisposable_Dispose_mB57E0BEF4A8E0F28126F5558769AF70664EC7A37 (U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean OVR.SoundEmitter/<FadeSoundChannelTo>d__63::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeSoundChannelToU3Ed__63_MoveNext_m03F98A70BEEE07A0573B840AB2E81491AAD287B7 (U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00c0;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float start = audioSource.volume;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_3 = __this->get_U3CU3E4__this_4();
		NullCheck(L_3);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = L_3->get_audioSource_7();
		NullCheck(L_4);
		float L_5;
		L_5 = AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556(L_4, /*hidden argument*/NULL);
		__this->set_U3CstartU3E5__1_5(L_5);
		// float end = toVolume;
		float L_6 = __this->get_toVolume_3();
		__this->set_U3CendU3E5__2_6(L_6);
		// float startTime = Time.realtimeSinceStartup;
		float L_7;
		L_7 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		__this->set_U3CstartTimeU3E5__3_7(L_7);
		// float elapsedTime = 0.0f;
		__this->set_U3CelapsedTimeU3E5__4_8((0.0f));
		goto IL_00c8;
	}

IL_005d:
	{
		// elapsedTime = Time.realtimeSinceStartup - startTime;
		float L_8;
		L_8 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		float L_9 = __this->get_U3CstartTimeU3E5__3_7();
		__this->set_U3CelapsedTimeU3E5__4_8(((float)il2cpp_codegen_subtract((float)L_8, (float)L_9)));
		// float t = elapsedTime / fadeTime;
		float L_10 = __this->get_U3CelapsedTimeU3E5__4_8();
		float L_11 = __this->get_fadeTime_2();
		__this->set_U3CtU3E5__5_9(((float)((float)L_10/(float)L_11)));
		// audioSource.volume = Mathf.Lerp( start, end, t );
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_12 = __this->get_U3CU3E4__this_4();
		NullCheck(L_12);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_13 = L_12->get_audioSource_7();
		float L_14 = __this->get_U3CstartU3E5__1_5();
		float L_15 = __this->get_U3CendU3E5__2_6();
		float L_16 = __this->get_U3CtU3E5__5_9();
		float L_17;
		L_17 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_14, L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_13, L_17, /*hidden argument*/NULL);
		// yield return 0;
		int32_t L_18 = 0;
		RuntimeObject * L_19 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_18);
		__this->set_U3CU3E2__current_1(L_19);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00c0:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00c8:
	{
		// while ( elapsedTime < fadeTime ) {
		float L_20 = __this->get_U3CelapsedTimeU3E5__4_8();
		float L_21 = __this->get_fadeTime_2();
		V_1 = (bool)((((float)L_20) < ((float)L_21))? 1 : 0);
		bool L_22 = V_1;
		if (L_22)
		{
			goto IL_005d;
		}
	}
	{
		// state = FadeState.Null;
		SoundEmitter_tCB4A56D2B8F980AF102B0B83A484B902E342031F * L_23 = __this->get_U3CU3E4__this_4();
		NullCheck(L_23);
		L_23->set_state_6(0);
		// }
		return (bool)0;
	}
}
// System.Object OVR.SoundEmitter/<FadeSoundChannelTo>d__63::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeSoundChannelToU3Ed__63_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDC7B369C0F4CDC81B5B82E3B4545B3D9721E52B0 (U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void OVR.SoundEmitter/<FadeSoundChannelTo>d__63::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeSoundChannelToU3Ed__63_System_Collections_IEnumerator_Reset_m496C66F1B3298154F60EAF18E62FC01C71B05058 (U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeSoundChannelToU3Ed__63_System_Collections_IEnumerator_Reset_m496C66F1B3298154F60EAF18E62FC01C71B05058_RuntimeMethod_var)));
	}
}
// System.Object OVR.SoundEmitter/<FadeSoundChannelTo>d__63::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeSoundChannelToU3Ed__63_System_Collections_IEnumerator_get_Current_mBE43BD5839EBF836BE8354A16E01C282AA6B34D3 (U3CFadeSoundChannelToU3Ed__63_t60C9145E25936D87A2846FFE4E20AC0930B3F281 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
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
