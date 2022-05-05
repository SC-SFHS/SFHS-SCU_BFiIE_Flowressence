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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4;
// System.Collections.Generic.List`1<OVRLipSync/Frame>
struct List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC;
// OVRTouchpad/OVRTouchpadCallback`1<System.Int32Enum>
struct OVRTouchpadCallback_1_t0B8ECDB83D53377D29FCA99DB82D3870AD732453;
// OVRTouchpad/OVRTouchpadCallback`1<OVRTouchpad/TouchEvent>
struct OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// EnableSwitch[]
struct EnableSwitchU5BU5D_t0E58B43C2C4981AA888AD44DC027DAB703886E35;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871;
// OVRLipSyncDebugConsole[]
struct OVRLipSyncDebugConsoleU5BU5D_tA03669460B339E44DD358F4BF8483307076352E9;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Texture[]
struct TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// OVRLipSync/Frame[]
struct FrameU5BU5D_t38CF4AE22D7635ADDB182388AE6A623D6E1A5274;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// EnableSwitch
struct EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// LipSyncDemo_Control
struct LipSyncDemo_Control_t995A4E9E3582F93D39078223ADB6D3F39AF2449C;
// LipSyncDemo_SetCurrentTarget
struct LipSyncDemo_SetCurrentTarget_tF7E8E55732074689954CEF44A58450C4A2FFE4CE;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// OVRLipSync
struct OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE;
// OVRLipSyncContext
struct OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA;
// OVRLipSyncContextBase
struct OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F;
// OVRLipSyncContextCanned
struct OVRLipSyncContextCanned_tB77028617E9368F7D22D672569F37ED1BB74552F;
// OVRLipSyncContextMorphTarget
struct OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19;
// OVRLipSyncContextTextureFlip
struct OVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E;
// OVRLipSyncDebugConsole
struct OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011;
// OVRLipSyncMicInput
struct OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66;
// OVRLipSyncSequence
struct OVRLipSyncSequence_t67C1C061971274CF4F2264B46B14A4FAACE39799;
// OVRNamedArrayAttribute
struct OVRNamedArrayAttribute_t1C1FFC7DD44295D9CB5A4115AFE953DC53348857;
// OVRTouchpadHelper
struct OVRTouchpadHelper_tA41F61CC41849A4352DE8927B9A8E10604D2BFA1;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// OVRLipSync/Frame
struct Frame_tA0234D25F233FE4D496EA062950D0B45B401A117;

IL2CPP_EXTERN_C RuntimeClass* ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Frame_tA0234D25F233FE4D496EA062950D0B45B401A117_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Viseme_tAC3B16B0F7DB260DDE25C1E8654CA7BF5591EF28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t3975A44A12BEB7080C67D91FDB33D170C9C63289____0881D629F9101D9D0DFCFE85D19C395FAD7CCF6050FDF4B27A4B73C2BF7F3B6B_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral002506A5D09CFF7B94F395D64F8A508824573C98;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral017A396FA3DCD732966B7067CF8CA0ED2BE9038A;
IL2CPP_EXTERN_C String_t* _stringLiteral093173EC45B6BA7442A09BBBF1D3F749F5ABD729;
IL2CPP_EXTERN_C String_t* _stringLiteral0EE77E8E1A5C65C8B826A37FA126AFF637A5661B;
IL2CPP_EXTERN_C String_t* _stringLiteral1E60C3A0690C68A7C67C75E06DFFD04BC4712840;
IL2CPP_EXTERN_C String_t* _stringLiteral3011FE5FA7FF5AA746DE2FF717EB7DC4F4879F6B;
IL2CPP_EXTERN_C String_t* _stringLiteral3BB4FB21295FF0D21F7681048829851201A7EB86;
IL2CPP_EXTERN_C String_t* _stringLiteral3CB7A1AF24E3CCDDF94046BDD39A5ACCDF5AA216;
IL2CPP_EXTERN_C String_t* _stringLiteral3D6CCC490AAEC159C8718DED030A7570B89D016B;
IL2CPP_EXTERN_C String_t* _stringLiteral46AFD0B590DA602E3D55726017FF50D073CFDC6E;
IL2CPP_EXTERN_C String_t* _stringLiteral486643064ACFB5AA95EEEADA99D75FBA6EF0FA3E;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral54E0B22B3D4AEC4E9474452DA11C2EE27A304186;
IL2CPP_EXTERN_C String_t* _stringLiteral598BAAB1C2571B68F67FA24351D7C7DB45000A9B;
IL2CPP_EXTERN_C String_t* _stringLiteral5DE9E89F9979F4458CA9715FC3013CDA803A8920;
IL2CPP_EXTERN_C String_t* _stringLiteral5FDB97E8EAADF1BF16D2241C8AAAB2299EA06DF9;
IL2CPP_EXTERN_C String_t* _stringLiteral61403819783B23D45287A738375948DA019C3974;
IL2CPP_EXTERN_C String_t* _stringLiteral6BC2B46FC07E5159ADEF81EE494E8DFEA65D2BEB;
IL2CPP_EXTERN_C String_t* _stringLiteral7004DC2D2C6E911CE92A6C2C89FAF48B14571259;
IL2CPP_EXTERN_C String_t* _stringLiteral76E32CC4A70E7FB1C8DEC57248F78E94572950DE;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8F346862DC7E42DF267B26A8D7430AD6A32C70FA;
IL2CPP_EXTERN_C String_t* _stringLiteralA31AC86A8134636138FF75403386F05BF552C75F;
IL2CPP_EXTERN_C String_t* _stringLiteralA63D3C02D75DB19D3254DCAC5B1AA48C4EC9A56D;
IL2CPP_EXTERN_C String_t* _stringLiteralA9E0510A9B57F46DA93669A9300935B5AF09D0DD;
IL2CPP_EXTERN_C String_t* _stringLiteralADDC63EB313A5463B66F6B8FAE5490FC3CB30CBD;
IL2CPP_EXTERN_C String_t* _stringLiteralC27444E1BD8044B6DBFBF638C4DE6D909AA57AEF;
IL2CPP_EXTERN_C String_t* _stringLiteralCC0B5D63F66F8D02E9B3A9678AA1AD1F001F0C8C;
IL2CPP_EXTERN_C String_t* _stringLiteralCE994D9E38836ABFB2CAF86E64D880AC5523D85D;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDDD779ECBA7D345CFA63A0F001CA13C61BCEC842;
IL2CPP_EXTERN_C String_t* _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
IL2CPP_EXTERN_C String_t* _stringLiteralEADCA8F3D09CE5A1D1F6083658C1BFF29E3E1804;
IL2CPP_EXTERN_C String_t* _stringLiteralEB2A79BFE254FBCE069C2941E5F16F85A0553F60;
IL2CPP_EXTERN_C String_t* _stringLiteralF6A1CD0933415BD0D5EA2DB8E882891D1666E6A1;
IL2CPP_EXTERN_C String_t* _stringLiteralFC2466DAF2E2E172224B1C3C8023036E9610CA15;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisOVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F_m3A8F35193148094ECE42EEFA868B044C05826B00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisOVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA_m6287587580820D781AEAFD33F22E6D3149EBACFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnableSwitch_SetActive_TisOVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19_m8B638FF339C21F2E5B5804B3FA810DA4717FC26A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnableSwitch_SetActive_TisOVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E_m27C034F694F0EB5F96FAAF4F7418777A6B54ADE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m00E67835DCABA6A49B5CEE6415E8D5377C8BB5DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisOVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_m4F83BF5F42A90B3D8E76CC64A61A038333EFB81A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisOVRTouchpadHelper_tA41F61CC41849A4352DE8927B9A8E10604D2BFA1_m80B34FFFEB591DB6EC62A33ED4DAB816EBF84C91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LipSyncDemo_SetCurrentTarget_LocalTouchEventCallback_m69B26FDF1F5437E6F13B20E76F7219D70D29DBA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6CFC543DA637FCF28B1AEB05DC0D6B3DD6C3BF49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m29F9D043CF093E440790C1319778284E00D24362_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7BC56355EB45C14AC64B0DFAED97EA461FE6500E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OVRLipSyncContext_LocalTouchEventCallback_m122281F790C8A7EF9F860F665BD2C3AFFB3B40D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OVRLipSyncMicInput_StartMicrophone_m63B59F3A4EB4D63F654312585E2F830A3FC8BD7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OVRTouchpadCallback_1_Invoke_m565E1355551356D7F89DAF9BB11542B423B8AA26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OVRTouchpadCallback_1__ctor_m5D93A4018425521E2BBFF1A0A9CFD48077D15070_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OVRTouchpadHelper_LocalTouchEventCallback_m133316FF5130A9004C05FB65785DBE0828EC474D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisOVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_mFD1870043FF793622D8029862EDC325A27CADE3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Signals_t834D248B45451DCA17B5D37B7F295D6812EE0CE3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Viseme_tAC3B16B0F7DB260DDE25C1E8654CA7BF5591EF28_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EnableSwitchU5BU5D_t0E58B43C2C4981AA888AD44DC027DAB703886E35;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871;
struct OVRLipSyncDebugConsoleU5BU5D_tA03669460B339E44DD358F4BF8483307076352E9;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t12D2F825F49646857C1CE180C0258276B2E756EC 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____items_1)); }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* get__items_1() const { return ____items_1; }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_StaticFields, ____emptyArray_5)); }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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


// System.Collections.Generic.List`1<OVRLipSync/Frame>
struct List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FrameU5BU5D_t38CF4AE22D7635ADDB182388AE6A623D6E1A5274* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC, ____items_1)); }
	inline FrameU5BU5D_t38CF4AE22D7635ADDB182388AE6A623D6E1A5274* get__items_1() const { return ____items_1; }
	inline FrameU5BU5D_t38CF4AE22D7635ADDB182388AE6A623D6E1A5274** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FrameU5BU5D_t38CF4AE22D7635ADDB182388AE6A623D6E1A5274* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FrameU5BU5D_t38CF4AE22D7635ADDB182388AE6A623D6E1A5274* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC_StaticFields, ____emptyArray_5)); }
	inline FrameU5BU5D_t38CF4AE22D7635ADDB182388AE6A623D6E1A5274* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FrameU5BU5D_t38CF4AE22D7635ADDB182388AE6A623D6E1A5274** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FrameU5BU5D_t38CF4AE22D7635ADDB182388AE6A623D6E1A5274* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____items_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___emptyArray_5;

public:
	inline static int32_t get_offset_of_emptyArray_5() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields, ___emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_emptyArray_5() const { return ___emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_emptyArray_5() { return &___emptyArray_5; }
	inline void set_emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_5), (void*)value);
	}
};


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
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

// OVRLipSync/Frame
struct Frame_tA0234D25F233FE4D496EA062950D0B45B401A117  : public RuntimeObject
{
public:
	// System.Int32 OVRLipSync/Frame::frameNumber
	int32_t ___frameNumber_0;
	// System.Int32 OVRLipSync/Frame::frameDelay
	int32_t ___frameDelay_1;
	// System.Single[] OVRLipSync/Frame::Visemes
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___Visemes_2;
	// System.Single OVRLipSync/Frame::laughterScore
	float ___laughterScore_3;

public:
	inline static int32_t get_offset_of_frameNumber_0() { return static_cast<int32_t>(offsetof(Frame_tA0234D25F233FE4D496EA062950D0B45B401A117, ___frameNumber_0)); }
	inline int32_t get_frameNumber_0() const { return ___frameNumber_0; }
	inline int32_t* get_address_of_frameNumber_0() { return &___frameNumber_0; }
	inline void set_frameNumber_0(int32_t value)
	{
		___frameNumber_0 = value;
	}

	inline static int32_t get_offset_of_frameDelay_1() { return static_cast<int32_t>(offsetof(Frame_tA0234D25F233FE4D496EA062950D0B45B401A117, ___frameDelay_1)); }
	inline int32_t get_frameDelay_1() const { return ___frameDelay_1; }
	inline int32_t* get_address_of_frameDelay_1() { return &___frameDelay_1; }
	inline void set_frameDelay_1(int32_t value)
	{
		___frameDelay_1 = value;
	}

	inline static int32_t get_offset_of_Visemes_2() { return static_cast<int32_t>(offsetof(Frame_tA0234D25F233FE4D496EA062950D0B45B401A117, ___Visemes_2)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_Visemes_2() const { return ___Visemes_2; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_Visemes_2() { return &___Visemes_2; }
	inline void set_Visemes_2(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___Visemes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Visemes_2), (void*)value);
	}

	inline static int32_t get_offset_of_laughterScore_3() { return static_cast<int32_t>(offsetof(Frame_tA0234D25F233FE4D496EA062950D0B45B401A117, ___laughterScore_3)); }
	inline float get_laughterScore_3() const { return ___laughterScore_3; }
	inline float* get_address_of_laughterScore_3() { return &___laughterScore_3; }
	inline void set_laughterScore_3(float value)
	{
		___laughterScore_3 = value;
	}
};


// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>
struct InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>
struct InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>
struct InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>
struct InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

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


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E 
{
public:
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;

public:
	inline static int32_t get_offset_of_m_DeviceId_1() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_DeviceId_1)); }
	inline uint64_t get_m_DeviceId_1() const { return ___m_DeviceId_1; }
	inline uint64_t* get_address_of_m_DeviceId_1() { return &___m_DeviceId_1; }
	inline void set_m_DeviceId_1(uint64_t value)
	{
		___m_DeviceId_1 = value;
	}

	inline static int32_t get_offset_of_m_Initialized_2() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_Initialized_2)); }
	inline bool get_m_Initialized_2() const { return ___m_Initialized_2; }
	inline bool* get_address_of_m_Initialized_2() { return &___m_Initialized_2; }
	inline void set_m_Initialized_2(bool value)
	{
		___m_Initialized_2 = value;
	}
};

struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___s_InputSubsystemCache_0;

public:
	inline static int32_t get_offset_of_s_InputSubsystemCache_0() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_StaticFields, ___s_InputSubsystemCache_0)); }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * get_s_InputSubsystemCache_0() const { return ___s_InputSubsystemCache_0; }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 ** get_address_of_s_InputSubsystemCache_0() { return &___s_InputSubsystemCache_0; }
	inline void set_s_InputSubsystemCache_0(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * value)
	{
		___s_InputSubsystemCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputSubsystemCache_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=60
struct __StaticArrayInitTypeSizeU3D60_t8AAAC12310FDAF285AB6602C2FF6A22EF86E31D9 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D60_t8AAAC12310FDAF285AB6602C2FF6A22EF86E31D9__padding[60];
	};

public:
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>
struct Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D, ___list_0)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_list_0() const { return ___list_0; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D, ___current_3)); }
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  get_current_3() const { return ___current_3; }
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  value)
	{
		___current_3 = value;
	}
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t3975A44A12BEB7080C67D91FDB33D170C9C63289  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3975A44A12BEB7080C67D91FDB33D170C9C63289_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=60 <PrivateImplementationDetails>::0881D629F9101D9D0DFCFE85D19C395FAD7CCF6050FDF4B27A4B73C2BF7F3B6B
	__StaticArrayInitTypeSizeU3D60_t8AAAC12310FDAF285AB6602C2FF6A22EF86E31D9  ___0881D629F9101D9D0DFCFE85D19C395FAD7CCF6050FDF4B27A4B73C2BF7F3B6B_0;

public:
	inline static int32_t get_offset_of_U30881D629F9101D9D0DFCFE85D19C395FAD7CCF6050FDF4B27A4B73C2BF7F3B6B_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3975A44A12BEB7080C67D91FDB33D170C9C63289_StaticFields, ___0881D629F9101D9D0DFCFE85D19C395FAD7CCF6050FDF4B27A4B73C2BF7F3B6B_0)); }
	inline __StaticArrayInitTypeSizeU3D60_t8AAAC12310FDAF285AB6602C2FF6A22EF86E31D9  get_U30881D629F9101D9D0DFCFE85D19C395FAD7CCF6050FDF4B27A4B73C2BF7F3B6B_0() const { return ___0881D629F9101D9D0DFCFE85D19C395FAD7CCF6050FDF4B27A4B73C2BF7F3B6B_0; }
	inline __StaticArrayInitTypeSizeU3D60_t8AAAC12310FDAF285AB6602C2FF6A22EF86E31D9 * get_address_of_U30881D629F9101D9D0DFCFE85D19C395FAD7CCF6050FDF4B27A4B73C2BF7F3B6B_0() { return &___0881D629F9101D9D0DFCFE85D19C395FAD7CCF6050FDF4B27A4B73C2BF7F3B6B_0; }
	inline void set_U30881D629F9101D9D0DFCFE85D19C395FAD7CCF6050FDF4B27A4B73C2BF7F3B6B_0(__StaticArrayInitTypeSizeU3D60_t8AAAC12310FDAF285AB6602C2FF6A22EF86E31D9  value)
	{
		___0881D629F9101D9D0DFCFE85D19C395FAD7CCF6050FDF4B27A4B73C2BF7F3B6B_0 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.CommonUsages
struct CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A  : public RuntimeObject
{
public:

public:
};

struct CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::isTracked
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___isTracked_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primaryButton_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primaryTouch_2;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondaryButton_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondaryTouch_4;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::gripButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___gripButton_5;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::triggerButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___triggerButton_6;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::menuButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___menuButton_7;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisClick
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primary2DAxisClick_8;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primary2DAxisTouch_9;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisClick
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondary2DAxisClick_10;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondary2DAxisTouch_11;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::userPresence
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___userPresence_12;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState> UnityEngine.XR.CommonUsages::trackingState
	InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  ___trackingState_13;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::batteryLevel
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___batteryLevel_14;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::trigger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___trigger_15;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::grip
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___grip_16;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::primary2DAxis
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___primary2DAxis_17;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::secondary2DAxis
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___secondary2DAxis_18;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::devicePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___devicePosition_19;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyePosition_20;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyePosition_21;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyePosition_22;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraPosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraPosition_23;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceVelocity_24;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAngularVelocity_25;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeVelocity_26;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAngularVelocity_27;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeVelocity_28;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAngularVelocity_29;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeVelocity_30;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAngularVelocity_31;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraVelocity_32;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAngularVelocity_33;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAcceleration_34;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAngularAcceleration_35;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAcceleration_36;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAngularAcceleration_37;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAcceleration_38;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAngularAcceleration_39;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAcceleration_40;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAngularAcceleration_41;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAcceleration_42;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAngularAcceleration_43;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::deviceRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___deviceRotation_44;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::leftEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___leftEyeRotation_45;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::rightEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___rightEyeRotation_46;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::centerEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___centerEyeRotation_47;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::colorCameraRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___colorCameraRotation_48;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand> UnityEngine.XR.CommonUsages::handData
	InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  ___handData_49;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes> UnityEngine.XR.CommonUsages::eyesData
	InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  ___eyesData_50;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::dPad
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___dPad_51;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___indexFinger_52;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::middleFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___middleFinger_53;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::ringFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___ringFinger_54;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::pinkyFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___pinkyFinger_55;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::thumbrest
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___thumbrest_56;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexTouch
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___indexTouch_57;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::thumbTouch
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___thumbTouch_58;

public:
	inline static int32_t get_offset_of_isTracked_0() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___isTracked_0)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_isTracked_0() const { return ___isTracked_0; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_isTracked_0() { return &___isTracked_0; }
	inline void set_isTracked_0(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___isTracked_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___isTracked_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryButton_1() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primaryButton_1)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primaryButton_1() const { return ___primaryButton_1; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primaryButton_1() { return &___primaryButton_1; }
	inline void set_primaryButton_1(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primaryButton_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryButton_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryTouch_2() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primaryTouch_2)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primaryTouch_2() const { return ___primaryTouch_2; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primaryTouch_2() { return &___primaryTouch_2; }
	inline void set_primaryTouch_2(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primaryTouch_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryTouch_2))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryButton_3() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondaryButton_3)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondaryButton_3() const { return ___secondaryButton_3; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondaryButton_3() { return &___secondaryButton_3; }
	inline void set_secondaryButton_3(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondaryButton_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryButton_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryTouch_4() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondaryTouch_4)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondaryTouch_4() const { return ___secondaryTouch_4; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondaryTouch_4() { return &___secondaryTouch_4; }
	inline void set_secondaryTouch_4(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondaryTouch_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryTouch_4))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_gripButton_5() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___gripButton_5)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_gripButton_5() const { return ___gripButton_5; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_gripButton_5() { return &___gripButton_5; }
	inline void set_gripButton_5(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___gripButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___gripButton_5))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_triggerButton_6() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___triggerButton_6)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_triggerButton_6() const { return ___triggerButton_6; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_triggerButton_6() { return &___triggerButton_6; }
	inline void set_triggerButton_6(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___triggerButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___triggerButton_6))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_menuButton_7() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___menuButton_7)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_menuButton_7() const { return ___menuButton_7; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_menuButton_7() { return &___menuButton_7; }
	inline void set_menuButton_7(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___menuButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___menuButton_7))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisClick_8() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxisClick_8)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primary2DAxisClick_8() const { return ___primary2DAxisClick_8; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primary2DAxisClick_8() { return &___primary2DAxisClick_8; }
	inline void set_primary2DAxisClick_8(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primary2DAxisClick_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisClick_8))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisTouch_9() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxisTouch_9)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primary2DAxisTouch_9() const { return ___primary2DAxisTouch_9; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primary2DAxisTouch_9() { return &___primary2DAxisTouch_9; }
	inline void set_primary2DAxisTouch_9(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primary2DAxisTouch_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisTouch_9))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisClick_10() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxisClick_10)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondary2DAxisClick_10() const { return ___secondary2DAxisClick_10; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondary2DAxisClick_10() { return &___secondary2DAxisClick_10; }
	inline void set_secondary2DAxisClick_10(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondary2DAxisClick_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisClick_10))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisTouch_11() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxisTouch_11)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondary2DAxisTouch_11() const { return ___secondary2DAxisTouch_11; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondary2DAxisTouch_11() { return &___secondary2DAxisTouch_11; }
	inline void set_secondary2DAxisTouch_11(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondary2DAxisTouch_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisTouch_11))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_userPresence_12() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___userPresence_12)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_userPresence_12() const { return ___userPresence_12; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_userPresence_12() { return &___userPresence_12; }
	inline void set_userPresence_12(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___userPresence_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___userPresence_12))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trackingState_13() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___trackingState_13)); }
	inline InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  get_trackingState_13() const { return ___trackingState_13; }
	inline InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65 * get_address_of_trackingState_13() { return &___trackingState_13; }
	inline void set_trackingState_13(InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  value)
	{
		___trackingState_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trackingState_13))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_batteryLevel_14() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___batteryLevel_14)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_batteryLevel_14() const { return ___batteryLevel_14; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_batteryLevel_14() { return &___batteryLevel_14; }
	inline void set_batteryLevel_14(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___batteryLevel_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___batteryLevel_14))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trigger_15() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___trigger_15)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_trigger_15() const { return ___trigger_15; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_trigger_15() { return &___trigger_15; }
	inline void set_trigger_15(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___trigger_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trigger_15))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_grip_16() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___grip_16)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_grip_16() const { return ___grip_16; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_grip_16() { return &___grip_16; }
	inline void set_grip_16(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___grip_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___grip_16))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxis_17() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxis_17)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_primary2DAxis_17() const { return ___primary2DAxis_17; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_primary2DAxis_17() { return &___primary2DAxis_17; }
	inline void set_primary2DAxis_17(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___primary2DAxis_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxis_17))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxis_18() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxis_18)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_secondary2DAxis_18() const { return ___secondary2DAxis_18; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_secondary2DAxis_18() { return &___secondary2DAxis_18; }
	inline void set_secondary2DAxis_18(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___secondary2DAxis_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxis_18))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_devicePosition_19() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___devicePosition_19)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_devicePosition_19() const { return ___devicePosition_19; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_devicePosition_19() { return &___devicePosition_19; }
	inline void set_devicePosition_19(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___devicePosition_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___devicePosition_19))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyePosition_20() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyePosition_20)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyePosition_20() const { return ___leftEyePosition_20; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyePosition_20() { return &___leftEyePosition_20; }
	inline void set_leftEyePosition_20(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyePosition_20 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyePosition_20))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyePosition_21() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyePosition_21)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyePosition_21() const { return ___rightEyePosition_21; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyePosition_21() { return &___rightEyePosition_21; }
	inline void set_rightEyePosition_21(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyePosition_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyePosition_21))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyePosition_22() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyePosition_22)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyePosition_22() const { return ___centerEyePosition_22; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyePosition_22() { return &___centerEyePosition_22; }
	inline void set_centerEyePosition_22(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyePosition_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyePosition_22))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraPosition_23() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraPosition_23)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraPosition_23() const { return ___colorCameraPosition_23; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraPosition_23() { return &___colorCameraPosition_23; }
	inline void set_colorCameraPosition_23(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraPosition_23 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraPosition_23))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceVelocity_24() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceVelocity_24)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceVelocity_24() const { return ___deviceVelocity_24; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceVelocity_24() { return &___deviceVelocity_24; }
	inline void set_deviceVelocity_24(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceVelocity_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceVelocity_24))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularVelocity_25() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAngularVelocity_25)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAngularVelocity_25() const { return ___deviceAngularVelocity_25; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAngularVelocity_25() { return &___deviceAngularVelocity_25; }
	inline void set_deviceAngularVelocity_25(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAngularVelocity_25 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularVelocity_25))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeVelocity_26() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeVelocity_26)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeVelocity_26() const { return ___leftEyeVelocity_26; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeVelocity_26() { return &___leftEyeVelocity_26; }
	inline void set_leftEyeVelocity_26(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeVelocity_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeVelocity_26))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularVelocity_27() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAngularVelocity_27)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAngularVelocity_27() const { return ___leftEyeAngularVelocity_27; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAngularVelocity_27() { return &___leftEyeAngularVelocity_27; }
	inline void set_leftEyeAngularVelocity_27(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAngularVelocity_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularVelocity_27))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeVelocity_28() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeVelocity_28)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeVelocity_28() const { return ___rightEyeVelocity_28; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeVelocity_28() { return &___rightEyeVelocity_28; }
	inline void set_rightEyeVelocity_28(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeVelocity_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeVelocity_28))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularVelocity_29() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAngularVelocity_29)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAngularVelocity_29() const { return ___rightEyeAngularVelocity_29; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAngularVelocity_29() { return &___rightEyeAngularVelocity_29; }
	inline void set_rightEyeAngularVelocity_29(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAngularVelocity_29 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularVelocity_29))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeVelocity_30() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeVelocity_30)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeVelocity_30() const { return ___centerEyeVelocity_30; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeVelocity_30() { return &___centerEyeVelocity_30; }
	inline void set_centerEyeVelocity_30(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeVelocity_30 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeVelocity_30))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularVelocity_31() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAngularVelocity_31)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAngularVelocity_31() const { return ___centerEyeAngularVelocity_31; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAngularVelocity_31() { return &___centerEyeAngularVelocity_31; }
	inline void set_centerEyeAngularVelocity_31(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAngularVelocity_31 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularVelocity_31))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraVelocity_32() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraVelocity_32)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraVelocity_32() const { return ___colorCameraVelocity_32; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraVelocity_32() { return &___colorCameraVelocity_32; }
	inline void set_colorCameraVelocity_32(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraVelocity_32 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraVelocity_32))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularVelocity_33() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAngularVelocity_33)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAngularVelocity_33() const { return ___colorCameraAngularVelocity_33; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAngularVelocity_33() { return &___colorCameraAngularVelocity_33; }
	inline void set_colorCameraAngularVelocity_33(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAngularVelocity_33 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularVelocity_33))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAcceleration_34() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAcceleration_34)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAcceleration_34() const { return ___deviceAcceleration_34; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAcceleration_34() { return &___deviceAcceleration_34; }
	inline void set_deviceAcceleration_34(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAcceleration_34 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAcceleration_34))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularAcceleration_35() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAngularAcceleration_35)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAngularAcceleration_35() const { return ___deviceAngularAcceleration_35; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAngularAcceleration_35() { return &___deviceAngularAcceleration_35; }
	inline void set_deviceAngularAcceleration_35(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAngularAcceleration_35 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularAcceleration_35))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAcceleration_36() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAcceleration_36)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAcceleration_36() const { return ___leftEyeAcceleration_36; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAcceleration_36() { return &___leftEyeAcceleration_36; }
	inline void set_leftEyeAcceleration_36(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAcceleration_36 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAcceleration_36))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularAcceleration_37() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAngularAcceleration_37)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAngularAcceleration_37() const { return ___leftEyeAngularAcceleration_37; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAngularAcceleration_37() { return &___leftEyeAngularAcceleration_37; }
	inline void set_leftEyeAngularAcceleration_37(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAngularAcceleration_37 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularAcceleration_37))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAcceleration_38() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAcceleration_38)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAcceleration_38() const { return ___rightEyeAcceleration_38; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAcceleration_38() { return &___rightEyeAcceleration_38; }
	inline void set_rightEyeAcceleration_38(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAcceleration_38 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAcceleration_38))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularAcceleration_39() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAngularAcceleration_39)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAngularAcceleration_39() const { return ___rightEyeAngularAcceleration_39; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAngularAcceleration_39() { return &___rightEyeAngularAcceleration_39; }
	inline void set_rightEyeAngularAcceleration_39(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAngularAcceleration_39 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularAcceleration_39))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAcceleration_40() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAcceleration_40)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAcceleration_40() const { return ___centerEyeAcceleration_40; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAcceleration_40() { return &___centerEyeAcceleration_40; }
	inline void set_centerEyeAcceleration_40(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAcceleration_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAcceleration_40))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularAcceleration_41() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAngularAcceleration_41)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAngularAcceleration_41() const { return ___centerEyeAngularAcceleration_41; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAngularAcceleration_41() { return &___centerEyeAngularAcceleration_41; }
	inline void set_centerEyeAngularAcceleration_41(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAngularAcceleration_41 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularAcceleration_41))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAcceleration_42() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAcceleration_42)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAcceleration_42() const { return ___colorCameraAcceleration_42; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAcceleration_42() { return &___colorCameraAcceleration_42; }
	inline void set_colorCameraAcceleration_42(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAcceleration_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAcceleration_42))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularAcceleration_43() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAngularAcceleration_43)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAngularAcceleration_43() const { return ___colorCameraAngularAcceleration_43; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAngularAcceleration_43() { return &___colorCameraAngularAcceleration_43; }
	inline void set_colorCameraAngularAcceleration_43(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAngularAcceleration_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularAcceleration_43))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceRotation_44() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceRotation_44)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_deviceRotation_44() const { return ___deviceRotation_44; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_deviceRotation_44() { return &___deviceRotation_44; }
	inline void set_deviceRotation_44(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___deviceRotation_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceRotation_44))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeRotation_45() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeRotation_45)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_leftEyeRotation_45() const { return ___leftEyeRotation_45; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_leftEyeRotation_45() { return &___leftEyeRotation_45; }
	inline void set_leftEyeRotation_45(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___leftEyeRotation_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeRotation_45))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeRotation_46() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeRotation_46)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_rightEyeRotation_46() const { return ___rightEyeRotation_46; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_rightEyeRotation_46() { return &___rightEyeRotation_46; }
	inline void set_rightEyeRotation_46(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___rightEyeRotation_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeRotation_46))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeRotation_47() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeRotation_47)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_centerEyeRotation_47() const { return ___centerEyeRotation_47; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_centerEyeRotation_47() { return &___centerEyeRotation_47; }
	inline void set_centerEyeRotation_47(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___centerEyeRotation_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeRotation_47))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraRotation_48() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraRotation_48)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_colorCameraRotation_48() const { return ___colorCameraRotation_48; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_colorCameraRotation_48() { return &___colorCameraRotation_48; }
	inline void set_colorCameraRotation_48(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___colorCameraRotation_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraRotation_48))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_handData_49() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___handData_49)); }
	inline InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  get_handData_49() const { return ___handData_49; }
	inline InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E * get_address_of_handData_49() { return &___handData_49; }
	inline void set_handData_49(InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  value)
	{
		___handData_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___handData_49))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_eyesData_50() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___eyesData_50)); }
	inline InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  get_eyesData_50() const { return ___eyesData_50; }
	inline InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7 * get_address_of_eyesData_50() { return &___eyesData_50; }
	inline void set_eyesData_50(InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  value)
	{
		___eyesData_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___eyesData_50))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_dPad_51() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___dPad_51)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_dPad_51() const { return ___dPad_51; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_dPad_51() { return &___dPad_51; }
	inline void set_dPad_51(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___dPad_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___dPad_51))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexFinger_52() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___indexFinger_52)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_indexFinger_52() const { return ___indexFinger_52; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_indexFinger_52() { return &___indexFinger_52; }
	inline void set_indexFinger_52(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___indexFinger_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexFinger_52))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_middleFinger_53() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___middleFinger_53)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_middleFinger_53() const { return ___middleFinger_53; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_middleFinger_53() { return &___middleFinger_53; }
	inline void set_middleFinger_53(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___middleFinger_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___middleFinger_53))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_ringFinger_54() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___ringFinger_54)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_ringFinger_54() const { return ___ringFinger_54; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_ringFinger_54() { return &___ringFinger_54; }
	inline void set_ringFinger_54(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___ringFinger_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ringFinger_54))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_pinkyFinger_55() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___pinkyFinger_55)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_pinkyFinger_55() const { return ___pinkyFinger_55; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_pinkyFinger_55() { return &___pinkyFinger_55; }
	inline void set_pinkyFinger_55(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___pinkyFinger_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pinkyFinger_55))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbrest_56() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___thumbrest_56)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_thumbrest_56() const { return ___thumbrest_56; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_thumbrest_56() { return &___thumbrest_56; }
	inline void set_thumbrest_56(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___thumbrest_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbrest_56))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexTouch_57() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___indexTouch_57)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_indexTouch_57() const { return ___indexTouch_57; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_indexTouch_57() { return &___indexTouch_57; }
	inline void set_indexTouch_57(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___indexTouch_57 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexTouch_57))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbTouch_58() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___thumbTouch_58)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_thumbTouch_58() const { return ___thumbTouch_58; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_thumbTouch_58() { return &___thumbTouch_58; }
	inline void set_thumbTouch_58(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___thumbTouch_58 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbTouch_58))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
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

// System.Runtime.InteropServices.GCHandleType
struct GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.InputDeviceCharacteristics
struct InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64 
{
public:
	// System.UInt32 UnityEngine.XR.InputDeviceCharacteristics::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// OVRNamedArrayAttribute
struct OVRNamedArrayAttribute_t1C1FFC7DD44295D9CB5A4115AFE953DC53348857  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String[] OVRNamedArrayAttribute::names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___names_0;

public:
	inline static int32_t get_offset_of_names_0() { return static_cast<int32_t>(offsetof(OVRNamedArrayAttribute_t1C1FFC7DD44295D9CB5A4115AFE953DC53348857, ___names_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_names_0() const { return ___names_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_names_0() { return &___names_0; }
	inline void set_names_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___names_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___names_0), (void*)value);
	}
};


// OVRTouchpad
struct OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E  : public RuntimeObject
{
public:

public:
};

struct OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_StaticFields
{
public:
	// UnityEngine.Vector3 OVRTouchpad::moveAmountMouse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___moveAmountMouse_0;
	// System.Single OVRTouchpad::minMovMagnitudeMouse
	float ___minMovMagnitudeMouse_1;
	// System.Delegate OVRTouchpad::touchPadCallbacks
	Delegate_t * ___touchPadCallbacks_2;
	// OVRTouchpadHelper OVRTouchpad::touchpadHelper
	OVRTouchpadHelper_tA41F61CC41849A4352DE8927B9A8E10604D2BFA1 * ___touchpadHelper_3;

public:
	inline static int32_t get_offset_of_moveAmountMouse_0() { return static_cast<int32_t>(offsetof(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_StaticFields, ___moveAmountMouse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_moveAmountMouse_0() const { return ___moveAmountMouse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_moveAmountMouse_0() { return &___moveAmountMouse_0; }
	inline void set_moveAmountMouse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___moveAmountMouse_0 = value;
	}

	inline static int32_t get_offset_of_minMovMagnitudeMouse_1() { return static_cast<int32_t>(offsetof(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_StaticFields, ___minMovMagnitudeMouse_1)); }
	inline float get_minMovMagnitudeMouse_1() const { return ___minMovMagnitudeMouse_1; }
	inline float* get_address_of_minMovMagnitudeMouse_1() { return &___minMovMagnitudeMouse_1; }
	inline void set_minMovMagnitudeMouse_1(float value)
	{
		___minMovMagnitudeMouse_1 = value;
	}

	inline static int32_t get_offset_of_touchPadCallbacks_2() { return static_cast<int32_t>(offsetof(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_StaticFields, ___touchPadCallbacks_2)); }
	inline Delegate_t * get_touchPadCallbacks_2() const { return ___touchPadCallbacks_2; }
	inline Delegate_t ** get_address_of_touchPadCallbacks_2() { return &___touchPadCallbacks_2; }
	inline void set_touchPadCallbacks_2(Delegate_t * value)
	{
		___touchPadCallbacks_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___touchPadCallbacks_2), (void*)value);
	}

	inline static int32_t get_offset_of_touchpadHelper_3() { return static_cast<int32_t>(offsetof(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_StaticFields, ___touchpadHelper_3)); }
	inline OVRTouchpadHelper_tA41F61CC41849A4352DE8927B9A8E10604D2BFA1 * get_touchpadHelper_3() const { return ___touchpadHelper_3; }
	inline OVRTouchpadHelper_tA41F61CC41849A4352DE8927B9A8E10604D2BFA1 ** get_address_of_touchpadHelper_3() { return &___touchpadHelper_3; }
	inline void set_touchpadHelper_3(OVRTouchpadHelper_tA41F61CC41849A4352DE8927B9A8E10604D2BFA1 * value)
	{
		___touchpadHelper_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___touchpadHelper_3), (void*)value);
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// OVRLipSync/AudioDataType
struct AudioDataType_tDBC812879B1B4830C609006CB31F2735C6031A13 
{
public:
	// System.Int32 OVRLipSync/AudioDataType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioDataType_tDBC812879B1B4830C609006CB31F2735C6031A13, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OVRLipSync/ContextProviders
struct ContextProviders_tE70932B87069AD0013407B94F6810B662801FB05 
{
public:
	// System.Int32 OVRLipSync/ContextProviders::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContextProviders_tE70932B87069AD0013407B94F6810B662801FB05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OVRLipSync/Result
struct Result_tE95130C59724C6D67CECEBF7D6A621A2E9B0EF36 
{
public:
	// System.Int32 OVRLipSync/Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_tE95130C59724C6D67CECEBF7D6A621A2E9B0EF36, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OVRLipSync/Signals
struct Signals_t834D248B45451DCA17B5D37B7F295D6812EE0CE3 
{
public:
	// System.Int32 OVRLipSync/Signals::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Signals_t834D248B45451DCA17B5D37B7F295D6812EE0CE3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OVRLipSync/Viseme
struct Viseme_tAC3B16B0F7DB260DDE25C1E8654CA7BF5591EF28 
{
public:
	// System.Int32 OVRLipSync/Viseme::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Viseme_tAC3B16B0F7DB260DDE25C1E8654CA7BF5591EF28, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OVRLipSyncMicInput/micActivation
struct micActivation_tC8BCBD1C881F98A2E215D9F683E02DC0DE852B87 
{
public:
	// System.Int32 OVRLipSyncMicInput/micActivation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(micActivation_tC8BCBD1C881F98A2E215D9F683E02DC0DE852B87, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OVRTouchpad/TouchEvent
struct TouchEvent_tC15245A8A54F01B1DAD4325F19C4E04B9AF3ACF3 
{
public:
	// System.Int32 OVRTouchpad/TouchEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchEvent_tC15245A8A54F01B1DAD4325F19C4E04B9AF3ACF3, ___value___2)); }
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


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
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


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// OVRTouchpad/OVRTouchpadCallback`1<OVRTouchpad/TouchEvent>
struct OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B  : public MulticastDelegate_t
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


// OVRLipSyncSequence
struct OVRLipSyncSequence_t67C1C061971274CF4F2264B46B14A4FAACE39799  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Collections.Generic.List`1<OVRLipSync/Frame> OVRLipSyncSequence::entries
	List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC * ___entries_4;
	// System.Single OVRLipSyncSequence::length
	float ___length_5;

public:
	inline static int32_t get_offset_of_entries_4() { return static_cast<int32_t>(offsetof(OVRLipSyncSequence_t67C1C061971274CF4F2264B46B14A4FAACE39799, ___entries_4)); }
	inline List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC * get_entries_4() const { return ___entries_4; }
	inline List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC ** get_address_of_entries_4() { return &___entries_4; }
	inline void set_entries_4(List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC * value)
	{
		___entries_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_4), (void*)value);
	}

	inline static int32_t get_offset_of_length_5() { return static_cast<int32_t>(offsetof(OVRLipSyncSequence_t67C1C061971274CF4F2264B46B14A4FAACE39799, ___length_5)); }
	inline float get_length_5() const { return ___length_5; }
	inline float* get_address_of_length_5() { return &___length_5; }
	inline void set_length_5(float value)
	{
		___length_5 = value;
	}
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// EnableSwitch
struct EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] EnableSwitch::SwitchTargets
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___SwitchTargets_4;

public:
	inline static int32_t get_offset_of_SwitchTargets_4() { return static_cast<int32_t>(offsetof(EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A, ___SwitchTargets_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_SwitchTargets_4() const { return ___SwitchTargets_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_SwitchTargets_4() { return &___SwitchTargets_4; }
	inline void set_SwitchTargets_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___SwitchTargets_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SwitchTargets_4), (void*)value);
	}
};


// LipSyncDemo_Control
struct LipSyncDemo_Control_t995A4E9E3582F93D39078223ADB6D3F39AF2449C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.KeyCode LipSyncDemo_Control::rotateLeftKey
	int32_t ___rotateLeftKey_4;
	// UnityEngine.KeyCode LipSyncDemo_Control::rotateRightKey
	int32_t ___rotateRightKey_5;
	// UnityEngine.KeyCode LipSyncDemo_Control::resetRotationKey
	int32_t ___resetRotationKey_6;
	// System.Single LipSyncDemo_Control::resetRotation
	float ___resetRotation_7;
	// System.Single LipSyncDemo_Control::rotationAmount
	float ___rotationAmount_8;
	// System.Single LipSyncDemo_Control::rotationMax
	float ___rotationMax_9;

public:
	inline static int32_t get_offset_of_rotateLeftKey_4() { return static_cast<int32_t>(offsetof(LipSyncDemo_Control_t995A4E9E3582F93D39078223ADB6D3F39AF2449C, ___rotateLeftKey_4)); }
	inline int32_t get_rotateLeftKey_4() const { return ___rotateLeftKey_4; }
	inline int32_t* get_address_of_rotateLeftKey_4() { return &___rotateLeftKey_4; }
	inline void set_rotateLeftKey_4(int32_t value)
	{
		___rotateLeftKey_4 = value;
	}

	inline static int32_t get_offset_of_rotateRightKey_5() { return static_cast<int32_t>(offsetof(LipSyncDemo_Control_t995A4E9E3582F93D39078223ADB6D3F39AF2449C, ___rotateRightKey_5)); }
	inline int32_t get_rotateRightKey_5() const { return ___rotateRightKey_5; }
	inline int32_t* get_address_of_rotateRightKey_5() { return &___rotateRightKey_5; }
	inline void set_rotateRightKey_5(int32_t value)
	{
		___rotateRightKey_5 = value;
	}

	inline static int32_t get_offset_of_resetRotationKey_6() { return static_cast<int32_t>(offsetof(LipSyncDemo_Control_t995A4E9E3582F93D39078223ADB6D3F39AF2449C, ___resetRotationKey_6)); }
	inline int32_t get_resetRotationKey_6() const { return ___resetRotationKey_6; }
	inline int32_t* get_address_of_resetRotationKey_6() { return &___resetRotationKey_6; }
	inline void set_resetRotationKey_6(int32_t value)
	{
		___resetRotationKey_6 = value;
	}

	inline static int32_t get_offset_of_resetRotation_7() { return static_cast<int32_t>(offsetof(LipSyncDemo_Control_t995A4E9E3582F93D39078223ADB6D3F39AF2449C, ___resetRotation_7)); }
	inline float get_resetRotation_7() const { return ___resetRotation_7; }
	inline float* get_address_of_resetRotation_7() { return &___resetRotation_7; }
	inline void set_resetRotation_7(float value)
	{
		___resetRotation_7 = value;
	}

	inline static int32_t get_offset_of_rotationAmount_8() { return static_cast<int32_t>(offsetof(LipSyncDemo_Control_t995A4E9E3582F93D39078223ADB6D3F39AF2449C, ___rotationAmount_8)); }
	inline float get_rotationAmount_8() const { return ___rotationAmount_8; }
	inline float* get_address_of_rotationAmount_8() { return &___rotationAmount_8; }
	inline void set_rotationAmount_8(float value)
	{
		___rotationAmount_8 = value;
	}

	inline static int32_t get_offset_of_rotationMax_9() { return static_cast<int32_t>(offsetof(LipSyncDemo_Control_t995A4E9E3582F93D39078223ADB6D3F39AF2449C, ___rotationMax_9)); }
	inline float get_rotationMax_9() const { return ___rotationMax_9; }
	inline float* get_address_of_rotationMax_9() { return &___rotationMax_9; }
	inline void set_rotationMax_9(float value)
	{
		___rotationMax_9 = value;
	}
};


// LipSyncDemo_SetCurrentTarget
struct LipSyncDemo_SetCurrentTarget_tF7E8E55732074689954CEF44A58450C4A2FFE4CE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// EnableSwitch[] LipSyncDemo_SetCurrentTarget::SwitchTargets
	EnableSwitchU5BU5D_t0E58B43C2C4981AA888AD44DC027DAB703886E35* ___SwitchTargets_4;
	// System.Int32 LipSyncDemo_SetCurrentTarget::targetSet
	int32_t ___targetSet_5;
	// System.Int32 LipSyncDemo_SetCurrentTarget::maxTarget
	int32_t ___maxTarget_6;
	// System.Boolean LipSyncDemo_SetCurrentTarget::XRButtonBeingPressed
	bool ___XRButtonBeingPressed_7;

public:
	inline static int32_t get_offset_of_SwitchTargets_4() { return static_cast<int32_t>(offsetof(LipSyncDemo_SetCurrentTarget_tF7E8E55732074689954CEF44A58450C4A2FFE4CE, ___SwitchTargets_4)); }
	inline EnableSwitchU5BU5D_t0E58B43C2C4981AA888AD44DC027DAB703886E35* get_SwitchTargets_4() const { return ___SwitchTargets_4; }
	inline EnableSwitchU5BU5D_t0E58B43C2C4981AA888AD44DC027DAB703886E35** get_address_of_SwitchTargets_4() { return &___SwitchTargets_4; }
	inline void set_SwitchTargets_4(EnableSwitchU5BU5D_t0E58B43C2C4981AA888AD44DC027DAB703886E35* value)
	{
		___SwitchTargets_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SwitchTargets_4), (void*)value);
	}

	inline static int32_t get_offset_of_targetSet_5() { return static_cast<int32_t>(offsetof(LipSyncDemo_SetCurrentTarget_tF7E8E55732074689954CEF44A58450C4A2FFE4CE, ___targetSet_5)); }
	inline int32_t get_targetSet_5() const { return ___targetSet_5; }
	inline int32_t* get_address_of_targetSet_5() { return &___targetSet_5; }
	inline void set_targetSet_5(int32_t value)
	{
		___targetSet_5 = value;
	}

	inline static int32_t get_offset_of_maxTarget_6() { return static_cast<int32_t>(offsetof(LipSyncDemo_SetCurrentTarget_tF7E8E55732074689954CEF44A58450C4A2FFE4CE, ___maxTarget_6)); }
	inline int32_t get_maxTarget_6() const { return ___maxTarget_6; }
	inline int32_t* get_address_of_maxTarget_6() { return &___maxTarget_6; }
	inline void set_maxTarget_6(int32_t value)
	{
		___maxTarget_6 = value;
	}

	inline static int32_t get_offset_of_XRButtonBeingPressed_7() { return static_cast<int32_t>(offsetof(LipSyncDemo_SetCurrentTarget_tF7E8E55732074689954CEF44A58450C4A2FFE4CE, ___XRButtonBeingPressed_7)); }
	inline bool get_XRButtonBeingPressed_7() const { return ___XRButtonBeingPressed_7; }
	inline bool* get_address_of_XRButtonBeingPressed_7() { return &___XRButtonBeingPressed_7; }
	inline void set_XRButtonBeingPressed_7(bool value)
	{
		___XRButtonBeingPressed_7 = value;
	}
};


// OVRLipSync
struct OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields
{
public:
	// System.Int32 OVRLipSync::VisemeCount
	int32_t ___VisemeCount_4;
	// System.Int32 OVRLipSync::SignalCount
	int32_t ___SignalCount_5;
	// OVRLipSync/Result OVRLipSync::sInitialized
	int32_t ___sInitialized_7;
	// OVRLipSync OVRLipSync::sInstance
	OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE * ___sInstance_8;

public:
	inline static int32_t get_offset_of_VisemeCount_4() { return static_cast<int32_t>(offsetof(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields, ___VisemeCount_4)); }
	inline int32_t get_VisemeCount_4() const { return ___VisemeCount_4; }
	inline int32_t* get_address_of_VisemeCount_4() { return &___VisemeCount_4; }
	inline void set_VisemeCount_4(int32_t value)
	{
		___VisemeCount_4 = value;
	}

	inline static int32_t get_offset_of_SignalCount_5() { return static_cast<int32_t>(offsetof(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields, ___SignalCount_5)); }
	inline int32_t get_SignalCount_5() const { return ___SignalCount_5; }
	inline int32_t* get_address_of_SignalCount_5() { return &___SignalCount_5; }
	inline void set_SignalCount_5(int32_t value)
	{
		___SignalCount_5 = value;
	}

	inline static int32_t get_offset_of_sInitialized_7() { return static_cast<int32_t>(offsetof(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields, ___sInitialized_7)); }
	inline int32_t get_sInitialized_7() const { return ___sInitialized_7; }
	inline int32_t* get_address_of_sInitialized_7() { return &___sInitialized_7; }
	inline void set_sInitialized_7(int32_t value)
	{
		___sInitialized_7 = value;
	}

	inline static int32_t get_offset_of_sInstance_8() { return static_cast<int32_t>(offsetof(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields, ___sInstance_8)); }
	inline OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE * get_sInstance_8() const { return ___sInstance_8; }
	inline OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE ** get_address_of_sInstance_8() { return &___sInstance_8; }
	inline void set_sInstance_8(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE * value)
	{
		___sInstance_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_8), (void*)value);
	}
};


// OVRLipSyncContextBase
struct OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource OVRLipSyncContextBase::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_4;
	// OVRLipSync/ContextProviders OVRLipSyncContextBase::provider
	int32_t ___provider_5;
	// System.Boolean OVRLipSyncContextBase::enableAcceleration
	bool ___enableAcceleration_6;
	// OVRLipSync/Frame OVRLipSyncContextBase::frame
	Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * ___frame_7;
	// System.UInt32 OVRLipSyncContextBase::context
	uint32_t ___context_8;
	// System.Int32 OVRLipSyncContextBase::_smoothing
	int32_t ____smoothing_9;

public:
	inline static int32_t get_offset_of_audioSource_4() { return static_cast<int32_t>(offsetof(OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F, ___audioSource_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_4() const { return ___audioSource_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_4() { return &___audioSource_4; }
	inline void set_audioSource_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_provider_5() { return static_cast<int32_t>(offsetof(OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F, ___provider_5)); }
	inline int32_t get_provider_5() const { return ___provider_5; }
	inline int32_t* get_address_of_provider_5() { return &___provider_5; }
	inline void set_provider_5(int32_t value)
	{
		___provider_5 = value;
	}

	inline static int32_t get_offset_of_enableAcceleration_6() { return static_cast<int32_t>(offsetof(OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F, ___enableAcceleration_6)); }
	inline bool get_enableAcceleration_6() const { return ___enableAcceleration_6; }
	inline bool* get_address_of_enableAcceleration_6() { return &___enableAcceleration_6; }
	inline void set_enableAcceleration_6(bool value)
	{
		___enableAcceleration_6 = value;
	}

	inline static int32_t get_offset_of_frame_7() { return static_cast<int32_t>(offsetof(OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F, ___frame_7)); }
	inline Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * get_frame_7() const { return ___frame_7; }
	inline Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 ** get_address_of_frame_7() { return &___frame_7; }
	inline void set_frame_7(Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * value)
	{
		___frame_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frame_7), (void*)value);
	}

	inline static int32_t get_offset_of_context_8() { return static_cast<int32_t>(offsetof(OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F, ___context_8)); }
	inline uint32_t get_context_8() const { return ___context_8; }
	inline uint32_t* get_address_of_context_8() { return &___context_8; }
	inline void set_context_8(uint32_t value)
	{
		___context_8 = value;
	}

	inline static int32_t get_offset_of__smoothing_9() { return static_cast<int32_t>(offsetof(OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F, ____smoothing_9)); }
	inline int32_t get__smoothing_9() const { return ____smoothing_9; }
	inline int32_t* get_address_of__smoothing_9() { return &____smoothing_9; }
	inline void set__smoothing_9(int32_t value)
	{
		____smoothing_9 = value;
	}
};


// OVRLipSyncContextMorphTarget
struct OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SkinnedMeshRenderer OVRLipSyncContextMorphTarget::skinnedMeshRenderer
	SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * ___skinnedMeshRenderer_4;
	// System.Int32[] OVRLipSyncContextMorphTarget::visemeToBlendTargets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___visemeToBlendTargets_5;
	// System.Boolean OVRLipSyncContextMorphTarget::enableVisemeTestKeys
	bool ___enableVisemeTestKeys_6;
	// UnityEngine.KeyCode[] OVRLipSyncContextMorphTarget::visemeTestKeys
	KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* ___visemeTestKeys_7;
	// UnityEngine.KeyCode OVRLipSyncContextMorphTarget::laughterKey
	int32_t ___laughterKey_8;
	// System.Int32 OVRLipSyncContextMorphTarget::laughterBlendTarget
	int32_t ___laughterBlendTarget_9;
	// System.Single OVRLipSyncContextMorphTarget::laughterThreshold
	float ___laughterThreshold_10;
	// System.Single OVRLipSyncContextMorphTarget::laughterMultiplier
	float ___laughterMultiplier_11;
	// System.Int32 OVRLipSyncContextMorphTarget::smoothAmount
	int32_t ___smoothAmount_12;
	// OVRLipSyncContextBase OVRLipSyncContextMorphTarget::lipsyncContext
	OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * ___lipsyncContext_13;

public:
	inline static int32_t get_offset_of_skinnedMeshRenderer_4() { return static_cast<int32_t>(offsetof(OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19, ___skinnedMeshRenderer_4)); }
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * get_skinnedMeshRenderer_4() const { return ___skinnedMeshRenderer_4; }
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 ** get_address_of_skinnedMeshRenderer_4() { return &___skinnedMeshRenderer_4; }
	inline void set_skinnedMeshRenderer_4(SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * value)
	{
		___skinnedMeshRenderer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skinnedMeshRenderer_4), (void*)value);
	}

	inline static int32_t get_offset_of_visemeToBlendTargets_5() { return static_cast<int32_t>(offsetof(OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19, ___visemeToBlendTargets_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_visemeToBlendTargets_5() const { return ___visemeToBlendTargets_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_visemeToBlendTargets_5() { return &___visemeToBlendTargets_5; }
	inline void set_visemeToBlendTargets_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___visemeToBlendTargets_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visemeToBlendTargets_5), (void*)value);
	}

	inline static int32_t get_offset_of_enableVisemeTestKeys_6() { return static_cast<int32_t>(offsetof(OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19, ___enableVisemeTestKeys_6)); }
	inline bool get_enableVisemeTestKeys_6() const { return ___enableVisemeTestKeys_6; }
	inline bool* get_address_of_enableVisemeTestKeys_6() { return &___enableVisemeTestKeys_6; }
	inline void set_enableVisemeTestKeys_6(bool value)
	{
		___enableVisemeTestKeys_6 = value;
	}

	inline static int32_t get_offset_of_visemeTestKeys_7() { return static_cast<int32_t>(offsetof(OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19, ___visemeTestKeys_7)); }
	inline KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* get_visemeTestKeys_7() const { return ___visemeTestKeys_7; }
	inline KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871** get_address_of_visemeTestKeys_7() { return &___visemeTestKeys_7; }
	inline void set_visemeTestKeys_7(KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* value)
	{
		___visemeTestKeys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visemeTestKeys_7), (void*)value);
	}

	inline static int32_t get_offset_of_laughterKey_8() { return static_cast<int32_t>(offsetof(OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19, ___laughterKey_8)); }
	inline int32_t get_laughterKey_8() const { return ___laughterKey_8; }
	inline int32_t* get_address_of_laughterKey_8() { return &___laughterKey_8; }
	inline void set_laughterKey_8(int32_t value)
	{
		___laughterKey_8 = value;
	}

	inline static int32_t get_offset_of_laughterBlendTarget_9() { return static_cast<int32_t>(offsetof(OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19, ___laughterBlendTarget_9)); }
	inline int32_t get_laughterBlendTarget_9() const { return ___laughterBlendTarget_9; }
	inline int32_t* get_address_of_laughterBlendTarget_9() { return &___laughterBlendTarget_9; }
	inline void set_laughterBlendTarget_9(int32_t value)
	{
		___laughterBlendTarget_9 = value;
	}

	inline static int32_t get_offset_of_laughterThreshold_10() { return static_cast<int32_t>(offsetof(OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19, ___laughterThreshold_10)); }
	inline float get_laughterThreshold_10() const { return ___laughterThreshold_10; }
	inline float* get_address_of_laughterThreshold_10() { return &___laughterThreshold_10; }
	inline void set_laughterThreshold_10(float value)
	{
		___laughterThreshold_10 = value;
	}

	inline static int32_t get_offset_of_laughterMultiplier_11() { return static_cast<int32_t>(offsetof(OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19, ___laughterMultiplier_11)); }
	inline float get_laughterMultiplier_11() const { return ___laughterMultiplier_11; }
	inline float* get_address_of_laughterMultiplier_11() { return &___laughterMultiplier_11; }
	inline void set_laughterMultiplier_11(float value)
	{
		___laughterMultiplier_11 = value;
	}

	inline static int32_t get_offset_of_smoothAmount_12() { return static_cast<int32_t>(offsetof(OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19, ___smoothAmount_12)); }
	inline int32_t get_smoothAmount_12() const { return ___smoothAmount_12; }
	inline int32_t* get_address_of_smoothAmount_12() { return &___smoothAmount_12; }
	inline void set_smoothAmount_12(int32_t value)
	{
		___smoothAmount_12 = value;
	}

	inline static int32_t get_offset_of_lipsyncContext_13() { return static_cast<int32_t>(offsetof(OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19, ___lipsyncContext_13)); }
	inline OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * get_lipsyncContext_13() const { return ___lipsyncContext_13; }
	inline OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F ** get_address_of_lipsyncContext_13() { return &___lipsyncContext_13; }
	inline void set_lipsyncContext_13(OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * value)
	{
		___lipsyncContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lipsyncContext_13), (void*)value);
	}
};


// OVRLipSyncContextTextureFlip
struct OVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material OVRLipSyncContextTextureFlip::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_4;
	// UnityEngine.Texture[] OVRLipSyncContextTextureFlip::Textures
	TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150* ___Textures_5;
	// System.Int32 OVRLipSyncContextTextureFlip::smoothAmount
	int32_t ___smoothAmount_6;
	// OVRLipSyncContextBase OVRLipSyncContextTextureFlip::lipsyncContext
	OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * ___lipsyncContext_7;
	// OVRLipSync/Frame OVRLipSyncContextTextureFlip::oldFrame
	Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * ___oldFrame_8;

public:
	inline static int32_t get_offset_of_material_4() { return static_cast<int32_t>(offsetof(OVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E, ___material_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_4() const { return ___material_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_4() { return &___material_4; }
	inline void set_material_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_4), (void*)value);
	}

	inline static int32_t get_offset_of_Textures_5() { return static_cast<int32_t>(offsetof(OVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E, ___Textures_5)); }
	inline TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150* get_Textures_5() const { return ___Textures_5; }
	inline TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150** get_address_of_Textures_5() { return &___Textures_5; }
	inline void set_Textures_5(TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150* value)
	{
		___Textures_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Textures_5), (void*)value);
	}

	inline static int32_t get_offset_of_smoothAmount_6() { return static_cast<int32_t>(offsetof(OVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E, ___smoothAmount_6)); }
	inline int32_t get_smoothAmount_6() const { return ___smoothAmount_6; }
	inline int32_t* get_address_of_smoothAmount_6() { return &___smoothAmount_6; }
	inline void set_smoothAmount_6(int32_t value)
	{
		___smoothAmount_6 = value;
	}

	inline static int32_t get_offset_of_lipsyncContext_7() { return static_cast<int32_t>(offsetof(OVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E, ___lipsyncContext_7)); }
	inline OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * get_lipsyncContext_7() const { return ___lipsyncContext_7; }
	inline OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F ** get_address_of_lipsyncContext_7() { return &___lipsyncContext_7; }
	inline void set_lipsyncContext_7(OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * value)
	{
		___lipsyncContext_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lipsyncContext_7), (void*)value);
	}

	inline static int32_t get_offset_of_oldFrame_8() { return static_cast<int32_t>(offsetof(OVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E, ___oldFrame_8)); }
	inline Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * get_oldFrame_8() const { return ___oldFrame_8; }
	inline Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 ** get_address_of_oldFrame_8() { return &___oldFrame_8; }
	inline void set_oldFrame_8(Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * value)
	{
		___oldFrame_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___oldFrame_8), (void*)value);
	}
};


// OVRLipSyncDebugConsole
struct OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.ArrayList OVRLipSyncDebugConsole::messages
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___messages_4;
	// System.Int32 OVRLipSyncDebugConsole::maxMessages
	int32_t ___maxMessages_5;
	// UnityEngine.UI.Text OVRLipSyncDebugConsole::textMsg
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textMsg_6;
	// System.Boolean OVRLipSyncDebugConsole::clearTimeoutOn
	bool ___clearTimeoutOn_8;
	// System.Single OVRLipSyncDebugConsole::clearTimeout
	float ___clearTimeout_9;

public:
	inline static int32_t get_offset_of_messages_4() { return static_cast<int32_t>(offsetof(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011, ___messages_4)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_messages_4() const { return ___messages_4; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_messages_4() { return &___messages_4; }
	inline void set_messages_4(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___messages_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messages_4), (void*)value);
	}

	inline static int32_t get_offset_of_maxMessages_5() { return static_cast<int32_t>(offsetof(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011, ___maxMessages_5)); }
	inline int32_t get_maxMessages_5() const { return ___maxMessages_5; }
	inline int32_t* get_address_of_maxMessages_5() { return &___maxMessages_5; }
	inline void set_maxMessages_5(int32_t value)
	{
		___maxMessages_5 = value;
	}

	inline static int32_t get_offset_of_textMsg_6() { return static_cast<int32_t>(offsetof(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011, ___textMsg_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textMsg_6() const { return ___textMsg_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textMsg_6() { return &___textMsg_6; }
	inline void set_textMsg_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textMsg_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textMsg_6), (void*)value);
	}

	inline static int32_t get_offset_of_clearTimeoutOn_8() { return static_cast<int32_t>(offsetof(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011, ___clearTimeoutOn_8)); }
	inline bool get_clearTimeoutOn_8() const { return ___clearTimeoutOn_8; }
	inline bool* get_address_of_clearTimeoutOn_8() { return &___clearTimeoutOn_8; }
	inline void set_clearTimeoutOn_8(bool value)
	{
		___clearTimeoutOn_8 = value;
	}

	inline static int32_t get_offset_of_clearTimeout_9() { return static_cast<int32_t>(offsetof(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011, ___clearTimeout_9)); }
	inline float get_clearTimeout_9() const { return ___clearTimeout_9; }
	inline float* get_address_of_clearTimeout_9() { return &___clearTimeout_9; }
	inline void set_clearTimeout_9(float value)
	{
		___clearTimeout_9 = value;
	}
};

struct OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_StaticFields
{
public:
	// OVRLipSyncDebugConsole OVRLipSyncDebugConsole::s_Instance
	OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * ___s_Instance_7;

public:
	inline static int32_t get_offset_of_s_Instance_7() { return static_cast<int32_t>(offsetof(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_StaticFields, ___s_Instance_7)); }
	inline OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * get_s_Instance_7() const { return ___s_Instance_7; }
	inline OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 ** get_address_of_s_Instance_7() { return &___s_Instance_7; }
	inline void set_s_Instance_7(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * value)
	{
		___s_Instance_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_7), (void*)value);
	}
};


// OVRLipSyncMicInput
struct OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource OVRLipSyncMicInput::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_4;
	// System.Boolean OVRLipSyncMicInput::enableMicSelectionGUI
	bool ___enableMicSelectionGUI_5;
	// UnityEngine.KeyCode OVRLipSyncMicInput::micSelectionGUIKey
	int32_t ___micSelectionGUIKey_6;
	// System.Single OVRLipSyncMicInput::micInputVolume
	float ___micInputVolume_7;
	// System.Int32 OVRLipSyncMicInput::micFrequency
	int32_t ___micFrequency_8;
	// OVRLipSyncMicInput/micActivation OVRLipSyncMicInput::micControl
	int32_t ___micControl_9;
	// UnityEngine.KeyCode OVRLipSyncMicInput::micActivationKey
	int32_t ___micActivationKey_10;
	// System.String OVRLipSyncMicInput::selectedDevice
	String_t* ___selectedDevice_11;
	// System.Boolean OVRLipSyncMicInput::micSelected
	bool ___micSelected_12;
	// System.Int32 OVRLipSyncMicInput::minFreq
	int32_t ___minFreq_13;
	// System.Int32 OVRLipSyncMicInput::maxFreq
	int32_t ___maxFreq_14;
	// System.Boolean OVRLipSyncMicInput::focused
	bool ___focused_15;
	// System.Boolean OVRLipSyncMicInput::initialized
	bool ___initialized_16;

public:
	inline static int32_t get_offset_of_audioSource_4() { return static_cast<int32_t>(offsetof(OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66, ___audioSource_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_4() const { return ___audioSource_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_4() { return &___audioSource_4; }
	inline void set_audioSource_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_enableMicSelectionGUI_5() { return static_cast<int32_t>(offsetof(OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66, ___enableMicSelectionGUI_5)); }
	inline bool get_enableMicSelectionGUI_5() const { return ___enableMicSelectionGUI_5; }
	inline bool* get_address_of_enableMicSelectionGUI_5() { return &___enableMicSelectionGUI_5; }
	inline void set_enableMicSelectionGUI_5(bool value)
	{
		___enableMicSelectionGUI_5 = value;
	}

	inline static int32_t get_offset_of_micSelectionGUIKey_6() { return static_cast<int32_t>(offsetof(OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66, ___micSelectionGUIKey_6)); }
	inline int32_t get_micSelectionGUIKey_6() const { return ___micSelectionGUIKey_6; }
	inline int32_t* get_address_of_micSelectionGUIKey_6() { return &___micSelectionGUIKey_6; }
	inline void set_micSelectionGUIKey_6(int32_t value)
	{
		___micSelectionGUIKey_6 = value;
	}

	inline static int32_t get_offset_of_micInputVolume_7() { return static_cast<int32_t>(offsetof(OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66, ___micInputVolume_7)); }
	inline float get_micInputVolume_7() const { return ___micInputVolume_7; }
	inline float* get_address_of_micInputVolume_7() { return &___micInputVolume_7; }
	inline void set_micInputVolume_7(float value)
	{
		___micInputVolume_7 = value;
	}

	inline static int32_t get_offset_of_micFrequency_8() { return static_cast<int32_t>(offsetof(OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66, ___micFrequency_8)); }
	inline int32_t get_micFrequency_8() const { return ___micFrequency_8; }
	inline int32_t* get_address_of_micFrequency_8() { return &___micFrequency_8; }
	inline void set_micFrequency_8(int32_t value)
	{
		___micFrequency_8 = value;
	}

	inline static int32_t get_offset_of_micControl_9() { return static_cast<int32_t>(offsetof(OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66, ___micControl_9)); }
	inline int32_t get_micControl_9() const { return ___micControl_9; }
	inline int32_t* get_address_of_micControl_9() { return &___micControl_9; }
	inline void set_micControl_9(int32_t value)
	{
		___micControl_9 = value;
	}

	inline static int32_t get_offset_of_micActivationKey_10() { return static_cast<int32_t>(offsetof(OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66, ___micActivationKey_10)); }
	inline int32_t get_micActivationKey_10() const { return ___micActivationKey_10; }
	inline int32_t* get_address_of_micActivationKey_10() { return &___micActivationKey_10; }
	inline void set_micActivationKey_10(int32_t value)
	{
		___micActivationKey_10 = value;
	}

	inline static int32_t get_offset_of_selectedDevice_11() { return static_cast<int32_t>(offsetof(OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66, ___selectedDevice_11)); }
	inline String_t* get_selectedDevice_11() const { return ___selectedDevice_11; }
	inline String_t** get_address_of_selectedDevice_11() { return &___selectedDevice_11; }
	inline void set_selectedDevice_11(String_t* value)
	{
		___selectedDevice_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedDevice_11), (void*)value);
	}

	inline static int32_t get_offset_of_micSelected_12() { return static_cast<int32_t>(offsetof(OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66, ___micSelected_12)); }
	inline bool get_micSelected_12() const { return ___micSelected_12; }
	inline bool* get_address_of_micSelected_12() { return &___micSelected_12; }
	inline void set_micSelected_12(bool value)
	{
		___micSelected_12 = value;
	}

	inline static int32_t get_offset_of_minFreq_13() { return static_cast<int32_t>(offsetof(OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66, ___minFreq_13)); }
	inline int32_t get_minFreq_13() const { return ___minFreq_13; }
	inline int32_t* get_address_of_minFreq_13() { return &___minFreq_13; }
	inline void set_minFreq_13(int32_t value)
	{
		___minFreq_13 = value;
	}

	inline static int32_t get_offset_of_maxFreq_14() { return static_cast<int32_t>(offsetof(OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66, ___maxFreq_14)); }
	inline int32_t get_maxFreq_14() const { return ___maxFreq_14; }
	inline int32_t* get_address_of_maxFreq_14() { return &___maxFreq_14; }
	inline void set_maxFreq_14(int32_t value)
	{
		___maxFreq_14 = value;
	}

	inline static int32_t get_offset_of_focused_15() { return static_cast<int32_t>(offsetof(OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66, ___focused_15)); }
	inline bool get_focused_15() const { return ___focused_15; }
	inline bool* get_address_of_focused_15() { return &___focused_15; }
	inline void set_focused_15(bool value)
	{
		___focused_15 = value;
	}

	inline static int32_t get_offset_of_initialized_16() { return static_cast<int32_t>(offsetof(OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66, ___initialized_16)); }
	inline bool get_initialized_16() const { return ___initialized_16; }
	inline bool* get_address_of_initialized_16() { return &___initialized_16; }
	inline void set_initialized_16(bool value)
	{
		___initialized_16 = value;
	}
};


// OVRTouchpadHelper
struct OVRTouchpadHelper_tA41F61CC41849A4352DE8927B9A8E10604D2BFA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// OVRLipSyncContext
struct OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA  : public OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F
{
public:
	// System.Boolean OVRLipSyncContext::enableKeyboardInput
	bool ___enableKeyboardInput_10;
	// System.Boolean OVRLipSyncContext::enableTouchInput
	bool ___enableTouchInput_11;
	// System.Boolean OVRLipSyncContext::audioLoopback
	bool ___audioLoopback_12;
	// UnityEngine.KeyCode OVRLipSyncContext::loopbackKey
	int32_t ___loopbackKey_13;
	// System.Boolean OVRLipSyncContext::showVisemes
	bool ___showVisemes_14;
	// UnityEngine.KeyCode OVRLipSyncContext::debugVisemesKey
	int32_t ___debugVisemesKey_15;
	// System.Boolean OVRLipSyncContext::skipAudioSource
	bool ___skipAudioSource_16;
	// System.Single OVRLipSyncContext::gain
	float ___gain_17;
	// System.Boolean OVRLipSyncContext::hasDebugConsole
	bool ___hasDebugConsole_18;
	// UnityEngine.KeyCode OVRLipSyncContext::debugLaughterKey
	int32_t ___debugLaughterKey_19;
	// System.Boolean OVRLipSyncContext::showLaughter
	bool ___showLaughter_20;
	// System.Single OVRLipSyncContext::laughterScore
	float ___laughterScore_21;

public:
	inline static int32_t get_offset_of_enableKeyboardInput_10() { return static_cast<int32_t>(offsetof(OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA, ___enableKeyboardInput_10)); }
	inline bool get_enableKeyboardInput_10() const { return ___enableKeyboardInput_10; }
	inline bool* get_address_of_enableKeyboardInput_10() { return &___enableKeyboardInput_10; }
	inline void set_enableKeyboardInput_10(bool value)
	{
		___enableKeyboardInput_10 = value;
	}

	inline static int32_t get_offset_of_enableTouchInput_11() { return static_cast<int32_t>(offsetof(OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA, ___enableTouchInput_11)); }
	inline bool get_enableTouchInput_11() const { return ___enableTouchInput_11; }
	inline bool* get_address_of_enableTouchInput_11() { return &___enableTouchInput_11; }
	inline void set_enableTouchInput_11(bool value)
	{
		___enableTouchInput_11 = value;
	}

	inline static int32_t get_offset_of_audioLoopback_12() { return static_cast<int32_t>(offsetof(OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA, ___audioLoopback_12)); }
	inline bool get_audioLoopback_12() const { return ___audioLoopback_12; }
	inline bool* get_address_of_audioLoopback_12() { return &___audioLoopback_12; }
	inline void set_audioLoopback_12(bool value)
	{
		___audioLoopback_12 = value;
	}

	inline static int32_t get_offset_of_loopbackKey_13() { return static_cast<int32_t>(offsetof(OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA, ___loopbackKey_13)); }
	inline int32_t get_loopbackKey_13() const { return ___loopbackKey_13; }
	inline int32_t* get_address_of_loopbackKey_13() { return &___loopbackKey_13; }
	inline void set_loopbackKey_13(int32_t value)
	{
		___loopbackKey_13 = value;
	}

	inline static int32_t get_offset_of_showVisemes_14() { return static_cast<int32_t>(offsetof(OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA, ___showVisemes_14)); }
	inline bool get_showVisemes_14() const { return ___showVisemes_14; }
	inline bool* get_address_of_showVisemes_14() { return &___showVisemes_14; }
	inline void set_showVisemes_14(bool value)
	{
		___showVisemes_14 = value;
	}

	inline static int32_t get_offset_of_debugVisemesKey_15() { return static_cast<int32_t>(offsetof(OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA, ___debugVisemesKey_15)); }
	inline int32_t get_debugVisemesKey_15() const { return ___debugVisemesKey_15; }
	inline int32_t* get_address_of_debugVisemesKey_15() { return &___debugVisemesKey_15; }
	inline void set_debugVisemesKey_15(int32_t value)
	{
		___debugVisemesKey_15 = value;
	}

	inline static int32_t get_offset_of_skipAudioSource_16() { return static_cast<int32_t>(offsetof(OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA, ___skipAudioSource_16)); }
	inline bool get_skipAudioSource_16() const { return ___skipAudioSource_16; }
	inline bool* get_address_of_skipAudioSource_16() { return &___skipAudioSource_16; }
	inline void set_skipAudioSource_16(bool value)
	{
		___skipAudioSource_16 = value;
	}

	inline static int32_t get_offset_of_gain_17() { return static_cast<int32_t>(offsetof(OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA, ___gain_17)); }
	inline float get_gain_17() const { return ___gain_17; }
	inline float* get_address_of_gain_17() { return &___gain_17; }
	inline void set_gain_17(float value)
	{
		___gain_17 = value;
	}

	inline static int32_t get_offset_of_hasDebugConsole_18() { return static_cast<int32_t>(offsetof(OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA, ___hasDebugConsole_18)); }
	inline bool get_hasDebugConsole_18() const { return ___hasDebugConsole_18; }
	inline bool* get_address_of_hasDebugConsole_18() { return &___hasDebugConsole_18; }
	inline void set_hasDebugConsole_18(bool value)
	{
		___hasDebugConsole_18 = value;
	}

	inline static int32_t get_offset_of_debugLaughterKey_19() { return static_cast<int32_t>(offsetof(OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA, ___debugLaughterKey_19)); }
	inline int32_t get_debugLaughterKey_19() const { return ___debugLaughterKey_19; }
	inline int32_t* get_address_of_debugLaughterKey_19() { return &___debugLaughterKey_19; }
	inline void set_debugLaughterKey_19(int32_t value)
	{
		___debugLaughterKey_19 = value;
	}

	inline static int32_t get_offset_of_showLaughter_20() { return static_cast<int32_t>(offsetof(OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA, ___showLaughter_20)); }
	inline bool get_showLaughter_20() const { return ___showLaughter_20; }
	inline bool* get_address_of_showLaughter_20() { return &___showLaughter_20; }
	inline void set_showLaughter_20(bool value)
	{
		___showLaughter_20 = value;
	}

	inline static int32_t get_offset_of_laughterScore_21() { return static_cast<int32_t>(offsetof(OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA, ___laughterScore_21)); }
	inline float get_laughterScore_21() const { return ___laughterScore_21; }
	inline float* get_address_of_laughterScore_21() { return &___laughterScore_21; }
	inline void set_laughterScore_21(float value)
	{
		___laughterScore_21 = value;
	}
};


// OVRLipSyncContextCanned
struct OVRLipSyncContextCanned_tB77028617E9368F7D22D672569F37ED1BB74552F  : public OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F
{
public:
	// OVRLipSyncSequence OVRLipSyncContextCanned::currentSequence
	OVRLipSyncSequence_t67C1C061971274CF4F2264B46B14A4FAACE39799 * ___currentSequence_10;

public:
	inline static int32_t get_offset_of_currentSequence_10() { return static_cast<int32_t>(offsetof(OVRLipSyncContextCanned_tB77028617E9368F7D22D672569F37ED1BB74552F, ___currentSequence_10)); }
	inline OVRLipSyncSequence_t67C1C061971274CF4F2264B46B14A4FAACE39799 * get_currentSequence_10() const { return ___currentSequence_10; }
	inline OVRLipSyncSequence_t67C1C061971274CF4F2264B46B14A4FAACE39799 ** get_address_of_currentSequence_10() { return &___currentSequence_10; }
	inline void set_currentSequence_10(OVRLipSyncSequence_t67C1C061971274CF4F2264B46B14A4FAACE39799 * value)
	{
		___currentSequence_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSequence_10), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// EnableSwitch[]
struct EnableSwitchU5BU5D_t0E58B43C2C4981AA888AD44DC027DAB703886E35  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A * m_Items[1];

public:
	inline EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A * value)
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
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
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
// OVRLipSyncDebugConsole[]
struct OVRLipSyncDebugConsoleU5BU5D_tA03669460B339E44DD358F4BF8483307076352E9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * m_Items[1];

public:
	inline OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871  : public RuntimeArray
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
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
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
// UnityEngine.Texture[]
struct TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * m_Items[1];

public:
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void OVRTouchpad/OVRTouchpadCallback`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRTouchpadCallback_1__ctor_m8DBFA51A6DA96D609B9B400EB801AB80F24FB595_gshared (OVRTouchpadCallback_1_t0B8ECDB83D53377D29FCA99DB82D3870AD732453 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean EnableSwitch::SetActive<System.Object>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnableSwitch_SetActive_TisRuntimeObject_m9236C777314897D3610044D297BD0ADA60CAD19C_gshared (EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A * __this, int32_t ___target0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_gshared (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D  List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B_gshared (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_gshared_inline (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69_gshared (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92_gshared (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* Enumerable_ToArray_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m00E67835DCABA6A49B5CEE6415E8D5377C8BB5DA_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void OVRTouchpad/OVRTouchpadCallback`1<System.Int32Enum>::Invoke(TouchEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRTouchpadCallback_1_Invoke_m598C46BA9FFAB8723A8259EB127F882E352AF969_gshared (OVRTouchpadCallback_1_t0B8ECDB83D53377D29FCA99DB82D3870AD732453 * __this, int32_t ___arg0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Void LipSyncDemo_Control::RotateObject(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LipSyncDemo_Control_RotateObject_m5ADB1761CA5C86EA13C3F3280E950D1E21EE045C (LipSyncDemo_Control_t995A4E9E3582F93D39078223ADB6D3F39AF2449C * __this, float ___amountDegrees0, bool ___absolute1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void OVRTouchpad/OVRTouchpadCallback`1<OVRTouchpad/TouchEvent>::.ctor(System.Object,System.IntPtr)
inline void OVRTouchpadCallback_1__ctor_m5D93A4018425521E2BBFF1A0A9CFD48077D15070 (OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B *, RuntimeObject *, intptr_t, const RuntimeMethod*))OVRTouchpadCallback_1__ctor_m8DBFA51A6DA96D609B9B400EB801AB80F24FB595_gshared)(__this, ___object0, ___method1, method);
}
// System.Void OVRTouchpad::AddListener(OVRTouchpad/OVRTouchpadCallback`1<OVRTouchpad/TouchEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRTouchpad_AddListener_mB6E87E1283F42D9B28F6458950594BE6BE9CE6FA (OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B * ___handler0, const RuntimeMethod* method);
// System.Boolean EnableSwitch::SetActive<OVRLipSyncContextMorphTarget>(System.Int32)
inline bool EnableSwitch_SetActive_TisOVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19_m8B638FF339C21F2E5B5804B3FA810DA4717FC26A (EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A * __this, int32_t ___target0, const RuntimeMethod* method)
{
	return ((  bool (*) (EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A *, int32_t, const RuntimeMethod*))EnableSwitch_SetActive_TisRuntimeObject_m9236C777314897D3610044D297BD0ADA60CAD19C_gshared)(__this, ___target0, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void LipSyncDemo_SetCurrentTarget::SetCurrentTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LipSyncDemo_SetCurrentTarget_SetCurrentTarget_m363E9462549BB91C95EC1415C10C0F76653B8BA5 (LipSyncDemo_SetCurrentTarget_tF7E8E55732074689954CEF44A58450C4A2FFE4CE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
inline void List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1 (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, const RuntimeMethod*))List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_gshared)(__this, method);
}
// System.Void UnityEngine.XR.InputDevices::GetDevicesWithCharacteristics(UnityEngine.XR.InputDeviceCharacteristics,System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevicesWithCharacteristics_m8AED20982C7D099E74435E41F8705FAE70ADBDEC (uint32_t ___desiredCharacteristics0, List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevices1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::GetEnumerator()
inline Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D  List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D  (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, const RuntimeMethod*))List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::get_Current()
inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_inline (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method)
{
	return ((  InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  (*) (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *, const RuntimeMethod*))Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___usage0, bool* ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::MoveNext()
inline bool Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69 (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *, const RuntimeMethod*))Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::Dispose()
inline void Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92 (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *, const RuntimeMethod*))Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92_gshared)(__this, method);
}
// System.Boolean EnableSwitch::SetActive<OVRLipSyncContextTextureFlip>(System.Int32)
inline bool EnableSwitch_SetActive_TisOVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E_m27C034F694F0EB5F96FAAF4F7418777A6B54ADE2 (EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A * __this, int32_t ___target0, const RuntimeMethod* method)
{
	return ((  bool (*) (EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A *, int32_t, const RuntimeMethod*))EnableSwitch_SetActive_TisRuntimeObject_m9236C777314897D3610044D297BD0ADA60CAD19C_gshared)(__this, ___target0, method);
}
// System.Void OVRLipSyncDebugConsole::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncDebugConsole_Clear_m5C3D7FBB2BE761768AC960CEE2B609FD38A1B242 (const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// OVRLipSync/Result OVRLipSync::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_IsInitialized_m9344702D1297D79220148DFB0022CE1C67660AE2 (const RuntimeMethod* method);
// OVRLipSync/Result OVRLipSync::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_Initialize_mC2242B7A80C64B389DF10FD775D90A5419F211A6 (const RuntimeMethod* method);
// System.Void OVRTouchpad::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRTouchpad_Create_m39D3E7A088DE03539469A417E40E1E88B46EF619 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioSettings::get_outputSampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_get_outputSampleRate_mF694C528E77284914F1F8F7CA804BD9ECD0D33BE (const RuntimeMethod* method);
// System.Void UnityEngine.AudioSettings::GetDSPBufferSize(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_GetDSPBufferSize_mC28498D69093D2E80A637A40A588230F7E0A2052 (int32_t* ___bufferLength0, int32_t* ___numBuffers1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Int32 OVRLipSync::ovrLipSyncDll_Initialize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_ovrLipSyncDll_Initialize_m41761CCDB5BA4096A99E1A67E3423E26591FE6E6 (int32_t ___samplerate0, int32_t ___buffersize1, const RuntimeMethod* method);
// System.Void OVRLipSync::ovrLipSyncDll_Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSync_ovrLipSyncDll_Shutdown_m4EFDCC03D99BEC213DDF82FF9F8B71C8F8F22853 (const RuntimeMethod* method);
// System.Int32 OVRLipSync::ovrLipSyncDll_CreateContextEx(System.UInt32&,OVRLipSync/ContextProviders,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_ovrLipSyncDll_CreateContextEx_m8494E8E877D7CB5C7B1F7B2020ABBA4D08FBE8C4 (uint32_t* ___context0, int32_t ___provider1, int32_t ___sampleRate2, bool ___enableAcceleration3, const RuntimeMethod* method);
// System.Int32 OVRLipSync::ovrLipSyncDll_CreateContextWithModelFile(System.UInt32&,OVRLipSync/ContextProviders,System.String,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_ovrLipSyncDll_CreateContextWithModelFile_m600F74001750C157EBD111578B90BD0D9C84EF4E (uint32_t* ___context0, int32_t ___provider1, String_t* ___modelPath2, int32_t ___sampleRate3, bool ___enableAcceleration4, const RuntimeMethod* method);
// System.Int32 OVRLipSync::ovrLipSyncDll_DestroyContext(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_ovrLipSyncDll_DestroyContext_mBCCA5270BFD2800D4155785E9B57E8A1E20FF583 (uint32_t ___context0, const RuntimeMethod* method);
// System.Int32 OVRLipSync::ovrLipSyncDll_ResetContext(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_ovrLipSyncDll_ResetContext_m5D4271B02656128CF63AD707319B4571A4E3656A (uint32_t ___context0, const RuntimeMethod* method);
// System.Int32 OVRLipSync::ovrLipSyncDll_SendSignal(System.UInt32,OVRLipSync/Signals,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_ovrLipSyncDll_SendSignal_m221E6C6F161FD9125A55E9862E70BB27B828F797 (uint32_t ___context0, int32_t ___signal1, int32_t ___arg12, int32_t ___arg23, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Int32 OVRLipSync::ovrLipSyncDll_ProcessFrameEx(System.UInt32,System.IntPtr,System.UInt32,OVRLipSync/AudioDataType,System.Int32&,System.Int32&,System.Single[],System.Int32,System.Single&,System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_ovrLipSyncDll_ProcessFrameEx_m3D94D2C98AA53FF78BFE1CEB296F0FC444C4CC89 (uint32_t ___context0, intptr_t ___audioBuffer1, uint32_t ___bufferSize2, int32_t ___dataType3, int32_t* ___frameNumber4, int32_t* ___frameDelay5, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___visemes6, int32_t ___visemeCount7, float* ___laughterScore8, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___laughterCategories9, int32_t ___laughterCategoriesLength10, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.String[] System.Enum::GetNames(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8 (Type_t * ___enumType0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<OVRLipSyncDebugConsole>()
inline OVRLipSyncDebugConsoleU5BU5D_tA03669460B339E44DD358F4BF8483307076352E9* Object_FindObjectsOfType_TisOVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_mFD1870043FF793622D8029862EDC325A27CADE3E (const RuntimeMethod* method)
{
	return ((  OVRLipSyncDebugConsoleU5BU5D_tA03669460B339E44DD358F4BF8483307076352E9* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.Void OVRLipSyncContext::ToggleAudioLoopback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContext_ToggleAudioLoopback_m76164AAAC8A855CB0994BE688F0B9D40E98EAB88 (OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void OVRLipSyncDebugConsole::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncDebugConsole_Log_m8A8BE6D5FFE5D2DC2CE5A6CE7DA4358D0C2C4E13 (String_t* ___message0, const RuntimeMethod* method);
// System.Void OVRLipSyncDebugConsole::ClearTimeout(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncDebugConsole_ClearTimeout_m5894FB834E8306DA4B7EC2A18E87D21756A380FF (float ___timeToClear0, const RuntimeMethod* method);
// System.Void OVRLipSyncContext::HandleKeyboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContext_HandleKeyboard_m739B2C32A8DCACC56DA9B2781652EE93ADCACC6D (OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * __this, const RuntimeMethod* method);
// OVRLipSync/Frame OVRLipSyncContextBase::get_Frame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * OVRLipSyncContextBase_get_Frame_m268FA667D0336EBB7759D3E50AE91361B4C50C51 (OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * __this, const RuntimeMethod* method);
// System.Void OVRLipSyncContext::DebugShowVisemesAndLaughter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContext_DebugShowVisemesAndLaughter_m1E8FBA38E42029F780098561CA07B01B50148B6F (OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.UInt32 OVRLipSyncContextBase::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t OVRLipSyncContextBase_get_Context_m53836909D7FE3C0C9F920ECD1E61B079E304D596 (OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * __this, const RuntimeMethod* method);
// OVRLipSync/Result OVRLipSync::ProcessFrame(System.UInt32,System.Single[],OVRLipSync/Frame,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_ProcessFrame_m48DC248F8ABFC21BD4ADCE76F29BA6775087F98B (uint32_t ___context0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___audioBuffer1, Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * ___frame2, bool ___stereo3, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// OVRLipSync/Result OVRLipSync::ProcessFrame(System.UInt32,System.Int16[],OVRLipSync/Frame,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_ProcessFrame_mC9FE2D76D8EE31F9EC00C5DDB2A7492C5BE81824 (uint32_t ___context0, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___audioBuffer1, Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * ___frame2, bool ___stereo3, const RuntimeMethod* method);
// System.Void OVRLipSyncContext::PreprocessAudioSamples(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContext_PreprocessAudioSamples_mA6C2998807D7B80EF24CEC6BB90B604D6DF96E3B (OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___channels1, const RuntimeMethod* method);
// System.Void OVRLipSyncContext::ProcessAudioSamplesRaw(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContext_ProcessAudioSamplesRaw_m0EF28DF3472D5E97056FBABA09821D947ED19AA6 (OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___channels1, const RuntimeMethod* method);
// System.Void OVRLipSyncContext::PostprocessAudioSamples(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContext_PostprocessAudioSamples_m07437A836ADF4DFFC1AB5AA2CC5BA2859A4F4B0B (OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___channels1, const RuntimeMethod* method);
// System.Void OVRLipSyncContext::ProcessAudioSamples(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContext_ProcessAudioSamples_m11BBC9ADDA82E0FAE3E50EED0DADF67904770100 (OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___channels1, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void OVRLipSyncContextBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextBase__ctor_m176189787684DA92D1FA0A313BC7EB2C06D25BA3 (OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * __this, const RuntimeMethod* method);
// OVRLipSync/Result OVRLipSync::SendSignal(System.UInt32,OVRLipSync/Signals,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_SendSignal_mBBEEBB4C6F9910F44865039E7256839AF3BFDE73 (uint32_t ___context0, int32_t ___signal1, int32_t ___arg12, int32_t ___arg23, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// OVRLipSync/Result OVRLipSync::CreateContext(System.UInt32&,OVRLipSync/ContextProviders,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_CreateContext_mA46D262E47C798D46E0B67DE8D074D79D9211147 (uint32_t* ___context0, int32_t ___provider1, int32_t ___sampleRate2, bool ___enableAcceleration3, const RuntimeMethod* method);
// OVRLipSync/Result OVRLipSync::DestroyContext(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_DestroyContext_m543FE422AA26AD78F91BF36B1756EF8B78821001 (uint32_t ___context0, const RuntimeMethod* method);
// System.Void OVRLipSync/Frame::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_Reset_m560B5FCD12159132A33A18D4706107510D053C3C (Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * __this, const RuntimeMethod* method);
// OVRLipSync/Result OVRLipSync::ResetContext(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_ResetContext_m4971A3C702DEF893A3BCD82B97330032D0ADFCDC (uint32_t ___context0, const RuntimeMethod* method);
// System.Void OVRLipSync/Frame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame__ctor_mB064A35BA6D1678E1828B9A8F67980C32B4AE755 (Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AudioSource::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_time_m2185448A5B8A50225410220AF67BC34F5596D210 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// OVRLipSync/Frame OVRLipSyncSequence::GetFrameAtTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * OVRLipSyncSequence_GetFrameAtTime_m46F1B3BFC70C22B8289626F04C35A372501C16B3 (OVRLipSyncSequence_t67C1C061971274CF4F2264B46B14A4FAACE39799 * __this, float ___time0, const RuntimeMethod* method);
// System.Void OVRLipSync/Frame::CopyInput(OVRLipSync/Frame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_CopyInput_mEFAD79327D78D7FF4AC8FAF78728FF9E0D299DA4 (Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * __this, Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * ___input0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<OVRLipSyncContextBase>()
inline OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * Component_GetComponent_TisOVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F_m3A8F35193148094ECE42EEFA868B044C05826B00 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void OVRLipSyncContextBase::set_Smoothing(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextBase_set_Smoothing_m44EE9FC2624B7CC937E39383EFB63004F3BB6D7D (OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * __this, int32_t ___value0, const RuntimeMethod* method);
// OVRLipSync/Frame OVRLipSyncContextBase::GetCurrentPhonemeFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * OVRLipSyncContextBase_GetCurrentPhonemeFrame_m37D3AF7B0C36F945DDC0087215EE9DBA64110515 (OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * __this, const RuntimeMethod* method);
// System.Void OVRLipSyncContextMorphTarget::SetVisemeToMorphTarget(OVRLipSync/Frame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextMorphTarget_SetVisemeToMorphTarget_mCC0926FF1E85658BA8993BD1929A3CBF75CC58E7 (OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19 * __this, Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * ___frame0, const RuntimeMethod* method);
// System.Void OVRLipSyncContextMorphTarget::SetLaughterToMorphTarget(OVRLipSync/Frame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextMorphTarget_SetLaughterToMorphTarget_m6323AE01AFD1855071A3F16403FA4D0253C452A6 (OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19 * __this, Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * ___frame0, const RuntimeMethod* method);
// System.Void OVRLipSyncContextMorphTarget::CheckForKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextMorphTarget_CheckForKeys_m3E0D59EF33AC9BF52927879EE36E23195856A714 (OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19 * __this, const RuntimeMethod* method);
// System.Int32 OVRLipSyncContextBase::get_Smoothing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSyncContextBase_get_Smoothing_m7E0182F4AB0C5F4E32E795DA896EE2EEE8BFC3F4 (OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * __this, const RuntimeMethod* method);
// System.Void OVRLipSyncContextMorphTarget::CheckVisemeKey(UnityEngine.KeyCode,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextMorphTarget_CheckVisemeKey_mE9AEA5532A6BBDC62E0E98E4F488848CDBF0EA22 (OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19 * __this, int32_t ___key0, int32_t ___viseme1, int32_t ___amount2, const RuntimeMethod* method);
// System.Void OVRLipSyncContextMorphTarget::CheckLaughterKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextMorphTarget_CheckLaughterKey_m678C4941DFD78F8B504AC27C3E07F40BE40F99DC (OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SkinnedMeshRenderer::SetBlendShapeWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_SetBlendShapeWeight_mF546F3567C5039C217AD1E32157B992B4124B5FD (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void OVRLipSyncContextBase::SetVisemeBlend(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextBase_SetVisemeBlend_mAD60E51F4E5715097D90CB93AA203BF6A5C4E8BB (OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * __this, int32_t ___viseme0, int32_t ___amount1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F (int32_t ___key0, const RuntimeMethod* method);
// System.Void OVRLipSyncContextBase::SetLaughterBlend(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextBase_SetLaughterBlend_m08D99DF7058BAF5C115F5C76F78B3845226B9738 (OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * __this, int32_t ___amount0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Int32> System.Linq.Enumerable::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Range_mA545670D76B68795D0126AC84B994E2AD66E2415 (int32_t ___start0, int32_t ___count1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>)
inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* Enumerable_ToArray_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m00E67835DCABA6A49B5CEE6415E8D5377C8BB5DA (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m00E67835DCABA6A49B5CEE6415E8D5377C8BB5DA_gshared)(___source0, method);
}
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void OVRLipSyncContextTextureFlip::SetVisemeToTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextTextureFlip_SetVisemeToTexture_m9E54B0E2DD1E6A5EC4AF728749B54535C15D6C87 (OVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_FindObjectOfType_m07215A5C789FC7C88754B64DFCF1313C55E2F6D2 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<OVRLipSyncDebugConsole>()
inline OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * GameObject_AddComponent_TisOVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_m4F83BF5F42A90B3D8E76CC64A61A038333EFB81A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void OVRLipSyncDebugConsole::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncDebugConsole_Init_mB0E6910DE2AFD45A64C567FF952D7DA18587D790 (OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * __this, const RuntimeMethod* method);
// OVRLipSyncDebugConsole OVRLipSyncDebugConsole::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * OVRLipSyncDebugConsole_get_instance_m0DD963130333A7601012BA645E15C6C3652F6E0D (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void OVRLipSyncDebugConsole::AddMessage(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncDebugConsole_AddMessage_m889F54EF064BCB9A3A3666279B8E3A3EC246CFA4 (OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * __this, String_t* ___message0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method);
// System.Void OVRLipSyncDebugConsole::ClearMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncDebugConsole_ClearMessages_m94B421ED9BABA96EC6B076E97298B841E125183D (OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * __this, const RuntimeMethod* method);
// System.Void OVRLipSyncDebugConsole::SetClearTimeout(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncDebugConsole_SetClearTimeout_m5F8FB28CDF4E088A916DF847BC29D1E3B78BE0E3 (OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * __this, float ___timeout0, const RuntimeMethod* method);
// System.Void OVRLipSyncDebugConsole::Display()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncDebugConsole_Display_mF9232C7C902C392A0B7AC325077EBB8DBD1FC72C (OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * __this, const RuntimeMethod* method);
// System.Void OVRLipSyncDebugConsole::Prune()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncDebugConsole_Prune_mA297EC6FADED72D67208AF1D7E6EAB927E074687 (OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_mute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_mute_m69E2DFCF261D2D187ED756096B7E0DE622292C71 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void OVRLipSyncMicInput::InitializeMicrophone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncMicInput_InitializeMicrophone_m17CA7FC87DF546022974859B475DBC0AFB215311 (OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66 * __this, const RuntimeMethod* method);
// System.String[] UnityEngine.Microphone::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Microphone_get_devices_m550C09D23C4FF50A6F3E1A2198D741436CCB584A (const RuntimeMethod* method);
// System.Void OVRLipSyncMicInput::GetMicCaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncMicInput_GetMicCaps_mEBFC24F204D8604F8AD7BBE7007554C6508E8625 (OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Microphone::IsRecording(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_mF5DE093DAB01451F89AAAAD2260F101B25A75EC4 (String_t* ___deviceName0, const RuntimeMethod* method);
// System.Void OVRLipSyncMicInput::StopMicrophone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncMicInput_StopMicrophone_m446866E057DF1DF2314E01976B8A6B3418442D6B (OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void OVRLipSyncMicInput::StartMicrophone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncMicInput_StartMicrophone_m63B59F3A4EB4D63F654312585E2F830A3FC8BD7B (OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void OVRLipSyncMicInput::MicDeviceGUI(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncMicInput_MicDeviceGUI_m05F9971B9E284DCBD6A696B648FD898527F76199 (OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66 * __this, float ___left0, float ___top1, float ___width2, float ___height3, float ___buttonSpaceTop4, float ___buttonSpaceLeft5, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Void UnityEngine.Microphone::GetDeviceCaps(System.String,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_GetDeviceCaps_m686FE02260047336BB7FC9EC01F349D682CA603E (String_t* ___deviceName0, int32_t* ___minFreq1, int32_t* ___maxFreq2, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * Microphone_Start_m7F08B42DC2B97BE649F7329C0FAC54125FE0AC5D (String_t* ___deviceName0, bool ___loop1, int32_t ___lengthSec2, int32_t ___frequency3, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Diagnostics.Stopwatch System.Diagnostics.Stopwatch::StartNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * Stopwatch_StartNew_m526152085BB22CB969AF40B2775939C5C7F7F2F6 (const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC (int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Microphone::GetPosition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetPosition_m7D0A6CF146C1F716F0DF886223B119279DE1E587 (String_t* ___deviceName0, const RuntimeMethod* method);
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<OVRLipSyncContext>()
inline OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * Component_GetComponent_TisOVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA_m6287587580820D781AEAFD33F22E6D3149EBACFC (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// OVRLipSync/Result OVRLipSyncContextBase::ResetContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSyncContextBase_ResetContext_mA037C4F5C56543348A9E307AA389AEDE916C43FB (OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Microphone::End(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_End_mF41BC1D2BA47C6FC2C25BA106F99A5704ACE518F (String_t* ___deviceName0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<OVRLipSync/Frame>::get_Count()
inline int32_t List_1_get_Count_m29F9D043CF093E440790C1319778284E00D24362_inline (List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<OVRLipSync/Frame>::get_Item(System.Int32)
inline Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * List_1_get_Item_m7BC56355EB45C14AC64B0DFAED97EA461FE6500E_inline (List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * (*) (List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<OVRLipSync/Frame>::.ctor()
inline void List_1__ctor_m6CFC543DA637FCF28B1AEB05DC0D6B3DD6C3BF49 (List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7 (PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void OVRTouchpad::HandleInputMouse(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRTouchpad_HandleInputMouse_mEC5822000F971F6F77ED4FD6A5049C9C814CCE25 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___move0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void OVRTouchpad/OVRTouchpadCallback`1<OVRTouchpad/TouchEvent>::Invoke(TouchEvent)
inline void OVRTouchpadCallback_1_Invoke_m565E1355551356D7F89DAF9BB11542B423B8AA26 (OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B * __this, int32_t ___arg0, const RuntimeMethod* method)
{
	((  void (*) (OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B *, int32_t, const RuntimeMethod*))OVRTouchpadCallback_1_Invoke_m598C46BA9FFAB8723A8259EB127F882E352AF969_gshared)(__this, ___arg0, method);
}
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<OVRTouchpadHelper>()
inline OVRTouchpadHelper_tA41F61CC41849A4352DE8927B9A8E10604D2BFA1 * GameObject_AddComponent_TisOVRTouchpadHelper_tA41F61CC41849A4352DE8927B9A8E10604D2BFA1_m80B34FFFEB591DB6EC62A33ED4DAB816EBF84C91 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  OVRTouchpadHelper_tA41F61CC41849A4352DE8927B9A8E10604D2BFA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void OVRTouchpad::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRTouchpad_Update_m1B22D90B43A840AA09A8B8E8C235F2546B46E92D (const RuntimeMethod* method);
// System.Void OVRTouchpad::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRTouchpad_OnDisable_mB6BBD3B7EEEA50C00BB2A7764A314E1A3C9DE63F (const RuntimeMethod* method);
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_m6AF950973942E09BAB1F21B055BBD2CD58C980B2 (RuntimeArray * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method);
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F (RuntimeArray * ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OVRLipSync_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ovrLipSyncDll_Initialize(int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OVRLipSync_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ovrLipSyncDll_Shutdown();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OVRLipSync_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ovrLipSyncDll_GetVersion(int32_t*, int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OVRLipSync_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ovrLipSyncDll_CreateContextEx(uint32_t*, int32_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OVRLipSync_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ovrLipSyncDll_CreateContextWithModelFile(uint32_t*, int32_t, char*, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OVRLipSync_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ovrLipSyncDll_DestroyContext(uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OVRLipSync_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ovrLipSyncDll_ResetContext(uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OVRLipSync_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ovrLipSyncDll_SendSignal(uint32_t, int32_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OVRLipSync_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ovrLipSyncDll_ProcessFrameEx(uint32_t, intptr_t, uint32_t, int32_t, int32_t*, int32_t*, float*, int32_t, float*, float*, int32_t);
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
// System.Void EnableSwitch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableSwitch__ctor_m761C8349890B214907A67CC967621D12F64AB00B (EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A * __this, const RuntimeMethod* method)
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
// System.Void LipSyncDemo_Control::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LipSyncDemo_Control_Start_m7218E598E195088B30BB60F72BA625AE9AA55A44 (LipSyncDemo_Control_t995A4E9E3582F93D39078223ADB6D3F39AF2449C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void LipSyncDemo_Control::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LipSyncDemo_Control_Update_m426BD1549229C54E20FA98911DC5DDC4AB67DFA5 (LipSyncDemo_Control_t995A4E9E3582F93D39078223ADB6D3F39AF2449C * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (Input.GetKey(rotateLeftKey))
		int32_t L_0 = __this->get_rotateLeftKey_4();
		bool L_1;
		L_1 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// RotateObject(rotationAmount);
		float L_3 = __this->get_rotationAmount_8();
		LipSyncDemo_Control_RotateObject_m5ADB1761CA5C86EA13C3F3280E950D1E21EE045C(__this, L_3, (bool)0, /*hidden argument*/NULL);
		goto IL_0063;
	}

IL_0022:
	{
		// else if (Input.GetKey(rotateRightKey))
		int32_t L_4 = __this->get_rotateRightKey_5();
		bool L_5;
		L_5 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// RotateObject(-rotationAmount);
		float L_7 = __this->get_rotationAmount_8();
		LipSyncDemo_Control_RotateObject_m5ADB1761CA5C86EA13C3F3280E950D1E21EE045C(__this, ((-L_7)), (bool)0, /*hidden argument*/NULL);
		goto IL_0063;
	}

IL_0044:
	{
		// else if (Input.GetKey(resetRotationKey))
		int32_t L_8 = __this->get_resetRotationKey_6();
		bool L_9;
		L_9 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0063;
		}
	}
	{
		// RotateObject(resetRotation, true);
		float L_11 = __this->get_resetRotation_7();
		LipSyncDemo_Control_RotateObject_m5ADB1761CA5C86EA13C3F3280E950D1E21EE045C(__this, L_11, (bool)1, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void LipSyncDemo_Control::RotateObject(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LipSyncDemo_Control_RotateObject_m5ADB1761CA5C86EA13C3F3280E950D1E21EE045C (LipSyncDemo_Control_t995A4E9E3582F93D39078223ADB6D3F39AF2449C * __this, float ___amountDegrees0, bool ___absolute1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46AFD0B590DA602E3D55726017FF50D073CFDC6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDD779ECBA7D345CFA63A0F001CA13C61BCEC842);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	bool V_6 = false;
	int32_t G_B8_0 = 0;
	{
		// GameObject target = GameObject.Find("LipSyncMorphTarget_Female");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralDDD779ECBA7D345CFA63A0F001CA13C61BCEC842, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (target == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// target = GameObject.Find("RobotHead_TextureFlip");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral46AFD0B590DA602E3D55726017FF50D073CFDC6E, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0024:
	{
		// if (target)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_00dd;
		}
	}
	{
		// if (absolute)
		bool L_8 = ___absolute1;
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0067;
		}
	}
	{
		// float deltaRotate = amountDegrees - target.transform.eulerAngles.y;
		float L_10 = ___amountDegrees0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_0;
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		V_4 = ((float)il2cpp_codegen_subtract((float)L_10, (float)L_14));
		// target.transform.Rotate(Vector3.up * deltaRotate);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = V_0;
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_18 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_16, L_19, /*hidden argument*/NULL);
		goto IL_00dc;
	}

IL_0067:
	{
		// float deltaRotate = Time.deltaTime * amountDegrees;
		float L_20;
		L_20 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_21 = ___amountDegrees0;
		V_5 = ((float)il2cpp_codegen_multiply((float)L_20, (float)L_21));
		// if (deltaRotate + target.transform.eulerAngles.y >= resetRotation - rotationMax &&
		//     deltaRotate + target.transform.eulerAngles.y <= resetRotation + rotationMax)
		float L_22 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = V_0;
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_y_3();
		float L_27 = __this->get_resetRotation_7();
		float L_28 = __this->get_rotationMax_9();
		if ((!(((float)((float)il2cpp_codegen_add((float)L_22, (float)L_26))) >= ((float)((float)il2cpp_codegen_subtract((float)L_27, (float)L_28))))))
		{
			goto IL_00ba;
		}
	}
	{
		float L_29 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = V_0;
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_31, /*hidden argument*/NULL);
		float L_33 = L_32.get_y_3();
		float L_34 = __this->get_resetRotation_7();
		float L_35 = __this->get_rotationMax_9();
		G_B8_0 = ((((int32_t)((!(((float)((float)il2cpp_codegen_add((float)L_29, (float)L_33))) <= ((float)((float)il2cpp_codegen_add((float)L_34, (float)L_35)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00bb;
	}

IL_00ba:
	{
		G_B8_0 = 0;
	}

IL_00bb:
	{
		V_6 = (bool)G_B8_0;
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_00db;
		}
	}
	{
		// target.transform.Rotate(Vector3.up * deltaRotate);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = V_0;
		NullCheck(L_37);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_37, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_40 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_39, L_40, /*hidden argument*/NULL);
		NullCheck(L_38);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_38, L_41, /*hidden argument*/NULL);
	}

IL_00db:
	{
	}

IL_00dc:
	{
	}

IL_00dd:
	{
		// }
		return;
	}
}
// System.Void LipSyncDemo_Control::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LipSyncDemo_Control__ctor_mD827F9081B19C3D25FDC1C208368E37D19905936 (LipSyncDemo_Control_t995A4E9E3582F93D39078223ADB6D3F39AF2449C * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode rotateLeftKey = KeyCode.LeftArrow;
		__this->set_rotateLeftKey_4(((int32_t)276));
		// public KeyCode rotateRightKey = KeyCode.RightArrow;
		__this->set_rotateRightKey_5(((int32_t)275));
		// public KeyCode resetRotationKey = KeyCode.DownArrow;
		__this->set_resetRotationKey_6(((int32_t)274));
		// private float resetRotation = 180.0f;
		__this->set_resetRotation_7((180.0f));
		// private float rotationAmount = 20.0f;
		__this->set_rotationAmount_8((20.0f));
		// private float rotationMax = 45.0f;
		__this->set_rotationMax_9((45.0f));
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
// System.Void LipSyncDemo_SetCurrentTarget::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LipSyncDemo_SetCurrentTarget_Start_mBD97C467352AA809FD5102C6762A1F7ECA5E43EA (LipSyncDemo_SetCurrentTarget_tF7E8E55732074689954CEF44A58450C4A2FFE4CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnableSwitch_SetActive_TisOVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19_m8B638FF339C21F2E5B5804B3FA810DA4717FC26A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LipSyncDemo_SetCurrentTarget_LocalTouchEventCallback_m69B26FDF1F5437E6F13B20E76F7219D70D29DBA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRTouchpadCallback_1__ctor_m5D93A4018425521E2BBFF1A0A9CFD48077D15070_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OVRTouchpad.AddListener(LocalTouchEventCallback);
		OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B * L_0 = (OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B *)il2cpp_codegen_object_new(OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B_il2cpp_TypeInfo_var);
		OVRTouchpadCallback_1__ctor_m5D93A4018425521E2BBFF1A0A9CFD48077D15070(L_0, __this, (intptr_t)((intptr_t)LipSyncDemo_SetCurrentTarget_LocalTouchEventCallback_m69B26FDF1F5437E6F13B20E76F7219D70D29DBA5_RuntimeMethod_var), /*hidden argument*/OVRTouchpadCallback_1__ctor_m5D93A4018425521E2BBFF1A0A9CFD48077D15070_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var);
		OVRTouchpad_AddListener_mB6E87E1283F42D9B28F6458950594BE6BE9CE6FA(L_0, /*hidden argument*/NULL);
		// targetSet = 0;
		__this->set_targetSet_5(0);
		// SwitchTargets[0].SetActive<OVRLipSyncContextMorphTarget>(0);
		EnableSwitchU5BU5D_t0E58B43C2C4981AA888AD44DC027DAB703886E35* L_1 = __this->get_SwitchTargets_4();
		NullCheck(L_1);
		int32_t L_2 = 0;
		EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4;
		L_4 = EnableSwitch_SetActive_TisOVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19_m8B638FF339C21F2E5B5804B3FA810DA4717FC26A(L_3, 0, /*hidden argument*/EnableSwitch_SetActive_TisOVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19_m8B638FF339C21F2E5B5804B3FA810DA4717FC26A_RuntimeMethod_var);
		// SwitchTargets[1].SetActive<OVRLipSyncContextMorphTarget>(0);
		EnableSwitchU5BU5D_t0E58B43C2C4981AA888AD44DC027DAB703886E35* L_5 = __this->get_SwitchTargets_4();
		NullCheck(L_5);
		int32_t L_6 = 1;
		EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		bool L_8;
		L_8 = EnableSwitch_SetActive_TisOVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19_m8B638FF339C21F2E5B5804B3FA810DA4717FC26A(L_7, 0, /*hidden argument*/EnableSwitch_SetActive_TisOVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19_m8B638FF339C21F2E5B5804B3FA810DA4717FC26A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void LipSyncDemo_SetCurrentTarget::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LipSyncDemo_SetCurrentTarget_Update_mBBD88AF02266EBC2E75B14DDB3C28CC26153CFEF (LipSyncDemo_SetCurrentTarget_tF7E8E55732074689954CEF44A58450C4A2FFE4CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D  V_10;
	memset((&V_10), 0, sizeof(V_10));
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B27_0 = 0;
	int32_t G_B34_0 = 0;
	{
		// if (Input.GetKeyDown(KeyCode.Alpha1))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)49), /*hidden argument*/NULL);
		V_3 = L_0;
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// targetSet = 0;
		__this->set_targetSet_5(0);
		// SetCurrentTarget();
		LipSyncDemo_SetCurrentTarget_SetCurrentTarget_m363E9462549BB91C95EC1415C10C0F76653B8BA5(__this, /*hidden argument*/NULL);
		goto IL_00ba;
	}

IL_0021:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha2))
		bool L_2;
		L_2 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)50), /*hidden argument*/NULL);
		V_4 = L_2;
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		// targetSet = 1;
		__this->set_targetSet_5(1);
		// SetCurrentTarget();
		LipSyncDemo_SetCurrentTarget_SetCurrentTarget_m363E9462549BB91C95EC1415C10C0F76653B8BA5(__this, /*hidden argument*/NULL);
		goto IL_00ba;
	}

IL_0040:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha3))
		bool L_4;
		L_4 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)51), /*hidden argument*/NULL);
		V_5 = L_4;
		bool L_5 = V_5;
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		// targetSet = 2;
		__this->set_targetSet_5(2);
		// SetCurrentTarget();
		LipSyncDemo_SetCurrentTarget_SetCurrentTarget_m363E9462549BB91C95EC1415C10C0F76653B8BA5(__this, /*hidden argument*/NULL);
		goto IL_00ba;
	}

IL_005f:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha4))
		bool L_6;
		L_6 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)52), /*hidden argument*/NULL);
		V_6 = L_6;
		bool L_7 = V_6;
		if (!L_7)
		{
			goto IL_007e;
		}
	}
	{
		// targetSet = 3;
		__this->set_targetSet_5(3);
		// SetCurrentTarget();
		LipSyncDemo_SetCurrentTarget_SetCurrentTarget_m363E9462549BB91C95EC1415C10C0F76653B8BA5(__this, /*hidden argument*/NULL);
		goto IL_00ba;
	}

IL_007e:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha5))
		bool L_8;
		L_8 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)53), /*hidden argument*/NULL);
		V_7 = L_8;
		bool L_9 = V_7;
		if (!L_9)
		{
			goto IL_009d;
		}
	}
	{
		// targetSet = 4;
		__this->set_targetSet_5(4);
		// SetCurrentTarget();
		LipSyncDemo_SetCurrentTarget_SetCurrentTarget_m363E9462549BB91C95EC1415C10C0F76653B8BA5(__this, /*hidden argument*/NULL);
		goto IL_00ba;
	}

IL_009d:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha6))
		bool L_10;
		L_10 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)54), /*hidden argument*/NULL);
		V_8 = L_10;
		bool L_11 = V_8;
		if (!L_11)
		{
			goto IL_00ba;
		}
	}
	{
		// targetSet = 5;
		__this->set_targetSet_5(5);
		// SetCurrentTarget();
		LipSyncDemo_SetCurrentTarget_SetCurrentTarget_m363E9462549BB91C95EC1415C10C0F76653B8BA5(__this, /*hidden argument*/NULL);
	}

IL_00ba:
	{
		// if (Input.GetKeyDown (KeyCode.Escape))
		bool L_12;
		L_12 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)27), /*hidden argument*/NULL);
		V_9 = L_12;
		bool L_13 = V_9;
		if (!L_13)
		{
			goto IL_00cf;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_00cf:
	{
		// var inputDevices = new List<InputDevice>();
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_14 = (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *)il2cpp_codegen_object_new(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var);
		List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1(L_14, /*hidden argument*/List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var);
		V_0 = L_14;
		// InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.HeldInHand, inputDevices);
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_15 = V_0;
		InputDevices_GetDevicesWithCharacteristics_m8AED20982C7D099E74435E41F8705FAE70ADBDEC(4, L_15, /*hidden argument*/NULL);
		// var primaryButtonPressed = false;
		V_1 = (bool)0;
		// var secondaryButtonPressed = false;
		V_2 = (bool)0;
		// foreach (var device in inputDevices)
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_16 = V_0;
		NullCheck(L_16);
		Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D  L_17;
		L_17 = List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B(L_16, /*hidden argument*/List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B_RuntimeMethod_var);
		V_10 = L_17;
	}

IL_00ea:
	try
	{ // begin try (depth: 1)
		{
			goto IL_012d;
		}

IL_00ec:
		{
			// foreach (var device in inputDevices)
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_18;
			L_18 = Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_inline((Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *)(&V_10), /*hidden argument*/Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_RuntimeMethod_var);
			V_11 = L_18;
			// if (device.TryGetFeatureValue(CommonUsages.primaryButton, out boolValue) && boolValue)
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_19 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_primaryButton_1();
			bool L_20;
			L_20 = InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_11), L_19, (bool*)(&V_12), /*hidden argument*/NULL);
			bool L_21 = V_12;
			V_13 = (bool)((int32_t)((int32_t)L_20&(int32_t)L_21));
			bool L_22 = V_13;
			if (!L_22)
			{
				goto IL_0111;
			}
		}

IL_010d:
		{
			// primaryButtonPressed = true;
			V_1 = (bool)1;
		}

IL_0111:
		{
			// if (device.TryGetFeatureValue(CommonUsages.secondaryButton, out boolValue) && boolValue)
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_23 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_secondaryButton_3();
			bool L_24;
			L_24 = InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_11), L_23, (bool*)(&V_12), /*hidden argument*/NULL);
			bool L_25 = V_12;
			V_14 = (bool)((int32_t)((int32_t)L_24&(int32_t)L_25));
			bool L_26 = V_14;
			if (!L_26)
			{
				goto IL_012c;
			}
		}

IL_0128:
		{
			// secondaryButtonPressed = true;
			V_2 = (bool)1;
		}

IL_012c:
		{
		}

IL_012d:
		{
			// foreach (var device in inputDevices)
			bool L_27;
			L_27 = Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69((Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *)(&V_10), /*hidden argument*/Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69_RuntimeMethod_var);
			if (L_27)
			{
				goto IL_00ec;
			}
		}

IL_0136:
		{
			IL2CPP_LEAVE(0x147, FINALLY_0138);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0138;
	}

FINALLY_0138:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92((Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *)(&V_10), /*hidden argument*/Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92_RuntimeMethod_var);
		IL2CPP_END_FINALLY(312)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(312)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x147, IL_0147)
	}

IL_0147:
	{
		// if (primaryButtonPressed && !XRButtonBeingPressed)
		bool L_28 = V_1;
		if (!L_28)
		{
			goto IL_0155;
		}
	}
	{
		bool L_29 = __this->get_XRButtonBeingPressed_7();
		G_B27_0 = ((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		goto IL_0156;
	}

IL_0155:
	{
		G_B27_0 = 0;
	}

IL_0156:
	{
		V_15 = (bool)G_B27_0;
		bool L_30 = V_15;
		if (!L_30)
		{
			goto IL_0193;
		}
	}
	{
		// targetSet++;
		int32_t L_31 = __this->get_targetSet_5();
		__this->set_targetSet_5(((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)));
		// if (targetSet >= maxTarget)
		int32_t L_32 = __this->get_targetSet_5();
		int32_t L_33 = __this->get_maxTarget_6();
		V_16 = (bool)((((int32_t)((((int32_t)L_32) < ((int32_t)L_33))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_16;
		if (!L_34)
		{
			goto IL_018b;
		}
	}
	{
		// targetSet = 0;
		__this->set_targetSet_5(0);
	}

IL_018b:
	{
		// SetCurrentTarget();
		LipSyncDemo_SetCurrentTarget_SetCurrentTarget_m363E9462549BB91C95EC1415C10C0F76653B8BA5(__this, /*hidden argument*/NULL);
	}

IL_0193:
	{
		// if (secondaryButtonPressed && !XRButtonBeingPressed)
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_01a1;
		}
	}
	{
		bool L_36 = __this->get_XRButtonBeingPressed_7();
		G_B34_0 = ((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
		goto IL_01a2;
	}

IL_01a1:
	{
		G_B34_0 = 0;
	}

IL_01a2:
	{
		V_17 = (bool)G_B34_0;
		bool L_37 = V_17;
		if (!L_37)
		{
			goto IL_01de;
		}
	}
	{
		// targetSet--;
		int32_t L_38 = __this->get_targetSet_5();
		__this->set_targetSet_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)1)));
		// if (targetSet < 0)
		int32_t L_39 = __this->get_targetSet_5();
		V_18 = (bool)((((int32_t)L_39) < ((int32_t)0))? 1 : 0);
		bool L_40 = V_18;
		if (!L_40)
		{
			goto IL_01d6;
		}
	}
	{
		// targetSet = maxTarget - 1;
		int32_t L_41 = __this->get_maxTarget_6();
		__this->set_targetSet_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1)));
	}

IL_01d6:
	{
		// SetCurrentTarget();
		LipSyncDemo_SetCurrentTarget_SetCurrentTarget_m363E9462549BB91C95EC1415C10C0F76653B8BA5(__this, /*hidden argument*/NULL);
	}

IL_01de:
	{
		// XRButtonBeingPressed = primaryButtonPressed || secondaryButtonPressed;
		bool L_42 = V_1;
		bool L_43 = V_2;
		__this->set_XRButtonBeingPressed_7((bool)((int32_t)((int32_t)L_42|(int32_t)L_43)));
		// }
		return;
	}
}
// System.Void LipSyncDemo_SetCurrentTarget::SetCurrentTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LipSyncDemo_SetCurrentTarget_SetCurrentTarget_m363E9462549BB91C95EC1415C10C0F76653B8BA5 (LipSyncDemo_SetCurrentTarget_tF7E8E55732074689954CEF44A58450C4A2FFE4CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnableSwitch_SetActive_TisOVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19_m8B638FF339C21F2E5B5804B3FA810DA4717FC26A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnableSwitch_SetActive_TisOVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E_m27C034F694F0EB5F96FAAF4F7418777A6B54ADE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch(targetSet)
		int32_t L_0 = __this->get_targetSet_5();
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0050;
			}
			case 2:
			{
				goto IL_0073;
			}
			case 3:
			{
				goto IL_0093;
			}
			case 4:
			{
				goto IL_00b3;
			}
			case 5:
			{
				goto IL_00d3;
			}
		}
	}
	{
		goto IL_00f3;
	}

IL_002d:
	{
		// SwitchTargets[0].SetActive<OVRLipSyncContextMorphTarget>(0);
		EnableSwitchU5BU5D_t0E58B43C2C4981AA888AD44DC027DAB703886E35* L_3 = __this->get_SwitchTargets_4();
		NullCheck(L_3);
		int32_t L_4 = 0;
		EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		bool L_6;
		L_6 = EnableSwitch_SetActive_TisOVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19_m8B638FF339C21F2E5B5804B3FA810DA4717FC26A(L_5, 0, /*hidden argument*/EnableSwitch_SetActive_TisOVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19_m8B638FF339C21F2E5B5804B3FA810DA4717FC26A_RuntimeMethod_var);
		// SwitchTargets[1].SetActive<OVRLipSyncContextMorphTarget>(0);
		EnableSwitchU5BU5D_t0E58B43C2C4981AA888AD44DC027DAB703886E35* L_7 = __this->get_SwitchTargets_4();
		NullCheck(L_7);
		int32_t L_8 = 1;
		EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		bool L_10;
		L_10 = EnableSwitch_SetActive_TisOVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19_m8B638FF339C21F2E5B5804B3FA810DA4717FC26A(L_9, 0, /*hidden argument*/EnableSwitch_SetActive_TisOVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19_m8B638FF339C21F2E5B5804B3FA810DA4717FC26A_RuntimeMethod_var);
		// break;
		goto IL_00f3;
	}

IL_0050:
	{
		// SwitchTargets[0].SetActive<OVRLipSyncContextTextureFlip>(0);
		EnableSwitchU5BU5D_t0E58B43C2C4981AA888AD44DC027DAB703886E35* L_11 = __this->get_SwitchTargets_4();
		NullCheck(L_11);
		int32_t L_12 = 0;
		EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		bool L_14;
		L_14 = EnableSwitch_SetActive_TisOVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E_m27C034F694F0EB5F96FAAF4F7418777A6B54ADE2(L_13, 0, /*hidden argument*/EnableSwitch_SetActive_TisOVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E_m27C034F694F0EB5F96FAAF4F7418777A6B54ADE2_RuntimeMethod_var);
		// SwitchTargets[1].SetActive<OVRLipSyncContextTextureFlip>(1);
		EnableSwitchU5BU5D_t0E58B43C2C4981AA888AD44DC027DAB703886E35* L_15 = __this->get_SwitchTargets_4();
		NullCheck(L_15);
		int32_t L_16 = 1;
		EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A * L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		bool L_18;
		L_18 = EnableSwitch_SetActive_TisOVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E_m27C034F694F0EB5F96FAAF4F7418777A6B54ADE2(L_17, 1, /*hidden argument*/EnableSwitch_SetActive_TisOVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E_m27C034F694F0EB5F96FAAF4F7418777A6B54ADE2_RuntimeMethod_var);
		// break;
		goto IL_00f3;
	}

IL_0073:
	{
		// SwitchTargets[0].SetActive<OVRLipSyncContextMorphTarget>(1);
		EnableSwitchU5BU5D_t0E58B43C2C4981AA888AD44DC027DAB703886E35* L_19 = __this->get_SwitchTargets_4();
		NullCheck(L_19);
		int32_t L_20 = 0;
		EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A * L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		bool L_22;
		L_22 = EnableSwitch_SetActive_TisOVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19_m8B638FF339C21F2E5B5804B3FA810DA4717FC26A(L_21, 1, /*hidden argument*/EnableSwitch_SetActive_TisOVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19_m8B638FF339C21F2E5B5804B3FA810DA4717FC26A_RuntimeMethod_var);
		// SwitchTargets[1].SetActive<OVRLipSyncContextMorphTarget>(2);
		EnableSwitchU5BU5D_t0E58B43C2C4981AA888AD44DC027DAB703886E35* L_23 = __this->get_SwitchTargets_4();
		NullCheck(L_23);
		int32_t L_24 = 1;
		EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A * L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		bool L_26;
		L_26 = EnableSwitch_SetActive_TisOVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19_m8B638FF339C21F2E5B5804B3FA810DA4717FC26A(L_25, 2, /*hidden argument*/EnableSwitch_SetActive_TisOVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19_m8B638FF339C21F2E5B5804B3FA810DA4717FC26A_RuntimeMethod_var);
		// break;
		goto IL_00f3;
	}

IL_0093:
	{
		// SwitchTargets[0].SetActive<OVRLipSyncContextTextureFlip>(1);
		EnableSwitchU5BU5D_t0E58B43C2C4981AA888AD44DC027DAB703886E35* L_27 = __this->get_SwitchTargets_4();
		NullCheck(L_27);
		int32_t L_28 = 0;
		EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A * L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		bool L_30;
		L_30 = EnableSwitch_SetActive_TisOVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E_m27C034F694F0EB5F96FAAF4F7418777A6B54ADE2(L_29, 1, /*hidden argument*/EnableSwitch_SetActive_TisOVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E_m27C034F694F0EB5F96FAAF4F7418777A6B54ADE2_RuntimeMethod_var);
		// SwitchTargets[1].SetActive<OVRLipSyncContextTextureFlip>(3);
		EnableSwitchU5BU5D_t0E58B43C2C4981AA888AD44DC027DAB703886E35* L_31 = __this->get_SwitchTargets_4();
		NullCheck(L_31);
		int32_t L_32 = 1;
		EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A * L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		bool L_34;
		L_34 = EnableSwitch_SetActive_TisOVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E_m27C034F694F0EB5F96FAAF4F7418777A6B54ADE2(L_33, 3, /*hidden argument*/EnableSwitch_SetActive_TisOVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E_m27C034F694F0EB5F96FAAF4F7418777A6B54ADE2_RuntimeMethod_var);
		// break;
		goto IL_00f3;
	}

IL_00b3:
	{
		// SwitchTargets[0].SetActive<OVRLipSyncContextMorphTarget>(2);
		EnableSwitchU5BU5D_t0E58B43C2C4981AA888AD44DC027DAB703886E35* L_35 = __this->get_SwitchTargets_4();
		NullCheck(L_35);
		int32_t L_36 = 0;
		EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A * L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		bool L_38;
		L_38 = EnableSwitch_SetActive_TisOVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19_m8B638FF339C21F2E5B5804B3FA810DA4717FC26A(L_37, 2, /*hidden argument*/EnableSwitch_SetActive_TisOVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19_m8B638FF339C21F2E5B5804B3FA810DA4717FC26A_RuntimeMethod_var);
		// SwitchTargets[1].SetActive<OVRLipSyncContextMorphTarget>(4);
		EnableSwitchU5BU5D_t0E58B43C2C4981AA888AD44DC027DAB703886E35* L_39 = __this->get_SwitchTargets_4();
		NullCheck(L_39);
		int32_t L_40 = 1;
		EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A * L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		bool L_42;
		L_42 = EnableSwitch_SetActive_TisOVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19_m8B638FF339C21F2E5B5804B3FA810DA4717FC26A(L_41, 4, /*hidden argument*/EnableSwitch_SetActive_TisOVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19_m8B638FF339C21F2E5B5804B3FA810DA4717FC26A_RuntimeMethod_var);
		// break;
		goto IL_00f3;
	}

IL_00d3:
	{
		// SwitchTargets[0].SetActive<OVRLipSyncContextTextureFlip>(2);
		EnableSwitchU5BU5D_t0E58B43C2C4981AA888AD44DC027DAB703886E35* L_43 = __this->get_SwitchTargets_4();
		NullCheck(L_43);
		int32_t L_44 = 0;
		EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A * L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_45);
		bool L_46;
		L_46 = EnableSwitch_SetActive_TisOVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E_m27C034F694F0EB5F96FAAF4F7418777A6B54ADE2(L_45, 2, /*hidden argument*/EnableSwitch_SetActive_TisOVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E_m27C034F694F0EB5F96FAAF4F7418777A6B54ADE2_RuntimeMethod_var);
		// SwitchTargets[1].SetActive<OVRLipSyncContextTextureFlip>(5);
		EnableSwitchU5BU5D_t0E58B43C2C4981AA888AD44DC027DAB703886E35* L_47 = __this->get_SwitchTargets_4();
		NullCheck(L_47);
		int32_t L_48 = 1;
		EnableSwitch_tBFD05AE1604BB59E30A6990A349154F4985D398A * L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		bool L_50;
		L_50 = EnableSwitch_SetActive_TisOVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E_m27C034F694F0EB5F96FAAF4F7418777A6B54ADE2(L_49, 5, /*hidden argument*/EnableSwitch_SetActive_TisOVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E_m27C034F694F0EB5F96FAAF4F7418777A6B54ADE2_RuntimeMethod_var);
		// break;
		goto IL_00f3;
	}

IL_00f3:
	{
		// OVRLipSyncDebugConsole.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		OVRLipSyncDebugConsole_Clear_m5C3D7FBB2BE761768AC960CEE2B609FD38A1B242(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LipSyncDemo_SetCurrentTarget::LocalTouchEventCallback(OVRTouchpad/TouchEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LipSyncDemo_SetCurrentTarget_LocalTouchEventCallback_m69B26FDF1F5437E6F13B20E76F7219D70D29DBA5 (LipSyncDemo_SetCurrentTarget_tF7E8E55732074689954CEF44A58450C4A2FFE4CE * __this, int32_t ___touchEvent0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// switch(touchEvent)
		int32_t L_0 = ___touchEvent0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0011;
		}
	}
	{
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0076;
	}

IL_0011:
	{
		// targetSet--;
		int32_t L_4 = __this->get_targetSet_5();
		__this->set_targetSet_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)));
		// if(targetSet < 0)
		int32_t L_5 = __this->get_targetSet_5();
		V_2 = (bool)((((int32_t)L_5) < ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		// targetSet = maxTarget - 1;
		int32_t L_7 = __this->get_maxTarget_6();
		__this->set_targetSet_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)));
	}

IL_003a:
	{
		// SetCurrentTarget();
		LipSyncDemo_SetCurrentTarget_SetCurrentTarget_m363E9462549BB91C95EC1415C10C0F76653B8BA5(__this, /*hidden argument*/NULL);
		// break;
		goto IL_0076;
	}

IL_0043:
	{
		// targetSet++;
		int32_t L_8 = __this->get_targetSet_5();
		__this->set_targetSet_5(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		// if(targetSet >= maxTarget)
		int32_t L_9 = __this->get_targetSet_5();
		int32_t L_10 = __this->get_maxTarget_6();
		V_3 = (bool)((((int32_t)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		// targetSet = 0;
		__this->set_targetSet_5(0);
	}

IL_006d:
	{
		// SetCurrentTarget();
		LipSyncDemo_SetCurrentTarget_SetCurrentTarget_m363E9462549BB91C95EC1415C10C0F76653B8BA5(__this, /*hidden argument*/NULL);
		// break;
		goto IL_0076;
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void LipSyncDemo_SetCurrentTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LipSyncDemo_SetCurrentTarget__ctor_m00AEEFE032D05BCA485B58D6733891787CA46E43 (LipSyncDemo_SetCurrentTarget_tF7E8E55732074689954CEF44A58450C4A2FFE4CE * __this, const RuntimeMethod* method)
{
	{
		// private int targetSet = 0;
		__this->set_targetSet_5(0);
		// private int maxTarget = 6;
		__this->set_maxTarget_6(6);
		// private bool XRButtonBeingPressed = false;
		__this->set_XRButtonBeingPressed_7((bool)0);
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
// System.Int32 OVRLipSync::ovrLipSyncDll_Initialize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_ovrLipSyncDll_Initialize_m41761CCDB5BA4096A99E1A67E3423E26591FE6E6 (int32_t ___samplerate0, int32_t ___buffersize1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OVRLipSync_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OVRLipSync"), "ovrLipSyncDll_Initialize", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OVRLipSync_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrLipSyncDll_Initialize)(___samplerate0, ___buffersize1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___samplerate0, ___buffersize1);
	#endif

	return returnValue;
}
// System.Void OVRLipSync::ovrLipSyncDll_Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSync_ovrLipSyncDll_Shutdown_m4EFDCC03D99BEC213DDF82FF9F8B71C8F8F22853 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OVRLipSync_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OVRLipSync"), "ovrLipSyncDll_Shutdown", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OVRLipSync_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrLipSyncDll_Shutdown)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.IntPtr OVRLipSync::ovrLipSyncDll_GetVersion(System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t OVRLipSync_ovrLipSyncDll_GetVersion_m7D13E34B4CCE06F3AA9429111F0CD9A25FD7D797 (int32_t* ___Major0, int32_t* ___Minor1, int32_t* ___Patch2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t*, int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OVRLipSync_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t*) + sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OVRLipSync"), "ovrLipSyncDll_GetVersion", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OVRLipSync_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrLipSyncDll_GetVersion)(___Major0, ___Minor1, ___Patch2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___Major0, ___Minor1, ___Patch2);
	#endif

	return returnValue;
}
// System.Int32 OVRLipSync::ovrLipSyncDll_CreateContextEx(System.UInt32&,OVRLipSync/ContextProviders,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_ovrLipSyncDll_CreateContextEx_m8494E8E877D7CB5C7B1F7B2020ABBA4D08FBE8C4 (uint32_t* ___context0, int32_t ___provider1, int32_t ___sampleRate2, bool ___enableAcceleration3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint32_t*, int32_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OVRLipSync_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t*) + sizeof(int32_t) + sizeof(int32_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OVRLipSync"), "ovrLipSyncDll_CreateContextEx", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OVRLipSync_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrLipSyncDll_CreateContextEx)(___context0, ___provider1, ___sampleRate2, static_cast<int32_t>(___enableAcceleration3));
	#else
	int32_t returnValue = il2cppPInvokeFunc(___context0, ___provider1, ___sampleRate2, static_cast<int32_t>(___enableAcceleration3));
	#endif

	return returnValue;
}
// System.Int32 OVRLipSync::ovrLipSyncDll_CreateContextWithModelFile(System.UInt32&,OVRLipSync/ContextProviders,System.String,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_ovrLipSyncDll_CreateContextWithModelFile_m600F74001750C157EBD111578B90BD0D9C84EF4E (uint32_t* ___context0, int32_t ___provider1, String_t* ___modelPath2, int32_t ___sampleRate3, bool ___enableAcceleration4, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint32_t*, int32_t, char*, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OVRLipSync_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t*) + sizeof(int32_t) + sizeof(char*) + sizeof(int32_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OVRLipSync"), "ovrLipSyncDll_CreateContextWithModelFile", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___modelPath2' to native representation
	char* ____modelPath2_marshaled = NULL;
	____modelPath2_marshaled = il2cpp_codegen_marshal_string(___modelPath2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OVRLipSync_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrLipSyncDll_CreateContextWithModelFile)(___context0, ___provider1, ____modelPath2_marshaled, ___sampleRate3, static_cast<int32_t>(___enableAcceleration4));
	#else
	int32_t returnValue = il2cppPInvokeFunc(___context0, ___provider1, ____modelPath2_marshaled, ___sampleRate3, static_cast<int32_t>(___enableAcceleration4));
	#endif

	// Marshaling cleanup of parameter '___modelPath2' native representation
	il2cpp_codegen_marshal_free(____modelPath2_marshaled);
	____modelPath2_marshaled = NULL;

	return returnValue;
}
// System.Int32 OVRLipSync::ovrLipSyncDll_DestroyContext(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_ovrLipSyncDll_DestroyContext_mBCCA5270BFD2800D4155785E9B57E8A1E20FF583 (uint32_t ___context0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OVRLipSync_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OVRLipSync"), "ovrLipSyncDll_DestroyContext", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OVRLipSync_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrLipSyncDll_DestroyContext)(___context0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___context0);
	#endif

	return returnValue;
}
// System.Int32 OVRLipSync::ovrLipSyncDll_ResetContext(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_ovrLipSyncDll_ResetContext_m5D4271B02656128CF63AD707319B4571A4E3656A (uint32_t ___context0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OVRLipSync_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OVRLipSync"), "ovrLipSyncDll_ResetContext", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OVRLipSync_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrLipSyncDll_ResetContext)(___context0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___context0);
	#endif

	return returnValue;
}
// System.Int32 OVRLipSync::ovrLipSyncDll_SendSignal(System.UInt32,OVRLipSync/Signals,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_ovrLipSyncDll_SendSignal_m221E6C6F161FD9125A55E9862E70BB27B828F797 (uint32_t ___context0, int32_t ___signal1, int32_t ___arg12, int32_t ___arg23, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint32_t, int32_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OVRLipSync_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OVRLipSync"), "ovrLipSyncDll_SendSignal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OVRLipSync_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrLipSyncDll_SendSignal)(___context0, ___signal1, ___arg12, ___arg23);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___context0, ___signal1, ___arg12, ___arg23);
	#endif

	return returnValue;
}
// System.Int32 OVRLipSync::ovrLipSyncDll_ProcessFrameEx(System.UInt32,System.IntPtr,System.UInt32,OVRLipSync/AudioDataType,System.Int32&,System.Int32&,System.Single[],System.Int32,System.Single&,System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_ovrLipSyncDll_ProcessFrameEx_m3D94D2C98AA53FF78BFE1CEB296F0FC444C4CC89 (uint32_t ___context0, intptr_t ___audioBuffer1, uint32_t ___bufferSize2, int32_t ___dataType3, int32_t* ___frameNumber4, int32_t* ___frameDelay5, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___visemes6, int32_t ___visemeCount7, float* ___laughterScore8, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___laughterCategories9, int32_t ___laughterCategoriesLength10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint32_t, intptr_t, uint32_t, int32_t, int32_t*, int32_t*, float*, int32_t, float*, float*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OVRLipSync_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t) + sizeof(intptr_t) + sizeof(uint32_t) + sizeof(int32_t) + sizeof(int32_t*) + sizeof(int32_t*) + sizeof(void*) + sizeof(int32_t) + sizeof(float*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OVRLipSync"), "ovrLipSyncDll_ProcessFrameEx", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___visemes6' to native representation
	float* ____visemes6_marshaled = NULL;
	if (___visemes6 != NULL)
	{
		____visemes6_marshaled = reinterpret_cast<float*>((___visemes6)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___laughterCategories9' to native representation
	float* ____laughterCategories9_marshaled = NULL;
	if (___laughterCategories9 != NULL)
	{
		____laughterCategories9_marshaled = reinterpret_cast<float*>((___laughterCategories9)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OVRLipSync_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrLipSyncDll_ProcessFrameEx)(___context0, ___audioBuffer1, ___bufferSize2, ___dataType3, ___frameNumber4, ___frameDelay5, ____visemes6_marshaled, ___visemeCount7, ___laughterScore8, ____laughterCategories9_marshaled, ___laughterCategoriesLength10);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___context0, ___audioBuffer1, ___bufferSize2, ___dataType3, ___frameNumber4, ___frameDelay5, ____visemes6_marshaled, ___visemeCount7, ___laughterScore8, ____laughterCategories9_marshaled, ___laughterCategoriesLength10);
	#endif

	return returnValue;
}
// System.Void OVRLipSync::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSync_Awake_m2BBBCD251AA5C3EE1968D671E131421035E0F92C (OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE994D9E38836ABFB2CAF86E64D880AC5523D85D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB2A79BFE254FBCE069C2941E5F16F85A0553F60);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (sInstance == null)
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE * L_0 = ((OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var))->get_sInstance_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// sInstance = this;
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		((OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var))->set_sInstance_8(__this);
		goto IL_0032;
	}

IL_001a:
	{
		// Debug.LogWarning(System.String.Format("OVRLipSync Awake: Only one instance of OVRPLipSync can exist in the scene."));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3;
		L_3 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		String_t* L_4;
		L_4 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralCE994D9E38836ABFB2CAF86E64D880AC5523D85D, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_4, /*hidden argument*/NULL);
		// return;
		goto IL_0073;
	}

IL_0032:
	{
		// if (IsInitialized() != Result.Success)
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = OVRLipSync_IsInitialized_m9344702D1297D79220148DFB0022CE1C67660AE2(/*hidden argument*/NULL);
		V_1 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_006d;
		}
	}
	{
		// sInitialized = Initialize();
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = OVRLipSync_Initialize_mC2242B7A80C64B389DF10FD775D90A5419F211A6(/*hidden argument*/NULL);
		((OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var))->set_sInitialized_7(L_7);
		// if (sInitialized != Result.Success)
		int32_t L_8 = ((OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var))->get_sInitialized_7();
		V_2 = (bool)((!(((uint32_t)L_8) <= ((uint32_t)0)))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_006c;
		}
	}
	{
		// Debug.LogWarning(System.String.Format
		// ("OvrLipSync Awake: Failed to init Speech Rec library"));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10;
		L_10 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		String_t* L_11;
		L_11 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralEB2A79BFE254FBCE069C2941E5F16F85A0553F60, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_11, /*hidden argument*/NULL);
	}

IL_006c:
	{
	}

IL_006d:
	{
		// OVRTouchpad.Create();
		IL2CPP_RUNTIME_CLASS_INIT(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var);
		OVRTouchpad_Create_m39D3E7A088DE03539469A417E40E1E88B46EF619(/*hidden argument*/NULL);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void OVRLipSync::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSync_OnDestroy_m3C202C93AF6FCAD18B8AD685B5C88E9C0C675031 (OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61403819783B23D45287A738375948DA019C3974);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (sInstance != this)
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE * L_0 = ((OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var))->get_sInstance_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// Debug.LogWarning(
		// "OVRLipSync OnDestroy: This is not the correct OVRLipSync instance.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral61403819783B23D45287A738375948DA019C3974, /*hidden argument*/NULL);
		// return;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		return;
	}
}
// OVRLipSync/Result OVRLipSync::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_Initialize_mC2242B7A80C64B389DF10FD775D90A5419F211A6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54E0B22B3D4AEC4E9474452DA11C2EE27A304186);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// sampleRate = AudioSettings.outputSampleRate;
		int32_t L_0;
		L_0 = AudioSettings_get_outputSampleRate_mF694C528E77284914F1F8F7CA804BD9ECD0D33BE(/*hidden argument*/NULL);
		V_0 = L_0;
		// AudioSettings.GetDSPBufferSize(out bufferSize, out numbuf);
		AudioSettings_GetDSPBufferSize_mC28498D69093D2E80A637A40A588230F7E0A2052((int32_t*)(&V_1), (int32_t*)(&V_2), /*hidden argument*/NULL);
		// String str = System.String.Format
		// ("OvrLipSync Awake: Queried SampleRate: {0:F0} BufferSize: {1:F0}", sampleRate, bufferSize);
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral54E0B22B3D4AEC4E9474452DA11C2EE27A304186, L_3, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		// Debug.LogWarning(str);
		String_t* L_8 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_8, /*hidden argument*/NULL);
		// sInitialized = (Result)ovrLipSyncDll_Initialize(sampleRate, bufferSize);
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = OVRLipSync_ovrLipSyncDll_Initialize_m41761CCDB5BA4096A99E1A67E3423E26591FE6E6(L_9, L_10, /*hidden argument*/NULL);
		((OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var))->set_sInitialized_7(L_11);
		// return sInitialized;
		int32_t L_12 = ((OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var))->get_sInitialized_7();
		V_4 = L_12;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		int32_t L_13 = V_4;
		return L_13;
	}
}
// OVRLipSync/Result OVRLipSync::Initialize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_Initialize_m89F35927EB48562F46994D221E8E2FCF8AE81F74 (int32_t ___sampleRate0, int32_t ___bufferSize1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54E0B22B3D4AEC4E9474452DA11C2EE27A304186);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// String str = System.String.Format
		// ("OvrLipSync Awake: Queried SampleRate: {0:F0} BufferSize: {1:F0}", sampleRate, bufferSize);
		int32_t L_0 = ___sampleRate0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ___bufferSize1;
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral54E0B22B3D4AEC4E9474452DA11C2EE27A304186, L_2, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// Debug.LogWarning(str);
		String_t* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_7, /*hidden argument*/NULL);
		// sInitialized = (Result)ovrLipSyncDll_Initialize(sampleRate, bufferSize);
		int32_t L_8 = ___sampleRate0;
		int32_t L_9 = ___bufferSize1;
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = OVRLipSync_ovrLipSyncDll_Initialize_m41761CCDB5BA4096A99E1A67E3423E26591FE6E6(L_8, L_9, /*hidden argument*/NULL);
		((OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var))->set_sInitialized_7(L_10);
		// return sInitialized;
		int32_t L_11 = ((OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var))->get_sInitialized_7();
		V_1 = L_11;
		goto IL_0033;
	}

IL_0033:
	{
		// }
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Void OVRLipSync::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSync_Shutdown_m0F5BED8E12F2BE445AFBD3CCB32CF6EF881E5488 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ovrLipSyncDll_Shutdown();
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		OVRLipSync_ovrLipSyncDll_Shutdown_m4EFDCC03D99BEC213DDF82FF9F8B71C8F8F22853(/*hidden argument*/NULL);
		// sInitialized = Result.Unknown;
		((OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var))->set_sInitialized_7(((int32_t)-2200));
		// }
		return;
	}
}
// OVRLipSync/Result OVRLipSync::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_IsInitialized_m9344702D1297D79220148DFB0022CE1C67660AE2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return sInitialized;
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_0 = ((OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var))->get_sInitialized_7();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// OVRLipSync/Result OVRLipSync::CreateContext(System.UInt32&,OVRLipSync/ContextProviders,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_CreateContext_mA46D262E47C798D46E0B67DE8D074D79D9211147 (uint32_t* ___context0, int32_t ___provider1, int32_t ___sampleRate2, bool ___enableAcceleration3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// if (IsInitialized() != Result.Success && Initialize() != Result.Success)
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = OVRLipSync_IsInitialized_m9344702D1297D79220148DFB0022CE1C67660AE2(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = OVRLipSync_Initialize_mC2242B7A80C64B389DF10FD775D90A5419F211A6(/*hidden argument*/NULL);
		G_B3_0 = ((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// return Result.CannotCreateContext;
		V_1 = ((int32_t)-2201);
		goto IL_002b;
	}

IL_001f:
	{
		// return (Result)ovrLipSyncDll_CreateContextEx(ref context, provider, sampleRate, enableAcceleration);
		uint32_t* L_3 = ___context0;
		int32_t L_4 = ___provider1;
		int32_t L_5 = ___sampleRate2;
		bool L_6 = ___enableAcceleration3;
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = OVRLipSync_ovrLipSyncDll_CreateContextEx_m8494E8E877D7CB5C7B1F7B2020ABBA4D08FBE8C4((uint32_t*)L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		int32_t L_8 = V_1;
		return L_8;
	}
}
// OVRLipSync/Result OVRLipSync::CreateContextWithModelFile(System.UInt32&,OVRLipSync/ContextProviders,System.String,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_CreateContextWithModelFile_mAC2F1189A6C0C22AEB7712AF82BC00AED89D99C6 (uint32_t* ___context0, int32_t ___provider1, String_t* ___modelPath2, int32_t ___sampleRate3, bool ___enableAcceleration4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// if (IsInitialized() != Result.Success && Initialize() != Result.Success)
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = OVRLipSync_IsInitialized_m9344702D1297D79220148DFB0022CE1C67660AE2(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = OVRLipSync_Initialize_mC2242B7A80C64B389DF10FD775D90A5419F211A6(/*hidden argument*/NULL);
		G_B3_0 = ((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// return Result.CannotCreateContext;
		V_1 = ((int32_t)-2201);
		goto IL_002d;
	}

IL_001f:
	{
		// return (Result)ovrLipSyncDll_CreateContextWithModelFile(
		//     ref context,
		//     provider,
		//     modelPath,
		//     sampleRate,
		//     enableAcceleration);
		uint32_t* L_3 = ___context0;
		int32_t L_4 = ___provider1;
		String_t* L_5 = ___modelPath2;
		int32_t L_6 = ___sampleRate3;
		bool L_7 = ___enableAcceleration4;
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = OVRLipSync_ovrLipSyncDll_CreateContextWithModelFile_m600F74001750C157EBD111578B90BD0D9C84EF4E((uint32_t*)L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		int32_t L_9 = V_1;
		return L_9;
	}
}
// OVRLipSync/Result OVRLipSync::DestroyContext(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_DestroyContext_m543FE422AA26AD78F91BF36B1756EF8B78821001 (uint32_t ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (IsInitialized() != Result.Success)
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = OVRLipSync_IsInitialized_m9344702D1297D79220148DFB0022CE1C67660AE2(/*hidden argument*/NULL);
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return Result.Unknown;
		V_1 = ((int32_t)-2200);
		goto IL_001e;
	}

IL_0015:
	{
		// return (Result)ovrLipSyncDll_DestroyContext(context);
		uint32_t L_2 = ___context0;
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = OVRLipSync_ovrLipSyncDll_DestroyContext_mBCCA5270BFD2800D4155785E9B57E8A1E20FF583(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		int32_t L_4 = V_1;
		return L_4;
	}
}
// OVRLipSync/Result OVRLipSync::ResetContext(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_ResetContext_m4971A3C702DEF893A3BCD82B97330032D0ADFCDC (uint32_t ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (IsInitialized() != Result.Success)
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = OVRLipSync_IsInitialized_m9344702D1297D79220148DFB0022CE1C67660AE2(/*hidden argument*/NULL);
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return Result.Unknown;
		V_1 = ((int32_t)-2200);
		goto IL_001e;
	}

IL_0015:
	{
		// return (Result)ovrLipSyncDll_ResetContext(context);
		uint32_t L_2 = ___context0;
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = OVRLipSync_ovrLipSyncDll_ResetContext_m5D4271B02656128CF63AD707319B4571A4E3656A(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		int32_t L_4 = V_1;
		return L_4;
	}
}
// OVRLipSync/Result OVRLipSync::SendSignal(System.UInt32,OVRLipSync/Signals,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_SendSignal_mBBEEBB4C6F9910F44865039E7256839AF3BFDE73 (uint32_t ___context0, int32_t ___signal1, int32_t ___arg12, int32_t ___arg23, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (IsInitialized() != Result.Success)
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = OVRLipSync_IsInitialized_m9344702D1297D79220148DFB0022CE1C67660AE2(/*hidden argument*/NULL);
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return Result.Unknown;
		V_1 = ((int32_t)-2200);
		goto IL_0021;
	}

IL_0015:
	{
		// return (Result)ovrLipSyncDll_SendSignal(context, signal, arg1, arg2);
		uint32_t L_2 = ___context0;
		int32_t L_3 = ___signal1;
		int32_t L_4 = ___arg12;
		int32_t L_5 = ___arg23;
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = OVRLipSync_ovrLipSyncDll_SendSignal_m221E6C6F161FD9125A55E9862E70BB27B828F797(L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		int32_t L_7 = V_1;
		return L_7;
	}
}
// OVRLipSync/Result OVRLipSync::ProcessFrame(System.UInt32,System.Single[],OVRLipSync/Frame,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_ProcessFrame_m48DC248F8ABFC21BD4ADCE76F29BA6775087F98B (uint32_t ___context0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___audioBuffer1, Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * ___frame2, bool ___stereo3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (IsInitialized() != Result.Success)
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = OVRLipSync_IsInitialized_m9344702D1297D79220148DFB0022CE1C67660AE2(/*hidden argument*/NULL);
		V_4 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return Result.Unknown;
		V_5 = ((int32_t)-2200);
		goto IL_0075;
	}

IL_0018:
	{
		// var dataType = stereo ? AudioDataType.F32_Stereo : AudioDataType.F32_Mono;
		bool L_2 = ___stereo3;
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		G_B5_0 = 2;
		goto IL_001f;
	}

IL_001e:
	{
		G_B5_0 = 3;
	}

IL_001f:
	{
		V_0 = G_B5_0;
		// var numSamples = (uint)(stereo ? audioBuffer.Length / 2 : audioBuffer.Length);
		bool L_3 = ___stereo3;
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = ___audioBuffer1;
		NullCheck(L_4);
		G_B8_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		goto IL_002d;
	}

IL_0028:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = ___audioBuffer1;
		NullCheck(L_5);
		G_B8_0 = ((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))/(int32_t)2));
	}

IL_002d:
	{
		V_1 = G_B8_0;
		// var handle = GCHandle.Alloc(audioBuffer, GCHandleType.Pinned);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___audioBuffer1;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_7;
		L_7 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC((RuntimeObject *)(RuntimeObject *)L_6, 3, /*hidden argument*/NULL);
		V_2 = L_7;
		// var rc = ovrLipSyncDll_ProcessFrameEx(context,
		//                                       handle.AddrOfPinnedObject(), numSamples, dataType,
		//                                       ref frame.frameNumber, ref frame.frameDelay,
		//                                       frame.Visemes, frame.Visemes.Length,
		//                                       ref frame.laughterScore,
		//                                       null, 0
		//                                       );
		uint32_t L_8 = ___context0;
		intptr_t L_9;
		L_9 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_2), /*hidden argument*/NULL);
		uint32_t L_10 = V_1;
		int32_t L_11 = V_0;
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_12 = ___frame2;
		NullCheck(L_12);
		int32_t* L_13 = L_12->get_address_of_frameNumber_0();
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_14 = ___frame2;
		NullCheck(L_14);
		int32_t* L_15 = L_14->get_address_of_frameDelay_1();
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_16 = ___frame2;
		NullCheck(L_16);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_17 = L_16->get_Visemes_2();
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_18 = ___frame2;
		NullCheck(L_18);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_19 = L_18->get_Visemes_2();
		NullCheck(L_19);
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_20 = ___frame2;
		NullCheck(L_20);
		float* L_21 = L_20->get_address_of_laughterScore_3();
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_22;
		L_22 = OVRLipSync_ovrLipSyncDll_ProcessFrameEx_m3D94D2C98AA53FF78BFE1CEB296F0FC444C4CC89(L_8, (intptr_t)L_9, L_10, L_11, (int32_t*)L_13, (int32_t*)L_15, L_17, ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))), (float*)L_21, (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)NULL, 0, /*hidden argument*/NULL);
		V_3 = L_22;
		// handle.Free();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_2), /*hidden argument*/NULL);
		// return (Result)rc;
		int32_t L_23 = V_3;
		V_5 = L_23;
		goto IL_0075;
	}

IL_0075:
	{
		// }
		int32_t L_24 = V_5;
		return L_24;
	}
}
// OVRLipSync/Result OVRLipSync::ProcessFrame(System.UInt32,System.Int16[],OVRLipSync/Frame,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSync_ProcessFrame_mC9FE2D76D8EE31F9EC00C5DDB2A7492C5BE81824 (uint32_t ___context0, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___audioBuffer1, Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * ___frame2, bool ___stereo3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (IsInitialized() != Result.Success)
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = OVRLipSync_IsInitialized_m9344702D1297D79220148DFB0022CE1C67660AE2(/*hidden argument*/NULL);
		V_4 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return Result.Unknown;
		V_5 = ((int32_t)-2200);
		goto IL_0075;
	}

IL_0018:
	{
		// var dataType = stereo ? AudioDataType.S16_Stereo : AudioDataType.S16_Mono;
		bool L_2 = ___stereo3;
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_001f;
	}

IL_001e:
	{
		G_B5_0 = 1;
	}

IL_001f:
	{
		V_0 = G_B5_0;
		// var numSamples = (uint)(stereo ? audioBuffer.Length / 2 : audioBuffer.Length);
		bool L_3 = ___stereo3;
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = ___audioBuffer1;
		NullCheck(L_4);
		G_B8_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		goto IL_002d;
	}

IL_0028:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = ___audioBuffer1;
		NullCheck(L_5);
		G_B8_0 = ((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))/(int32_t)2));
	}

IL_002d:
	{
		V_1 = G_B8_0;
		// var handle = GCHandle.Alloc(audioBuffer, GCHandleType.Pinned);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_6 = ___audioBuffer1;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_7;
		L_7 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC((RuntimeObject *)(RuntimeObject *)L_6, 3, /*hidden argument*/NULL);
		V_2 = L_7;
		// var rc = ovrLipSyncDll_ProcessFrameEx(context,
		//                                       handle.AddrOfPinnedObject(), numSamples, dataType,
		//                                       ref frame.frameNumber, ref frame.frameDelay,
		//                                       frame.Visemes, frame.Visemes.Length,
		//                                       ref frame.laughterScore,
		//                                       null, 0
		//                                       );
		uint32_t L_8 = ___context0;
		intptr_t L_9;
		L_9 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_2), /*hidden argument*/NULL);
		uint32_t L_10 = V_1;
		int32_t L_11 = V_0;
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_12 = ___frame2;
		NullCheck(L_12);
		int32_t* L_13 = L_12->get_address_of_frameNumber_0();
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_14 = ___frame2;
		NullCheck(L_14);
		int32_t* L_15 = L_14->get_address_of_frameDelay_1();
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_16 = ___frame2;
		NullCheck(L_16);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_17 = L_16->get_Visemes_2();
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_18 = ___frame2;
		NullCheck(L_18);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_19 = L_18->get_Visemes_2();
		NullCheck(L_19);
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_20 = ___frame2;
		NullCheck(L_20);
		float* L_21 = L_20->get_address_of_laughterScore_3();
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_22;
		L_22 = OVRLipSync_ovrLipSyncDll_ProcessFrameEx_m3D94D2C98AA53FF78BFE1CEB296F0FC444C4CC89(L_8, (intptr_t)L_9, L_10, L_11, (int32_t*)L_13, (int32_t*)L_15, L_17, ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))), (float*)L_21, (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)NULL, 0, /*hidden argument*/NULL);
		V_3 = L_22;
		// handle.Free();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_2), /*hidden argument*/NULL);
		// return (Result)rc;
		int32_t L_23 = V_3;
		V_5 = L_23;
		goto IL_0075;
	}

IL_0075:
	{
		// }
		int32_t L_24 = V_5;
		return L_24;
	}
}
// System.Void OVRLipSync::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSync__ctor_mA064D81E1F51E54B23598CC60537D563B812207E (OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OVRLipSync::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSync__cctor_mF91178E8538B883D0E081E196C42F56C7A6DC57F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Signals_t834D248B45451DCA17B5D37B7F295D6812EE0CE3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Viseme_tAC3B16B0F7DB260DDE25C1E8654CA7BF5591EF28_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int VisemeCount = Enum.GetNames(typeof(Viseme)).Length;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Viseme_tAC3B16B0F7DB260DDE25C1E8654CA7BF5591EF28_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2;
		L_2 = Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var))->set_VisemeCount_4(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
		// public static readonly int SignalCount = Enum.GetNames(typeof(Signals)).Length;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Signals_t834D248B45451DCA17B5D37B7F295D6812EE0CE3_0_0_0_var) };
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5;
		L_5 = Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		((OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var))->set_SignalCount_5(((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))));
		// private static Result sInitialized = Result.Unknown;
		((OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var))->set_sInitialized_7(((int32_t)-2200));
		// public static OVRLipSync sInstance = null;
		((OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var))->set_sInstance_8((OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE *)NULL);
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
// System.Void OVRLipSyncContext::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContext_Start_m5BBA9D71EBC68A0904430A42383C948AAF0637A0 (OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSyncContext_LocalTouchEventCallback_m122281F790C8A7EF9F860F665BD2C3AFFB3B40D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRTouchpadCallback_1__ctor_m5D93A4018425521E2BBFF1A0A9CFD48077D15070_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisOVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_mFD1870043FF793622D8029862EDC325A27CADE3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OVRLipSyncDebugConsoleU5BU5D_tA03669460B339E44DD358F4BF8483307076352E9* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (enableTouchInput)
		bool L_0 = __this->get_enableTouchInput_11();
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// OVRTouchpad.AddListener(LocalTouchEventCallback);
		OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B * L_2 = (OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B *)il2cpp_codegen_object_new(OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B_il2cpp_TypeInfo_var);
		OVRTouchpadCallback_1__ctor_m5D93A4018425521E2BBFF1A0A9CFD48077D15070(L_2, __this, (intptr_t)((intptr_t)OVRLipSyncContext_LocalTouchEventCallback_m122281F790C8A7EF9F860F665BD2C3AFFB3B40D4_RuntimeMethod_var), /*hidden argument*/OVRTouchpadCallback_1__ctor_m5D93A4018425521E2BBFF1A0A9CFD48077D15070_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var);
		OVRTouchpad_AddListener_mB6E87E1283F42D9B28F6458950594BE6BE9CE6FA(L_2, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// OVRLipSyncDebugConsole[] consoles = FindObjectsOfType<OVRLipSyncDebugConsole>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		OVRLipSyncDebugConsoleU5BU5D_tA03669460B339E44DD358F4BF8483307076352E9* L_3;
		L_3 = Object_FindObjectsOfType_TisOVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_mFD1870043FF793622D8029862EDC325A27CADE3E(/*hidden argument*/Object_FindObjectsOfType_TisOVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_mFD1870043FF793622D8029862EDC325A27CADE3E_RuntimeMethod_var);
		V_0 = L_3;
		// if (consoles.Length > 0)
		OVRLipSyncDebugConsoleU5BU5D_tA03669460B339E44DD358F4BF8483307076352E9* L_4 = V_0;
		NullCheck(L_4);
		V_2 = (bool)((!(((uint32_t)(((RuntimeArray*)L_4)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		// hasDebugConsole = consoles[0];
		OVRLipSyncDebugConsoleU5BU5D_tA03669460B339E44DD358F4BF8483307076352E9* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_8, /*hidden argument*/NULL);
		__this->set_hasDebugConsole_18(L_9);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncContext::HandleKeyboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContext_HandleKeyboard_m739B2C32A8DCACC56DA9B2781652EE93ADCACC6D (OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral002506A5D09CFF7B94F395D64F8A508824573C98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3011FE5FA7FF5AA746DE2FF717EB7DC4F4879F6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D6CCC490AAEC159C8718DED030A7570B89D016B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral598BAAB1C2571B68F67FA24351D7C7DB45000A9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DE9E89F9979F4458CA9715FC3013CDA803A8920);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADDC63EB313A5463B66F6B8FAE5490FC3CB30CBD);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	String_t* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	String_t* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	{
		// if (Input.GetKeyDown(loopbackKey))
		int32_t L_0 = __this->get_loopbackKey_13();
		bool L_1;
		L_1 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// ToggleAudioLoopback();
		OVRLipSyncContext_ToggleAudioLoopback_m76164AAAC8A855CB0994BE688F0B9D40E98EAB88(__this, /*hidden argument*/NULL);
		goto IL_0233;
	}

IL_001e:
	{
		// else if (Input.GetKeyDown(debugVisemesKey))
		int32_t L_3 = __this->get_debugVisemesKey_15();
		bool L_4;
		L_4 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_009f;
		}
	}
	{
		// showVisemes = !showVisemes;
		bool L_6 = __this->get_showVisemes_14();
		__this->set_showVisemes_14((bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0));
		// if (showVisemes)
		bool L_7 = __this->get_showVisemes_14();
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0078;
		}
	}
	{
		// if (hasDebugConsole)
		bool L_9 = __this->get_hasDebugConsole_18();
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0061;
		}
	}
	{
		// Debug.Log("DEBUG SHOW VISEMES: ENABLED");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral598BAAB1C2571B68F67FA24351D7C7DB45000A9B, /*hidden argument*/NULL);
		goto IL_0075;
	}

IL_0061:
	{
		// Debug.LogWarning("Warning: No OVRLipSyncDebugConsole in the scene!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral3011FE5FA7FF5AA746DE2FF717EB7DC4F4879F6B, /*hidden argument*/NULL);
		// showVisemes = false;
		__this->set_showVisemes_14((bool)0);
	}

IL_0075:
	{
		goto IL_0099;
	}

IL_0078:
	{
		// if (hasDebugConsole)
		bool L_11 = __this->get_hasDebugConsole_18();
		V_4 = L_11;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_008d;
		}
	}
	{
		// OVRLipSyncDebugConsole.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		OVRLipSyncDebugConsole_Clear_m5C3D7FBB2BE761768AC960CEE2B609FD38A1B242(/*hidden argument*/NULL);
	}

IL_008d:
	{
		// Debug.Log("DEBUG SHOW VISEMES: DISABLED");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralADDC63EB313A5463B66F6B8FAE5490FC3CB30CBD, /*hidden argument*/NULL);
	}

IL_0099:
	{
		goto IL_0233;
	}

IL_009f:
	{
		// else if (Input.GetKeyDown(debugLaughterKey))
		int32_t L_13 = __this->get_debugLaughterKey_19();
		bool L_14;
		L_14 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0126;
		}
	}
	{
		// showLaughter = !showLaughter;
		bool L_16 = __this->get_showLaughter_20();
		__this->set_showLaughter_20((bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0));
		// if (showLaughter)
		bool L_17 = __this->get_showLaughter_20();
		V_6 = L_17;
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_00ff;
		}
	}
	{
		// if (hasDebugConsole)
		bool L_19 = __this->get_hasDebugConsole_18();
		V_7 = L_19;
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_00e8;
		}
	}
	{
		// Debug.Log("DEBUG SHOW LAUGHTER: ENABLED");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral002506A5D09CFF7B94F395D64F8A508824573C98, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_00e8:
	{
		// Debug.LogWarning("Warning: No OVRLipSyncDebugConsole in the scene!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral3011FE5FA7FF5AA746DE2FF717EB7DC4F4879F6B, /*hidden argument*/NULL);
		// showLaughter = false;
		__this->set_showLaughter_20((bool)0);
	}

IL_00fc:
	{
		goto IL_0120;
	}

IL_00ff:
	{
		// if (hasDebugConsole)
		bool L_21 = __this->get_hasDebugConsole_18();
		V_8 = L_21;
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_0114;
		}
	}
	{
		// OVRLipSyncDebugConsole.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		OVRLipSyncDebugConsole_Clear_m5C3D7FBB2BE761768AC960CEE2B609FD38A1B242(/*hidden argument*/NULL);
	}

IL_0114:
	{
		// Debug.Log("DEBUG SHOW LAUGHTER: DISABLED");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral3D6CCC490AAEC159C8718DED030A7570B89D016B, /*hidden argument*/NULL);
	}

IL_0120:
	{
		goto IL_0233;
	}

IL_0126:
	{
		// else if (Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_23;
		L_23 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)276), /*hidden argument*/NULL);
		V_9 = L_23;
		bool L_24 = V_9;
		if (!L_24)
		{
			goto IL_01af;
		}
	}
	{
		// gain -= 1.0f;
		float L_25 = __this->get_gain_17();
		__this->set_gain_17(((float)il2cpp_codegen_subtract((float)L_25, (float)(1.0f))));
		// if (gain < 1.0f) gain = 1.0f;
		float L_26 = __this->get_gain_17();
		V_11 = (bool)((((float)L_26) < ((float)(1.0f)))? 1 : 0);
		bool L_27 = V_11;
		if (!L_27)
		{
			goto IL_0167;
		}
	}
	{
		// if (gain < 1.0f) gain = 1.0f;
		__this->set_gain_17((1.0f));
	}

IL_0167:
	{
		// string g = "LINEAR GAIN: ";
		V_10 = _stringLiteral5DE9E89F9979F4458CA9715FC3013CDA803A8920;
		// g += gain;
		String_t* L_28 = V_10;
		float* L_29 = __this->get_address_of_gain_17();
		String_t* L_30;
		L_30 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_29, /*hidden argument*/NULL);
		String_t* L_31;
		L_31 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_28, L_30, /*hidden argument*/NULL);
		V_10 = L_31;
		// if (hasDebugConsole)
		bool L_32 = __this->get_hasDebugConsole_18();
		V_12 = L_32;
		bool L_33 = V_12;
		if (!L_33)
		{
			goto IL_01a9;
		}
	}
	{
		// OVRLipSyncDebugConsole.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		OVRLipSyncDebugConsole_Clear_m5C3D7FBB2BE761768AC960CEE2B609FD38A1B242(/*hidden argument*/NULL);
		// OVRLipSyncDebugConsole.Log(g);
		String_t* L_34 = V_10;
		OVRLipSyncDebugConsole_Log_m8A8BE6D5FFE5D2DC2CE5A6CE7DA4358D0C2C4E13(L_34, /*hidden argument*/NULL);
		// OVRLipSyncDebugConsole.ClearTimeout(1.5f);
		OVRLipSyncDebugConsole_ClearTimeout_m5894FB834E8306DA4B7EC2A18E87D21756A380FF((1.5f), /*hidden argument*/NULL);
	}

IL_01a9:
	{
		goto IL_0233;
	}

IL_01af:
	{
		// else if (Input.GetKeyDown(KeyCode.RightArrow))
		bool L_35;
		L_35 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)275), /*hidden argument*/NULL);
		V_13 = L_35;
		bool L_36 = V_13;
		if (!L_36)
		{
			goto IL_0233;
		}
	}
	{
		// gain += 1.0f;
		float L_37 = __this->get_gain_17();
		__this->set_gain_17(((float)il2cpp_codegen_add((float)L_37, (float)(1.0f))));
		// if (gain > 15.0f)
		float L_38 = __this->get_gain_17();
		V_15 = (bool)((((float)L_38) > ((float)(15.0f)))? 1 : 0);
		bool L_39 = V_15;
		if (!L_39)
		{
			goto IL_01f0;
		}
	}
	{
		// gain = 15.0f;
		__this->set_gain_17((15.0f));
	}

IL_01f0:
	{
		// string g = "LINEAR GAIN: ";
		V_14 = _stringLiteral5DE9E89F9979F4458CA9715FC3013CDA803A8920;
		// g += gain;
		String_t* L_40 = V_14;
		float* L_41 = __this->get_address_of_gain_17();
		String_t* L_42;
		L_42 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_41, /*hidden argument*/NULL);
		String_t* L_43;
		L_43 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_40, L_42, /*hidden argument*/NULL);
		V_14 = L_43;
		// if (hasDebugConsole)
		bool L_44 = __this->get_hasDebugConsole_18();
		V_16 = L_44;
		bool L_45 = V_16;
		if (!L_45)
		{
			goto IL_0232;
		}
	}
	{
		// OVRLipSyncDebugConsole.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		OVRLipSyncDebugConsole_Clear_m5C3D7FBB2BE761768AC960CEE2B609FD38A1B242(/*hidden argument*/NULL);
		// OVRLipSyncDebugConsole.Log(g);
		String_t* L_46 = V_14;
		OVRLipSyncDebugConsole_Log_m8A8BE6D5FFE5D2DC2CE5A6CE7DA4358D0C2C4E13(L_46, /*hidden argument*/NULL);
		// OVRLipSyncDebugConsole.ClearTimeout(1.5f);
		OVRLipSyncDebugConsole_ClearTimeout_m5894FB834E8306DA4B7EC2A18E87D21756A380FF((1.5f), /*hidden argument*/NULL);
	}

IL_0232:
	{
	}

IL_0233:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncContext::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContext_Update_m0F761D8229CFCC0FD07961204D2A0173E0283881 (OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (enableKeyboardInput)
		bool L_0 = __this->get_enableKeyboardInput_10();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// HandleKeyboard();
		OVRLipSyncContext_HandleKeyboard_m739B2C32A8DCACC56DA9B2781652EE93ADCACC6D(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// laughterScore = this.Frame.laughterScore;
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_2;
		L_2 = OVRLipSyncContextBase_get_Frame_m268FA667D0336EBB7759D3E50AE91361B4C50C51(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		float L_3 = L_2->get_laughterScore_3();
		__this->set_laughterScore_21(L_3);
		// DebugShowVisemesAndLaughter();
		OVRLipSyncContext_DebugShowVisemesAndLaughter_m1E8FBA38E42029F780098561CA07B01B50148B6F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVRLipSyncContext::PreprocessAudioSamples(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContext_PreprocessAudioSamples_mA6C2998807D7B80EF24CEC6BB90B604D6DF96E3B (OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___channels1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 0; i < data.Length; ++i)
		V_0 = 0;
		goto IL_0018;
	}

IL_0005:
	{
		// data[i] = data[i] * gain;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___data0;
		int32_t L_1 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___data0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		float L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		float L_6 = __this->get_gain_17();
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)));
		// for (int i = 0; i < data.Length; ++i)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0018:
	{
		// for (int i = 0; i < data.Length; ++i)
		int32_t L_8 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = ___data0;
		NullCheck(L_9);
		V_1 = (bool)((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))? 1 : 0);
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncContext::PostprocessAudioSamples(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContext_PostprocessAudioSamples_m07437A836ADF4DFFC1AB5AA2CC5BA2859A4F4B0B (OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___channels1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (!audioLoopback)
		bool L_0 = __this->get_audioLoopback_12();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// for (int i = 0; i < data.Length; ++i)
		V_1 = 0;
		goto IL_0023;
	}

IL_0013:
	{
		// data[i] = data[i] * 0.0f;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___data0;
		int32_t L_3 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = ___data0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		float L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (float)((float)il2cpp_codegen_multiply((float)L_7, (float)(0.0f))));
		// for (int i = 0; i < data.Length; ++i)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0023:
	{
		// for (int i = 0; i < data.Length; ++i)
		int32_t L_9 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = ___data0;
		NullCheck(L_10);
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0013;
		}
	}
	{
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncContext::ProcessAudioSamplesRaw(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContext_ProcessAudioSamplesRaw_m0EF28DF3472D5E97056FBABA09821D947ED19AA6 (OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___channels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * V_0 = NULL;
	bool V_1 = false;
	Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	int32_t G_B4_0 = 0;
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0005:
	try
	{ // begin try (depth: 1)
		{
			OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * L_0 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
			// if (Context == 0 || OVRLipSync.IsInitialized() != OVRLipSync.Result.Success)
			uint32_t L_1;
			L_1 = OVRLipSyncContextBase_get_Context_m53836909D7FE3C0C9F920ECD1E61B079E304D596(__this, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_0021;
			}
		}

IL_0017:
		{
			IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
			int32_t L_2;
			L_2 = OVRLipSync_IsInitialized_m9344702D1297D79220148DFB0022CE1C67660AE2(/*hidden argument*/NULL);
			G_B4_0 = ((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
			goto IL_0022;
		}

IL_0021:
		{
			G_B4_0 = 1;
		}

IL_0022:
		{
			V_3 = (bool)G_B4_0;
			bool L_3 = V_3;
			if (!L_3)
			{
				goto IL_0029;
			}
		}

IL_0026:
		{
			// return;
			IL2CPP_LEAVE(0x50, FINALLY_0045);
		}

IL_0029:
		{
			// var frame = this.Frame;
			Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_4;
			L_4 = OVRLipSyncContextBase_get_Frame_m268FA667D0336EBB7759D3E50AE91361B4C50C51(__this, /*hidden argument*/NULL);
			V_2 = L_4;
			// OVRLipSync.ProcessFrame(Context, data, frame, channels == 2);
			uint32_t L_5;
			L_5 = OVRLipSyncContextBase_get_Context_m53836909D7FE3C0C9F920ECD1E61B079E304D596(__this, /*hidden argument*/NULL);
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___data0;
			Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_7 = V_2;
			int32_t L_8 = ___channels1;
			IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
			int32_t L_9;
			L_9 = OVRLipSync_ProcessFrame_m48DC248F8ABFC21BD4ADCE76F29BA6775087F98B(L_5, L_6, L_7, (bool)((((int32_t)L_8) == ((int32_t)2))? 1 : 0), /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x50, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		{
			bool L_10 = V_1;
			if (!L_10)
			{
				goto IL_004f;
			}
		}

IL_0048:
		{
			OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * L_11 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		}

IL_004f:
		{
			IL2CPP_END_FINALLY(69)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x50, IL_0050)
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncContext::ProcessAudioSamplesRaw(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContext_ProcessAudioSamplesRaw_m2FC58CCD53DF90854C955B7D9870BAC3D4A9D51D (OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___data0, int32_t ___channels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * V_0 = NULL;
	bool V_1 = false;
	Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	int32_t G_B4_0 = 0;
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0005:
	try
	{ // begin try (depth: 1)
		{
			OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * L_0 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
			// if (Context == 0 || OVRLipSync.IsInitialized() != OVRLipSync.Result.Success)
			uint32_t L_1;
			L_1 = OVRLipSyncContextBase_get_Context_m53836909D7FE3C0C9F920ECD1E61B079E304D596(__this, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_0021;
			}
		}

IL_0017:
		{
			IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
			int32_t L_2;
			L_2 = OVRLipSync_IsInitialized_m9344702D1297D79220148DFB0022CE1C67660AE2(/*hidden argument*/NULL);
			G_B4_0 = ((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
			goto IL_0022;
		}

IL_0021:
		{
			G_B4_0 = 1;
		}

IL_0022:
		{
			V_3 = (bool)G_B4_0;
			bool L_3 = V_3;
			if (!L_3)
			{
				goto IL_0029;
			}
		}

IL_0026:
		{
			// return;
			IL2CPP_LEAVE(0x50, FINALLY_0045);
		}

IL_0029:
		{
			// var frame = this.Frame;
			Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_4;
			L_4 = OVRLipSyncContextBase_get_Frame_m268FA667D0336EBB7759D3E50AE91361B4C50C51(__this, /*hidden argument*/NULL);
			V_2 = L_4;
			// OVRLipSync.ProcessFrame(Context, data, frame, channels == 2);
			uint32_t L_5;
			L_5 = OVRLipSyncContextBase_get_Context_m53836909D7FE3C0C9F920ECD1E61B079E304D596(__this, /*hidden argument*/NULL);
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_6 = ___data0;
			Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_7 = V_2;
			int32_t L_8 = ___channels1;
			IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
			int32_t L_9;
			L_9 = OVRLipSync_ProcessFrame_mC9FE2D76D8EE31F9EC00C5DDB2A7492C5BE81824(L_5, L_6, L_7, (bool)((((int32_t)L_8) == ((int32_t)2))? 1 : 0), /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x50, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		{
			bool L_10 = V_1;
			if (!L_10)
			{
				goto IL_004f;
			}
		}

IL_0048:
		{
			OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * L_11 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		}

IL_004f:
		{
			IL2CPP_END_FINALLY(69)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x50, IL_0050)
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncContext::ProcessAudioSamples(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContext_ProcessAudioSamples_m11BBC9ADDA82E0FAE3E50EED0DADF67904770100 (OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___channels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if ((OVRLipSync.IsInitialized() != OVRLipSync.Result.Success) || audioSource == null)
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = OVRLipSync_IsInitialized_m9344702D1297D79220148DFB0022CE1C67660AE2(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = ((OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F *)__this)->get_audioSource_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return;
		goto IL_0039;
	}

IL_001e:
	{
		// PreprocessAudioSamples(data, channels);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = ___data0;
		int32_t L_5 = ___channels1;
		OVRLipSyncContext_PreprocessAudioSamples_mA6C2998807D7B80EF24CEC6BB90B604D6DF96E3B(__this, L_4, L_5, /*hidden argument*/NULL);
		// ProcessAudioSamplesRaw(data, channels);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___data0;
		int32_t L_7 = ___channels1;
		OVRLipSyncContext_ProcessAudioSamplesRaw_m0EF28DF3472D5E97056FBABA09821D947ED19AA6(__this, L_6, L_7, /*hidden argument*/NULL);
		// PostprocessAudioSamples(data, channels);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = ___data0;
		int32_t L_9 = ___channels1;
		OVRLipSyncContext_PostprocessAudioSamples_m07437A836ADF4DFFC1AB5AA2CC5BA2859A4F4B0B(__this, L_8, L_9, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncContext::OnAudioFilterRead(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContext_OnAudioFilterRead_mA7F381F3D5F550C16C9A7F8F16C144A52F8FE05C (OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___channels1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (!skipAudioSource)
		bool L_0 = __this->get_skipAudioSource_16();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// ProcessAudioSamples(data, channels);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___data0;
		int32_t L_3 = ___channels1;
		OVRLipSyncContext_ProcessAudioSamples_m11BBC9ADDA82E0FAE3E50EED0DADF67904770100(__this, L_2, L_3, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncContext::DebugShowVisemesAndLaughter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContext_DebugShowVisemesAndLaughter_m1E8FBA38E42029F780098561CA07B01B50148B6F (OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Viseme_tAC3B16B0F7DB260DDE25C1E8654CA7BF5591EF28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEADCA8F3D09CE5A1D1F6083658C1BFF29E3E1804);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	{
		// if (hasDebugConsole)
		bool L_0 = __this->get_hasDebugConsole_18();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0131;
		}
	}
	{
		// string seq = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (showLaughter)
		bool L_2 = __this->get_showLaughter_20();
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_006e;
		}
	}
	{
		// seq += "Laughter:";
		String_t* L_4 = V_1;
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_4, _stringLiteralEADCA8F3D09CE5A1D1F6083658C1BFF29E3E1804, /*hidden argument*/NULL);
		V_1 = L_5;
		// int count = (int)(50.0f * this.Frame.laughterScore);
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_6;
		L_6 = OVRLipSyncContextBase_get_Frame_m268FA667D0336EBB7759D3E50AE91361B4C50C51(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		float L_7 = L_6->get_laughterScore_3();
		V_3 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply((float)(50.0f), (float)L_7)));
		// for (int c = 0; c < count; c++)
		V_4 = 0;
		goto IL_0056;
	}

IL_0044:
	{
		// seq += "*";
		String_t* L_8 = V_1;
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_8, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, /*hidden argument*/NULL);
		V_1 = L_9;
		// for (int c = 0; c < count; c++)
		int32_t L_10 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0056:
	{
		// for (int c = 0; c < count; c++)
		int32_t L_11 = V_4;
		int32_t L_12 = V_3;
		V_5 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_5;
		if (L_13)
		{
			goto IL_0044;
		}
	}
	{
		// seq += "\n";
		String_t* L_14 = V_1;
		String_t* L_15;
		L_15 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_14, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
		V_1 = L_15;
	}

IL_006e:
	{
		// if (showVisemes)
		bool L_16 = __this->get_showVisemes_14();
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0110;
		}
	}
	{
		// for (int i = 0; i < this.Frame.Visemes.Length; i++)
		V_7 = 0;
		goto IL_00f5;
	}

IL_0083:
	{
		// seq += ((OVRLipSync.Viseme)i).ToString();
		String_t* L_18 = V_1;
		int32_t L_19 = V_7;
		V_9 = L_19;
		RuntimeObject * L_20 = Box(Viseme_tAC3B16B0F7DB260DDE25C1E8654CA7BF5591EF28_il2cpp_TypeInfo_var, (&V_9));
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		V_9 = *(int32_t*)UnBox(L_20);
		String_t* L_22;
		L_22 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_18, L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		// seq += ":";
		String_t* L_23 = V_1;
		String_t* L_24;
		L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_23, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, /*hidden argument*/NULL);
		V_1 = L_24;
		// int count = (int)(50.0f * this.Frame.Visemes[i]);
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_25;
		L_25 = OVRLipSyncContextBase_get_Frame_m268FA667D0336EBB7759D3E50AE91361B4C50C51(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_26 = L_25->get_Visemes_2();
		int32_t L_27 = V_7;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		float L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_8 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply((float)(50.0f), (float)L_29)));
		// for (int c = 0; c < count; c++)
		V_10 = 0;
		goto IL_00d6;
	}

IL_00c4:
	{
		// seq += "*";
		String_t* L_30 = V_1;
		String_t* L_31;
		L_31 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_30, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, /*hidden argument*/NULL);
		V_1 = L_31;
		// for (int c = 0; c < count; c++)
		int32_t L_32 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00d6:
	{
		// for (int c = 0; c < count; c++)
		int32_t L_33 = V_10;
		int32_t L_34 = V_8;
		V_11 = (bool)((((int32_t)L_33) < ((int32_t)L_34))? 1 : 0);
		bool L_35 = V_11;
		if (L_35)
		{
			goto IL_00c4;
		}
	}
	{
		// seq += "\n";
		String_t* L_36 = V_1;
		String_t* L_37;
		L_37 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_36, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
		V_1 = L_37;
		// for (int i = 0; i < this.Frame.Visemes.Length; i++)
		int32_t L_38 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00f5:
	{
		// for (int i = 0; i < this.Frame.Visemes.Length; i++)
		int32_t L_39 = V_7;
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_40;
		L_40 = OVRLipSyncContextBase_get_Frame_m268FA667D0336EBB7759D3E50AE91361B4C50C51(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_41 = L_40->get_Visemes_2();
		NullCheck(L_41);
		V_12 = (bool)((((int32_t)L_39) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))? 1 : 0);
		bool L_42 = V_12;
		if (L_42)
		{
			goto IL_0083;
		}
	}
	{
	}

IL_0110:
	{
		// OVRLipSyncDebugConsole.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		OVRLipSyncDebugConsole_Clear_m5C3D7FBB2BE761768AC960CEE2B609FD38A1B242(/*hidden argument*/NULL);
		// if (seq != "")
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_43, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_13 = L_44;
		bool L_45 = V_13;
		if (!L_45)
		{
			goto IL_0130;
		}
	}
	{
		// OVRLipSyncDebugConsole.Log(seq);
		String_t* L_46 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		OVRLipSyncDebugConsole_Log_m8A8BE6D5FFE5D2DC2CE5A6CE7DA4358D0C2C4E13(L_46, /*hidden argument*/NULL);
	}

IL_0130:
	{
	}

IL_0131:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncContext::ToggleAudioLoopback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContext_ToggleAudioLoopback_m76164AAAC8A855CB0994BE688F0B9D40E98EAB88 (OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EE77E8E1A5C65C8B826A37FA126AFF637A5661B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC27444E1BD8044B6DBFBF638C4DE6D909AA57AEF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// audioLoopback = !audioLoopback;
		bool L_0 = __this->get_audioLoopback_12();
		__this->set_audioLoopback_12((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// if (hasDebugConsole)
		bool L_1 = __this->get_hasDebugConsole_18();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004f;
		}
	}
	{
		// OVRLipSyncDebugConsole.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		OVRLipSyncDebugConsole_Clear_m5C3D7FBB2BE761768AC960CEE2B609FD38A1B242(/*hidden argument*/NULL);
		// OVRLipSyncDebugConsole.ClearTimeout(1.5f);
		OVRLipSyncDebugConsole_ClearTimeout_m5894FB834E8306DA4B7EC2A18E87D21756A380FF((1.5f), /*hidden argument*/NULL);
		// if (audioLoopback)
		bool L_3 = __this->get_audioLoopback_12();
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		// OVRLipSyncDebugConsole.Log("LOOPBACK MODE: ENABLED");
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		OVRLipSyncDebugConsole_Log_m8A8BE6D5FFE5D2DC2CE5A6CE7DA4358D0C2C4E13(_stringLiteral0EE77E8E1A5C65C8B826A37FA126AFF637A5661B, /*hidden argument*/NULL);
		goto IL_004e;
	}

IL_0043:
	{
		// OVRLipSyncDebugConsole.Log("LOOPBACK MODE: DISABLED");
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		OVRLipSyncDebugConsole_Log_m8A8BE6D5FFE5D2DC2CE5A6CE7DA4358D0C2C4E13(_stringLiteralC27444E1BD8044B6DBFBF638C4DE6D909AA57AEF, /*hidden argument*/NULL);
	}

IL_004e:
	{
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncContext::LocalTouchEventCallback(OVRTouchpad/TouchEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContext_LocalTouchEventCallback_m122281F790C8A7EF9F860F665BD2C3AFFB3B40D4 (OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * __this, int32_t ___touchEvent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DE9E89F9979F4458CA9715FC3013CDA803A8920);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// string g = "LINEAR GAIN: ";
		V_0 = _stringLiteral5DE9E89F9979F4458CA9715FC3013CDA803A8920;
		// switch (touchEvent)
		int32_t L_0 = ___touchEvent0;
		V_2 = L_0;
		int32_t L_1 = V_2;
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)4)))
		{
			goto IL_002b;
		}
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)5)))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00fd;
	}

IL_001f:
	{
		// ToggleAudioLoopback();
		OVRLipSyncContext_ToggleAudioLoopback_m76164AAAC8A855CB0994BE688F0B9D40E98EAB88(__this, /*hidden argument*/NULL);
		// break;
		goto IL_00fd;
	}

IL_002b:
	{
		// gain += 1.0f;
		float L_5 = __this->get_gain_17();
		__this->set_gain_17(((float)il2cpp_codegen_add((float)L_5, (float)(1.0f))));
		// if (gain > 15.0f)
		float L_6 = __this->get_gain_17();
		V_3 = (bool)((((float)L_6) > ((float)(15.0f)))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		// gain = 15.0f;
		__this->set_gain_17((15.0f));
	}

IL_0059:
	{
		// g += gain;
		String_t* L_8 = V_0;
		float* L_9 = __this->get_address_of_gain_17();
		String_t* L_10;
		L_10 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_8, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// if (hasDebugConsole)
		bool L_12 = __this->get_hasDebugConsole_18();
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0091;
		}
	}
	{
		// OVRLipSyncDebugConsole.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		OVRLipSyncDebugConsole_Clear_m5C3D7FBB2BE761768AC960CEE2B609FD38A1B242(/*hidden argument*/NULL);
		// OVRLipSyncDebugConsole.Log(g);
		String_t* L_14 = V_0;
		OVRLipSyncDebugConsole_Log_m8A8BE6D5FFE5D2DC2CE5A6CE7DA4358D0C2C4E13(L_14, /*hidden argument*/NULL);
		// OVRLipSyncDebugConsole.ClearTimeout(1.5f);
		OVRLipSyncDebugConsole_ClearTimeout_m5894FB834E8306DA4B7EC2A18E87D21756A380FF((1.5f), /*hidden argument*/NULL);
	}

IL_0091:
	{
		// break;
		goto IL_00fd;
	}

IL_0093:
	{
		// gain -= 1.0f;
		float L_15 = __this->get_gain_17();
		__this->set_gain_17(((float)il2cpp_codegen_subtract((float)L_15, (float)(1.0f))));
		// if (gain < 1.0f) gain = 1.0f;
		float L_16 = __this->get_gain_17();
		V_5 = (bool)((((float)L_16) < ((float)(1.0f)))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		// if (gain < 1.0f) gain = 1.0f;
		__this->set_gain_17((1.0f));
	}

IL_00c3:
	{
		// g += gain;
		String_t* L_18 = V_0;
		float* L_19 = __this->get_address_of_gain_17();
		String_t* L_20;
		L_20 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_19, /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_18, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		// if (hasDebugConsole)
		bool L_22 = __this->get_hasDebugConsole_18();
		V_6 = L_22;
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00fb;
		}
	}
	{
		// OVRLipSyncDebugConsole.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		OVRLipSyncDebugConsole_Clear_m5C3D7FBB2BE761768AC960CEE2B609FD38A1B242(/*hidden argument*/NULL);
		// OVRLipSyncDebugConsole.Log(g);
		String_t* L_24 = V_0;
		OVRLipSyncDebugConsole_Log_m8A8BE6D5FFE5D2DC2CE5A6CE7DA4358D0C2C4E13(L_24, /*hidden argument*/NULL);
		// OVRLipSyncDebugConsole.ClearTimeout(1.5f);
		OVRLipSyncDebugConsole_ClearTimeout_m5894FB834E8306DA4B7EC2A18E87D21756A380FF((1.5f), /*hidden argument*/NULL);
	}

IL_00fb:
	{
		// break;
		goto IL_00fd;
	}

IL_00fd:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContext__ctor_mF9971B4BB38B68FCCAAAF92A966EFD6C0D3F3A22 (OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * __this, const RuntimeMethod* method)
{
	{
		// public bool enableKeyboardInput = false;
		__this->set_enableKeyboardInput_10((bool)0);
		// public bool enableTouchInput = false;
		__this->set_enableTouchInput_11((bool)0);
		// public bool audioLoopback = false;
		__this->set_audioLoopback_12((bool)0);
		// public KeyCode loopbackKey = KeyCode.L;
		__this->set_loopbackKey_13(((int32_t)108));
		// public bool showVisemes = false;
		__this->set_showVisemes_14((bool)0);
		// public KeyCode debugVisemesKey = KeyCode.D;
		__this->set_debugVisemesKey_15(((int32_t)100));
		// public bool skipAudioSource = false;
		__this->set_skipAudioSource_16((bool)0);
		// public float gain = 1.0f;
		__this->set_gain_17((1.0f));
		// private bool hasDebugConsole = false;
		__this->set_hasDebugConsole_18((bool)0);
		// public KeyCode debugLaughterKey = KeyCode.H;
		__this->set_debugLaughterKey_19(((int32_t)104));
		// public bool showLaughter = false;
		__this->set_showLaughter_20((bool)0);
		// public float laughterScore = 0.0f;
		__this->set_laughterScore_21((0.0f));
		OVRLipSyncContextBase__ctor_m176189787684DA92D1FA0A313BC7EB2C06D25BA3(__this, /*hidden argument*/NULL);
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
// System.Void OVRLipSyncContextBase::set_Smoothing(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextBase_set_Smoothing_m44EE9FC2624B7CC937E39383EFB63004F3BB6D7D (OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CB7A1AF24E3CCDDF94046BDD39A5ACCDF5AA216);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA63D3C02D75DB19D3254DCAC5B1AA48C4EC9A56D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		// OVRLipSync.Result result =
		//     OVRLipSync.SendSignal(context, OVRLipSync.Signals.VisemeSmoothing, value, 0);
		uint32_t L_0 = __this->get_context_8();
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = OVRLipSync_SendSignal_mBBEEBB4C6F9910F44865039E7256839AF3BFDE73(L_0, 3, L_1, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (result != OVRLipSync.Result.Success)
		int32_t L_3 = V_0;
		V_1 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		// if (result == OVRLipSync.Result.InvalidParam)
		int32_t L_5 = V_0;
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)((int32_t)-2202)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		// Debug.LogError("OVRLipSyncContextBase.SetSmoothing: A viseme smoothing" +
		//     " parameter is invalid, it should be between 1 and 100!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralA63D3C02D75DB19D3254DCAC5B1AA48C4EC9A56D, /*hidden argument*/NULL);
		goto IL_0041;
	}

IL_0034:
	{
		// Debug.LogError("OVRLipSyncContextBase.SetSmoothing: An unexpected" +
		//     " error occured.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral3CB7A1AF24E3CCDDF94046BDD39A5ACCDF5AA216, /*hidden argument*/NULL);
	}

IL_0041:
	{
	}

IL_0042:
	{
		// _smoothing = value;
		int32_t L_7 = ___value0;
		__this->set__smoothing_9(L_7);
		// }
		return;
	}
}
// System.Int32 OVRLipSyncContextBase::get_Smoothing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSyncContextBase_get_Smoothing_m7E0182F4AB0C5F4E32E795DA896EE2EEE8BFC3F4 (OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return _smoothing;
		int32_t L_0 = __this->get__smoothing_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 OVRLipSyncContextBase::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t OVRLipSyncContextBase_get_Context_m53836909D7FE3C0C9F920ECD1E61B079E304D596 (OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		// return context;
		uint32_t L_0 = __this->get_context_8();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// OVRLipSync/Frame OVRLipSyncContextBase::get_Frame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * OVRLipSyncContextBase_get_Frame_m268FA667D0336EBB7759D3E50AE91361B4C50C51 (OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * __this, const RuntimeMethod* method)
{
	Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * V_0 = NULL;
	{
		// return frame;
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_0 = __this->get_frame_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_1 = V_0;
		return L_1;
	}
}
// System.Void OVRLipSyncContextBase::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextBase_Awake_mCF46492986FC317675D81ECFBEC6EDF4120CBE46 (OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral486643064ACFB5AA95EEEADA99D75FBA6EF0FA3E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (!audioSource)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// audioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3;
		L_3 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_audioSource_4(L_3);
	}

IL_0021:
	{
		// lock (this)
		V_1 = __this;
		V_2 = (bool)0;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * L_4 = V_1;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_4, (bool*)(&V_2), /*hidden argument*/NULL);
			// if (context == 0)
			uint32_t L_5 = __this->get_context_8();
			V_3 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
			bool L_6 = V_3;
			if (!L_6)
			{
				goto IL_006d;
			}
		}

IL_003c:
		{
			// if (OVRLipSync.CreateContext(ref context, provider, 0, enableAcceleration)
			//     != OVRLipSync.Result.Success)
			uint32_t* L_7 = __this->get_address_of_context_8();
			int32_t L_8 = __this->get_provider_5();
			bool L_9 = __this->get_enableAcceleration_6();
			IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
			int32_t L_10;
			L_10 = OVRLipSync_CreateContext_mA46D262E47C798D46E0B67DE8D074D79D9211147((uint32_t*)L_7, L_8, 0, L_9, /*hidden argument*/NULL);
			V_4 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
			bool L_11 = V_4;
			if (!L_11)
			{
				goto IL_006c;
			}
		}

IL_005e:
		{
			// Debug.LogError("OVRLipSyncContextBase.Start ERROR: Could not create" +
			//     " Phoneme context.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral486643064ACFB5AA95EEEADA99D75FBA6EF0FA3E, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0x7B, FINALLY_0070);
		}

IL_006c:
		{
		}

IL_006d:
		{
			IL2CPP_LEAVE(0x7B, FINALLY_0070);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0070;
	}

FINALLY_0070:
	{ // begin finally (depth: 1)
		{
			bool L_12 = V_2;
			if (!L_12)
			{
				goto IL_007a;
			}
		}

IL_0073:
		{
			OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * L_13 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_13, /*hidden argument*/NULL);
		}

IL_007a:
		{
			IL2CPP_END_FINALLY(112)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(112)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7B, IL_007b)
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncContextBase::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextBase_OnDestroy_mEAE5B6E482CF1B976B9A3280F55E39FF44200E45 (OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC0B5D63F66F8D02E9B3A9678AA1AD1F001F0C8C);
		s_Il2CppMethodInitialized = true;
	}
	OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0005:
	try
	{ // begin try (depth: 1)
		{
			OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * L_0 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
			// if (context != 0)
			uint32_t L_1 = __this->get_context_8();
			V_2 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
			bool L_2 = V_2;
			if (!L_2)
			{
				goto IL_003d;
			}
		}

IL_001c:
		{
			// if (OVRLipSync.DestroyContext(context) != OVRLipSync.Result.Success)
			uint32_t L_3 = __this->get_context_8();
			IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
			int32_t L_4;
			L_4 = OVRLipSync_DestroyContext_m543FE422AA26AD78F91BF36B1756EF8B78821001(L_3, /*hidden argument*/NULL);
			V_3 = (bool)((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0);
			bool L_5 = V_3;
			if (!L_5)
			{
				goto IL_003c;
			}
		}

IL_002f:
		{
			// Debug.LogError("OVRLipSyncContextBase.OnDestroy ERROR: Could not delete" +
			//     " Phoneme context.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralCC0B5D63F66F8D02E9B3A9678AA1AD1F001F0C8C, /*hidden argument*/NULL);
		}

IL_003c:
		{
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x4B, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_004a;
			}
		}

IL_0043:
		{
			OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * L_7 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		}

IL_004a:
		{
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
	}

IL_004b:
	{
		// }
		return;
	}
}
// OVRLipSync/Frame OVRLipSyncContextBase::GetCurrentPhonemeFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * OVRLipSyncContextBase_GetCurrentPhonemeFrame_m37D3AF7B0C36F945DDC0087215EE9DBA64110515 (OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * __this, const RuntimeMethod* method)
{
	Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * V_0 = NULL;
	{
		// return frame;
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_0 = __this->get_frame_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_1 = V_0;
		return L_1;
	}
}
// System.Void OVRLipSyncContextBase::SetVisemeBlend(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextBase_SetVisemeBlend_mAD60E51F4E5715097D90CB93AA203BF6A5C4E8BB (OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * __this, int32_t ___viseme0, int32_t ___amount1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral017A396FA3DCD732966B7067CF8CA0ED2BE9038A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral093173EC45B6BA7442A09BBBF1D3F749F5ABD729);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		// OVRLipSync.Result result =
		//     OVRLipSync.SendSignal(context, OVRLipSync.Signals.VisemeAmount, viseme, amount);
		uint32_t L_0 = __this->get_context_8();
		int32_t L_1 = ___viseme0;
		int32_t L_2 = ___amount1;
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = OVRLipSync_SendSignal_mBBEEBB4C6F9910F44865039E7256839AF3BFDE73(L_0, 2, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (result != OVRLipSync.Result.Success)
		int32_t L_4 = V_0;
		V_1 = (bool)((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		// if (result == OVRLipSync.Result.InvalidParam)
		int32_t L_6 = V_0;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)-2202)))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		// Debug.LogError("OVRLipSyncContextBase.SetVisemeBlend: Viseme ID is invalid.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral017A396FA3DCD732966B7067CF8CA0ED2BE9038A, /*hidden argument*/NULL);
		goto IL_0041;
	}

IL_0034:
	{
		// Debug.LogError("OVRLipSyncContextBase.SetVisemeBlend: An unexpected" +
		//     " error occured.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral093173EC45B6BA7442A09BBBF1D3F749F5ABD729, /*hidden argument*/NULL);
	}

IL_0041:
	{
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncContextBase::SetLaughterBlend(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextBase_SetLaughterBlend_m08D99DF7058BAF5C115F5C76F78B3845226B9738 (OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC2466DAF2E2E172224B1C3C8023036E9610CA15);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// OVRLipSync.Result result =
		//     OVRLipSync.SendSignal(context, OVRLipSync.Signals.LaughterAmount, amount, 0);
		uint32_t L_0 = __this->get_context_8();
		int32_t L_1 = ___amount0;
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = OVRLipSync_SendSignal_mBBEEBB4C6F9910F44865039E7256839AF3BFDE73(L_0, 4, L_1, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (result != OVRLipSync.Result.Success)
		int32_t L_3 = V_0;
		V_1 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// Debug.LogError("OVRLipSyncContextBase.SetLaughterBlend: An unexpected" +
		//     " error occured.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralFC2466DAF2E2E172224B1C3C8023036E9610CA15, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// OVRLipSync/Result OVRLipSyncContextBase::ResetContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRLipSyncContextBase_ResetContext_mA037C4F5C56543348A9E307AA389AEDE916C43FB (OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// frame.Reset();
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_0 = __this->get_frame_7();
		NullCheck(L_0);
		Frame_Reset_m560B5FCD12159132A33A18D4706107510D053C3C(L_0, /*hidden argument*/NULL);
		// return OVRLipSync.ResetContext(context);
		uint32_t L_1 = __this->get_context_8();
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = OVRLipSync_ResetContext_m4971A3C702DEF893A3BCD82B97330032D0ADFCDC(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void OVRLipSyncContextBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextBase__ctor_m176189787684DA92D1FA0A313BC7EB2C06D25BA3 (OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Frame_tA0234D25F233FE4D496EA062950D0B45B401A117_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AudioSource audioSource = null;
		__this->set_audioSource_4((AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)NULL);
		// public OVRLipSync.ContextProviders provider = OVRLipSync.ContextProviders.Enhanced;
		__this->set_provider_5(1);
		// public bool enableAcceleration = true;
		__this->set_enableAcceleration_6((bool)1);
		// private OVRLipSync.Frame frame = new OVRLipSync.Frame();
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_0 = (Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 *)il2cpp_codegen_object_new(Frame_tA0234D25F233FE4D496EA062950D0B45B401A117_il2cpp_TypeInfo_var);
		Frame__ctor_mB064A35BA6D1678E1828B9A8F67980C32B4AE755(L_0, /*hidden argument*/NULL);
		__this->set_frame_7(L_0);
		// private uint context = 0;    // 0 is no context
		__this->set_context_8(0);
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
// System.Void OVRLipSyncContextCanned::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextCanned_Update_m88CBF643618D18B83A2245F1F66EE640D9F00A91 (OVRLipSyncContextCanned_tB77028617E9368F7D22D672569F37ED1BB74552F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (audioSource.isPlaying && currentSequence != null)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = ((OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F *)__this)->get_audioSource_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		OVRLipSyncSequence_t67C1C061971274CF4F2264B46B14A4FAACE39799 * L_2 = __this->get_currentSequence_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		// OVRLipSync.Frame currentFrame = currentSequence.GetFrameAtTime(audioSource.time);
		OVRLipSyncSequence_t67C1C061971274CF4F2264B46B14A4FAACE39799 * L_5 = __this->get_currentSequence_10();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = ((OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F *)__this)->get_audioSource_4();
		NullCheck(L_6);
		float L_7;
		L_7 = AudioSource_get_time_m2185448A5B8A50225410220AF67BC34F5596D210(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_8;
		L_8 = OVRLipSyncSequence_GetFrameAtTime_m46F1B3BFC70C22B8289626F04C35A372501C16B3(L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// this.Frame.CopyInput(currentFrame);
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_9;
		L_9 = OVRLipSyncContextBase_get_Frame_m268FA667D0336EBB7759D3E50AE91361B4C50C51(__this, /*hidden argument*/NULL);
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_10 = V_1;
		NullCheck(L_9);
		Frame_CopyInput_mEFAD79327D78D7FF4AC8FAF78728FF9E0D299DA4(L_9, L_10, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncContextCanned::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextCanned__ctor_mDEB53FE0D529D84E47FA4AAD2209EAF0D1722A07 (OVRLipSyncContextCanned_tB77028617E9368F7D22D672569F37ED1BB74552F * __this, const RuntimeMethod* method)
{
	{
		OVRLipSyncContextBase__ctor_m176189787684DA92D1FA0A313BC7EB2C06D25BA3(__this, /*hidden argument*/NULL);
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
// System.Void OVRLipSyncContextMorphTarget::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextMorphTarget_Start_m3619A3984E122F7F28322AC2DDFA1C7B19BC245F (OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F_m3A8F35193148094ECE42EEFA868B044C05826B00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F346862DC7E42DF267B26A8D7430AD6A32C70FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9E0510A9B57F46DA93669A9300935B5AF09D0DD);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if(skinnedMeshRenderer == null)
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_0 = __this->get_skinnedMeshRenderer_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogError("LipSyncContextMorphTarget.Start Error: " +
		//     "Please set the target Skinned Mesh Renderer to be controlled!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral8F346862DC7E42DF267B26A8D7430AD6A32C70FA, /*hidden argument*/NULL);
		// return;
		goto IL_005e;
	}

IL_001f:
	{
		// lipsyncContext = GetComponent<OVRLipSyncContextBase>();
		OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * L_3;
		L_3 = Component_GetComponent_TisOVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F_m3A8F35193148094ECE42EEFA868B044C05826B00(__this, /*hidden argument*/Component_GetComponent_TisOVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F_m3A8F35193148094ECE42EEFA868B044C05826B00_RuntimeMethod_var);
		__this->set_lipsyncContext_13(L_3);
		// if(lipsyncContext == null)
		OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * L_4 = __this->get_lipsyncContext_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		// Debug.LogError("LipSyncContextMorphTarget.Start Error: " +
		//     "No OVRLipSyncContext component on this object!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralA9E0510A9B57F46DA93669A9300935B5AF09D0DD, /*hidden argument*/NULL);
		goto IL_005e;
	}

IL_004a:
	{
		// lipsyncContext.Smoothing = smoothAmount;
		OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * L_7 = __this->get_lipsyncContext_13();
		int32_t L_8 = __this->get_smoothAmount_12();
		NullCheck(L_7);
		OVRLipSyncContextBase_set_Smoothing_m44EE9FC2624B7CC937E39383EFB63004F3BB6D7D(L_7, L_8, /*hidden argument*/NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncContextMorphTarget::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextMorphTarget_Update_mBF826AD0962437E86BE4C4AFD7FD1CEFCD2B72E0 (OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		// if((lipsyncContext != null) && (skinnedMeshRenderer != null))
		OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * L_0 = __this->get_lipsyncContext_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_2 = __this->get_skinnedMeshRenderer_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_007f;
		}
	}
	{
		// OVRLipSync.Frame frame = lipsyncContext.GetCurrentPhonemeFrame();
		OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * L_5 = __this->get_lipsyncContext_13();
		NullCheck(L_5);
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_6;
		L_6 = OVRLipSyncContextBase_GetCurrentPhonemeFrame_m37D3AF7B0C36F945DDC0087215EE9DBA64110515(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// if (frame != null)
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_7 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 *)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		// SetVisemeToMorphTarget(frame);
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_9 = V_1;
		OVRLipSyncContextMorphTarget_SetVisemeToMorphTarget_mCC0926FF1E85658BA8993BD1929A3CBF75CC58E7(__this, L_9, /*hidden argument*/NULL);
		// SetLaughterToMorphTarget(frame);
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_10 = V_1;
		OVRLipSyncContextMorphTarget_SetLaughterToMorphTarget_m6323AE01AFD1855071A3F16403FA4D0253C452A6(__this, L_10, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// CheckForKeys();
		OVRLipSyncContextMorphTarget_CheckForKeys_m3E0D59EF33AC9BF52927879EE36E23195856A714(__this, /*hidden argument*/NULL);
		// if (smoothAmount != lipsyncContext.Smoothing)
		int32_t L_11 = __this->get_smoothAmount_12();
		OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * L_12 = __this->get_lipsyncContext_13();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = OVRLipSyncContextBase_get_Smoothing_m7E0182F4AB0C5F4E32E795DA896EE2EEE8BFC3F4(L_12, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_007e;
		}
	}
	{
		// lipsyncContext.Smoothing = smoothAmount;
		OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * L_15 = __this->get_lipsyncContext_13();
		int32_t L_16 = __this->get_smoothAmount_12();
		NullCheck(L_15);
		OVRLipSyncContextBase_set_Smoothing_m44EE9FC2624B7CC937E39383EFB63004F3BB6D7D(L_15, L_16, /*hidden argument*/NULL);
	}

IL_007e:
	{
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncContextMorphTarget::CheckForKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextMorphTarget_CheckForKeys_m3E0D59EF33AC9BF52927879EE36E23195856A714 (OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (enableVisemeTestKeys)
		bool L_0 = __this->get_enableVisemeTestKeys_6();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// for (int i = 0; i < OVRLipSync.VisemeCount; ++i)
		V_1 = 0;
		goto IL_0028;
	}

IL_0010:
	{
		// CheckVisemeKey(visemeTestKeys[i], i, 100);
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_2 = __this->get_visemeTestKeys_7();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (int32_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = V_1;
		OVRLipSyncContextMorphTarget_CheckVisemeKey_mE9AEA5532A6BBDC62E0E98E4F488848CDBF0EA22(__this, L_5, L_6, ((int32_t)100), /*hidden argument*/NULL);
		// for (int i = 0; i < OVRLipSync.VisemeCount; ++i)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0028:
	{
		// for (int i = 0; i < OVRLipSync.VisemeCount; ++i)
		int32_t L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_9 = ((OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var))->get_VisemeCount_4();
		V_2 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0010;
		}
	}
	{
	}

IL_0035:
	{
		// CheckLaughterKey();
		OVRLipSyncContextMorphTarget_CheckLaughterKey_m678C4941DFD78F8B504AC27C3E07F40BE40F99DC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVRLipSyncContextMorphTarget::SetVisemeToMorphTarget(OVRLipSync/Frame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextMorphTarget_SetVisemeToMorphTarget_mCC0926FF1E85658BA8993BD1929A3CBF75CC58E7 (OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19 * __this, Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * ___frame0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		// for (int i = 0; i < visemeToBlendTargets.Length; i++)
		V_0 = 0;
		goto IL_0041;
	}

IL_0005:
	{
		// if (visemeToBlendTargets[i] != -1)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_visemeToBlendTargets_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		// skinnedMeshRenderer.SetBlendShapeWeight(
		//     visemeToBlendTargets[i],
		//     frame.Visemes[i] * 100.0f);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_5 = __this->get_skinnedMeshRenderer_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = __this->get_visemeToBlendTargets_5();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_10 = ___frame0;
		NullCheck(L_10);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = L_10->get_Visemes_2();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		float L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_5);
		SkinnedMeshRenderer_SetBlendShapeWeight_mF546F3567C5039C217AD1E32157B992B4124B5FD(L_5, L_9, ((float)il2cpp_codegen_multiply((float)L_14, (float)(100.0f))), /*hidden argument*/NULL);
	}

IL_003c:
	{
		// for (int i = 0; i < visemeToBlendTargets.Length; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0041:
	{
		// for (int i = 0; i < visemeToBlendTargets.Length; i++)
		int32_t L_16 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = __this->get_visemeToBlendTargets_5();
		NullCheck(L_17);
		V_2 = (bool)((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))? 1 : 0);
		bool L_18 = V_2;
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
// System.Void OVRLipSyncContextMorphTarget::SetLaughterToMorphTarget(OVRLipSync/Frame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextMorphTarget_SetLaughterToMorphTarget_m6323AE01AFD1855071A3F16403FA4D0253C452A6 (OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19 * __this, Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * ___frame0, const RuntimeMethod* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		// if (laughterBlendTarget != -1)
		int32_t L_0 = __this->get_laughterBlendTarget_9();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		// float laughterScore = frame.laughterScore;
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_2 = ___frame0;
		NullCheck(L_2);
		float L_3 = L_2->get_laughterScore_3();
		V_1 = L_3;
		// laughterScore = laughterScore < laughterThreshold ? 0.0f : laughterScore - laughterThreshold;
		float L_4 = V_1;
		float L_5 = __this->get_laughterThreshold_10();
		if ((((float)L_4) < ((float)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		float L_6 = V_1;
		float L_7 = __this->get_laughterThreshold_10();
		G_B4_0 = ((float)il2cpp_codegen_subtract((float)L_6, (float)L_7));
		goto IL_0031;
	}

IL_002c:
	{
		G_B4_0 = (0.0f);
	}

IL_0031:
	{
		V_1 = G_B4_0;
		// laughterScore = Mathf.Min(laughterScore * laughterMultiplier, 1.0f);
		float L_8 = V_1;
		float L_9 = __this->get_laughterMultiplier_11();
		float L_10;
		L_10 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (1.0f), /*hidden argument*/NULL);
		V_1 = L_10;
		// laughterScore *= 1.0f / laughterThreshold;
		float L_11 = V_1;
		float L_12 = __this->get_laughterThreshold_10();
		V_1 = ((float)il2cpp_codegen_multiply((float)L_11, (float)((float)((float)(1.0f)/(float)L_12))));
		// skinnedMeshRenderer.SetBlendShapeWeight(
		//     laughterBlendTarget,
		//     laughterScore * 100.0f);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_13 = __this->get_skinnedMeshRenderer_4();
		int32_t L_14 = __this->get_laughterBlendTarget_9();
		float L_15 = V_1;
		NullCheck(L_13);
		SkinnedMeshRenderer_SetBlendShapeWeight_mF546F3567C5039C217AD1E32157B992B4124B5FD(L_13, L_14, ((float)il2cpp_codegen_multiply((float)L_15, (float)(100.0f))), /*hidden argument*/NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncContextMorphTarget::CheckVisemeKey(UnityEngine.KeyCode,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextMorphTarget_CheckVisemeKey_mE9AEA5532A6BBDC62E0E98E4F488848CDBF0EA22 (OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19 * __this, int32_t ___key0, int32_t ___viseme1, int32_t ___amount2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (Input.GetKeyDown(key))
		int32_t L_0 = ___key0;
		bool L_1;
		L_1 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// lipsyncContext.SetVisemeBlend(visemeToBlendTargets[viseme], amount);
		OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * L_3 = __this->get_lipsyncContext_13();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = __this->get_visemeToBlendTargets_5();
		int32_t L_5 = ___viseme1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = ___amount2;
		NullCheck(L_3);
		OVRLipSyncContextBase_SetVisemeBlend_mAD60E51F4E5715097D90CB93AA203BF6A5C4E8BB(L_3, L_7, L_8, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// if (Input.GetKeyUp(key))
		int32_t L_9 = ___key0;
		bool L_10;
		L_10 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0043;
		}
	}
	{
		// lipsyncContext.SetVisemeBlend(visemeToBlendTargets[viseme], 0);
		OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * L_12 = __this->get_lipsyncContext_13();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = __this->get_visemeToBlendTargets_5();
		int32_t L_14 = ___viseme1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		OVRLipSyncContextBase_SetVisemeBlend_mAD60E51F4E5715097D90CB93AA203BF6A5C4E8BB(L_12, L_16, 0, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncContextMorphTarget::CheckLaughterKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextMorphTarget_CheckLaughterKey_m678C4941DFD78F8B504AC27C3E07F40BE40F99DC (OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (Input.GetKeyDown(laughterKey))
		int32_t L_0 = __this->get_laughterKey_8();
		bool L_1;
		L_1 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// lipsyncContext.SetLaughterBlend(100);
		OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * L_3 = __this->get_lipsyncContext_13();
		NullCheck(L_3);
		OVRLipSyncContextBase_SetLaughterBlend_m08D99DF7058BAF5C115F5C76F78B3845226B9738(L_3, ((int32_t)100), /*hidden argument*/NULL);
	}

IL_0020:
	{
		// if (Input.GetKeyUp(laughterKey))
		int32_t L_4 = __this->get_laughterKey_8();
		bool L_5;
		L_5 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		// lipsyncContext.SetLaughterBlend(0);
		OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * L_7 = __this->get_lipsyncContext_13();
		NullCheck(L_7);
		OVRLipSyncContextBase_SetLaughterBlend_m08D99DF7058BAF5C115F5C76F78B3845226B9738(L_7, 0, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncContextMorphTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextMorphTarget__ctor_m140E903A85462BE186DF6368C6E184331748A788 (OVRLipSyncContextMorphTarget_t40B03305DE7E4F9AFCEB4F251905550514065A19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m00E67835DCABA6A49B5CEE6415E8D5377C8BB5DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t3975A44A12BEB7080C67D91FDB33D170C9C63289____0881D629F9101D9D0DFCFE85D19C395FAD7CCF6050FDF4B27A4B73C2BF7F3B6B_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SkinnedMeshRenderer skinnedMeshRenderer = null;
		__this->set_skinnedMeshRenderer_4((SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 *)NULL);
		// public int [] visemeToBlendTargets = Enumerable.Range(0, OVRLipSync.VisemeCount).ToArray();
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_0 = ((OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var))->get_VisemeCount_4();
		RuntimeObject* L_1;
		L_1 = Enumerable_Range_mA545670D76B68795D0126AC84B994E2AD66E2415(0, L_0, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2;
		L_2 = Enumerable_ToArray_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m00E67835DCABA6A49B5CEE6415E8D5377C8BB5DA(L_1, /*hidden argument*/Enumerable_ToArray_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m00E67835DCABA6A49B5CEE6415E8D5377C8BB5DA_RuntimeMethod_var);
		__this->set_visemeToBlendTargets_5(L_2);
		// public bool enableVisemeTestKeys = false;
		__this->set_enableVisemeTestKeys_6((bool)0);
		// public KeyCode[] visemeTestKeys =
		// {
		//     KeyCode.BackQuote,
		//     KeyCode.Tab,
		//     KeyCode.Q,
		//     KeyCode.W,
		//     KeyCode.E,
		//     KeyCode.R,
		//     KeyCode.T,
		//     KeyCode.Y,
		//     KeyCode.U,
		//     KeyCode.I,
		//     KeyCode.O,
		//     KeyCode.P,
		//     KeyCode.LeftBracket,
		//     KeyCode.RightBracket,
		//     KeyCode.Backslash,
		// };
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_3 = (KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871*)(KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871*)SZArrayNew(KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_4 = L_3;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3975A44A12BEB7080C67D91FDB33D170C9C63289____0881D629F9101D9D0DFCFE85D19C395FAD7CCF6050FDF4B27A4B73C2BF7F3B6B_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		__this->set_visemeTestKeys_7(L_4);
		// public KeyCode laughterKey = KeyCode.CapsLock;
		__this->set_laughterKey_8(((int32_t)301));
		// public int laughterBlendTarget = OVRLipSync.VisemeCount;
		int32_t L_6 = ((OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var))->get_VisemeCount_4();
		__this->set_laughterBlendTarget_9(L_6);
		// public float laughterThreshold = 0.5f;
		__this->set_laughterThreshold_10((0.5f));
		// public float laughterMultiplier = 1.5f;
		__this->set_laughterMultiplier_11((1.5f));
		// public int smoothAmount = 70;
		__this->set_smoothAmount_12(((int32_t)70));
		// private OVRLipSyncContextBase lipsyncContext = null;
		__this->set_lipsyncContext_13((OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F *)NULL);
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
// System.Void OVRLipSyncContextTextureFlip::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextTextureFlip_Start_m13D4FCCEA08D0D18F4C1D1E1C1636336131D7F71 (OVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F_m3A8F35193148094ECE42EEFA868B044C05826B00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E60C3A0690C68A7C67C75E06DFFD04BC4712840);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BB4FB21295FF0D21F7681048829851201A7EB86);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// lipsyncContext = GetComponent<OVRLipSyncContextBase>();
		OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * L_0;
		L_0 = Component_GetComponent_TisOVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F_m3A8F35193148094ECE42EEFA868B044C05826B00(__this, /*hidden argument*/Component_GetComponent_TisOVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F_m3A8F35193148094ECE42EEFA868B044C05826B00_RuntimeMethod_var);
		__this->set_lipsyncContext_7(L_0);
		// if (lipsyncContext == null)
		OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * L_1 = __this->get_lipsyncContext_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// Debug.LogWarning("LipSyncContextTextureFlip.Start WARNING:" +
		//     " No lip sync context component set to object");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral3BB4FB21295FF0D21F7681048829851201A7EB86, /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_002c:
	{
		// lipsyncContext.Smoothing = smoothAmount;
		OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * L_4 = __this->get_lipsyncContext_7();
		int32_t L_5 = __this->get_smoothAmount_6();
		NullCheck(L_4);
		OVRLipSyncContextBase_set_Smoothing_m44EE9FC2624B7CC937E39383EFB63004F3BB6D7D(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0040:
	{
		// if (material == null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = __this->get_material_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		// Debug.LogWarning("LipSyncContextTextureFlip.Start WARNING:" +
		//     " Lip sync context texture flip has no material target to control!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral1E60C3A0690C68A7C67C75E06DFFD04BC4712840, /*hidden argument*/NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncContextTextureFlip::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextTextureFlip_Update_m21B25DF847DEB40E4E6DB31D7C0A177CD63F4A5F (OVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	{
		// if((lipsyncContext != null) && (material != null))
		OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * L_0 = __this->get_lipsyncContext_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_material_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_00d2;
		}
	}
	{
		// OVRLipSync.Frame frame = lipsyncContext.GetCurrentPhonemeFrame();
		OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * L_5 = __this->get_lipsyncContext_7();
		NullCheck(L_5);
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_6;
		L_6 = OVRLipSyncContextBase_GetCurrentPhonemeFrame_m37D3AF7B0C36F945DDC0087215EE9DBA64110515(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// if (frame != null)
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_7 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 *)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_00d1;
		}
	}
	{
		// if (lipsyncContext.provider == OVRLipSync.ContextProviders.Original)
		OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * L_9 = __this->get_lipsyncContext_7();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_provider_5();
		V_3 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_00b6;
		}
	}
	{
		// for (int i = 0; i < frame.Visemes.Length; i++)
		V_4 = 0;
		goto IL_00a1;
	}

IL_0056:
	{
		// float smoothing = ((smoothAmount - 1) / 100.0f);
		int32_t L_12 = __this->get_smoothAmount_6();
		V_5 = ((float)((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1))))/(float)(100.0f)));
		// oldFrame.Visemes[i] =
		//     oldFrame.Visemes[i] * smoothing +
		//     frame.Visemes[i] * (1.0f - smoothing);
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_13 = __this->get_oldFrame_8();
		NullCheck(L_13);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = L_13->get_Visemes_2();
		int32_t L_15 = V_4;
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_16 = __this->get_oldFrame_8();
		NullCheck(L_16);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_17 = L_16->get_Visemes_2();
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		float L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		float L_21 = V_5;
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_22 = V_1;
		NullCheck(L_22);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_23 = L_22->get_Visemes_2();
		int32_t L_24 = V_4;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		float L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		float L_27 = V_5;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_20, (float)L_21)), (float)((float)il2cpp_codegen_multiply((float)L_26, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_27)))))));
		// for (int i = 0; i < frame.Visemes.Length; i++)
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00a1:
	{
		// for (int i = 0; i < frame.Visemes.Length; i++)
		int32_t L_29 = V_4;
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_30 = V_1;
		NullCheck(L_30);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_31 = L_30->get_Visemes_2();
		NullCheck(L_31);
		V_6 = (bool)((((int32_t)L_29) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))? 1 : 0);
		bool L_32 = V_6;
		if (L_32)
		{
			goto IL_0056;
		}
	}
	{
		goto IL_00c9;
	}

IL_00b6:
	{
		// oldFrame.Visemes = frame.Visemes;
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_33 = __this->get_oldFrame_8();
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_34 = V_1;
		NullCheck(L_34);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_35 = L_34->get_Visemes_2();
		NullCheck(L_33);
		L_33->set_Visemes_2(L_35);
	}

IL_00c9:
	{
		// SetVisemeToTexture();
		OVRLipSyncContextTextureFlip_SetVisemeToTexture_m9E54B0E2DD1E6A5EC4AF728749B54535C15D6C87(__this, /*hidden argument*/NULL);
	}

IL_00d1:
	{
	}

IL_00d2:
	{
		// if (smoothAmount != lipsyncContext.Smoothing)
		int32_t L_36 = __this->get_smoothAmount_6();
		OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * L_37 = __this->get_lipsyncContext_7();
		NullCheck(L_37);
		int32_t L_38;
		L_38 = OVRLipSyncContextBase_get_Smoothing_m7E0182F4AB0C5F4E32E795DA896EE2EEE8BFC3F4(L_37, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_36) == ((int32_t)L_38))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_0102;
		}
	}
	{
		// lipsyncContext.Smoothing = smoothAmount;
		OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F * L_40 = __this->get_lipsyncContext_7();
		int32_t L_41 = __this->get_smoothAmount_6();
		NullCheck(L_40);
		OVRLipSyncContextBase_set_Smoothing_m44EE9FC2624B7CC937E39383EFB63004F3BB6D7D(L_40, L_41, /*hidden argument*/NULL);
	}

IL_0102:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncContextTextureFlip::SetVisemeToTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextTextureFlip_SetVisemeToTexture_m9E54B0E2DD1E6A5EC4AF728749B54535C15D6C87 (OVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * V_6 = NULL;
	bool V_7 = false;
	int32_t G_B8_0 = 0;
	{
		// int   gV = -1;
		V_0 = (-1);
		// float gA = 0.0f;
		V_1 = (0.0f);
		// for (int i = 0; i < oldFrame.Visemes.Length; i++)
		V_2 = 0;
		goto IL_0039;
	}

IL_000d:
	{
		// if(oldFrame.Visemes[i] > gA)
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_0 = __this->get_oldFrame_8();
		NullCheck(L_0);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = L_0->get_Visemes_2();
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		float L_5 = V_1;
		V_3 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		// gV = i;
		int32_t L_7 = V_2;
		V_0 = L_7;
		// gA = oldFrame.Visemes[i];
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_8 = __this->get_oldFrame_8();
		NullCheck(L_8);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = L_8->get_Visemes_2();
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		float L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = L_12;
	}

IL_0034:
	{
		// for (int i = 0; i < oldFrame.Visemes.Length; i++)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0039:
	{
		// for (int i = 0; i < oldFrame.Visemes.Length; i++)
		int32_t L_14 = V_2;
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_15 = __this->get_oldFrame_8();
		NullCheck(L_15);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_16 = L_15->get_Visemes_2();
		NullCheck(L_16);
		V_4 = (bool)((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_000d;
		}
	}
	{
		// if ((gV != -1) && (gV < Textures.Length))
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)(-1))))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_19 = V_0;
		TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150* L_20 = __this->get_Textures_5();
		NullCheck(L_20);
		G_B8_0 = ((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B8_0 = 0;
	}

IL_0061:
	{
		V_5 = (bool)G_B8_0;
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0096;
		}
	}
	{
		// Texture t = Textures[gV];
		TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150* L_22 = __this->get_Textures_5();
		int32_t L_23 = V_0;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_6 = L_25;
		// if(t != null)
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_26 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_26, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_27;
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_0095;
		}
	}
	{
		// material.SetTexture("_MainTex", t);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29 = __this->get_material_4();
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_30 = V_6;
		NullCheck(L_29);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_29, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_30, /*hidden argument*/NULL);
	}

IL_0095:
	{
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncContextTextureFlip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncContextTextureFlip__ctor_m659C4FEE16F949F58383CDF99179E097EFE72A7A (OVRLipSyncContextTextureFlip_tF9349E352EDADCCC7A60DB9535C80B44B484315E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Frame_tA0234D25F233FE4D496EA062950D0B45B401A117_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Material material = null;
		__this->set_material_4((Material_t8927C00353A72755313F046D0CE85178AE8218EE *)NULL);
		// public Texture[] Textures = new Texture[OVRLipSync.VisemeCount];
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_0 = ((OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var))->get_VisemeCount_4();
		TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150* L_1 = (TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150*)(TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150*)SZArrayNew(TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_Textures_5(L_1);
		// public int smoothAmount = 70;
		__this->set_smoothAmount_6(((int32_t)70));
		// private OVRLipSyncContextBase lipsyncContext = null;
		__this->set_lipsyncContext_7((OVRLipSyncContextBase_tFB4239FE071E90C0FDC6853CF2A58263E24AE34F *)NULL);
		// private OVRLipSync.Frame oldFrame = new OVRLipSync.Frame();
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_2 = (Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 *)il2cpp_codegen_object_new(Frame_tA0234D25F233FE4D496EA062950D0B45B401A117_il2cpp_TypeInfo_var);
		Frame__ctor_mB064A35BA6D1678E1828B9A8F67980C32B4AE755(L_2, /*hidden argument*/NULL);
		__this->set_oldFrame_8(L_2);
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
// OVRLipSyncDebugConsole OVRLipSyncDebugConsole::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * OVRLipSyncDebugConsole_get_instance_m0DD963130333A7601012BA645E15C6C3652F6E0D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisOVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_m4F83BF5F42A90B3D8E76CC64A61A038333EFB81A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6A1CD0933415BD0D5EA2DB8E882891D1666E6A1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * V_3 = NULL;
	{
		// if (s_Instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * L_0 = ((OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var))->get_s_Instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_006e;
		}
	}
	{
		// s_Instance = FindObjectOfType(typeof(OVRLipSyncDebugConsole)) as OVRLipSyncDebugConsole;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_5;
		L_5 = Object_FindObjectOfType_m07215A5C789FC7C88754B64DFCF1313C55E2F6D2(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		((OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var))->set_s_Instance_7(((OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 *)IsInstClass((RuntimeObject*)L_5, OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var)));
		// if (s_Instance == null)
		OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * L_6 = ((OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var))->get_s_Instance_7();
		bool L_7;
		L_7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		// GameObject console = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_9, /*hidden argument*/NULL);
		V_2 = L_9;
		// console.AddComponent<OVRLipSyncDebugConsole>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_2;
		NullCheck(L_10);
		OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * L_11;
		L_11 = GameObject_AddComponent_TisOVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_m4F83BF5F42A90B3D8E76CC64A61A038333EFB81A(L_10, /*hidden argument*/GameObject_AddComponent_TisOVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_m4F83BF5F42A90B3D8E76CC64A61A038333EFB81A_RuntimeMethod_var);
		// console.name = "OVRLipSyncDebugConsole";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = V_2;
		NullCheck(L_12);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_12, _stringLiteralF6A1CD0933415BD0D5EA2DB8E882891D1666E6A1, /*hidden argument*/NULL);
		// s_Instance = FindObjectOfType(typeof(OVRLipSyncDebugConsole)) as OVRLipSyncDebugConsole;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_15;
		L_15 = Object_FindObjectOfType_m07215A5C789FC7C88754B64DFCF1313C55E2F6D2(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		((OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var))->set_s_Instance_7(((OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 *)IsInstClass((RuntimeObject*)L_15, OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var)));
	}

IL_006d:
	{
	}

IL_006e:
	{
		// return s_Instance;
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * L_16 = ((OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var))->get_s_Instance_7();
		V_3 = L_16;
		goto IL_0076;
	}

IL_0076:
	{
		// }
		OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * L_17 = V_3;
		return L_17;
	}
}
// System.Void OVRLipSyncDebugConsole::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncDebugConsole_Awake_m5320C498E8CEDFA4D9260928570F83A2CBFE9D62 (OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		((OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var))->set_s_Instance_7(__this);
		// Init();
		OVRLipSyncDebugConsole_Init_mB0E6910DE2AFD45A64C567FF952D7DA18587D790(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVRLipSyncDebugConsole::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncDebugConsole_Update_mE3DC8217DE2325993225ABCB409CD015B50D4251 (OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if(clearTimeoutOn == true)
		bool L_0 = __this->get_clearTimeoutOn_8();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		// clearTimeout -= Time.deltaTime;
		float L_2 = __this->get_clearTimeout_9();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_clearTimeout_9(((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)));
		// if(clearTimeout < 0.0f)
		float L_4 = __this->get_clearTimeout_9();
		V_1 = (bool)((((float)L_4) < ((float)(0.0f)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		// Clear();
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		OVRLipSyncDebugConsole_Clear_m5C3D7FBB2BE761768AC960CEE2B609FD38A1B242(/*hidden argument*/NULL);
		// clearTimeout = 0.0f;
		__this->set_clearTimeout_9((0.0f));
		// clearTimeoutOn = false;
		__this->set_clearTimeoutOn_8((bool)0);
	}

IL_0049:
	{
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncDebugConsole::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncDebugConsole_Init_mB0E6910DE2AFD45A64C567FF952D7DA18587D790 (OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76E32CC4A70E7FB1C8DEC57248F78E94572950DE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(textMsg == null)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_textMsg_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// Debug.LogWarning("DebugConsole Init WARNING::UI text not set. Will not be able to display anything.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral76E32CC4A70E7FB1C8DEC57248F78E94572950DE, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// Clear();
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		OVRLipSyncDebugConsole_Clear_m5C3D7FBB2BE761768AC960CEE2B609FD38A1B242(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVRLipSyncDebugConsole::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncDebugConsole_Log_m8A8BE6D5FFE5D2DC2CE5A6CE7DA4358D0C2C4E13 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OVRLipSyncDebugConsole.instance.AddMessage(message, Color.white);
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * L_0;
		L_0 = OVRLipSyncDebugConsole_get_instance_m0DD963130333A7601012BA645E15C6C3652F6E0D(/*hidden argument*/NULL);
		String_t* L_1 = ___message0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		NullCheck(L_0);
		OVRLipSyncDebugConsole_AddMessage_m889F54EF064BCB9A3A3666279B8E3A3EC246CFA4(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVRLipSyncDebugConsole::Log(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncDebugConsole_Log_m45F454F5A150608371078BF13BBF815AED6E17A3 (String_t* ___message0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OVRLipSyncDebugConsole.instance.AddMessage(message, color);
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * L_0;
		L_0 = OVRLipSyncDebugConsole_get_instance_m0DD963130333A7601012BA645E15C6C3652F6E0D(/*hidden argument*/NULL);
		String_t* L_1 = ___message0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___color1;
		NullCheck(L_0);
		OVRLipSyncDebugConsole_AddMessage_m889F54EF064BCB9A3A3666279B8E3A3EC246CFA4(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVRLipSyncDebugConsole::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncDebugConsole_Clear_m5C3D7FBB2BE761768AC960CEE2B609FD38A1B242 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OVRLipSyncDebugConsole.instance.ClearMessages();
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * L_0;
		L_0 = OVRLipSyncDebugConsole_get_instance_m0DD963130333A7601012BA645E15C6C3652F6E0D(/*hidden argument*/NULL);
		NullCheck(L_0);
		OVRLipSyncDebugConsole_ClearMessages_m94B421ED9BABA96EC6B076E97298B841E125183D(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVRLipSyncDebugConsole::ClearTimeout(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncDebugConsole_ClearTimeout_m5894FB834E8306DA4B7EC2A18E87D21756A380FF (float ___timeToClear0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OVRLipSyncDebugConsole.instance.SetClearTimeout(timeToClear);
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * L_0;
		L_0 = OVRLipSyncDebugConsole_get_instance_m0DD963130333A7601012BA645E15C6C3652F6E0D(/*hidden argument*/NULL);
		float L_1 = ___timeToClear0;
		NullCheck(L_0);
		OVRLipSyncDebugConsole_SetClearTimeout_m5F8FB28CDF4E088A916DF847BC29D1E3B78BE0E3(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVRLipSyncDebugConsole::AddMessage(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncDebugConsole_AddMessage_m889F54EF064BCB9A3A3666279B8E3A3EC246CFA4 (OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * __this, String_t* ___message0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// messages.Add(message);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = __this->get_messages_4();
		String_t* L_1 = ___message0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		// if(textMsg != null)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_textMsg_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		// textMsg.color = color;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_textMsg_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = ___color1;
		NullCheck(L_6);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
	}

IL_002b:
	{
		// Display();
		OVRLipSyncDebugConsole_Display_mF9232C7C902C392A0B7AC325077EBB8DBD1FC72C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVRLipSyncDebugConsole::ClearMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncDebugConsole_ClearMessages_m94B421ED9BABA96EC6B076E97298B841E125183D (OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * __this, const RuntimeMethod* method)
{
	{
		// messages.Clear();
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = __this->get_messages_4();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(26 /* System.Void System.Collections.ArrayList::Clear() */, L_0);
		// Display();
		OVRLipSyncDebugConsole_Display_mF9232C7C902C392A0B7AC325077EBB8DBD1FC72C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVRLipSyncDebugConsole::SetClearTimeout(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncDebugConsole_SetClearTimeout_m5F8FB28CDF4E088A916DF847BC29D1E3B78BE0E3 (OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * __this, float ___timeout0, const RuntimeMethod* method)
{
	{
		// clearTimeout   = timeout;
		float L_0 = ___timeout0;
		__this->set_clearTimeout_9(L_0);
		// clearTimeoutOn = true;
		__this->set_clearTimeoutOn_8((bool)1);
		// }
		return;
	}
}
// System.Void OVRLipSyncDebugConsole::Prune()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncDebugConsole_Prune_mA297EC6FADED72D67208AF1D7E6EAB927E074687 (OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (messages.Count > maxMessages)
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = __this->get_messages_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		int32_t L_2 = __this->get_maxMessages_5();
		V_1 = (bool)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0058;
		}
	}
	{
		// if (messages.Count <= 0)
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_4 = __this->get_messages_4();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_4);
		V_2 = (bool)((((int32_t)((((int32_t)L_5) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		// diff = 0;
		V_0 = 0;
		goto IL_0049;
	}

IL_0034:
	{
		// diff = messages.Count - maxMessages;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_7 = __this->get_messages_4();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_7);
		int32_t L_9 = __this->get_maxMessages_5();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9));
	}

IL_0049:
	{
		// messages.RemoveRange(0, (int)diff);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_10 = __this->get_messages_4();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(38 /* System.Void System.Collections.ArrayList::RemoveRange(System.Int32,System.Int32) */, L_10, 0, L_11);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncDebugConsole::Display()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncDebugConsole_Display_mF9232C7C902C392A0B7AC325077EBB8DBD1FC72C (OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// if (messages.Count > maxMessages)
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = __this->get_messages_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		int32_t L_2 = __this->get_maxMessages_5();
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// Prune();
		OVRLipSyncDebugConsole_Prune_mA297EC6FADED72D67208AF1D7E6EAB927E074687(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// if(textMsg != null)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_textMsg_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_00a4;
		}
	}
	{
		// textMsg.text = ""; // Clear text out
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_textMsg_6();
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// int x = 0;
		V_2 = 0;
		goto IL_0091;
	}

IL_0047:
	{
		// textMsg.text += (string)messages[x];
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_textMsg_6();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = L_8;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_9);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_11 = __this->get_messages_4();
		int32_t L_12 = V_2;
		NullCheck(L_11);
		RuntimeObject * L_13;
		L_13 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_11, L_12);
		String_t* L_14;
		L_14 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_10, ((String_t*)CastclassSealed((RuntimeObject*)L_13, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_14);
		// textMsg.text +='\n';
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = __this->get_textMsg_6();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = L_15;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_16);
		String_t* L_18;
		L_18 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_17, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_18);
		// x += 1;
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0091:
	{
		// while (x < messages.Count)
		int32_t L_20 = V_2;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_21 = __this->get_messages_4();
		NullCheck(L_21);
		int32_t L_22;
		L_22 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_21);
		V_3 = (bool)((((int32_t)L_20) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_3;
		if (L_23)
		{
			goto IL_0047;
		}
	}
	{
	}

IL_00a4:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncDebugConsole::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncDebugConsole__ctor_mE66541B5295C4D5BF94C931C4023A157E669B1EF (OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ArrayList messages = new ArrayList();
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)il2cpp_codegen_object_new(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B(L_0, /*hidden argument*/NULL);
		__this->set_messages_4(L_0);
		// public int       maxMessages = 15;             // The max number of messages displayed
		__this->set_maxMessages_5(((int32_t)15));
		// private bool     clearTimeoutOn = false;
		__this->set_clearTimeoutOn_8((bool)0);
		// private float    clearTimeout   = 0.0f;
		__this->set_clearTimeout_9((0.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OVRLipSyncDebugConsole::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncDebugConsole__cctor_m38CF5C76423814C9A7D6B25DB030FD64702388DD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static OVRLipSyncDebugConsole s_Instance = null;
		((OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011_il2cpp_TypeInfo_var))->set_s_Instance_7((OVRLipSyncDebugConsole_t043D8223BEFF8412A7CEA0ACC70A9ED1C10AF011 *)NULL);
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
// System.Single OVRLipSyncMicInput::get_MicFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OVRLipSyncMicInput_get_MicFrequency_mBE50651917085679EFBB7B3D47F6BFE036C11507 (OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return micFrequency; }
		int32_t L_0 = __this->get_micFrequency_8();
		V_0 = ((float)((float)L_0));
		goto IL_000b;
	}

IL_000b:
	{
		// get { return micFrequency; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void OVRLipSyncMicInput::set_MicFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncMicInput_set_MicFrequency_m03CFAF37EB47C4B25F4328A09DE6AFA319BAD61D (OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { micFrequency = (int)Mathf.Clamp((float)value, 0, 96000); }
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)((float)L_0)), (0.0f), (96000.0f), /*hidden argument*/NULL);
		__this->set_micFrequency_8(il2cpp_codegen_cast_double_to_int<int32_t>(L_1));
		// set { micFrequency = (int)Mathf.Clamp((float)value, 0, 96000); }
		return;
	}
}
// System.Void OVRLipSyncMicInput::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncMicInput_Awake_m2D4EA453E5F9C76C8F736739BECBE90BD6D501AD (OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!audioSource) audioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// if (!audioSource) audioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3;
		L_3 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_audioSource_4(L_3);
	}

IL_001f:
	{
		// if (!audioSource) return; // this should never happen
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = __this->get_audioSource_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_4, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// if (!audioSource) return; // this should never happen
		goto IL_0033;
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncMicInput::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncMicInput_Start_m46A5502A2FC5CFE0C02829B88317DDD9B2065FD1 (OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66 * __this, const RuntimeMethod* method)
{
	{
		// audioSource.loop = true;     // Set the AudioClip to loop
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_4();
		NullCheck(L_0);
		AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0(L_0, (bool)1, /*hidden argument*/NULL);
		// audioSource.mute = false;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_audioSource_4();
		NullCheck(L_1);
		AudioSource_set_mute_m69E2DFCF261D2D187ED756096B7E0DE622292C71(L_1, (bool)0, /*hidden argument*/NULL);
		// InitializeMicrophone();
		OVRLipSyncMicInput_InitializeMicrophone_m17CA7FC87DF546022974859B475DBC0AFB215311(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVRLipSyncMicInput::InitializeMicrophone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncMicInput_InitializeMicrophone_m17CA7FC87DF546022974859B475DBC0AFB215311 (OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (initialized)
		bool L_0 = __this->get_initialized_16();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		goto IL_0045;
	}

IL_000e:
	{
		// if (Microphone.devices.Length == 0)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2;
		L_2 = Microphone_get_devices_m550C09D23C4FF50A6F3E1A2198D741436CCB584A(/*hidden argument*/NULL);
		NullCheck(L_2);
		V_1 = (bool)((((int32_t)(((RuntimeArray*)L_2)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return;
		goto IL_0045;
	}

IL_001e:
	{
		// selectedDevice = Microphone.devices[0].ToString();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4;
		L_4 = Microphone_get_devices_m550C09D23C4FF50A6F3E1A2198D741436CCB584A(/*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		__this->set_selectedDevice_11(L_7);
		// micSelected = true;
		__this->set_micSelected_12((bool)1);
		// GetMicCaps();
		OVRLipSyncMicInput_GetMicCaps_mEBFC24F204D8604F8AD7BBE7007554C6508E8625(__this, /*hidden argument*/NULL);
		// initialized = true;
		__this->set_initialized_16((bool)1);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncMicInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncMicInput_Update_m3BC77DF8E050B4730F9523CE4E8BC3FE06180D5E (OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	{
		// if (!focused)
		bool L_0 = __this->get_focused_15();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// if (Microphone.IsRecording(selectedDevice))
		String_t* L_2 = __this->get_selectedDevice_11();
		bool L_3;
		L_3 = Microphone_IsRecording_mF5DE093DAB01451F89AAAAD2260F101B25A75EC4(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// StopMicrophone();
		OVRLipSyncMicInput_StopMicrophone_m446866E057DF1DF2314E01976B8A6B3418442D6B(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// return;
		goto IL_0185;
	}

IL_002c:
	{
		// if (!Application.isPlaying)
		bool L_5;
		L_5 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		// StopMicrophone();
		OVRLipSyncMicInput_StopMicrophone_m446866E057DF1DF2314E01976B8A6B3418442D6B(__this, /*hidden argument*/NULL);
		// return;
		goto IL_0185;
	}

IL_0045:
	{
		// if (!initialized)
		bool L_7 = __this->get_initialized_16();
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		// InitializeMicrophone();
		OVRLipSyncMicInput_InitializeMicrophone_m17CA7FC87DF546022974859B475DBC0AFB215311(__this, /*hidden argument*/NULL);
	}

IL_005b:
	{
		// audioSource.volume = (micInputVolume / 100);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_9 = __this->get_audioSource_4();
		float L_10 = __this->get_micInputVolume_7();
		NullCheck(L_9);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_9, ((float)((float)L_10/(float)(100.0f))), /*hidden argument*/NULL);
		// if (micControl == micActivation.HoldToSpeak)
		int32_t L_11 = __this->get_micControl_9();
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_00d2;
		}
	}
	{
		// if (Input.GetKey(micActivationKey))
		int32_t L_13 = __this->get_micActivationKey_10();
		bool L_14;
		L_14 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		// if (!Microphone.IsRecording(selectedDevice))
		String_t* L_16 = __this->get_selectedDevice_11();
		bool L_17;
		L_17 = Microphone_IsRecording_mF5DE093DAB01451F89AAAAD2260F101B25A75EC4(L_16, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_00b2;
		}
	}
	{
		// StartMicrophone();
		OVRLipSyncMicInput_StartMicrophone_m63B59F3A4EB4D63F654312585E2F830A3FC8BD7B(__this, /*hidden argument*/NULL);
	}

IL_00b2:
	{
		goto IL_00d1;
	}

IL_00b5:
	{
		// if (Microphone.IsRecording(selectedDevice))
		String_t* L_19 = __this->get_selectedDevice_11();
		bool L_20;
		L_20 = Microphone_IsRecording_mF5DE093DAB01451F89AAAAD2260F101B25A75EC4(L_19, /*hidden argument*/NULL);
		V_7 = L_20;
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_00d0;
		}
	}
	{
		// StopMicrophone();
		OVRLipSyncMicInput_StopMicrophone_m446866E057DF1DF2314E01976B8A6B3418442D6B(__this, /*hidden argument*/NULL);
	}

IL_00d0:
	{
	}

IL_00d1:
	{
	}

IL_00d2:
	{
		// if (micControl == micActivation.PushToSpeak)
		int32_t L_22 = __this->get_micControl_9();
		V_8 = (bool)((((int32_t)L_22) == ((int32_t)1))? 1 : 0);
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_012f;
		}
	}
	{
		// if (Input.GetKeyDown(micActivationKey))
		int32_t L_24 = __this->get_micActivationKey_10();
		bool L_25;
		L_25 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(L_24, /*hidden argument*/NULL);
		V_9 = L_25;
		bool L_26 = V_9;
		if (!L_26)
		{
			goto IL_012e;
		}
	}
	{
		// if (Microphone.IsRecording(selectedDevice))
		String_t* L_27 = __this->get_selectedDevice_11();
		bool L_28;
		L_28 = Microphone_IsRecording_mF5DE093DAB01451F89AAAAD2260F101B25A75EC4(L_27, /*hidden argument*/NULL);
		V_10 = L_28;
		bool L_29 = V_10;
		if (!L_29)
		{
			goto IL_0110;
		}
	}
	{
		// StopMicrophone();
		OVRLipSyncMicInput_StopMicrophone_m446866E057DF1DF2314E01976B8A6B3418442D6B(__this, /*hidden argument*/NULL);
		goto IL_012d;
	}

IL_0110:
	{
		// else if (!Microphone.IsRecording(selectedDevice))
		String_t* L_30 = __this->get_selectedDevice_11();
		bool L_31;
		L_31 = Microphone_IsRecording_mF5DE093DAB01451F89AAAAD2260F101B25A75EC4(L_30, /*hidden argument*/NULL);
		V_11 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_11;
		if (!L_32)
		{
			goto IL_012d;
		}
	}
	{
		// StartMicrophone();
		OVRLipSyncMicInput_StartMicrophone_m63B59F3A4EB4D63F654312585E2F830A3FC8BD7B(__this, /*hidden argument*/NULL);
	}

IL_012d:
	{
	}

IL_012e:
	{
	}

IL_012f:
	{
		// if (micControl == micActivation.ConstantSpeak)
		int32_t L_33 = __this->get_micControl_9();
		V_12 = (bool)((((int32_t)L_33) == ((int32_t)2))? 1 : 0);
		bool L_34 = V_12;
		if (!L_34)
		{
			goto IL_015d;
		}
	}
	{
		// if (!Microphone.IsRecording(selectedDevice))
		String_t* L_35 = __this->get_selectedDevice_11();
		bool L_36;
		L_36 = Microphone_IsRecording_mF5DE093DAB01451F89AAAAD2260F101B25A75EC4(L_35, /*hidden argument*/NULL);
		V_13 = (bool)((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_13;
		if (!L_37)
		{
			goto IL_015c;
		}
	}
	{
		// StartMicrophone();
		OVRLipSyncMicInput_StartMicrophone_m63B59F3A4EB4D63F654312585E2F830A3FC8BD7B(__this, /*hidden argument*/NULL);
	}

IL_015c:
	{
	}

IL_015d:
	{
		// if (enableMicSelectionGUI)
		bool L_38 = __this->get_enableMicSelectionGUI_5();
		V_14 = L_38;
		bool L_39 = V_14;
		if (!L_39)
		{
			goto IL_0185;
		}
	}
	{
		// if (Input.GetKeyDown(micSelectionGUIKey))
		int32_t L_40 = __this->get_micSelectionGUIKey_6();
		bool L_41;
		L_41 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(L_40, /*hidden argument*/NULL);
		V_15 = L_41;
		bool L_42 = V_15;
		if (!L_42)
		{
			goto IL_0184;
		}
	}
	{
		// micSelected = false;
		__this->set_micSelected_12((bool)0);
	}

IL_0184:
	{
	}

IL_0185:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncMicInput::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncMicInput_OnApplicationFocus_m77EFE7E91E2665E2BDD74F5242FB84BE509A448E (OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66 * __this, bool ___focus0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// focused = focus;
		bool L_0 = ___focus0;
		__this->set_focused_15(L_0);
		// if (!focused)
		bool L_1 = __this->get_focused_15();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// StopMicrophone();
		OVRLipSyncMicInput_StopMicrophone_m446866E057DF1DF2314E01976B8A6B3418442D6B(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncMicInput::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncMicInput_OnApplicationPause_mC0DF6C90BBC34FABFBB93A8D659FE40CBA8A8E1D (OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66 * __this, bool ___pauseStatus0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// focused = !pauseStatus;
		bool L_0 = ___pauseStatus0;
		__this->set_focused_15((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// if (!focused)
		bool L_1 = __this->get_focused_15();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// StopMicrophone();
		OVRLipSyncMicInput_StopMicrophone_m446866E057DF1DF2314E01976B8A6B3418442D6B(__this, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncMicInput::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncMicInput_OnDisable_mCD892DAE8604B2283163C999BCD53EE6285EE6C1 (OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66 * __this, const RuntimeMethod* method)
{
	{
		// StopMicrophone();
		OVRLipSyncMicInput_StopMicrophone_m446866E057DF1DF2314E01976B8A6B3418442D6B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVRLipSyncMicInput::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncMicInput_OnGUI_m8AFB4EB6986DCAF13D17947C4BB02E40815BBE51 (OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66 * __this, const RuntimeMethod* method)
{
	{
		// MicDeviceGUI((Screen.width / 2) - 150, (Screen.height / 2) - 75, 300, 50, 10, -300);
		int32_t L_0;
		L_0 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		OVRLipSyncMicInput_MicDeviceGUI_m05F9971B9E284DCBD6A696B648FD898527F76199(__this, ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_0/(int32_t)2)), (int32_t)((int32_t)150))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_1/(int32_t)2)), (int32_t)((int32_t)75))))), (300.0f), (50.0f), (10.0f), (-300.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVRLipSyncMicInput::MicDeviceGUI(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncMicInput_MicDeviceGUI_m05F9971B9E284DCBD6A696B648FD898527F76199 (OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66 * __this, float ___left0, float ___top1, float ___width2, float ___height3, float ___buttonSpaceTop4, float ___buttonSpaceLeft5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B4_0 = 0;
	{
		// if (Microphone.devices.Length >= 1 && enableMicSelectionGUI == true && micSelected == false)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0;
		L_0 = Microphone_get_devices_m550C09D23C4FF50A6F3E1A2198D741436CCB584A(/*hidden argument*/NULL);
		NullCheck(L_0);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) < ((int32_t)1)))
		{
			goto IL_001e;
		}
	}
	{
		bool L_1 = __this->get_enableMicSelectionGUI_5();
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		bool L_2 = __this->get_micSelected_12();
		G_B4_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B4_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_009d;
		}
	}
	{
		// for (int i = 0; i < Microphone.devices.Length; ++i)
		V_1 = 0;
		goto IL_008e;
	}

IL_0028:
	{
		// if (GUI.Button(new Rect(left + ((width + buttonSpaceLeft) * i),
		//                         top + ((height + buttonSpaceTop) * i), width, height),
		//                Microphone.devices[i].ToString()))
		float L_4 = ___left0;
		float L_5 = ___width2;
		float L_6 = ___buttonSpaceLeft5;
		int32_t L_7 = V_1;
		float L_8 = ___top1;
		float L_9 = ___height3;
		float L_10 = ___buttonSpaceTop4;
		int32_t L_11 = V_1;
		float L_12 = ___width2;
		float L_13 = ___height3;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_14), ((float)il2cpp_codegen_add((float)L_4, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_5, (float)L_6)), (float)((float)((float)L_7)))))), ((float)il2cpp_codegen_add((float)L_8, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_9, (float)L_10)), (float)((float)((float)L_11)))))), L_12, L_13, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15;
		L_15 = Microphone_get_devices_m550C09D23C4FF50A6F3E1A2198D741436CCB584A(/*hidden argument*/NULL);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		String_t* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_14, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		bool L_21 = V_2;
		if (!L_21)
		{
			goto IL_0089;
		}
	}
	{
		// StopMicrophone();
		OVRLipSyncMicInput_StopMicrophone_m446866E057DF1DF2314E01976B8A6B3418442D6B(__this, /*hidden argument*/NULL);
		// selectedDevice = Microphone.devices[i].ToString();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22;
		L_22 = Microphone_get_devices_m550C09D23C4FF50A6F3E1A2198D741436CCB584A(/*hidden argument*/NULL);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		String_t* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		__this->set_selectedDevice_11(L_26);
		// micSelected = true;
		__this->set_micSelected_12((bool)1);
		// GetMicCaps();
		OVRLipSyncMicInput_GetMicCaps_mEBFC24F204D8604F8AD7BBE7007554C6508E8625(__this, /*hidden argument*/NULL);
		// StartMicrophone();
		OVRLipSyncMicInput_StartMicrophone_m63B59F3A4EB4D63F654312585E2F830A3FC8BD7B(__this, /*hidden argument*/NULL);
	}

IL_0089:
	{
		// for (int i = 0; i < Microphone.devices.Length; ++i)
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_008e:
	{
		// for (int i = 0; i < Microphone.devices.Length; ++i)
		int32_t L_28 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29;
		L_29 = Microphone_get_devices_m550C09D23C4FF50A6F3E1A2198D741436CCB584A(/*hidden argument*/NULL);
		NullCheck(L_29);
		V_3 = (bool)((((int32_t)L_28) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))? 1 : 0);
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_0028;
		}
	}
	{
	}

IL_009d:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncMicInput::GetMicCaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncMicInput_GetMicCaps_mEBFC24F204D8604F8AD7BBE7007554C6508E8625 (OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7004DC2D2C6E911CE92A6C2C89FAF48B14571259);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// if (micSelected == false) return;
		bool L_0 = __this->get_micSelected_12();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (micSelected == false) return;
		goto IL_0081;
	}

IL_0010:
	{
		// Microphone.GetDeviceCaps(selectedDevice, out minFreq, out maxFreq);
		String_t* L_2 = __this->get_selectedDevice_11();
		int32_t* L_3 = __this->get_address_of_minFreq_13();
		int32_t* L_4 = __this->get_address_of_maxFreq_14();
		Microphone_GetDeviceCaps_m686FE02260047336BB7FC9EC01F349D682CA603E(L_2, (int32_t*)L_3, (int32_t*)L_4, /*hidden argument*/NULL);
		// if (minFreq == 0 && maxFreq == 0)
		int32_t L_5 = __this->get_minFreq_13();
		if (L_5)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_6 = __this->get_maxFreq_14();
		G_B5_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 0;
	}

IL_003c:
	{
		V_1 = (bool)G_B5_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0063;
		}
	}
	{
		// Debug.LogWarning("GetMicCaps warning:: min and max frequencies are 0");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral7004DC2D2C6E911CE92A6C2C89FAF48B14571259, /*hidden argument*/NULL);
		// minFreq = 44100;
		__this->set_minFreq_13(((int32_t)44100));
		// maxFreq = 44100;
		__this->set_maxFreq_14(((int32_t)44100));
	}

IL_0063:
	{
		// if (micFrequency > maxFreq)
		int32_t L_8 = __this->get_micFrequency_8();
		int32_t L_9 = __this->get_maxFreq_14();
		V_2 = (bool)((((int32_t)L_8) > ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0081;
		}
	}
	{
		// micFrequency = maxFreq;
		int32_t L_11 = __this->get_maxFreq_14();
		__this->set_micFrequency_8(L_11);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncMicInput::StartMicrophone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncMicInput_StartMicrophone_m63B59F3A4EB4D63F654312585E2F830A3FC8BD7B (OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	{
		// if (micSelected == false) return;
		bool L_0 = __this->get_micSelected_12();
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (micSelected == false) return;
		goto IL_00ac;
	}

IL_0013:
	{
		// audioSource.clip = Microphone.Start(selectedDevice, true, 1, micFrequency);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_audioSource_4();
		String_t* L_3 = __this->get_selectedDevice_11();
		int32_t L_4 = __this->get_micFrequency_8();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_5;
		L_5 = Microphone_Start_m7F08B42DC2B97BE649F7329C0FAC54125FE0AC5D(L_3, (bool)1, 1, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_2, L_5, /*hidden argument*/NULL);
		// Stopwatch timer = Stopwatch.StartNew();
		IL2CPP_RUNTIME_CLASS_INIT(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_6;
		L_6 = Stopwatch_StartNew_m526152085BB22CB969AF40B2775939C5C7F7F2F6(/*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0044;
	}

IL_003a:
	{
		// Thread.Sleep(50);
		Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(((int32_t)50), /*hidden argument*/NULL);
	}

IL_0044:
	{
		// while (!(Microphone.GetPosition(selectedDevice) > 0) && timer.Elapsed.TotalMilliseconds < 1000) {
		String_t* L_7 = __this->get_selectedDevice_11();
		int32_t L_8;
		L_8 = Microphone_GetPosition_m7D0A6CF146C1F716F0DF886223B119279DE1E587(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_9 = V_0;
		NullCheck(L_9);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_10;
		L_10 = Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6(L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		double L_11;
		L_11 = TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_3), /*hidden argument*/NULL);
		G_B7_0 = ((((double)L_11) < ((double)(1000.0)))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		V_2 = (bool)G_B7_0;
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_003a;
		}
	}
	{
		// if (Microphone.GetPosition(selectedDevice) <= 0)
		String_t* L_13 = __this->get_selectedDevice_11();
		int32_t L_14;
		L_14 = Microphone_GetPosition_m7D0A6CF146C1F716F0DF886223B119279DE1E587(L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_14) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00a0;
		}
	}
	{
		// throw new Exception("Timeout initializing microphone " + selectedDevice);
		String_t* L_16 = __this->get_selectedDevice_11();
		String_t* L_17;
		L_17 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6BC2B46FC07E5159ADEF81EE494E8DFEA65D2BEB)), L_16, /*hidden argument*/NULL);
		Exception_t * L_18 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_18, L_17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OVRLipSyncMicInput_StartMicrophone_m63B59F3A4EB4D63F654312585E2F830A3FC8BD7B_RuntimeMethod_var)));
	}

IL_00a0:
	{
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_19 = __this->get_audioSource_4();
		NullCheck(L_19);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_19, /*hidden argument*/NULL);
	}

IL_00ac:
	{
		// }
		return;
	}
}
// System.Void OVRLipSyncMicInput::StopMicrophone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncMicInput_StopMicrophone_m446866E057DF1DF2314E01976B8A6B3418442D6B (OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA_m6287587580820D781AEAFD33F22E6D3149EBACFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FDB97E8EAADF1BF16D2241C8AAAB2299EA06DF9);
		s_Il2CppMethodInitialized = true;
	}
	OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B6_0 = 0;
	{
		// if (micSelected == false) return;
		bool L_0 = __this->get_micSelected_12();
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (micSelected == false) return;
		goto IL_007a;
	}

IL_0010:
	{
		// if ((audioSource != null) &&
		//     (audioSource.clip != null) &&
		//     (audioSource.clip.name == "Microphone"))
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_audioSource_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = __this->get_audioSource_4();
		NullCheck(L_4);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_5;
		L_5 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = __this->get_audioSource_4();
		NullCheck(L_7);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_8;
		L_8 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, _stringLiteral5FDB97E8EAADF1BF16D2241C8AAAB2299EA06DF9, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_10));
		goto IL_004e;
	}

IL_004d:
	{
		G_B6_0 = 0;
	}

IL_004e:
	{
		V_2 = (bool)G_B6_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		// audioSource.Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_12 = __this->get_audioSource_4();
		NullCheck(L_12);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_12, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// OVRLipSyncContext context = GetComponent<OVRLipSyncContext>();
		OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * L_13;
		L_13 = Component_GetComponent_TisOVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA_m6287587580820D781AEAFD33F22E6D3149EBACFC(__this, /*hidden argument*/Component_GetComponent_TisOVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA_m6287587580820D781AEAFD33F22E6D3149EBACFC_RuntimeMethod_var);
		V_0 = L_13;
		// context.ResetContext();
		OVRLipSyncContext_t0C7CDB1CA7DF0B5F775E70AFB63B40AA20F200BA * L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = OVRLipSyncContextBase_ResetContext_mA037C4F5C56543348A9E307AA389AEDE916C43FB(L_14, /*hidden argument*/NULL);
		// Microphone.End(selectedDevice);
		String_t* L_16 = __this->get_selectedDevice_11();
		Microphone_End_mF41BC1D2BA47C6FC2C25BA106F99A5704ACE518F(L_16, /*hidden argument*/NULL);
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Single OVRLipSyncMicInput::GetAveragedVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OVRLipSyncMicInput_GetAveragedVolume_m9881C572E2A7E4BE827E565A7053C8D5CC91E3CC (OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return 0.0f;
		V_0 = (0.0f);
		goto IL_0009;
	}

IL_0009:
	{
		// }
		float L_0 = V_0;
		return L_0;
	}
}
// System.Void OVRLipSyncMicInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncMicInput__ctor_m3A0136EFCD454511BABD1B27C1B109BA3868A5D7 (OVRLipSyncMicInput_tE6C7F70FF6449C8935A521D22CB76C30CE6BCB66 * __this, const RuntimeMethod* method)
{
	{
		// public AudioSource audioSource = null;
		__this->set_audioSource_4((AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)NULL);
		// public bool enableMicSelectionGUI = false;
		__this->set_enableMicSelectionGUI_5((bool)0);
		// public KeyCode micSelectionGUIKey = KeyCode.M;
		__this->set_micSelectionGUIKey_6(((int32_t)109));
		// private float micInputVolume = 100;
		__this->set_micInputVolume_7((100.0f));
		// private int micFrequency = 48000;
		__this->set_micFrequency_8(((int32_t)48000));
		// public micActivation micControl = micActivation.ConstantSpeak;
		__this->set_micControl_9(2);
		// public KeyCode micActivationKey = KeyCode.Space;
		__this->set_micActivationKey_10(((int32_t)32));
		// private bool micSelected = false;
		__this->set_micSelected_12((bool)0);
		// private bool focused = true;
		__this->set_focused_15((bool)1);
		// private bool initialized = false;
		__this->set_initialized_16((bool)0);
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
// OVRLipSync/Frame OVRLipSyncSequence::GetFrameAtTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * OVRLipSyncSequence_GetFrameAtTime_m46F1B3BFC70C22B8289626F04C35A372501C16B3 (OVRLipSyncSequence_t67C1C061971274CF4F2264B46B14A4FAACE39799 * __this, float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m29F9D043CF093E440790C1319778284E00D24362_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7BC56355EB45C14AC64B0DFAED97EA461FE6500E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * V_0 = NULL;
	bool V_1 = false;
	float V_2 = 0.0f;
	Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * V_3 = NULL;
	int32_t G_B3_0 = 0;
	{
		// OVRLipSync.Frame frame = null;
		V_0 = (Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 *)NULL;
		// if (time < length && entries.Count > 0)
		float L_0 = ___time0;
		float L_1 = __this->get_length_5();
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_001c;
		}
	}
	{
		List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC * L_2 = __this->get_entries_4();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m29F9D043CF093E440790C1319778284E00D24362_inline(L_2, /*hidden argument*/List_1_get_Count_m29F9D043CF093E440790C1319778284E00D24362_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		// float percentComplete = time / length;
		float L_5 = ___time0;
		float L_6 = __this->get_length_5();
		V_2 = ((float)((float)L_5/(float)L_6));
		// frame = entries[(int)(entries.Count * percentComplete)];
		List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC * L_7 = __this->get_entries_4();
		List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC * L_8 = __this->get_entries_4();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m29F9D043CF093E440790C1319778284E00D24362_inline(L_8, /*hidden argument*/List_1_get_Count_m29F9D043CF093E440790C1319778284E00D24362_RuntimeMethod_var);
		float L_10 = V_2;
		NullCheck(L_7);
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_11;
		L_11 = List_1_get_Item_m7BC56355EB45C14AC64B0DFAED97EA461FE6500E_inline(L_7, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply((float)((float)((float)L_9)), (float)L_10))), /*hidden argument*/List_1_get_Item_m7BC56355EB45C14AC64B0DFAED97EA461FE6500E_RuntimeMethod_var);
		V_0 = L_11;
	}

IL_0047:
	{
		// return frame;
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_12 = V_0;
		V_3 = L_12;
		goto IL_004b;
	}

IL_004b:
	{
		// }
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_13 = V_3;
		return L_13;
	}
}
// System.Void OVRLipSyncSequence::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRLipSyncSequence__ctor_mC9FC06690D0946BB39CC84059FEE330EAC6DAF55 (OVRLipSyncSequence_t67C1C061971274CF4F2264B46B14A4FAACE39799 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6CFC543DA637FCF28B1AEB05DC0D6B3DD6C3BF49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<OVRLipSync.Frame> entries = new List<OVRLipSync.Frame>();
		List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC * L_0 = (List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC *)il2cpp_codegen_object_new(List_1_tA5EA1C91F20DCE1ACFC6FA82863E5C7E62A36FDC_il2cpp_TypeInfo_var);
		List_1__ctor_m6CFC543DA637FCF28B1AEB05DC0D6B3DD6C3BF49(L_0, /*hidden argument*/List_1__ctor_m6CFC543DA637FCF28B1AEB05DC0D6B3DD6C3BF49_RuntimeMethod_var);
		__this->set_entries_4(L_0);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void OVRNamedArrayAttribute::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRNamedArrayAttribute__ctor_m14FDA19B65F62698632630FB34D4A6704664FAFA (OVRNamedArrayAttribute_t1C1FFC7DD44295D9CB5A4115AFE953DC53348857 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___names0, const RuntimeMethod* method)
{
	{
		// public OVRNamedArrayAttribute( string[] names ) { this.names = names; }
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
		// public OVRNamedArrayAttribute( string[] names ) { this.names = names; }
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___names0;
		__this->set_names_0(L_0);
		// public OVRNamedArrayAttribute( string[] names ) { this.names = names; }
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
// System.Void OVRTouchpad::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRTouchpad_Create_m39D3E7A088DE03539469A417E40E1E88B46EF619 (const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void OVRTouchpad::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRTouchpad_Update_m1B22D90B43A840AA09A8B8E8C235F2546B46E92D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if(Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// moveAmountMouse = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var);
		((OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_StaticFields*)il2cpp_codegen_static_fields_for(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var))->set_moveAmountMouse_0(L_2);
		goto IL_0044;
	}

IL_0019:
	{
		// else if(Input.GetMouseButtonUp(0))
		bool L_3;
		L_3 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(0, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		// moveAmountMouse -= Input.mousePosition;
		IL2CPP_RUNTIME_CLASS_INIT(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ((OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_StaticFields*)il2cpp_codegen_static_fields_for(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var))->get_moveAmountMouse_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_5, L_6, /*hidden argument*/NULL);
		((OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_StaticFields*)il2cpp_codegen_static_fields_for(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var))->set_moveAmountMouse_0(L_7);
		// HandleInputMouse(ref moveAmountMouse);
		OVRTouchpad_HandleInputMouse_mEC5822000F971F6F77ED4FD6A5049C9C814CCE25((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(((OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_StaticFields*)il2cpp_codegen_static_fields_for(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var))->get_address_of_moveAmountMouse_0()), /*hidden argument*/NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void OVRTouchpad::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRTouchpad_OnDisable_mB6BBD3B7EEEA50C00BB2A7764A314E1A3C9DE63F (const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void OVRTouchpad::HandleInputMouse(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRTouchpad_HandleInputMouse_mEC5822000F971F6F77ED4FD6A5049C9C814CCE25 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___move0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRTouchpadCallback_1_Invoke_m565E1355551356D7F89DAF9BB11542B423B8AA26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (touchPadCallbacks == null)
		IL2CPP_RUNTIME_CLASS_INIT(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var);
		Delegate_t * L_0 = ((OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_StaticFields*)il2cpp_codegen_static_fields_for(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var))->get_touchPadCallbacks_2();
		V_1 = (bool)((((RuntimeObject*)(Delegate_t *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_00b0;
	}

IL_0013:
	{
		// OVRTouchpadCallback<TouchEvent> callback = touchPadCallbacks as OVRTouchpadCallback<TouchEvent>;
		IL2CPP_RUNTIME_CLASS_INIT(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var);
		Delegate_t * L_2 = ((OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_StaticFields*)il2cpp_codegen_static_fields_for(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var))->get_touchPadCallbacks_2();
		V_0 = ((OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B *)IsInstSealed((RuntimeObject*)L_2, OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B_il2cpp_TypeInfo_var));
		// if ( move.magnitude < minMovMagnitudeMouse)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = ___move0;
		float L_4;
		L_4 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_3, /*hidden argument*/NULL);
		float L_5 = ((OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_StaticFields*)il2cpp_codegen_static_fields_for(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var))->get_minMovMagnitudeMouse_1();
		V_2 = (bool)((((float)L_4) < ((float)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		// callback(TouchEvent.SingleTap);
		OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B * L_7 = V_0;
		NullCheck(L_7);
		OVRTouchpadCallback_1_Invoke_m565E1355551356D7F89DAF9BB11542B423B8AA26(L_7, 0, /*hidden argument*/OVRTouchpadCallback_1_Invoke_m565E1355551356D7F89DAF9BB11542B423B8AA26_RuntimeMethod_var);
		goto IL_00b0;
	}

IL_003b:
	{
		// move.Normalize();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = ___move0;
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_8, /*hidden argument*/NULL);
		// if (Mathf.Abs(move.x) > Mathf.Abs(move.y))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = ___move0;
		float L_10 = L_9->get_x_2();
		float L_11;
		L_11 = fabsf(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = ___move0;
		float L_13 = L_12->get_y_3();
		float L_14;
		L_14 = fabsf(L_13);
		V_3 = (bool)((((float)L_11) > ((float)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0088;
		}
	}
	{
		// if (move.x > 0.0f)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_16 = ___move0;
		float L_17 = L_16->get_x_2();
		V_4 = (bool)((((float)L_17) > ((float)(0.0f)))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_007d;
		}
	}
	{
		// callback(TouchEvent.Left);
		OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B * L_19 = V_0;
		NullCheck(L_19);
		OVRTouchpadCallback_1_Invoke_m565E1355551356D7F89DAF9BB11542B423B8AA26(L_19, 2, /*hidden argument*/OVRTouchpadCallback_1_Invoke_m565E1355551356D7F89DAF9BB11542B423B8AA26_RuntimeMethod_var);
		goto IL_0085;
	}

IL_007d:
	{
		// callback(TouchEvent.Right);
		OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B * L_20 = V_0;
		NullCheck(L_20);
		OVRTouchpadCallback_1_Invoke_m565E1355551356D7F89DAF9BB11542B423B8AA26(L_20, 3, /*hidden argument*/OVRTouchpadCallback_1_Invoke_m565E1355551356D7F89DAF9BB11542B423B8AA26_RuntimeMethod_var);
	}

IL_0085:
	{
		goto IL_00af;
	}

IL_0088:
	{
		// if (move.y > 0.0f)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_21 = ___move0;
		float L_22 = L_21->get_y_3();
		V_5 = (bool)((((float)L_22) > ((float)(0.0f)))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00a6;
		}
	}
	{
		// callback(TouchEvent.Down);
		OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B * L_24 = V_0;
		NullCheck(L_24);
		OVRTouchpadCallback_1_Invoke_m565E1355551356D7F89DAF9BB11542B423B8AA26(L_24, 5, /*hidden argument*/OVRTouchpadCallback_1_Invoke_m565E1355551356D7F89DAF9BB11542B423B8AA26_RuntimeMethod_var);
		goto IL_00ae;
	}

IL_00a6:
	{
		// callback(TouchEvent.Up);
		OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B * L_25 = V_0;
		NullCheck(L_25);
		OVRTouchpadCallback_1_Invoke_m565E1355551356D7F89DAF9BB11542B423B8AA26(L_25, 4, /*hidden argument*/OVRTouchpadCallback_1_Invoke_m565E1355551356D7F89DAF9BB11542B423B8AA26_RuntimeMethod_var);
	}

IL_00ae:
	{
	}

IL_00af:
	{
	}

IL_00b0:
	{
		// }
		return;
	}
}
// System.Void OVRTouchpad::AddListener(OVRTouchpad/OVRTouchpadCallback`1<OVRTouchpad/TouchEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRTouchpad_AddListener_mB6E87E1283F42D9B28F6458950594BE6BE9CE6FA (OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// touchPadCallbacks = (OVRTouchpadCallback<TouchEvent>)touchPadCallbacks + handler;
		IL2CPP_RUNTIME_CLASS_INIT(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var);
		Delegate_t * L_0 = ((OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_StaticFields*)il2cpp_codegen_static_fields_for(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var))->get_touchPadCallbacks_2();
		OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B * L_1 = ___handler0;
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(((OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B *)CastclassSealed((RuntimeObject*)L_0, OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B_il2cpp_TypeInfo_var)), L_1, /*hidden argument*/NULL);
		((OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_StaticFields*)il2cpp_codegen_static_fields_for(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var))->set_touchPadCallbacks_2(((OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B *)CastclassSealed((RuntimeObject*)L_2, OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void OVRTouchpad::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRTouchpad__cctor_m6F41A5B176746E410335EE0B2BCC3DF5E80628B2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisOVRTouchpadHelper_tA41F61CC41849A4352DE8927B9A8E10604D2BFA1_m80B34FFFEB591DB6EC62A33ED4DAB816EBF84C91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA31AC86A8134636138FF75403386F05BF552C75F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static float   minMovMagnitudeMouse = 25.0f;
		((OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_StaticFields*)il2cpp_codegen_static_fields_for(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var))->set_minMovMagnitudeMouse_1((25.0f));
		// static public Delegate touchPadCallbacks = null;
		((OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_StaticFields*)il2cpp_codegen_static_fields_for(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var))->set_touchPadCallbacks_2((Delegate_t *)NULL);
		// static private OVRTouchpadHelper touchpadHelper =
		// ( new GameObject("OVRTouchpadHelper") ).AddComponent< OVRTouchpadHelper >();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_0, _stringLiteralA31AC86A8134636138FF75403386F05BF552C75F, /*hidden argument*/NULL);
		NullCheck(L_0);
		OVRTouchpadHelper_tA41F61CC41849A4352DE8927B9A8E10604D2BFA1 * L_1;
		L_1 = GameObject_AddComponent_TisOVRTouchpadHelper_tA41F61CC41849A4352DE8927B9A8E10604D2BFA1_m80B34FFFEB591DB6EC62A33ED4DAB816EBF84C91(L_0, /*hidden argument*/GameObject_AddComponent_TisOVRTouchpadHelper_tA41F61CC41849A4352DE8927B9A8E10604D2BFA1_m80B34FFFEB591DB6EC62A33ED4DAB816EBF84C91_RuntimeMethod_var);
		((OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_StaticFields*)il2cpp_codegen_static_fields_for(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var))->set_touchpadHelper_3(L_1);
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
// System.Void OVRTouchpadHelper::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRTouchpadHelper_Awake_m29D402C81656729D3711A86A037018982E28AF51 (OVRTouchpadHelper_tA41F61CC41849A4352DE8927B9A8E10604D2BFA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVRTouchpadHelper::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRTouchpadHelper_Start_m0D8AD7F7FD6FBE902F6E4308CCC7DA178DFD1F3C (OVRTouchpadHelper_tA41F61CC41849A4352DE8927B9A8E10604D2BFA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRTouchpadCallback_1__ctor_m5D93A4018425521E2BBFF1A0A9CFD48077D15070_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRTouchpadHelper_LocalTouchEventCallback_m133316FF5130A9004C05FB65785DBE0828EC474D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OVRTouchpad.AddListener(LocalTouchEventCallback);
		OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B * L_0 = (OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B *)il2cpp_codegen_object_new(OVRTouchpadCallback_1_tE27A41375D5362B593DB6F1CA18B69657AA1D36B_il2cpp_TypeInfo_var);
		OVRTouchpadCallback_1__ctor_m5D93A4018425521E2BBFF1A0A9CFD48077D15070(L_0, __this, (intptr_t)((intptr_t)OVRTouchpadHelper_LocalTouchEventCallback_m133316FF5130A9004C05FB65785DBE0828EC474D_RuntimeMethod_var), /*hidden argument*/OVRTouchpadCallback_1__ctor_m5D93A4018425521E2BBFF1A0A9CFD48077D15070_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var);
		OVRTouchpad_AddListener_mB6E87E1283F42D9B28F6458950594BE6BE9CE6FA(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVRTouchpadHelper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRTouchpadHelper_Update_mD67E0B5A405E669DE23624768394F63614FBA64E (OVRTouchpadHelper_tA41F61CC41849A4352DE8927B9A8E10604D2BFA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OVRTouchpad.Update();
		IL2CPP_RUNTIME_CLASS_INIT(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var);
		OVRTouchpad_Update_m1B22D90B43A840AA09A8B8E8C235F2546B46E92D(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVRTouchpadHelper::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRTouchpadHelper_OnDisable_m0CDD6C98824C4A3F96687A7774C75B56B17EBDC0 (OVRTouchpadHelper_tA41F61CC41849A4352DE8927B9A8E10604D2BFA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OVRTouchpad.OnDisable();
		IL2CPP_RUNTIME_CLASS_INIT(OVRTouchpad_t97540D042D0D082F7C20000750F89D2B2761BC1E_il2cpp_TypeInfo_var);
		OVRTouchpad_OnDisable_mB6BBD3B7EEEA50C00BB2A7764A314E1A3C9DE63F(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OVRTouchpadHelper::LocalTouchEventCallback(OVRTouchpad/TouchEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRTouchpadHelper_LocalTouchEventCallback_m133316FF5130A9004C05FB65785DBE0828EC474D (OVRTouchpadHelper_tA41F61CC41849A4352DE8927B9A8E10604D2BFA1 * __this, int32_t ___touchEvent0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch(touchEvent)
		int32_t L_0 = ___touchEvent0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0029;
			}
			case 3:
			{
				goto IL_002b;
			}
			case 4:
			{
				goto IL_002d;
			}
			case 5:
			{
				goto IL_002f;
			}
		}
	}
	{
		goto IL_0031;
	}

IL_0025:
	{
		// break;
		goto IL_0031;
	}

IL_0027:
	{
		// break;
		goto IL_0031;
	}

IL_0029:
	{
		// break;
		goto IL_0031;
	}

IL_002b:
	{
		// break;
		goto IL_0031;
	}

IL_002d:
	{
		// break;
		goto IL_0031;
	}

IL_002f:
	{
		// break;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void OVRTouchpadHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRTouchpadHelper__ctor_m51F719C3484F49A4A89DB785ED1BCBE8F5B1EDEF (OVRTouchpadHelper_tA41F61CC41849A4352DE8927B9A8E10604D2BFA1 * __this, const RuntimeMethod* method)
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
// System.Void OVRLipSync/Frame::CopyInput(OVRLipSync/Frame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_CopyInput_mEFAD79327D78D7FF4AC8FAF78728FF9E0D299DA4 (Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * __this, Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * ___input0, const RuntimeMethod* method)
{
	{
		// frameNumber = input.frameNumber;
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_0 = ___input0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_frameNumber_0();
		__this->set_frameNumber_0(L_1);
		// frameDelay = input.frameDelay;
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_2 = ___input0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_frameDelay_1();
		__this->set_frameDelay_1(L_3);
		// input.Visemes.CopyTo(Visemes, 0);
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_4 = ___input0;
		NullCheck(L_4);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = L_4->get_Visemes_2();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = __this->get_Visemes_2();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_5);
		Array_CopyTo_m6AF950973942E09BAB1F21B055BBD2CD58C980B2((RuntimeArray *)(RuntimeArray *)L_5, (RuntimeArray *)(RuntimeArray *)L_6, 0, /*hidden argument*/NULL);
		// laughterScore = input.laughterScore;
		Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * L_7 = ___input0;
		NullCheck(L_7);
		float L_8 = L_7->get_laughterScore_3();
		__this->set_laughterScore_3(L_8);
		// }
		return;
	}
}
// System.Void OVRLipSync/Frame::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_Reset_m560B5FCD12159132A33A18D4706107510D053C3C (Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// frameNumber = 0;
		__this->set_frameNumber_0(0);
		// frameDelay = 0;
		__this->set_frameDelay_1(0);
		// Array.Clear(Visemes, 0, VisemeCount);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = __this->get_Visemes_2();
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var))->get_VisemeCount_4();
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_0, 0, L_1, /*hidden argument*/NULL);
		// laughterScore = 0;
		__this->set_laughterScore_3((0.0f));
		// }
		return;
	}
}
// System.Void OVRLipSync/Frame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame__ctor_mB064A35BA6D1678E1828B9A8F67980C32B4AE755 (Frame_tA0234D25F233FE4D496EA062950D0B45B401A117 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float[] Visemes = new float[VisemeCount];       // Array of floats for viseme frame. Size of Viseme Count, above
		IL2CPP_RUNTIME_CLASS_INIT(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var);
		int32_t L_0 = ((OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_StaticFields*)il2cpp_codegen_static_fields_for(OVRLipSync_t6876888C33E13C8080D6251819E090972C904BFE_il2cpp_TypeInfo_var))->get_VisemeCount_4();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_Visemes_2(L_1);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_gshared_inline (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method)
{
	{
		InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_0 = (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E )__this->get_current_3();
		return (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
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
