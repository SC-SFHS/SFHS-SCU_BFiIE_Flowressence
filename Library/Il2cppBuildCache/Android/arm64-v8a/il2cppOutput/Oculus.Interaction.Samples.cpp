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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<UnityEngine.Collision>
struct Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45;
// System.Action`1<Oculus.Interaction.HandPosing.ISnapper>
struct Action_1_t2483A43350769D985C20817A778E42F80CCB9EAB;
// System.Action`1<Oculus.Interaction.InteractableStateChangeArgs>
struct Action_1_tD1FACC57890C3F97507C66A0BD334276B729D681;
// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs>
struct Action_1_t0A3F609812F44FBC6D0100C3B0D45CB6EA87E86F;
// System.Action`1<OVRCameraRig>
struct Action_1_t75B6371B869E36A42B0DFFC8D8B2630F1D659A6C;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<Oculus.Interaction.PointerArgs>
struct Action_1_t39DE2215E4079E3A5846C0CCA369BAC17EDE1B52;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42;
// Oculus.Interaction.CollisionInteractionRegistry`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable>
struct CollisionInteractionRegistry_2_t81701500B16FD68D2C2044E10948E72C38D291EB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA;
// System.Collections.Generic.HashSet`1<Oculus.Interaction.HandPosing.HandGrabInteractor>
struct HashSet_1_t616DFB3BC0AADCBC021640A6F0048E466B43500A;
// Oculus.Interaction.InteractableRegistry`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable>
struct InteractableRegistry_2_t48A65E9D8942E964A81C7F3E47157B655B8F80AE;
// Oculus.Interaction.Interactor`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable>
struct Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5;
// Oculus.Interaction.Interactor`2<System.Object,System.Object>
struct Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708;
// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8;
// System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.HandGrabPoint>
struct List_1_t9727992C543E8154629F46125BCBCA4724EC3994;
// System.Collections.Generic.List`1<Oculus.Interaction.IMonoBehaviourFilter>
struct List_1_tE7317ADB6619598F60E6887CE70C0CEA5228B605;
// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>
struct List_1_t5D9BA5285B790623DA8EEFFB341186B3DFB9A2F2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0;
// Oculus.Interaction.MultiAction`1<Oculus.Interaction.HandPosing.HandGrabInteractable>
struct MultiAction_1_t9EBE27F45EE895C8DE6047020A17956AAD5D6DA4;
// Oculus.Interaction.MultiAction`1<Oculus.Interaction.HandPosing.HandGrabInteractor>
struct MultiAction_1_tAFAD6D8921EBC70927058CFA212A0658C451D998;
// Oculus.Interaction.MultiAction`1<System.Object>
struct MultiAction_1_tF72F1B4A8CBD8B10E4E59AD4CBF562C3A61D8A03;
// Oculus.Interaction.HandPosing.SnapAddress`1<Oculus.Interaction.HandPosing.HandGrabInteractable>
struct SnapAddress_1_t9CBCA4F1619BB9C99F852C6F37BA34BB4E756E9D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37;
// Oculus.Interaction.ActiveStateSelector[]
struct ActiveStateSelectorU5BU5D_tE574AE6A6896557335C43BD170E2D639639E1B72;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// System.Decimal[]
struct DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// Oculus.Interaction.Input.HandRef[]
struct HandRefU5BU5D_tAEAD2F0AD5C1FBFB99C3434574E41678929407D0;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2;
// Oculus.Interaction.TwoGrabFreeTransformer[]
struct TwoGrabFreeTransformerU5BU5D_tC630549403FDD2FF20D841CF605013CA698B5523;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Oculus.Interaction.ActiveStateSelector
struct ActiveStateSelector_t51C3BFDADBBFB1B4F82C6AB8B4A9334BEDDDB3C6;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// Oculus.Interaction.AudioPhysics
struct AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// Oculus.Interaction.AudioTrigger
struct AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// Oculus.Interaction.Samples.CarouselView
struct CarouselView_t77A98CAF9321FDC3BF0186F229F9449402526024;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// Oculus.Interaction.Samples.ColorChanger
struct ColorChanger_tAB17D273524FADE6C4DA19DCCAB5F510ECF6989A;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Oculus.Interaction.Samples.CountdownTimer
struct CountdownTimer_tDD91BB7F46D12C91085C089E1E9E3326B069723B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Oculus.Interaction.Samples.EnableTargetOnStart
struct EnableTargetOnStart_t8889D6C4B4233172FE2A3C3E58DE2F1611641AB0;
// Oculus.Interaction.Samples.FadeTextAfterActive
struct FadeTextAfterActive_t64553A5A3A66DC0BC56D3397113E96D1642AD1EB;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Oculus.Interaction.HandPosing.GrabPointsPoseFinder
struct GrabPointsPoseFinder_tE2E287FDC3FA30C239056FB7568999F5F825D3C2;
// Oculus.Interaction.GrabAPI.HandGrabAPI
struct HandGrabAPI_tAE7FF60657D0195A8E54B763C21975D0B7A1EFDE;
// Oculus.Interaction.HandPosing.HandGrabInteractable
struct HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8;
// Oculus.Interaction.HandPosing.HandGrabInteractor
struct HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3;
// Oculus.Interaction.Grab.HandGrabbableData
struct HandGrabbableData_tC120EF0DE73D407AA088074CD892C14E178A1BF6;
// Oculus.Interaction.HandPosing.HandPose
struct HandPose_t5EF6A427F8FB46E831F00147341A89F721F954EF;
// Oculus.Interaction.Input.HandRef
struct HandRef_tA7E4A60786B2D1BCE6D014EE0EC0DB85EFA46109;
// Oculus.Interaction.HandVisual
struct HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E;
// Oculus.Interaction.HandWristOffset
struct HandWristOffset_t945AAAB3FC06634817E62D7648DAAF946EA06CAE;
// Oculus.Interaction.Samples.HideHandVisualOnGrab
struct HideHandVisualOnGrab_t3BFB67203DE710975A7593C3776BCF49CA5D2CC3;
// Oculus.Interaction.IActiveState
struct IActiveState_t9ED8A6D2006A777A58B338429D68D725FDC8A567;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Oculus.Interaction.IGrabbable
struct IGrabbable_t85F0AF4DFF2AE722B5F87108B2BF988D7C15167D;
// Oculus.Interaction.Input.IHand
struct IHand_t7C2ACF56E071205D133C9EF102466E99ADF01DB9;
// Oculus.Interaction.IInteractableView
struct IInteractableView_tDB565FF06732C41D644F9AB5D0FBA3DCF14FEEAC;
// Oculus.Interaction.IMovement
struct IMovement_t5419F13B414B0340AF7BA2DAD330917909A6250D;
// Oculus.Interaction.IMovementProvider
struct IMovementProvider_t27BD4945FC620329E5B814FB5CF1D97616510E24;
// Oculus.Interaction.IPointableElement
struct IPointableElement_t842C048A71D3ECDAA023437399BE8654657B3C7D;
// Oculus.Interaction.ISelector
struct ISelector_t17D1DAB7B3CC700454D32262AD849DBEBF416F63;
// Oculus.Interaction.HandPosing.ISnapData
struct ISnapData_tFEF82C1BC9BC5197DDC49287F3181B70DB60554C;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_t4D7C2C115C9A65FB6B24304700B1E9167410EB54;
// Oculus.Interaction.Throw.IVelocityCalculator
struct IVelocityCalculator_t0315AFA26F0D955B6EBEFC498B21A3D3A1AD160D;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF;
// Oculus.Interaction.Samples.LookAtTarget
struct LookAtTarget_t321B379F9BAC9086781C65D6E21FDA3E7C475F60;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// Oculus.Interaction.MaterialPropertyBlockEditor
struct MaterialPropertyBlockEditor_t3AB1FDF8D622BDD44D966A6C95625560B1B90E90;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// OVRCameraRig
struct OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ParticleSystemRenderer
struct ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// Oculus.Interaction.PhysicsGrabbable
struct PhysicsGrabbable_t32A8CECFA034959A018A73E45071AD35532759F4;
// Oculus.Interaction.Samples.PoseUseSample
struct PoseUseSample_t5F67B23F2A56359B4A89978FD7DF852C17C5546A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// Oculus.Interaction.Samples.RespawnOnDrop
struct RespawnOnDrop_tDE333DF978DB0B142E5DF10D17651CDDBC0DD583;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// Oculus.Interaction.Samples.RotationAudioEvents
struct RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Oculus.Interaction.Samples.ScaleAudioEvents
struct ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8;
// Oculus.Interaction.Samples.ScaleModifier
struct ScaleModifier_t3EDA5B92F3B1EB3DC38D018A36C26EB9BC3FB520;
// Oculus.Interaction.Samples.SceneLoader
struct SceneLoader_t54FAEF49CF78EF9DB3F31680C5CC45D1F8517953;
// Oculus.Interaction.Samples.ShouldHideHandOnGrab
struct ShouldHideHandOnGrab_tBAB0E4F5C7010765C850D4EB572D73D237A41AB6;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496;
// Oculus.Interaction.Samples.StayInView
struct StayInView_tB746CF1F17389C17740687630E63F792A3878924;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714;
// TMPro.TMP_Style
struct TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E;
// TMPro.TMP_Text
struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262;
// TMPro.TMP_TextElement
struct TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547;
// TMPro.TextMeshPro
struct TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Oculus.Interaction.TwoGrabFreeTransformer
struct TwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD;
// Oculus.Interaction.UniqueIdentifier
struct UniqueIdentifier_t6B285BB7F8B76C663C4349D6959DB637E621A42A;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// Oculus.Interaction.AudioPhysics/CollisionEvents
struct CollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Oculus.Interaction.Samples.PoseUseSample/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t217CDA7E0E60088E9A3310535A9A2450FAC81405;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2
struct U3CLoadSceneAsyncU3Ed__2_tE31CB71FCD564091D8102F37B397A377EC4BD592;
// Oculus.Interaction.TwoGrabFreeTransformer/TwoGrabFreeConstraints
struct TwoGrabFreeConstraints_tB4BC435AB8182341F30DAD6D7958C67633977A40;
// Oculus.Interaction.AudioPhysics/CollisionEvents/<>c
struct U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInteractableView_tDB565FF06732C41D644F9AB5D0FBA3DCF14FEEAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadSceneAsyncU3Ed__2_tE31CB71FCD564091D8102F37B397A377EC4BD592_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t217CDA7E0E60088E9A3310535A9A2450FAC81405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral162A4868EBE00F18DBA99EC479A8D2DA4A132B14;
IL2CPP_EXTERN_C String_t* _stringLiteral54F33D635DC3480D7270690885F7439D8A90665F;
IL2CPP_EXTERN_C String_t* _stringLiteral5A3030C93994C7904C8D0B2123C9DA2847419DA1;
IL2CPP_EXTERN_C String_t* _stringLiteral79DD8BBE11B832C07F2CE936B84C600A02323848;
IL2CPP_EXTERN_C String_t* _stringLiteralA996E89984993C1214F09508F6494D695F957301;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mC78A558235B290D6FDC6576BBCED82A6FFE3E78F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m9EFCE0FD810C793AAB24A94691EF69C7E29DCF92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNotNull_TisAudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802_m8B3DAD5CF8DB4A7A29102A962347E5C035487291_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNotNull_TisHandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E_m28CB8A3CA65EC1333325307FD925D8F8096A68DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNotNull_TisIInteractableView_tDB565FF06732C41D644F9AB5D0FBA3DCF14FEEAC_m02CF2DD3E16D4A62D9BA5A40B6D30974A69A29B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNotNull_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m472A3A05E8307EBBAFE0D6C5937F8CB0AD9B5F76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNotNull_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m08B75D79491A6947D8A99DE27C2EC7477C948A36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNotNull_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m630CDAC07C2316825382B6F38081EC2879EEE8C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNotNull_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m4FA39878BCE461AF1878E6216BB95FD00B7FD624_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNotNull_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mA85DE49E66654AC5B621D2709476E0A44DD6500E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioPhysics_HandleCollisionEnter_m2F8D82564AA56E56D034672BE59B8566FE22565F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisHandRef_tA7E4A60786B2D1BCE6D014EE0EC0DB85EFA46109_m33FE23F7F7A2AFA52FEFFBA52E5674424DDCCBCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisTwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD_m66FE97365814F31124DE1FBD3DCFFA3F3AFB5308_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E_m2D03DD8BE806789D99D8195919E0C7FB92E87C3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m255309575EBBBA3AB5D2CFD28F82585AC2526FDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisTextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_m80991F175CE468C274C70C04833DFBE4D331A71D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisAudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84_mB64D908189B563B64FD5F152FBFD45ADD6394C60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisShouldHideHandOnGrab_tBAB0E4F5C7010765C850D4EB572D73D237A41AB6_mF00A165AEB1B14D5B581FE830DAEC87EA29AC4DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interactor_2_get_SelectedInteractable_m0C2818658FABEC6333463FC4FD6F3EE5BB31AA04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interactor_2_get_State_m90651D75A2B476AB6B28B329D20436E36F6DCABD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4D91153F51A554F55F330AEF69766A4579378C8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mEE45F80AF58DFD847597677B813703152E468678_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA7F3A9988682FD71873AC72212E2F2A65DE06079_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1C98EA9359999773111E0918F7CE4783B66413F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisOVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517_mCD0D2DA6EF2EE7BAF6D2611A748177C0E8894A31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadSceneAsyncU3Ed__2_System_Collections_IEnumerator_Reset_m0990444B68DE9956FA0D5E9FF01F966F380CE504_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__4_0_m34FFF3992C196443CD5B47F88F3CA418F6014A2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CStartU3Eb__0_mD8522E04F31A7F9582C1BCFD9863726D235E9760_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CStartU3Eb__1_mB74D7C12A6F4D7970B557D2C1FC4BEF383E1FF24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_RuntimeMethod_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ActiveStateSelectorU5BU5D_tE574AE6A6896557335C43BD170E2D639639E1B72;
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct HandRefU5BU5D_tAEAD2F0AD5C1FBFB99C3434574E41678929407D0;
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
struct MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct TwoGrabFreeTransformerU5BU5D_tC630549403FDD2FF20D841CF605013CA698B5523;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t0C31FF55301D67AD8BA4E3E380A9BA5F9A8D81C8 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8, ____items_1)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get__items_1() const { return ____items_1; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8_StaticFields, ____emptyArray_5)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
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

struct Il2CppArrayBounds;

// System.Array


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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
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

// Oculus.Interaction.Samples.PoseUseSample/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t217CDA7E0E60088E9A3310535A9A2450FAC81405  : public RuntimeObject
{
public:
	// System.Int32 Oculus.Interaction.Samples.PoseUseSample/<>c__DisplayClass4_0::poseNumber
	int32_t ___poseNumber_0;
	// Oculus.Interaction.Samples.PoseUseSample Oculus.Interaction.Samples.PoseUseSample/<>c__DisplayClass4_0::<>4__this
	PoseUseSample_t5F67B23F2A56359B4A89978FD7DF852C17C5546A * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_poseNumber_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t217CDA7E0E60088E9A3310535A9A2450FAC81405, ___poseNumber_0)); }
	inline int32_t get_poseNumber_0() const { return ___poseNumber_0; }
	inline int32_t* get_address_of_poseNumber_0() { return &___poseNumber_0; }
	inline void set_poseNumber_0(int32_t value)
	{
		___poseNumber_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t217CDA7E0E60088E9A3310535A9A2450FAC81405, ___U3CU3E4__this_1)); }
	inline PoseUseSample_t5F67B23F2A56359B4A89978FD7DF852C17C5546A * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline PoseUseSample_t5F67B23F2A56359B4A89978FD7DF852C17C5546A ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(PoseUseSample_t5F67B23F2A56359B4A89978FD7DF852C17C5546A * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2
struct U3CLoadSceneAsyncU3Ed__2_tE31CB71FCD564091D8102F37B397A377EC4BD592  : public RuntimeObject
{
public:
	// System.Int32 Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2::sceneName
	String_t* ___sceneName_2;
	// Oculus.Interaction.Samples.SceneLoader Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2::<>4__this
	SceneLoader_t54FAEF49CF78EF9DB3F31680C5CC45D1F8517953 * ___U3CU3E4__this_3;
	// UnityEngine.AsyncOperation Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2::<asyncLoad>5__1
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___U3CasyncLoadU3E5__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__2_tE31CB71FCD564091D8102F37B397A377EC4BD592, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__2_tE31CB71FCD564091D8102F37B397A377EC4BD592, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_sceneName_2() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__2_tE31CB71FCD564091D8102F37B397A377EC4BD592, ___sceneName_2)); }
	inline String_t* get_sceneName_2() const { return ___sceneName_2; }
	inline String_t** get_address_of_sceneName_2() { return &___sceneName_2; }
	inline void set_sceneName_2(String_t* value)
	{
		___sceneName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__2_tE31CB71FCD564091D8102F37B397A377EC4BD592, ___U3CU3E4__this_3)); }
	inline SceneLoader_t54FAEF49CF78EF9DB3F31680C5CC45D1F8517953 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline SceneLoader_t54FAEF49CF78EF9DB3F31680C5CC45D1F8517953 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(SceneLoader_t54FAEF49CF78EF9DB3F31680C5CC45D1F8517953 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CasyncLoadU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__2_tE31CB71FCD564091D8102F37B397A377EC4BD592, ___U3CasyncLoadU3E5__1_4)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_U3CasyncLoadU3E5__1_4() const { return ___U3CasyncLoadU3E5__1_4; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_U3CasyncLoadU3E5__1_4() { return &___U3CasyncLoadU3E5__1_4; }
	inline void set_U3CasyncLoadU3E5__1_4(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___U3CasyncLoadU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CasyncLoadU3E5__1_4), (void*)value);
	}
};


// Oculus.Interaction.AudioPhysics/CollisionEvents/<>c
struct U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3_StaticFields
{
public:
	// Oculus.Interaction.AudioPhysics/CollisionEvents/<>c Oculus.Interaction.AudioPhysics/CollisionEvents/<>c::<>9
	U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3 * ___U3CU3E9_0;
	// System.Action`1<UnityEngine.Collision> Oculus.Interaction.AudioPhysics/CollisionEvents/<>c::<>9__4_0
	Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___itemStack_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_itemStack_0() const { return ___itemStack_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___itemStack_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_itemStack_0() const { return ___itemStack_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_DefaultItem_2)); }
	inline float get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline float* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(float value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___itemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* get_itemStack_0() const { return ___itemStack_0; }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_DefaultItem_2)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
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

// Oculus.Interaction.ImpactAudio
struct ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F 
{
public:
	// Oculus.Interaction.AudioTrigger Oculus.Interaction.ImpactAudio::_hardCollisionSound
	AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * ____hardCollisionSound_0;
	// Oculus.Interaction.AudioTrigger Oculus.Interaction.ImpactAudio::_softCollisionSound
	AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * ____softCollisionSound_1;

public:
	inline static int32_t get_offset_of__hardCollisionSound_0() { return static_cast<int32_t>(offsetof(ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F, ____hardCollisionSound_0)); }
	inline AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * get__hardCollisionSound_0() const { return ____hardCollisionSound_0; }
	inline AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 ** get_address_of__hardCollisionSound_0() { return &____hardCollisionSound_0; }
	inline void set__hardCollisionSound_0(AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * value)
	{
		____hardCollisionSound_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hardCollisionSound_0), (void*)value);
	}

	inline static int32_t get_offset_of__softCollisionSound_1() { return static_cast<int32_t>(offsetof(ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F, ____softCollisionSound_1)); }
	inline AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * get__softCollisionSound_1() const { return ____softCollisionSound_1; }
	inline AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 ** get_address_of__softCollisionSound_1() { return &____softCollisionSound_1; }
	inline void set__softCollisionSound_1(AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * value)
	{
		____softCollisionSound_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____softCollisionSound_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Oculus.Interaction.ImpactAudio
struct ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F_marshaled_pinvoke
{
	AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * ____hardCollisionSound_0;
	AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * ____softCollisionSound_1;
};
// Native definition for COM marshalling of Oculus.Interaction.ImpactAudio
struct ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F_marshaled_com
{
	AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * ____hardCollisionSound_0;
	AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * ____softCollisionSound_1;
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


// TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___material_3)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_3() const { return ___material_3; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fallbackMaterial_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
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


// Oculus.Interaction.MinMaxPair
struct MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 
{
public:
	// System.Boolean Oculus.Interaction.MinMaxPair::_useRandomRange
	bool ____useRandomRange_0;
	// System.Single Oculus.Interaction.MinMaxPair::_min
	float ____min_1;
	// System.Single Oculus.Interaction.MinMaxPair::_max
	float ____max_2;

public:
	inline static int32_t get_offset_of__useRandomRange_0() { return static_cast<int32_t>(offsetof(MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95, ____useRandomRange_0)); }
	inline bool get__useRandomRange_0() const { return ____useRandomRange_0; }
	inline bool* get_address_of__useRandomRange_0() { return &____useRandomRange_0; }
	inline void set__useRandomRange_0(bool value)
	{
		____useRandomRange_0 = value;
	}

	inline static int32_t get_offset_of__min_1() { return static_cast<int32_t>(offsetof(MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95, ____min_1)); }
	inline float get__min_1() const { return ____min_1; }
	inline float* get_address_of__min_1() { return &____min_1; }
	inline void set__min_1(float value)
	{
		____min_1 = value;
	}

	inline static int32_t get_offset_of__max_2() { return static_cast<int32_t>(offsetof(MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95, ____max_2)); }
	inline float get__max_2() const { return ____max_2; }
	inline float* get_address_of__max_2() { return &____max_2; }
	inline void set__max_2(float value)
	{
		____max_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Oculus.Interaction.MinMaxPair
struct MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95_marshaled_pinvoke
{
	int32_t ____useRandomRange_0;
	float ____min_1;
	float ____max_2;
};
// Native definition for COM marshalling of Oculus.Interaction.MinMaxPair
struct MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95_marshaled_com
{
	int32_t ____useRandomRange_0;
	float ____min_1;
	float ____max_2;
};

// Oculus.Interaction.HandPosing.PoseMeasureParameters
struct PoseMeasureParameters_t75F95753B7ADEA4ADD70A4D3A22AA7A510E57877 
{
public:
	// System.Single Oculus.Interaction.HandPosing.PoseMeasureParameters::_maxDistance
	float ____maxDistance_0;
	// System.Single Oculus.Interaction.HandPosing.PoseMeasureParameters::_positionRotationWeight
	float ____positionRotationWeight_1;

public:
	inline static int32_t get_offset_of__maxDistance_0() { return static_cast<int32_t>(offsetof(PoseMeasureParameters_t75F95753B7ADEA4ADD70A4D3A22AA7A510E57877, ____maxDistance_0)); }
	inline float get__maxDistance_0() const { return ____maxDistance_0; }
	inline float* get_address_of__maxDistance_0() { return &____maxDistance_0; }
	inline void set__maxDistance_0(float value)
	{
		____maxDistance_0 = value;
	}

	inline static int32_t get_offset_of__positionRotationWeight_1() { return static_cast<int32_t>(offsetof(PoseMeasureParameters_t75F95753B7ADEA4ADD70A4D3A22AA7A510E57877, ____positionRotationWeight_1)); }
	inline float get__positionRotationWeight_1() const { return ____positionRotationWeight_1; }
	inline float* get_address_of__positionRotationWeight_1() { return &____positionRotationWeight_1; }
	inline void set__positionRotationWeight_1(float value)
	{
		____positionRotationWeight_1 = value;
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


// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 
{
public:
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// TMPro.TMP_Offset
struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 
{
public:
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;

public:
	inline static int32_t get_offset_of_m_Left_0() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Left_0)); }
	inline float get_m_Left_0() const { return ___m_Left_0; }
	inline float* get_address_of_m_Left_0() { return &___m_Left_0; }
	inline void set_m_Left_0(float value)
	{
		___m_Left_0 = value;
	}

	inline static int32_t get_offset_of_m_Right_1() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Right_1)); }
	inline float get_m_Right_1() const { return ___m_Right_1; }
	inline float* get_address_of_m_Right_1() { return &___m_Right_1; }
	inline void set_m_Right_1(float value)
	{
		___m_Right_1 = value;
	}

	inline static int32_t get_offset_of_m_Top_2() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Top_2)); }
	inline float get_m_Top_2() const { return ___m_Top_2; }
	inline float* get_address_of_m_Top_2() { return &___m_Top_2; }
	inline void set_m_Top_2(float value)
	{
		___m_Top_2 = value;
	}

	inline static int32_t get_offset_of_m_Bottom_3() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Bottom_3)); }
	inline float get_m_Bottom_3() const { return ___m_Bottom_3; }
	inline float* get_address_of_m_Bottom_3() { return &___m_Bottom_3; }
	inline void set_m_Bottom_3(float value)
	{
		___m_Bottom_3 = value;
	}
};

struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields
{
public:
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___k_ZeroOffset_4;

public:
	inline static int32_t get_offset_of_k_ZeroOffset_4() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields, ___k_ZeroOffset_4)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_k_ZeroOffset_4() const { return ___k_ZeroOffset_4; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_k_ZeroOffset_4() { return &___k_ZeroOffset_4; }
	inline void set_k_ZeroOffset_4(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___k_ZeroOffset_4 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F 
{
public:
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___character_0)); }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * get_character_0() const { return ___character_0; }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C ** get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * value)
	{
		___character_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_0), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___material_2)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_2() const { return ___material_2; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_2), (void*)value);
	}

	inline static int32_t get_offset_of_materialIndex_3() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___materialIndex_3)); }
	inline int32_t get_materialIndex_3() const { return ___materialIndex_3; }
	inline int32_t* get_address_of_materialIndex_3() { return &___materialIndex_3; }
	inline void set_materialIndex_3(int32_t value)
	{
		___materialIndex_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_pinvoke
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_com
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B 
{
public:
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B, ___m_Array_0)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_m_Array_0() const { return ___m_Array_0; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Count_1() { return static_cast<int32_t>(offsetof(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B, ___m_Count_1)); }
	inline int32_t get_m_Count_1() const { return ___m_Count_1; }
	inline int32_t* get_address_of_m_Count_1() { return &___m_Count_1; }
	inline void set_m_Count_1(int32_t value)
	{
		___m_Count_1 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___itemStack_0)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_itemStack_0() const { return ___itemStack_0; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_DefaultItem_2)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___itemStack_0)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_itemStack_0() const { return ___itemStack_0; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_DefaultItem_2)); }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
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

// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Body_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Body_2)); }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * get_m_Body_2() const { return ___m_Body_2; }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** get_address_of_m_Body_2() { return &___m_Body_2; }
	inline void set_m_Body_2(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * value)
	{
		___m_Body_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Body_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};

// TMPro.ColorMode
struct ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09, ___value___2)); }
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

// TMPro.Extents
struct Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___max_3;

public:
	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___min_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_min_2() const { return ___min_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___max_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_max_3() const { return ___max_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___max_3 = value;
	}
};

struct Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields
{
public:
	// TMPro.Extents TMPro.Extents::zero
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___uninitialized_1;

public:
	inline static int32_t get_offset_of_zero_0() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___zero_0)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_zero_0() const { return ___zero_0; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_zero_0() { return &___zero_0; }
	inline void set_zero_0(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___zero_0 = value;
	}

	inline static int32_t get_offset_of_uninitialized_1() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___uninitialized_1)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_uninitialized_1() const { return ___uninitialized_1; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_uninitialized_1() { return &___uninitialized_1; }
	inline void set_uninitialized_1(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___uninitialized_1 = value;
	}
};


// Oculus.Interaction.GrabAPI.FingerRequirement
struct FingerRequirement_tD1EDD079815892F37200801A60597A2398A81AA3 
{
public:
	// System.Int32 Oculus.Interaction.GrabAPI.FingerRequirement::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FingerRequirement_tD1EDD079815892F37200801A60597A2398A81AA3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.GrabAPI.FingerUnselectMode
struct FingerUnselectMode_tD00CA9D60F356335C40132763EF63A16E66AF7C2 
{
public:
	// System.Int32 Oculus.Interaction.GrabAPI.FingerUnselectMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FingerUnselectMode_tD00CA9D60F356335C40132763EF63A16E66AF7C2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontStyles
struct FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.Grab.GrabTypeFlags
struct GrabTypeFlags_t1473566A5E5E8261DCC7EFEED689A8B90AF8017C 
{
public:
	// System.Int32 Oculus.Interaction.Grab.GrabTypeFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GrabTypeFlags_t1473566A5E5E8261DCC7EFEED689A8B90AF8017C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.HandPosing.HandAlignType
struct HandAlignType_t535B210017F6FC82F3DEA198BF30AC057B3D2405 
{
public:
	// System.Int32 Oculus.Interaction.HandPosing.HandAlignType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandAlignType_t535B210017F6FC82F3DEA198BF30AC057B3D2405, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.Input.Handedness
struct Handedness_tEB0C4A1C9050B998705E7134F47D2368BD692786 
{
public:
	// System.Int32 Oculus.Interaction.Input.Handedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_tEB0C4A1C9050B998705E7134F47D2368BD692786, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.HighlightState
struct HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 
{
public:
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___padding_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___color_0)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_0() const { return ___color_0; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_padding_1() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___padding_1)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_padding_1() const { return ___padding_1; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_padding_1() { return &___padding_1; }
	inline void set_padding_1(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___padding_1 = value;
	}
};


// TMPro.HorizontalAlignmentOptions
struct HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193 
{
public:
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.InteractableState
struct InteractableState_tA9B703B04AA3473E94B51A1EE56DD821D239E75C 
{
public:
	// System.Int32 Oculus.Interaction.InteractableState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractableState_tA9B703B04AA3473E94B51A1EE56DD821D239E75C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.InteractorState
struct InteractorState_t8A238DB833AC007D1ECFBE81CBC5D89FDEAD13F6 
{
public:
	// System.Int32 Oculus.Interaction.InteractorState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractorState_t8A238DB833AC007D1ECFBE81CBC5D89FDEAD13F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.MaskingTypes
struct MaskingTypes_t0CDA999B819C7FDED898736492CA0E70E4163477 
{
public:
	// System.Int32 TMPro.MaskingTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MaskingTypes_t0CDA999B819C7FDED898736492CA0E70E4163477, ___value___2)); }
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

// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Space
struct Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextElementType
struct TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextAlignmentOptions
struct TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextureMappingOptions
struct TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VertexGradient
struct VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topLeft_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topRight_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topRight_1() const { return ___topRight_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomLeft_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomRight_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VerticalAlignmentOptions
struct VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326 
{
public:
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.Samples.RotationAudioEvents/Direction
struct Direction_t8F4491BE1C22B2BFE3393708B180F85500140064 
{
public:
	// System.Int32 Oculus.Interaction.Samples.RotationAudioEvents/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_t8F4491BE1C22B2BFE3393708B180F85500140064, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.Samples.ScaleAudioEvents/Direction
struct Direction_tA860E0B28856A53E4DEA96DE8004D3539450117C 
{
public:
	// System.Int32 Oculus.Interaction.Samples.ScaleAudioEvents/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tA860E0B28856A53E4DEA96DE8004D3539450117C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_Text/TextInputSources
struct TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0 
{
public:
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___itemStack_0)); }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* get_itemStack_0() const { return ___itemStack_0; }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___itemStack_0)); }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* get_itemStack_0() const { return ___itemStack_0; }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_DefaultItem_2)); }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___itemStack_0)); }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* get_itemStack_0() const { return ___itemStack_0; }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
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


// Oculus.Interaction.GrabAPI.GrabbingRule
struct GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF 
{
public:
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_thumbRequirement
	int32_t ____thumbRequirement_0;
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_indexRequirement
	int32_t ____indexRequirement_1;
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_middleRequirement
	int32_t ____middleRequirement_2;
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_ringRequirement
	int32_t ____ringRequirement_3;
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_pinkyRequirement
	int32_t ____pinkyRequirement_4;
	// Oculus.Interaction.GrabAPI.FingerUnselectMode Oculus.Interaction.GrabAPI.GrabbingRule::_unselectMode
	int32_t ____unselectMode_5;

public:
	inline static int32_t get_offset_of__thumbRequirement_0() { return static_cast<int32_t>(offsetof(GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF, ____thumbRequirement_0)); }
	inline int32_t get__thumbRequirement_0() const { return ____thumbRequirement_0; }
	inline int32_t* get_address_of__thumbRequirement_0() { return &____thumbRequirement_0; }
	inline void set__thumbRequirement_0(int32_t value)
	{
		____thumbRequirement_0 = value;
	}

	inline static int32_t get_offset_of__indexRequirement_1() { return static_cast<int32_t>(offsetof(GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF, ____indexRequirement_1)); }
	inline int32_t get__indexRequirement_1() const { return ____indexRequirement_1; }
	inline int32_t* get_address_of__indexRequirement_1() { return &____indexRequirement_1; }
	inline void set__indexRequirement_1(int32_t value)
	{
		____indexRequirement_1 = value;
	}

	inline static int32_t get_offset_of__middleRequirement_2() { return static_cast<int32_t>(offsetof(GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF, ____middleRequirement_2)); }
	inline int32_t get__middleRequirement_2() const { return ____middleRequirement_2; }
	inline int32_t* get_address_of__middleRequirement_2() { return &____middleRequirement_2; }
	inline void set__middleRequirement_2(int32_t value)
	{
		____middleRequirement_2 = value;
	}

	inline static int32_t get_offset_of__ringRequirement_3() { return static_cast<int32_t>(offsetof(GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF, ____ringRequirement_3)); }
	inline int32_t get__ringRequirement_3() const { return ____ringRequirement_3; }
	inline int32_t* get_address_of__ringRequirement_3() { return &____ringRequirement_3; }
	inline void set__ringRequirement_3(int32_t value)
	{
		____ringRequirement_3 = value;
	}

	inline static int32_t get_offset_of__pinkyRequirement_4() { return static_cast<int32_t>(offsetof(GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF, ____pinkyRequirement_4)); }
	inline int32_t get__pinkyRequirement_4() const { return ____pinkyRequirement_4; }
	inline int32_t* get_address_of__pinkyRequirement_4() { return &____pinkyRequirement_4; }
	inline void set__pinkyRequirement_4(int32_t value)
	{
		____pinkyRequirement_4 = value;
	}

	inline static int32_t get_offset_of__unselectMode_5() { return static_cast<int32_t>(offsetof(GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF, ____unselectMode_5)); }
	inline int32_t get__unselectMode_5() const { return ____unselectMode_5; }
	inline int32_t* get_address_of__unselectMode_5() { return &____unselectMode_5; }
	inline void set__unselectMode_5(int32_t value)
	{
		____unselectMode_5 = value;
	}
};

struct GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF_StaticFields
{
public:
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::<DefaultPalmRule>k__BackingField
	GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF  ___U3CDefaultPalmRuleU3Ek__BackingField_6;
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::<DefaultPinchRule>k__BackingField
	GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF  ___U3CDefaultPinchRuleU3Ek__BackingField_7;
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::<FullGrab>k__BackingField
	GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF  ___U3CFullGrabU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CDefaultPalmRuleU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF_StaticFields, ___U3CDefaultPalmRuleU3Ek__BackingField_6)); }
	inline GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF  get_U3CDefaultPalmRuleU3Ek__BackingField_6() const { return ___U3CDefaultPalmRuleU3Ek__BackingField_6; }
	inline GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF * get_address_of_U3CDefaultPalmRuleU3Ek__BackingField_6() { return &___U3CDefaultPalmRuleU3Ek__BackingField_6; }
	inline void set_U3CDefaultPalmRuleU3Ek__BackingField_6(GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF  value)
	{
		___U3CDefaultPalmRuleU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultPinchRuleU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF_StaticFields, ___U3CDefaultPinchRuleU3Ek__BackingField_7)); }
	inline GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF  get_U3CDefaultPinchRuleU3Ek__BackingField_7() const { return ___U3CDefaultPinchRuleU3Ek__BackingField_7; }
	inline GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF * get_address_of_U3CDefaultPinchRuleU3Ek__BackingField_7() { return &___U3CDefaultPinchRuleU3Ek__BackingField_7; }
	inline void set_U3CDefaultPinchRuleU3Ek__BackingField_7(GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF  value)
	{
		___U3CDefaultPinchRuleU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CFullGrabU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF_StaticFields, ___U3CFullGrabU3Ek__BackingField_8)); }
	inline GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF  get_U3CFullGrabU3Ek__BackingField_8() const { return ___U3CFullGrabU3Ek__BackingField_8; }
	inline GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF * get_address_of_U3CFullGrabU3Ek__BackingField_8() { return &___U3CFullGrabU3Ek__BackingField_8; }
	inline void set_U3CFullGrabU3Ek__BackingField_8(GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF  value)
	{
		___U3CFullGrabU3Ek__BackingField_8 = value;
	}
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 
{
public:
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineExtents_19)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___lineExtents_19 = value;
	}
};


// System.Action`1<UnityEngine.Collision>
struct Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45  : public MulticastDelegate_t
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


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_startOfLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___startOfLineAscender_13)); }
	inline float get_startOfLineAscender_13() const { return ___startOfLineAscender_13; }
	inline float* get_address_of_startOfLineAscender_13() { return &___startOfLineAscender_13; }
	inline void set_startOfLineAscender_13(float value)
	{
		___startOfLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineAscender_14)); }
	inline float get_maxLineAscender_14() const { return ___maxLineAscender_14; }
	inline float* get_address_of_maxLineAscender_14() { return &___maxLineAscender_14; }
	inline void set_maxLineAscender_14(float value)
	{
		___maxLineAscender_14 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineDescender_15)); }
	inline float get_maxLineDescender_15() const { return ___maxLineDescender_15; }
	inline float* get_address_of_maxLineDescender_15() { return &___maxLineDescender_15; }
	inline void set_maxLineDescender_15(float value)
	{
		___maxLineDescender_15 = value;
	}

	inline static int32_t get_offset_of_pageAscender_16() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___pageAscender_16)); }
	inline float get_pageAscender_16() const { return ___pageAscender_16; }
	inline float* get_address_of_pageAscender_16() { return &___pageAscender_16; }
	inline void set_pageAscender_16(float value)
	{
		___pageAscender_16 = value;
	}

	inline static int32_t get_offset_of_horizontalAlignment_17() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___horizontalAlignment_17)); }
	inline int32_t get_horizontalAlignment_17() const { return ___horizontalAlignment_17; }
	inline int32_t* get_address_of_horizontalAlignment_17() { return &___horizontalAlignment_17; }
	inline void set_horizontalAlignment_17(int32_t value)
	{
		___horizontalAlignment_17 = value;
	}

	inline static int32_t get_offset_of_marginLeft_18() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginLeft_18)); }
	inline float get_marginLeft_18() const { return ___marginLeft_18; }
	inline float* get_address_of_marginLeft_18() { return &___marginLeft_18; }
	inline void set_marginLeft_18(float value)
	{
		___marginLeft_18 = value;
	}

	inline static int32_t get_offset_of_marginRight_19() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginRight_19)); }
	inline float get_marginRight_19() const { return ___marginRight_19; }
	inline float* get_address_of_marginRight_19() { return &___marginRight_19; }
	inline void set_marginRight_19(float value)
	{
		___marginRight_19 = value;
	}

	inline static int32_t get_offset_of_xAdvance_20() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___xAdvance_20)); }
	inline float get_xAdvance_20() const { return ___xAdvance_20; }
	inline float* get_address_of_xAdvance_20() { return &___xAdvance_20; }
	inline void set_xAdvance_20(float value)
	{
		___xAdvance_20 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_21() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredWidth_21)); }
	inline float get_preferredWidth_21() const { return ___preferredWidth_21; }
	inline float* get_address_of_preferredWidth_21() { return &___preferredWidth_21; }
	inline void set_preferredWidth_21(float value)
	{
		___preferredWidth_21 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_22() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredHeight_22)); }
	inline float get_preferredHeight_22() const { return ___preferredHeight_22; }
	inline float* get_address_of_preferredHeight_22() { return &___preferredHeight_22; }
	inline void set_preferredHeight_22(float value)
	{
		___preferredHeight_22 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_23() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previousLineScale_23)); }
	inline float get_previousLineScale_23() const { return ___previousLineScale_23; }
	inline float* get_address_of_previousLineScale_23() { return &___previousLineScale_23; }
	inline void set_previousLineScale_23(float value)
	{
		___previousLineScale_23 = value;
	}

	inline static int32_t get_offset_of_wordCount_24() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___wordCount_24)); }
	inline int32_t get_wordCount_24() const { return ___wordCount_24; }
	inline int32_t* get_address_of_wordCount_24() { return &___wordCount_24; }
	inline void set_wordCount_24(int32_t value)
	{
		___wordCount_24 = value;
	}

	inline static int32_t get_offset_of_fontStyle_25() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontStyle_25)); }
	inline int32_t get_fontStyle_25() const { return ___fontStyle_25; }
	inline int32_t* get_address_of_fontStyle_25() { return &___fontStyle_25; }
	inline void set_fontStyle_25(int32_t value)
	{
		___fontStyle_25 = value;
	}

	inline static int32_t get_offset_of_italicAngle_26() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngle_26)); }
	inline int32_t get_italicAngle_26() const { return ___italicAngle_26; }
	inline int32_t* get_address_of_italicAngle_26() { return &___italicAngle_26; }
	inline void set_italicAngle_26(int32_t value)
	{
		___italicAngle_26 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_27() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontScaleMultiplier_27)); }
	inline float get_fontScaleMultiplier_27() const { return ___fontScaleMultiplier_27; }
	inline float* get_address_of_fontScaleMultiplier_27() { return &___fontScaleMultiplier_27; }
	inline void set_fontScaleMultiplier_27(float value)
	{
		___fontScaleMultiplier_27 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_28() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontSize_28)); }
	inline float get_currentFontSize_28() const { return ___currentFontSize_28; }
	inline float* get_address_of_currentFontSize_28() { return &___currentFontSize_28; }
	inline void set_currentFontSize_28(float value)
	{
		___currentFontSize_28 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_29() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineOffset_29)); }
	inline float get_baselineOffset_29() const { return ___baselineOffset_29; }
	inline float* get_address_of_baselineOffset_29() { return &___baselineOffset_29; }
	inline void set_baselineOffset_29(float value)
	{
		___baselineOffset_29 = value;
	}

	inline static int32_t get_offset_of_lineOffset_30() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineOffset_30)); }
	inline float get_lineOffset_30() const { return ___lineOffset_30; }
	inline float* get_address_of_lineOffset_30() { return &___lineOffset_30; }
	inline void set_lineOffset_30(float value)
	{
		___lineOffset_30 = value;
	}

	inline static int32_t get_offset_of_isDrivenLineSpacing_31() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isDrivenLineSpacing_31)); }
	inline bool get_isDrivenLineSpacing_31() const { return ___isDrivenLineSpacing_31; }
	inline bool* get_address_of_isDrivenLineSpacing_31() { return &___isDrivenLineSpacing_31; }
	inline void set_isDrivenLineSpacing_31(bool value)
	{
		___isDrivenLineSpacing_31 = value;
	}

	inline static int32_t get_offset_of_glyphHorizontalAdvanceAdjustment_32() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___glyphHorizontalAdvanceAdjustment_32)); }
	inline float get_glyphHorizontalAdvanceAdjustment_32() const { return ___glyphHorizontalAdvanceAdjustment_32; }
	inline float* get_address_of_glyphHorizontalAdvanceAdjustment_32() { return &___glyphHorizontalAdvanceAdjustment_32; }
	inline void set_glyphHorizontalAdvanceAdjustment_32(float value)
	{
		___glyphHorizontalAdvanceAdjustment_32 = value;
	}

	inline static int32_t get_offset_of_cSpace_33() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___cSpace_33)); }
	inline float get_cSpace_33() const { return ___cSpace_33; }
	inline float* get_address_of_cSpace_33() { return &___cSpace_33; }
	inline void set_cSpace_33(float value)
	{
		___cSpace_33 = value;
	}

	inline static int32_t get_offset_of_mSpace_34() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___mSpace_34)); }
	inline float get_mSpace_34() const { return ___mSpace_34; }
	inline float* get_address_of_mSpace_34() { return &___mSpace_34; }
	inline void set_mSpace_34(float value)
	{
		___mSpace_34 = value;
	}

	inline static int32_t get_offset_of_textInfo_35() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___textInfo_35)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_textInfo_35() const { return ___textInfo_35; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_textInfo_35() { return &___textInfo_35; }
	inline void set_textInfo_35(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___textInfo_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_35), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_36() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineInfo_36)); }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  get_lineInfo_36() const { return ___lineInfo_36; }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 * get_address_of_lineInfo_36() { return &___lineInfo_36; }
	inline void set_lineInfo_36(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  value)
	{
		___lineInfo_36 = value;
	}

	inline static int32_t get_offset_of_vertexColor_37() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___vertexColor_37)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_vertexColor_37() const { return ___vertexColor_37; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_vertexColor_37() { return &___vertexColor_37; }
	inline void set_vertexColor_37(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___vertexColor_37 = value;
	}

	inline static int32_t get_offset_of_underlineColor_38() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColor_38)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_underlineColor_38() const { return ___underlineColor_38; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_underlineColor_38() { return &___underlineColor_38; }
	inline void set_underlineColor_38(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___underlineColor_38 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_39() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColor_39)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_strikethroughColor_39() const { return ___strikethroughColor_39; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_strikethroughColor_39() { return &___strikethroughColor_39; }
	inline void set_strikethroughColor_39(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___strikethroughColor_39 = value;
	}

	inline static int32_t get_offset_of_highlightColor_40() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColor_40)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_highlightColor_40() const { return ___highlightColor_40; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_highlightColor_40() { return &___highlightColor_40; }
	inline void set_highlightColor_40(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___highlightColor_40 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_41() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___basicStyleStack_41)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_basicStyleStack_41() const { return ___basicStyleStack_41; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_basicStyleStack_41() { return &___basicStyleStack_41; }
	inline void set_basicStyleStack_41(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___basicStyleStack_41 = value;
	}

	inline static int32_t get_offset_of_italicAngleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngleStack_42)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_italicAngleStack_42() const { return ___italicAngleStack_42; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_italicAngleStack_42() { return &___italicAngleStack_42; }
	inline void set_italicAngleStack_42(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___italicAngleStack_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___italicAngleStack_42))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorStack_43)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_colorStack_43() const { return ___colorStack_43; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_colorStack_43() { return &___colorStack_43; }
	inline void set_colorStack_43(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___colorStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_43))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColorStack_44)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_underlineColorStack_44() const { return ___underlineColorStack_44; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_underlineColorStack_44() { return &___underlineColorStack_44; }
	inline void set_underlineColorStack_44(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___underlineColorStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_44))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColorStack_45)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_strikethroughColorStack_45() const { return ___strikethroughColorStack_45; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_strikethroughColorStack_45() { return &___strikethroughColorStack_45; }
	inline void set_strikethroughColorStack_45(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___strikethroughColorStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColorStack_46)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_highlightColorStack_46() const { return ___highlightColorStack_46; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_highlightColorStack_46() { return &___highlightColorStack_46; }
	inline void set_highlightColorStack_46(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___highlightColorStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_46))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightStateStack_47() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightStateStack_47)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_highlightStateStack_47() const { return ___highlightStateStack_47; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_highlightStateStack_47() { return &___highlightStateStack_47; }
	inline void set_highlightStateStack_47(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___highlightStateStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightStateStack_47))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_48() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorGradientStack_48)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_colorGradientStack_48() const { return ___colorGradientStack_48; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_colorGradientStack_48() { return &___colorGradientStack_48; }
	inline void set_colorGradientStack_48(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___colorGradientStack_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_49() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___sizeStack_49)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_sizeStack_49() const { return ___sizeStack_49; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_sizeStack_49() { return &___sizeStack_49; }
	inline void set_sizeStack_49(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___sizeStack_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_49))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_50() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___indentStack_50)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_indentStack_50() const { return ___indentStack_50; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_indentStack_50() { return &___indentStack_50; }
	inline void set_indentStack_50(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___indentStack_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_50))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_51() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontWeightStack_51)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_fontWeightStack_51() const { return ___fontWeightStack_51; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_fontWeightStack_51() { return &___fontWeightStack_51; }
	inline void set_fontWeightStack_51(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___fontWeightStack_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_51))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_52() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___styleStack_52)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_styleStack_52() const { return ___styleStack_52; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_styleStack_52() { return &___styleStack_52; }
	inline void set_styleStack_52(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___styleStack_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_52))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_53() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineStack_53)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_baselineStack_53() const { return ___baselineStack_53; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_baselineStack_53() { return &___baselineStack_53; }
	inline void set_baselineStack_53(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___baselineStack_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_53))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_54() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___actionStack_54)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_actionStack_54() const { return ___actionStack_54; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_actionStack_54() { return &___actionStack_54; }
	inline void set_actionStack_54(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___actionStack_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_54))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_55() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___materialReferenceStack_55)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_materialReferenceStack_55() const { return ___materialReferenceStack_55; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_materialReferenceStack_55() { return &___materialReferenceStack_55; }
	inline void set_materialReferenceStack_55(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___materialReferenceStack_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_56() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineJustificationStack_56)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_lineJustificationStack_56() const { return ___lineJustificationStack_56; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_lineJustificationStack_56() { return &___lineJustificationStack_56; }
	inline void set_lineJustificationStack_56(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___lineJustificationStack_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_57() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___spriteAnimationID_57)); }
	inline int32_t get_spriteAnimationID_57() const { return ___spriteAnimationID_57; }
	inline int32_t* get_address_of_spriteAnimationID_57() { return &___spriteAnimationID_57; }
	inline void set_spriteAnimationID_57(int32_t value)
	{
		___spriteAnimationID_57 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_58() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontAsset_58)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_currentFontAsset_58() const { return ___currentFontAsset_58; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_currentFontAsset_58() { return &___currentFontAsset_58; }
	inline void set_currentFontAsset_58(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___currentFontAsset_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_58), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_59() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentSpriteAsset_59)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_currentSpriteAsset_59() const { return ___currentSpriteAsset_59; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_currentSpriteAsset_59() { return &___currentSpriteAsset_59; }
	inline void set_currentSpriteAsset_59(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___currentSpriteAsset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_59), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_60() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterial_60)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_currentMaterial_60() const { return ___currentMaterial_60; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_currentMaterial_60() { return &___currentMaterial_60; }
	inline void set_currentMaterial_60(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___currentMaterial_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_60), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_61() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterialIndex_61)); }
	inline int32_t get_currentMaterialIndex_61() const { return ___currentMaterialIndex_61; }
	inline int32_t* get_address_of_currentMaterialIndex_61() { return &___currentMaterialIndex_61; }
	inline void set_currentMaterialIndex_61(int32_t value)
	{
		___currentMaterialIndex_61 = value;
	}

	inline static int32_t get_offset_of_meshExtents_62() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___meshExtents_62)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_meshExtents_62() const { return ___meshExtents_62; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_meshExtents_62() { return &___meshExtents_62; }
	inline void set_meshExtents_62(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___meshExtents_62 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_63() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___tagNoParsing_63)); }
	inline bool get_tagNoParsing_63() const { return ___tagNoParsing_63; }
	inline bool* get_address_of_tagNoParsing_63() { return &___tagNoParsing_63; }
	inline void set_tagNoParsing_63(bool value)
	{
		___tagNoParsing_63 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_64() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isNonBreakingSpace_64)); }
	inline bool get_isNonBreakingSpace_64() const { return ___isNonBreakingSpace_64; }
	inline bool* get_address_of_isNonBreakingSpace_64() { return &___isNonBreakingSpace_64; }
	inline void set_isNonBreakingSpace_64(bool value)
	{
		___isNonBreakingSpace_64 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___itemStack_0)); }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* get_itemStack_0() const { return ___itemStack_0; }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_DefaultItem_2)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
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


// UnityEngine.ParticleSystemRenderer
struct ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// Oculus.Interaction.Interactable`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable>
struct Interactable_2_t7EF9D0735C86ECD7FD8B9E34578F48CA327A88D3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Oculus.Interaction.Interactable`2::_maxInteractors
	int32_t ____maxInteractors_4;
	// System.Int32 Oculus.Interaction.Interactable`2::_maxSelectingInteractors
	int32_t ____maxSelectingInteractors_5;
	// System.Collections.Generic.HashSet`1<TInteractor> Oculus.Interaction.Interactable`2::_interactors
	HashSet_1_t616DFB3BC0AADCBC021640A6F0048E466B43500A * ____interactors_6;
	// System.Collections.Generic.HashSet`1<TInteractor> Oculus.Interaction.Interactable`2::_selectingInteractors
	HashSet_1_t616DFB3BC0AADCBC021640A6F0048E466B43500A * ____selectingInteractors_7;
	// System.Action Oculus.Interaction.Interactable`2::WhenInteractorsCountUpdated
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___WhenInteractorsCountUpdated_8;
	// System.Action Oculus.Interaction.Interactable`2::WhenSelectingInteractorsCountUpdated
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___WhenSelectingInteractorsCountUpdated_9;
	// Oculus.Interaction.InteractableState Oculus.Interaction.Interactable`2::_state
	int32_t ____state_10;
	// System.Action`1<Oculus.Interaction.InteractableStateChangeArgs> Oculus.Interaction.Interactable`2::WhenStateChanged
	Action_1_tD1FACC57890C3F97507C66A0BD334276B729D681 * ___WhenStateChanged_11;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenInteractorAdded
	MultiAction_1_tAFAD6D8921EBC70927058CFA212A0658C451D998 * ____whenInteractorAdded_12;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenInteractorRemoved
	MultiAction_1_tAFAD6D8921EBC70927058CFA212A0658C451D998 * ____whenInteractorRemoved_13;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenSelectingInteractorAdded
	MultiAction_1_tAFAD6D8921EBC70927058CFA212A0658C451D998 * ____whenSelectingInteractorAdded_14;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenSelectingInteractorRemoved
	MultiAction_1_tAFAD6D8921EBC70927058CFA212A0658C451D998 * ____whenSelectingInteractorRemoved_15;

public:
	inline static int32_t get_offset_of__maxInteractors_4() { return static_cast<int32_t>(offsetof(Interactable_2_t7EF9D0735C86ECD7FD8B9E34578F48CA327A88D3, ____maxInteractors_4)); }
	inline int32_t get__maxInteractors_4() const { return ____maxInteractors_4; }
	inline int32_t* get_address_of__maxInteractors_4() { return &____maxInteractors_4; }
	inline void set__maxInteractors_4(int32_t value)
	{
		____maxInteractors_4 = value;
	}

	inline static int32_t get_offset_of__maxSelectingInteractors_5() { return static_cast<int32_t>(offsetof(Interactable_2_t7EF9D0735C86ECD7FD8B9E34578F48CA327A88D3, ____maxSelectingInteractors_5)); }
	inline int32_t get__maxSelectingInteractors_5() const { return ____maxSelectingInteractors_5; }
	inline int32_t* get_address_of__maxSelectingInteractors_5() { return &____maxSelectingInteractors_5; }
	inline void set__maxSelectingInteractors_5(int32_t value)
	{
		____maxSelectingInteractors_5 = value;
	}

	inline static int32_t get_offset_of__interactors_6() { return static_cast<int32_t>(offsetof(Interactable_2_t7EF9D0735C86ECD7FD8B9E34578F48CA327A88D3, ____interactors_6)); }
	inline HashSet_1_t616DFB3BC0AADCBC021640A6F0048E466B43500A * get__interactors_6() const { return ____interactors_6; }
	inline HashSet_1_t616DFB3BC0AADCBC021640A6F0048E466B43500A ** get_address_of__interactors_6() { return &____interactors_6; }
	inline void set__interactors_6(HashSet_1_t616DFB3BC0AADCBC021640A6F0048E466B43500A * value)
	{
		____interactors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interactors_6), (void*)value);
	}

	inline static int32_t get_offset_of__selectingInteractors_7() { return static_cast<int32_t>(offsetof(Interactable_2_t7EF9D0735C86ECD7FD8B9E34578F48CA327A88D3, ____selectingInteractors_7)); }
	inline HashSet_1_t616DFB3BC0AADCBC021640A6F0048E466B43500A * get__selectingInteractors_7() const { return ____selectingInteractors_7; }
	inline HashSet_1_t616DFB3BC0AADCBC021640A6F0048E466B43500A ** get_address_of__selectingInteractors_7() { return &____selectingInteractors_7; }
	inline void set__selectingInteractors_7(HashSet_1_t616DFB3BC0AADCBC021640A6F0048E466B43500A * value)
	{
		____selectingInteractors_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____selectingInteractors_7), (void*)value);
	}

	inline static int32_t get_offset_of_WhenInteractorsCountUpdated_8() { return static_cast<int32_t>(offsetof(Interactable_2_t7EF9D0735C86ECD7FD8B9E34578F48CA327A88D3, ___WhenInteractorsCountUpdated_8)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_WhenInteractorsCountUpdated_8() const { return ___WhenInteractorsCountUpdated_8; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_WhenInteractorsCountUpdated_8() { return &___WhenInteractorsCountUpdated_8; }
	inline void set_WhenInteractorsCountUpdated_8(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___WhenInteractorsCountUpdated_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenInteractorsCountUpdated_8), (void*)value);
	}

	inline static int32_t get_offset_of_WhenSelectingInteractorsCountUpdated_9() { return static_cast<int32_t>(offsetof(Interactable_2_t7EF9D0735C86ECD7FD8B9E34578F48CA327A88D3, ___WhenSelectingInteractorsCountUpdated_9)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_WhenSelectingInteractorsCountUpdated_9() const { return ___WhenSelectingInteractorsCountUpdated_9; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_WhenSelectingInteractorsCountUpdated_9() { return &___WhenSelectingInteractorsCountUpdated_9; }
	inline void set_WhenSelectingInteractorsCountUpdated_9(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___WhenSelectingInteractorsCountUpdated_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenSelectingInteractorsCountUpdated_9), (void*)value);
	}

	inline static int32_t get_offset_of__state_10() { return static_cast<int32_t>(offsetof(Interactable_2_t7EF9D0735C86ECD7FD8B9E34578F48CA327A88D3, ____state_10)); }
	inline int32_t get__state_10() const { return ____state_10; }
	inline int32_t* get_address_of__state_10() { return &____state_10; }
	inline void set__state_10(int32_t value)
	{
		____state_10 = value;
	}

	inline static int32_t get_offset_of_WhenStateChanged_11() { return static_cast<int32_t>(offsetof(Interactable_2_t7EF9D0735C86ECD7FD8B9E34578F48CA327A88D3, ___WhenStateChanged_11)); }
	inline Action_1_tD1FACC57890C3F97507C66A0BD334276B729D681 * get_WhenStateChanged_11() const { return ___WhenStateChanged_11; }
	inline Action_1_tD1FACC57890C3F97507C66A0BD334276B729D681 ** get_address_of_WhenStateChanged_11() { return &___WhenStateChanged_11; }
	inline void set_WhenStateChanged_11(Action_1_tD1FACC57890C3F97507C66A0BD334276B729D681 * value)
	{
		___WhenStateChanged_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenStateChanged_11), (void*)value);
	}

	inline static int32_t get_offset_of__whenInteractorAdded_12() { return static_cast<int32_t>(offsetof(Interactable_2_t7EF9D0735C86ECD7FD8B9E34578F48CA327A88D3, ____whenInteractorAdded_12)); }
	inline MultiAction_1_tAFAD6D8921EBC70927058CFA212A0658C451D998 * get__whenInteractorAdded_12() const { return ____whenInteractorAdded_12; }
	inline MultiAction_1_tAFAD6D8921EBC70927058CFA212A0658C451D998 ** get_address_of__whenInteractorAdded_12() { return &____whenInteractorAdded_12; }
	inline void set__whenInteractorAdded_12(MultiAction_1_tAFAD6D8921EBC70927058CFA212A0658C451D998 * value)
	{
		____whenInteractorAdded_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenInteractorAdded_12), (void*)value);
	}

	inline static int32_t get_offset_of__whenInteractorRemoved_13() { return static_cast<int32_t>(offsetof(Interactable_2_t7EF9D0735C86ECD7FD8B9E34578F48CA327A88D3, ____whenInteractorRemoved_13)); }
	inline MultiAction_1_tAFAD6D8921EBC70927058CFA212A0658C451D998 * get__whenInteractorRemoved_13() const { return ____whenInteractorRemoved_13; }
	inline MultiAction_1_tAFAD6D8921EBC70927058CFA212A0658C451D998 ** get_address_of__whenInteractorRemoved_13() { return &____whenInteractorRemoved_13; }
	inline void set__whenInteractorRemoved_13(MultiAction_1_tAFAD6D8921EBC70927058CFA212A0658C451D998 * value)
	{
		____whenInteractorRemoved_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenInteractorRemoved_13), (void*)value);
	}

	inline static int32_t get_offset_of__whenSelectingInteractorAdded_14() { return static_cast<int32_t>(offsetof(Interactable_2_t7EF9D0735C86ECD7FD8B9E34578F48CA327A88D3, ____whenSelectingInteractorAdded_14)); }
	inline MultiAction_1_tAFAD6D8921EBC70927058CFA212A0658C451D998 * get__whenSelectingInteractorAdded_14() const { return ____whenSelectingInteractorAdded_14; }
	inline MultiAction_1_tAFAD6D8921EBC70927058CFA212A0658C451D998 ** get_address_of__whenSelectingInteractorAdded_14() { return &____whenSelectingInteractorAdded_14; }
	inline void set__whenSelectingInteractorAdded_14(MultiAction_1_tAFAD6D8921EBC70927058CFA212A0658C451D998 * value)
	{
		____whenSelectingInteractorAdded_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenSelectingInteractorAdded_14), (void*)value);
	}

	inline static int32_t get_offset_of__whenSelectingInteractorRemoved_15() { return static_cast<int32_t>(offsetof(Interactable_2_t7EF9D0735C86ECD7FD8B9E34578F48CA327A88D3, ____whenSelectingInteractorRemoved_15)); }
	inline MultiAction_1_tAFAD6D8921EBC70927058CFA212A0658C451D998 * get__whenSelectingInteractorRemoved_15() const { return ____whenSelectingInteractorRemoved_15; }
	inline MultiAction_1_tAFAD6D8921EBC70927058CFA212A0658C451D998 ** get_address_of__whenSelectingInteractorRemoved_15() { return &____whenSelectingInteractorRemoved_15; }
	inline void set__whenSelectingInteractorRemoved_15(MultiAction_1_tAFAD6D8921EBC70927058CFA212A0658C451D998 * value)
	{
		____whenSelectingInteractorRemoved_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenSelectingInteractorRemoved_15), (void*)value);
	}
};

struct Interactable_2_t7EF9D0735C86ECD7FD8B9E34578F48CA327A88D3_StaticFields
{
public:
	// Oculus.Interaction.InteractableRegistry`2<TInteractor,TInteractable> Oculus.Interaction.Interactable`2::_registry
	InteractableRegistry_2_t48A65E9D8942E964A81C7F3E47157B655B8F80AE * ____registry_16;

public:
	inline static int32_t get_offset_of__registry_16() { return static_cast<int32_t>(offsetof(Interactable_2_t7EF9D0735C86ECD7FD8B9E34578F48CA327A88D3_StaticFields, ____registry_16)); }
	inline InteractableRegistry_2_t48A65E9D8942E964A81C7F3E47157B655B8F80AE * get__registry_16() const { return ____registry_16; }
	inline InteractableRegistry_2_t48A65E9D8942E964A81C7F3E47157B655B8F80AE ** get_address_of__registry_16() { return &____registry_16; }
	inline void set__registry_16(InteractableRegistry_2_t48A65E9D8942E964A81C7F3E47157B655B8F80AE * value)
	{
		____registry_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____registry_16), (void*)value);
	}
};


// Oculus.Interaction.Interactor`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable>
struct Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.MonoBehaviour Oculus.Interaction.Interactor`2::_activeState
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ____activeState_4;
	// Oculus.Interaction.IActiveState Oculus.Interaction.Interactor`2::ActiveState
	RuntimeObject* ___ActiveState_5;
	// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> Oculus.Interaction.Interactor`2::_interactableFilters
	List_1_t5D9BA5285B790623DA8EEFFB341186B3DFB9A2F2 * ____interactableFilters_6;
	// System.Collections.Generic.List`1<Oculus.Interaction.IMonoBehaviourFilter> Oculus.Interaction.Interactor`2::InteractableFilters
	List_1_tE7317ADB6619598F60E6887CE70C0CEA5228B605 * ___InteractableFilters_7;
	// System.Boolean Oculus.Interaction.Interactor`2::<ShouldSelect>k__BackingField
	bool ___U3CShouldSelectU3Ek__BackingField_8;
	// System.Boolean Oculus.Interaction.Interactor`2::<ShouldUnselect>k__BackingField
	bool ___U3CShouldUnselectU3Ek__BackingField_9;
	// Oculus.Interaction.InteractorState Oculus.Interaction.Interactor`2::_state
	int32_t ____state_10;
	// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs> Oculus.Interaction.Interactor`2::WhenStateChanged
	Action_1_t0A3F609812F44FBC6D0100C3B0D45CB6EA87E86F * ___WhenStateChanged_11;
	// System.Action Oculus.Interaction.Interactor`2::WhenInteractorUpdated
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___WhenInteractorUpdated_12;
	// Oculus.Interaction.ISelector Oculus.Interaction.Interactor`2::_selector
	RuntimeObject* ____selector_13;
	// System.Int32 Oculus.Interaction.Interactor`2::MaxIterationsPerFrame
	int32_t ___MaxIterationsPerFrame_14;
	// System.Boolean Oculus.Interaction.Interactor`2::_performSelect
	bool ____performSelect_15;
	// System.Boolean Oculus.Interaction.Interactor`2::_performUnselect
	bool ____performUnselect_16;
	// TInteractable Oculus.Interaction.Interactor`2::_candidate
	HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8 * ____candidate_17;
	// TInteractable Oculus.Interaction.Interactor`2::_interactable
	HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8 * ____interactable_18;
	// TInteractable Oculus.Interaction.Interactor`2::_selectedInteractable
	HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8 * ____selectedInteractable_19;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSet
	MultiAction_1_t9EBE27F45EE895C8DE6047020A17956AAD5D6DA4 * ____whenInteractableSet_20;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnset
	MultiAction_1_t9EBE27F45EE895C8DE6047020A17956AAD5D6DA4 * ____whenInteractableUnset_21;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSelected
	MultiAction_1_t9EBE27F45EE895C8DE6047020A17956AAD5D6DA4 * ____whenInteractableSelected_22;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnselected
	MultiAction_1_t9EBE27F45EE895C8DE6047020A17956AAD5D6DA4 * ____whenInteractableUnselected_23;
	// Oculus.Interaction.UniqueIdentifier Oculus.Interaction.Interactor`2::_identifier
	UniqueIdentifier_t6B285BB7F8B76C663C4349D6959DB637E621A42A * ____identifier_24;
	// System.Boolean Oculus.Interaction.Interactor`2::_started
	bool ____started_25;
	// System.Boolean Oculus.Interaction.Interactor`2::<IsRootDriver>k__BackingField
	bool ___U3CIsRootDriverU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of__activeState_4() { return static_cast<int32_t>(offsetof(Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5, ____activeState_4)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get__activeState_4() const { return ____activeState_4; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of__activeState_4() { return &____activeState_4; }
	inline void set__activeState_4(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		____activeState_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeState_4), (void*)value);
	}

	inline static int32_t get_offset_of_ActiveState_5() { return static_cast<int32_t>(offsetof(Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5, ___ActiveState_5)); }
	inline RuntimeObject* get_ActiveState_5() const { return ___ActiveState_5; }
	inline RuntimeObject** get_address_of_ActiveState_5() { return &___ActiveState_5; }
	inline void set_ActiveState_5(RuntimeObject* value)
	{
		___ActiveState_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveState_5), (void*)value);
	}

	inline static int32_t get_offset_of__interactableFilters_6() { return static_cast<int32_t>(offsetof(Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5, ____interactableFilters_6)); }
	inline List_1_t5D9BA5285B790623DA8EEFFB341186B3DFB9A2F2 * get__interactableFilters_6() const { return ____interactableFilters_6; }
	inline List_1_t5D9BA5285B790623DA8EEFFB341186B3DFB9A2F2 ** get_address_of__interactableFilters_6() { return &____interactableFilters_6; }
	inline void set__interactableFilters_6(List_1_t5D9BA5285B790623DA8EEFFB341186B3DFB9A2F2 * value)
	{
		____interactableFilters_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interactableFilters_6), (void*)value);
	}

	inline static int32_t get_offset_of_InteractableFilters_7() { return static_cast<int32_t>(offsetof(Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5, ___InteractableFilters_7)); }
	inline List_1_tE7317ADB6619598F60E6887CE70C0CEA5228B605 * get_InteractableFilters_7() const { return ___InteractableFilters_7; }
	inline List_1_tE7317ADB6619598F60E6887CE70C0CEA5228B605 ** get_address_of_InteractableFilters_7() { return &___InteractableFilters_7; }
	inline void set_InteractableFilters_7(List_1_tE7317ADB6619598F60E6887CE70C0CEA5228B605 * value)
	{
		___InteractableFilters_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractableFilters_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CShouldSelectU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5, ___U3CShouldSelectU3Ek__BackingField_8)); }
	inline bool get_U3CShouldSelectU3Ek__BackingField_8() const { return ___U3CShouldSelectU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CShouldSelectU3Ek__BackingField_8() { return &___U3CShouldSelectU3Ek__BackingField_8; }
	inline void set_U3CShouldSelectU3Ek__BackingField_8(bool value)
	{
		___U3CShouldSelectU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CShouldUnselectU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5, ___U3CShouldUnselectU3Ek__BackingField_9)); }
	inline bool get_U3CShouldUnselectU3Ek__BackingField_9() const { return ___U3CShouldUnselectU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CShouldUnselectU3Ek__BackingField_9() { return &___U3CShouldUnselectU3Ek__BackingField_9; }
	inline void set_U3CShouldUnselectU3Ek__BackingField_9(bool value)
	{
		___U3CShouldUnselectU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of__state_10() { return static_cast<int32_t>(offsetof(Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5, ____state_10)); }
	inline int32_t get__state_10() const { return ____state_10; }
	inline int32_t* get_address_of__state_10() { return &____state_10; }
	inline void set__state_10(int32_t value)
	{
		____state_10 = value;
	}

	inline static int32_t get_offset_of_WhenStateChanged_11() { return static_cast<int32_t>(offsetof(Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5, ___WhenStateChanged_11)); }
	inline Action_1_t0A3F609812F44FBC6D0100C3B0D45CB6EA87E86F * get_WhenStateChanged_11() const { return ___WhenStateChanged_11; }
	inline Action_1_t0A3F609812F44FBC6D0100C3B0D45CB6EA87E86F ** get_address_of_WhenStateChanged_11() { return &___WhenStateChanged_11; }
	inline void set_WhenStateChanged_11(Action_1_t0A3F609812F44FBC6D0100C3B0D45CB6EA87E86F * value)
	{
		___WhenStateChanged_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenStateChanged_11), (void*)value);
	}

	inline static int32_t get_offset_of_WhenInteractorUpdated_12() { return static_cast<int32_t>(offsetof(Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5, ___WhenInteractorUpdated_12)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_WhenInteractorUpdated_12() const { return ___WhenInteractorUpdated_12; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_WhenInteractorUpdated_12() { return &___WhenInteractorUpdated_12; }
	inline void set_WhenInteractorUpdated_12(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___WhenInteractorUpdated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenInteractorUpdated_12), (void*)value);
	}

	inline static int32_t get_offset_of__selector_13() { return static_cast<int32_t>(offsetof(Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5, ____selector_13)); }
	inline RuntimeObject* get__selector_13() const { return ____selector_13; }
	inline RuntimeObject** get_address_of__selector_13() { return &____selector_13; }
	inline void set__selector_13(RuntimeObject* value)
	{
		____selector_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____selector_13), (void*)value);
	}

	inline static int32_t get_offset_of_MaxIterationsPerFrame_14() { return static_cast<int32_t>(offsetof(Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5, ___MaxIterationsPerFrame_14)); }
	inline int32_t get_MaxIterationsPerFrame_14() const { return ___MaxIterationsPerFrame_14; }
	inline int32_t* get_address_of_MaxIterationsPerFrame_14() { return &___MaxIterationsPerFrame_14; }
	inline void set_MaxIterationsPerFrame_14(int32_t value)
	{
		___MaxIterationsPerFrame_14 = value;
	}

	inline static int32_t get_offset_of__performSelect_15() { return static_cast<int32_t>(offsetof(Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5, ____performSelect_15)); }
	inline bool get__performSelect_15() const { return ____performSelect_15; }
	inline bool* get_address_of__performSelect_15() { return &____performSelect_15; }
	inline void set__performSelect_15(bool value)
	{
		____performSelect_15 = value;
	}

	inline static int32_t get_offset_of__performUnselect_16() { return static_cast<int32_t>(offsetof(Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5, ____performUnselect_16)); }
	inline bool get__performUnselect_16() const { return ____performUnselect_16; }
	inline bool* get_address_of__performUnselect_16() { return &____performUnselect_16; }
	inline void set__performUnselect_16(bool value)
	{
		____performUnselect_16 = value;
	}

	inline static int32_t get_offset_of__candidate_17() { return static_cast<int32_t>(offsetof(Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5, ____candidate_17)); }
	inline HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8 * get__candidate_17() const { return ____candidate_17; }
	inline HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8 ** get_address_of__candidate_17() { return &____candidate_17; }
	inline void set__candidate_17(HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8 * value)
	{
		____candidate_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____candidate_17), (void*)value);
	}

	inline static int32_t get_offset_of__interactable_18() { return static_cast<int32_t>(offsetof(Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5, ____interactable_18)); }
	inline HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8 * get__interactable_18() const { return ____interactable_18; }
	inline HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8 ** get_address_of__interactable_18() { return &____interactable_18; }
	inline void set__interactable_18(HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8 * value)
	{
		____interactable_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interactable_18), (void*)value);
	}

	inline static int32_t get_offset_of__selectedInteractable_19() { return static_cast<int32_t>(offsetof(Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5, ____selectedInteractable_19)); }
	inline HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8 * get__selectedInteractable_19() const { return ____selectedInteractable_19; }
	inline HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8 ** get_address_of__selectedInteractable_19() { return &____selectedInteractable_19; }
	inline void set__selectedInteractable_19(HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8 * value)
	{
		____selectedInteractable_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____selectedInteractable_19), (void*)value);
	}

	inline static int32_t get_offset_of__whenInteractableSet_20() { return static_cast<int32_t>(offsetof(Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5, ____whenInteractableSet_20)); }
	inline MultiAction_1_t9EBE27F45EE895C8DE6047020A17956AAD5D6DA4 * get__whenInteractableSet_20() const { return ____whenInteractableSet_20; }
	inline MultiAction_1_t9EBE27F45EE895C8DE6047020A17956AAD5D6DA4 ** get_address_of__whenInteractableSet_20() { return &____whenInteractableSet_20; }
	inline void set__whenInteractableSet_20(MultiAction_1_t9EBE27F45EE895C8DE6047020A17956AAD5D6DA4 * value)
	{
		____whenInteractableSet_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenInteractableSet_20), (void*)value);
	}

	inline static int32_t get_offset_of__whenInteractableUnset_21() { return static_cast<int32_t>(offsetof(Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5, ____whenInteractableUnset_21)); }
	inline MultiAction_1_t9EBE27F45EE895C8DE6047020A17956AAD5D6DA4 * get__whenInteractableUnset_21() const { return ____whenInteractableUnset_21; }
	inline MultiAction_1_t9EBE27F45EE895C8DE6047020A17956AAD5D6DA4 ** get_address_of__whenInteractableUnset_21() { return &____whenInteractableUnset_21; }
	inline void set__whenInteractableUnset_21(MultiAction_1_t9EBE27F45EE895C8DE6047020A17956AAD5D6DA4 * value)
	{
		____whenInteractableUnset_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenInteractableUnset_21), (void*)value);
	}

	inline static int32_t get_offset_of__whenInteractableSelected_22() { return static_cast<int32_t>(offsetof(Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5, ____whenInteractableSelected_22)); }
	inline MultiAction_1_t9EBE27F45EE895C8DE6047020A17956AAD5D6DA4 * get__whenInteractableSelected_22() const { return ____whenInteractableSelected_22; }
	inline MultiAction_1_t9EBE27F45EE895C8DE6047020A17956AAD5D6DA4 ** get_address_of__whenInteractableSelected_22() { return &____whenInteractableSelected_22; }
	inline void set__whenInteractableSelected_22(MultiAction_1_t9EBE27F45EE895C8DE6047020A17956AAD5D6DA4 * value)
	{
		____whenInteractableSelected_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenInteractableSelected_22), (void*)value);
	}

	inline static int32_t get_offset_of__whenInteractableUnselected_23() { return static_cast<int32_t>(offsetof(Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5, ____whenInteractableUnselected_23)); }
	inline MultiAction_1_t9EBE27F45EE895C8DE6047020A17956AAD5D6DA4 * get__whenInteractableUnselected_23() const { return ____whenInteractableUnselected_23; }
	inline MultiAction_1_t9EBE27F45EE895C8DE6047020A17956AAD5D6DA4 ** get_address_of__whenInteractableUnselected_23() { return &____whenInteractableUnselected_23; }
	inline void set__whenInteractableUnselected_23(MultiAction_1_t9EBE27F45EE895C8DE6047020A17956AAD5D6DA4 * value)
	{
		____whenInteractableUnselected_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenInteractableUnselected_23), (void*)value);
	}

	inline static int32_t get_offset_of__identifier_24() { return static_cast<int32_t>(offsetof(Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5, ____identifier_24)); }
	inline UniqueIdentifier_t6B285BB7F8B76C663C4349D6959DB637E621A42A * get__identifier_24() const { return ____identifier_24; }
	inline UniqueIdentifier_t6B285BB7F8B76C663C4349D6959DB637E621A42A ** get_address_of__identifier_24() { return &____identifier_24; }
	inline void set__identifier_24(UniqueIdentifier_t6B285BB7F8B76C663C4349D6959DB637E621A42A * value)
	{
		____identifier_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identifier_24), (void*)value);
	}

	inline static int32_t get_offset_of__started_25() { return static_cast<int32_t>(offsetof(Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5, ____started_25)); }
	inline bool get__started_25() const { return ____started_25; }
	inline bool* get_address_of__started_25() { return &____started_25; }
	inline void set__started_25(bool value)
	{
		____started_25 = value;
	}

	inline static int32_t get_offset_of_U3CIsRootDriverU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5, ___U3CIsRootDriverU3Ek__BackingField_26)); }
	inline bool get_U3CIsRootDriverU3Ek__BackingField_26() const { return ___U3CIsRootDriverU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CIsRootDriverU3Ek__BackingField_26() { return &___U3CIsRootDriverU3Ek__BackingField_26; }
	inline void set_U3CIsRootDriverU3Ek__BackingField_26(bool value)
	{
		___U3CIsRootDriverU3Ek__BackingField_26 = value;
	}
};


// Oculus.Interaction.Interactor`2<System.Object,System.Object>
struct Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.MonoBehaviour Oculus.Interaction.Interactor`2::_activeState
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ____activeState_4;
	// Oculus.Interaction.IActiveState Oculus.Interaction.Interactor`2::ActiveState
	RuntimeObject* ___ActiveState_5;
	// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> Oculus.Interaction.Interactor`2::_interactableFilters
	List_1_t5D9BA5285B790623DA8EEFFB341186B3DFB9A2F2 * ____interactableFilters_6;
	// System.Collections.Generic.List`1<Oculus.Interaction.IMonoBehaviourFilter> Oculus.Interaction.Interactor`2::InteractableFilters
	List_1_tE7317ADB6619598F60E6887CE70C0CEA5228B605 * ___InteractableFilters_7;
	// System.Boolean Oculus.Interaction.Interactor`2::<ShouldSelect>k__BackingField
	bool ___U3CShouldSelectU3Ek__BackingField_8;
	// System.Boolean Oculus.Interaction.Interactor`2::<ShouldUnselect>k__BackingField
	bool ___U3CShouldUnselectU3Ek__BackingField_9;
	// Oculus.Interaction.InteractorState Oculus.Interaction.Interactor`2::_state
	int32_t ____state_10;
	// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs> Oculus.Interaction.Interactor`2::WhenStateChanged
	Action_1_t0A3F609812F44FBC6D0100C3B0D45CB6EA87E86F * ___WhenStateChanged_11;
	// System.Action Oculus.Interaction.Interactor`2::WhenInteractorUpdated
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___WhenInteractorUpdated_12;
	// Oculus.Interaction.ISelector Oculus.Interaction.Interactor`2::_selector
	RuntimeObject* ____selector_13;
	// System.Int32 Oculus.Interaction.Interactor`2::MaxIterationsPerFrame
	int32_t ___MaxIterationsPerFrame_14;
	// System.Boolean Oculus.Interaction.Interactor`2::_performSelect
	bool ____performSelect_15;
	// System.Boolean Oculus.Interaction.Interactor`2::_performUnselect
	bool ____performUnselect_16;
	// TInteractable Oculus.Interaction.Interactor`2::_candidate
	RuntimeObject * ____candidate_17;
	// TInteractable Oculus.Interaction.Interactor`2::_interactable
	RuntimeObject * ____interactable_18;
	// TInteractable Oculus.Interaction.Interactor`2::_selectedInteractable
	RuntimeObject * ____selectedInteractable_19;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSet
	MultiAction_1_tF72F1B4A8CBD8B10E4E59AD4CBF562C3A61D8A03 * ____whenInteractableSet_20;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnset
	MultiAction_1_tF72F1B4A8CBD8B10E4E59AD4CBF562C3A61D8A03 * ____whenInteractableUnset_21;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSelected
	MultiAction_1_tF72F1B4A8CBD8B10E4E59AD4CBF562C3A61D8A03 * ____whenInteractableSelected_22;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnselected
	MultiAction_1_tF72F1B4A8CBD8B10E4E59AD4CBF562C3A61D8A03 * ____whenInteractableUnselected_23;
	// Oculus.Interaction.UniqueIdentifier Oculus.Interaction.Interactor`2::_identifier
	UniqueIdentifier_t6B285BB7F8B76C663C4349D6959DB637E621A42A * ____identifier_24;
	// System.Boolean Oculus.Interaction.Interactor`2::_started
	bool ____started_25;
	// System.Boolean Oculus.Interaction.Interactor`2::<IsRootDriver>k__BackingField
	bool ___U3CIsRootDriverU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of__activeState_4() { return static_cast<int32_t>(offsetof(Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708, ____activeState_4)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get__activeState_4() const { return ____activeState_4; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of__activeState_4() { return &____activeState_4; }
	inline void set__activeState_4(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		____activeState_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeState_4), (void*)value);
	}

	inline static int32_t get_offset_of_ActiveState_5() { return static_cast<int32_t>(offsetof(Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708, ___ActiveState_5)); }
	inline RuntimeObject* get_ActiveState_5() const { return ___ActiveState_5; }
	inline RuntimeObject** get_address_of_ActiveState_5() { return &___ActiveState_5; }
	inline void set_ActiveState_5(RuntimeObject* value)
	{
		___ActiveState_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveState_5), (void*)value);
	}

	inline static int32_t get_offset_of__interactableFilters_6() { return static_cast<int32_t>(offsetof(Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708, ____interactableFilters_6)); }
	inline List_1_t5D9BA5285B790623DA8EEFFB341186B3DFB9A2F2 * get__interactableFilters_6() const { return ____interactableFilters_6; }
	inline List_1_t5D9BA5285B790623DA8EEFFB341186B3DFB9A2F2 ** get_address_of__interactableFilters_6() { return &____interactableFilters_6; }
	inline void set__interactableFilters_6(List_1_t5D9BA5285B790623DA8EEFFB341186B3DFB9A2F2 * value)
	{
		____interactableFilters_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interactableFilters_6), (void*)value);
	}

	inline static int32_t get_offset_of_InteractableFilters_7() { return static_cast<int32_t>(offsetof(Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708, ___InteractableFilters_7)); }
	inline List_1_tE7317ADB6619598F60E6887CE70C0CEA5228B605 * get_InteractableFilters_7() const { return ___InteractableFilters_7; }
	inline List_1_tE7317ADB6619598F60E6887CE70C0CEA5228B605 ** get_address_of_InteractableFilters_7() { return &___InteractableFilters_7; }
	inline void set_InteractableFilters_7(List_1_tE7317ADB6619598F60E6887CE70C0CEA5228B605 * value)
	{
		___InteractableFilters_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractableFilters_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CShouldSelectU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708, ___U3CShouldSelectU3Ek__BackingField_8)); }
	inline bool get_U3CShouldSelectU3Ek__BackingField_8() const { return ___U3CShouldSelectU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CShouldSelectU3Ek__BackingField_8() { return &___U3CShouldSelectU3Ek__BackingField_8; }
	inline void set_U3CShouldSelectU3Ek__BackingField_8(bool value)
	{
		___U3CShouldSelectU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CShouldUnselectU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708, ___U3CShouldUnselectU3Ek__BackingField_9)); }
	inline bool get_U3CShouldUnselectU3Ek__BackingField_9() const { return ___U3CShouldUnselectU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CShouldUnselectU3Ek__BackingField_9() { return &___U3CShouldUnselectU3Ek__BackingField_9; }
	inline void set_U3CShouldUnselectU3Ek__BackingField_9(bool value)
	{
		___U3CShouldUnselectU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of__state_10() { return static_cast<int32_t>(offsetof(Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708, ____state_10)); }
	inline int32_t get__state_10() const { return ____state_10; }
	inline int32_t* get_address_of__state_10() { return &____state_10; }
	inline void set__state_10(int32_t value)
	{
		____state_10 = value;
	}

	inline static int32_t get_offset_of_WhenStateChanged_11() { return static_cast<int32_t>(offsetof(Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708, ___WhenStateChanged_11)); }
	inline Action_1_t0A3F609812F44FBC6D0100C3B0D45CB6EA87E86F * get_WhenStateChanged_11() const { return ___WhenStateChanged_11; }
	inline Action_1_t0A3F609812F44FBC6D0100C3B0D45CB6EA87E86F ** get_address_of_WhenStateChanged_11() { return &___WhenStateChanged_11; }
	inline void set_WhenStateChanged_11(Action_1_t0A3F609812F44FBC6D0100C3B0D45CB6EA87E86F * value)
	{
		___WhenStateChanged_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenStateChanged_11), (void*)value);
	}

	inline static int32_t get_offset_of_WhenInteractorUpdated_12() { return static_cast<int32_t>(offsetof(Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708, ___WhenInteractorUpdated_12)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_WhenInteractorUpdated_12() const { return ___WhenInteractorUpdated_12; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_WhenInteractorUpdated_12() { return &___WhenInteractorUpdated_12; }
	inline void set_WhenInteractorUpdated_12(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___WhenInteractorUpdated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenInteractorUpdated_12), (void*)value);
	}

	inline static int32_t get_offset_of__selector_13() { return static_cast<int32_t>(offsetof(Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708, ____selector_13)); }
	inline RuntimeObject* get__selector_13() const { return ____selector_13; }
	inline RuntimeObject** get_address_of__selector_13() { return &____selector_13; }
	inline void set__selector_13(RuntimeObject* value)
	{
		____selector_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____selector_13), (void*)value);
	}

	inline static int32_t get_offset_of_MaxIterationsPerFrame_14() { return static_cast<int32_t>(offsetof(Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708, ___MaxIterationsPerFrame_14)); }
	inline int32_t get_MaxIterationsPerFrame_14() const { return ___MaxIterationsPerFrame_14; }
	inline int32_t* get_address_of_MaxIterationsPerFrame_14() { return &___MaxIterationsPerFrame_14; }
	inline void set_MaxIterationsPerFrame_14(int32_t value)
	{
		___MaxIterationsPerFrame_14 = value;
	}

	inline static int32_t get_offset_of__performSelect_15() { return static_cast<int32_t>(offsetof(Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708, ____performSelect_15)); }
	inline bool get__performSelect_15() const { return ____performSelect_15; }
	inline bool* get_address_of__performSelect_15() { return &____performSelect_15; }
	inline void set__performSelect_15(bool value)
	{
		____performSelect_15 = value;
	}

	inline static int32_t get_offset_of__performUnselect_16() { return static_cast<int32_t>(offsetof(Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708, ____performUnselect_16)); }
	inline bool get__performUnselect_16() const { return ____performUnselect_16; }
	inline bool* get_address_of__performUnselect_16() { return &____performUnselect_16; }
	inline void set__performUnselect_16(bool value)
	{
		____performUnselect_16 = value;
	}

	inline static int32_t get_offset_of__candidate_17() { return static_cast<int32_t>(offsetof(Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708, ____candidate_17)); }
	inline RuntimeObject * get__candidate_17() const { return ____candidate_17; }
	inline RuntimeObject ** get_address_of__candidate_17() { return &____candidate_17; }
	inline void set__candidate_17(RuntimeObject * value)
	{
		____candidate_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____candidate_17), (void*)value);
	}

	inline static int32_t get_offset_of__interactable_18() { return static_cast<int32_t>(offsetof(Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708, ____interactable_18)); }
	inline RuntimeObject * get__interactable_18() const { return ____interactable_18; }
	inline RuntimeObject ** get_address_of__interactable_18() { return &____interactable_18; }
	inline void set__interactable_18(RuntimeObject * value)
	{
		____interactable_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interactable_18), (void*)value);
	}

	inline static int32_t get_offset_of__selectedInteractable_19() { return static_cast<int32_t>(offsetof(Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708, ____selectedInteractable_19)); }
	inline RuntimeObject * get__selectedInteractable_19() const { return ____selectedInteractable_19; }
	inline RuntimeObject ** get_address_of__selectedInteractable_19() { return &____selectedInteractable_19; }
	inline void set__selectedInteractable_19(RuntimeObject * value)
	{
		____selectedInteractable_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____selectedInteractable_19), (void*)value);
	}

	inline static int32_t get_offset_of__whenInteractableSet_20() { return static_cast<int32_t>(offsetof(Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708, ____whenInteractableSet_20)); }
	inline MultiAction_1_tF72F1B4A8CBD8B10E4E59AD4CBF562C3A61D8A03 * get__whenInteractableSet_20() const { return ____whenInteractableSet_20; }
	inline MultiAction_1_tF72F1B4A8CBD8B10E4E59AD4CBF562C3A61D8A03 ** get_address_of__whenInteractableSet_20() { return &____whenInteractableSet_20; }
	inline void set__whenInteractableSet_20(MultiAction_1_tF72F1B4A8CBD8B10E4E59AD4CBF562C3A61D8A03 * value)
	{
		____whenInteractableSet_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenInteractableSet_20), (void*)value);
	}

	inline static int32_t get_offset_of__whenInteractableUnset_21() { return static_cast<int32_t>(offsetof(Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708, ____whenInteractableUnset_21)); }
	inline MultiAction_1_tF72F1B4A8CBD8B10E4E59AD4CBF562C3A61D8A03 * get__whenInteractableUnset_21() const { return ____whenInteractableUnset_21; }
	inline MultiAction_1_tF72F1B4A8CBD8B10E4E59AD4CBF562C3A61D8A03 ** get_address_of__whenInteractableUnset_21() { return &____whenInteractableUnset_21; }
	inline void set__whenInteractableUnset_21(MultiAction_1_tF72F1B4A8CBD8B10E4E59AD4CBF562C3A61D8A03 * value)
	{
		____whenInteractableUnset_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenInteractableUnset_21), (void*)value);
	}

	inline static int32_t get_offset_of__whenInteractableSelected_22() { return static_cast<int32_t>(offsetof(Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708, ____whenInteractableSelected_22)); }
	inline MultiAction_1_tF72F1B4A8CBD8B10E4E59AD4CBF562C3A61D8A03 * get__whenInteractableSelected_22() const { return ____whenInteractableSelected_22; }
	inline MultiAction_1_tF72F1B4A8CBD8B10E4E59AD4CBF562C3A61D8A03 ** get_address_of__whenInteractableSelected_22() { return &____whenInteractableSelected_22; }
	inline void set__whenInteractableSelected_22(MultiAction_1_tF72F1B4A8CBD8B10E4E59AD4CBF562C3A61D8A03 * value)
	{
		____whenInteractableSelected_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenInteractableSelected_22), (void*)value);
	}

	inline static int32_t get_offset_of__whenInteractableUnselected_23() { return static_cast<int32_t>(offsetof(Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708, ____whenInteractableUnselected_23)); }
	inline MultiAction_1_tF72F1B4A8CBD8B10E4E59AD4CBF562C3A61D8A03 * get__whenInteractableUnselected_23() const { return ____whenInteractableUnselected_23; }
	inline MultiAction_1_tF72F1B4A8CBD8B10E4E59AD4CBF562C3A61D8A03 ** get_address_of__whenInteractableUnselected_23() { return &____whenInteractableUnselected_23; }
	inline void set__whenInteractableUnselected_23(MultiAction_1_tF72F1B4A8CBD8B10E4E59AD4CBF562C3A61D8A03 * value)
	{
		____whenInteractableUnselected_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenInteractableUnselected_23), (void*)value);
	}

	inline static int32_t get_offset_of__identifier_24() { return static_cast<int32_t>(offsetof(Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708, ____identifier_24)); }
	inline UniqueIdentifier_t6B285BB7F8B76C663C4349D6959DB637E621A42A * get__identifier_24() const { return ____identifier_24; }
	inline UniqueIdentifier_t6B285BB7F8B76C663C4349D6959DB637E621A42A ** get_address_of__identifier_24() { return &____identifier_24; }
	inline void set__identifier_24(UniqueIdentifier_t6B285BB7F8B76C663C4349D6959DB637E621A42A * value)
	{
		____identifier_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identifier_24), (void*)value);
	}

	inline static int32_t get_offset_of__started_25() { return static_cast<int32_t>(offsetof(Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708, ____started_25)); }
	inline bool get__started_25() const { return ____started_25; }
	inline bool* get_address_of__started_25() { return &____started_25; }
	inline void set__started_25(bool value)
	{
		____started_25 = value;
	}

	inline static int32_t get_offset_of_U3CIsRootDriverU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708, ___U3CIsRootDriverU3Ek__BackingField_26)); }
	inline bool get_U3CIsRootDriverU3Ek__BackingField_26() const { return ___U3CIsRootDriverU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CIsRootDriverU3Ek__BackingField_26() { return &___U3CIsRootDriverU3Ek__BackingField_26; }
	inline void set_U3CIsRootDriverU3Ek__BackingField_26(bool value)
	{
		___U3CIsRootDriverU3Ek__BackingField_26 = value;
	}
};


// Oculus.Interaction.ActiveStateSelector
struct ActiveStateSelector_t51C3BFDADBBFB1B4F82C6AB8B4A9334BEDDDB3C6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.MonoBehaviour Oculus.Interaction.ActiveStateSelector::_activeState
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ____activeState_4;
	// Oculus.Interaction.IActiveState Oculus.Interaction.ActiveStateSelector::ActiveState
	RuntimeObject* ___ActiveState_5;
	// System.Boolean Oculus.Interaction.ActiveStateSelector::_selecting
	bool ____selecting_6;
	// System.Action Oculus.Interaction.ActiveStateSelector::WhenSelected
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___WhenSelected_7;
	// System.Action Oculus.Interaction.ActiveStateSelector::WhenUnselected
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___WhenUnselected_8;

public:
	inline static int32_t get_offset_of__activeState_4() { return static_cast<int32_t>(offsetof(ActiveStateSelector_t51C3BFDADBBFB1B4F82C6AB8B4A9334BEDDDB3C6, ____activeState_4)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get__activeState_4() const { return ____activeState_4; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of__activeState_4() { return &____activeState_4; }
	inline void set__activeState_4(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		____activeState_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeState_4), (void*)value);
	}

	inline static int32_t get_offset_of_ActiveState_5() { return static_cast<int32_t>(offsetof(ActiveStateSelector_t51C3BFDADBBFB1B4F82C6AB8B4A9334BEDDDB3C6, ___ActiveState_5)); }
	inline RuntimeObject* get_ActiveState_5() const { return ___ActiveState_5; }
	inline RuntimeObject** get_address_of_ActiveState_5() { return &___ActiveState_5; }
	inline void set_ActiveState_5(RuntimeObject* value)
	{
		___ActiveState_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveState_5), (void*)value);
	}

	inline static int32_t get_offset_of__selecting_6() { return static_cast<int32_t>(offsetof(ActiveStateSelector_t51C3BFDADBBFB1B4F82C6AB8B4A9334BEDDDB3C6, ____selecting_6)); }
	inline bool get__selecting_6() const { return ____selecting_6; }
	inline bool* get_address_of__selecting_6() { return &____selecting_6; }
	inline void set__selecting_6(bool value)
	{
		____selecting_6 = value;
	}

	inline static int32_t get_offset_of_WhenSelected_7() { return static_cast<int32_t>(offsetof(ActiveStateSelector_t51C3BFDADBBFB1B4F82C6AB8B4A9334BEDDDB3C6, ___WhenSelected_7)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_WhenSelected_7() const { return ___WhenSelected_7; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_WhenSelected_7() { return &___WhenSelected_7; }
	inline void set_WhenSelected_7(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___WhenSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_WhenUnselected_8() { return static_cast<int32_t>(offsetof(ActiveStateSelector_t51C3BFDADBBFB1B4F82C6AB8B4A9334BEDDDB3C6, ___WhenUnselected_8)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_WhenUnselected_8() const { return ___WhenUnselected_8; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_WhenUnselected_8() { return &___WhenUnselected_8; }
	inline void set_WhenUnselected_8(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___WhenUnselected_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenUnselected_8), (void*)value);
	}
};


// Oculus.Interaction.AudioPhysics
struct AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody Oculus.Interaction.AudioPhysics::_rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ____rigidbody_4;
	// Oculus.Interaction.ImpactAudio Oculus.Interaction.AudioPhysics::_impactAudioEvents
	ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F  ____impactAudioEvents_5;
	// System.Single Oculus.Interaction.AudioPhysics::_velocitySplit
	float ____velocitySplit_6;
	// System.Single Oculus.Interaction.AudioPhysics::_minimumVelocity
	float ____minimumVelocity_7;
	// System.Single Oculus.Interaction.AudioPhysics::_timeBetweenCollisions
	float ____timeBetweenCollisions_8;
	// System.Boolean Oculus.Interaction.AudioPhysics::_allowMultipleCollisions
	bool ____allowMultipleCollisions_9;
	// System.Single Oculus.Interaction.AudioPhysics::_timeAtLastCollision
	float ____timeAtLastCollision_10;
	// System.Boolean Oculus.Interaction.AudioPhysics::_started
	bool ____started_11;
	// Oculus.Interaction.AudioPhysics/CollisionEvents Oculus.Interaction.AudioPhysics::_collisionEvents
	CollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E * ____collisionEvents_12;

public:
	inline static int32_t get_offset_of__rigidbody_4() { return static_cast<int32_t>(offsetof(AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84, ____rigidbody_4)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get__rigidbody_4() const { return ____rigidbody_4; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of__rigidbody_4() { return &____rigidbody_4; }
	inline void set__rigidbody_4(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		____rigidbody_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rigidbody_4), (void*)value);
	}

	inline static int32_t get_offset_of__impactAudioEvents_5() { return static_cast<int32_t>(offsetof(AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84, ____impactAudioEvents_5)); }
	inline ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F  get__impactAudioEvents_5() const { return ____impactAudioEvents_5; }
	inline ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F * get_address_of__impactAudioEvents_5() { return &____impactAudioEvents_5; }
	inline void set__impactAudioEvents_5(ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F  value)
	{
		____impactAudioEvents_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____impactAudioEvents_5))->____hardCollisionSound_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____impactAudioEvents_5))->____softCollisionSound_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__velocitySplit_6() { return static_cast<int32_t>(offsetof(AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84, ____velocitySplit_6)); }
	inline float get__velocitySplit_6() const { return ____velocitySplit_6; }
	inline float* get_address_of__velocitySplit_6() { return &____velocitySplit_6; }
	inline void set__velocitySplit_6(float value)
	{
		____velocitySplit_6 = value;
	}

	inline static int32_t get_offset_of__minimumVelocity_7() { return static_cast<int32_t>(offsetof(AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84, ____minimumVelocity_7)); }
	inline float get__minimumVelocity_7() const { return ____minimumVelocity_7; }
	inline float* get_address_of__minimumVelocity_7() { return &____minimumVelocity_7; }
	inline void set__minimumVelocity_7(float value)
	{
		____minimumVelocity_7 = value;
	}

	inline static int32_t get_offset_of__timeBetweenCollisions_8() { return static_cast<int32_t>(offsetof(AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84, ____timeBetweenCollisions_8)); }
	inline float get__timeBetweenCollisions_8() const { return ____timeBetweenCollisions_8; }
	inline float* get_address_of__timeBetweenCollisions_8() { return &____timeBetweenCollisions_8; }
	inline void set__timeBetweenCollisions_8(float value)
	{
		____timeBetweenCollisions_8 = value;
	}

	inline static int32_t get_offset_of__allowMultipleCollisions_9() { return static_cast<int32_t>(offsetof(AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84, ____allowMultipleCollisions_9)); }
	inline bool get__allowMultipleCollisions_9() const { return ____allowMultipleCollisions_9; }
	inline bool* get_address_of__allowMultipleCollisions_9() { return &____allowMultipleCollisions_9; }
	inline void set__allowMultipleCollisions_9(bool value)
	{
		____allowMultipleCollisions_9 = value;
	}

	inline static int32_t get_offset_of__timeAtLastCollision_10() { return static_cast<int32_t>(offsetof(AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84, ____timeAtLastCollision_10)); }
	inline float get__timeAtLastCollision_10() const { return ____timeAtLastCollision_10; }
	inline float* get_address_of__timeAtLastCollision_10() { return &____timeAtLastCollision_10; }
	inline void set__timeAtLastCollision_10(float value)
	{
		____timeAtLastCollision_10 = value;
	}

	inline static int32_t get_offset_of__started_11() { return static_cast<int32_t>(offsetof(AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84, ____started_11)); }
	inline bool get__started_11() const { return ____started_11; }
	inline bool* get_address_of__started_11() { return &____started_11; }
	inline void set__started_11(bool value)
	{
		____started_11 = value;
	}

	inline static int32_t get_offset_of__collisionEvents_12() { return static_cast<int32_t>(offsetof(AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84, ____collisionEvents_12)); }
	inline CollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E * get__collisionEvents_12() const { return ____collisionEvents_12; }
	inline CollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E ** get_address_of__collisionEvents_12() { return &____collisionEvents_12; }
	inline void set__collisionEvents_12(CollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E * value)
	{
		____collisionEvents_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____collisionEvents_12), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Oculus.Interaction.AudioTrigger
struct AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource Oculus.Interaction.AudioTrigger::_audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____audioSource_4;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> Oculus.Interaction.AudioTrigger::_randomAudioClipPool
	List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * ____randomAudioClipPool_5;
	// UnityEngine.AudioClip Oculus.Interaction.AudioTrigger::_previousAudioClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ____previousAudioClip_6;
	// UnityEngine.AudioClip[] Oculus.Interaction.AudioTrigger::_audioClips
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ____audioClips_7;
	// System.Single Oculus.Interaction.AudioTrigger::_volume
	float ____volume_8;
	// Oculus.Interaction.MinMaxPair Oculus.Interaction.AudioTrigger::_volumeRandomization
	MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95  ____volumeRandomization_9;
	// System.Single Oculus.Interaction.AudioTrigger::_pitch
	float ____pitch_10;
	// Oculus.Interaction.MinMaxPair Oculus.Interaction.AudioTrigger::_pitchRandomization
	MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95  ____pitchRandomization_11;
	// System.Boolean Oculus.Interaction.AudioTrigger::_spatialize
	bool ____spatialize_12;
	// System.Boolean Oculus.Interaction.AudioTrigger::_loop
	bool ____loop_13;
	// System.Single Oculus.Interaction.AudioTrigger::_chanceToPlay
	float ____chanceToPlay_14;
	// System.Boolean Oculus.Interaction.AudioTrigger::_playOnStart
	bool ____playOnStart_15;

public:
	inline static int32_t get_offset_of__audioSource_4() { return static_cast<int32_t>(offsetof(AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802, ____audioSource_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__audioSource_4() const { return ____audioSource_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__audioSource_4() { return &____audioSource_4; }
	inline void set__audioSource_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____audioSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____audioSource_4), (void*)value);
	}

	inline static int32_t get_offset_of__randomAudioClipPool_5() { return static_cast<int32_t>(offsetof(AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802, ____randomAudioClipPool_5)); }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * get__randomAudioClipPool_5() const { return ____randomAudioClipPool_5; }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 ** get_address_of__randomAudioClipPool_5() { return &____randomAudioClipPool_5; }
	inline void set__randomAudioClipPool_5(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * value)
	{
		____randomAudioClipPool_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____randomAudioClipPool_5), (void*)value);
	}

	inline static int32_t get_offset_of__previousAudioClip_6() { return static_cast<int32_t>(offsetof(AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802, ____previousAudioClip_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get__previousAudioClip_6() const { return ____previousAudioClip_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of__previousAudioClip_6() { return &____previousAudioClip_6; }
	inline void set__previousAudioClip_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		____previousAudioClip_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previousAudioClip_6), (void*)value);
	}

	inline static int32_t get_offset_of__audioClips_7() { return static_cast<int32_t>(offsetof(AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802, ____audioClips_7)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get__audioClips_7() const { return ____audioClips_7; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of__audioClips_7() { return &____audioClips_7; }
	inline void set__audioClips_7(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		____audioClips_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____audioClips_7), (void*)value);
	}

	inline static int32_t get_offset_of__volume_8() { return static_cast<int32_t>(offsetof(AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802, ____volume_8)); }
	inline float get__volume_8() const { return ____volume_8; }
	inline float* get_address_of__volume_8() { return &____volume_8; }
	inline void set__volume_8(float value)
	{
		____volume_8 = value;
	}

	inline static int32_t get_offset_of__volumeRandomization_9() { return static_cast<int32_t>(offsetof(AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802, ____volumeRandomization_9)); }
	inline MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95  get__volumeRandomization_9() const { return ____volumeRandomization_9; }
	inline MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 * get_address_of__volumeRandomization_9() { return &____volumeRandomization_9; }
	inline void set__volumeRandomization_9(MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95  value)
	{
		____volumeRandomization_9 = value;
	}

	inline static int32_t get_offset_of__pitch_10() { return static_cast<int32_t>(offsetof(AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802, ____pitch_10)); }
	inline float get__pitch_10() const { return ____pitch_10; }
	inline float* get_address_of__pitch_10() { return &____pitch_10; }
	inline void set__pitch_10(float value)
	{
		____pitch_10 = value;
	}

	inline static int32_t get_offset_of__pitchRandomization_11() { return static_cast<int32_t>(offsetof(AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802, ____pitchRandomization_11)); }
	inline MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95  get__pitchRandomization_11() const { return ____pitchRandomization_11; }
	inline MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 * get_address_of__pitchRandomization_11() { return &____pitchRandomization_11; }
	inline void set__pitchRandomization_11(MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95  value)
	{
		____pitchRandomization_11 = value;
	}

	inline static int32_t get_offset_of__spatialize_12() { return static_cast<int32_t>(offsetof(AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802, ____spatialize_12)); }
	inline bool get__spatialize_12() const { return ____spatialize_12; }
	inline bool* get_address_of__spatialize_12() { return &____spatialize_12; }
	inline void set__spatialize_12(bool value)
	{
		____spatialize_12 = value;
	}

	inline static int32_t get_offset_of__loop_13() { return static_cast<int32_t>(offsetof(AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802, ____loop_13)); }
	inline bool get__loop_13() const { return ____loop_13; }
	inline bool* get_address_of__loop_13() { return &____loop_13; }
	inline void set__loop_13(bool value)
	{
		____loop_13 = value;
	}

	inline static int32_t get_offset_of__chanceToPlay_14() { return static_cast<int32_t>(offsetof(AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802, ____chanceToPlay_14)); }
	inline float get__chanceToPlay_14() const { return ____chanceToPlay_14; }
	inline float* get_address_of__chanceToPlay_14() { return &____chanceToPlay_14; }
	inline void set__chanceToPlay_14(float value)
	{
		____chanceToPlay_14 = value;
	}

	inline static int32_t get_offset_of__playOnStart_15() { return static_cast<int32_t>(offsetof(AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802, ____playOnStart_15)); }
	inline bool get__playOnStart_15() const { return ____playOnStart_15; }
	inline bool* get_address_of__playOnStart_15() { return &____playOnStart_15; }
	inline void set__playOnStart_15(bool value)
	{
		____playOnStart_15 = value;
	}
};


// Oculus.Interaction.Samples.CarouselView
struct CarouselView_t77A98CAF9321FDC3BF0186F229F9449402526024  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.RectTransform Oculus.Interaction.Samples.CarouselView::_viewport
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ____viewport_4;
	// UnityEngine.RectTransform Oculus.Interaction.Samples.CarouselView::_content
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ____content_5;
	// UnityEngine.AnimationCurve Oculus.Interaction.Samples.CarouselView::_easeCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ____easeCurve_6;
	// System.Int32 Oculus.Interaction.Samples.CarouselView::_currentChildIndex
	int32_t ____currentChildIndex_7;
	// System.Single Oculus.Interaction.Samples.CarouselView::_scrollVal
	float ____scrollVal_8;

public:
	inline static int32_t get_offset_of__viewport_4() { return static_cast<int32_t>(offsetof(CarouselView_t77A98CAF9321FDC3BF0186F229F9449402526024, ____viewport_4)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get__viewport_4() const { return ____viewport_4; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of__viewport_4() { return &____viewport_4; }
	inline void set__viewport_4(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		____viewport_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____viewport_4), (void*)value);
	}

	inline static int32_t get_offset_of__content_5() { return static_cast<int32_t>(offsetof(CarouselView_t77A98CAF9321FDC3BF0186F229F9449402526024, ____content_5)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get__content_5() const { return ____content_5; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of__content_5() { return &____content_5; }
	inline void set__content_5(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		____content_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____content_5), (void*)value);
	}

	inline static int32_t get_offset_of__easeCurve_6() { return static_cast<int32_t>(offsetof(CarouselView_t77A98CAF9321FDC3BF0186F229F9449402526024, ____easeCurve_6)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get__easeCurve_6() const { return ____easeCurve_6; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of__easeCurve_6() { return &____easeCurve_6; }
	inline void set__easeCurve_6(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		____easeCurve_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____easeCurve_6), (void*)value);
	}

	inline static int32_t get_offset_of__currentChildIndex_7() { return static_cast<int32_t>(offsetof(CarouselView_t77A98CAF9321FDC3BF0186F229F9449402526024, ____currentChildIndex_7)); }
	inline int32_t get__currentChildIndex_7() const { return ____currentChildIndex_7; }
	inline int32_t* get_address_of__currentChildIndex_7() { return &____currentChildIndex_7; }
	inline void set__currentChildIndex_7(int32_t value)
	{
		____currentChildIndex_7 = value;
	}

	inline static int32_t get_offset_of__scrollVal_8() { return static_cast<int32_t>(offsetof(CarouselView_t77A98CAF9321FDC3BF0186F229F9449402526024, ____scrollVal_8)); }
	inline float get__scrollVal_8() const { return ____scrollVal_8; }
	inline float* get_address_of__scrollVal_8() { return &____scrollVal_8; }
	inline void set__scrollVal_8(float value)
	{
		____scrollVal_8 = value;
	}
};


// Oculus.Interaction.Samples.ColorChanger
struct ColorChanger_tAB17D273524FADE6C4DA19DCCAB5F510ECF6989A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Renderer Oculus.Interaction.Samples.ColorChanger::_target
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ____target_4;
	// UnityEngine.Material Oculus.Interaction.Samples.ColorChanger::_targetMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ____targetMaterial_5;
	// UnityEngine.Color Oculus.Interaction.Samples.ColorChanger::_savedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____savedColor_6;
	// System.Single Oculus.Interaction.Samples.ColorChanger::_lastHue
	float ____lastHue_7;

public:
	inline static int32_t get_offset_of__target_4() { return static_cast<int32_t>(offsetof(ColorChanger_tAB17D273524FADE6C4DA19DCCAB5F510ECF6989A, ____target_4)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get__target_4() const { return ____target_4; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of__target_4() { return &____target_4; }
	inline void set__target_4(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		____target_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____target_4), (void*)value);
	}

	inline static int32_t get_offset_of__targetMaterial_5() { return static_cast<int32_t>(offsetof(ColorChanger_tAB17D273524FADE6C4DA19DCCAB5F510ECF6989A, ____targetMaterial_5)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get__targetMaterial_5() const { return ____targetMaterial_5; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of__targetMaterial_5() { return &____targetMaterial_5; }
	inline void set__targetMaterial_5(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		____targetMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____targetMaterial_5), (void*)value);
	}

	inline static int32_t get_offset_of__savedColor_6() { return static_cast<int32_t>(offsetof(ColorChanger_tAB17D273524FADE6C4DA19DCCAB5F510ECF6989A, ____savedColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__savedColor_6() const { return ____savedColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__savedColor_6() { return &____savedColor_6; }
	inline void set__savedColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____savedColor_6 = value;
	}

	inline static int32_t get_offset_of__lastHue_7() { return static_cast<int32_t>(offsetof(ColorChanger_tAB17D273524FADE6C4DA19DCCAB5F510ECF6989A, ____lastHue_7)); }
	inline float get__lastHue_7() const { return ____lastHue_7; }
	inline float* get_address_of__lastHue_7() { return &____lastHue_7; }
	inline void set__lastHue_7(float value)
	{
		____lastHue_7 = value;
	}
};


// Oculus.Interaction.Samples.CountdownTimer
struct CountdownTimer_tDD91BB7F46D12C91085C089E1E9E3326B069723B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Oculus.Interaction.Samples.CountdownTimer::_countdownTime
	float ____countdownTime_4;
	// System.Boolean Oculus.Interaction.Samples.CountdownTimer::_countdownOn
	bool ____countdownOn_5;
	// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.CountdownTimer::_callback
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ____callback_6;
	// UnityEngine.Events.UnityEvent`1<System.Single> Oculus.Interaction.Samples.CountdownTimer::_progressCallback
	UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * ____progressCallback_7;
	// System.Single Oculus.Interaction.Samples.CountdownTimer::_countdownTimer
	float ____countdownTimer_8;

public:
	inline static int32_t get_offset_of__countdownTime_4() { return static_cast<int32_t>(offsetof(CountdownTimer_tDD91BB7F46D12C91085C089E1E9E3326B069723B, ____countdownTime_4)); }
	inline float get__countdownTime_4() const { return ____countdownTime_4; }
	inline float* get_address_of__countdownTime_4() { return &____countdownTime_4; }
	inline void set__countdownTime_4(float value)
	{
		____countdownTime_4 = value;
	}

	inline static int32_t get_offset_of__countdownOn_5() { return static_cast<int32_t>(offsetof(CountdownTimer_tDD91BB7F46D12C91085C089E1E9E3326B069723B, ____countdownOn_5)); }
	inline bool get__countdownOn_5() const { return ____countdownOn_5; }
	inline bool* get_address_of__countdownOn_5() { return &____countdownOn_5; }
	inline void set__countdownOn_5(bool value)
	{
		____countdownOn_5 = value;
	}

	inline static int32_t get_offset_of__callback_6() { return static_cast<int32_t>(offsetof(CountdownTimer_tDD91BB7F46D12C91085C089E1E9E3326B069723B, ____callback_6)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get__callback_6() const { return ____callback_6; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of__callback_6() { return &____callback_6; }
	inline void set__callback_6(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		____callback_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callback_6), (void*)value);
	}

	inline static int32_t get_offset_of__progressCallback_7() { return static_cast<int32_t>(offsetof(CountdownTimer_tDD91BB7F46D12C91085C089E1E9E3326B069723B, ____progressCallback_7)); }
	inline UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * get__progressCallback_7() const { return ____progressCallback_7; }
	inline UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC ** get_address_of__progressCallback_7() { return &____progressCallback_7; }
	inline void set__progressCallback_7(UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * value)
	{
		____progressCallback_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____progressCallback_7), (void*)value);
	}

	inline static int32_t get_offset_of__countdownTimer_8() { return static_cast<int32_t>(offsetof(CountdownTimer_tDD91BB7F46D12C91085C089E1E9E3326B069723B, ____countdownTimer_8)); }
	inline float get__countdownTimer_8() const { return ____countdownTimer_8; }
	inline float* get_address_of__countdownTimer_8() { return &____countdownTimer_8; }
	inline void set__countdownTimer_8(float value)
	{
		____countdownTimer_8 = value;
	}
};


// Oculus.Interaction.Samples.EnableTargetOnStart
struct EnableTargetOnStart_t8889D6C4B4233172FE2A3C3E58DE2F1611641AB0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.MonoBehaviour[] Oculus.Interaction.Samples.EnableTargetOnStart::_components
	MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* ____components_4;
	// UnityEngine.GameObject[] Oculus.Interaction.Samples.EnableTargetOnStart::_gameObjects
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____gameObjects_5;

public:
	inline static int32_t get_offset_of__components_4() { return static_cast<int32_t>(offsetof(EnableTargetOnStart_t8889D6C4B4233172FE2A3C3E58DE2F1611641AB0, ____components_4)); }
	inline MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* get__components_4() const { return ____components_4; }
	inline MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D** get_address_of__components_4() { return &____components_4; }
	inline void set__components_4(MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* value)
	{
		____components_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____components_4), (void*)value);
	}

	inline static int32_t get_offset_of__gameObjects_5() { return static_cast<int32_t>(offsetof(EnableTargetOnStart_t8889D6C4B4233172FE2A3C3E58DE2F1611641AB0, ____gameObjects_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__gameObjects_5() const { return ____gameObjects_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__gameObjects_5() { return &____gameObjects_5; }
	inline void set__gameObjects_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____gameObjects_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gameObjects_5), (void*)value);
	}
};


// Oculus.Interaction.Samples.FadeTextAfterActive
struct FadeTextAfterActive_t64553A5A3A66DC0BC56D3397113E96D1642AD1EB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Oculus.Interaction.Samples.FadeTextAfterActive::_fadeOutTime
	float ____fadeOutTime_4;
	// TMPro.TextMeshPro Oculus.Interaction.Samples.FadeTextAfterActive::_text
	TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * ____text_5;
	// System.Single Oculus.Interaction.Samples.FadeTextAfterActive::_timeLeft
	float ____timeLeft_6;

public:
	inline static int32_t get_offset_of__fadeOutTime_4() { return static_cast<int32_t>(offsetof(FadeTextAfterActive_t64553A5A3A66DC0BC56D3397113E96D1642AD1EB, ____fadeOutTime_4)); }
	inline float get__fadeOutTime_4() const { return ____fadeOutTime_4; }
	inline float* get_address_of__fadeOutTime_4() { return &____fadeOutTime_4; }
	inline void set__fadeOutTime_4(float value)
	{
		____fadeOutTime_4 = value;
	}

	inline static int32_t get_offset_of__text_5() { return static_cast<int32_t>(offsetof(FadeTextAfterActive_t64553A5A3A66DC0BC56D3397113E96D1642AD1EB, ____text_5)); }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * get__text_5() const { return ____text_5; }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 ** get_address_of__text_5() { return &____text_5; }
	inline void set__text_5(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * value)
	{
		____text_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____text_5), (void*)value);
	}

	inline static int32_t get_offset_of__timeLeft_6() { return static_cast<int32_t>(offsetof(FadeTextAfterActive_t64553A5A3A66DC0BC56D3397113E96D1642AD1EB, ____timeLeft_6)); }
	inline float get__timeLeft_6() const { return ____timeLeft_6; }
	inline float* get_address_of__timeLeft_6() { return &____timeLeft_6; }
	inline void set__timeLeft_6(float value)
	{
		____timeLeft_6 = value;
	}
};


// Oculus.Interaction.Input.HandRef
struct HandRef_tA7E4A60786B2D1BCE6D014EE0EC0DB85EFA46109  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.MonoBehaviour Oculus.Interaction.Input.HandRef::_hand
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ____hand_4;
	// Oculus.Interaction.Input.IHand Oculus.Interaction.Input.HandRef::<Hand>k__BackingField
	RuntimeObject* ___U3CHandU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__hand_4() { return static_cast<int32_t>(offsetof(HandRef_tA7E4A60786B2D1BCE6D014EE0EC0DB85EFA46109, ____hand_4)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get__hand_4() const { return ____hand_4; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of__hand_4() { return &____hand_4; }
	inline void set__hand_4(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		____hand_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hand_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(HandRef_tA7E4A60786B2D1BCE6D014EE0EC0DB85EFA46109, ___U3CHandU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CHandU3Ek__BackingField_5() const { return ___U3CHandU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CHandU3Ek__BackingField_5() { return &___U3CHandU3Ek__BackingField_5; }
	inline void set_U3CHandU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CHandU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandU3Ek__BackingField_5), (void*)value);
	}
};


// Oculus.Interaction.HandVisual
struct HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.MonoBehaviour Oculus.Interaction.HandVisual::_hand
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ____hand_4;
	// Oculus.Interaction.Input.IHand Oculus.Interaction.HandVisual::Hand
	RuntimeObject* ___Hand_5;
	// UnityEngine.SkinnedMeshRenderer Oculus.Interaction.HandVisual::_skinnedMeshRenderer
	SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * ____skinnedMeshRenderer_6;
	// System.Boolean Oculus.Interaction.HandVisual::_updateRootPose
	bool ____updateRootPose_7;
	// System.Boolean Oculus.Interaction.HandVisual::_updateRootScale
	bool ____updateRootScale_8;
	// UnityEngine.Transform Oculus.Interaction.HandVisual::_root
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____root_9;
	// Oculus.Interaction.MaterialPropertyBlockEditor Oculus.Interaction.HandVisual::_handMaterialPropertyBlockEditor
	MaterialPropertyBlockEditor_t3AB1FDF8D622BDD44D966A6C95625560B1B90E90 * ____handMaterialPropertyBlockEditor_10;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Oculus.Interaction.HandVisual::_jointTransforms
	List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ____jointTransforms_11;
	// System.Action Oculus.Interaction.HandVisual::WhenHandVisualUpdated
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___WhenHandVisualUpdated_12;
	// System.Int32 Oculus.Interaction.HandVisual::_wristScalePropertyId
	int32_t ____wristScalePropertyId_13;
	// System.Boolean Oculus.Interaction.HandVisual::<ForceOffVisibility>k__BackingField
	bool ___U3CForceOffVisibilityU3Ek__BackingField_14;
	// System.Boolean Oculus.Interaction.HandVisual::_started
	bool ____started_15;

public:
	inline static int32_t get_offset_of__hand_4() { return static_cast<int32_t>(offsetof(HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E, ____hand_4)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get__hand_4() const { return ____hand_4; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of__hand_4() { return &____hand_4; }
	inline void set__hand_4(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		____hand_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hand_4), (void*)value);
	}

	inline static int32_t get_offset_of_Hand_5() { return static_cast<int32_t>(offsetof(HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E, ___Hand_5)); }
	inline RuntimeObject* get_Hand_5() const { return ___Hand_5; }
	inline RuntimeObject** get_address_of_Hand_5() { return &___Hand_5; }
	inline void set_Hand_5(RuntimeObject* value)
	{
		___Hand_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Hand_5), (void*)value);
	}

	inline static int32_t get_offset_of__skinnedMeshRenderer_6() { return static_cast<int32_t>(offsetof(HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E, ____skinnedMeshRenderer_6)); }
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * get__skinnedMeshRenderer_6() const { return ____skinnedMeshRenderer_6; }
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 ** get_address_of__skinnedMeshRenderer_6() { return &____skinnedMeshRenderer_6; }
	inline void set__skinnedMeshRenderer_6(SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * value)
	{
		____skinnedMeshRenderer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____skinnedMeshRenderer_6), (void*)value);
	}

	inline static int32_t get_offset_of__updateRootPose_7() { return static_cast<int32_t>(offsetof(HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E, ____updateRootPose_7)); }
	inline bool get__updateRootPose_7() const { return ____updateRootPose_7; }
	inline bool* get_address_of__updateRootPose_7() { return &____updateRootPose_7; }
	inline void set__updateRootPose_7(bool value)
	{
		____updateRootPose_7 = value;
	}

	inline static int32_t get_offset_of__updateRootScale_8() { return static_cast<int32_t>(offsetof(HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E, ____updateRootScale_8)); }
	inline bool get__updateRootScale_8() const { return ____updateRootScale_8; }
	inline bool* get_address_of__updateRootScale_8() { return &____updateRootScale_8; }
	inline void set__updateRootScale_8(bool value)
	{
		____updateRootScale_8 = value;
	}

	inline static int32_t get_offset_of__root_9() { return static_cast<int32_t>(offsetof(HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E, ____root_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__root_9() const { return ____root_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__root_9() { return &____root_9; }
	inline void set__root_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____root_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____root_9), (void*)value);
	}

	inline static int32_t get_offset_of__handMaterialPropertyBlockEditor_10() { return static_cast<int32_t>(offsetof(HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E, ____handMaterialPropertyBlockEditor_10)); }
	inline MaterialPropertyBlockEditor_t3AB1FDF8D622BDD44D966A6C95625560B1B90E90 * get__handMaterialPropertyBlockEditor_10() const { return ____handMaterialPropertyBlockEditor_10; }
	inline MaterialPropertyBlockEditor_t3AB1FDF8D622BDD44D966A6C95625560B1B90E90 ** get_address_of__handMaterialPropertyBlockEditor_10() { return &____handMaterialPropertyBlockEditor_10; }
	inline void set__handMaterialPropertyBlockEditor_10(MaterialPropertyBlockEditor_t3AB1FDF8D622BDD44D966A6C95625560B1B90E90 * value)
	{
		____handMaterialPropertyBlockEditor_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____handMaterialPropertyBlockEditor_10), (void*)value);
	}

	inline static int32_t get_offset_of__jointTransforms_11() { return static_cast<int32_t>(offsetof(HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E, ____jointTransforms_11)); }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * get__jointTransforms_11() const { return ____jointTransforms_11; }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 ** get_address_of__jointTransforms_11() { return &____jointTransforms_11; }
	inline void set__jointTransforms_11(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * value)
	{
		____jointTransforms_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____jointTransforms_11), (void*)value);
	}

	inline static int32_t get_offset_of_WhenHandVisualUpdated_12() { return static_cast<int32_t>(offsetof(HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E, ___WhenHandVisualUpdated_12)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_WhenHandVisualUpdated_12() const { return ___WhenHandVisualUpdated_12; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_WhenHandVisualUpdated_12() { return &___WhenHandVisualUpdated_12; }
	inline void set_WhenHandVisualUpdated_12(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___WhenHandVisualUpdated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenHandVisualUpdated_12), (void*)value);
	}

	inline static int32_t get_offset_of__wristScalePropertyId_13() { return static_cast<int32_t>(offsetof(HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E, ____wristScalePropertyId_13)); }
	inline int32_t get__wristScalePropertyId_13() const { return ____wristScalePropertyId_13; }
	inline int32_t* get_address_of__wristScalePropertyId_13() { return &____wristScalePropertyId_13; }
	inline void set__wristScalePropertyId_13(int32_t value)
	{
		____wristScalePropertyId_13 = value;
	}

	inline static int32_t get_offset_of_U3CForceOffVisibilityU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E, ___U3CForceOffVisibilityU3Ek__BackingField_14)); }
	inline bool get_U3CForceOffVisibilityU3Ek__BackingField_14() const { return ___U3CForceOffVisibilityU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CForceOffVisibilityU3Ek__BackingField_14() { return &___U3CForceOffVisibilityU3Ek__BackingField_14; }
	inline void set_U3CForceOffVisibilityU3Ek__BackingField_14(bool value)
	{
		___U3CForceOffVisibilityU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of__started_15() { return static_cast<int32_t>(offsetof(HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E, ____started_15)); }
	inline bool get__started_15() const { return ____started_15; }
	inline bool* get_address_of__started_15() { return &____started_15; }
	inline void set__started_15(bool value)
	{
		____started_15 = value;
	}
};


// Oculus.Interaction.Samples.HideHandVisualOnGrab
struct HideHandVisualOnGrab_t3BFB67203DE710975A7593C3776BCF49CA5D2CC3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Oculus.Interaction.HandPosing.HandGrabInteractor Oculus.Interaction.Samples.HideHandVisualOnGrab::_handGrabInteractor
	HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3 * ____handGrabInteractor_4;
	// Oculus.Interaction.HandVisual Oculus.Interaction.Samples.HideHandVisualOnGrab::_handVisual
	HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E * ____handVisual_5;

public:
	inline static int32_t get_offset_of__handGrabInteractor_4() { return static_cast<int32_t>(offsetof(HideHandVisualOnGrab_t3BFB67203DE710975A7593C3776BCF49CA5D2CC3, ____handGrabInteractor_4)); }
	inline HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3 * get__handGrabInteractor_4() const { return ____handGrabInteractor_4; }
	inline HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3 ** get_address_of__handGrabInteractor_4() { return &____handGrabInteractor_4; }
	inline void set__handGrabInteractor_4(HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3 * value)
	{
		____handGrabInteractor_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____handGrabInteractor_4), (void*)value);
	}

	inline static int32_t get_offset_of__handVisual_5() { return static_cast<int32_t>(offsetof(HideHandVisualOnGrab_t3BFB67203DE710975A7593C3776BCF49CA5D2CC3, ____handVisual_5)); }
	inline HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E * get__handVisual_5() const { return ____handVisual_5; }
	inline HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E ** get_address_of__handVisual_5() { return &____handVisual_5; }
	inline void set__handVisual_5(HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E * value)
	{
		____handVisual_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____handVisual_5), (void*)value);
	}
};


// Oculus.Interaction.Samples.LookAtTarget
struct LookAtTarget_t321B379F9BAC9086781C65D6E21FDA3E7C475F60  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Oculus.Interaction.Samples.LookAtTarget::_toRotate
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____toRotate_4;
	// UnityEngine.Transform Oculus.Interaction.Samples.LookAtTarget::_target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____target_5;

public:
	inline static int32_t get_offset_of__toRotate_4() { return static_cast<int32_t>(offsetof(LookAtTarget_t321B379F9BAC9086781C65D6E21FDA3E7C475F60, ____toRotate_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__toRotate_4() const { return ____toRotate_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__toRotate_4() { return &____toRotate_4; }
	inline void set__toRotate_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____toRotate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____toRotate_4), (void*)value);
	}

	inline static int32_t get_offset_of__target_5() { return static_cast<int32_t>(offsetof(LookAtTarget_t321B379F9BAC9086781C65D6E21FDA3E7C475F60, ____target_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__target_5() const { return ____target_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__target_5() { return &____target_5; }
	inline void set__target_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____target_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____target_5), (void*)value);
	}
};


// OVRCameraRig
struct OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform OVRCameraRig::<trackingSpace>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CtrackingSpaceU3Ek__BackingField_4;
	// UnityEngine.Transform OVRCameraRig::<leftEyeAnchor>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CleftEyeAnchorU3Ek__BackingField_5;
	// UnityEngine.Transform OVRCameraRig::<centerEyeAnchor>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CcenterEyeAnchorU3Ek__BackingField_6;
	// UnityEngine.Transform OVRCameraRig::<rightEyeAnchor>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CrightEyeAnchorU3Ek__BackingField_7;
	// UnityEngine.Transform OVRCameraRig::<leftHandAnchor>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CleftHandAnchorU3Ek__BackingField_8;
	// UnityEngine.Transform OVRCameraRig::<rightHandAnchor>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CrightHandAnchorU3Ek__BackingField_9;
	// UnityEngine.Transform OVRCameraRig::<leftControllerAnchor>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CleftControllerAnchorU3Ek__BackingField_10;
	// UnityEngine.Transform OVRCameraRig::<rightControllerAnchor>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CrightControllerAnchorU3Ek__BackingField_11;
	// UnityEngine.Transform OVRCameraRig::<trackerAnchor>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CtrackerAnchorU3Ek__BackingField_12;
	// System.Action`1<OVRCameraRig> OVRCameraRig::UpdatedAnchors
	Action_1_t75B6371B869E36A42B0DFFC8D8B2630F1D659A6C * ___UpdatedAnchors_13;
	// System.Boolean OVRCameraRig::usePerEyeCameras
	bool ___usePerEyeCameras_14;
	// System.Boolean OVRCameraRig::useFixedUpdateForTracking
	bool ___useFixedUpdateForTracking_15;
	// System.Boolean OVRCameraRig::disableEyeAnchorCameras
	bool ___disableEyeAnchorCameras_16;
	// System.Boolean OVRCameraRig::_skipUpdate
	bool ____skipUpdate_17;
	// System.String OVRCameraRig::trackingSpaceName
	String_t* ___trackingSpaceName_18;
	// System.String OVRCameraRig::trackerAnchorName
	String_t* ___trackerAnchorName_19;
	// System.String OVRCameraRig::leftEyeAnchorName
	String_t* ___leftEyeAnchorName_20;
	// System.String OVRCameraRig::centerEyeAnchorName
	String_t* ___centerEyeAnchorName_21;
	// System.String OVRCameraRig::rightEyeAnchorName
	String_t* ___rightEyeAnchorName_22;
	// System.String OVRCameraRig::leftHandAnchorName
	String_t* ___leftHandAnchorName_23;
	// System.String OVRCameraRig::rightHandAnchorName
	String_t* ___rightHandAnchorName_24;
	// System.String OVRCameraRig::leftControllerAnchorName
	String_t* ___leftControllerAnchorName_25;
	// System.String OVRCameraRig::rightControllerAnchorName
	String_t* ___rightControllerAnchorName_26;
	// UnityEngine.Camera OVRCameraRig::_centerEyeCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ____centerEyeCamera_27;
	// UnityEngine.Camera OVRCameraRig::_leftEyeCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ____leftEyeCamera_28;
	// UnityEngine.Camera OVRCameraRig::_rightEyeCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ____rightEyeCamera_29;

public:
	inline static int32_t get_offset_of_U3CtrackingSpaceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___U3CtrackingSpaceU3Ek__BackingField_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CtrackingSpaceU3Ek__BackingField_4() const { return ___U3CtrackingSpaceU3Ek__BackingField_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CtrackingSpaceU3Ek__BackingField_4() { return &___U3CtrackingSpaceU3Ek__BackingField_4; }
	inline void set_U3CtrackingSpaceU3Ek__BackingField_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CtrackingSpaceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingSpaceU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyeAnchorU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___U3CleftEyeAnchorU3Ek__BackingField_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CleftEyeAnchorU3Ek__BackingField_5() const { return ___U3CleftEyeAnchorU3Ek__BackingField_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CleftEyeAnchorU3Ek__BackingField_5() { return &___U3CleftEyeAnchorU3Ek__BackingField_5; }
	inline void set_U3CleftEyeAnchorU3Ek__BackingField_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CleftEyeAnchorU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyeAnchorU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyeAnchorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___U3CcenterEyeAnchorU3Ek__BackingField_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CcenterEyeAnchorU3Ek__BackingField_6() const { return ___U3CcenterEyeAnchorU3Ek__BackingField_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CcenterEyeAnchorU3Ek__BackingField_6() { return &___U3CcenterEyeAnchorU3Ek__BackingField_6; }
	inline void set_U3CcenterEyeAnchorU3Ek__BackingField_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CcenterEyeAnchorU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyeAnchorU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyeAnchorU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___U3CrightEyeAnchorU3Ek__BackingField_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CrightEyeAnchorU3Ek__BackingField_7() const { return ___U3CrightEyeAnchorU3Ek__BackingField_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CrightEyeAnchorU3Ek__BackingField_7() { return &___U3CrightEyeAnchorU3Ek__BackingField_7; }
	inline void set_U3CrightEyeAnchorU3Ek__BackingField_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CrightEyeAnchorU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyeAnchorU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftHandAnchorU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___U3CleftHandAnchorU3Ek__BackingField_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CleftHandAnchorU3Ek__BackingField_8() const { return ___U3CleftHandAnchorU3Ek__BackingField_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CleftHandAnchorU3Ek__BackingField_8() { return &___U3CleftHandAnchorU3Ek__BackingField_8; }
	inline void set_U3CleftHandAnchorU3Ek__BackingField_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CleftHandAnchorU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftHandAnchorU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightHandAnchorU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___U3CrightHandAnchorU3Ek__BackingField_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CrightHandAnchorU3Ek__BackingField_9() const { return ___U3CrightHandAnchorU3Ek__BackingField_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CrightHandAnchorU3Ek__BackingField_9() { return &___U3CrightHandAnchorU3Ek__BackingField_9; }
	inline void set_U3CrightHandAnchorU3Ek__BackingField_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CrightHandAnchorU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightHandAnchorU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftControllerAnchorU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___U3CleftControllerAnchorU3Ek__BackingField_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CleftControllerAnchorU3Ek__BackingField_10() const { return ___U3CleftControllerAnchorU3Ek__BackingField_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CleftControllerAnchorU3Ek__BackingField_10() { return &___U3CleftControllerAnchorU3Ek__BackingField_10; }
	inline void set_U3CleftControllerAnchorU3Ek__BackingField_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CleftControllerAnchorU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftControllerAnchorU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightControllerAnchorU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___U3CrightControllerAnchorU3Ek__BackingField_11)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CrightControllerAnchorU3Ek__BackingField_11() const { return ___U3CrightControllerAnchorU3Ek__BackingField_11; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CrightControllerAnchorU3Ek__BackingField_11() { return &___U3CrightControllerAnchorU3Ek__BackingField_11; }
	inline void set_U3CrightControllerAnchorU3Ek__BackingField_11(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CrightControllerAnchorU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightControllerAnchorU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackerAnchorU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___U3CtrackerAnchorU3Ek__BackingField_12)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CtrackerAnchorU3Ek__BackingField_12() const { return ___U3CtrackerAnchorU3Ek__BackingField_12; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CtrackerAnchorU3Ek__BackingField_12() { return &___U3CtrackerAnchorU3Ek__BackingField_12; }
	inline void set_U3CtrackerAnchorU3Ek__BackingField_12(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CtrackerAnchorU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackerAnchorU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatedAnchors_13() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___UpdatedAnchors_13)); }
	inline Action_1_t75B6371B869E36A42B0DFFC8D8B2630F1D659A6C * get_UpdatedAnchors_13() const { return ___UpdatedAnchors_13; }
	inline Action_1_t75B6371B869E36A42B0DFFC8D8B2630F1D659A6C ** get_address_of_UpdatedAnchors_13() { return &___UpdatedAnchors_13; }
	inline void set_UpdatedAnchors_13(Action_1_t75B6371B869E36A42B0DFFC8D8B2630F1D659A6C * value)
	{
		___UpdatedAnchors_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UpdatedAnchors_13), (void*)value);
	}

	inline static int32_t get_offset_of_usePerEyeCameras_14() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___usePerEyeCameras_14)); }
	inline bool get_usePerEyeCameras_14() const { return ___usePerEyeCameras_14; }
	inline bool* get_address_of_usePerEyeCameras_14() { return &___usePerEyeCameras_14; }
	inline void set_usePerEyeCameras_14(bool value)
	{
		___usePerEyeCameras_14 = value;
	}

	inline static int32_t get_offset_of_useFixedUpdateForTracking_15() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___useFixedUpdateForTracking_15)); }
	inline bool get_useFixedUpdateForTracking_15() const { return ___useFixedUpdateForTracking_15; }
	inline bool* get_address_of_useFixedUpdateForTracking_15() { return &___useFixedUpdateForTracking_15; }
	inline void set_useFixedUpdateForTracking_15(bool value)
	{
		___useFixedUpdateForTracking_15 = value;
	}

	inline static int32_t get_offset_of_disableEyeAnchorCameras_16() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___disableEyeAnchorCameras_16)); }
	inline bool get_disableEyeAnchorCameras_16() const { return ___disableEyeAnchorCameras_16; }
	inline bool* get_address_of_disableEyeAnchorCameras_16() { return &___disableEyeAnchorCameras_16; }
	inline void set_disableEyeAnchorCameras_16(bool value)
	{
		___disableEyeAnchorCameras_16 = value;
	}

	inline static int32_t get_offset_of__skipUpdate_17() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ____skipUpdate_17)); }
	inline bool get__skipUpdate_17() const { return ____skipUpdate_17; }
	inline bool* get_address_of__skipUpdate_17() { return &____skipUpdate_17; }
	inline void set__skipUpdate_17(bool value)
	{
		____skipUpdate_17 = value;
	}

	inline static int32_t get_offset_of_trackingSpaceName_18() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___trackingSpaceName_18)); }
	inline String_t* get_trackingSpaceName_18() const { return ___trackingSpaceName_18; }
	inline String_t** get_address_of_trackingSpaceName_18() { return &___trackingSpaceName_18; }
	inline void set_trackingSpaceName_18(String_t* value)
	{
		___trackingSpaceName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingSpaceName_18), (void*)value);
	}

	inline static int32_t get_offset_of_trackerAnchorName_19() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___trackerAnchorName_19)); }
	inline String_t* get_trackerAnchorName_19() const { return ___trackerAnchorName_19; }
	inline String_t** get_address_of_trackerAnchorName_19() { return &___trackerAnchorName_19; }
	inline void set_trackerAnchorName_19(String_t* value)
	{
		___trackerAnchorName_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackerAnchorName_19), (void*)value);
	}

	inline static int32_t get_offset_of_leftEyeAnchorName_20() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___leftEyeAnchorName_20)); }
	inline String_t* get_leftEyeAnchorName_20() const { return ___leftEyeAnchorName_20; }
	inline String_t** get_address_of_leftEyeAnchorName_20() { return &___leftEyeAnchorName_20; }
	inline void set_leftEyeAnchorName_20(String_t* value)
	{
		___leftEyeAnchorName_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftEyeAnchorName_20), (void*)value);
	}

	inline static int32_t get_offset_of_centerEyeAnchorName_21() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___centerEyeAnchorName_21)); }
	inline String_t* get_centerEyeAnchorName_21() const { return ___centerEyeAnchorName_21; }
	inline String_t** get_address_of_centerEyeAnchorName_21() { return &___centerEyeAnchorName_21; }
	inline void set_centerEyeAnchorName_21(String_t* value)
	{
		___centerEyeAnchorName_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___centerEyeAnchorName_21), (void*)value);
	}

	inline static int32_t get_offset_of_rightEyeAnchorName_22() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___rightEyeAnchorName_22)); }
	inline String_t* get_rightEyeAnchorName_22() const { return ___rightEyeAnchorName_22; }
	inline String_t** get_address_of_rightEyeAnchorName_22() { return &___rightEyeAnchorName_22; }
	inline void set_rightEyeAnchorName_22(String_t* value)
	{
		___rightEyeAnchorName_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightEyeAnchorName_22), (void*)value);
	}

	inline static int32_t get_offset_of_leftHandAnchorName_23() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___leftHandAnchorName_23)); }
	inline String_t* get_leftHandAnchorName_23() const { return ___leftHandAnchorName_23; }
	inline String_t** get_address_of_leftHandAnchorName_23() { return &___leftHandAnchorName_23; }
	inline void set_leftHandAnchorName_23(String_t* value)
	{
		___leftHandAnchorName_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftHandAnchorName_23), (void*)value);
	}

	inline static int32_t get_offset_of_rightHandAnchorName_24() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___rightHandAnchorName_24)); }
	inline String_t* get_rightHandAnchorName_24() const { return ___rightHandAnchorName_24; }
	inline String_t** get_address_of_rightHandAnchorName_24() { return &___rightHandAnchorName_24; }
	inline void set_rightHandAnchorName_24(String_t* value)
	{
		___rightHandAnchorName_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightHandAnchorName_24), (void*)value);
	}

	inline static int32_t get_offset_of_leftControllerAnchorName_25() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___leftControllerAnchorName_25)); }
	inline String_t* get_leftControllerAnchorName_25() const { return ___leftControllerAnchorName_25; }
	inline String_t** get_address_of_leftControllerAnchorName_25() { return &___leftControllerAnchorName_25; }
	inline void set_leftControllerAnchorName_25(String_t* value)
	{
		___leftControllerAnchorName_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftControllerAnchorName_25), (void*)value);
	}

	inline static int32_t get_offset_of_rightControllerAnchorName_26() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___rightControllerAnchorName_26)); }
	inline String_t* get_rightControllerAnchorName_26() const { return ___rightControllerAnchorName_26; }
	inline String_t** get_address_of_rightControllerAnchorName_26() { return &___rightControllerAnchorName_26; }
	inline void set_rightControllerAnchorName_26(String_t* value)
	{
		___rightControllerAnchorName_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightControllerAnchorName_26), (void*)value);
	}

	inline static int32_t get_offset_of__centerEyeCamera_27() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ____centerEyeCamera_27)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get__centerEyeCamera_27() const { return ____centerEyeCamera_27; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of__centerEyeCamera_27() { return &____centerEyeCamera_27; }
	inline void set__centerEyeCamera_27(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		____centerEyeCamera_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____centerEyeCamera_27), (void*)value);
	}

	inline static int32_t get_offset_of__leftEyeCamera_28() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ____leftEyeCamera_28)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get__leftEyeCamera_28() const { return ____leftEyeCamera_28; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of__leftEyeCamera_28() { return &____leftEyeCamera_28; }
	inline void set__leftEyeCamera_28(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		____leftEyeCamera_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____leftEyeCamera_28), (void*)value);
	}

	inline static int32_t get_offset_of__rightEyeCamera_29() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ____rightEyeCamera_29)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get__rightEyeCamera_29() const { return ____rightEyeCamera_29; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of__rightEyeCamera_29() { return &____rightEyeCamera_29; }
	inline void set__rightEyeCamera_29(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		____rightEyeCamera_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rightEyeCamera_29), (void*)value);
	}
};


// Oculus.Interaction.Samples.PoseUseSample
struct PoseUseSample_t5F67B23F2A56359B4A89978FD7DF852C17C5546A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Oculus.Interaction.ActiveStateSelector[] Oculus.Interaction.Samples.PoseUseSample::_poses
	ActiveStateSelectorU5BU5D_tE574AE6A6896557335C43BD170E2D639639E1B72* ____poses_4;
	// UnityEngine.Material[] Oculus.Interaction.Samples.PoseUseSample::_onSelectIcons
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ____onSelectIcons_5;
	// UnityEngine.GameObject Oculus.Interaction.Samples.PoseUseSample::_poseActiveVisualPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____poseActiveVisualPrefab_6;
	// UnityEngine.GameObject[] Oculus.Interaction.Samples.PoseUseSample::_poseActiveVisuals
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____poseActiveVisuals_7;

public:
	inline static int32_t get_offset_of__poses_4() { return static_cast<int32_t>(offsetof(PoseUseSample_t5F67B23F2A56359B4A89978FD7DF852C17C5546A, ____poses_4)); }
	inline ActiveStateSelectorU5BU5D_tE574AE6A6896557335C43BD170E2D639639E1B72* get__poses_4() const { return ____poses_4; }
	inline ActiveStateSelectorU5BU5D_tE574AE6A6896557335C43BD170E2D639639E1B72** get_address_of__poses_4() { return &____poses_4; }
	inline void set__poses_4(ActiveStateSelectorU5BU5D_tE574AE6A6896557335C43BD170E2D639639E1B72* value)
	{
		____poses_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____poses_4), (void*)value);
	}

	inline static int32_t get_offset_of__onSelectIcons_5() { return static_cast<int32_t>(offsetof(PoseUseSample_t5F67B23F2A56359B4A89978FD7DF852C17C5546A, ____onSelectIcons_5)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get__onSelectIcons_5() const { return ____onSelectIcons_5; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of__onSelectIcons_5() { return &____onSelectIcons_5; }
	inline void set__onSelectIcons_5(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		____onSelectIcons_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onSelectIcons_5), (void*)value);
	}

	inline static int32_t get_offset_of__poseActiveVisualPrefab_6() { return static_cast<int32_t>(offsetof(PoseUseSample_t5F67B23F2A56359B4A89978FD7DF852C17C5546A, ____poseActiveVisualPrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__poseActiveVisualPrefab_6() const { return ____poseActiveVisualPrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__poseActiveVisualPrefab_6() { return &____poseActiveVisualPrefab_6; }
	inline void set__poseActiveVisualPrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____poseActiveVisualPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____poseActiveVisualPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of__poseActiveVisuals_7() { return static_cast<int32_t>(offsetof(PoseUseSample_t5F67B23F2A56359B4A89978FD7DF852C17C5546A, ____poseActiveVisuals_7)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__poseActiveVisuals_7() const { return ____poseActiveVisuals_7; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__poseActiveVisuals_7() { return &____poseActiveVisuals_7; }
	inline void set__poseActiveVisuals_7(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____poseActiveVisuals_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____poseActiveVisuals_7), (void*)value);
	}
};


// Oculus.Interaction.Samples.RespawnOnDrop
struct RespawnOnDrop_tDE333DF978DB0B142E5DF10D17651CDDBC0DD583  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Oculus.Interaction.Samples.RespawnOnDrop::_yThresholdForRespawn
	float ____yThresholdForRespawn_4;
	// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.RespawnOnDrop::_whenRespawned
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ____whenRespawned_5;
	// UnityEngine.Vector3 Oculus.Interaction.Samples.RespawnOnDrop::_initialPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____initialPosition_6;
	// UnityEngine.Quaternion Oculus.Interaction.Samples.RespawnOnDrop::_initialRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____initialRotation_7;
	// UnityEngine.Vector3 Oculus.Interaction.Samples.RespawnOnDrop::_initialScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____initialScale_8;
	// Oculus.Interaction.TwoGrabFreeTransformer[] Oculus.Interaction.Samples.RespawnOnDrop::_freeTransformers
	TwoGrabFreeTransformerU5BU5D_tC630549403FDD2FF20D841CF605013CA698B5523* ____freeTransformers_9;
	// UnityEngine.Rigidbody Oculus.Interaction.Samples.RespawnOnDrop::_rigidBody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ____rigidBody_10;

public:
	inline static int32_t get_offset_of__yThresholdForRespawn_4() { return static_cast<int32_t>(offsetof(RespawnOnDrop_tDE333DF978DB0B142E5DF10D17651CDDBC0DD583, ____yThresholdForRespawn_4)); }
	inline float get__yThresholdForRespawn_4() const { return ____yThresholdForRespawn_4; }
	inline float* get_address_of__yThresholdForRespawn_4() { return &____yThresholdForRespawn_4; }
	inline void set__yThresholdForRespawn_4(float value)
	{
		____yThresholdForRespawn_4 = value;
	}

	inline static int32_t get_offset_of__whenRespawned_5() { return static_cast<int32_t>(offsetof(RespawnOnDrop_tDE333DF978DB0B142E5DF10D17651CDDBC0DD583, ____whenRespawned_5)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get__whenRespawned_5() const { return ____whenRespawned_5; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of__whenRespawned_5() { return &____whenRespawned_5; }
	inline void set__whenRespawned_5(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		____whenRespawned_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenRespawned_5), (void*)value);
	}

	inline static int32_t get_offset_of__initialPosition_6() { return static_cast<int32_t>(offsetof(RespawnOnDrop_tDE333DF978DB0B142E5DF10D17651CDDBC0DD583, ____initialPosition_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__initialPosition_6() const { return ____initialPosition_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__initialPosition_6() { return &____initialPosition_6; }
	inline void set__initialPosition_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____initialPosition_6 = value;
	}

	inline static int32_t get_offset_of__initialRotation_7() { return static_cast<int32_t>(offsetof(RespawnOnDrop_tDE333DF978DB0B142E5DF10D17651CDDBC0DD583, ____initialRotation_7)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get__initialRotation_7() const { return ____initialRotation_7; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of__initialRotation_7() { return &____initialRotation_7; }
	inline void set__initialRotation_7(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		____initialRotation_7 = value;
	}

	inline static int32_t get_offset_of__initialScale_8() { return static_cast<int32_t>(offsetof(RespawnOnDrop_tDE333DF978DB0B142E5DF10D17651CDDBC0DD583, ____initialScale_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__initialScale_8() const { return ____initialScale_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__initialScale_8() { return &____initialScale_8; }
	inline void set__initialScale_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____initialScale_8 = value;
	}

	inline static int32_t get_offset_of__freeTransformers_9() { return static_cast<int32_t>(offsetof(RespawnOnDrop_tDE333DF978DB0B142E5DF10D17651CDDBC0DD583, ____freeTransformers_9)); }
	inline TwoGrabFreeTransformerU5BU5D_tC630549403FDD2FF20D841CF605013CA698B5523* get__freeTransformers_9() const { return ____freeTransformers_9; }
	inline TwoGrabFreeTransformerU5BU5D_tC630549403FDD2FF20D841CF605013CA698B5523** get_address_of__freeTransformers_9() { return &____freeTransformers_9; }
	inline void set__freeTransformers_9(TwoGrabFreeTransformerU5BU5D_tC630549403FDD2FF20D841CF605013CA698B5523* value)
	{
		____freeTransformers_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____freeTransformers_9), (void*)value);
	}

	inline static int32_t get_offset_of__rigidBody_10() { return static_cast<int32_t>(offsetof(RespawnOnDrop_tDE333DF978DB0B142E5DF10D17651CDDBC0DD583, ____rigidBody_10)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get__rigidBody_10() const { return ____rigidBody_10; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of__rigidBody_10() { return &____rigidBody_10; }
	inline void set__rigidBody_10(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		____rigidBody_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rigidBody_10), (void*)value);
	}
};


// Oculus.Interaction.Samples.RotationAudioEvents
struct RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.MonoBehaviour Oculus.Interaction.Samples.RotationAudioEvents::_interactableView
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ____interactableView_4;
	// UnityEngine.Transform Oculus.Interaction.Samples.RotationAudioEvents::_trackedTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____trackedTransform_5;
	// UnityEngine.Transform Oculus.Interaction.Samples.RotationAudioEvents::_relativeTo
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____relativeTo_6;
	// System.Single Oculus.Interaction.Samples.RotationAudioEvents::_thresholdDeg
	float ____thresholdDeg_7;
	// System.Single Oculus.Interaction.Samples.RotationAudioEvents::_maxRangeDeg
	float ____maxRangeDeg_8;
	// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.RotationAudioEvents::_whenRotationStarted
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ____whenRotationStarted_9;
	// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.RotationAudioEvents::_whenRotationEnded
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ____whenRotationEnded_10;
	// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.RotationAudioEvents::_whenRotatedOpen
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ____whenRotatedOpen_11;
	// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.RotationAudioEvents::_whenRotatedClosed
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ____whenRotatedClosed_12;
	// Oculus.Interaction.IInteractableView Oculus.Interaction.Samples.RotationAudioEvents::InteractableView
	RuntimeObject* ___InteractableView_13;
	// System.Single Oculus.Interaction.Samples.RotationAudioEvents::_baseDelta
	float ____baseDelta_14;
	// System.Boolean Oculus.Interaction.Samples.RotationAudioEvents::_isRotating
	bool ____isRotating_15;
	// Oculus.Interaction.Samples.RotationAudioEvents/Direction Oculus.Interaction.Samples.RotationAudioEvents::_lastCrossedDirection
	int32_t ____lastCrossedDirection_16;
	// System.Boolean Oculus.Interaction.Samples.RotationAudioEvents::_started
	bool ____started_17;

public:
	inline static int32_t get_offset_of__interactableView_4() { return static_cast<int32_t>(offsetof(RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3, ____interactableView_4)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get__interactableView_4() const { return ____interactableView_4; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of__interactableView_4() { return &____interactableView_4; }
	inline void set__interactableView_4(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		____interactableView_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interactableView_4), (void*)value);
	}

	inline static int32_t get_offset_of__trackedTransform_5() { return static_cast<int32_t>(offsetof(RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3, ____trackedTransform_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__trackedTransform_5() const { return ____trackedTransform_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__trackedTransform_5() { return &____trackedTransform_5; }
	inline void set__trackedTransform_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____trackedTransform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____trackedTransform_5), (void*)value);
	}

	inline static int32_t get_offset_of__relativeTo_6() { return static_cast<int32_t>(offsetof(RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3, ____relativeTo_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__relativeTo_6() const { return ____relativeTo_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__relativeTo_6() { return &____relativeTo_6; }
	inline void set__relativeTo_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____relativeTo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____relativeTo_6), (void*)value);
	}

	inline static int32_t get_offset_of__thresholdDeg_7() { return static_cast<int32_t>(offsetof(RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3, ____thresholdDeg_7)); }
	inline float get__thresholdDeg_7() const { return ____thresholdDeg_7; }
	inline float* get_address_of__thresholdDeg_7() { return &____thresholdDeg_7; }
	inline void set__thresholdDeg_7(float value)
	{
		____thresholdDeg_7 = value;
	}

	inline static int32_t get_offset_of__maxRangeDeg_8() { return static_cast<int32_t>(offsetof(RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3, ____maxRangeDeg_8)); }
	inline float get__maxRangeDeg_8() const { return ____maxRangeDeg_8; }
	inline float* get_address_of__maxRangeDeg_8() { return &____maxRangeDeg_8; }
	inline void set__maxRangeDeg_8(float value)
	{
		____maxRangeDeg_8 = value;
	}

	inline static int32_t get_offset_of__whenRotationStarted_9() { return static_cast<int32_t>(offsetof(RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3, ____whenRotationStarted_9)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get__whenRotationStarted_9() const { return ____whenRotationStarted_9; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of__whenRotationStarted_9() { return &____whenRotationStarted_9; }
	inline void set__whenRotationStarted_9(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		____whenRotationStarted_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenRotationStarted_9), (void*)value);
	}

	inline static int32_t get_offset_of__whenRotationEnded_10() { return static_cast<int32_t>(offsetof(RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3, ____whenRotationEnded_10)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get__whenRotationEnded_10() const { return ____whenRotationEnded_10; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of__whenRotationEnded_10() { return &____whenRotationEnded_10; }
	inline void set__whenRotationEnded_10(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		____whenRotationEnded_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenRotationEnded_10), (void*)value);
	}

	inline static int32_t get_offset_of__whenRotatedOpen_11() { return static_cast<int32_t>(offsetof(RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3, ____whenRotatedOpen_11)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get__whenRotatedOpen_11() const { return ____whenRotatedOpen_11; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of__whenRotatedOpen_11() { return &____whenRotatedOpen_11; }
	inline void set__whenRotatedOpen_11(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		____whenRotatedOpen_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenRotatedOpen_11), (void*)value);
	}

	inline static int32_t get_offset_of__whenRotatedClosed_12() { return static_cast<int32_t>(offsetof(RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3, ____whenRotatedClosed_12)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get__whenRotatedClosed_12() const { return ____whenRotatedClosed_12; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of__whenRotatedClosed_12() { return &____whenRotatedClosed_12; }
	inline void set__whenRotatedClosed_12(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		____whenRotatedClosed_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenRotatedClosed_12), (void*)value);
	}

	inline static int32_t get_offset_of_InteractableView_13() { return static_cast<int32_t>(offsetof(RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3, ___InteractableView_13)); }
	inline RuntimeObject* get_InteractableView_13() const { return ___InteractableView_13; }
	inline RuntimeObject** get_address_of_InteractableView_13() { return &___InteractableView_13; }
	inline void set_InteractableView_13(RuntimeObject* value)
	{
		___InteractableView_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractableView_13), (void*)value);
	}

	inline static int32_t get_offset_of__baseDelta_14() { return static_cast<int32_t>(offsetof(RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3, ____baseDelta_14)); }
	inline float get__baseDelta_14() const { return ____baseDelta_14; }
	inline float* get_address_of__baseDelta_14() { return &____baseDelta_14; }
	inline void set__baseDelta_14(float value)
	{
		____baseDelta_14 = value;
	}

	inline static int32_t get_offset_of__isRotating_15() { return static_cast<int32_t>(offsetof(RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3, ____isRotating_15)); }
	inline bool get__isRotating_15() const { return ____isRotating_15; }
	inline bool* get_address_of__isRotating_15() { return &____isRotating_15; }
	inline void set__isRotating_15(bool value)
	{
		____isRotating_15 = value;
	}

	inline static int32_t get_offset_of__lastCrossedDirection_16() { return static_cast<int32_t>(offsetof(RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3, ____lastCrossedDirection_16)); }
	inline int32_t get__lastCrossedDirection_16() const { return ____lastCrossedDirection_16; }
	inline int32_t* get_address_of__lastCrossedDirection_16() { return &____lastCrossedDirection_16; }
	inline void set__lastCrossedDirection_16(int32_t value)
	{
		____lastCrossedDirection_16 = value;
	}

	inline static int32_t get_offset_of__started_17() { return static_cast<int32_t>(offsetof(RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3, ____started_17)); }
	inline bool get__started_17() const { return ____started_17; }
	inline bool* get_address_of__started_17() { return &____started_17; }
	inline void set__started_17(bool value)
	{
		____started_17 = value;
	}
};


// Oculus.Interaction.Samples.ScaleAudioEvents
struct ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.MonoBehaviour Oculus.Interaction.Samples.ScaleAudioEvents::_interactableView
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ____interactableView_4;
	// UnityEngine.Transform Oculus.Interaction.Samples.ScaleAudioEvents::_trackedTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____trackedTransform_5;
	// System.Single Oculus.Interaction.Samples.ScaleAudioEvents::_stepSize
	float ____stepSize_6;
	// System.Int32 Oculus.Interaction.Samples.ScaleAudioEvents::_maxEventFreq
	int32_t ____maxEventFreq_7;
	// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.ScaleAudioEvents::_whenScalingStarted
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ____whenScalingStarted_8;
	// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.ScaleAudioEvents::_whenScalingEnded
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ____whenScalingEnded_9;
	// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.ScaleAudioEvents::_whenScaledUp
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ____whenScaledUp_10;
	// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.ScaleAudioEvents::_whenScaledDown
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ____whenScaledDown_11;
	// Oculus.Interaction.IInteractableView Oculus.Interaction.Samples.ScaleAudioEvents::InteractableView
	RuntimeObject* ___InteractableView_12;
	// System.Boolean Oculus.Interaction.Samples.ScaleAudioEvents::_isScaling
	bool ____isScaling_13;
	// UnityEngine.Vector3 Oculus.Interaction.Samples.ScaleAudioEvents::_lastStep
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____lastStep_14;
	// System.Single Oculus.Interaction.Samples.ScaleAudioEvents::_lastEventTime
	float ____lastEventTime_15;
	// Oculus.Interaction.Samples.ScaleAudioEvents/Direction Oculus.Interaction.Samples.ScaleAudioEvents::_direction
	int32_t ____direction_16;
	// System.Boolean Oculus.Interaction.Samples.ScaleAudioEvents::_started
	bool ____started_17;

public:
	inline static int32_t get_offset_of__interactableView_4() { return static_cast<int32_t>(offsetof(ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8, ____interactableView_4)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get__interactableView_4() const { return ____interactableView_4; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of__interactableView_4() { return &____interactableView_4; }
	inline void set__interactableView_4(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		____interactableView_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interactableView_4), (void*)value);
	}

	inline static int32_t get_offset_of__trackedTransform_5() { return static_cast<int32_t>(offsetof(ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8, ____trackedTransform_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__trackedTransform_5() const { return ____trackedTransform_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__trackedTransform_5() { return &____trackedTransform_5; }
	inline void set__trackedTransform_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____trackedTransform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____trackedTransform_5), (void*)value);
	}

	inline static int32_t get_offset_of__stepSize_6() { return static_cast<int32_t>(offsetof(ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8, ____stepSize_6)); }
	inline float get__stepSize_6() const { return ____stepSize_6; }
	inline float* get_address_of__stepSize_6() { return &____stepSize_6; }
	inline void set__stepSize_6(float value)
	{
		____stepSize_6 = value;
	}

	inline static int32_t get_offset_of__maxEventFreq_7() { return static_cast<int32_t>(offsetof(ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8, ____maxEventFreq_7)); }
	inline int32_t get__maxEventFreq_7() const { return ____maxEventFreq_7; }
	inline int32_t* get_address_of__maxEventFreq_7() { return &____maxEventFreq_7; }
	inline void set__maxEventFreq_7(int32_t value)
	{
		____maxEventFreq_7 = value;
	}

	inline static int32_t get_offset_of__whenScalingStarted_8() { return static_cast<int32_t>(offsetof(ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8, ____whenScalingStarted_8)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get__whenScalingStarted_8() const { return ____whenScalingStarted_8; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of__whenScalingStarted_8() { return &____whenScalingStarted_8; }
	inline void set__whenScalingStarted_8(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		____whenScalingStarted_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenScalingStarted_8), (void*)value);
	}

	inline static int32_t get_offset_of__whenScalingEnded_9() { return static_cast<int32_t>(offsetof(ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8, ____whenScalingEnded_9)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get__whenScalingEnded_9() const { return ____whenScalingEnded_9; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of__whenScalingEnded_9() { return &____whenScalingEnded_9; }
	inline void set__whenScalingEnded_9(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		____whenScalingEnded_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenScalingEnded_9), (void*)value);
	}

	inline static int32_t get_offset_of__whenScaledUp_10() { return static_cast<int32_t>(offsetof(ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8, ____whenScaledUp_10)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get__whenScaledUp_10() const { return ____whenScaledUp_10; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of__whenScaledUp_10() { return &____whenScaledUp_10; }
	inline void set__whenScaledUp_10(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		____whenScaledUp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenScaledUp_10), (void*)value);
	}

	inline static int32_t get_offset_of__whenScaledDown_11() { return static_cast<int32_t>(offsetof(ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8, ____whenScaledDown_11)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get__whenScaledDown_11() const { return ____whenScaledDown_11; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of__whenScaledDown_11() { return &____whenScaledDown_11; }
	inline void set__whenScaledDown_11(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		____whenScaledDown_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenScaledDown_11), (void*)value);
	}

	inline static int32_t get_offset_of_InteractableView_12() { return static_cast<int32_t>(offsetof(ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8, ___InteractableView_12)); }
	inline RuntimeObject* get_InteractableView_12() const { return ___InteractableView_12; }
	inline RuntimeObject** get_address_of_InteractableView_12() { return &___InteractableView_12; }
	inline void set_InteractableView_12(RuntimeObject* value)
	{
		___InteractableView_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractableView_12), (void*)value);
	}

	inline static int32_t get_offset_of__isScaling_13() { return static_cast<int32_t>(offsetof(ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8, ____isScaling_13)); }
	inline bool get__isScaling_13() const { return ____isScaling_13; }
	inline bool* get_address_of__isScaling_13() { return &____isScaling_13; }
	inline void set__isScaling_13(bool value)
	{
		____isScaling_13 = value;
	}

	inline static int32_t get_offset_of__lastStep_14() { return static_cast<int32_t>(offsetof(ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8, ____lastStep_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__lastStep_14() const { return ____lastStep_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__lastStep_14() { return &____lastStep_14; }
	inline void set__lastStep_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____lastStep_14 = value;
	}

	inline static int32_t get_offset_of__lastEventTime_15() { return static_cast<int32_t>(offsetof(ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8, ____lastEventTime_15)); }
	inline float get__lastEventTime_15() const { return ____lastEventTime_15; }
	inline float* get_address_of__lastEventTime_15() { return &____lastEventTime_15; }
	inline void set__lastEventTime_15(float value)
	{
		____lastEventTime_15 = value;
	}

	inline static int32_t get_offset_of__direction_16() { return static_cast<int32_t>(offsetof(ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8, ____direction_16)); }
	inline int32_t get__direction_16() const { return ____direction_16; }
	inline int32_t* get_address_of__direction_16() { return &____direction_16; }
	inline void set__direction_16(int32_t value)
	{
		____direction_16 = value;
	}

	inline static int32_t get_offset_of__started_17() { return static_cast<int32_t>(offsetof(ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8, ____started_17)); }
	inline bool get__started_17() const { return ____started_17; }
	inline bool* get_address_of__started_17() { return &____started_17; }
	inline void set__started_17(bool value)
	{
		____started_17 = value;
	}
};


// Oculus.Interaction.Samples.ScaleModifier
struct ScaleModifier_t3EDA5B92F3B1EB3DC38D018A36C26EB9BC3FB520  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Oculus.Interaction.Samples.SceneLoader
struct SceneLoader_t54FAEF49CF78EF9DB3F31680C5CC45D1F8517953  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Oculus.Interaction.Samples.SceneLoader::_loading
	bool ____loading_4;

public:
	inline static int32_t get_offset_of__loading_4() { return static_cast<int32_t>(offsetof(SceneLoader_t54FAEF49CF78EF9DB3F31680C5CC45D1F8517953, ____loading_4)); }
	inline bool get__loading_4() const { return ____loading_4; }
	inline bool* get_address_of__loading_4() { return &____loading_4; }
	inline void set__loading_4(bool value)
	{
		____loading_4 = value;
	}
};


// Oculus.Interaction.Samples.ShouldHideHandOnGrab
struct ShouldHideHandOnGrab_tBAB0E4F5C7010765C850D4EB572D73D237A41AB6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Oculus.Interaction.Samples.StayInView
struct StayInView_tB746CF1F17389C17740687630E63F792A3878924  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Oculus.Interaction.Samples.StayInView::_eyeCenter
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____eyeCenter_4;
	// System.Single Oculus.Interaction.Samples.StayInView::_extraDistanceForward
	float ____extraDistanceForward_5;
	// System.Boolean Oculus.Interaction.Samples.StayInView::_zeroOutEyeHeight
	bool ____zeroOutEyeHeight_6;

public:
	inline static int32_t get_offset_of__eyeCenter_4() { return static_cast<int32_t>(offsetof(StayInView_tB746CF1F17389C17740687630E63F792A3878924, ____eyeCenter_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__eyeCenter_4() const { return ____eyeCenter_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__eyeCenter_4() { return &____eyeCenter_4; }
	inline void set__eyeCenter_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____eyeCenter_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____eyeCenter_4), (void*)value);
	}

	inline static int32_t get_offset_of__extraDistanceForward_5() { return static_cast<int32_t>(offsetof(StayInView_tB746CF1F17389C17740687630E63F792A3878924, ____extraDistanceForward_5)); }
	inline float get__extraDistanceForward_5() const { return ____extraDistanceForward_5; }
	inline float* get_address_of__extraDistanceForward_5() { return &____extraDistanceForward_5; }
	inline void set__extraDistanceForward_5(float value)
	{
		____extraDistanceForward_5 = value;
	}

	inline static int32_t get_offset_of__zeroOutEyeHeight_6() { return static_cast<int32_t>(offsetof(StayInView_tB746CF1F17389C17740687630E63F792A3878924, ____zeroOutEyeHeight_6)); }
	inline bool get__zeroOutEyeHeight_6() const { return ____zeroOutEyeHeight_6; }
	inline bool* get_address_of__zeroOutEyeHeight_6() { return &____zeroOutEyeHeight_6; }
	inline void set__zeroOutEyeHeight_6(bool value)
	{
		____zeroOutEyeHeight_6 = value;
	}
};


// Oculus.Interaction.TwoGrabFreeTransformer
struct TwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Quaternion Oculus.Interaction.TwoGrabFreeTransformer::_activeRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____activeRotation_4;
	// UnityEngine.Vector3 Oculus.Interaction.TwoGrabFreeTransformer::_initialLocalScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____initialLocalScale_5;
	// System.Single Oculus.Interaction.TwoGrabFreeTransformer::_initialDistance
	float ____initialDistance_6;
	// System.Single Oculus.Interaction.TwoGrabFreeTransformer::_initialScale
	float ____initialScale_7;
	// System.Single Oculus.Interaction.TwoGrabFreeTransformer::_activeScale
	float ____activeScale_8;
	// UnityEngine.Pose Oculus.Interaction.TwoGrabFreeTransformer::_previousGrabPointA
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ____previousGrabPointA_9;
	// UnityEngine.Pose Oculus.Interaction.TwoGrabFreeTransformer::_previousGrabPointB
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ____previousGrabPointB_10;
	// Oculus.Interaction.TwoGrabFreeTransformer/TwoGrabFreeConstraints Oculus.Interaction.TwoGrabFreeTransformer::_constraints
	TwoGrabFreeConstraints_tB4BC435AB8182341F30DAD6D7958C67633977A40 * ____constraints_11;
	// Oculus.Interaction.IGrabbable Oculus.Interaction.TwoGrabFreeTransformer::_grabbable
	RuntimeObject* ____grabbable_12;

public:
	inline static int32_t get_offset_of__activeRotation_4() { return static_cast<int32_t>(offsetof(TwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD, ____activeRotation_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get__activeRotation_4() const { return ____activeRotation_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of__activeRotation_4() { return &____activeRotation_4; }
	inline void set__activeRotation_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		____activeRotation_4 = value;
	}

	inline static int32_t get_offset_of__initialLocalScale_5() { return static_cast<int32_t>(offsetof(TwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD, ____initialLocalScale_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__initialLocalScale_5() const { return ____initialLocalScale_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__initialLocalScale_5() { return &____initialLocalScale_5; }
	inline void set__initialLocalScale_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____initialLocalScale_5 = value;
	}

	inline static int32_t get_offset_of__initialDistance_6() { return static_cast<int32_t>(offsetof(TwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD, ____initialDistance_6)); }
	inline float get__initialDistance_6() const { return ____initialDistance_6; }
	inline float* get_address_of__initialDistance_6() { return &____initialDistance_6; }
	inline void set__initialDistance_6(float value)
	{
		____initialDistance_6 = value;
	}

	inline static int32_t get_offset_of__initialScale_7() { return static_cast<int32_t>(offsetof(TwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD, ____initialScale_7)); }
	inline float get__initialScale_7() const { return ____initialScale_7; }
	inline float* get_address_of__initialScale_7() { return &____initialScale_7; }
	inline void set__initialScale_7(float value)
	{
		____initialScale_7 = value;
	}

	inline static int32_t get_offset_of__activeScale_8() { return static_cast<int32_t>(offsetof(TwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD, ____activeScale_8)); }
	inline float get__activeScale_8() const { return ____activeScale_8; }
	inline float* get_address_of__activeScale_8() { return &____activeScale_8; }
	inline void set__activeScale_8(float value)
	{
		____activeScale_8 = value;
	}

	inline static int32_t get_offset_of__previousGrabPointA_9() { return static_cast<int32_t>(offsetof(TwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD, ____previousGrabPointA_9)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get__previousGrabPointA_9() const { return ____previousGrabPointA_9; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of__previousGrabPointA_9() { return &____previousGrabPointA_9; }
	inline void set__previousGrabPointA_9(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		____previousGrabPointA_9 = value;
	}

	inline static int32_t get_offset_of__previousGrabPointB_10() { return static_cast<int32_t>(offsetof(TwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD, ____previousGrabPointB_10)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get__previousGrabPointB_10() const { return ____previousGrabPointB_10; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of__previousGrabPointB_10() { return &____previousGrabPointB_10; }
	inline void set__previousGrabPointB_10(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		____previousGrabPointB_10 = value;
	}

	inline static int32_t get_offset_of__constraints_11() { return static_cast<int32_t>(offsetof(TwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD, ____constraints_11)); }
	inline TwoGrabFreeConstraints_tB4BC435AB8182341F30DAD6D7958C67633977A40 * get__constraints_11() const { return ____constraints_11; }
	inline TwoGrabFreeConstraints_tB4BC435AB8182341F30DAD6D7958C67633977A40 ** get_address_of__constraints_11() { return &____constraints_11; }
	inline void set__constraints_11(TwoGrabFreeConstraints_tB4BC435AB8182341F30DAD6D7958C67633977A40 * value)
	{
		____constraints_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____constraints_11), (void*)value);
	}

	inline static int32_t get_offset_of__grabbable_12() { return static_cast<int32_t>(offsetof(TwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD, ____grabbable_12)); }
	inline RuntimeObject* get__grabbable_12() const { return ____grabbable_12; }
	inline RuntimeObject** get_address_of__grabbable_12() { return &____grabbable_12; }
	inline void set__grabbable_12(RuntimeObject* value)
	{
		____grabbable_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____grabbable_12), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Oculus.Interaction.AudioPhysics/CollisionEvents
struct CollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action`1<UnityEngine.Collision> Oculus.Interaction.AudioPhysics/CollisionEvents::WhenCollisionEnter
	Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * ___WhenCollisionEnter_4;

public:
	inline static int32_t get_offset_of_WhenCollisionEnter_4() { return static_cast<int32_t>(offsetof(CollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E, ___WhenCollisionEnter_4)); }
	inline Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * get_WhenCollisionEnter_4() const { return ___WhenCollisionEnter_4; }
	inline Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 ** get_address_of_WhenCollisionEnter_4() { return &___WhenCollisionEnter_4; }
	inline void set_WhenCollisionEnter_4(Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * value)
	{
		___WhenCollisionEnter_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenCollisionEnter_4), (void*)value);
	}
};


// Oculus.Interaction.PointerInteractable`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable>
struct PointerInteractable_2_t68D7C7D63ECC21AC8EC61E032CED2C8FCD45DDFA  : public Interactable_2_t7EF9D0735C86ECD7FD8B9E34578F48CA327A88D3
{
public:
	// UnityEngine.MonoBehaviour Oculus.Interaction.PointerInteractable`2::_pointableElement
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ____pointableElement_17;
	// Oculus.Interaction.IPointableElement Oculus.Interaction.PointerInteractable`2::<PointableElement>k__BackingField
	RuntimeObject* ___U3CPointableElementU3Ek__BackingField_18;
	// System.Action`1<Oculus.Interaction.PointerArgs> Oculus.Interaction.PointerInteractable`2::WhenPointerEventRaised
	Action_1_t39DE2215E4079E3A5846C0CCA369BAC17EDE1B52 * ___WhenPointerEventRaised_19;
	// System.Boolean Oculus.Interaction.PointerInteractable`2::_started
	bool ____started_20;

public:
	inline static int32_t get_offset_of__pointableElement_17() { return static_cast<int32_t>(offsetof(PointerInteractable_2_t68D7C7D63ECC21AC8EC61E032CED2C8FCD45DDFA, ____pointableElement_17)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get__pointableElement_17() const { return ____pointableElement_17; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of__pointableElement_17() { return &____pointableElement_17; }
	inline void set__pointableElement_17(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		____pointableElement_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pointableElement_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPointableElementU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerInteractable_2_t68D7C7D63ECC21AC8EC61E032CED2C8FCD45DDFA, ___U3CPointableElementU3Ek__BackingField_18)); }
	inline RuntimeObject* get_U3CPointableElementU3Ek__BackingField_18() const { return ___U3CPointableElementU3Ek__BackingField_18; }
	inline RuntimeObject** get_address_of_U3CPointableElementU3Ek__BackingField_18() { return &___U3CPointableElementU3Ek__BackingField_18; }
	inline void set_U3CPointableElementU3Ek__BackingField_18(RuntimeObject* value)
	{
		___U3CPointableElementU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointableElementU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_WhenPointerEventRaised_19() { return static_cast<int32_t>(offsetof(PointerInteractable_2_t68D7C7D63ECC21AC8EC61E032CED2C8FCD45DDFA, ___WhenPointerEventRaised_19)); }
	inline Action_1_t39DE2215E4079E3A5846C0CCA369BAC17EDE1B52 * get_WhenPointerEventRaised_19() const { return ___WhenPointerEventRaised_19; }
	inline Action_1_t39DE2215E4079E3A5846C0CCA369BAC17EDE1B52 ** get_address_of_WhenPointerEventRaised_19() { return &___WhenPointerEventRaised_19; }
	inline void set_WhenPointerEventRaised_19(Action_1_t39DE2215E4079E3A5846C0CCA369BAC17EDE1B52 * value)
	{
		___WhenPointerEventRaised_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenPointerEventRaised_19), (void*)value);
	}

	inline static int32_t get_offset_of__started_20() { return static_cast<int32_t>(offsetof(PointerInteractable_2_t68D7C7D63ECC21AC8EC61E032CED2C8FCD45DDFA, ____started_20)); }
	inline bool get__started_20() const { return ____started_20; }
	inline bool* get_address_of__started_20() { return &____started_20; }
	inline void set__started_20(bool value)
	{
		____started_20 = value;
	}
};


// Oculus.Interaction.PointerInteractor`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable>
struct PointerInteractor_2_t7AAD143D36B249F43CD480089CF42EED514C5E59  : public Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5
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


// Oculus.Interaction.HandPosing.HandGrabInteractable
struct HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8  : public PointerInteractable_2_t68D7C7D63ECC21AC8EC61E032CED2C8FCD45DDFA
{
public:
	// UnityEngine.Transform Oculus.Interaction.HandPosing.HandGrabInteractable::_relativeTo
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____relativeTo_21;
	// UnityEngine.Rigidbody Oculus.Interaction.HandPosing.HandGrabInteractable::_rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ____rigidbody_22;
	// System.Boolean Oculus.Interaction.HandPosing.HandGrabInteractable::_resetGrabOnGrabsUpdated
	bool ____resetGrabOnGrabsUpdated_23;
	// Oculus.Interaction.PhysicsGrabbable Oculus.Interaction.HandPosing.HandGrabInteractable::_physicsGrabbable
	PhysicsGrabbable_t32A8CECFA034959A018A73E45071AD35532759F4 * ____physicsGrabbable_24;
	// Oculus.Interaction.HandPosing.PoseMeasureParameters Oculus.Interaction.HandPosing.HandGrabInteractable::_scoringModifier
	PoseMeasureParameters_t75F95753B7ADEA4ADD70A4D3A22AA7A510E57877  ____scoringModifier_25;
	// Oculus.Interaction.Grab.GrabTypeFlags Oculus.Interaction.HandPosing.HandGrabInteractable::_supportedGrabTypes
	int32_t ____supportedGrabTypes_26;
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.HandPosing.HandGrabInteractable::_pinchGrabRules
	GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF  ____pinchGrabRules_27;
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.HandPosing.HandGrabInteractable::_palmGrabRules
	GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF  ____palmGrabRules_28;
	// UnityEngine.MonoBehaviour Oculus.Interaction.HandPosing.HandGrabInteractable::_movementProvider
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ____movementProvider_29;
	// Oculus.Interaction.IMovementProvider Oculus.Interaction.HandPosing.HandGrabInteractable::<MovementProvider>k__BackingField
	RuntimeObject* ___U3CMovementProviderU3Ek__BackingField_30;
	// Oculus.Interaction.HandPosing.HandAlignType Oculus.Interaction.HandPosing.HandGrabInteractable::_handAligment
	int32_t ____handAligment_31;
	// System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.HandGrabPoint> Oculus.Interaction.HandPosing.HandGrabInteractable::_handGrabPoints
	List_1_t9727992C543E8154629F46125BCBCA4724EC3994 * ____handGrabPoints_32;
	// UnityEngine.Collider[] Oculus.Interaction.HandPosing.HandGrabInteractable::<Colliders>k__BackingField
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* ___U3CCollidersU3Ek__BackingField_33;
	// Oculus.Interaction.HandPosing.GrabPointsPoseFinder Oculus.Interaction.HandPosing.HandGrabInteractable::_grabPointsPoseFinder
	GrabPointsPoseFinder_tE2E287FDC3FA30C239056FB7568999F5F825D3C2 * ____grabPointsPoseFinder_34;

public:
	inline static int32_t get_offset_of__relativeTo_21() { return static_cast<int32_t>(offsetof(HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8, ____relativeTo_21)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__relativeTo_21() const { return ____relativeTo_21; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__relativeTo_21() { return &____relativeTo_21; }
	inline void set__relativeTo_21(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____relativeTo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____relativeTo_21), (void*)value);
	}

	inline static int32_t get_offset_of__rigidbody_22() { return static_cast<int32_t>(offsetof(HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8, ____rigidbody_22)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get__rigidbody_22() const { return ____rigidbody_22; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of__rigidbody_22() { return &____rigidbody_22; }
	inline void set__rigidbody_22(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		____rigidbody_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rigidbody_22), (void*)value);
	}

	inline static int32_t get_offset_of__resetGrabOnGrabsUpdated_23() { return static_cast<int32_t>(offsetof(HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8, ____resetGrabOnGrabsUpdated_23)); }
	inline bool get__resetGrabOnGrabsUpdated_23() const { return ____resetGrabOnGrabsUpdated_23; }
	inline bool* get_address_of__resetGrabOnGrabsUpdated_23() { return &____resetGrabOnGrabsUpdated_23; }
	inline void set__resetGrabOnGrabsUpdated_23(bool value)
	{
		____resetGrabOnGrabsUpdated_23 = value;
	}

	inline static int32_t get_offset_of__physicsGrabbable_24() { return static_cast<int32_t>(offsetof(HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8, ____physicsGrabbable_24)); }
	inline PhysicsGrabbable_t32A8CECFA034959A018A73E45071AD35532759F4 * get__physicsGrabbable_24() const { return ____physicsGrabbable_24; }
	inline PhysicsGrabbable_t32A8CECFA034959A018A73E45071AD35532759F4 ** get_address_of__physicsGrabbable_24() { return &____physicsGrabbable_24; }
	inline void set__physicsGrabbable_24(PhysicsGrabbable_t32A8CECFA034959A018A73E45071AD35532759F4 * value)
	{
		____physicsGrabbable_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____physicsGrabbable_24), (void*)value);
	}

	inline static int32_t get_offset_of__scoringModifier_25() { return static_cast<int32_t>(offsetof(HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8, ____scoringModifier_25)); }
	inline PoseMeasureParameters_t75F95753B7ADEA4ADD70A4D3A22AA7A510E57877  get__scoringModifier_25() const { return ____scoringModifier_25; }
	inline PoseMeasureParameters_t75F95753B7ADEA4ADD70A4D3A22AA7A510E57877 * get_address_of__scoringModifier_25() { return &____scoringModifier_25; }
	inline void set__scoringModifier_25(PoseMeasureParameters_t75F95753B7ADEA4ADD70A4D3A22AA7A510E57877  value)
	{
		____scoringModifier_25 = value;
	}

	inline static int32_t get_offset_of__supportedGrabTypes_26() { return static_cast<int32_t>(offsetof(HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8, ____supportedGrabTypes_26)); }
	inline int32_t get__supportedGrabTypes_26() const { return ____supportedGrabTypes_26; }
	inline int32_t* get_address_of__supportedGrabTypes_26() { return &____supportedGrabTypes_26; }
	inline void set__supportedGrabTypes_26(int32_t value)
	{
		____supportedGrabTypes_26 = value;
	}

	inline static int32_t get_offset_of__pinchGrabRules_27() { return static_cast<int32_t>(offsetof(HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8, ____pinchGrabRules_27)); }
	inline GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF  get__pinchGrabRules_27() const { return ____pinchGrabRules_27; }
	inline GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF * get_address_of__pinchGrabRules_27() { return &____pinchGrabRules_27; }
	inline void set__pinchGrabRules_27(GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF  value)
	{
		____pinchGrabRules_27 = value;
	}

	inline static int32_t get_offset_of__palmGrabRules_28() { return static_cast<int32_t>(offsetof(HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8, ____palmGrabRules_28)); }
	inline GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF  get__palmGrabRules_28() const { return ____palmGrabRules_28; }
	inline GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF * get_address_of__palmGrabRules_28() { return &____palmGrabRules_28; }
	inline void set__palmGrabRules_28(GrabbingRule_t160CED32DEBF4CB079E5EA64A4161038A3CDDDFF  value)
	{
		____palmGrabRules_28 = value;
	}

	inline static int32_t get_offset_of__movementProvider_29() { return static_cast<int32_t>(offsetof(HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8, ____movementProvider_29)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get__movementProvider_29() const { return ____movementProvider_29; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of__movementProvider_29() { return &____movementProvider_29; }
	inline void set__movementProvider_29(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		____movementProvider_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____movementProvider_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMovementProviderU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8, ___U3CMovementProviderU3Ek__BackingField_30)); }
	inline RuntimeObject* get_U3CMovementProviderU3Ek__BackingField_30() const { return ___U3CMovementProviderU3Ek__BackingField_30; }
	inline RuntimeObject** get_address_of_U3CMovementProviderU3Ek__BackingField_30() { return &___U3CMovementProviderU3Ek__BackingField_30; }
	inline void set_U3CMovementProviderU3Ek__BackingField_30(RuntimeObject* value)
	{
		___U3CMovementProviderU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMovementProviderU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of__handAligment_31() { return static_cast<int32_t>(offsetof(HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8, ____handAligment_31)); }
	inline int32_t get__handAligment_31() const { return ____handAligment_31; }
	inline int32_t* get_address_of__handAligment_31() { return &____handAligment_31; }
	inline void set__handAligment_31(int32_t value)
	{
		____handAligment_31 = value;
	}

	inline static int32_t get_offset_of__handGrabPoints_32() { return static_cast<int32_t>(offsetof(HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8, ____handGrabPoints_32)); }
	inline List_1_t9727992C543E8154629F46125BCBCA4724EC3994 * get__handGrabPoints_32() const { return ____handGrabPoints_32; }
	inline List_1_t9727992C543E8154629F46125BCBCA4724EC3994 ** get_address_of__handGrabPoints_32() { return &____handGrabPoints_32; }
	inline void set__handGrabPoints_32(List_1_t9727992C543E8154629F46125BCBCA4724EC3994 * value)
	{
		____handGrabPoints_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____handGrabPoints_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCollidersU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8, ___U3CCollidersU3Ek__BackingField_33)); }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* get_U3CCollidersU3Ek__BackingField_33() const { return ___U3CCollidersU3Ek__BackingField_33; }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486** get_address_of_U3CCollidersU3Ek__BackingField_33() { return &___U3CCollidersU3Ek__BackingField_33; }
	inline void set_U3CCollidersU3Ek__BackingField_33(ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* value)
	{
		___U3CCollidersU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCollidersU3Ek__BackingField_33), (void*)value);
	}

	inline static int32_t get_offset_of__grabPointsPoseFinder_34() { return static_cast<int32_t>(offsetof(HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8, ____grabPointsPoseFinder_34)); }
	inline GrabPointsPoseFinder_tE2E287FDC3FA30C239056FB7568999F5F825D3C2 * get__grabPointsPoseFinder_34() const { return ____grabPointsPoseFinder_34; }
	inline GrabPointsPoseFinder_tE2E287FDC3FA30C239056FB7568999F5F825D3C2 ** get_address_of__grabPointsPoseFinder_34() { return &____grabPointsPoseFinder_34; }
	inline void set__grabPointsPoseFinder_34(GrabPointsPoseFinder_tE2E287FDC3FA30C239056FB7568999F5F825D3C2 * value)
	{
		____grabPointsPoseFinder_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____grabPointsPoseFinder_34), (void*)value);
	}
};

struct HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8_StaticFields
{
public:
	// Oculus.Interaction.CollisionInteractionRegistry`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable> Oculus.Interaction.HandPosing.HandGrabInteractable::_registry
	CollisionInteractionRegistry_2_t81701500B16FD68D2C2044E10948E72C38D291EB * ____registry_35;

public:
	inline static int32_t get_offset_of__registry_35() { return static_cast<int32_t>(offsetof(HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8_StaticFields, ____registry_35)); }
	inline CollisionInteractionRegistry_2_t81701500B16FD68D2C2044E10948E72C38D291EB * get__registry_35() const { return ____registry_35; }
	inline CollisionInteractionRegistry_2_t81701500B16FD68D2C2044E10948E72C38D291EB ** get_address_of__registry_35() { return &____registry_35; }
	inline void set__registry_35(CollisionInteractionRegistry_2_t81701500B16FD68D2C2044E10948E72C38D291EB * value)
	{
		____registry_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____registry_35), (void*)value);
	}
};


// Oculus.Interaction.HandPosing.HandGrabInteractor
struct HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3  : public PointerInteractor_2_t7AAD143D36B249F43CD480089CF42EED514C5E59
{
public:
	// UnityEngine.MonoBehaviour Oculus.Interaction.HandPosing.HandGrabInteractor::_hand
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ____hand_27;
	// Oculus.Interaction.Input.IHand Oculus.Interaction.HandPosing.HandGrabInteractor::<Hand>k__BackingField
	RuntimeObject* ___U3CHandU3Ek__BackingField_28;
	// UnityEngine.Rigidbody Oculus.Interaction.HandPosing.HandGrabInteractor::_rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ____rigidbody_29;
	// Oculus.Interaction.GrabAPI.HandGrabAPI Oculus.Interaction.HandPosing.HandGrabInteractor::_handGrabApi
	HandGrabAPI_tAE7FF60657D0195A8E54B763C21975D0B7A1EFDE * ____handGrabApi_30;
	// Oculus.Interaction.Grab.GrabTypeFlags Oculus.Interaction.HandPosing.HandGrabInteractor::_supportedGrabTypes
	int32_t ____supportedGrabTypes_31;
	// Oculus.Interaction.HandWristOffset Oculus.Interaction.HandPosing.HandGrabInteractor::_gripPoint
	HandWristOffset_t945AAAB3FC06634817E62D7648DAAF946EA06CAE * ____gripPoint_32;
	// UnityEngine.Transform Oculus.Interaction.HandPosing.HandGrabInteractor::_pinchPoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____pinchPoint_33;
	// UnityEngine.MonoBehaviour Oculus.Interaction.HandPosing.HandGrabInteractor::_velocityCalculator
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ____velocityCalculator_34;
	// Oculus.Interaction.Throw.IVelocityCalculator Oculus.Interaction.HandPosing.HandGrabInteractor::<VelocityCalculator>k__BackingField
	RuntimeObject* ___U3CVelocityCalculatorU3Ek__BackingField_35;
	// Oculus.Interaction.HandPosing.SnapAddress`1<Oculus.Interaction.HandPosing.HandGrabInteractable> Oculus.Interaction.HandPosing.HandGrabInteractor::_currentSnap
	SnapAddress_1_t9CBCA4F1619BB9C99F852C6F37BA34BB4E756E9D * ____currentSnap_36;
	// Oculus.Interaction.HandPosing.HandPose Oculus.Interaction.HandPosing.HandGrabInteractor::_cachedBestHandPose
	HandPose_t5EF6A427F8FB46E831F00147341A89F721F954EF * ____cachedBestHandPose_37;
	// UnityEngine.Pose Oculus.Interaction.HandPosing.HandGrabInteractor::_cachedBestSnapPoint
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ____cachedBestSnapPoint_38;
	// Oculus.Interaction.IMovement Oculus.Interaction.HandPosing.HandGrabInteractor::_movement
	RuntimeObject* ____movement_39;
	// UnityEngine.Pose Oculus.Interaction.HandPosing.HandGrabInteractor::_wristToSnapOffset
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ____wristToSnapOffset_40;
	// UnityEngine.Pose Oculus.Interaction.HandPosing.HandGrabInteractor::_snapOffset
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ____snapOffset_41;
	// UnityEngine.Pose Oculus.Interaction.HandPosing.HandGrabInteractor::_trackedGripPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ____trackedGripPose_42;
	// UnityEngine.Pose Oculus.Interaction.HandPosing.HandGrabInteractor::_trackedPinchPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ____trackedPinchPose_43;
	// Oculus.Interaction.Grab.HandGrabbableData Oculus.Interaction.HandPosing.HandGrabInteractor::_lastInteractableData
	HandGrabbableData_tC120EF0DE73D407AA088074CD892C14E178A1BF6 * ____lastInteractableData_44;
	// System.Single Oculus.Interaction.HandPosing.HandGrabInteractor::<SnapStrength>k__BackingField
	float ___U3CSnapStrengthU3Ek__BackingField_45;
	// Oculus.Interaction.HandPosing.ISnapData Oculus.Interaction.HandPosing.HandGrabInteractor::<SnapData>k__BackingField
	RuntimeObject* ___U3CSnapDataU3Ek__BackingField_46;
	// System.Action`1<Oculus.Interaction.HandPosing.ISnapper> Oculus.Interaction.HandPosing.HandGrabInteractor::<WhenSnapStarted>k__BackingField
	Action_1_t2483A43350769D985C20817A778E42F80CCB9EAB * ___U3CWhenSnapStartedU3Ek__BackingField_47;
	// System.Action`1<Oculus.Interaction.HandPosing.ISnapper> Oculus.Interaction.HandPosing.HandGrabInteractor::<WhenSnapEnded>k__BackingField
	Action_1_t2483A43350769D985C20817A778E42F80CCB9EAB * ___U3CWhenSnapEndedU3Ek__BackingField_48;

public:
	inline static int32_t get_offset_of__hand_27() { return static_cast<int32_t>(offsetof(HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3, ____hand_27)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get__hand_27() const { return ____hand_27; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of__hand_27() { return &____hand_27; }
	inline void set__hand_27(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		____hand_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hand_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3, ___U3CHandU3Ek__BackingField_28)); }
	inline RuntimeObject* get_U3CHandU3Ek__BackingField_28() const { return ___U3CHandU3Ek__BackingField_28; }
	inline RuntimeObject** get_address_of_U3CHandU3Ek__BackingField_28() { return &___U3CHandU3Ek__BackingField_28; }
	inline void set_U3CHandU3Ek__BackingField_28(RuntimeObject* value)
	{
		___U3CHandU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of__rigidbody_29() { return static_cast<int32_t>(offsetof(HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3, ____rigidbody_29)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get__rigidbody_29() const { return ____rigidbody_29; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of__rigidbody_29() { return &____rigidbody_29; }
	inline void set__rigidbody_29(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		____rigidbody_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rigidbody_29), (void*)value);
	}

	inline static int32_t get_offset_of__handGrabApi_30() { return static_cast<int32_t>(offsetof(HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3, ____handGrabApi_30)); }
	inline HandGrabAPI_tAE7FF60657D0195A8E54B763C21975D0B7A1EFDE * get__handGrabApi_30() const { return ____handGrabApi_30; }
	inline HandGrabAPI_tAE7FF60657D0195A8E54B763C21975D0B7A1EFDE ** get_address_of__handGrabApi_30() { return &____handGrabApi_30; }
	inline void set__handGrabApi_30(HandGrabAPI_tAE7FF60657D0195A8E54B763C21975D0B7A1EFDE * value)
	{
		____handGrabApi_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____handGrabApi_30), (void*)value);
	}

	inline static int32_t get_offset_of__supportedGrabTypes_31() { return static_cast<int32_t>(offsetof(HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3, ____supportedGrabTypes_31)); }
	inline int32_t get__supportedGrabTypes_31() const { return ____supportedGrabTypes_31; }
	inline int32_t* get_address_of__supportedGrabTypes_31() { return &____supportedGrabTypes_31; }
	inline void set__supportedGrabTypes_31(int32_t value)
	{
		____supportedGrabTypes_31 = value;
	}

	inline static int32_t get_offset_of__gripPoint_32() { return static_cast<int32_t>(offsetof(HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3, ____gripPoint_32)); }
	inline HandWristOffset_t945AAAB3FC06634817E62D7648DAAF946EA06CAE * get__gripPoint_32() const { return ____gripPoint_32; }
	inline HandWristOffset_t945AAAB3FC06634817E62D7648DAAF946EA06CAE ** get_address_of__gripPoint_32() { return &____gripPoint_32; }
	inline void set__gripPoint_32(HandWristOffset_t945AAAB3FC06634817E62D7648DAAF946EA06CAE * value)
	{
		____gripPoint_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gripPoint_32), (void*)value);
	}

	inline static int32_t get_offset_of__pinchPoint_33() { return static_cast<int32_t>(offsetof(HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3, ____pinchPoint_33)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__pinchPoint_33() const { return ____pinchPoint_33; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__pinchPoint_33() { return &____pinchPoint_33; }
	inline void set__pinchPoint_33(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____pinchPoint_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pinchPoint_33), (void*)value);
	}

	inline static int32_t get_offset_of__velocityCalculator_34() { return static_cast<int32_t>(offsetof(HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3, ____velocityCalculator_34)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get__velocityCalculator_34() const { return ____velocityCalculator_34; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of__velocityCalculator_34() { return &____velocityCalculator_34; }
	inline void set__velocityCalculator_34(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		____velocityCalculator_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____velocityCalculator_34), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVelocityCalculatorU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3, ___U3CVelocityCalculatorU3Ek__BackingField_35)); }
	inline RuntimeObject* get_U3CVelocityCalculatorU3Ek__BackingField_35() const { return ___U3CVelocityCalculatorU3Ek__BackingField_35; }
	inline RuntimeObject** get_address_of_U3CVelocityCalculatorU3Ek__BackingField_35() { return &___U3CVelocityCalculatorU3Ek__BackingField_35; }
	inline void set_U3CVelocityCalculatorU3Ek__BackingField_35(RuntimeObject* value)
	{
		___U3CVelocityCalculatorU3Ek__BackingField_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVelocityCalculatorU3Ek__BackingField_35), (void*)value);
	}

	inline static int32_t get_offset_of__currentSnap_36() { return static_cast<int32_t>(offsetof(HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3, ____currentSnap_36)); }
	inline SnapAddress_1_t9CBCA4F1619BB9C99F852C6F37BA34BB4E756E9D * get__currentSnap_36() const { return ____currentSnap_36; }
	inline SnapAddress_1_t9CBCA4F1619BB9C99F852C6F37BA34BB4E756E9D ** get_address_of__currentSnap_36() { return &____currentSnap_36; }
	inline void set__currentSnap_36(SnapAddress_1_t9CBCA4F1619BB9C99F852C6F37BA34BB4E756E9D * value)
	{
		____currentSnap_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentSnap_36), (void*)value);
	}

	inline static int32_t get_offset_of__cachedBestHandPose_37() { return static_cast<int32_t>(offsetof(HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3, ____cachedBestHandPose_37)); }
	inline HandPose_t5EF6A427F8FB46E831F00147341A89F721F954EF * get__cachedBestHandPose_37() const { return ____cachedBestHandPose_37; }
	inline HandPose_t5EF6A427F8FB46E831F00147341A89F721F954EF ** get_address_of__cachedBestHandPose_37() { return &____cachedBestHandPose_37; }
	inline void set__cachedBestHandPose_37(HandPose_t5EF6A427F8FB46E831F00147341A89F721F954EF * value)
	{
		____cachedBestHandPose_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedBestHandPose_37), (void*)value);
	}

	inline static int32_t get_offset_of__cachedBestSnapPoint_38() { return static_cast<int32_t>(offsetof(HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3, ____cachedBestSnapPoint_38)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get__cachedBestSnapPoint_38() const { return ____cachedBestSnapPoint_38; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of__cachedBestSnapPoint_38() { return &____cachedBestSnapPoint_38; }
	inline void set__cachedBestSnapPoint_38(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		____cachedBestSnapPoint_38 = value;
	}

	inline static int32_t get_offset_of__movement_39() { return static_cast<int32_t>(offsetof(HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3, ____movement_39)); }
	inline RuntimeObject* get__movement_39() const { return ____movement_39; }
	inline RuntimeObject** get_address_of__movement_39() { return &____movement_39; }
	inline void set__movement_39(RuntimeObject* value)
	{
		____movement_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____movement_39), (void*)value);
	}

	inline static int32_t get_offset_of__wristToSnapOffset_40() { return static_cast<int32_t>(offsetof(HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3, ____wristToSnapOffset_40)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get__wristToSnapOffset_40() const { return ____wristToSnapOffset_40; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of__wristToSnapOffset_40() { return &____wristToSnapOffset_40; }
	inline void set__wristToSnapOffset_40(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		____wristToSnapOffset_40 = value;
	}

	inline static int32_t get_offset_of__snapOffset_41() { return static_cast<int32_t>(offsetof(HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3, ____snapOffset_41)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get__snapOffset_41() const { return ____snapOffset_41; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of__snapOffset_41() { return &____snapOffset_41; }
	inline void set__snapOffset_41(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		____snapOffset_41 = value;
	}

	inline static int32_t get_offset_of__trackedGripPose_42() { return static_cast<int32_t>(offsetof(HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3, ____trackedGripPose_42)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get__trackedGripPose_42() const { return ____trackedGripPose_42; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of__trackedGripPose_42() { return &____trackedGripPose_42; }
	inline void set__trackedGripPose_42(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		____trackedGripPose_42 = value;
	}

	inline static int32_t get_offset_of__trackedPinchPose_43() { return static_cast<int32_t>(offsetof(HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3, ____trackedPinchPose_43)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get__trackedPinchPose_43() const { return ____trackedPinchPose_43; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of__trackedPinchPose_43() { return &____trackedPinchPose_43; }
	inline void set__trackedPinchPose_43(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		____trackedPinchPose_43 = value;
	}

	inline static int32_t get_offset_of__lastInteractableData_44() { return static_cast<int32_t>(offsetof(HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3, ____lastInteractableData_44)); }
	inline HandGrabbableData_tC120EF0DE73D407AA088074CD892C14E178A1BF6 * get__lastInteractableData_44() const { return ____lastInteractableData_44; }
	inline HandGrabbableData_tC120EF0DE73D407AA088074CD892C14E178A1BF6 ** get_address_of__lastInteractableData_44() { return &____lastInteractableData_44; }
	inline void set__lastInteractableData_44(HandGrabbableData_tC120EF0DE73D407AA088074CD892C14E178A1BF6 * value)
	{
		____lastInteractableData_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastInteractableData_44), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSnapStrengthU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3, ___U3CSnapStrengthU3Ek__BackingField_45)); }
	inline float get_U3CSnapStrengthU3Ek__BackingField_45() const { return ___U3CSnapStrengthU3Ek__BackingField_45; }
	inline float* get_address_of_U3CSnapStrengthU3Ek__BackingField_45() { return &___U3CSnapStrengthU3Ek__BackingField_45; }
	inline void set_U3CSnapStrengthU3Ek__BackingField_45(float value)
	{
		___U3CSnapStrengthU3Ek__BackingField_45 = value;
	}

	inline static int32_t get_offset_of_U3CSnapDataU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3, ___U3CSnapDataU3Ek__BackingField_46)); }
	inline RuntimeObject* get_U3CSnapDataU3Ek__BackingField_46() const { return ___U3CSnapDataU3Ek__BackingField_46; }
	inline RuntimeObject** get_address_of_U3CSnapDataU3Ek__BackingField_46() { return &___U3CSnapDataU3Ek__BackingField_46; }
	inline void set_U3CSnapDataU3Ek__BackingField_46(RuntimeObject* value)
	{
		___U3CSnapDataU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSnapDataU3Ek__BackingField_46), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWhenSnapStartedU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3, ___U3CWhenSnapStartedU3Ek__BackingField_47)); }
	inline Action_1_t2483A43350769D985C20817A778E42F80CCB9EAB * get_U3CWhenSnapStartedU3Ek__BackingField_47() const { return ___U3CWhenSnapStartedU3Ek__BackingField_47; }
	inline Action_1_t2483A43350769D985C20817A778E42F80CCB9EAB ** get_address_of_U3CWhenSnapStartedU3Ek__BackingField_47() { return &___U3CWhenSnapStartedU3Ek__BackingField_47; }
	inline void set_U3CWhenSnapStartedU3Ek__BackingField_47(Action_1_t2483A43350769D985C20817A778E42F80CCB9EAB * value)
	{
		___U3CWhenSnapStartedU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CWhenSnapStartedU3Ek__BackingField_47), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWhenSnapEndedU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3, ___U3CWhenSnapEndedU3Ek__BackingField_48)); }
	inline Action_1_t2483A43350769D985C20817A778E42F80CCB9EAB * get_U3CWhenSnapEndedU3Ek__BackingField_48() const { return ___U3CWhenSnapEndedU3Ek__BackingField_48; }
	inline Action_1_t2483A43350769D985C20817A778E42F80CCB9EAB ** get_address_of_U3CWhenSnapEndedU3Ek__BackingField_48() { return &___U3CWhenSnapEndedU3Ek__BackingField_48; }
	inline void set_U3CWhenSnapEndedU3Ek__BackingField_48(Action_1_t2483A43350769D985C20817A778E42F80CCB9EAB * value)
	{
		___U3CWhenSnapEndedU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CWhenSnapEndedU3Ek__BackingField_48), (void*)value);
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


// TMPro.TMP_Text
struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* ___k_Power_258;

public:
	inline static int32_t get_offset_of_m_text_36() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_text_36)); }
	inline String_t* get_m_text_36() const { return ___m_text_36; }
	inline String_t** get_address_of_m_text_36() { return &___m_text_36; }
	inline void set_m_text_36(String_t* value)
	{
		___m_text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsTextBackingStringDirty_37() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsTextBackingStringDirty_37)); }
	inline bool get_m_IsTextBackingStringDirty_37() const { return ___m_IsTextBackingStringDirty_37; }
	inline bool* get_address_of_m_IsTextBackingStringDirty_37() { return &___m_IsTextBackingStringDirty_37; }
	inline void set_m_IsTextBackingStringDirty_37(bool value)
	{
		___m_IsTextBackingStringDirty_37 = value;
	}

	inline static int32_t get_offset_of_m_TextPreprocessor_38() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextPreprocessor_38)); }
	inline RuntimeObject* get_m_TextPreprocessor_38() const { return ___m_TextPreprocessor_38; }
	inline RuntimeObject** get_address_of_m_TextPreprocessor_38() { return &___m_TextPreprocessor_38; }
	inline void set_m_TextPreprocessor_38(RuntimeObject* value)
	{
		___m_TextPreprocessor_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextPreprocessor_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_39() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRightToLeft_39)); }
	inline bool get_m_isRightToLeft_39() const { return ___m_isRightToLeft_39; }
	inline bool* get_address_of_m_isRightToLeft_39() { return &___m_isRightToLeft_39; }
	inline void set_m_isRightToLeft_39(bool value)
	{
		___m_isRightToLeft_39 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_40() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontAsset_40)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_fontAsset_40() const { return ___m_fontAsset_40; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_fontAsset_40() { return &___m_fontAsset_40; }
	inline void set_m_fontAsset_40(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_fontAsset_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_41() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontAsset_41)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_currentFontAsset_41() const { return ___m_currentFontAsset_41; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_currentFontAsset_41() { return &___m_currentFontAsset_41; }
	inline void set_m_currentFontAsset_41(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_currentFontAsset_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_42() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isSDFShader_42)); }
	inline bool get_m_isSDFShader_42() const { return ___m_isSDFShader_42; }
	inline bool* get_address_of_m_isSDFShader_42() { return &___m_isSDFShader_42; }
	inline void set_m_isSDFShader_42(bool value)
	{
		___m_isSDFShader_42 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_43() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sharedMaterial_43)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_sharedMaterial_43() const { return ___m_sharedMaterial_43; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_sharedMaterial_43() { return &___m_sharedMaterial_43; }
	inline void set_m_sharedMaterial_43(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_sharedMaterial_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_44() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterial_44)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_currentMaterial_44() const { return ___m_currentMaterial_44; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_currentMaterial_44() { return &___m_currentMaterial_44; }
	inline void set_m_currentMaterial_44(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_currentMaterial_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_48() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterialIndex_48)); }
	inline int32_t get_m_currentMaterialIndex_48() const { return ___m_currentMaterialIndex_48; }
	inline int32_t* get_address_of_m_currentMaterialIndex_48() { return &___m_currentMaterialIndex_48; }
	inline void set_m_currentMaterialIndex_48(int32_t value)
	{
		___m_currentMaterialIndex_48 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_49() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSharedMaterials_49)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontSharedMaterials_49() const { return ___m_fontSharedMaterials_49; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontSharedMaterials_49() { return &___m_fontSharedMaterials_49; }
	inline void set_m_fontSharedMaterials_49(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontSharedMaterials_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_50() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterial_50)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_fontMaterial_50() const { return ___m_fontMaterial_50; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_fontMaterial_50() { return &___m_fontMaterial_50; }
	inline void set_m_fontMaterial_50(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_fontMaterial_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_51() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterials_51)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontMaterials_51() const { return ___m_fontMaterials_51; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontMaterials_51() { return &___m_fontMaterials_51; }
	inline void set_m_fontMaterials_51(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontMaterials_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_51), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_52() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaterialDirty_52)); }
	inline bool get_m_isMaterialDirty_52() const { return ___m_isMaterialDirty_52; }
	inline bool* get_address_of_m_isMaterialDirty_52() { return &___m_isMaterialDirty_52; }
	inline void set_m_isMaterialDirty_52(bool value)
	{
		___m_isMaterialDirty_52 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_53() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor32_53)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_fontColor32_53() const { return ___m_fontColor32_53; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_fontColor32_53() { return &___m_fontColor32_53; }
	inline void set_m_fontColor32_53(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_fontColor32_53 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_54() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor_54)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_fontColor_54() const { return ___m_fontColor_54; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_fontColor_54() { return &___m_fontColor_54; }
	inline void set_m_fontColor_54(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_fontColor_54 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_56() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColor_56)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_underlineColor_56() const { return ___m_underlineColor_56; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_underlineColor_56() { return &___m_underlineColor_56; }
	inline void set_m_underlineColor_56(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_underlineColor_56 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_57() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColor_57)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_strikethroughColor_57() const { return ___m_strikethroughColor_57; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_strikethroughColor_57() { return &___m_strikethroughColor_57; }
	inline void set_m_strikethroughColor_57(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_strikethroughColor_57 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_58() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableVertexGradient_58)); }
	inline bool get_m_enableVertexGradient_58() const { return ___m_enableVertexGradient_58; }
	inline bool* get_address_of_m_enableVertexGradient_58() { return &___m_enableVertexGradient_58; }
	inline void set_m_enableVertexGradient_58(bool value)
	{
		___m_enableVertexGradient_58 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_59() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorMode_59)); }
	inline int32_t get_m_colorMode_59() const { return ___m_colorMode_59; }
	inline int32_t* get_address_of_m_colorMode_59() { return &___m_colorMode_59; }
	inline void set_m_colorMode_59(int32_t value)
	{
		___m_colorMode_59 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_60() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradient_60)); }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  get_m_fontColorGradient_60() const { return ___m_fontColorGradient_60; }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D * get_address_of_m_fontColorGradient_60() { return &___m_fontColorGradient_60; }
	inline void set_m_fontColorGradient_60(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  value)
	{
		___m_fontColorGradient_60 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_61() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradientPreset_61)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_fontColorGradientPreset_61() const { return ___m_fontColorGradientPreset_61; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_fontColorGradientPreset_61() { return &___m_fontColorGradientPreset_61; }
	inline void set_m_fontColorGradientPreset_61(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_fontColorGradientPreset_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_61), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_62() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAsset_62)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_spriteAsset_62() const { return ___m_spriteAsset_62; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_spriteAsset_62() { return &___m_spriteAsset_62; }
	inline void set_m_spriteAsset_62(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_spriteAsset_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_63() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintAllSprites_63)); }
	inline bool get_m_tintAllSprites_63() const { return ___m_tintAllSprites_63; }
	inline bool* get_address_of_m_tintAllSprites_63() { return &___m_tintAllSprites_63; }
	inline void set_m_tintAllSprites_63(bool value)
	{
		___m_tintAllSprites_63 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_64() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintSprite_64)); }
	inline bool get_m_tintSprite_64() const { return ___m_tintSprite_64; }
	inline bool* get_address_of_m_tintSprite_64() { return &___m_tintSprite_64; }
	inline void set_m_tintSprite_64(bool value)
	{
		___m_tintSprite_64 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_65() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteColor_65)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_spriteColor_65() const { return ___m_spriteColor_65; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_spriteColor_65() { return &___m_spriteColor_65; }
	inline void set_m_spriteColor_65(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_spriteColor_65 = value;
	}

	inline static int32_t get_offset_of_m_StyleSheet_66() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_StyleSheet_66)); }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * get_m_StyleSheet_66() const { return ___m_StyleSheet_66; }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E ** get_address_of_m_StyleSheet_66() { return &___m_StyleSheet_66; }
	inline void set_m_StyleSheet_66(TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * value)
	{
		___m_StyleSheet_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StyleSheet_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyle_67() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyle_67)); }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * get_m_TextStyle_67() const { return ___m_TextStyle_67; }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB ** get_address_of_m_TextStyle_67() { return &___m_TextStyle_67; }
	inline void set_m_TextStyle_67(TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * value)
	{
		___m_TextStyle_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyle_67), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleHashCode_68() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleHashCode_68)); }
	inline int32_t get_m_TextStyleHashCode_68() const { return ___m_TextStyleHashCode_68; }
	inline int32_t* get_address_of_m_TextStyleHashCode_68() { return &___m_TextStyleHashCode_68; }
	inline void set_m_TextStyleHashCode_68(int32_t value)
	{
		___m_TextStyleHashCode_68 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_69() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overrideHtmlColors_69)); }
	inline bool get_m_overrideHtmlColors_69() const { return ___m_overrideHtmlColors_69; }
	inline bool* get_address_of_m_overrideHtmlColors_69() { return &___m_overrideHtmlColors_69; }
	inline void set_m_overrideHtmlColors_69(bool value)
	{
		___m_overrideHtmlColors_69 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_70() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_faceColor_70)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_faceColor_70() const { return ___m_faceColor_70; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_faceColor_70() { return &___m_faceColor_70; }
	inline void set_m_faceColor_70(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_faceColor_70 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_71() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineColor_71)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_outlineColor_71() const { return ___m_outlineColor_71; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_outlineColor_71() { return &___m_outlineColor_71; }
	inline void set_m_outlineColor_71(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_outlineColor_71 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_72() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineWidth_72)); }
	inline float get_m_outlineWidth_72() const { return ___m_outlineWidth_72; }
	inline float* get_address_of_m_outlineWidth_72() { return &___m_outlineWidth_72; }
	inline void set_m_outlineWidth_72(float value)
	{
		___m_outlineWidth_72 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_73() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSize_73)); }
	inline float get_m_fontSize_73() const { return ___m_fontSize_73; }
	inline float* get_address_of_m_fontSize_73() { return &___m_fontSize_73; }
	inline void set_m_fontSize_73(float value)
	{
		___m_fontSize_73 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_74() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontSize_74)); }
	inline float get_m_currentFontSize_74() const { return ___m_currentFontSize_74; }
	inline float* get_address_of_m_currentFontSize_74() { return &___m_currentFontSize_74; }
	inline void set_m_currentFontSize_74(float value)
	{
		___m_currentFontSize_74 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_75() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeBase_75)); }
	inline float get_m_fontSizeBase_75() const { return ___m_fontSizeBase_75; }
	inline float* get_address_of_m_fontSizeBase_75() { return &___m_fontSizeBase_75; }
	inline void set_m_fontSizeBase_75(float value)
	{
		___m_fontSizeBase_75 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_76() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sizeStack_76)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_sizeStack_76() const { return ___m_sizeStack_76; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_sizeStack_76() { return &___m_sizeStack_76; }
	inline void set_m_sizeStack_76(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_sizeStack_76 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_76))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_77() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontWeight_77)); }
	inline int32_t get_m_fontWeight_77() const { return ___m_fontWeight_77; }
	inline int32_t* get_address_of_m_fontWeight_77() { return &___m_fontWeight_77; }
	inline void set_m_fontWeight_77(int32_t value)
	{
		___m_fontWeight_77 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_78() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightInternal_78)); }
	inline int32_t get_m_FontWeightInternal_78() const { return ___m_FontWeightInternal_78; }
	inline int32_t* get_address_of_m_FontWeightInternal_78() { return &___m_FontWeightInternal_78; }
	inline void set_m_FontWeightInternal_78(int32_t value)
	{
		___m_FontWeightInternal_78 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_79() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightStack_79)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_m_FontWeightStack_79() const { return ___m_FontWeightStack_79; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_m_FontWeightStack_79() { return &___m_FontWeightStack_79; }
	inline void set_m_FontWeightStack_79(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___m_FontWeightStack_79 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_79))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_80() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableAutoSizing_80)); }
	inline bool get_m_enableAutoSizing_80() const { return ___m_enableAutoSizing_80; }
	inline bool* get_address_of_m_enableAutoSizing_80() { return &___m_enableAutoSizing_80; }
	inline void set_m_enableAutoSizing_80(bool value)
	{
		___m_enableAutoSizing_80 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_81() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxFontSize_81)); }
	inline float get_m_maxFontSize_81() const { return ___m_maxFontSize_81; }
	inline float* get_address_of_m_maxFontSize_81() { return &___m_maxFontSize_81; }
	inline void set_m_maxFontSize_81(float value)
	{
		___m_maxFontSize_81 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_82() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minFontSize_82)); }
	inline float get_m_minFontSize_82() const { return ___m_minFontSize_82; }
	inline float* get_address_of_m_minFontSize_82() { return &___m_minFontSize_82; }
	inline void set_m_minFontSize_82(float value)
	{
		___m_minFontSize_82 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeIterationCount_83() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeIterationCount_83)); }
	inline int32_t get_m_AutoSizeIterationCount_83() const { return ___m_AutoSizeIterationCount_83; }
	inline int32_t* get_address_of_m_AutoSizeIterationCount_83() { return &___m_AutoSizeIterationCount_83; }
	inline void set_m_AutoSizeIterationCount_83(int32_t value)
	{
		___m_AutoSizeIterationCount_83 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeMaxIterationCount_84() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeMaxIterationCount_84)); }
	inline int32_t get_m_AutoSizeMaxIterationCount_84() const { return ___m_AutoSizeMaxIterationCount_84; }
	inline int32_t* get_address_of_m_AutoSizeMaxIterationCount_84() { return &___m_AutoSizeMaxIterationCount_84; }
	inline void set_m_AutoSizeMaxIterationCount_84(int32_t value)
	{
		___m_AutoSizeMaxIterationCount_84 = value;
	}

	inline static int32_t get_offset_of_m_IsAutoSizePointSizeSet_85() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsAutoSizePointSizeSet_85)); }
	inline bool get_m_IsAutoSizePointSizeSet_85() const { return ___m_IsAutoSizePointSizeSet_85; }
	inline bool* get_address_of_m_IsAutoSizePointSizeSet_85() { return &___m_IsAutoSizePointSizeSet_85; }
	inline void set_m_IsAutoSizePointSizeSet_85(bool value)
	{
		___m_IsAutoSizePointSizeSet_85 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_86() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMin_86)); }
	inline float get_m_fontSizeMin_86() const { return ___m_fontSizeMin_86; }
	inline float* get_address_of_m_fontSizeMin_86() { return &___m_fontSizeMin_86; }
	inline void set_m_fontSizeMin_86(float value)
	{
		___m_fontSizeMin_86 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_87() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMax_87)); }
	inline float get_m_fontSizeMax_87() const { return ___m_fontSizeMax_87; }
	inline float* get_address_of_m_fontSizeMax_87() { return &___m_fontSizeMax_87; }
	inline void set_m_fontSizeMax_87(float value)
	{
		___m_fontSizeMax_87 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_88() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyle_88)); }
	inline int32_t get_m_fontStyle_88() const { return ___m_fontStyle_88; }
	inline int32_t* get_address_of_m_fontStyle_88() { return &___m_fontStyle_88; }
	inline void set_m_fontStyle_88(int32_t value)
	{
		___m_fontStyle_88 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_89() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontStyleInternal_89)); }
	inline int32_t get_m_FontStyleInternal_89() const { return ___m_FontStyleInternal_89; }
	inline int32_t* get_address_of_m_FontStyleInternal_89() { return &___m_FontStyleInternal_89; }
	inline void set_m_FontStyleInternal_89(int32_t value)
	{
		___m_FontStyleInternal_89 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_90() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyleStack_90)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_m_fontStyleStack_90() const { return ___m_fontStyleStack_90; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_m_fontStyleStack_90() { return &___m_fontStyleStack_90; }
	inline void set_m_fontStyleStack_90(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___m_fontStyleStack_90 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_91() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingBold_91)); }
	inline bool get_m_isUsingBold_91() const { return ___m_isUsingBold_91; }
	inline bool* get_address_of_m_isUsingBold_91() { return &___m_isUsingBold_91; }
	inline void set_m_isUsingBold_91(bool value)
	{
		___m_isUsingBold_91 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAlignment_92() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HorizontalAlignment_92)); }
	inline int32_t get_m_HorizontalAlignment_92() const { return ___m_HorizontalAlignment_92; }
	inline int32_t* get_address_of_m_HorizontalAlignment_92() { return &___m_HorizontalAlignment_92; }
	inline void set_m_HorizontalAlignment_92(int32_t value)
	{
		___m_HorizontalAlignment_92 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAlignment_93() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VerticalAlignment_93)); }
	inline int32_t get_m_VerticalAlignment_93() const { return ___m_VerticalAlignment_93; }
	inline int32_t* get_address_of_m_VerticalAlignment_93() { return &___m_VerticalAlignment_93; }
	inline void set_m_VerticalAlignment_93(int32_t value)
	{
		___m_VerticalAlignment_93 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_94() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textAlignment_94)); }
	inline int32_t get_m_textAlignment_94() const { return ___m_textAlignment_94; }
	inline int32_t* get_address_of_m_textAlignment_94() { return &___m_textAlignment_94; }
	inline void set_m_textAlignment_94(int32_t value)
	{
		___m_textAlignment_94 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_95() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustification_95)); }
	inline int32_t get_m_lineJustification_95() const { return ___m_lineJustification_95; }
	inline int32_t* get_address_of_m_lineJustification_95() { return &___m_lineJustification_95; }
	inline void set_m_lineJustification_95(int32_t value)
	{
		___m_lineJustification_95 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_96() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustificationStack_96)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_m_lineJustificationStack_96() const { return ___m_lineJustificationStack_96; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_m_lineJustificationStack_96() { return &___m_lineJustificationStack_96; }
	inline void set_m_lineJustificationStack_96(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___m_lineJustificationStack_96 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_96))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_97() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textContainerLocalCorners_97)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_textContainerLocalCorners_97() const { return ___m_textContainerLocalCorners_97; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_textContainerLocalCorners_97() { return &___m_textContainerLocalCorners_97; }
	inline void set_m_textContainerLocalCorners_97(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_textContainerLocalCorners_97 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_97), (void*)value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_98() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterSpacing_98)); }
	inline float get_m_characterSpacing_98() const { return ___m_characterSpacing_98; }
	inline float* get_address_of_m_characterSpacing_98() { return &___m_characterSpacing_98; }
	inline void set_m_characterSpacing_98(float value)
	{
		___m_characterSpacing_98 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_99() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cSpacing_99)); }
	inline float get_m_cSpacing_99() const { return ___m_cSpacing_99; }
	inline float* get_address_of_m_cSpacing_99() { return &___m_cSpacing_99; }
	inline void set_m_cSpacing_99(float value)
	{
		___m_cSpacing_99 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_100() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_monoSpacing_100)); }
	inline float get_m_monoSpacing_100() const { return ___m_monoSpacing_100; }
	inline float* get_address_of_m_monoSpacing_100() { return &___m_monoSpacing_100; }
	inline void set_m_monoSpacing_100(float value)
	{
		___m_monoSpacing_100 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_101() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordSpacing_101)); }
	inline float get_m_wordSpacing_101() const { return ___m_wordSpacing_101; }
	inline float* get_address_of_m_wordSpacing_101() { return &___m_wordSpacing_101; }
	inline void set_m_wordSpacing_101(float value)
	{
		___m_wordSpacing_101 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_102() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacing_102)); }
	inline float get_m_lineSpacing_102() const { return ___m_lineSpacing_102; }
	inline float* get_address_of_m_lineSpacing_102() { return &___m_lineSpacing_102; }
	inline void set_m_lineSpacing_102(float value)
	{
		___m_lineSpacing_102 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_103() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingDelta_103)); }
	inline float get_m_lineSpacingDelta_103() const { return ___m_lineSpacingDelta_103; }
	inline float* get_address_of_m_lineSpacingDelta_103() { return &___m_lineSpacingDelta_103; }
	inline void set_m_lineSpacingDelta_103(float value)
	{
		___m_lineSpacingDelta_103 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_104() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineHeight_104)); }
	inline float get_m_lineHeight_104() const { return ___m_lineHeight_104; }
	inline float* get_address_of_m_lineHeight_104() { return &___m_lineHeight_104; }
	inline void set_m_lineHeight_104(float value)
	{
		___m_lineHeight_104 = value;
	}

	inline static int32_t get_offset_of_m_IsDrivenLineSpacing_105() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsDrivenLineSpacing_105)); }
	inline bool get_m_IsDrivenLineSpacing_105() const { return ___m_IsDrivenLineSpacing_105; }
	inline bool* get_address_of_m_IsDrivenLineSpacing_105() { return &___m_IsDrivenLineSpacing_105; }
	inline void set_m_IsDrivenLineSpacing_105(bool value)
	{
		___m_IsDrivenLineSpacing_105 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_106() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingMax_106)); }
	inline float get_m_lineSpacingMax_106() const { return ___m_lineSpacingMax_106; }
	inline float* get_address_of_m_lineSpacingMax_106() { return &___m_lineSpacingMax_106; }
	inline void set_m_lineSpacingMax_106(float value)
	{
		___m_lineSpacingMax_106 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_107() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_paragraphSpacing_107)); }
	inline float get_m_paragraphSpacing_107() const { return ___m_paragraphSpacing_107; }
	inline float* get_address_of_m_paragraphSpacing_107() { return &___m_paragraphSpacing_107; }
	inline void set_m_paragraphSpacing_107(float value)
	{
		___m_paragraphSpacing_107 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_108() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthMaxAdj_108)); }
	inline float get_m_charWidthMaxAdj_108() const { return ___m_charWidthMaxAdj_108; }
	inline float* get_address_of_m_charWidthMaxAdj_108() { return &___m_charWidthMaxAdj_108; }
	inline void set_m_charWidthMaxAdj_108(float value)
	{
		___m_charWidthMaxAdj_108 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_109() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthAdjDelta_109)); }
	inline float get_m_charWidthAdjDelta_109() const { return ___m_charWidthAdjDelta_109; }
	inline float* get_address_of_m_charWidthAdjDelta_109() { return &___m_charWidthAdjDelta_109; }
	inline void set_m_charWidthAdjDelta_109(float value)
	{
		___m_charWidthAdjDelta_109 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_110() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableWordWrapping_110)); }
	inline bool get_m_enableWordWrapping_110() const { return ___m_enableWordWrapping_110; }
	inline bool* get_address_of_m_enableWordWrapping_110() { return &___m_enableWordWrapping_110; }
	inline void set_m_enableWordWrapping_110(bool value)
	{
		___m_enableWordWrapping_110 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_111() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCharacterWrappingEnabled_111)); }
	inline bool get_m_isCharacterWrappingEnabled_111() const { return ___m_isCharacterWrappingEnabled_111; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_111() { return &___m_isCharacterWrappingEnabled_111; }
	inline void set_m_isCharacterWrappingEnabled_111(bool value)
	{
		___m_isCharacterWrappingEnabled_111 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_112() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNonBreakingSpace_112)); }
	inline bool get_m_isNonBreakingSpace_112() const { return ___m_isNonBreakingSpace_112; }
	inline bool* get_address_of_m_isNonBreakingSpace_112() { return &___m_isNonBreakingSpace_112; }
	inline void set_m_isNonBreakingSpace_112(bool value)
	{
		___m_isNonBreakingSpace_112 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_113() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isIgnoringAlignment_113)); }
	inline bool get_m_isIgnoringAlignment_113() const { return ___m_isIgnoringAlignment_113; }
	inline bool* get_address_of_m_isIgnoringAlignment_113() { return &___m_isIgnoringAlignment_113; }
	inline void set_m_isIgnoringAlignment_113(bool value)
	{
		___m_isIgnoringAlignment_113 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_114() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordWrappingRatios_114)); }
	inline float get_m_wordWrappingRatios_114() const { return ___m_wordWrappingRatios_114; }
	inline float* get_address_of_m_wordWrappingRatios_114() { return &___m_wordWrappingRatios_114; }
	inline void set_m_wordWrappingRatios_114(float value)
	{
		___m_wordWrappingRatios_114 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_115() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overflowMode_115)); }
	inline int32_t get_m_overflowMode_115() const { return ___m_overflowMode_115; }
	inline int32_t* get_address_of_m_overflowMode_115() { return &___m_overflowMode_115; }
	inline void set_m_overflowMode_115(int32_t value)
	{
		___m_overflowMode_115 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_116() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstOverflowCharacterIndex_116)); }
	inline int32_t get_m_firstOverflowCharacterIndex_116() const { return ___m_firstOverflowCharacterIndex_116; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_116() { return &___m_firstOverflowCharacterIndex_116; }
	inline void set_m_firstOverflowCharacterIndex_116(int32_t value)
	{
		___m_firstOverflowCharacterIndex_116 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_117() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_linkedTextComponent_117)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_linkedTextComponent_117() const { return ___m_linkedTextComponent_117; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_linkedTextComponent_117() { return &___m_linkedTextComponent_117; }
	inline void set_m_linkedTextComponent_117(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_linkedTextComponent_117 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_117), (void*)value);
	}

	inline static int32_t get_offset_of_parentLinkedComponent_118() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___parentLinkedComponent_118)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_parentLinkedComponent_118() const { return ___parentLinkedComponent_118; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_parentLinkedComponent_118() { return &___parentLinkedComponent_118; }
	inline void set_parentLinkedComponent_118(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___parentLinkedComponent_118 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentLinkedComponent_118), (void*)value);
	}

	inline static int32_t get_offset_of_m_isTextTruncated_119() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isTextTruncated_119)); }
	inline bool get_m_isTextTruncated_119() const { return ___m_isTextTruncated_119; }
	inline bool* get_address_of_m_isTextTruncated_119() { return &___m_isTextTruncated_119; }
	inline void set_m_isTextTruncated_119(bool value)
	{
		___m_isTextTruncated_119 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_120() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableKerning_120)); }
	inline bool get_m_enableKerning_120() const { return ___m_enableKerning_120; }
	inline bool* get_address_of_m_enableKerning_120() { return &___m_enableKerning_120; }
	inline void set_m_enableKerning_120(bool value)
	{
		___m_enableKerning_120 = value;
	}

	inline static int32_t get_offset_of_m_GlyphHorizontalAdvanceAdjustment_121() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_GlyphHorizontalAdvanceAdjustment_121)); }
	inline float get_m_GlyphHorizontalAdvanceAdjustment_121() const { return ___m_GlyphHorizontalAdvanceAdjustment_121; }
	inline float* get_address_of_m_GlyphHorizontalAdvanceAdjustment_121() { return &___m_GlyphHorizontalAdvanceAdjustment_121; }
	inline void set_m_GlyphHorizontalAdvanceAdjustment_121(float value)
	{
		___m_GlyphHorizontalAdvanceAdjustment_121 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_122() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableExtraPadding_122)); }
	inline bool get_m_enableExtraPadding_122() const { return ___m_enableExtraPadding_122; }
	inline bool* get_address_of_m_enableExtraPadding_122() { return &___m_enableExtraPadding_122; }
	inline void set_m_enableExtraPadding_122(bool value)
	{
		___m_enableExtraPadding_122 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_123() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___checkPaddingRequired_123)); }
	inline bool get_checkPaddingRequired_123() const { return ___checkPaddingRequired_123; }
	inline bool* get_address_of_checkPaddingRequired_123() { return &___checkPaddingRequired_123; }
	inline void set_checkPaddingRequired_123(bool value)
	{
		___checkPaddingRequired_123 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_124() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRichText_124)); }
	inline bool get_m_isRichText_124() const { return ___m_isRichText_124; }
	inline bool* get_address_of_m_isRichText_124() { return &___m_isRichText_124; }
	inline void set_m_isRichText_124(bool value)
	{
		___m_isRichText_124 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_125() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_parseCtrlCharacters_125)); }
	inline bool get_m_parseCtrlCharacters_125() const { return ___m_parseCtrlCharacters_125; }
	inline bool* get_address_of_m_parseCtrlCharacters_125() { return &___m_parseCtrlCharacters_125; }
	inline void set_m_parseCtrlCharacters_125(bool value)
	{
		___m_parseCtrlCharacters_125 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_126() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOverlay_126)); }
	inline bool get_m_isOverlay_126() const { return ___m_isOverlay_126; }
	inline bool* get_address_of_m_isOverlay_126() { return &___m_isOverlay_126; }
	inline void set_m_isOverlay_126(bool value)
	{
		___m_isOverlay_126 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_127() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOrthographic_127)); }
	inline bool get_m_isOrthographic_127() const { return ___m_isOrthographic_127; }
	inline bool* get_address_of_m_isOrthographic_127() { return &___m_isOrthographic_127; }
	inline void set_m_isOrthographic_127(bool value)
	{
		___m_isOrthographic_127 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_128() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCullingEnabled_128)); }
	inline bool get_m_isCullingEnabled_128() const { return ___m_isCullingEnabled_128; }
	inline bool* get_address_of_m_isCullingEnabled_128() { return &___m_isCullingEnabled_128; }
	inline void set_m_isCullingEnabled_128(bool value)
	{
		___m_isCullingEnabled_128 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_129() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaskingEnabled_129)); }
	inline bool get_m_isMaskingEnabled_129() const { return ___m_isMaskingEnabled_129; }
	inline bool* get_address_of_m_isMaskingEnabled_129() { return &___m_isMaskingEnabled_129; }
	inline void set_m_isMaskingEnabled_129(bool value)
	{
		___m_isMaskingEnabled_129 = value;
	}

	inline static int32_t get_offset_of_isMaskUpdateRequired_130() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___isMaskUpdateRequired_130)); }
	inline bool get_isMaskUpdateRequired_130() const { return ___isMaskUpdateRequired_130; }
	inline bool* get_address_of_isMaskUpdateRequired_130() { return &___isMaskUpdateRequired_130; }
	inline void set_isMaskUpdateRequired_130(bool value)
	{
		___isMaskUpdateRequired_130 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_131() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreCulling_131)); }
	inline bool get_m_ignoreCulling_131() const { return ___m_ignoreCulling_131; }
	inline bool* get_address_of_m_ignoreCulling_131() { return &___m_ignoreCulling_131; }
	inline void set_m_ignoreCulling_131(bool value)
	{
		___m_ignoreCulling_131 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_132() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_horizontalMapping_132)); }
	inline int32_t get_m_horizontalMapping_132() const { return ___m_horizontalMapping_132; }
	inline int32_t* get_address_of_m_horizontalMapping_132() { return &___m_horizontalMapping_132; }
	inline void set_m_horizontalMapping_132(int32_t value)
	{
		___m_horizontalMapping_132 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_133() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_verticalMapping_133)); }
	inline int32_t get_m_verticalMapping_133() const { return ___m_verticalMapping_133; }
	inline int32_t* get_address_of_m_verticalMapping_133() { return &___m_verticalMapping_133; }
	inline void set_m_verticalMapping_133(int32_t value)
	{
		___m_verticalMapping_133 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_134() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_uvLineOffset_134)); }
	inline float get_m_uvLineOffset_134() const { return ___m_uvLineOffset_134; }
	inline float* get_address_of_m_uvLineOffset_134() { return &___m_uvLineOffset_134; }
	inline void set_m_uvLineOffset_134(float value)
	{
		___m_uvLineOffset_134 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_135() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderMode_135)); }
	inline int32_t get_m_renderMode_135() const { return ___m_renderMode_135; }
	inline int32_t* get_address_of_m_renderMode_135() { return &___m_renderMode_135; }
	inline void set_m_renderMode_135(int32_t value)
	{
		___m_renderMode_135 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_136() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_geometrySortingOrder_136)); }
	inline int32_t get_m_geometrySortingOrder_136() const { return ___m_geometrySortingOrder_136; }
	inline int32_t* get_address_of_m_geometrySortingOrder_136() { return &___m_geometrySortingOrder_136; }
	inline void set_m_geometrySortingOrder_136(int32_t value)
	{
		___m_geometrySortingOrder_136 = value;
	}

	inline static int32_t get_offset_of_m_IsTextObjectScaleStatic_137() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsTextObjectScaleStatic_137)); }
	inline bool get_m_IsTextObjectScaleStatic_137() const { return ___m_IsTextObjectScaleStatic_137; }
	inline bool* get_address_of_m_IsTextObjectScaleStatic_137() { return &___m_IsTextObjectScaleStatic_137; }
	inline void set_m_IsTextObjectScaleStatic_137(bool value)
	{
		___m_IsTextObjectScaleStatic_137 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_138() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VertexBufferAutoSizeReduction_138)); }
	inline bool get_m_VertexBufferAutoSizeReduction_138() const { return ___m_VertexBufferAutoSizeReduction_138; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_138() { return &___m_VertexBufferAutoSizeReduction_138; }
	inline void set_m_VertexBufferAutoSizeReduction_138(bool value)
	{
		___m_VertexBufferAutoSizeReduction_138 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_139() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacter_139)); }
	inline int32_t get_m_firstVisibleCharacter_139() const { return ___m_firstVisibleCharacter_139; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_139() { return &___m_firstVisibleCharacter_139; }
	inline void set_m_firstVisibleCharacter_139(int32_t value)
	{
		___m_firstVisibleCharacter_139 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_140() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleCharacters_140)); }
	inline int32_t get_m_maxVisibleCharacters_140() const { return ___m_maxVisibleCharacters_140; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_140() { return &___m_maxVisibleCharacters_140; }
	inline void set_m_maxVisibleCharacters_140(int32_t value)
	{
		___m_maxVisibleCharacters_140 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_141() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleWords_141)); }
	inline int32_t get_m_maxVisibleWords_141() const { return ___m_maxVisibleWords_141; }
	inline int32_t* get_address_of_m_maxVisibleWords_141() { return &___m_maxVisibleWords_141; }
	inline void set_m_maxVisibleWords_141(int32_t value)
	{
		___m_maxVisibleWords_141 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_142() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleLines_142)); }
	inline int32_t get_m_maxVisibleLines_142() const { return ___m_maxVisibleLines_142; }
	inline int32_t* get_address_of_m_maxVisibleLines_142() { return &___m_maxVisibleLines_142; }
	inline void set_m_maxVisibleLines_142(int32_t value)
	{
		___m_maxVisibleLines_142 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_143() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_useMaxVisibleDescender_143)); }
	inline bool get_m_useMaxVisibleDescender_143() const { return ___m_useMaxVisibleDescender_143; }
	inline bool* get_address_of_m_useMaxVisibleDescender_143() { return &___m_useMaxVisibleDescender_143; }
	inline void set_m_useMaxVisibleDescender_143(bool value)
	{
		___m_useMaxVisibleDescender_143 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_144() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageToDisplay_144)); }
	inline int32_t get_m_pageToDisplay_144() const { return ___m_pageToDisplay_144; }
	inline int32_t* get_address_of_m_pageToDisplay_144() { return &___m_pageToDisplay_144; }
	inline void set_m_pageToDisplay_144(int32_t value)
	{
		___m_pageToDisplay_144 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_145() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNewPage_145)); }
	inline bool get_m_isNewPage_145() const { return ___m_isNewPage_145; }
	inline bool* get_address_of_m_isNewPage_145() { return &___m_isNewPage_145; }
	inline void set_m_isNewPage_145(bool value)
	{
		___m_isNewPage_145 = value;
	}

	inline static int32_t get_offset_of_m_margin_146() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_margin_146)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_margin_146() const { return ___m_margin_146; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_margin_146() { return &___m_margin_146; }
	inline void set_m_margin_146(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_margin_146 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_147() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginLeft_147)); }
	inline float get_m_marginLeft_147() const { return ___m_marginLeft_147; }
	inline float* get_address_of_m_marginLeft_147() { return &___m_marginLeft_147; }
	inline void set_m_marginLeft_147(float value)
	{
		___m_marginLeft_147 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_148() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginRight_148)); }
	inline float get_m_marginRight_148() const { return ___m_marginRight_148; }
	inline float* get_address_of_m_marginRight_148() { return &___m_marginRight_148; }
	inline void set_m_marginRight_148(float value)
	{
		___m_marginRight_148 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_149() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginWidth_149)); }
	inline float get_m_marginWidth_149() const { return ___m_marginWidth_149; }
	inline float* get_address_of_m_marginWidth_149() { return &___m_marginWidth_149; }
	inline void set_m_marginWidth_149(float value)
	{
		___m_marginWidth_149 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_150() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginHeight_150)); }
	inline float get_m_marginHeight_150() const { return ___m_marginHeight_150; }
	inline float* get_address_of_m_marginHeight_150() { return &___m_marginHeight_150; }
	inline void set_m_marginHeight_150(float value)
	{
		___m_marginHeight_150 = value;
	}

	inline static int32_t get_offset_of_m_width_151() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_width_151)); }
	inline float get_m_width_151() const { return ___m_width_151; }
	inline float* get_address_of_m_width_151() { return &___m_width_151; }
	inline void set_m_width_151(float value)
	{
		___m_width_151 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_152() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textInfo_152)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_m_textInfo_152() const { return ___m_textInfo_152; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_m_textInfo_152() { return &___m_textInfo_152; }
	inline void set_m_textInfo_152(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___m_textInfo_152 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_152), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_153() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_havePropertiesChanged_153)); }
	inline bool get_m_havePropertiesChanged_153() const { return ___m_havePropertiesChanged_153; }
	inline bool* get_address_of_m_havePropertiesChanged_153() { return &___m_havePropertiesChanged_153; }
	inline void set_m_havePropertiesChanged_153(bool value)
	{
		___m_havePropertiesChanged_153 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_154() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingLegacyAnimationComponent_154)); }
	inline bool get_m_isUsingLegacyAnimationComponent_154() const { return ___m_isUsingLegacyAnimationComponent_154; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_154() { return &___m_isUsingLegacyAnimationComponent_154; }
	inline void set_m_isUsingLegacyAnimationComponent_154(bool value)
	{
		___m_isUsingLegacyAnimationComponent_154 = value;
	}

	inline static int32_t get_offset_of_m_transform_155() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_transform_155)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_transform_155() const { return ___m_transform_155; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_transform_155() { return &___m_transform_155; }
	inline void set_m_transform_155(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_transform_155 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_155), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_156() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_rectTransform_156)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_rectTransform_156() const { return ___m_rectTransform_156; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_rectTransform_156() { return &___m_rectTransform_156; }
	inline void set_m_rectTransform_156(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_rectTransform_156 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_156), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousRectTransformSize_157() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousRectTransformSize_157)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousRectTransformSize_157() const { return ___m_PreviousRectTransformSize_157; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousRectTransformSize_157() { return &___m_PreviousRectTransformSize_157; }
	inline void set_m_PreviousRectTransformSize_157(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousRectTransformSize_157 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPivotPosition_158() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousPivotPosition_158)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousPivotPosition_158() const { return ___m_PreviousPivotPosition_158; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousPivotPosition_158() { return &___m_PreviousPivotPosition_158; }
	inline void set_m_PreviousPivotPosition_158(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousPivotPosition_158 = value;
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_159() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___U3CautoSizeTextContainerU3Ek__BackingField_159)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_159() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_159; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_159() { return &___U3CautoSizeTextContainerU3Ek__BackingField_159; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_159(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_159 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_160() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_autoSizeTextContainer_160)); }
	inline bool get_m_autoSizeTextContainer_160() const { return ___m_autoSizeTextContainer_160; }
	inline bool* get_address_of_m_autoSizeTextContainer_160() { return &___m_autoSizeTextContainer_160; }
	inline void set_m_autoSizeTextContainer_160(bool value)
	{
		___m_autoSizeTextContainer_160 = value;
	}

	inline static int32_t get_offset_of_m_mesh_161() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_mesh_161)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_mesh_161() const { return ___m_mesh_161; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_mesh_161() { return &___m_mesh_161; }
	inline void set_m_mesh_161(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_mesh_161 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_161), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_162() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isVolumetricText_162)); }
	inline bool get_m_isVolumetricText_162() const { return ___m_isVolumetricText_162; }
	inline bool* get_address_of_m_isVolumetricText_162() { return &___m_isVolumetricText_162; }
	inline void set_m_isVolumetricText_162(bool value)
	{
		___m_isVolumetricText_162 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_165() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___OnPreRenderText_165)); }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * get_OnPreRenderText_165() const { return ___OnPreRenderText_165; }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 ** get_address_of_OnPreRenderText_165() { return &___OnPreRenderText_165; }
	inline void set_OnPreRenderText_165(Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * value)
	{
		___OnPreRenderText_165 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_165), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAnimator_166() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimator_166)); }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * get_m_spriteAnimator_166() const { return ___m_spriteAnimator_166; }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 ** get_address_of_m_spriteAnimator_166() { return &___m_spriteAnimator_166; }
	inline void set_m_spriteAnimator_166(TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * value)
	{
		___m_spriteAnimator_166 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_166), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_167() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleHeight_167)); }
	inline float get_m_flexibleHeight_167() const { return ___m_flexibleHeight_167; }
	inline float* get_address_of_m_flexibleHeight_167() { return &___m_flexibleHeight_167; }
	inline void set_m_flexibleHeight_167(float value)
	{
		___m_flexibleHeight_167 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_168() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleWidth_168)); }
	inline float get_m_flexibleWidth_168() const { return ___m_flexibleWidth_168; }
	inline float* get_address_of_m_flexibleWidth_168() { return &___m_flexibleWidth_168; }
	inline void set_m_flexibleWidth_168(float value)
	{
		___m_flexibleWidth_168 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_169() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minWidth_169)); }
	inline float get_m_minWidth_169() const { return ___m_minWidth_169; }
	inline float* get_address_of_m_minWidth_169() { return &___m_minWidth_169; }
	inline void set_m_minWidth_169(float value)
	{
		___m_minWidth_169 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_170() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minHeight_170)); }
	inline float get_m_minHeight_170() const { return ___m_minHeight_170; }
	inline float* get_address_of_m_minHeight_170() { return &___m_minHeight_170; }
	inline void set_m_minHeight_170(float value)
	{
		___m_minHeight_170 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_171() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxWidth_171)); }
	inline float get_m_maxWidth_171() const { return ___m_maxWidth_171; }
	inline float* get_address_of_m_maxWidth_171() { return &___m_maxWidth_171; }
	inline void set_m_maxWidth_171(float value)
	{
		___m_maxWidth_171 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_172() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxHeight_172)); }
	inline float get_m_maxHeight_172() const { return ___m_maxHeight_172; }
	inline float* get_address_of_m_maxHeight_172() { return &___m_maxHeight_172; }
	inline void set_m_maxHeight_172(float value)
	{
		___m_maxHeight_172 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_173() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_LayoutElement_173)); }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * get_m_LayoutElement_173() const { return ___m_LayoutElement_173; }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF ** get_address_of_m_LayoutElement_173() { return &___m_LayoutElement_173; }
	inline void set_m_LayoutElement_173(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * value)
	{
		___m_LayoutElement_173 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_173), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_174() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredWidth_174)); }
	inline float get_m_preferredWidth_174() const { return ___m_preferredWidth_174; }
	inline float* get_address_of_m_preferredWidth_174() { return &___m_preferredWidth_174; }
	inline void set_m_preferredWidth_174(float value)
	{
		___m_preferredWidth_174 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_175() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedWidth_175)); }
	inline float get_m_renderedWidth_175() const { return ___m_renderedWidth_175; }
	inline float* get_address_of_m_renderedWidth_175() { return &___m_renderedWidth_175; }
	inline void set_m_renderedWidth_175(float value)
	{
		___m_renderedWidth_175 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_176() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredWidthDirty_176)); }
	inline bool get_m_isPreferredWidthDirty_176() const { return ___m_isPreferredWidthDirty_176; }
	inline bool* get_address_of_m_isPreferredWidthDirty_176() { return &___m_isPreferredWidthDirty_176; }
	inline void set_m_isPreferredWidthDirty_176(bool value)
	{
		___m_isPreferredWidthDirty_176 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_177() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredHeight_177)); }
	inline float get_m_preferredHeight_177() const { return ___m_preferredHeight_177; }
	inline float* get_address_of_m_preferredHeight_177() { return &___m_preferredHeight_177; }
	inline void set_m_preferredHeight_177(float value)
	{
		___m_preferredHeight_177 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_178() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedHeight_178)); }
	inline float get_m_renderedHeight_178() const { return ___m_renderedHeight_178; }
	inline float* get_address_of_m_renderedHeight_178() { return &___m_renderedHeight_178; }
	inline void set_m_renderedHeight_178(float value)
	{
		___m_renderedHeight_178 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_179() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredHeightDirty_179)); }
	inline bool get_m_isPreferredHeightDirty_179() const { return ___m_isPreferredHeightDirty_179; }
	inline bool* get_address_of_m_isPreferredHeightDirty_179() { return &___m_isPreferredHeightDirty_179; }
	inline void set_m_isPreferredHeightDirty_179(bool value)
	{
		___m_isPreferredHeightDirty_179 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_180() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCalculatingPreferredValues_180)); }
	inline bool get_m_isCalculatingPreferredValues_180() const { return ___m_isCalculatingPreferredValues_180; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_180() { return &___m_isCalculatingPreferredValues_180; }
	inline void set_m_isCalculatingPreferredValues_180(bool value)
	{
		___m_isCalculatingPreferredValues_180 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_181() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_layoutPriority_181)); }
	inline int32_t get_m_layoutPriority_181() const { return ___m_layoutPriority_181; }
	inline int32_t* get_address_of_m_layoutPriority_181() { return &___m_layoutPriority_181; }
	inline void set_m_layoutPriority_181(int32_t value)
	{
		___m_layoutPriority_181 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_182() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isLayoutDirty_182)); }
	inline bool get_m_isLayoutDirty_182() const { return ___m_isLayoutDirty_182; }
	inline bool* get_address_of_m_isLayoutDirty_182() { return &___m_isLayoutDirty_182; }
	inline void set_m_isLayoutDirty_182(bool value)
	{
		___m_isLayoutDirty_182 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_183() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isAwake_183)); }
	inline bool get_m_isAwake_183() const { return ___m_isAwake_183; }
	inline bool* get_address_of_m_isAwake_183() { return &___m_isAwake_183; }
	inline void set_m_isAwake_183(bool value)
	{
		___m_isAwake_183 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_184() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isWaitingOnResourceLoad_184)); }
	inline bool get_m_isWaitingOnResourceLoad_184() const { return ___m_isWaitingOnResourceLoad_184; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_184() { return &___m_isWaitingOnResourceLoad_184; }
	inline void set_m_isWaitingOnResourceLoad_184(bool value)
	{
		___m_isWaitingOnResourceLoad_184 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_185() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_inputSource_185)); }
	inline int32_t get_m_inputSource_185() const { return ___m_inputSource_185; }
	inline int32_t* get_address_of_m_inputSource_185() { return &___m_inputSource_185; }
	inline void set_m_inputSource_185(int32_t value)
	{
		___m_inputSource_185 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_186() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontScaleMultiplier_186)); }
	inline float get_m_fontScaleMultiplier_186() const { return ___m_fontScaleMultiplier_186; }
	inline float* get_address_of_m_fontScaleMultiplier_186() { return &___m_fontScaleMultiplier_186; }
	inline void set_m_fontScaleMultiplier_186(float value)
	{
		___m_fontScaleMultiplier_186 = value;
	}

	inline static int32_t get_offset_of_tag_LineIndent_190() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_LineIndent_190)); }
	inline float get_tag_LineIndent_190() const { return ___tag_LineIndent_190; }
	inline float* get_address_of_tag_LineIndent_190() { return &___tag_LineIndent_190; }
	inline void set_tag_LineIndent_190(float value)
	{
		___tag_LineIndent_190 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_191() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_Indent_191)); }
	inline float get_tag_Indent_191() const { return ___tag_Indent_191; }
	inline float* get_address_of_tag_Indent_191() { return &___tag_Indent_191; }
	inline void set_tag_Indent_191(float value)
	{
		___tag_Indent_191 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_192() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_indentStack_192)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_indentStack_192() const { return ___m_indentStack_192; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_indentStack_192() { return &___m_indentStack_192; }
	inline void set_m_indentStack_192(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_indentStack_192 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_192))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_193() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_NoParsing_193)); }
	inline bool get_tag_NoParsing_193() const { return ___tag_NoParsing_193; }
	inline bool* get_address_of_tag_NoParsing_193() { return &___tag_NoParsing_193; }
	inline void set_tag_NoParsing_193(bool value)
	{
		___tag_NoParsing_193 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_194() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isParsingText_194)); }
	inline bool get_m_isParsingText_194() const { return ___m_isParsingText_194; }
	inline bool* get_address_of_m_isParsingText_194() { return &___m_isParsingText_194; }
	inline void set_m_isParsingText_194(bool value)
	{
		___m_isParsingText_194 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_195() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FXMatrix_195)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_FXMatrix_195() const { return ___m_FXMatrix_195; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_FXMatrix_195() { return &___m_FXMatrix_195; }
	inline void set_m_FXMatrix_195(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_FXMatrix_195 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_196() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isFXMatrixSet_196)); }
	inline bool get_m_isFXMatrixSet_196() const { return ___m_isFXMatrixSet_196; }
	inline bool* get_address_of_m_isFXMatrixSet_196() { return &___m_isFXMatrixSet_196; }
	inline void set_m_isFXMatrixSet_196(bool value)
	{
		___m_isFXMatrixSet_196 = value;
	}

	inline static int32_t get_offset_of_m_TextProcessingArray_197() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextProcessingArray_197)); }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* get_m_TextProcessingArray_197() const { return ___m_TextProcessingArray_197; }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7** get_address_of_m_TextProcessingArray_197() { return &___m_TextProcessingArray_197; }
	inline void set_m_TextProcessingArray_197(UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* value)
	{
		___m_TextProcessingArray_197 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextProcessingArray_197), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalTextProcessingArraySize_198() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_InternalTextProcessingArraySize_198)); }
	inline int32_t get_m_InternalTextProcessingArraySize_198() const { return ___m_InternalTextProcessingArraySize_198; }
	inline int32_t* get_address_of_m_InternalTextProcessingArraySize_198() { return &___m_InternalTextProcessingArraySize_198; }
	inline void set_m_InternalTextProcessingArraySize_198(int32_t value)
	{
		___m_InternalTextProcessingArraySize_198 = value;
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_199() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_internalCharacterInfo_199)); }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* get_m_internalCharacterInfo_199() const { return ___m_internalCharacterInfo_199; }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970** get_address_of_m_internalCharacterInfo_199() { return &___m_internalCharacterInfo_199; }
	inline void set_m_internalCharacterInfo_199(TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* value)
	{
		___m_internalCharacterInfo_199 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_199), (void*)value);
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_200() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_totalCharacterCount_200)); }
	inline int32_t get_m_totalCharacterCount_200() const { return ___m_totalCharacterCount_200; }
	inline int32_t* get_address_of_m_totalCharacterCount_200() { return &___m_totalCharacterCount_200; }
	inline void set_m_totalCharacterCount_200(int32_t value)
	{
		___m_totalCharacterCount_200 = value;
	}

	inline static int32_t get_offset_of_m_characterCount_207() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterCount_207)); }
	inline int32_t get_m_characterCount_207() const { return ___m_characterCount_207; }
	inline int32_t* get_address_of_m_characterCount_207() { return &___m_characterCount_207; }
	inline void set_m_characterCount_207(int32_t value)
	{
		___m_characterCount_207 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_208() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstCharacterOfLine_208)); }
	inline int32_t get_m_firstCharacterOfLine_208() const { return ___m_firstCharacterOfLine_208; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_208() { return &___m_firstCharacterOfLine_208; }
	inline void set_m_firstCharacterOfLine_208(int32_t value)
	{
		___m_firstCharacterOfLine_208 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_209() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacterOfLine_209)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_209() const { return ___m_firstVisibleCharacterOfLine_209; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_209() { return &___m_firstVisibleCharacterOfLine_209; }
	inline void set_m_firstVisibleCharacterOfLine_209(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_209 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_210() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastCharacterOfLine_210)); }
	inline int32_t get_m_lastCharacterOfLine_210() const { return ___m_lastCharacterOfLine_210; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_210() { return &___m_lastCharacterOfLine_210; }
	inline void set_m_lastCharacterOfLine_210(int32_t value)
	{
		___m_lastCharacterOfLine_210 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_211() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastVisibleCharacterOfLine_211)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_211() const { return ___m_lastVisibleCharacterOfLine_211; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_211() { return &___m_lastVisibleCharacterOfLine_211; }
	inline void set_m_lastVisibleCharacterOfLine_211(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_211 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_212() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineNumber_212)); }
	inline int32_t get_m_lineNumber_212() const { return ___m_lineNumber_212; }
	inline int32_t* get_address_of_m_lineNumber_212() { return &___m_lineNumber_212; }
	inline void set_m_lineNumber_212(int32_t value)
	{
		___m_lineNumber_212 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_213() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineVisibleCharacterCount_213)); }
	inline int32_t get_m_lineVisibleCharacterCount_213() const { return ___m_lineVisibleCharacterCount_213; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_213() { return &___m_lineVisibleCharacterCount_213; }
	inline void set_m_lineVisibleCharacterCount_213(int32_t value)
	{
		___m_lineVisibleCharacterCount_213 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_214() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageNumber_214)); }
	inline int32_t get_m_pageNumber_214() const { return ___m_pageNumber_214; }
	inline int32_t* get_address_of_m_pageNumber_214() { return &___m_pageNumber_214; }
	inline void set_m_pageNumber_214(int32_t value)
	{
		___m_pageNumber_214 = value;
	}

	inline static int32_t get_offset_of_m_PageAscender_215() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PageAscender_215)); }
	inline float get_m_PageAscender_215() const { return ___m_PageAscender_215; }
	inline float* get_address_of_m_PageAscender_215() { return &___m_PageAscender_215; }
	inline void set_m_PageAscender_215(float value)
	{
		___m_PageAscender_215 = value;
	}

	inline static int32_t get_offset_of_m_maxTextAscender_216() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxTextAscender_216)); }
	inline float get_m_maxTextAscender_216() const { return ___m_maxTextAscender_216; }
	inline float* get_address_of_m_maxTextAscender_216() { return &___m_maxTextAscender_216; }
	inline void set_m_maxTextAscender_216(float value)
	{
		___m_maxTextAscender_216 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_217() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxCapHeight_217)); }
	inline float get_m_maxCapHeight_217() const { return ___m_maxCapHeight_217; }
	inline float* get_address_of_m_maxCapHeight_217() { return &___m_maxCapHeight_217; }
	inline void set_m_maxCapHeight_217(float value)
	{
		___m_maxCapHeight_217 = value;
	}

	inline static int32_t get_offset_of_m_ElementAscender_218() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementAscender_218)); }
	inline float get_m_ElementAscender_218() const { return ___m_ElementAscender_218; }
	inline float* get_address_of_m_ElementAscender_218() { return &___m_ElementAscender_218; }
	inline void set_m_ElementAscender_218(float value)
	{
		___m_ElementAscender_218 = value;
	}

	inline static int32_t get_offset_of_m_ElementDescender_219() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementDescender_219)); }
	inline float get_m_ElementDescender_219() const { return ___m_ElementDescender_219; }
	inline float* get_address_of_m_ElementDescender_219() { return &___m_ElementDescender_219; }
	inline void set_m_ElementDescender_219(float value)
	{
		___m_ElementDescender_219 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_220() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineAscender_220)); }
	inline float get_m_maxLineAscender_220() const { return ___m_maxLineAscender_220; }
	inline float* get_address_of_m_maxLineAscender_220() { return &___m_maxLineAscender_220; }
	inline void set_m_maxLineAscender_220(float value)
	{
		___m_maxLineAscender_220 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_221() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineDescender_221)); }
	inline float get_m_maxLineDescender_221() const { return ___m_maxLineDescender_221; }
	inline float* get_address_of_m_maxLineDescender_221() { return &___m_maxLineDescender_221; }
	inline void set_m_maxLineDescender_221(float value)
	{
		___m_maxLineDescender_221 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_222() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineAscender_222)); }
	inline float get_m_startOfLineAscender_222() const { return ___m_startOfLineAscender_222; }
	inline float* get_address_of_m_startOfLineAscender_222() { return &___m_startOfLineAscender_222; }
	inline void set_m_startOfLineAscender_222(float value)
	{
		___m_startOfLineAscender_222 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineDescender_223() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineDescender_223)); }
	inline float get_m_startOfLineDescender_223() const { return ___m_startOfLineDescender_223; }
	inline float* get_address_of_m_startOfLineDescender_223() { return &___m_startOfLineDescender_223; }
	inline void set_m_startOfLineDescender_223(float value)
	{
		___m_startOfLineDescender_223 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_224() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineOffset_224)); }
	inline float get_m_lineOffset_224() const { return ___m_lineOffset_224; }
	inline float* get_address_of_m_lineOffset_224() { return &___m_lineOffset_224; }
	inline void set_m_lineOffset_224(float value)
	{
		___m_lineOffset_224 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_225() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_meshExtents_225)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_m_meshExtents_225() const { return ___m_meshExtents_225; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_m_meshExtents_225() { return &___m_meshExtents_225; }
	inline void set_m_meshExtents_225(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___m_meshExtents_225 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_226() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_htmlColor_226)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_htmlColor_226() const { return ___m_htmlColor_226; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_htmlColor_226() { return &___m_htmlColor_226; }
	inline void set_m_htmlColor_226(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_htmlColor_226 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_227() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorStack_227)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_colorStack_227() const { return ___m_colorStack_227; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_colorStack_227() { return &___m_colorStack_227; }
	inline void set_m_colorStack_227(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_colorStack_227 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_227))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_228() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColorStack_228)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_underlineColorStack_228() const { return ___m_underlineColorStack_228; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_underlineColorStack_228() { return &___m_underlineColorStack_228; }
	inline void set_m_underlineColorStack_228(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_underlineColorStack_228 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_228))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_229() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColorStack_229)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_strikethroughColorStack_229() const { return ___m_strikethroughColorStack_229; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_strikethroughColorStack_229() { return &___m_strikethroughColorStack_229; }
	inline void set_m_strikethroughColorStack_229(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_strikethroughColorStack_229 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_229))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_HighlightStateStack_230() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HighlightStateStack_230)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_m_HighlightStateStack_230() const { return ___m_HighlightStateStack_230; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_m_HighlightStateStack_230() { return &___m_HighlightStateStack_230; }
	inline void set_m_HighlightStateStack_230(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___m_HighlightStateStack_230 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_HighlightStateStack_230))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_231() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPreset_231)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_colorGradientPreset_231() const { return ___m_colorGradientPreset_231; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_colorGradientPreset_231() { return &___m_colorGradientPreset_231; }
	inline void set_m_colorGradientPreset_231(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_colorGradientPreset_231 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_231), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_232() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientStack_232)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_m_colorGradientStack_232() const { return ___m_colorGradientStack_232; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_m_colorGradientStack_232() { return &___m_colorGradientStack_232; }
	inline void set_m_colorGradientStack_232(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___m_colorGradientStack_232 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_232))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_232))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_colorGradientPresetIsTinted_233() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPresetIsTinted_233)); }
	inline bool get_m_colorGradientPresetIsTinted_233() const { return ___m_colorGradientPresetIsTinted_233; }
	inline bool* get_address_of_m_colorGradientPresetIsTinted_233() { return &___m_colorGradientPresetIsTinted_233; }
	inline void set_m_colorGradientPresetIsTinted_233(bool value)
	{
		___m_colorGradientPresetIsTinted_233 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_234() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tabSpacing_234)); }
	inline float get_m_tabSpacing_234() const { return ___m_tabSpacing_234; }
	inline float* get_address_of_m_tabSpacing_234() { return &___m_tabSpacing_234; }
	inline void set_m_tabSpacing_234(float value)
	{
		___m_tabSpacing_234 = value;
	}

	inline static int32_t get_offset_of_m_spacing_235() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spacing_235)); }
	inline float get_m_spacing_235() const { return ___m_spacing_235; }
	inline float* get_address_of_m_spacing_235() { return &___m_spacing_235; }
	inline void set_m_spacing_235(float value)
	{
		___m_spacing_235 = value;
	}

	inline static int32_t get_offset_of_m_TextStyleStacks_236() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStacks_236)); }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* get_m_TextStyleStacks_236() const { return ___m_TextStyleStacks_236; }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37** get_address_of_m_TextStyleStacks_236() { return &___m_TextStyleStacks_236; }
	inline void set_m_TextStyleStacks_236(TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* value)
	{
		___m_TextStyleStacks_236 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyleStacks_236), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleStackDepth_237() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStackDepth_237)); }
	inline int32_t get_m_TextStyleStackDepth_237() const { return ___m_TextStyleStackDepth_237; }
	inline int32_t* get_address_of_m_TextStyleStackDepth_237() { return &___m_TextStyleStackDepth_237; }
	inline void set_m_TextStyleStackDepth_237(int32_t value)
	{
		___m_TextStyleStackDepth_237 = value;
	}

	inline static int32_t get_offset_of_m_ItalicAngleStack_238() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngleStack_238)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_ItalicAngleStack_238() const { return ___m_ItalicAngleStack_238; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_ItalicAngleStack_238() { return &___m_ItalicAngleStack_238; }
	inline void set_m_ItalicAngleStack_238(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_ItalicAngleStack_238 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ItalicAngleStack_238))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_ItalicAngle_239() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngle_239)); }
	inline int32_t get_m_ItalicAngle_239() const { return ___m_ItalicAngle_239; }
	inline int32_t* get_address_of_m_ItalicAngle_239() { return &___m_ItalicAngle_239; }
	inline void set_m_ItalicAngle_239(int32_t value)
	{
		___m_ItalicAngle_239 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_240() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_actionStack_240)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_actionStack_240() const { return ___m_actionStack_240; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_actionStack_240() { return &___m_actionStack_240; }
	inline void set_m_actionStack_240(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_actionStack_240 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_240))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_241() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_padding_241)); }
	inline float get_m_padding_241() const { return ___m_padding_241; }
	inline float* get_address_of_m_padding_241() { return &___m_padding_241; }
	inline void set_m_padding_241(float value)
	{
		___m_padding_241 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_242() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffset_242)); }
	inline float get_m_baselineOffset_242() const { return ___m_baselineOffset_242; }
	inline float* get_address_of_m_baselineOffset_242() { return &___m_baselineOffset_242; }
	inline void set_m_baselineOffset_242(float value)
	{
		___m_baselineOffset_242 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_243() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffsetStack_243)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_baselineOffsetStack_243() const { return ___m_baselineOffsetStack_243; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_baselineOffsetStack_243() { return &___m_baselineOffsetStack_243; }
	inline void set_m_baselineOffsetStack_243(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_baselineOffsetStack_243 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_243))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_244() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_xAdvance_244)); }
	inline float get_m_xAdvance_244() const { return ___m_xAdvance_244; }
	inline float* get_address_of_m_xAdvance_244() { return &___m_xAdvance_244; }
	inline void set_m_xAdvance_244(float value)
	{
		___m_xAdvance_244 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_245() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textElementType_245)); }
	inline int32_t get_m_textElementType_245() const { return ___m_textElementType_245; }
	inline int32_t* get_address_of_m_textElementType_245() { return &___m_textElementType_245; }
	inline void set_m_textElementType_245(int32_t value)
	{
		___m_textElementType_245 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_246() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cached_TextElement_246)); }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * get_m_cached_TextElement_246() const { return ___m_cached_TextElement_246; }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 ** get_address_of_m_cached_TextElement_246() { return &___m_cached_TextElement_246; }
	inline void set_m_cached_TextElement_246(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * value)
	{
		___m_cached_TextElement_246 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_246), (void*)value);
	}

	inline static int32_t get_offset_of_m_Ellipsis_247() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Ellipsis_247)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Ellipsis_247() const { return ___m_Ellipsis_247; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Ellipsis_247() { return &___m_Ellipsis_247; }
	inline void set_m_Ellipsis_247(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Ellipsis_247 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_247))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_247))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_247))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Underline_248() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Underline_248)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Underline_248() const { return ___m_Underline_248; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Underline_248() { return &___m_Underline_248; }
	inline void set_m_Underline_248(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Underline_248 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_248))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_248))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_248))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_249() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_defaultSpriteAsset_249)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_defaultSpriteAsset_249() const { return ___m_defaultSpriteAsset_249; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_defaultSpriteAsset_249() { return &___m_defaultSpriteAsset_249; }
	inline void set_m_defaultSpriteAsset_249(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_defaultSpriteAsset_249 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_249), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_250() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentSpriteAsset_250)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_currentSpriteAsset_250() const { return ___m_currentSpriteAsset_250; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_currentSpriteAsset_250() { return &___m_currentSpriteAsset_250; }
	inline void set_m_currentSpriteAsset_250(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_currentSpriteAsset_250 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_250), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_251() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteCount_251)); }
	inline int32_t get_m_spriteCount_251() const { return ___m_spriteCount_251; }
	inline int32_t* get_address_of_m_spriteCount_251() { return &___m_spriteCount_251; }
	inline void set_m_spriteCount_251(int32_t value)
	{
		___m_spriteCount_251 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_252() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteIndex_252)); }
	inline int32_t get_m_spriteIndex_252() const { return ___m_spriteIndex_252; }
	inline int32_t* get_address_of_m_spriteIndex_252() { return &___m_spriteIndex_252; }
	inline void set_m_spriteIndex_252(int32_t value)
	{
		___m_spriteIndex_252 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_253() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimationID_253)); }
	inline int32_t get_m_spriteAnimationID_253() const { return ___m_spriteAnimationID_253; }
	inline int32_t* get_address_of_m_spriteAnimationID_253() { return &___m_spriteAnimationID_253; }
	inline void set_m_spriteAnimationID_253(int32_t value)
	{
		___m_spriteAnimationID_253 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_256() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreActiveState_256)); }
	inline bool get_m_ignoreActiveState_256() const { return ___m_ignoreActiveState_256; }
	inline bool* get_address_of_m_ignoreActiveState_256() { return &___m_ignoreActiveState_256; }
	inline void set_m_ignoreActiveState_256(bool value)
	{
		___m_ignoreActiveState_256 = value;
	}

	inline static int32_t get_offset_of_m_TextBackingArray_257() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextBackingArray_257)); }
	inline TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  get_m_TextBackingArray_257() const { return ___m_TextBackingArray_257; }
	inline TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B * get_address_of_m_TextBackingArray_257() { return &___m_TextBackingArray_257; }
	inline void set_m_TextBackingArray_257(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  value)
	{
		___m_TextBackingArray_257 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_TextBackingArray_257))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_k_Power_258() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___k_Power_258)); }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* get_k_Power_258() const { return ___k_Power_258; }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA** get_address_of_k_Power_258() { return &___k_Power_258; }
	inline void set_k_Power_258(DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* value)
	{
		___k_Power_258 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_258), (void*)value);
	}
};

struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields
{
public:
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;

public:
	inline static int32_t get_offset_of_m_materialReferences_45() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferences_45)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_m_materialReferences_45() const { return ___m_materialReferences_45; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_m_materialReferences_45() { return &___m_materialReferences_45; }
	inline void set_m_materialReferences_45(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___m_materialReferences_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_46() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferenceIndexLookup_46)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_m_materialReferenceIndexLookup_46() const { return ___m_materialReferenceIndexLookup_46; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_m_materialReferenceIndexLookup_46() { return &___m_materialReferenceIndexLookup_46; }
	inline void set_m_materialReferenceIndexLookup_46(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___m_materialReferenceIndexLookup_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_47() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferenceStack_47)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_m_materialReferenceStack_47() const { return ___m_materialReferenceStack_47; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_m_materialReferenceStack_47() { return &___m_materialReferenceStack_47; }
	inline void set_m_materialReferenceStack_47(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___m_materialReferenceStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_47))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_colorWhite_55() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___s_colorWhite_55)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_colorWhite_55() const { return ___s_colorWhite_55; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_colorWhite_55() { return &___s_colorWhite_55; }
	inline void set_s_colorWhite_55(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_colorWhite_55 = value;
	}

	inline static int32_t get_offset_of_OnFontAssetRequest_163() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnFontAssetRequest_163)); }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * get_OnFontAssetRequest_163() const { return ___OnFontAssetRequest_163; }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 ** get_address_of_OnFontAssetRequest_163() { return &___OnFontAssetRequest_163; }
	inline void set_OnFontAssetRequest_163(Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * value)
	{
		___OnFontAssetRequest_163 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFontAssetRequest_163), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpriteAssetRequest_164() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnSpriteAssetRequest_164)); }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * get_OnSpriteAssetRequest_164() const { return ___OnSpriteAssetRequest_164; }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA ** get_address_of_OnSpriteAssetRequest_164() { return &___OnSpriteAssetRequest_164; }
	inline void set_OnSpriteAssetRequest_164(Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * value)
	{
		___OnSpriteAssetRequest_164 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpriteAssetRequest_164), (void*)value);
	}

	inline static int32_t get_offset_of_m_htmlTag_187() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_htmlTag_187)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_htmlTag_187() const { return ___m_htmlTag_187; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_htmlTag_187() { return &___m_htmlTag_187; }
	inline void set_m_htmlTag_187(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_htmlTag_187 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_187), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_188() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_xmlAttribute_188)); }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* get_m_xmlAttribute_188() const { return ___m_xmlAttribute_188; }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615** get_address_of_m_xmlAttribute_188() { return &___m_xmlAttribute_188; }
	inline void set_m_xmlAttribute_188(RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* value)
	{
		___m_xmlAttribute_188 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_188), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_189() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_attributeParameterValues_189)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_attributeParameterValues_189() const { return ___m_attributeParameterValues_189; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_attributeParameterValues_189() { return &___m_attributeParameterValues_189; }
	inline void set_m_attributeParameterValues_189(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_attributeParameterValues_189 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_189), (void*)value);
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_201() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedWordWrapState_201)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedWordWrapState_201() const { return ___m_SavedWordWrapState_201; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedWordWrapState_201() { return &___m_SavedWordWrapState_201; }
	inline void set_m_SavedWordWrapState_201(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedWordWrapState_201 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_202() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedLineState_202)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLineState_202() const { return ___m_SavedLineState_202; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLineState_202() { return &___m_SavedLineState_202; }
	inline void set_m_SavedLineState_202(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLineState_202 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedEllipsisState_203() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedEllipsisState_203)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedEllipsisState_203() const { return ___m_SavedEllipsisState_203; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedEllipsisState_203() { return &___m_SavedEllipsisState_203; }
	inline void set_m_SavedEllipsisState_203(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedEllipsisState_203 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLastValidState_204() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedLastValidState_204)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLastValidState_204() const { return ___m_SavedLastValidState_204; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLastValidState_204() { return &___m_SavedLastValidState_204; }
	inline void set_m_SavedLastValidState_204(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLastValidState_204 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedSoftLineBreakState_205() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedSoftLineBreakState_205)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedSoftLineBreakState_205() const { return ___m_SavedSoftLineBreakState_205; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedSoftLineBreakState_205() { return &___m_SavedSoftLineBreakState_205; }
	inline void set_m_SavedSoftLineBreakState_205(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedSoftLineBreakState_205 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_EllipsisInsertionCandidateStack_206() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_EllipsisInsertionCandidateStack_206)); }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  get_m_EllipsisInsertionCandidateStack_206() const { return ___m_EllipsisInsertionCandidateStack_206; }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 * get_address_of_m_EllipsisInsertionCandidateStack_206() { return &___m_EllipsisInsertionCandidateStack_206; }
	inline void set_m_EllipsisInsertionCandidateStack_206(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  value)
	{
		___m_EllipsisInsertionCandidateStack_206 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_EllipsisInsertionCandidateStack_206))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___textInfo_35), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_k_ParseTextMarker_254() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_ParseTextMarker_254)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ParseTextMarker_254() const { return ___k_ParseTextMarker_254; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ParseTextMarker_254() { return &___k_ParseTextMarker_254; }
	inline void set_k_ParseTextMarker_254(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ParseTextMarker_254 = value;
	}

	inline static int32_t get_offset_of_k_InsertNewLineMarker_255() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_InsertNewLineMarker_255)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_InsertNewLineMarker_255() const { return ___k_InsertNewLineMarker_255; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_InsertNewLineMarker_255() { return &___k_InsertNewLineMarker_255; }
	inline void set_k_InsertNewLineMarker_255(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_InsertNewLineMarker_255 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_259() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveVector2_259)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargePositiveVector2_259() const { return ___k_LargePositiveVector2_259; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargePositiveVector2_259() { return &___k_LargePositiveVector2_259; }
	inline void set_k_LargePositiveVector2_259(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargePositiveVector2_259 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_260() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeVector2_260)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargeNegativeVector2_260() const { return ___k_LargeNegativeVector2_260; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargeNegativeVector2_260() { return &___k_LargeNegativeVector2_260; }
	inline void set_k_LargeNegativeVector2_260(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargeNegativeVector2_260 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_261() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveFloat_261)); }
	inline float get_k_LargePositiveFloat_261() const { return ___k_LargePositiveFloat_261; }
	inline float* get_address_of_k_LargePositiveFloat_261() { return &___k_LargePositiveFloat_261; }
	inline void set_k_LargePositiveFloat_261(float value)
	{
		___k_LargePositiveFloat_261 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_262() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeFloat_262)); }
	inline float get_k_LargeNegativeFloat_262() const { return ___k_LargeNegativeFloat_262; }
	inline float* get_address_of_k_LargeNegativeFloat_262() { return &___k_LargeNegativeFloat_262; }
	inline void set_k_LargeNegativeFloat_262(float value)
	{
		___k_LargeNegativeFloat_262 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_263() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveInt_263)); }
	inline int32_t get_k_LargePositiveInt_263() const { return ___k_LargePositiveInt_263; }
	inline int32_t* get_address_of_k_LargePositiveInt_263() { return &___k_LargePositiveInt_263; }
	inline void set_k_LargePositiveInt_263(int32_t value)
	{
		___k_LargePositiveInt_263 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_264() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeInt_264)); }
	inline int32_t get_k_LargeNegativeInt_264() const { return ___k_LargeNegativeInt_264; }
	inline int32_t* get_address_of_k_LargeNegativeInt_264() { return &___k_LargeNegativeInt_264; }
	inline void set_k_LargeNegativeInt_264(int32_t value)
	{
		___k_LargeNegativeInt_264 = value;
	}
};


// TMPro.TextMeshPro
struct TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4  : public TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262
{
public:
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_265;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_266;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___m_renderer_267;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___m_meshFilter_268;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_269;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_270;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_271;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2* ___m_subTextObjects_272;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_273;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_EnvMapMatrix_274;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_RectTransformCorners_275;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_276;
	// System.Int32 TMPro.TextMeshPro::_SortingLayer
	int32_t ____SortingLayer_297;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_298;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_299;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * ___OnPreRenderText_300;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_301;

public:
	inline static int32_t get_offset_of_m_hasFontAssetChanged_265() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_hasFontAssetChanged_265)); }
	inline bool get_m_hasFontAssetChanged_265() const { return ___m_hasFontAssetChanged_265; }
	inline bool* get_address_of_m_hasFontAssetChanged_265() { return &___m_hasFontAssetChanged_265; }
	inline void set_m_hasFontAssetChanged_265(bool value)
	{
		___m_hasFontAssetChanged_265 = value;
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_266() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_previousLossyScaleY_266)); }
	inline float get_m_previousLossyScaleY_266() const { return ___m_previousLossyScaleY_266; }
	inline float* get_address_of_m_previousLossyScaleY_266() { return &___m_previousLossyScaleY_266; }
	inline void set_m_previousLossyScaleY_266(float value)
	{
		___m_previousLossyScaleY_266 = value;
	}

	inline static int32_t get_offset_of_m_renderer_267() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_renderer_267)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get_m_renderer_267() const { return ___m_renderer_267; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of_m_renderer_267() { return &___m_renderer_267; }
	inline void set_m_renderer_267(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		___m_renderer_267 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_renderer_267), (void*)value);
	}

	inline static int32_t get_offset_of_m_meshFilter_268() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_meshFilter_268)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_m_meshFilter_268() const { return ___m_meshFilter_268; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_m_meshFilter_268() { return &___m_meshFilter_268; }
	inline void set_m_meshFilter_268(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___m_meshFilter_268 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_meshFilter_268), (void*)value);
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_269() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_isFirstAllocation_269)); }
	inline bool get_m_isFirstAllocation_269() const { return ___m_isFirstAllocation_269; }
	inline bool* get_address_of_m_isFirstAllocation_269() { return &___m_isFirstAllocation_269; }
	inline void set_m_isFirstAllocation_269(bool value)
	{
		___m_isFirstAllocation_269 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_270() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_max_characters_270)); }
	inline int32_t get_m_max_characters_270() const { return ___m_max_characters_270; }
	inline int32_t* get_address_of_m_max_characters_270() { return &___m_max_characters_270; }
	inline void set_m_max_characters_270(int32_t value)
	{
		___m_max_characters_270 = value;
	}

	inline static int32_t get_offset_of_m_max_numberOfLines_271() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_max_numberOfLines_271)); }
	inline int32_t get_m_max_numberOfLines_271() const { return ___m_max_numberOfLines_271; }
	inline int32_t* get_address_of_m_max_numberOfLines_271() { return &___m_max_numberOfLines_271; }
	inline void set_m_max_numberOfLines_271(int32_t value)
	{
		___m_max_numberOfLines_271 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_272() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_subTextObjects_272)); }
	inline TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2* get_m_subTextObjects_272() const { return ___m_subTextObjects_272; }
	inline TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2** get_address_of_m_subTextObjects_272() { return &___m_subTextObjects_272; }
	inline void set_m_subTextObjects_272(TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2* value)
	{
		___m_subTextObjects_272 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subTextObjects_272), (void*)value);
	}

	inline static int32_t get_offset_of_m_maskType_273() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_maskType_273)); }
	inline int32_t get_m_maskType_273() const { return ___m_maskType_273; }
	inline int32_t* get_address_of_m_maskType_273() { return &___m_maskType_273; }
	inline void set_m_maskType_273(int32_t value)
	{
		___m_maskType_273 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_274() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_EnvMapMatrix_274)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_EnvMapMatrix_274() const { return ___m_EnvMapMatrix_274; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_EnvMapMatrix_274() { return &___m_EnvMapMatrix_274; }
	inline void set_m_EnvMapMatrix_274(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_EnvMapMatrix_274 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_275() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_RectTransformCorners_275)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_RectTransformCorners_275() const { return ___m_RectTransformCorners_275; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_RectTransformCorners_275() { return &___m_RectTransformCorners_275; }
	inline void set_m_RectTransformCorners_275(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_RectTransformCorners_275 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransformCorners_275), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_276() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_isRegisteredForEvents_276)); }
	inline bool get_m_isRegisteredForEvents_276() const { return ___m_isRegisteredForEvents_276; }
	inline bool* get_address_of_m_isRegisteredForEvents_276() { return &___m_isRegisteredForEvents_276; }
	inline void set_m_isRegisteredForEvents_276(bool value)
	{
		___m_isRegisteredForEvents_276 = value;
	}

	inline static int32_t get_offset_of__SortingLayer_297() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ____SortingLayer_297)); }
	inline int32_t get__SortingLayer_297() const { return ____SortingLayer_297; }
	inline int32_t* get_address_of__SortingLayer_297() { return &____SortingLayer_297; }
	inline void set__SortingLayer_297(int32_t value)
	{
		____SortingLayer_297 = value;
	}

	inline static int32_t get_offset_of__SortingLayerID_298() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ____SortingLayerID_298)); }
	inline int32_t get__SortingLayerID_298() const { return ____SortingLayerID_298; }
	inline int32_t* get_address_of__SortingLayerID_298() { return &____SortingLayerID_298; }
	inline void set__SortingLayerID_298(int32_t value)
	{
		____SortingLayerID_298 = value;
	}

	inline static int32_t get_offset_of__SortingOrder_299() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ____SortingOrder_299)); }
	inline int32_t get__SortingOrder_299() const { return ____SortingOrder_299; }
	inline int32_t* get_address_of__SortingOrder_299() { return &____SortingOrder_299; }
	inline void set__SortingOrder_299(int32_t value)
	{
		____SortingOrder_299 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_300() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___OnPreRenderText_300)); }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * get_OnPreRenderText_300() const { return ___OnPreRenderText_300; }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 ** get_address_of_OnPreRenderText_300() { return &___OnPreRenderText_300; }
	inline void set_OnPreRenderText_300(Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * value)
	{
		___OnPreRenderText_300 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_300), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentAutoSizeMode_301() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_currentAutoSizeMode_301)); }
	inline bool get_m_currentAutoSizeMode_301() const { return ___m_currentAutoSizeMode_301; }
	inline bool* get_address_of_m_currentAutoSizeMode_301() { return &___m_currentAutoSizeMode_301; }
	inline void set_m_currentAutoSizeMode_301(bool value)
	{
		___m_currentAutoSizeMode_301 = value;
	}
};

struct TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_GenerateTextMarker_277;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SetArraySizesMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_SetArraySizesMarker_278;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_GenerateTextPhaseIMarker_279;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ParseMarkupTextMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ParseMarkupTextMarker_280;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CharacterLookupMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_CharacterLookupMarker_281;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleGPOSFeaturesMarker_282;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CalculateVerticesPositionMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_CalculateVerticesPositionMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeTextMetricsMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ComputeTextMetricsMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVisibleCharacterMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleVisibleCharacterMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleWhiteSpacesMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleWhiteSpacesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleHorizontalLineBreakingMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleVerticalLineBreakingMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_SaveGlyphVertexDataMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ComputeCharacterAdvanceMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleCarriageReturnMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleCarriageReturnMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleLineTerminationMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleLineTerminationMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SavePageInfoMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_SavePageInfoMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveProcessingStatesMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_SaveProcessingStatesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_GenerateTextPhaseIIMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_GenerateTextPhaseIIIMarker_296;

public:
	inline static int32_t get_offset_of_k_GenerateTextMarker_277() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_GenerateTextMarker_277)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_GenerateTextMarker_277() const { return ___k_GenerateTextMarker_277; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_GenerateTextMarker_277() { return &___k_GenerateTextMarker_277; }
	inline void set_k_GenerateTextMarker_277(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_GenerateTextMarker_277 = value;
	}

	inline static int32_t get_offset_of_k_SetArraySizesMarker_278() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_SetArraySizesMarker_278)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_SetArraySizesMarker_278() const { return ___k_SetArraySizesMarker_278; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_SetArraySizesMarker_278() { return &___k_SetArraySizesMarker_278; }
	inline void set_k_SetArraySizesMarker_278(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_SetArraySizesMarker_278 = value;
	}

	inline static int32_t get_offset_of_k_GenerateTextPhaseIMarker_279() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_GenerateTextPhaseIMarker_279)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_GenerateTextPhaseIMarker_279() const { return ___k_GenerateTextPhaseIMarker_279; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_GenerateTextPhaseIMarker_279() { return &___k_GenerateTextPhaseIMarker_279; }
	inline void set_k_GenerateTextPhaseIMarker_279(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_GenerateTextPhaseIMarker_279 = value;
	}

	inline static int32_t get_offset_of_k_ParseMarkupTextMarker_280() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_ParseMarkupTextMarker_280)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ParseMarkupTextMarker_280() const { return ___k_ParseMarkupTextMarker_280; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ParseMarkupTextMarker_280() { return &___k_ParseMarkupTextMarker_280; }
	inline void set_k_ParseMarkupTextMarker_280(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ParseMarkupTextMarker_280 = value;
	}

	inline static int32_t get_offset_of_k_CharacterLookupMarker_281() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_CharacterLookupMarker_281)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_CharacterLookupMarker_281() const { return ___k_CharacterLookupMarker_281; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_CharacterLookupMarker_281() { return &___k_CharacterLookupMarker_281; }
	inline void set_k_CharacterLookupMarker_281(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_CharacterLookupMarker_281 = value;
	}

	inline static int32_t get_offset_of_k_HandleGPOSFeaturesMarker_282() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_HandleGPOSFeaturesMarker_282)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleGPOSFeaturesMarker_282() const { return ___k_HandleGPOSFeaturesMarker_282; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleGPOSFeaturesMarker_282() { return &___k_HandleGPOSFeaturesMarker_282; }
	inline void set_k_HandleGPOSFeaturesMarker_282(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleGPOSFeaturesMarker_282 = value;
	}

	inline static int32_t get_offset_of_k_CalculateVerticesPositionMarker_283() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_CalculateVerticesPositionMarker_283)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_CalculateVerticesPositionMarker_283() const { return ___k_CalculateVerticesPositionMarker_283; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_CalculateVerticesPositionMarker_283() { return &___k_CalculateVerticesPositionMarker_283; }
	inline void set_k_CalculateVerticesPositionMarker_283(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_CalculateVerticesPositionMarker_283 = value;
	}

	inline static int32_t get_offset_of_k_ComputeTextMetricsMarker_284() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_ComputeTextMetricsMarker_284)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ComputeTextMetricsMarker_284() const { return ___k_ComputeTextMetricsMarker_284; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ComputeTextMetricsMarker_284() { return &___k_ComputeTextMetricsMarker_284; }
	inline void set_k_ComputeTextMetricsMarker_284(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ComputeTextMetricsMarker_284 = value;
	}

	inline static int32_t get_offset_of_k_HandleVisibleCharacterMarker_285() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_HandleVisibleCharacterMarker_285)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleVisibleCharacterMarker_285() const { return ___k_HandleVisibleCharacterMarker_285; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleVisibleCharacterMarker_285() { return &___k_HandleVisibleCharacterMarker_285; }
	inline void set_k_HandleVisibleCharacterMarker_285(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleVisibleCharacterMarker_285 = value;
	}

	inline static int32_t get_offset_of_k_HandleWhiteSpacesMarker_286() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_HandleWhiteSpacesMarker_286)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleWhiteSpacesMarker_286() const { return ___k_HandleWhiteSpacesMarker_286; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleWhiteSpacesMarker_286() { return &___k_HandleWhiteSpacesMarker_286; }
	inline void set_k_HandleWhiteSpacesMarker_286(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleWhiteSpacesMarker_286 = value;
	}

	inline static int32_t get_offset_of_k_HandleHorizontalLineBreakingMarker_287() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_HandleHorizontalLineBreakingMarker_287)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleHorizontalLineBreakingMarker_287() const { return ___k_HandleHorizontalLineBreakingMarker_287; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleHorizontalLineBreakingMarker_287() { return &___k_HandleHorizontalLineBreakingMarker_287; }
	inline void set_k_HandleHorizontalLineBreakingMarker_287(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleHorizontalLineBreakingMarker_287 = value;
	}

	inline static int32_t get_offset_of_k_HandleVerticalLineBreakingMarker_288() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_HandleVerticalLineBreakingMarker_288)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleVerticalLineBreakingMarker_288() const { return ___k_HandleVerticalLineBreakingMarker_288; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleVerticalLineBreakingMarker_288() { return &___k_HandleVerticalLineBreakingMarker_288; }
	inline void set_k_HandleVerticalLineBreakingMarker_288(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleVerticalLineBreakingMarker_288 = value;
	}

	inline static int32_t get_offset_of_k_SaveGlyphVertexDataMarker_289() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_SaveGlyphVertexDataMarker_289)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_SaveGlyphVertexDataMarker_289() const { return ___k_SaveGlyphVertexDataMarker_289; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_SaveGlyphVertexDataMarker_289() { return &___k_SaveGlyphVertexDataMarker_289; }
	inline void set_k_SaveGlyphVertexDataMarker_289(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_SaveGlyphVertexDataMarker_289 = value;
	}

	inline static int32_t get_offset_of_k_ComputeCharacterAdvanceMarker_290() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_ComputeCharacterAdvanceMarker_290)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ComputeCharacterAdvanceMarker_290() const { return ___k_ComputeCharacterAdvanceMarker_290; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ComputeCharacterAdvanceMarker_290() { return &___k_ComputeCharacterAdvanceMarker_290; }
	inline void set_k_ComputeCharacterAdvanceMarker_290(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ComputeCharacterAdvanceMarker_290 = value;
	}

	inline static int32_t get_offset_of_k_HandleCarriageReturnMarker_291() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_HandleCarriageReturnMarker_291)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleCarriageReturnMarker_291() const { return ___k_HandleCarriageReturnMarker_291; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleCarriageReturnMarker_291() { return &___k_HandleCarriageReturnMarker_291; }
	inline void set_k_HandleCarriageReturnMarker_291(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleCarriageReturnMarker_291 = value;
	}

	inline static int32_t get_offset_of_k_HandleLineTerminationMarker_292() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_HandleLineTerminationMarker_292)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleLineTerminationMarker_292() const { return ___k_HandleLineTerminationMarker_292; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleLineTerminationMarker_292() { return &___k_HandleLineTerminationMarker_292; }
	inline void set_k_HandleLineTerminationMarker_292(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleLineTerminationMarker_292 = value;
	}

	inline static int32_t get_offset_of_k_SavePageInfoMarker_293() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_SavePageInfoMarker_293)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_SavePageInfoMarker_293() const { return ___k_SavePageInfoMarker_293; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_SavePageInfoMarker_293() { return &___k_SavePageInfoMarker_293; }
	inline void set_k_SavePageInfoMarker_293(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_SavePageInfoMarker_293 = value;
	}

	inline static int32_t get_offset_of_k_SaveProcessingStatesMarker_294() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_SaveProcessingStatesMarker_294)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_SaveProcessingStatesMarker_294() const { return ___k_SaveProcessingStatesMarker_294; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_SaveProcessingStatesMarker_294() { return &___k_SaveProcessingStatesMarker_294; }
	inline void set_k_SaveProcessingStatesMarker_294(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_SaveProcessingStatesMarker_294 = value;
	}

	inline static int32_t get_offset_of_k_GenerateTextPhaseIIMarker_295() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_GenerateTextPhaseIIMarker_295)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_GenerateTextPhaseIIMarker_295() const { return ___k_GenerateTextPhaseIIMarker_295; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_GenerateTextPhaseIIMarker_295() { return &___k_GenerateTextPhaseIIMarker_295; }
	inline void set_k_GenerateTextPhaseIIMarker_295(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_GenerateTextPhaseIIMarker_295 = value;
	}

	inline static int32_t get_offset_of_k_GenerateTextPhaseIIIMarker_296() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_StaticFields, ___k_GenerateTextPhaseIIIMarker_296)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_GenerateTextPhaseIIIMarker_296() const { return ___k_GenerateTextPhaseIIIMarker_296; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_GenerateTextPhaseIIIMarker_296() { return &___k_GenerateTextPhaseIIIMarker_296; }
	inline void set_k_GenerateTextPhaseIIIMarker_296(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_GenerateTextPhaseIIIMarker_296 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * m_Items[1];

public:
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Oculus.Interaction.ActiveStateSelector[]
struct ActiveStateSelectorU5BU5D_tE574AE6A6896557335C43BD170E2D639639E1B72  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ActiveStateSelector_t51C3BFDADBBFB1B4F82C6AB8B4A9334BEDDDB3C6 * m_Items[1];

public:
	inline ActiveStateSelector_t51C3BFDADBBFB1B4F82C6AB8B4A9334BEDDDB3C6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ActiveStateSelector_t51C3BFDADBBFB1B4F82C6AB8B4A9334BEDDDB3C6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ActiveStateSelector_t51C3BFDADBBFB1B4F82C6AB8B4A9334BEDDDB3C6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ActiveStateSelector_t51C3BFDADBBFB1B4F82C6AB8B4A9334BEDDDB3C6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ActiveStateSelector_t51C3BFDADBBFB1B4F82C6AB8B4A9334BEDDDB3C6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ActiveStateSelector_t51C3BFDADBBFB1B4F82C6AB8B4A9334BEDDDB3C6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Material_t8927C00353A72755313F046D0CE85178AE8218EE * m_Items[1];

public:
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Oculus.Interaction.Input.HandRef[]
struct HandRefU5BU5D_tAEAD2F0AD5C1FBFB99C3434574E41678929407D0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) HandRef_tA7E4A60786B2D1BCE6D014EE0EC0DB85EFA46109 * m_Items[1];

public:
	inline HandRef_tA7E4A60786B2D1BCE6D014EE0EC0DB85EFA46109 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HandRef_tA7E4A60786B2D1BCE6D014EE0EC0DB85EFA46109 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HandRef_tA7E4A60786B2D1BCE6D014EE0EC0DB85EFA46109 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline HandRef_tA7E4A60786B2D1BCE6D014EE0EC0DB85EFA46109 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HandRef_tA7E4A60786B2D1BCE6D014EE0EC0DB85EFA46109 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HandRef_tA7E4A60786B2D1BCE6D014EE0EC0DB85EFA46109 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Oculus.Interaction.TwoGrabFreeTransformer[]
struct TwoGrabFreeTransformerU5BU5D_tC630549403FDD2FF20D841CF605013CA698B5523  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD * m_Items[1];

public:
	inline TwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD * value)
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


// System.Void UnityEngine.Assertions.Assert::IsNotNull<System.Object>(!!0,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNull_TisRuntimeObject_mD5FA1B6D8309AA903905AEA5CE491EFB7D1EB95E_gshared (RuntimeObject * ___value0, String_t* ___message1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::TryGetComponent<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisRuntimeObject_mC7639C3E3E2A65695113BCF25718826CC392D6CB_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, RuntimeObject ** ___component0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Assertions.Assert::IsNotNull<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNull_TisRuntimeObject_m55EFDAA397D9E255C8A38AEB4AC3E0C49D0FB3E8_gshared (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, float ___arg00, const RuntimeMethod* method);
// Oculus.Interaction.InteractorState Oculus.Interaction.Interactor`2<System.Object,System.Object>::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interactor_2_get_State_m7F35D9075CDF997514E26C88BFEBECC339762605_gshared (Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708 * __this, const RuntimeMethod* method);
// !1 Oculus.Interaction.Interactor`2<System.Object,System.Object>::get_SelectedInteractable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Interactor_2_get_SelectedInteractable_mF198E6A0CD841C1C337C5EE83AB8AEEB984A4C2D_gshared_inline (Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponents_TisRuntimeObject_mEBC8AE0C8843120678A284931632FCCBE15F0C46_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void Oculus.Interaction.MonoBehaviourStartExtensions::BeginStart(UnityEngine.MonoBehaviour,System.Boolean&,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourStartExtensions_BeginStart_mAB09EA707D0D458F0758561CA0AD604619F21978 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___monoBehaviour0, bool* ___started1, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___baseStart2, const RuntimeMethod* method);
// Oculus.Interaction.AudioTrigger Oculus.Interaction.ImpactAudio::get_SoftCollisionSound()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * ImpactAudio_get_SoftCollisionSound_mE0F5735A62EF8A4C9184DCCC591CE20DE26A6DD6_inline (ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Assertions.Assert::IsNotNull<Oculus.Interaction.AudioTrigger>(!!0,System.String)
inline void Assert_IsNotNull_TisAudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802_m8B3DAD5CF8DB4A7A29102A962347E5C035487291 (AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * ___value0, String_t* ___message1, const RuntimeMethod* method)
{
	((  void (*) (AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 *, String_t*, const RuntimeMethod*))Assert_IsNotNull_TisRuntimeObject_mD5FA1B6D8309AA903905AEA5CE491EFB7D1EB95E_gshared)(___value0, ___message1, method);
}
// Oculus.Interaction.AudioTrigger Oculus.Interaction.ImpactAudio::get_HardCollisionSound()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * ImpactAudio_get_HardCollisionSound_m64F3AEB89D81BF3A2C50F38390AA11E1E09AA937_inline (ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Assertions.Assert::IsNotNull<UnityEngine.Rigidbody>(!!0,System.String)
inline void Assert_IsNotNull_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m4FA39878BCE461AF1878E6216BB95FD00B7FD624 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___value0, String_t* ___message1, const RuntimeMethod* method)
{
	((  void (*) (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A *, String_t*, const RuntimeMethod*))Assert_IsNotNull_TisRuntimeObject_mD5FA1B6D8309AA903905AEA5CE491EFB7D1EB95E_gshared)(___value0, ___message1, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Oculus.Interaction.AudioPhysics/CollisionEvents>()
inline CollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E * GameObject_AddComponent_TisCollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E_m2D03DD8BE806789D99D8195919E0C7FB92E87C3F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void Oculus.Interaction.MonoBehaviourStartExtensions::EndStart(UnityEngine.MonoBehaviour,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourStartExtensions_EndStart_mC572AECC88F4BA4622C137CA4E385812337BC643 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___monoBehaviour0, bool* ___started1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Collision>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9EFCE0FD810C793AAB24A94691EF69C7E29DCF92 (Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Oculus.Interaction.AudioPhysics/CollisionEvents::add_WhenCollisionEnter(System.Action`1<UnityEngine.Collision>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEvents_add_WhenCollisionEnter_m93955C3F1B9200A198AAE7F5F9FAE27AFD49AA69 (CollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E * __this, Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * ___value0, const RuntimeMethod* method);
// System.Void Oculus.Interaction.AudioPhysics/CollisionEvents::remove_WhenCollisionEnter(System.Action`1<UnityEngine.Collision>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEvents_remove_WhenCollisionEnter_m20EB6E66EAC624B3762C8331B3C2DD8E553A09A4 (CollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E * __this, Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Interaction.AudioPhysics::TryPlayCollisionAudio(UnityEngine.Collision,UnityEngine.Rigidbody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics_TryPlayCollisionAudio_m9B10020A2969533561E1218C7BB15F114279BE85 (AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rigidbody1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Collision::get_relativeVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Collision_get_relativeVelocity_m0B0F8FA1AFAF7AB3B76083932D63A3FC1FA22442 (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.Collision::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * Collision_get_collider_m0AC4446E6B9168A0FB19DA376559C812E43779F8 (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::TryGetComponent<Oculus.Interaction.AudioPhysics>(!!0&)
inline bool GameObject_TryGetComponent_TisAudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84_mB64D908189B563B64FD5F152FBFD45ADD6394C60 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84 ** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84 **, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_mC7639C3E3E2A65695113BCF25718826CC392D6CB_gshared)(__this, ___component0, method);
}
// System.Single Oculus.Interaction.AudioPhysics::GetObjectVelocity(Oculus.Interaction.AudioPhysics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioPhysics_GetObjectVelocity_m64C4AB360C550AC3D775970DE1A322AE2BB9E496 (AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84 * ___target0, const RuntimeMethod* method);
// System.Void Oculus.Interaction.AudioPhysics::PlayCollisionAudio(Oculus.Interaction.ImpactAudio,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics_PlayCollisionAudio_m77591FA09C942F00B7AC79AA98B878E620D1BA48 (AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84 * __this, ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F  ___impactAudio0, float ___magnitude1, const RuntimeMethod* method);
// System.Void Oculus.Interaction.AudioPhysics::PlaySoundOnAudioTrigger(Oculus.Interaction.AudioTrigger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics_PlaySoundOnAudioTrigger_m6BC934537FA079B9567E243D7E47B835A18F7CD7 (AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84 * __this, AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * ___audioTrigger0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.AudioTrigger::PlayAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioTrigger_PlayAudio_m3265F0528E34E0D695ED02C49ABA3F18F67BF4B0 (AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Assertions.Assert::IsTrue(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_mA4B3C02713D80BBFBB9CD7E99B6732324C5206E3 (bool ___condition0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioClip>::Add(!0)
inline void List_1_Add_m4D91153F51A554F55F330AEF69766A4579378C8B (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_spatialize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialize_m55AE6DFEBBB2A15A1A5A1ECFF0B8CFD38927BD41 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Random::InitState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random_InitState_m9030E6387803E8EBAD0A5B0150254A89F8286A9C (int32_t ___seed0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Boolean Oculus.Interaction.MinMaxPair::get_UseRandomRange()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MinMaxPair_get_UseRandomRange_m910C499410E123452758F06A981E10AED180FF94_inline (MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 * __this, const RuntimeMethod* method);
// System.Single Oculus.Interaction.MinMaxPair::get_Min()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MinMaxPair_get_Min_mB1CC843B342011C66EC793F33F33342FC9CDE431_inline (MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 * __this, const RuntimeMethod* method);
// System.Single Oculus.Interaction.MinMaxPair::get_Max()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MinMaxPair_get_Max_mB9DBB5333483D69BDE5DF747737ACBDE9D7D399B_inline (MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 * __this, const RuntimeMethod* method);
// UnityEngine.AudioClip Oculus.Interaction.AudioTrigger::RandomClipWithoutRepeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioTrigger_RandomClipWithoutRepeat_mA9EA29464DE2216FDF9C10E1F73EAAE17AC72879 (AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.AudioClip>::get_Count()
inline int32_t List_1_get_Count_m1C98EA9359999773111E0918F7CE4783B66413F1_inline (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.AudioClip>::get_Item(System.Int32)
inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_inline (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * (*) (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioClip>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mEE45F80AF58DFD847597677B813703152E468678 (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioClip>::.ctor()
inline void List_1__ctor_mA7F3A9988682FD71873AC72212E2F2A65DE06079 (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.Assertions.Assert::IsNotNull<UnityEngine.RectTransform>(!!0)
inline void Assert_IsNotNull_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m08B75D79491A6947D8A99DE27C2EC7477C948A36 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___value0, const RuntimeMethod* method)
{
	((  void (*) (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *, const RuntimeMethod*))Assert_IsNotNull_TisRuntimeObject_m55EFDAA397D9E255C8A38AEB4AC3E0C49D0FB3E8_gshared)(___value0, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.RectTransform Oculus.Interaction.Samples.CarouselView::GetCurrentChild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * CarouselView_GetCurrentChild_m12E91E323C69F33FF2324FF264265C739E3A796A (CarouselView_t77A98CAF9321FDC3BF0186F229F9449402526024 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetAsLastSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.LayoutRebuilder::ForceRebuildLayoutImmediate(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutRebuilder_ForceRebuildLayoutImmediate_mD06D080BA3FC8111AF814FA67ED8764F8CFECC2C (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___layoutRoot0, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Samples.CarouselView::ScrollToChild(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarouselView_ScrollToChild_mDE76C8C70D9DDE68A09C5DEF70E97313DA248430 (CarouselView_t77A98CAF9321FDC3BF0186F229F9449402526024 * __this, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___child0, float ___amount011, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetAsFirstSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetAsFirstSibling_mD5C02831BA6C7C3408CD491191EAF760ECB7E754 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rect_get_center_mDFC7A4AE153DCDC1D6248803381C6F36C7883707 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_HSVToRGB_m8B61783B65A70BC889424B9A64FD40D48E735FEF (float ___H0, float ___S1, float ___V2, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Assertions.Assert::IsNotNull<UnityEngine.Renderer>(!!0)
inline void Assert_IsNotNull_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m630CDAC07C2316825382B6F38081EC2879EEE8C4 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___value0, const RuntimeMethod* method)
{
	((  void (*) (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *, const RuntimeMethod*))Assert_IsNotNull_TisRuntimeObject_m55EFDAA397D9E255C8A38AEB4AC3E0C49D0FB3E8_gshared)(___value0, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Assertions.Assert::IsNotNull<UnityEngine.Material>(!!0)
inline void Assert_IsNotNull_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m472A3A05E8307EBBAFE0D6C5937F8CB0AD9B5F76 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method)
{
	((  void (*) (Material_t8927C00353A72755313F046D0CE85178AE8218EE *, const RuntimeMethod*))Assert_IsNotNull_TisRuntimeObject_m55EFDAA397D9E255C8A38AEB4AC3E0C49D0FB3E8_gshared)(___value0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(!0)
inline void UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, float ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC *, float, const RuntimeMethod*))UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_gshared)(__this, ___arg00, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Material TMPro.TMP_Text::get_fontMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * TMP_Text_get_fontMaterial_mA58C75BFC0CDB2C835CA4536C7A1A727FCA641CF (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::SmoothStep(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothStep_m42903D75966D0858460ACDF8CB825B874725FFF6 (float ___from0, float ___to1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Assertions.Assert::IsNotNull<Oculus.Interaction.HandVisual>(!!0)
inline void Assert_IsNotNull_TisHandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E_m28CB8A3CA65EC1333325307FD925D8F8096A68DE (HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E * ___value0, const RuntimeMethod* method)
{
	((  void (*) (HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E *, const RuntimeMethod*))Assert_IsNotNull_TisRuntimeObject_m55EFDAA397D9E255C8A38AEB4AC3E0C49D0FB3E8_gshared)(___value0, method);
}
// Oculus.Interaction.InteractorState Oculus.Interaction.Interactor`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable>::get_State()
inline int32_t Interactor_2_get_State_m90651D75A2B476AB6B28B329D20436E36F6DCABD (Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5 *, const RuntimeMethod*))Interactor_2_get_State_m7F35D9075CDF997514E26C88BFEBECC339762605_gshared)(__this, method);
}
// !1 Oculus.Interaction.Interactor`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable>::get_SelectedInteractable()
inline HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8 * Interactor_2_get_SelectedInteractable_m0C2818658FABEC6333463FC4FD6F3EE5BB31AA04_inline (Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5 * __this, const RuntimeMethod* method)
{
	return ((  HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8 * (*) (Interactor_2_t4D8D7BB77DEA68524A24CAA19662910FDD3385B5 *, const RuntimeMethod*))Interactor_2_get_SelectedInteractable_mF198E6A0CD841C1C337C5EE83AB8AEEB984A4C2D_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::TryGetComponent<Oculus.Interaction.Samples.ShouldHideHandOnGrab>(!!0&)
inline bool GameObject_TryGetComponent_TisShouldHideHandOnGrab_tBAB0E4F5C7010765C850D4EB572D73D237A41AB6_mF00A165AEB1B14D5B581FE830DAEC87EA29AC4DE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, ShouldHideHandOnGrab_tBAB0E4F5C7010765C850D4EB572D73D237A41AB6 ** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, ShouldHideHandOnGrab_tBAB0E4F5C7010765C850D4EB572D73D237A41AB6 **, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_mC7639C3E3E2A65695113BCF25718826CC392D6CB_gshared)(__this, ___component0, method);
}
// System.Void Oculus.Interaction.HandVisual::set_ForceOffVisibility(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandVisual_set_ForceOffVisibility_mFA2E933400B4A92EA1366FC8996C9F85E85F26C0_inline (HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Samples.HideHandVisualOnGrab::InjectHandGrabInteractor(Oculus.Interaction.HandPosing.HandGrabInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideHandVisualOnGrab_InjectHandGrabInteractor_m28CB9947052365BFED3E55C0ACEA180E293223C5 (HideHandVisualOnGrab_t3BFB67203DE710975A7593C3776BCF49CA5D2CC3 * __this, HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3 * ___handGrabInteractor0, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Samples.HideHandVisualOnGrab::InjectHandVisual(Oculus.Interaction.HandVisual)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideHandVisualOnGrab_InjectHandVisual_m43EE82DAC4FAA337516F1614A37EDA001DAD844C (HideHandVisualOnGrab_t3BFB67203DE710975A7593C3776BCF49CA5D2CC3 * __this, HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E * ___handVisual0, const RuntimeMethod* method);
// System.Void UnityEngine.Assertions.Assert::IsNotNull<UnityEngine.Transform>(!!0)
inline void Assert_IsNotNull_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mA85DE49E66654AC5B621D2709476E0A44DD6500E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	((  void (*) (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Assert_IsNotNull_TisRuntimeObject_m55EFDAA397D9E255C8A38AEB4AC3E0C49D0FB3E8_gshared)(___value0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m6BB4B39BB829A451C2F63215361D27650AA24D8C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldUp1, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Samples.PoseUseSample/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m2BBA05A8B2836797AF2F78EB0FE8DA2608FCBBAE (U3CU3Ec__DisplayClass4_0_t217CDA7E0E60088E9A3310535A9A2450FAC81405 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// !!0 UnityEngine.GameObject::GetComponentInChildren<TMPro.TextMeshPro>()
inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * GameObject_GetComponentInChildren_TisTextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_m80991F175CE468C274C70C04833DFBE4D331A71D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.ParticleSystemRenderer>()
inline ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * GameObject_GetComponentInChildren_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m255309575EBBBA3AB5D2CFD28F82585AC2526FDA (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Oculus.Interaction.ActiveStateSelector::add_WhenSelected(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveStateSelector_add_WhenSelected_m98AD05DC72FBC5444A31E04F20E542CC6D68EC52 (ActiveStateSelector_t51C3BFDADBBFB1B4F82C6AB8B4A9334BEDDDB3C6 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Void Oculus.Interaction.ActiveStateSelector::add_WhenUnselected(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveStateSelector_add_WhenUnselected_m0C82C3C7ADFCE9282070E0C4033912C775762476 (ActiveStateSelector_t51C3BFDADBBFB1B4F82C6AB8B4A9334BEDDDB3C6 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<OVRCameraRig>()
inline OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517 * Object_FindObjectOfType_TisOVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517_mCD0D2DA6EF2EE7BAF6D2611A748177C0E8894A31 (const RuntimeMethod* method)
{
	return ((  OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// UnityEngine.Transform OVRCameraRig::get_centerEyeAnchor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * OVRCameraRig_get_centerEyeAnchor_mC0875856CE4EBA9D0867E69A1A05DE40A443E1FF_inline (OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<Oculus.Interaction.Input.HandRef>()
inline HandRefU5BU5D_tAEAD2F0AD5C1FBFB99C3434574E41678929407D0* Component_GetComponents_TisHandRef_tA7E4A60786B2D1BCE6D014EE0EC0DB85EFA46109_m33FE23F7F7A2AFA52FEFFBA52E5674424DDCCBCF (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  HandRefU5BU5D_tAEAD2F0AD5C1FBFB99C3434574E41678929407D0* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_mEBC8AE0C8843120678A284931632FCCBE15F0C46_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Boolean Oculus.Interaction.Input.HandRef::GetRootPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandRef_GetRootPose_mDAFFDB8085531C24C569DF17CDBD1C422C25BCFE (HandRef_tA7E4A60786B2D1BCE6D014EE0EC0DB85EFA46109 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * ___pose0, const RuntimeMethod* method);
// Oculus.Interaction.Input.Handedness Oculus.Interaction.Input.HandRef::get_Handedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandRef_get_Handedness_m59EAD614B03AEDBD56E156078713CAB0D38D9B98 (HandRef_tA7E4A60786B2D1BCE6D014EE0EC0DB85EFA46109 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Pose::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Pose_get_right_mEB40E0FF7EC4D4DD947D7FEE9139F5558D4BFA68 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<Oculus.Interaction.TwoGrabFreeTransformer>()
inline TwoGrabFreeTransformerU5BU5D_tC630549403FDD2FF20D841CF605013CA698B5523* Component_GetComponents_TisTwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD_m66FE97365814F31124DE1FBD3DCFFA3F3AFB5308 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TwoGrabFreeTransformerU5BU5D_tC630549403FDD2FF20D841CF605013CA698B5523* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_mEBC8AE0C8843120678A284931632FCCBE15F0C46_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m3A40B7F195E9E217AE29A0964D7E7540E2E23080 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Oculus.Interaction.TwoGrabFreeTransformer::MarkAsBaseScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoGrabFreeTransformer_MarkAsBaseScale_m8A0E59622DABEB9E4B005F48FB3BF5C80FDFE5E8 (TwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Single Oculus.Interaction.Samples.RotationAudioEvents::GetTotalDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RotationAudioEvents_GetTotalDelta_m428B50619D43DCF728E44E8E14112B4B5513B22F (RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, const RuntimeMethod* method);
// UnityEngine.Transform Oculus.Interaction.Samples.RotationAudioEvents::get_TrackedTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RotationAudioEvents_get_TrackedTransform_m93F55E6DE74A93861A7B3C556A1F662FA53BFA46 (RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Quaternion Oculus.Interaction.Samples.RotationAudioEvents::GetCurrentRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  RotationAudioEvents_GetCurrentRotation_m1B2DAEF709C818BB3B9538EEBEC2E5B3D060B80D (RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_m3BE44E43965BB9EDFD06DBC1E0985324A83327CF_inline (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Assertions.Assert::IsNotNull<Oculus.Interaction.IInteractableView>(!!0)
inline void Assert_IsNotNull_TisIInteractableView_tDB565FF06732C41D644F9AB5D0FBA3DCF14FEEAC_m02CF2DD3E16D4A62D9BA5A40B6D30974A69A29B6 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))Assert_IsNotNull_TisRuntimeObject_m55EFDAA397D9E255C8A38AEB4AC3E0C49D0FB3E8_gshared)(___value0, method);
}
// System.Void Oculus.Interaction.Samples.RotationAudioEvents::RotationEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationAudioEvents_RotationEnded_mFC315D487DE1B88C0B063CDF882340CC93457277 (RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Samples.RotationAudioEvents::RotationStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationAudioEvents_RotationStarted_mAB93A5FE11FE2F44FC93ECE5246CD119374B6A5C (RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Samples.RotationAudioEvents::UpdateRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationAudioEvents_UpdateRotation_m9FDD0166317BAD2252DDE7AF27BB2B02BF598243 (RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3 * __this, const RuntimeMethod* method);
// UnityEngine.Transform Oculus.Interaction.Samples.ScaleAudioEvents::get_TrackedTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ScaleAudioEvents_get_TrackedTransform_mBDF0539A9DFAB7E5B4893D13724F18DBAC1331FD (ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single Oculus.Interaction.Samples.ScaleAudioEvents::GetTotalDelta(Oculus.Interaction.Samples.ScaleAudioEvents/Direction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScaleAudioEvents_GetTotalDelta_mBB44FDC0B9DFEAF9C6DB441CC55EC88A607F10D2 (ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8 * __this, int32_t* ___direction0, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Samples.ScaleAudioEvents::ScalingEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleAudioEvents_ScalingEnded_m275CF03F9D7483F662ABA6E449911955A9129498 (ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Samples.ScaleAudioEvents::ScalingStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleAudioEvents_ScalingStarted_mE1B4AA2C6CE1004423F4E1C58E1DEF9F99B27F77 (ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Samples.ScaleAudioEvents::UpdateScaling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleAudioEvents_UpdateScaling_m3307A3E56991FBC90BC938DE760B7CE570EF2B1B (ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Collections.IEnumerator Oculus.Interaction.Samples.SceneLoader::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneLoader_LoadSceneAsync_m0A4070ACEA65C1564805FF0E18BF48B9968268F2 (SceneLoader_t54FAEF49CF78EF9DB3F31680C5CC45D1F8517953 * __this, String_t* ___sceneName0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__2__ctor_m54092F8FA2EFA815EB61361F62763A8234C31200 (U3CLoadSceneAsyncU3Ed__2_tE31CB71FCD564091D8102F37B397A377EC4BD592 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE77655C011C18F49CAD740CED7940EF1C7000357 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Collision>::Invoke(!0)
inline void Action_1_Invoke_mC78A558235B290D6FDC6576BBCED82A6FFE3E78F (Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 *, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Samples.PoseUseSample::ShowVisuals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUseSample_ShowVisuals_m286414458B4AE0509F982C3A6CF6511B5FBA29B2 (PoseUseSample_t5F67B23F2A56359B4A89978FD7DF852C17C5546A * __this, int32_t ___poseNumber0, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Samples.PoseUseSample::HideVisuals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUseSample_HideVisuals_m335D521F571F12C7DDBECDB5BDD2AD46119DFD80 (PoseUseSample_t5F67B23F2A56359B4A89978FD7DF852C17C5546A * __this, int32_t ___poseNumber0, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_LoadSceneAsync_m9710D4ECD4D8BE75ACB7794E5300288C38A8A6BA (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.AudioPhysics/CollisionEvents/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m486F2D59C08751764ED848785A6701DF8C2AE457 (U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quaternion_Dot_m7F12C5843352AB2EA687923444CC987D51515F9A (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_mC57C44978B13AD1592750B1D523AAB4549BD5643 (float ___dot0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void Oculus.Interaction.AudioPhysics::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics_Start_mF0B8D5B350422ED548DCA591C82D76D0BE58E708 (AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisAudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802_m8B3DAD5CF8DB4A7A29102A962347E5C035487291_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m4FA39878BCE461AF1878E6216BB95FD00B7FD624_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E_m2D03DD8BE806789D99D8195919E0C7FB92E87C3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral162A4868EBE00F18DBA99EC479A8D2DA4A132B14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54F33D635DC3480D7270690885F7439D8A90665F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79DD8BBE11B832C07F2CE936B84C600A02323848);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started);
		bool* L_0 = __this->get_address_of__started_11();
		MonoBehaviourStartExtensions_BeginStart_mAB09EA707D0D458F0758561CA0AD604619F21978(__this, (bool*)L_0, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL, /*hidden argument*/NULL);
		// Assert.IsNotNull(_impactAudioEvents.SoftCollisionSound, "AudioPhysics component has no audio soft collision audio trigger assigned");
		ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F * L_1 = __this->get_address_of__impactAudioEvents_5();
		AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * L_2;
		L_2 = ImpactAudio_get_SoftCollisionSound_mE0F5735A62EF8A4C9184DCCC591CE20DE26A6DD6_inline((ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F *)L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisAudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802_m8B3DAD5CF8DB4A7A29102A962347E5C035487291(L_2, _stringLiteral162A4868EBE00F18DBA99EC479A8D2DA4A132B14, /*hidden argument*/Assert_IsNotNull_TisAudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802_m8B3DAD5CF8DB4A7A29102A962347E5C035487291_RuntimeMethod_var);
		// Assert.IsNotNull(_impactAudioEvents.HardCollisionSound, "AudioPhysics component has no audio hard collision audio trigger assigned");
		ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F * L_3 = __this->get_address_of__impactAudioEvents_5();
		AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * L_4;
		L_4 = ImpactAudio_get_HardCollisionSound_m64F3AEB89D81BF3A2C50F38390AA11E1E09AA937_inline((ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F *)L_3, /*hidden argument*/NULL);
		Assert_IsNotNull_TisAudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802_m8B3DAD5CF8DB4A7A29102A962347E5C035487291(L_4, _stringLiteral79DD8BBE11B832C07F2CE936B84C600A02323848, /*hidden argument*/Assert_IsNotNull_TisAudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802_m8B3DAD5CF8DB4A7A29102A962347E5C035487291_RuntimeMethod_var);
		// Assert.IsNotNull(_rigidbody, "AudioPhysics component has no rigidbody assigned");
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_5 = __this->get__rigidbody_4();
		Assert_IsNotNull_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m4FA39878BCE461AF1878E6216BB95FD00B7FD624(L_5, _stringLiteral54F33D635DC3480D7270690885F7439D8A90665F, /*hidden argument*/Assert_IsNotNull_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m4FA39878BCE461AF1878E6216BB95FD00B7FD624_RuntimeMethod_var);
		// _collisionEvents = _rigidbody.gameObject.AddComponent<CollisionEvents>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_6 = __this->get__rigidbody_4();
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		CollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E * L_8;
		L_8 = GameObject_AddComponent_TisCollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E_m2D03DD8BE806789D99D8195919E0C7FB92E87C3F(L_7, /*hidden argument*/GameObject_AddComponent_TisCollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E_m2D03DD8BE806789D99D8195919E0C7FB92E87C3F_RuntimeMethod_var);
		__this->set__collisionEvents_12(L_8);
		// this.EndStart(ref _started);
		bool* L_9 = __this->get_address_of__started_11();
		MonoBehaviourStartExtensions_EndStart_mC572AECC88F4BA4622C137CA4E385812337BC643(__this, (bool*)L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics_OnEnable_m04AB51018257864DA487C606C9A1F40F388ADB06 (AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m9EFCE0FD810C793AAB24A94691EF69C7E29DCF92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioPhysics_HandleCollisionEnter_m2F8D82564AA56E56D034672BE59B8566FE22565F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_started)
		bool L_0 = __this->get__started_11();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// _collisionEvents.WhenCollisionEnter += HandleCollisionEnter;
		CollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E * L_2 = __this->get__collisionEvents_12();
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_3 = (Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 *)il2cpp_codegen_object_new(Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45_il2cpp_TypeInfo_var);
		Action_1__ctor_m9EFCE0FD810C793AAB24A94691EF69C7E29DCF92(L_3, __this, (intptr_t)((intptr_t)AudioPhysics_HandleCollisionEnter_m2F8D82564AA56E56D034672BE59B8566FE22565F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m9EFCE0FD810C793AAB24A94691EF69C7E29DCF92_RuntimeMethod_var);
		NullCheck(L_2);
		CollisionEvents_add_WhenCollisionEnter_m93955C3F1B9200A198AAE7F5F9FAE27AFD49AA69(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics_OnDisable_m966850AD6DA9D472FAF13B396CCDFB069F24F123 (AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m9EFCE0FD810C793AAB24A94691EF69C7E29DCF92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioPhysics_HandleCollisionEnter_m2F8D82564AA56E56D034672BE59B8566FE22565F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_started)
		bool L_0 = __this->get__started_11();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// _collisionEvents.WhenCollisionEnter -= HandleCollisionEnter;
		CollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E * L_2 = __this->get__collisionEvents_12();
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_3 = (Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 *)il2cpp_codegen_object_new(Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45_il2cpp_TypeInfo_var);
		Action_1__ctor_m9EFCE0FD810C793AAB24A94691EF69C7E29DCF92(L_3, __this, (intptr_t)((intptr_t)AudioPhysics_HandleCollisionEnter_m2F8D82564AA56E56D034672BE59B8566FE22565F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m9EFCE0FD810C793AAB24A94691EF69C7E29DCF92_RuntimeMethod_var);
		NullCheck(L_2);
		CollisionEvents_remove_WhenCollisionEnter_m20EB6E66EAC624B3762C8331B3C2DD8E553A09A4(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics_OnDestroy_m964A99D05684ECF0EE091DF3B748174F0FF2EB2A (AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_collisionEvents != null)
		CollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E * L_0 = __this->get__collisionEvents_12();
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
		// Destroy(_collisionEvents);
		CollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E * L_3 = __this->get__collisionEvents_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics::HandleCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics_HandleCollisionEnter_m2F8D82564AA56E56D034672BE59B8566FE22565F (AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	{
		// TryPlayCollisionAudio(collision, _rigidbody);
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_0 = ___collision0;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_1 = __this->get__rigidbody_4();
		AudioPhysics_TryPlayCollisionAudio_m9B10020A2969533561E1218C7BB15F114279BE85(__this, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics::TryPlayCollisionAudio(UnityEngine.Collision,UnityEngine.Rigidbody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics_TryPlayCollisionAudio_m9B10020A2969533561E1218C7BB15F114279BE85 (AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rigidbody1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisAudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84_mB64D908189B563B64FD5F152FBFD45ADD6394C60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		// float collisionMagnitude = collision.relativeVelocity.sqrMagnitude;
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_0 = ___collision0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Collision_get_relativeVelocity_m0B0F8FA1AFAF7AB3B76083932D63A3FC1FA22442(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		float L_2;
		L_2 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		V_0 = L_2;
		// if (collision.collider.gameObject == null)
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_3 = ___collision0;
		NullCheck(L_3);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4;
		L_4 = Collision_get_collider_m0AC4446E6B9168A0FB19DA376559C812E43779F8(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0028;
		}
	}
	{
		// return;
		goto IL_00a3;
	}

IL_0028:
	{
		// float deltaTime = Time.time - _timeAtLastCollision;
		float L_8;
		L_8 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_9 = __this->get__timeAtLastCollision_10();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_8, (float)L_9));
		// if (_timeBetweenCollisions > deltaTime)
		float L_10 = __this->get__timeBetweenCollisions_8();
		float L_11 = V_1;
		V_4 = (bool)((((float)L_10) > ((float)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0047;
		}
	}
	{
		// return;
		goto IL_00a3;
	}

IL_0047:
	{
		// if (_allowMultipleCollisions == false)
		bool L_13 = __this->get__allowMultipleCollisions_9();
		V_5 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_008a;
		}
	}
	{
		// if (collision.collider.gameObject.TryGetComponent(out AudioPhysics otherAudioPhysicsObj))
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_15 = ___collision0;
		NullCheck(L_15);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_16;
		L_16 = Collision_get_collider_m0AC4446E6B9168A0FB19DA376559C812E43779F8(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		bool L_18;
		L_18 = GameObject_TryGetComponent_TisAudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84_mB64D908189B563B64FD5F152FBFD45ADD6394C60(L_17, (AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84 **)(&V_6), /*hidden argument*/GameObject_TryGetComponent_TisAudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84_mB64D908189B563B64FD5F152FBFD45ADD6394C60_RuntimeMethod_var);
		V_7 = L_18;
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_0089;
		}
	}
	{
		// if (GetObjectVelocity(otherAudioPhysicsObj) > GetObjectVelocity(this))
		AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84 * L_20 = V_6;
		float L_21;
		L_21 = AudioPhysics_GetObjectVelocity_m64C4AB360C550AC3D775970DE1A322AE2BB9E496(L_20, /*hidden argument*/NULL);
		float L_22;
		L_22 = AudioPhysics_GetObjectVelocity_m64C4AB360C550AC3D775970DE1A322AE2BB9E496(__this, /*hidden argument*/NULL);
		V_8 = (bool)((((float)L_21) > ((float)L_22))? 1 : 0);
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_0088;
		}
	}
	{
		// return;
		goto IL_00a3;
	}

IL_0088:
	{
	}

IL_0089:
	{
	}

IL_008a:
	{
		// _timeAtLastCollision = Time.time;
		float L_24;
		L_24 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set__timeAtLastCollision_10(L_24);
		// PlayCollisionAudio(_impactAudioEvents, collisionMagnitude);
		ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F  L_25 = __this->get__impactAudioEvents_5();
		float L_26 = V_0;
		AudioPhysics_PlayCollisionAudio_m77591FA09C942F00B7AC79AA98B878E620D1BA48(__this, L_25, L_26, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics::PlayCollisionAudio(Oculus.Interaction.ImpactAudio,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics_PlayCollisionAudio_m77591FA09C942F00B7AC79AA98B878E620D1BA48 (AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84 * __this, ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F  ___impactAudio0, float ___magnitude1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	{
		// if (impactAudio.HardCollisionSound == null || impactAudio.SoftCollisionSound == null)
		AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * L_0;
		L_0 = ImpactAudio_get_HardCollisionSound_m64F3AEB89D81BF3A2C50F38390AA11E1E09AA937_inline((ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F *)(&___impactAudio0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * L_2;
		L_2 = ImpactAudio_get_SoftCollisionSound_mE0F5735A62EF8A4C9184DCCC591CE20DE26A6DD6_inline((ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F *)(&___impactAudio0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 1;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// return;
		goto IL_0075;
	}

IL_0027:
	{
		// if (magnitude > _minimumVelocity)
		float L_5 = ___magnitude1;
		float L_6 = __this->get__minimumVelocity_7();
		V_1 = (bool)((((float)L_5) > ((float)L_6))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		// if (magnitude > _velocitySplit && impactAudio.HardCollisionSound != null)
		float L_8 = ___magnitude1;
		float L_9 = __this->get__velocitySplit_6();
		if ((!(((float)L_8) > ((float)L_9))))
		{
			goto IL_004d;
		}
	}
	{
		AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * L_10;
		L_10 = ImpactAudio_get_HardCollisionSound_m64F3AEB89D81BF3A2C50F38390AA11E1E09AA937_inline((ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F *)(&___impactAudio0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B9_0 = ((int32_t)(L_11));
		goto IL_004e;
	}

IL_004d:
	{
		G_B9_0 = 0;
	}

IL_004e:
	{
		V_2 = (bool)G_B9_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0064;
		}
	}
	{
		// PlaySoundOnAudioTrigger(impactAudio.HardCollisionSound);
		AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * L_13;
		L_13 = ImpactAudio_get_HardCollisionSound_m64F3AEB89D81BF3A2C50F38390AA11E1E09AA937_inline((ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F *)(&___impactAudio0), /*hidden argument*/NULL);
		AudioPhysics_PlaySoundOnAudioTrigger_m6BC934537FA079B9567E243D7E47B835A18F7CD7(__this, L_13, /*hidden argument*/NULL);
		goto IL_0074;
	}

IL_0064:
	{
		// PlaySoundOnAudioTrigger(impactAudio.SoftCollisionSound);
		AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * L_14;
		L_14 = ImpactAudio_get_SoftCollisionSound_mE0F5735A62EF8A4C9184DCCC591CE20DE26A6DD6_inline((ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F *)(&___impactAudio0), /*hidden argument*/NULL);
		AudioPhysics_PlaySoundOnAudioTrigger_m6BC934537FA079B9567E243D7E47B835A18F7CD7(__this, L_14, /*hidden argument*/NULL);
	}

IL_0074:
	{
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Single Oculus.Interaction.AudioPhysics::GetObjectVelocity(Oculus.Interaction.AudioPhysics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioPhysics_GetObjectVelocity_m64C4AB360C550AC3D775970DE1A322AE2BB9E496 (AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84 * ___target0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// return target._rigidbody.velocity.sqrMagnitude;
		AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84 * L_0 = ___target0;
		NullCheck(L_0);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_1 = L_0->get__rigidbody_4();
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_4 = V_1;
		return L_4;
	}
}
// System.Void Oculus.Interaction.AudioPhysics::PlaySoundOnAudioTrigger(Oculus.Interaction.AudioTrigger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics_PlaySoundOnAudioTrigger_m6BC934537FA079B9567E243D7E47B835A18F7CD7 (AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84 * __this, AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * ___audioTrigger0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (audioTrigger != null)
		AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * L_0 = ___audioTrigger0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// audioTrigger.PlayAudio();
		AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * L_3 = ___audioTrigger0;
		NullCheck(L_3);
		AudioTrigger_PlayAudio_m3265F0528E34E0D695ED02C49ABA3F18F67BF4B0(L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics__ctor_m18E239C7611DC59C5F8F5289268A61312B0D9105 (AudioPhysics_t0E6DF2F862C6D3682C33AD574B3D63DE0DE85E84 * __this, const RuntimeMethod* method)
{
	{
		// private float _velocitySplit = 1.0f;
		__this->set__velocitySplit_6((1.0f));
		// private float _minimumVelocity = 0;
		__this->set__minimumVelocity_7((0.0f));
		// private float _timeBetweenCollisions = 0.2f;
		__this->set__timeBetweenCollisions_8((0.200000003f));
		// private bool _allowMultipleCollisions = false;
		__this->set__allowMultipleCollisions_9((bool)0);
		// private float _timeAtLastCollision = 0f;
		__this->set__timeAtLastCollision_10((0.0f));
		// protected bool _started = false;
		__this->set__started_11((bool)0);
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
// System.Void Oculus.Interaction.AudioTrigger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioTrigger_Start_mB1E39B653C812312E64A8B86D048DDA49F38D1B2 (AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4D91153F51A554F55F330AEF69766A4579378C8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A3030C93994C7904C8D0B2123C9DA2847419DA1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		// _audioSource = gameObject.GetComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_0, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		__this->set__audioSource_4(L_1);
		// Assert.IsTrue(_audioClips.Length > 0, "An AudioTrigger instance in the scene has no audio clips.");
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_2 = __this->get__audioClips_7();
		NullCheck(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		Assert_IsTrue_mA4B3C02713D80BBFBB9CD7E99B6732324C5206E3((bool)((!(((uint32_t)(((RuntimeArray*)L_2)->max_length)) <= ((uint32_t)0)))? 1 : 0), _stringLiteral5A3030C93994C7904C8D0B2123C9DA2847419DA1, /*hidden argument*/NULL);
		// for (int i = 0; i < _audioClips.Length; i++)
		V_0 = 0;
		goto IL_0045;
	}

IL_002b:
	{
		// _randomAudioClipPool.Add(_audioClips[i]);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_3 = __this->get__randomAudioClipPool_5();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_4 = __this->get__audioClips_7();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		List_1_Add_m4D91153F51A554F55F330AEF69766A4579378C8B(L_3, L_7, /*hidden argument*/List_1_Add_m4D91153F51A554F55F330AEF69766A4579378C8B_RuntimeMethod_var);
		// for (int i = 0; i < _audioClips.Length; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0045:
	{
		// for (int i = 0; i < _audioClips.Length; i++)
		int32_t L_9 = V_0;
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_10 = __this->get__audioClips_7();
		NullCheck(L_10);
		V_1 = (bool)((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))? 1 : 0);
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_002b;
		}
	}
	{
		// _audioSource.volume = _volume;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_12 = __this->get__audioSource_4();
		float L_13 = __this->get__volume_8();
		NullCheck(L_12);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_12, L_13, /*hidden argument*/NULL);
		// _audioSource.pitch = _pitch;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_14 = __this->get__audioSource_4();
		float L_15 = __this->get__pitch_10();
		NullCheck(L_14);
		AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC(L_14, L_15, /*hidden argument*/NULL);
		// _audioSource.spatialize = _spatialize;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_16 = __this->get__audioSource_4();
		bool L_17 = __this->get__spatialize_12();
		NullCheck(L_16);
		AudioSource_set_spatialize_m55AE6DFEBBB2A15A1A5A1ECFF0B8CFD38927BD41(L_16, L_17, /*hidden argument*/NULL);
		// _audioSource.loop = _loop;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_18 = __this->get__audioSource_4();
		bool L_19 = __this->get__loop_13();
		NullCheck(L_18);
		AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0(L_18, L_19, /*hidden argument*/NULL);
		// Random.InitState((int)Time.time);
		float L_20;
		L_20 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		Random_InitState_m9030E6387803E8EBAD0A5B0150254A89F8286A9C(il2cpp_codegen_cast_double_to_int<int32_t>(L_20), /*hidden argument*/NULL);
		// if (_playOnStart)
		bool L_21 = __this->get__playOnStart_15();
		V_2 = L_21;
		bool L_22 = V_2;
		if (!L_22)
		{
			goto IL_00bb;
		}
	}
	{
		// PlayAudio();
		AudioTrigger_PlayAudio_m3265F0528E34E0D695ED02C49ABA3F18F67BF4B0(__this, /*hidden argument*/NULL);
	}

IL_00bb:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.AudioTrigger::PlayAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioTrigger_PlayAudio_m3265F0528E34E0D695ED02C49ABA3F18F67BF4B0 (AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * G_B14_0 = NULL;
	{
		// if (!_audioSource.isActiveAndEnabled)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get__audioSource_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA(L_0, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		goto IL_00f5;
	}

IL_0019:
	{
		// float pick = Random.Range(0.0f, 100.0f);
		float L_3;
		L_3 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.0f), (100.0f), /*hidden argument*/NULL);
		V_0 = L_3;
		// if (_chanceToPlay < 100 && pick > _chanceToPlay)
		float L_4 = __this->get__chanceToPlay_14();
		if ((!(((float)L_4) < ((float)(100.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		float L_5 = V_0;
		float L_6 = __this->get__chanceToPlay_14();
		G_B5_0 = ((((float)L_5) > ((float)L_6))? 1 : 0);
		goto IL_0042;
	}

IL_0041:
	{
		G_B5_0 = 0;
	}

IL_0042:
	{
		V_3 = (bool)G_B5_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		// return;
		goto IL_00f5;
	}

IL_004c:
	{
		// if (_volumeRandomization.UseRandomRange == true)
		MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 * L_8 = __this->get_address_of__volumeRandomization_9();
		bool L_9;
		L_9 = MinMaxPair_get_UseRandomRange_m910C499410E123452758F06A981E10AED180FF94_inline((MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 *)L_8, /*hidden argument*/NULL);
		V_4 = L_9;
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0086;
		}
	}
	{
		// _audioSource.volume = Random.Range(_volumeRandomization.Min, _volumeRandomization.Max);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_11 = __this->get__audioSource_4();
		MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 * L_12 = __this->get_address_of__volumeRandomization_9();
		float L_13;
		L_13 = MinMaxPair_get_Min_mB1CC843B342011C66EC793F33F33342FC9CDE431_inline((MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 *)L_12, /*hidden argument*/NULL);
		MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 * L_14 = __this->get_address_of__volumeRandomization_9();
		float L_15;
		L_15 = MinMaxPair_get_Max_mB9DBB5333483D69BDE5DF747737ACBDE9D7D399B_inline((MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 *)L_14, /*hidden argument*/NULL);
		float L_16;
		L_16 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_13, L_15, /*hidden argument*/NULL);
		NullCheck(L_11);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_11, L_16, /*hidden argument*/NULL);
	}

IL_0086:
	{
		// if (_pitchRandomization.UseRandomRange == true)
		MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 * L_17 = __this->get_address_of__pitchRandomization_11();
		bool L_18;
		L_18 = MinMaxPair_get_UseRandomRange_m910C499410E123452758F06A981E10AED180FF94_inline((MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 *)L_17, /*hidden argument*/NULL);
		V_5 = L_18;
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_00c0;
		}
	}
	{
		// _audioSource.pitch = Random.Range(_pitchRandomization.Min, _pitchRandomization.Max);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_20 = __this->get__audioSource_4();
		MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 * L_21 = __this->get_address_of__pitchRandomization_11();
		float L_22;
		L_22 = MinMaxPair_get_Min_mB1CC843B342011C66EC793F33F33342FC9CDE431_inline((MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 *)L_21, /*hidden argument*/NULL);
		MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 * L_23 = __this->get_address_of__pitchRandomization_11();
		float L_24;
		L_24 = MinMaxPair_get_Max_mB9DBB5333483D69BDE5DF747737ACBDE9D7D399B_inline((MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 *)L_23, /*hidden argument*/NULL);
		float L_25;
		L_25 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_22, L_24, /*hidden argument*/NULL);
		NullCheck(L_20);
		AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC(L_20, L_25, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		// AudioClip clipToPlay = _audioClips.Length == 1 ? _audioClips[0] : RandomClipWithoutRepeat();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_26 = __this->get__audioClips_7();
		NullCheck(L_26);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))) == ((int32_t)1)))
		{
			goto IL_00d3;
		}
	}
	{
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_27;
		L_27 = AudioTrigger_RandomClipWithoutRepeat_mA9EA29464DE2216FDF9C10E1F73EAAE17AC72879(__this, /*hidden argument*/NULL);
		G_B14_0 = L_27;
		goto IL_00db;
	}

IL_00d3:
	{
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_28 = __this->get__audioClips_7();
		NullCheck(L_28);
		int32_t L_29 = 0;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		G_B14_0 = L_30;
	}

IL_00db:
	{
		V_1 = G_B14_0;
		// _audioSource.clip = clipToPlay;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_31 = __this->get__audioSource_4();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_32 = V_1;
		NullCheck(L_31);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_31, L_32, /*hidden argument*/NULL);
		// _audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_33 = __this->get__audioSource_4();
		NullCheck(L_33);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_33, /*hidden argument*/NULL);
	}

IL_00f5:
	{
		// }
		return;
	}
}
// UnityEngine.AudioClip Oculus.Interaction.AudioTrigger::RandomClipWithoutRepeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioTrigger_RandomClipWithoutRepeat_mA9EA29464DE2216FDF9C10E1F73EAAE17AC72879 (AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4D91153F51A554F55F330AEF69766A4579378C8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mEE45F80AF58DFD847597677B813703152E468678_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1C98EA9359999773111E0918F7CE4783B66413F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * V_1 = NULL;
	bool V_2 = false;
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * V_3 = NULL;
	{
		// int randomIndex = Random.Range(0, _randomAudioClipPool.Count);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_0 = __this->get__randomAudioClipPool_5();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m1C98EA9359999773111E0918F7CE4783B66413F1_inline(L_0, /*hidden argument*/List_1_get_Count_m1C98EA9359999773111E0918F7CE4783B66413F1_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// AudioClip randomClip = _randomAudioClipPool[randomIndex];
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_3 = __this->get__randomAudioClipPool_5();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_5;
		L_5 = List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_RuntimeMethod_var);
		V_1 = L_5;
		// _randomAudioClipPool.RemoveAt(randomIndex);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_6 = __this->get__randomAudioClipPool_5();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_RemoveAt_mEE45F80AF58DFD847597677B813703152E468678(L_6, L_7, /*hidden argument*/List_1_RemoveAt_mEE45F80AF58DFD847597677B813703152E468678_RuntimeMethod_var);
		// if (_previousAudioClip != null) {
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_8 = __this->get__previousAudioClip_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0051;
		}
	}
	{
		// _randomAudioClipPool.Add(_previousAudioClip);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_11 = __this->get__randomAudioClipPool_5();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_12 = __this->get__previousAudioClip_6();
		NullCheck(L_11);
		List_1_Add_m4D91153F51A554F55F330AEF69766A4579378C8B(L_11, L_12, /*hidden argument*/List_1_Add_m4D91153F51A554F55F330AEF69766A4579378C8B_RuntimeMethod_var);
	}

IL_0051:
	{
		// _previousAudioClip = randomClip;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_13 = V_1;
		__this->set__previousAudioClip_6(L_13);
		// return randomClip;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_14 = V_1;
		V_3 = L_14;
		goto IL_005c;
	}

IL_005c:
	{
		// }
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_15 = V_3;
		return L_15;
	}
}
// System.Void Oculus.Interaction.AudioTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioTrigger__ctor_m03194414F1EC06BB5057FE140ABD940908A64385 (AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA7F3A9988682FD71873AC72212E2F2A65DE06079_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private AudioSource _audioSource = null;
		__this->set__audioSource_4((AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)NULL);
		// private List<AudioClip> _randomAudioClipPool = new List<AudioClip>();
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_0 = (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *)il2cpp_codegen_object_new(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F3A9988682FD71873AC72212E2F2A65DE06079(L_0, /*hidden argument*/List_1__ctor_mA7F3A9988682FD71873AC72212E2F2A65DE06079_RuntimeMethod_var);
		__this->set__randomAudioClipPool_5(L_0);
		// private AudioClip _previousAudioClip = null;
		__this->set__previousAudioClip_6((AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)NULL);
		// private float _volume = 0.7f;
		__this->set__volume_8((0.699999988f));
		// private float _pitch = 1f;
		__this->set__pitch_10((1.0f));
		// private bool _spatialize = true;
		__this->set__spatialize_12((bool)1);
		// private bool _loop = false;
		__this->set__loop_13((bool)0);
		// private float _chanceToPlay = 100;
		__this->set__chanceToPlay_14((100.0f));
		// private bool _playOnStart = false;
		__this->set__playOnStart_15((bool)0);
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
// System.Void Oculus.Interaction.Samples.CarouselView::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarouselView_Start_mA197C37F23A9014E2A8F713AF1CB032320A81617 (CarouselView_t77A98CAF9321FDC3BF0186F229F9449402526024 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m08B75D79491A6947D8A99DE27C2EC7477C948A36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Assert.IsNotNull(_viewport);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get__viewport_4();
		IL2CPP_RUNTIME_CLASS_INIT(Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m08B75D79491A6947D8A99DE27C2EC7477C948A36(L_0, /*hidden argument*/Assert_IsNotNull_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m08B75D79491A6947D8A99DE27C2EC7477C948A36_RuntimeMethod_var);
		// Assert.IsNotNull(_content);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = __this->get__content_5();
		Assert_IsNotNull_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m08B75D79491A6947D8A99DE27C2EC7477C948A36(L_1, /*hidden argument*/Assert_IsNotNull_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m08B75D79491A6947D8A99DE27C2EC7477C948A36_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.CarouselView::ScrollRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarouselView_ScrollRight_m37F14382360AD0262FE63F0FF66772F59645F939 (CarouselView_t77A98CAF9321FDC3BF0186F229F9449402526024 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * V_2 = NULL;
	{
		// if (_content.childCount <= 1)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get__content_5();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) > ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		goto IL_0077;
	}

IL_0019:
	{
		// else if (_currentChildIndex > 0)
		int32_t L_3 = __this->get__currentChildIndex_7();
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_005c;
		}
	}
	{
		// RectTransform currentChild = GetCurrentChild();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5;
		L_5 = CarouselView_GetCurrentChild_m12E91E323C69F33FF2324FF264265C739E3A796A(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		// _content.GetChild(0).SetAsLastSibling();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_6 = __this->get__content_5();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_6, 0, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187(L_7, /*hidden argument*/NULL);
		// LayoutRebuilder.ForceRebuildLayoutImmediate(_content);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_8 = __this->get__content_5();
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585_il2cpp_TypeInfo_var);
		LayoutRebuilder_ForceRebuildLayoutImmediate_mD06D080BA3FC8111AF814FA67ED8764F8CFECC2C(L_8, /*hidden argument*/NULL);
		// ScrollToChild(currentChild, 1);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_9 = V_2;
		CarouselView_ScrollToChild_mDE76C8C70D9DDE68A09C5DEF70E97313DA248430(__this, L_9, (1.0f), /*hidden argument*/NULL);
		goto IL_006c;
	}

IL_005c:
	{
		// _currentChildIndex++;
		int32_t L_10 = __this->get__currentChildIndex_7();
		__this->set__currentChildIndex_7(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
	}

IL_006c:
	{
		// _scrollVal = Time.time;
		float L_11;
		L_11 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set__scrollVal_8(L_11);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.CarouselView::ScrollLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarouselView_ScrollLeft_m722057338A1D33FD77785B467F39FF954ED99227 (CarouselView_t77A98CAF9321FDC3BF0186F229F9449402526024 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * V_2 = NULL;
	{
		// if (_content.childCount <= 1)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get__content_5();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) > ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		goto IL_008f;
	}

IL_0019:
	{
		// else if (_currentChildIndex < _content.childCount - 1)
		int32_t L_3 = __this->get__currentChildIndex_7();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4 = __this->get__content_5();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_4, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1))))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0074;
		}
	}
	{
		// RectTransform currentChild = GetCurrentChild();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7;
		L_7 = CarouselView_GetCurrentChild_m12E91E323C69F33FF2324FF264265C739E3A796A(__this, /*hidden argument*/NULL);
		V_2 = L_7;
		// _content.GetChild(_content.childCount - 1).SetAsFirstSibling();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_8 = __this->get__content_5();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_9 = __this->get__content_5();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_8, ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_SetAsFirstSibling_mD5C02831BA6C7C3408CD491191EAF760ECB7E754(L_11, /*hidden argument*/NULL);
		// LayoutRebuilder.ForceRebuildLayoutImmediate(_content);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_12 = __this->get__content_5();
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585_il2cpp_TypeInfo_var);
		LayoutRebuilder_ForceRebuildLayoutImmediate_mD06D080BA3FC8111AF814FA67ED8764F8CFECC2C(L_12, /*hidden argument*/NULL);
		// ScrollToChild(currentChild, 1);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_13 = V_2;
		CarouselView_ScrollToChild_mDE76C8C70D9DDE68A09C5DEF70E97313DA248430(__this, L_13, (1.0f), /*hidden argument*/NULL);
		goto IL_0084;
	}

IL_0074:
	{
		// _currentChildIndex--;
		int32_t L_14 = __this->get__currentChildIndex_7();
		__this->set__currentChildIndex_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)));
	}

IL_0084:
	{
		// _scrollVal = Time.time;
		float L_15;
		L_15 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set__scrollVal_8(L_15);
	}

IL_008f:
	{
		// }
		return;
	}
}
// UnityEngine.RectTransform Oculus.Interaction.Samples.CarouselView::GetCurrentChild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * CarouselView_GetCurrentChild_m12E91E323C69F33FF2324FF264265C739E3A796A (CarouselView_t77A98CAF9321FDC3BF0186F229F9449402526024 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * V_0 = NULL;
	{
		// return _content.GetChild(_currentChildIndex) as RectTransform;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get__content_5();
		int32_t L_1 = __this->get__currentChildIndex_7();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_0, L_1, /*hidden argument*/NULL);
		V_0 = ((RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)IsInstSealed((RuntimeObject*)L_2, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var));
		goto IL_001a;
	}

IL_001a:
	{
		// }
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3 = V_0;
		return L_3;
	}
}
// System.Void Oculus.Interaction.Samples.CarouselView::ScrollToChild(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarouselView_ScrollToChild_mDE76C8C70D9DDE68A09C5DEF70E97313DA248430 (CarouselView_t77A98CAF9321FDC3BF0186F229F9449402526024 * __this, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___child0, float ___amount011, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	{
		// amount01 = Mathf.Clamp01(amount01);
		float L_0 = ___amount011;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___amount011 = L_1;
		// Vector3 viewportCenter = _viewport.TransformPoint(_viewport.rect.center);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2 = __this->get__viewport_4();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3 = __this->get__viewport_4();
		NullCheck(L_3);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4;
		L_4 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Rect_get_center_mDFC7A4AE153DCDC1D6248803381C6F36C7883707((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_2, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// Vector3 imageCenter = child.TransformPoint(child.rect.center);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_8 = ___child0;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_9 = ___child0;
		NullCheck(L_9);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_10;
		L_10 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Rect_get_center_mDFC7A4AE153DCDC1D6248803381C6F36C7883707((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_8, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		// Vector3 offset = imageCenter - viewportCenter;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_14, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		// if (offset.sqrMagnitude > float.Epsilon)
		float L_17;
		L_17 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		V_4 = (bool)((((float)L_17) > ((float)(1.40129846E-45f)))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_00ab;
		}
	}
	{
		// Vector3 targetPosition = _content.position - offset;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_19 = __this->get__content_5();
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_20, L_21, /*hidden argument*/NULL);
		V_5 = L_22;
		// float lerp = Mathf.Clamp01(_easeCurve.Evaluate(amount01));
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_23 = __this->get__easeCurve_6();
		float L_24 = ___amount011;
		NullCheck(L_23);
		float L_25;
		L_25 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_23, L_24, /*hidden argument*/NULL);
		float L_26;
		L_26 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_25, /*hidden argument*/NULL);
		V_6 = L_26;
		// _content.position = Vector3.Lerp(_content.position, targetPosition, lerp);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_27 = __this->get__content_5();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_28 = __this->get__content_5();
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_5;
		float L_31 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_29, L_30, L_31, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_27, L_32, /*hidden argument*/NULL);
	}

IL_00ab:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.CarouselView::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarouselView_Update_mD13EA1C70694B9678CDB05A852EE23672297F511 (CarouselView_t77A98CAF9321FDC3BF0186F229F9449402526024 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * V_0 = NULL;
	{
		// RectTransform currentImage = _content.GetChild(_currentChildIndex) as RectTransform;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get__content_5();
		int32_t L_1 = __this->get__currentChildIndex_7();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_0, L_1, /*hidden argument*/NULL);
		V_0 = ((RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)IsInstSealed((RuntimeObject*)L_2, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var));
		// ScrollToChild(currentImage, Time.time - _scrollVal);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3 = V_0;
		float L_4;
		L_4 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_5 = __this->get__scrollVal_8();
		CarouselView_ScrollToChild_mDE76C8C70D9DDE68A09C5DEF70E97313DA248430(__this, L_3, ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.CarouselView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarouselView__ctor_m56FC9E38D8F054574AD4874B1EE2188A62BFC8C9 (CarouselView_t77A98CAF9321FDC3BF0186F229F9449402526024 * __this, const RuntimeMethod* method)
{
	{
		// private int _currentChildIndex = 0;
		__this->set__currentChildIndex_7(0);
		// private float _scrollVal = 0;
		__this->set__scrollVal_8((0.0f));
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
// System.Void Oculus.Interaction.Samples.ColorChanger::NextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_NextColor_m54881DAC60F1E10404CBEF03D6CF611ABC808128 (ColorChanger_tAB17D273524FADE6C4DA19DCCAB5F510ECF6989A * __this, const RuntimeMethod* method)
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _lastHue = (_lastHue + 0.3f) % 1f;
		float L_0 = __this->get__lastHue_7();
		__this->set__lastHue_7((fmodf(((float)il2cpp_codegen_add((float)L_0, (float)(0.300000012f))), (1.0f))));
		// Color newColor = Color.HSVToRGB(_lastHue, 0.8f, 0.8f);
		float L_1 = __this->get__lastHue_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_HSVToRGB_m8B61783B65A70BC889424B9A64FD40D48E735FEF(L_1, (0.800000012f), (0.800000012f), /*hidden argument*/NULL);
		V_0 = L_2;
		// _targetMaterial.color = newColor;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = __this->get__targetMaterial_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = V_0;
		NullCheck(L_3);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ColorChanger::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_Save_m28D59C01E5530DBB7F5F230F865DDE205C28D50C (ColorChanger_tAB17D273524FADE6C4DA19DCCAB5F510ECF6989A * __this, const RuntimeMethod* method)
{
	{
		// _savedColor = _targetMaterial.color;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get__targetMaterial_5();
		NullCheck(L_0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821(L_0, /*hidden argument*/NULL);
		__this->set__savedColor_6(L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ColorChanger::Revert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_Revert_mE17B8EC53B0738153F6E0ADE6271CC50626D07FC (ColorChanger_tAB17D273524FADE6C4DA19DCCAB5F510ECF6989A * __this, const RuntimeMethod* method)
{
	{
		// _targetMaterial.color = _savedColor;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get__targetMaterial_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = __this->get__savedColor_6();
		NullCheck(L_0);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ColorChanger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_Start_mE034570011260FC3CE4A1707A27AA77D8383FABD (ColorChanger_tAB17D273524FADE6C4DA19DCCAB5F510ECF6989A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m472A3A05E8307EBBAFE0D6C5937F8CB0AD9B5F76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m630CDAC07C2316825382B6F38081EC2879EEE8C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Assert.IsNotNull(_target);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0 = __this->get__target_4();
		IL2CPP_RUNTIME_CLASS_INIT(Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m630CDAC07C2316825382B6F38081EC2879EEE8C4(L_0, /*hidden argument*/Assert_IsNotNull_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m630CDAC07C2316825382B6F38081EC2879EEE8C4_RuntimeMethod_var);
		// _targetMaterial = _target.material;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_1 = __this->get__target_4();
		NullCheck(L_1);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2;
		L_2 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_1, /*hidden argument*/NULL);
		__this->set__targetMaterial_5(L_2);
		// Assert.IsNotNull(_targetMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = __this->get__targetMaterial_5();
		Assert_IsNotNull_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m472A3A05E8307EBBAFE0D6C5937F8CB0AD9B5F76(L_3, /*hidden argument*/Assert_IsNotNull_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m472A3A05E8307EBBAFE0D6C5937F8CB0AD9B5F76_RuntimeMethod_var);
		// _savedColor = _targetMaterial.color;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get__targetMaterial_5();
		NullCheck(L_4);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821(L_4, /*hidden argument*/NULL);
		__this->set__savedColor_6(L_5);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ColorChanger::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_OnDestroy_m8AA67A28C20A02441FC944DC6964DB62CFDDAC82 (ColorChanger_tAB17D273524FADE6C4DA19DCCAB5F510ECF6989A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(_targetMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get__targetMaterial_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ColorChanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger__ctor_mBE6B26392266C5749843314BBE8FA69AFDF79095 (ColorChanger_tAB17D273524FADE6C4DA19DCCAB5F510ECF6989A * __this, const RuntimeMethod* method)
{
	{
		// private float _lastHue = 0;
		__this->set__lastHue_7((0.0f));
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
// System.Boolean Oculus.Interaction.Samples.CountdownTimer::get_CountdownOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CountdownTimer_get_CountdownOn_mB97175093DDA8454389179C39FCC22513EE4D0A8 (CountdownTimer_tDD91BB7F46D12C91085C089E1E9E3326B069723B * __this, const RuntimeMethod* method)
{
	{
		// get => _countdownOn;
		bool L_0 = __this->get__countdownOn_5();
		return L_0;
	}
}
// System.Void Oculus.Interaction.Samples.CountdownTimer::set_CountdownOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownTimer_set_CountdownOn_m56C907EFCE46B9AA0EEBF02E2663A4E24B4FA4CB (CountdownTimer_tDD91BB7F46D12C91085C089E1E9E3326B069723B * __this, bool ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (value)
		bool L_0 = ___value0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// if (!_countdownOn)
		bool L_2 = __this->get__countdownOn_5();
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// _countdownTimer = _countdownTime;
		float L_4 = __this->get__countdownTime_4();
		__this->set__countdownTimer_8(L_4);
	}

IL_0022:
	{
	}

IL_0023:
	{
		// _countdownOn = value;
		bool L_5 = ___value0;
		__this->set__countdownOn_5(L_5);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.CountdownTimer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownTimer_Awake_m8E2C9B2DFA438F7A38380E3BBFE01A5992B66926 (CountdownTimer_tDD91BB7F46D12C91085C089E1E9E3326B069723B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA996E89984993C1214F09508F6494D695F957301);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Assert.IsTrue(_countdownTime >= 0, "Countdown Time must be positive.");
		float L_0 = __this->get__countdownTime_4();
		IL2CPP_RUNTIME_CLASS_INIT(Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		Assert_IsTrue_mA4B3C02713D80BBFBB9CD7E99B6732324C5206E3((bool)((((int32_t)((!(((float)L_0) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralA996E89984993C1214F09508F6494D695F957301, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.CountdownTimer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownTimer_Update_m626E8DBCF0CF77E6F27DD7148CCB3E395800103B (CountdownTimer_tDD91BB7F46D12C91085C089E1E9E3326B069723B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (!_countdownOn || _countdownTimer < 0)
		bool L_0 = __this->get__countdownOn_5();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		float L_1 = __this->get__countdownTimer_8();
		G_B3_0 = ((((float)L_1) < ((float)(0.0f)))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// _progressCallback.Invoke(0);
		UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * L_3 = __this->get__progressCallback_7();
		NullCheck(L_3);
		UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E(L_3, (0.0f), /*hidden argument*/UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_RuntimeMethod_var);
		// return;
		goto IL_009e;
	}

IL_0031:
	{
		// _countdownTimer -= Time.deltaTime;
		float L_4 = __this->get__countdownTimer_8();
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set__countdownTimer_8(((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)));
		// if (_countdownTimer < 0f)
		float L_6 = __this->get__countdownTimer_8();
		V_1 = (bool)((((float)L_6) < ((float)(0.0f)))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_007f;
		}
	}
	{
		// _countdownTimer = -1f;
		__this->set__countdownTimer_8((-1.0f));
		// _callback.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_8 = __this->get__callback_6();
		NullCheck(L_8);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_8, /*hidden argument*/NULL);
		// _progressCallback.Invoke(1);
		UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * L_9 = __this->get__progressCallback_7();
		NullCheck(L_9);
		UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E(L_9, (1.0f), /*hidden argument*/UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_RuntimeMethod_var);
		// return;
		goto IL_009e;
	}

IL_007f:
	{
		// _progressCallback.Invoke(1 - _countdownTimer / _countdownTime);
		UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * L_10 = __this->get__progressCallback_7();
		float L_11 = __this->get__countdownTimer_8();
		float L_12 = __this->get__countdownTime_4();
		NullCheck(L_10);
		UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E(L_10, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)((float)L_11/(float)L_12)))), /*hidden argument*/UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_RuntimeMethod_var);
	}

IL_009e:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.CountdownTimer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownTimer__ctor_mFF5A1E57BBE55D0AF2DD01DA97C4FCCA93FCFFED (CountdownTimer_tDD91BB7F46D12C91085C089E1E9E3326B069723B * __this, const RuntimeMethod* method)
{
	{
		// private float _countdownTime = 1.0f;
		__this->set__countdownTime_4((1.0f));
		// private bool _countdownOn = false;
		__this->set__countdownOn_5((bool)0);
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
// System.Void Oculus.Interaction.Samples.EnableTargetOnStart::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableTargetOnStart_Start_m21061BE2979794399D87E86B8B2D49C44594D8A7 (EnableTargetOnStart_t8889D6C4B4233172FE2A3C3E58DE2F1611641AB0 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* V_1 = NULL;
	int32_t V_2 = 0;
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * V_3 = NULL;
	bool V_4 = false;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_5 = NULL;
	int32_t V_6 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_7 = NULL;
	{
		// if (_components != null)
		MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* L_0 = __this->get__components_4();
		V_0 = (bool)((!(((RuntimeObject*)(MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// foreach (MonoBehaviour target in _components)
		MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* L_2 = __this->get__components_4();
		V_1 = L_2;
		V_2 = 0;
		goto IL_002d;
	}

IL_001b:
	{
		// foreach (MonoBehaviour target in _components)
		MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		// target.enabled = true;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_7 = V_3;
		NullCheck(L_7);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_7, (bool)1, /*hidden argument*/NULL);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002d:
	{
		// foreach (MonoBehaviour target in _components)
		int32_t L_9 = V_2;
		MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
	}

IL_0034:
	{
		// if (_gameObjects != null)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = __this->get__gameObjects_5();
		V_4 = (bool)((!(((RuntimeObject*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0073;
		}
	}
	{
		// foreach (GameObject target in _gameObjects)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = __this->get__gameObjects_5();
		V_5 = L_13;
		V_6 = 0;
		goto IL_006a;
	}

IL_0052:
	{
		// foreach (GameObject target in _gameObjects)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = V_5;
		int32_t L_15 = V_6;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_7 = L_17;
		// target.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = V_7;
		NullCheck(L_18);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)1, /*hidden argument*/NULL);
		int32_t L_19 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_006a:
	{
		// foreach (GameObject target in _gameObjects)
		int32_t L_20 = V_6;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_21 = V_5;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_0052;
		}
	}
	{
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.EnableTargetOnStart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableTargetOnStart__ctor_m5F30383F4FCA585A14F25ED3532ED19FC137D391 (EnableTargetOnStart_t8889D6C4B4233172FE2A3C3E58DE2F1611641AB0 * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.Samples.FadeTextAfterActive::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeTextAfterActive_OnEnable_m96E3BF094AE830E03367330180CB930824DE7DB4 (FadeTextAfterActive_t64553A5A3A66DC0BC56D3397113E96D1642AD1EB * __this, const RuntimeMethod* method)
{
	{
		// _timeLeft = _fadeOutTime;
		float L_0 = __this->get__fadeOutTime_4();
		__this->set__timeLeft_6(L_0);
		// _text.fontMaterial.color = new Color(_text.color.r, _text.color.g, _text.color.b, 255);
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_1 = __this->get__text_5();
		NullCheck(L_1);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2;
		L_2 = TMP_Text_get_fontMaterial_mA58C75BFC0CDB2C835CA4536C7A1A727FCA641CF(L_1, /*hidden argument*/NULL);
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_3 = __this->get__text_5();
		NullCheck(L_3);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_3);
		float L_5 = L_4.get_r_0();
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_6 = __this->get__text_5();
		NullCheck(L_6);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_6);
		float L_8 = L_7.get_g_1();
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_9 = __this->get__text_5();
		NullCheck(L_9);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_9);
		float L_11 = L_10.get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_12), L_5, L_8, L_11, (255.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_2, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.FadeTextAfterActive::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeTextAfterActive_Update_mC33649FE160AE2C55E7A9E222D33EB86195B1306 (FadeTextAfterActive_t64553A5A3A66DC0BC56D3397113E96D1642AD1EB * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		// if (_timeLeft <= 0)
		float L_0 = __this->get__timeLeft_6();
		V_2 = (bool)((((int32_t)((!(((float)L_0) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		goto IL_0091;
	}

IL_0018:
	{
		// float percentDone = 1 - _timeLeft / _fadeOutTime;
		float L_2 = __this->get__timeLeft_6();
		float L_3 = __this->get__fadeOutTime_4();
		V_0 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)((float)L_2/(float)L_3))));
		// float alpha = Mathf.SmoothStep(1, 0, percentDone);
		float L_4 = V_0;
		float L_5;
		L_5 = Mathf_SmoothStep_m42903D75966D0858460ACDF8CB825B874725FFF6((1.0f), (0.0f), L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// _text.color = new Color(_text.color.r, _text.color.g, _text.color.b, alpha);
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_6 = __this->get__text_5();
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_7 = __this->get__text_5();
		NullCheck(L_7);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_7);
		float L_9 = L_8.get_r_0();
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_10 = __this->get__text_5();
		NullCheck(L_10);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_10);
		float L_12 = L_11.get_g_1();
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_13 = __this->get__text_5();
		NullCheck(L_13);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14;
		L_14 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_13);
		float L_15 = L_14.get_b_2();
		float L_16 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_17), L_9, L_12, L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_17);
		// _timeLeft -= Time.deltaTime;
		float L_18 = __this->get__timeLeft_6();
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set__timeLeft_6(((float)il2cpp_codegen_subtract((float)L_18, (float)L_19)));
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.FadeTextAfterActive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeTextAfterActive__ctor_m5DF6ED480CD82C3FAEDD7876BB1B48094DB152BB (FadeTextAfterActive_t64553A5A3A66DC0BC56D3397113E96D1642AD1EB * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.Samples.HideHandVisualOnGrab::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideHandVisualOnGrab_Start_m73DE022F0906AFCDD8C1F0E4A15049114D9BFDD9 (HideHandVisualOnGrab_t3BFB67203DE710975A7593C3776BCF49CA5D2CC3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisHandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E_m28CB8A3CA65EC1333325307FD925D8F8096A68DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Assert.IsNotNull(_handVisual);
		HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E * L_0 = __this->get__handVisual_5();
		IL2CPP_RUNTIME_CLASS_INIT(Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisHandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E_m28CB8A3CA65EC1333325307FD925D8F8096A68DE(L_0, /*hidden argument*/Assert_IsNotNull_TisHandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E_m28CB8A3CA65EC1333325307FD925D8F8096A68DE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.HideHandVisualOnGrab::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideHandVisualOnGrab_Update_m0CC8B7253A41896923FEB8F2E713A8BAB930FCCC (HideHandVisualOnGrab_t3BFB67203DE710975A7593C3776BCF49CA5D2CC3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisShouldHideHandOnGrab_tBAB0E4F5C7010765C850D4EB572D73D237A41AB6_mF00A165AEB1B14D5B581FE830DAEC87EA29AC4DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactor_2_get_SelectedInteractable_m0C2818658FABEC6333463FC4FD6F3EE5BB31AA04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactor_2_get_State_m90651D75A2B476AB6B28B329D20436E36F6DCABD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	ShouldHideHandOnGrab_tBAB0E4F5C7010765C850D4EB572D73D237A41AB6 * V_3 = NULL;
	bool V_4 = false;
	HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8 * G_B3_0 = NULL;
	HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8 * G_B2_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B4_0 = NULL;
	{
		// GameObject shouldHideHandComponent = null;
		V_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
		// if (_handGrabInteractor.State == InteractorState.Select)
		HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3 * L_0 = __this->get__handGrabInteractor_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Interactor_2_get_State_m90651D75A2B476AB6B28B329D20436E36F6DCABD(L_0, /*hidden argument*/Interactor_2_get_State_m90651D75A2B476AB6B28B329D20436E36F6DCABD_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// shouldHideHandComponent = _handGrabInteractor.SelectedInteractable?.gameObject;
		HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3 * L_3 = __this->get__handGrabInteractor_4();
		NullCheck(L_3);
		HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8 * L_4;
		L_4 = Interactor_2_get_SelectedInteractable_m0C2818658FABEC6333463FC4FD6F3EE5BB31AA04_inline(L_3, /*hidden argument*/Interactor_2_get_SelectedInteractable_m0C2818658FABEC6333463FC4FD6F3EE5BB31AA04_RuntimeMethod_var);
		HandGrabInteractable_t72EB063FD42B4E96EF74342ADD375FC62E3411D8 * L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0028;
		}
	}
	{
		G_B4_0 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)(NULL));
		goto IL_002d;
	}

IL_0028:
	{
		NullCheck(G_B3_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(G_B3_0, /*hidden argument*/NULL);
		G_B4_0 = L_6;
	}

IL_002d:
	{
		V_0 = G_B4_0;
	}

IL_002f:
	{
		// if (shouldHideHandComponent)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		// if (shouldHideHandComponent.TryGetComponent(out ShouldHideHandOnGrab component))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = GameObject_TryGetComponent_TisShouldHideHandOnGrab_tBAB0E4F5C7010765C850D4EB572D73D237A41AB6_mF00A165AEB1B14D5B581FE830DAEC87EA29AC4DE(L_10, (ShouldHideHandOnGrab_tBAB0E4F5C7010765C850D4EB572D73D237A41AB6 **)(&V_3), /*hidden argument*/GameObject_TryGetComponent_TisShouldHideHandOnGrab_tBAB0E4F5C7010765C850D4EB572D73D237A41AB6_mF00A165AEB1B14D5B581FE830DAEC87EA29AC4DE_RuntimeMethod_var);
		V_4 = L_11;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0057;
		}
	}
	{
		// _handVisual.ForceOffVisibility = true;
		HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E * L_13 = __this->get__handVisual_5();
		NullCheck(L_13);
		HandVisual_set_ForceOffVisibility_mFA2E933400B4A92EA1366FC8996C9F85E85F26C0_inline(L_13, (bool)1, /*hidden argument*/NULL);
	}

IL_0057:
	{
		goto IL_0069;
	}

IL_005a:
	{
		// _handVisual.ForceOffVisibility = false;
		HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E * L_14 = __this->get__handVisual_5();
		NullCheck(L_14);
		HandVisual_set_ForceOffVisibility_mFA2E933400B4A92EA1366FC8996C9F85E85F26C0_inline(L_14, (bool)0, /*hidden argument*/NULL);
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.HideHandVisualOnGrab::InjectAll(Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandVisual)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideHandVisualOnGrab_InjectAll_mA080DB825121E17A8C619903EB62BD544EE4B4A5 (HideHandVisualOnGrab_t3BFB67203DE710975A7593C3776BCF49CA5D2CC3 * __this, HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3 * ___handGrabInteractor0, HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E * ___handVisual1, const RuntimeMethod* method)
{
	{
		// InjectHandGrabInteractor(handGrabInteractor);
		HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3 * L_0 = ___handGrabInteractor0;
		HideHandVisualOnGrab_InjectHandGrabInteractor_m28CB9947052365BFED3E55C0ACEA180E293223C5(__this, L_0, /*hidden argument*/NULL);
		// InjectHandVisual(handVisual);
		HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E * L_1 = ___handVisual1;
		HideHandVisualOnGrab_InjectHandVisual_m43EE82DAC4FAA337516F1614A37EDA001DAD844C(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.HideHandVisualOnGrab::InjectHandGrabInteractor(Oculus.Interaction.HandPosing.HandGrabInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideHandVisualOnGrab_InjectHandGrabInteractor_m28CB9947052365BFED3E55C0ACEA180E293223C5 (HideHandVisualOnGrab_t3BFB67203DE710975A7593C3776BCF49CA5D2CC3 * __this, HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3 * ___handGrabInteractor0, const RuntimeMethod* method)
{
	{
		// _handGrabInteractor = handGrabInteractor;
		HandGrabInteractor_tBDD694F52AE9FC29B9950705F8FE81DAC01BA2A3 * L_0 = ___handGrabInteractor0;
		__this->set__handGrabInteractor_4(L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.HideHandVisualOnGrab::InjectHandVisual(Oculus.Interaction.HandVisual)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideHandVisualOnGrab_InjectHandVisual_m43EE82DAC4FAA337516F1614A37EDA001DAD844C (HideHandVisualOnGrab_t3BFB67203DE710975A7593C3776BCF49CA5D2CC3 * __this, HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E * ___handVisual0, const RuntimeMethod* method)
{
	{
		// _handVisual = handVisual;
		HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E * L_0 = ___handVisual0;
		__this->set__handVisual_5(L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.HideHandVisualOnGrab::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideHandVisualOnGrab__ctor_m06EBD96E47E1500AB3D8DA5A3FB2A362F299DB22 (HideHandVisualOnGrab_t3BFB67203DE710975A7593C3776BCF49CA5D2CC3 * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: Oculus.Interaction.ImpactAudio
IL2CPP_EXTERN_C void ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F_marshal_pinvoke(const ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F& unmarshaled, ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F_marshaled_pinvoke& marshaled)
{
	Exception_t* ____hardCollisionSound_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_hardCollisionSound' of type 'ImpactAudio': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____hardCollisionSound_0Exception, NULL);
}
IL2CPP_EXTERN_C void ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F_marshal_pinvoke_back(const ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F_marshaled_pinvoke& marshaled, ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F& unmarshaled)
{
	Exception_t* ____hardCollisionSound_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_hardCollisionSound' of type 'ImpactAudio': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____hardCollisionSound_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.ImpactAudio
IL2CPP_EXTERN_C void ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F_marshal_pinvoke_cleanup(ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Oculus.Interaction.ImpactAudio
IL2CPP_EXTERN_C void ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F_marshal_com(const ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F& unmarshaled, ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F_marshaled_com& marshaled)
{
	Exception_t* ____hardCollisionSound_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_hardCollisionSound' of type 'ImpactAudio': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____hardCollisionSound_0Exception, NULL);
}
IL2CPP_EXTERN_C void ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F_marshal_com_back(const ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F_marshaled_com& marshaled, ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F& unmarshaled)
{
	Exception_t* ____hardCollisionSound_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_hardCollisionSound' of type 'ImpactAudio': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____hardCollisionSound_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.ImpactAudio
IL2CPP_EXTERN_C void ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F_marshal_com_cleanup(ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F_marshaled_com& marshaled)
{
}
// Oculus.Interaction.AudioTrigger Oculus.Interaction.ImpactAudio::get_HardCollisionSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * ImpactAudio_get_HardCollisionSound_m64F3AEB89D81BF3A2C50F38390AA11E1E09AA937 (ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F * __this, const RuntimeMethod* method)
{
	{
		// public AudioTrigger HardCollisionSound => _hardCollisionSound;
		AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * L_0 = __this->get__hardCollisionSound_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * ImpactAudio_get_HardCollisionSound_m64F3AEB89D81BF3A2C50F38390AA11E1E09AA937_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F * _thisAdjusted = reinterpret_cast<ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F *>(__this + _offset);
	AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * _returnValue;
	_returnValue = ImpactAudio_get_HardCollisionSound_m64F3AEB89D81BF3A2C50F38390AA11E1E09AA937_inline(_thisAdjusted, method);
	return _returnValue;
}
// Oculus.Interaction.AudioTrigger Oculus.Interaction.ImpactAudio::get_SoftCollisionSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * ImpactAudio_get_SoftCollisionSound_mE0F5735A62EF8A4C9184DCCC591CE20DE26A6DD6 (ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F * __this, const RuntimeMethod* method)
{
	{
		// public AudioTrigger SoftCollisionSound => _softCollisionSound;
		AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * L_0 = __this->get__softCollisionSound_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * ImpactAudio_get_SoftCollisionSound_mE0F5735A62EF8A4C9184DCCC591CE20DE26A6DD6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F * _thisAdjusted = reinterpret_cast<ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F *>(__this + _offset);
	AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * _returnValue;
	_returnValue = ImpactAudio_get_SoftCollisionSound_mE0F5735A62EF8A4C9184DCCC591CE20DE26A6DD6_inline(_thisAdjusted, method);
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
// System.Void Oculus.Interaction.Samples.LookAtTarget::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtTarget_Start_m2C64C3CEE908C59F95A1A78BF5C8D9AEAEA9C592 (LookAtTarget_t321B379F9BAC9086781C65D6E21FDA3E7C475F60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mA85DE49E66654AC5B621D2709476E0A44DD6500E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Assert.IsNotNull(_toRotate);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get__toRotate_4();
		IL2CPP_RUNTIME_CLASS_INIT(Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mA85DE49E66654AC5B621D2709476E0A44DD6500E(L_0, /*hidden argument*/Assert_IsNotNull_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mA85DE49E66654AC5B621D2709476E0A44DD6500E_RuntimeMethod_var);
		// Assert.IsNotNull(_target);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get__target_5();
		Assert_IsNotNull_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mA85DE49E66654AC5B621D2709476E0A44DD6500E(L_1, /*hidden argument*/Assert_IsNotNull_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mA85DE49E66654AC5B621D2709476E0A44DD6500E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.LookAtTarget::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtTarget_Update_m710C3B0D07EFD19B7693141CC2C6F49A2DB96905 (LookAtTarget_t321B379F9BAC9086781C65D6E21FDA3E7C475F60 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 dirToTarget = (_target.position - _toRotate.position).normalized;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get__target_5();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get__toRotate_4();
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_5;
		// _toRotate.LookAt(_toRotate.position - dirToTarget, Vector3.up);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get__toRotate_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get__toRotate_4();
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_8, L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_LookAt_m6BB4B39BB829A451C2F63215361D27650AA24D8C(L_6, L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.LookAtTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtTarget__ctor_mEC58826AB9D9D78A95A89ED34B81E0A9633A3A35 (LookAtTarget_t321B379F9BAC9086781C65D6E21FDA3E7C475F60 * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: Oculus.Interaction.MinMaxPair
IL2CPP_EXTERN_C void MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95_marshal_pinvoke(const MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95& unmarshaled, MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95_marshaled_pinvoke& marshaled)
{
	marshaled.____useRandomRange_0 = static_cast<int32_t>(unmarshaled.get__useRandomRange_0());
	marshaled.____min_1 = unmarshaled.get__min_1();
	marshaled.____max_2 = unmarshaled.get__max_2();
}
IL2CPP_EXTERN_C void MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95_marshal_pinvoke_back(const MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95_marshaled_pinvoke& marshaled, MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95& unmarshaled)
{
	bool unmarshaled__useRandomRange_temp_0 = false;
	unmarshaled__useRandomRange_temp_0 = static_cast<bool>(marshaled.____useRandomRange_0);
	unmarshaled.set__useRandomRange_0(unmarshaled__useRandomRange_temp_0);
	float unmarshaled__min_temp_1 = 0.0f;
	unmarshaled__min_temp_1 = marshaled.____min_1;
	unmarshaled.set__min_1(unmarshaled__min_temp_1);
	float unmarshaled__max_temp_2 = 0.0f;
	unmarshaled__max_temp_2 = marshaled.____max_2;
	unmarshaled.set__max_2(unmarshaled__max_temp_2);
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.MinMaxPair
IL2CPP_EXTERN_C void MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95_marshal_pinvoke_cleanup(MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Oculus.Interaction.MinMaxPair
IL2CPP_EXTERN_C void MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95_marshal_com(const MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95& unmarshaled, MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95_marshaled_com& marshaled)
{
	marshaled.____useRandomRange_0 = static_cast<int32_t>(unmarshaled.get__useRandomRange_0());
	marshaled.____min_1 = unmarshaled.get__min_1();
	marshaled.____max_2 = unmarshaled.get__max_2();
}
IL2CPP_EXTERN_C void MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95_marshal_com_back(const MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95_marshaled_com& marshaled, MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95& unmarshaled)
{
	bool unmarshaled__useRandomRange_temp_0 = false;
	unmarshaled__useRandomRange_temp_0 = static_cast<bool>(marshaled.____useRandomRange_0);
	unmarshaled.set__useRandomRange_0(unmarshaled__useRandomRange_temp_0);
	float unmarshaled__min_temp_1 = 0.0f;
	unmarshaled__min_temp_1 = marshaled.____min_1;
	unmarshaled.set__min_1(unmarshaled__min_temp_1);
	float unmarshaled__max_temp_2 = 0.0f;
	unmarshaled__max_temp_2 = marshaled.____max_2;
	unmarshaled.set__max_2(unmarshaled__max_temp_2);
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.MinMaxPair
IL2CPP_EXTERN_C void MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95_marshal_com_cleanup(MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95_marshaled_com& marshaled)
{
}
// System.Boolean Oculus.Interaction.MinMaxPair::get_UseRandomRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MinMaxPair_get_UseRandomRange_m910C499410E123452758F06A981E10AED180FF94 (MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 * __this, const RuntimeMethod* method)
{
	{
		// public bool UseRandomRange => _useRandomRange;
		bool L_0 = __this->get__useRandomRange_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool MinMaxPair_get_UseRandomRange_m910C499410E123452758F06A981E10AED180FF94_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 * _thisAdjusted = reinterpret_cast<MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 *>(__this + _offset);
	bool _returnValue;
	_returnValue = MinMaxPair_get_UseRandomRange_m910C499410E123452758F06A981E10AED180FF94_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single Oculus.Interaction.MinMaxPair::get_Min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxPair_get_Min_mB1CC843B342011C66EC793F33F33342FC9CDE431 (MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 * __this, const RuntimeMethod* method)
{
	{
		// public float Min => _min;
		float L_0 = __this->get__min_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float MinMaxPair_get_Min_mB1CC843B342011C66EC793F33F33342FC9CDE431_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 * _thisAdjusted = reinterpret_cast<MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 *>(__this + _offset);
	float _returnValue;
	_returnValue = MinMaxPair_get_Min_mB1CC843B342011C66EC793F33F33342FC9CDE431_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single Oculus.Interaction.MinMaxPair::get_Max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxPair_get_Max_mB9DBB5333483D69BDE5DF747737ACBDE9D7D399B (MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 * __this, const RuntimeMethod* method)
{
	{
		// public float Max => _max;
		float L_0 = __this->get__max_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float MinMaxPair_get_Max_mB9DBB5333483D69BDE5DF747737ACBDE9D7D399B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 * _thisAdjusted = reinterpret_cast<MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 *>(__this + _offset);
	float _returnValue;
	_returnValue = MinMaxPair_get_Max_mB9DBB5333483D69BDE5DF747737ACBDE9D7D399B_inline(_thisAdjusted, method);
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
// System.Void Oculus.Interaction.Samples.PoseUseSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUseSample_Start_m1F6E33DD2F1C3DECA3ADC1F3BEAA13A302FCCD0C (PoseUseSample_t5F67B23F2A56359B4A89978FD7DF852C17C5546A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m255309575EBBBA3AB5D2CFD28F82585AC2526FDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_m80991F175CE468C274C70C04833DFBE4D331A71D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CStartU3Eb__0_mD8522E04F31A7F9582C1BCFD9863726D235E9760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CStartU3Eb__1_mB74D7C12A6F4D7970B557D2C1FC4BEF383E1FF24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t217CDA7E0E60088E9A3310535A9A2450FAC81405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass4_0_t217CDA7E0E60088E9A3310535A9A2450FAC81405 * V_1 = NULL;
	bool V_2 = false;
	{
		// _poseActiveVisuals = new GameObject[_poses.Length];
		ActiveStateSelectorU5BU5D_tE574AE6A6896557335C43BD170E2D639639E1B72* L_0 = __this->get__poses_4();
		NullCheck(L_0);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		__this->set__poseActiveVisuals_7(L_1);
		// for (int i = 0; i < _poses.Length; i++)
		V_0 = 0;
		goto IL_00c6;
	}

IL_001b:
	{
		U3CU3Ec__DisplayClass4_0_t217CDA7E0E60088E9A3310535A9A2450FAC81405 * L_2 = (U3CU3Ec__DisplayClass4_0_t217CDA7E0E60088E9A3310535A9A2450FAC81405 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t217CDA7E0E60088E9A3310535A9A2450FAC81405_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_m2BBA05A8B2836797AF2F78EB0FE8DA2608FCBBAE(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		U3CU3Ec__DisplayClass4_0_t217CDA7E0E60088E9A3310535A9A2450FAC81405 * L_3 = V_1;
		NullCheck(L_3);
		L_3->set_U3CU3E4__this_1(__this);
		// _poseActiveVisuals[i] = Instantiate(_poseActiveVisualPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = __this->get__poseActiveVisuals_7();
		int32_t L_5 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get__poseActiveVisualPrefab_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_7);
		// _poseActiveVisuals[i].GetComponentInChildren<TextMeshPro>().text = _poses[i].name;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = __this->get__poseActiveVisuals_7();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_12;
		L_12 = GameObject_GetComponentInChildren_TisTextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_m80991F175CE468C274C70C04833DFBE4D331A71D(L_11, /*hidden argument*/GameObject_GetComponentInChildren_TisTextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4_m80991F175CE468C274C70C04833DFBE4D331A71D_RuntimeMethod_var);
		ActiveStateSelectorU5BU5D_tE574AE6A6896557335C43BD170E2D639639E1B72* L_13 = __this->get__poses_4();
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		ActiveStateSelector_t51C3BFDADBBFB1B4F82C6AB8B4A9334BEDDDB3C6 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		String_t* L_17;
		L_17 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_16, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, L_17);
		// _poseActiveVisuals[i].GetComponentInChildren<ParticleSystemRenderer>().material = _onSelectIcons[i];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_18 = __this->get__poseActiveVisuals_7();
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_22;
		L_22 = GameObject_GetComponentInChildren_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m255309575EBBBA3AB5D2CFD28F82585AC2526FDA(L_21, /*hidden argument*/GameObject_GetComponentInChildren_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m255309575EBBBA3AB5D2CFD28F82585AC2526FDA_RuntimeMethod_var);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_23 = __this->get__onSelectIcons_5();
		int32_t L_24 = V_0;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_22);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_22, L_26, /*hidden argument*/NULL);
		// _poseActiveVisuals[i].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_27 = __this->get__poseActiveVisuals_7();
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_30, (bool)0, /*hidden argument*/NULL);
		// int poseNumber = i;
		U3CU3Ec__DisplayClass4_0_t217CDA7E0E60088E9A3310535A9A2450FAC81405 * L_31 = V_1;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		L_31->set_poseNumber_0(L_32);
		// _poses[i].WhenSelected += () => ShowVisuals(poseNumber);
		ActiveStateSelectorU5BU5D_tE574AE6A6896557335C43BD170E2D639639E1B72* L_33 = __this->get__poses_4();
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		ActiveStateSelector_t51C3BFDADBBFB1B4F82C6AB8B4A9334BEDDDB3C6 * L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		U3CU3Ec__DisplayClass4_0_t217CDA7E0E60088E9A3310535A9A2450FAC81405 * L_37 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_38 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_38, L_37, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3CStartU3Eb__0_mD8522E04F31A7F9582C1BCFD9863726D235E9760_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_36);
		ActiveStateSelector_add_WhenSelected_m98AD05DC72FBC5444A31E04F20E542CC6D68EC52(L_36, L_38, /*hidden argument*/NULL);
		// _poses[i].WhenUnselected += () => HideVisuals(poseNumber);
		ActiveStateSelectorU5BU5D_tE574AE6A6896557335C43BD170E2D639639E1B72* L_39 = __this->get__poses_4();
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		ActiveStateSelector_t51C3BFDADBBFB1B4F82C6AB8B4A9334BEDDDB3C6 * L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		U3CU3Ec__DisplayClass4_0_t217CDA7E0E60088E9A3310535A9A2450FAC81405 * L_43 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_44 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_44, L_43, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3CStartU3Eb__1_mB74D7C12A6F4D7970B557D2C1FC4BEF383E1FF24_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_42);
		ActiveStateSelector_add_WhenUnselected_m0C82C3C7ADFCE9282070E0C4033912C775762476(L_42, L_44, /*hidden argument*/NULL);
		// for (int i = 0; i < _poses.Length; i++)
		int32_t L_45 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_00c6:
	{
		// for (int i = 0; i < _poses.Length; i++)
		int32_t L_46 = V_0;
		ActiveStateSelectorU5BU5D_tE574AE6A6896557335C43BD170E2D639639E1B72* L_47 = __this->get__poses_4();
		NullCheck(L_47);
		V_2 = (bool)((((int32_t)L_46) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length)))))? 1 : 0);
		bool L_48 = V_2;
		if (L_48)
		{
			goto IL_001b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.PoseUseSample::ShowVisuals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUseSample_ShowVisuals_m286414458B4AE0509F982C3A6CF6511B5FBA29B2 (PoseUseSample_t5F67B23F2A56359B4A89978FD7DF852C17C5546A * __this, int32_t ___poseNumber0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisHandRef_tA7E4A60786B2D1BCE6D014EE0EC0DB85EFA46109_m33FE23F7F7A2AFA52FEFFBA52E5674424DDCCBCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisOVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517_mCD0D2DA6EF2EE7BAF6D2611A748177C0E8894A31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	HandRefU5BU5D_tAEAD2F0AD5C1FBFB99C3434574E41678929407D0* V_2 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	HandRefU5BU5D_tAEAD2F0AD5C1FBFB99C3434574E41678929407D0* V_4 = NULL;
	int32_t V_5 = 0;
	HandRef_tA7E4A60786B2D1BCE6D014EE0EC0DB85EFA46109 * V_6 = NULL;
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		// var centerEyePos = FindObjectOfType<OVRCameraRig>().centerEyeAnchor.position;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517 * L_0;
		L_0 = Object_FindObjectOfType_TisOVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517_mCD0D2DA6EF2EE7BAF6D2611A748177C0E8894A31(/*hidden argument*/Object_FindObjectOfType_TisOVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517_mCD0D2DA6EF2EE7BAF6D2611A748177C0E8894A31_RuntimeMethod_var);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = OVRCameraRig_get_centerEyeAnchor_mC0875856CE4EBA9D0867E69A1A05DE40A443E1FF_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Vector3 spawnSpot = centerEyePos + FindObjectOfType<OVRCameraRig>().centerEyeAnchor.forward;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517 * L_4;
		L_4 = Object_FindObjectOfType_TisOVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517_mCD0D2DA6EF2EE7BAF6D2611A748177C0E8894A31(/*hidden argument*/Object_FindObjectOfType_TisOVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517_mCD0D2DA6EF2EE7BAF6D2611A748177C0E8894A31_RuntimeMethod_var);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = OVRCameraRig_get_centerEyeAnchor_mC0875856CE4EBA9D0867E69A1A05DE40A443E1FF_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_3, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// _poseActiveVisuals[poseNumber].transform.position = spawnSpot;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = __this->get__poseActiveVisuals_7();
		int32_t L_9 = ___poseNumber0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_1;
		NullCheck(L_12);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_12, L_13, /*hidden argument*/NULL);
		// _poseActiveVisuals[poseNumber].transform.LookAt(2 * _poseActiveVisuals[poseNumber].transform.position - centerEyePos);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = __this->get__poseActiveVisuals_7();
		int32_t L_15 = ___poseNumber0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_19 = __this->get__poseActiveVisuals_7();
		int32_t L_20 = ___poseNumber0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((2.0f), L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA(L_18, L_27, /*hidden argument*/NULL);
		// var hands = _poses[poseNumber].GetComponents<HandRef>();
		ActiveStateSelectorU5BU5D_tE574AE6A6896557335C43BD170E2D639639E1B72* L_28 = __this->get__poses_4();
		int32_t L_29 = ___poseNumber0;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		ActiveStateSelector_t51C3BFDADBBFB1B4F82C6AB8B4A9334BEDDDB3C6 * L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_31);
		HandRefU5BU5D_tAEAD2F0AD5C1FBFB99C3434574E41678929407D0* L_32;
		L_32 = Component_GetComponents_TisHandRef_tA7E4A60786B2D1BCE6D014EE0EC0DB85EFA46109_m33FE23F7F7A2AFA52FEFFBA52E5674424DDCCBCF(L_31, /*hidden argument*/Component_GetComponents_TisHandRef_tA7E4A60786B2D1BCE6D014EE0EC0DB85EFA46109_m33FE23F7F7A2AFA52FEFFBA52E5674424DDCCBCF_RuntimeMethod_var);
		V_2 = L_32;
		// Vector3 visualsPos = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_3 = L_33;
		// foreach (var hand in hands)
		HandRefU5BU5D_tAEAD2F0AD5C1FBFB99C3434574E41678929407D0* L_34 = V_2;
		V_4 = L_34;
		V_5 = 0;
		goto IL_00f9;
	}

IL_008d:
	{
		// foreach (var hand in hands)
		HandRefU5BU5D_tAEAD2F0AD5C1FBFB99C3434574E41678929407D0* L_35 = V_4;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		HandRef_tA7E4A60786B2D1BCE6D014EE0EC0DB85EFA46109 * L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_6 = L_38;
		// hand.GetRootPose(out Pose wristPose);
		HandRef_tA7E4A60786B2D1BCE6D014EE0EC0DB85EFA46109 * L_39 = V_6;
		NullCheck(L_39);
		bool L_40;
		L_40 = HandRef_GetRootPose_mDAFFDB8085531C24C569DF17CDBD1C422C25BCFE(L_39, (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)(&V_7), /*hidden argument*/NULL);
		// Vector3 forward = hand.Handedness == Handedness.Left ? wristPose.right : -wristPose.right;
		HandRef_tA7E4A60786B2D1BCE6D014EE0EC0DB85EFA46109 * L_41 = V_6;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = HandRef_get_Handedness_m59EAD614B03AEDBD56E156078713CAB0D38D9B98(L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_00b6;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Pose_get_right_mEB40E0FF7EC4D4DD947D7FEE9139F5558D4BFA68((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)(&V_7), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_43, /*hidden argument*/NULL);
		G_B4_0 = L_44;
		goto IL_00bd;
	}

IL_00b6:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Pose_get_right_mEB40E0FF7EC4D4DD947D7FEE9139F5558D4BFA68((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)(&V_7), /*hidden argument*/NULL);
		G_B4_0 = L_45;
	}

IL_00bd:
	{
		V_8 = G_B4_0;
		// visualsPos += wristPose.position + forward * .15f + Vector3.up * .02f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = V_3;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_47 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48 = L_47.get_position_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_49, (0.150000006f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_48, L_50, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_52, (0.0199999996f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_51, L_53, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_46, L_54, /*hidden argument*/NULL);
		V_3 = L_55;
		int32_t L_56 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_00f9:
	{
		// foreach (var hand in hands)
		int32_t L_57 = V_5;
		HandRefU5BU5D_tAEAD2F0AD5C1FBFB99C3434574E41678929407D0* L_58 = V_4;
		NullCheck(L_58);
		if ((((int32_t)L_57) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length))))))
		{
			goto IL_008d;
		}
	}
	{
		// _poseActiveVisuals[poseNumber].transform.position = visualsPos / hands.Length;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_59 = __this->get__poseActiveVisuals_7();
		int32_t L_60 = ___poseNumber0;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_62);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_62, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64 = V_3;
		HandRefU5BU5D_tAEAD2F0AD5C1FBFB99C3434574E41678929407D0* L_65 = V_2;
		NullCheck(L_65);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		L_66 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_64, ((float)((float)((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length))))), /*hidden argument*/NULL);
		NullCheck(L_63);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_63, L_66, /*hidden argument*/NULL);
		// _poseActiveVisuals[poseNumber].gameObject.SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_67 = __this->get__poseActiveVisuals_7();
		int32_t L_68 = ___poseNumber0;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_70);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71;
		L_71 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_70, /*hidden argument*/NULL);
		NullCheck(L_71);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_71, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.PoseUseSample::HideVisuals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUseSample_HideVisuals_m335D521F571F12C7DDBECDB5BDD2AD46119DFD80 (PoseUseSample_t5F67B23F2A56359B4A89978FD7DF852C17C5546A * __this, int32_t ___poseNumber0, const RuntimeMethod* method)
{
	{
		// _poseActiveVisuals[poseNumber].gameObject.SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get__poseActiveVisuals_7();
		int32_t L_1 = ___poseNumber0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.PoseUseSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUseSample__ctor_mFD7DBC39C08094F81451F875A800EA9BD7B2085D (PoseUseSample_t5F67B23F2A56359B4A89978FD7DF852C17C5546A * __this, const RuntimeMethod* method)
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
// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.RespawnOnDrop::get_WhenRespawned()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * RespawnOnDrop_get_WhenRespawned_m54CEB5AD37419444F2B8939B288E0B8C62A185F3 (RespawnOnDrop_tDE333DF978DB0B142E5DF10D17651CDDBC0DD583 * __this, const RuntimeMethod* method)
{
	{
		// public UnityEvent WhenRespawned => _whenRespawned;
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get__whenRespawned_5();
		return L_0;
	}
}
// System.Void Oculus.Interaction.Samples.RespawnOnDrop::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespawnOnDrop_OnEnable_m31D21C5E8B10FF71F23303E2E8DE94BBAEDB9771 (RespawnOnDrop_tDE333DF978DB0B142E5DF10D17651CDDBC0DD583 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisTwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD_m66FE97365814F31124DE1FBD3DCFFA3F3AFB5308_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _initialPosition = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		__this->set__initialPosition_6(L_1);
		// _initialRotation = transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_2, /*hidden argument*/NULL);
		__this->set__initialRotation_7(L_3);
		// _initialScale = transform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_4, /*hidden argument*/NULL);
		__this->set__initialScale_8(L_5);
		// _freeTransformers = GetComponents<TwoGrabFreeTransformer>();
		TwoGrabFreeTransformerU5BU5D_tC630549403FDD2FF20D841CF605013CA698B5523* L_6;
		L_6 = Component_GetComponents_TisTwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD_m66FE97365814F31124DE1FBD3DCFFA3F3AFB5308(__this, /*hidden argument*/Component_GetComponents_TisTwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD_m66FE97365814F31124DE1FBD3DCFFA3F3AFB5308_RuntimeMethod_var);
		__this->set__freeTransformers_9(L_6);
		// _rigidBody = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_7;
		L_7 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set__rigidBody_10(L_7);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.RespawnOnDrop::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespawnOnDrop_Update_m355716103D239A66A0C8E687F73F0B4FFA8B979F (RespawnOnDrop_tDE333DF978DB0B142E5DF10D17651CDDBC0DD583 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	TwoGrabFreeTransformerU5BU5D_tC630549403FDD2FF20D841CF605013CA698B5523* V_2 = NULL;
	int32_t V_3 = 0;
	TwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD * V_4 = NULL;
	{
		// if (transform.position.y < _yThresholdForRespawn)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		float L_3 = __this->get__yThresholdForRespawn_4();
		V_0 = (bool)((((float)L_2) < ((float)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		// transform.position = _initialPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = __this->get__initialPosition_6();
		NullCheck(L_5);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_6, /*hidden argument*/NULL);
		// transform.rotation = _initialRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8 = __this->get__initialRotation_7();
		NullCheck(L_7);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_7, L_8, /*hidden argument*/NULL);
		// transform.localScale = _initialScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get__initialScale_8();
		NullCheck(L_9);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_9, L_10, /*hidden argument*/NULL);
		// if (_rigidBody)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_11 = __this->get__rigidBody_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_008a;
		}
	}
	{
		// _rigidBody.velocity = Vector3.zero;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_14 = __this->get__rigidBody_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_14);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_14, L_15, /*hidden argument*/NULL);
		// _rigidBody.angularVelocity = Vector3.zero;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_16 = __this->get__rigidBody_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_16);
		Rigidbody_set_angularVelocity_m3A40B7F195E9E217AE29A0964D7E7540E2E23080(L_16, L_17, /*hidden argument*/NULL);
	}

IL_008a:
	{
		// foreach (var freeTransformer in _freeTransformers)
		TwoGrabFreeTransformerU5BU5D_tC630549403FDD2FF20D841CF605013CA698B5523* L_18 = __this->get__freeTransformers_9();
		V_2 = L_18;
		V_3 = 0;
		goto IL_00a9;
	}

IL_0096:
	{
		// foreach (var freeTransformer in _freeTransformers)
		TwoGrabFreeTransformerU5BU5D_tC630549403FDD2FF20D841CF605013CA698B5523* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		TwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_4 = L_22;
		// freeTransformer.MarkAsBaseScale();
		TwoGrabFreeTransformer_t7C9EDC5198768A3CF95761535DD7B8415F906FFD * L_23 = V_4;
		NullCheck(L_23);
		TwoGrabFreeTransformer_MarkAsBaseScale_m8A0E59622DABEB9E4B005F48FB3BF5C80FDFE5E8(L_23, /*hidden argument*/NULL);
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00a9:
	{
		// foreach (var freeTransformer in _freeTransformers)
		int32_t L_25 = V_3;
		TwoGrabFreeTransformerU5BU5D_tC630549403FDD2FF20D841CF605013CA698B5523* L_26 = V_2;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))))
		{
			goto IL_0096;
		}
	}
	{
		// _whenRespawned.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_27 = __this->get__whenRespawned_5();
		NullCheck(L_27);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_27, /*hidden argument*/NULL);
	}

IL_00bc:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.RespawnOnDrop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespawnOnDrop__ctor_m8D2EBC16AB109106AF26EDF6C2E1D6875315ABFF (RespawnOnDrop_tDE333DF978DB0B142E5DF10D17651CDDBC0DD583 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private UnityEvent _whenRespawned = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_0, /*hidden argument*/NULL);
		__this->set__whenRespawned_5(L_0);
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
// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.RotationAudioEvents::get_WhenRotationStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * RotationAudioEvents_get_WhenRotationStarted_mA03C3D074773D4153449A26F7BA4B3E0953D8DBC (RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3 * __this, const RuntimeMethod* method)
{
	{
		// public UnityEvent WhenRotationStarted => _whenRotationStarted;
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get__whenRotationStarted_9();
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.RotationAudioEvents::get_WhenRotationEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * RotationAudioEvents_get_WhenRotationEnded_m9B4B6BF5A48881D9A910652C92B07077E41DDB9C (RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3 * __this, const RuntimeMethod* method)
{
	{
		// public UnityEvent WhenRotationEnded => _whenRotationEnded;
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get__whenRotationEnded_10();
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.RotationAudioEvents::get_WhenRotatedOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * RotationAudioEvents_get_WhenRotatedOpen_mD71886E356B5BC8813FF5EAD4A16735499B4BEC6 (RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3 * __this, const RuntimeMethod* method)
{
	{
		// public UnityEvent WhenRotatedOpen => _whenRotatedOpen;
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get__whenRotatedOpen_11();
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.RotationAudioEvents::get_WhenRotatedClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * RotationAudioEvents_get_WhenRotatedClosed_mBFAA919C2BA7B6D7C89DB72E4598C2FED774F524 (RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3 * __this, const RuntimeMethod* method)
{
	{
		// public UnityEvent WhenRotatedClosed => _whenRotatedClosed;
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get__whenRotatedClosed_12();
		return L_0;
	}
}
// UnityEngine.Transform Oculus.Interaction.Samples.RotationAudioEvents::get_TrackedTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RotationAudioEvents_get_TrackedTransform_m93F55E6DE74A93861A7B3C556A1F662FA53BFA46 (RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B3_0 = NULL;
	{
		// get => _trackedTransform == null ? transform : _trackedTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get__trackedTransform_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get__trackedTransform_5();
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Oculus.Interaction.Samples.RotationAudioEvents::RotationStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationAudioEvents_RotationStarted_mAB93A5FE11FE2F44FC93ECE5246CD119374B6A5C (RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3 * __this, const RuntimeMethod* method)
{
	{
		// _baseDelta = GetTotalDelta();
		float L_0;
		L_0 = RotationAudioEvents_GetTotalDelta_m428B50619D43DCF728E44E8E14112B4B5513B22F(__this, /*hidden argument*/NULL);
		__this->set__baseDelta_14(L_0);
		// _lastCrossedDirection = Direction.None;
		__this->set__lastCrossedDirection_16(0);
		// _whenRotationStarted.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = __this->get__whenRotationStarted_9();
		NullCheck(L_1);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.RotationAudioEvents::RotationEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationAudioEvents_RotationEnded_mFC315D487DE1B88C0B063CDF882340CC93457277 (RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3 * __this, const RuntimeMethod* method)
{
	{
		// _whenRotationEnded.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get__whenRotationEnded_10();
		NullCheck(L_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion Oculus.Interaction.Samples.RotationAudioEvents::GetCurrentRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  RotationAudioEvents_GetCurrentRotation_m1B2DAEF709C818BB3B9538EEBEC2E5B3D060B80D (RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3 * __this, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Quaternion.Inverse(_relativeTo.rotation) * TrackedTransform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get__relativeTo_6();
		NullCheck(L_0);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_0, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = RotationAudioEvents_get_TrackedTransform_m93F55E6DE74A93861A7B3C556A1F662FA53BFA46(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = V_0;
		return L_6;
	}
}
// System.Single Oculus.Interaction.Samples.RotationAudioEvents::GetTotalDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RotationAudioEvents_GetTotalDelta_m428B50619D43DCF728E44E8E14112B4B5513B22F (RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return Quaternion.Angle(_relativeTo.rotation, GetCurrentRotation());
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get__relativeTo_6();
		NullCheck(L_0);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_0, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = RotationAudioEvents_GetCurrentRotation_m1B2DAEF709C818BB3B9538EEBEC2E5B3D060B80D(__this, /*hidden argument*/NULL);
		float L_3;
		L_3 = Quaternion_Angle_m3BE44E43965BB9EDFD06DBC1E0985324A83327CF_inline(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		float L_4 = V_0;
		return L_4;
	}
}
// System.Void Oculus.Interaction.Samples.RotationAudioEvents::UpdateRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationAudioEvents_UpdateRotation_m9FDD0166317BAD2252DDE7AF27BB2B02BF598243 (RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B6_0 = 0;
	{
		// float totalDelta = GetTotalDelta();
		float L_0;
		L_0 = RotationAudioEvents_GetTotalDelta_m428B50619D43DCF728E44E8E14112B4B5513B22F(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (totalDelta > _maxRangeDeg)
		float L_1 = V_0;
		float L_2 = __this->get__maxRangeDeg_8();
		V_1 = (bool)((((float)L_1) > ((float)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		goto IL_00d5;
	}

IL_001b:
	{
		// if (Mathf.Abs(totalDelta - _baseDelta) > _thresholdDeg)
		float L_4 = V_0;
		float L_5 = __this->get__baseDelta_14();
		float L_6;
		L_6 = fabsf(((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)));
		float L_7 = __this->get__thresholdDeg_7();
		V_2 = (bool)((((float)L_6) > ((float)L_7))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_008d;
		}
	}
	{
		// var _direction = totalDelta - _baseDelta > 0 ?
		//                  Direction.Opening :
		//                  Direction.Closing;
		float L_9 = V_0;
		float L_10 = __this->get__baseDelta_14();
		if ((((float)((float)il2cpp_codegen_subtract((float)L_9, (float)L_10))) > ((float)(0.0f))))
		{
			goto IL_0047;
		}
	}
	{
		G_B6_0 = 2;
		goto IL_0048;
	}

IL_0047:
	{
		G_B6_0 = 1;
	}

IL_0048:
	{
		V_3 = G_B6_0;
		// if (_direction != _lastCrossedDirection)
		int32_t L_11 = V_3;
		int32_t L_12 = __this->get__lastCrossedDirection_16();
		V_4 = (bool)((((int32_t)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_008c;
		}
	}
	{
		// _lastCrossedDirection = _direction;
		int32_t L_14 = V_3;
		__this->set__lastCrossedDirection_16(L_14);
		// if (_direction == Direction.Opening)
		int32_t L_15 = V_3;
		V_5 = (bool)((((int32_t)L_15) == ((int32_t)1))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_007d;
		}
	}
	{
		// _whenRotatedOpen.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_17 = __this->get__whenRotatedOpen_11();
		NullCheck(L_17);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_17, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_007d:
	{
		// _whenRotatedClosed.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_18 = __this->get__whenRotatedClosed_12();
		NullCheck(L_18);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_18, /*hidden argument*/NULL);
	}

IL_008b:
	{
	}

IL_008c:
	{
	}

IL_008d:
	{
		// if (_lastCrossedDirection == Direction.Opening)
		int32_t L_19 = __this->get__lastCrossedDirection_16();
		V_6 = (bool)((((int32_t)L_19) == ((int32_t)1))? 1 : 0);
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_00b2;
		}
	}
	{
		// _baseDelta = Mathf.Max(_baseDelta, totalDelta);
		float L_21 = __this->get__baseDelta_14();
		float L_22 = V_0;
		float L_23;
		L_23 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_21, L_22, /*hidden argument*/NULL);
		__this->set__baseDelta_14(L_23);
		goto IL_00d5;
	}

IL_00b2:
	{
		// else if (_lastCrossedDirection == Direction.Closing)
		int32_t L_24 = __this->get__lastCrossedDirection_16();
		V_7 = (bool)((((int32_t)L_24) == ((int32_t)2))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00d5;
		}
	}
	{
		// _baseDelta = Mathf.Min(_baseDelta, totalDelta);
		float L_26 = __this->get__baseDelta_14();
		float L_27 = V_0;
		float L_28;
		L_28 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_26, L_27, /*hidden argument*/NULL);
		__this->set__baseDelta_14(L_28);
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.RotationAudioEvents::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationAudioEvents_Awake_mF8E94F899C190DCB687A590923178EFF230CFA78 (RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractableView_tDB565FF06732C41D644F9AB5D0FBA3DCF14FEEAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InteractableView = _interactableView as IInteractableView;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_0 = __this->get__interactableView_4();
		__this->set_InteractableView_13(((RuntimeObject*)IsInst((RuntimeObject*)L_0, IInteractableView_tDB565FF06732C41D644F9AB5D0FBA3DCF14FEEAC_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.RotationAudioEvents::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationAudioEvents_Start_m7DED7CE176ACEA3EF65987F60ECEDBA73007945E (RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisIInteractableView_tDB565FF06732C41D644F9AB5D0FBA3DCF14FEEAC_m02CF2DD3E16D4A62D9BA5A40B6D30974A69A29B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mA85DE49E66654AC5B621D2709476E0A44DD6500E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started);
		bool* L_0 = __this->get_address_of__started_17();
		MonoBehaviourStartExtensions_BeginStart_mAB09EA707D0D458F0758561CA0AD604619F21978(__this, (bool*)L_0, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL, /*hidden argument*/NULL);
		// Assert.IsNotNull(InteractableView);
		RuntimeObject* L_1 = __this->get_InteractableView_13();
		IL2CPP_RUNTIME_CLASS_INIT(Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisIInteractableView_tDB565FF06732C41D644F9AB5D0FBA3DCF14FEEAC_m02CF2DD3E16D4A62D9BA5A40B6D30974A69A29B6(L_1, /*hidden argument*/Assert_IsNotNull_TisIInteractableView_tDB565FF06732C41D644F9AB5D0FBA3DCF14FEEAC_m02CF2DD3E16D4A62D9BA5A40B6D30974A69A29B6_RuntimeMethod_var);
		// Assert.IsNotNull(TrackedTransform);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = RotationAudioEvents_get_TrackedTransform_m93F55E6DE74A93861A7B3C556A1F662FA53BFA46(__this, /*hidden argument*/NULL);
		Assert_IsNotNull_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mA85DE49E66654AC5B621D2709476E0A44DD6500E(L_2, /*hidden argument*/Assert_IsNotNull_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mA85DE49E66654AC5B621D2709476E0A44DD6500E_RuntimeMethod_var);
		// Assert.IsNotNull(_relativeTo);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get__relativeTo_6();
		Assert_IsNotNull_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mA85DE49E66654AC5B621D2709476E0A44DD6500E(L_3, /*hidden argument*/Assert_IsNotNull_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mA85DE49E66654AC5B621D2709476E0A44DD6500E_RuntimeMethod_var);
		// this.EndStart(ref _started);
		bool* L_4 = __this->get_address_of__started_17();
		MonoBehaviourStartExtensions_EndStart_mC572AECC88F4BA4622C137CA4E385812337BC643(__this, (bool*)L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.RotationAudioEvents::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationAudioEvents_Update_mA337AB830B9EAAFB4C6E49AC61A0A8B5CC68F3D2 (RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractableView_tDB565FF06732C41D644F9AB5D0FBA3DCF14FEEAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// bool wasRotating = _isRotating;
		bool L_0 = __this->get__isRotating_15();
		V_0 = L_0;
		// _isRotating = InteractableView.State == InteractableState.Select;
		RuntimeObject* L_1 = __this->get_InteractableView_13();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Oculus.Interaction.InteractableState Oculus.Interaction.IInteractableView::get_State() */, IInteractableView_tDB565FF06732C41D644F9AB5D0FBA3DCF14FEEAC_il2cpp_TypeInfo_var, L_1);
		__this->set__isRotating_15((bool)((((int32_t)L_2) == ((int32_t)2))? 1 : 0));
		// if (!_isRotating)
		bool L_3 = __this->get__isRotating_15();
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// if (wasRotating)
		bool L_5 = V_0;
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// RotationEnded();
		RotationAudioEvents_RotationEnded_mFC315D487DE1B88C0B063CDF882340CC93457277(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		goto IL_0055;
	}

IL_003b:
	{
		// if (!wasRotating)
		bool L_7 = V_0;
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		// RotationStarted();
		RotationAudioEvents_RotationStarted_mAB93A5FE11FE2F44FC93ECE5246CD119374B6A5C(__this, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// UpdateRotation();
		RotationAudioEvents_UpdateRotation_m9FDD0166317BAD2252DDE7AF27BB2B02BF598243(__this, /*hidden argument*/NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.RotationAudioEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationAudioEvents__ctor_m5B857416F374A1FBB507FA05072EFB0868A7A9AC (RotationAudioEvents_tB3D7964420E23D59006764E4D2AA57BB48FD37E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float _thresholdDeg = 20f;
		__this->set__thresholdDeg_7((20.0f));
		// private float _maxRangeDeg = 150f;
		__this->set__maxRangeDeg_8((150.0f));
		// private UnityEvent _whenRotationStarted = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_0, /*hidden argument*/NULL);
		__this->set__whenRotationStarted_9(L_0);
		// private UnityEvent _whenRotationEnded = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_1, /*hidden argument*/NULL);
		__this->set__whenRotationEnded_10(L_1);
		// private UnityEvent _whenRotatedOpen = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_2, /*hidden argument*/NULL);
		__this->set__whenRotatedOpen_11(L_2);
		// private UnityEvent _whenRotatedClosed = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_3 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_3, /*hidden argument*/NULL);
		__this->set__whenRotatedClosed_12(L_3);
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
// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.ScaleAudioEvents::get_WhenScalingStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ScaleAudioEvents_get_WhenScalingStarted_m7B38D2FB2C3795BEF156F514D91A9D9183F99632 (ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8 * __this, const RuntimeMethod* method)
{
	{
		// public UnityEvent WhenScalingStarted => _whenScalingStarted;
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get__whenScalingStarted_8();
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.ScaleAudioEvents::get_WhenScalingEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ScaleAudioEvents_get_WhenScalingEnded_mEE2154D7E93CDA31F1DAC1E0D5B60EECC2BE7E07 (ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8 * __this, const RuntimeMethod* method)
{
	{
		// public UnityEvent WhenScalingEnded => _whenScalingEnded;
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get__whenScalingEnded_9();
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.ScaleAudioEvents::get_WhenScaledUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ScaleAudioEvents_get_WhenScaledUp_mA7FC214B6F1296FC83D00320AE79DD94C096739A (ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8 * __this, const RuntimeMethod* method)
{
	{
		// public UnityEvent WhenScaledUp => _whenScaledUp;
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get__whenScaledUp_10();
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.ScaleAudioEvents::get_WhenScaledDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ScaleAudioEvents_get_WhenScaledDown_mE9212E4E094BFFA7B34025B814AC9B154D84D74F (ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8 * __this, const RuntimeMethod* method)
{
	{
		// public UnityEvent WhenScaledDown => _whenScaledDown;
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get__whenScaledDown_11();
		return L_0;
	}
}
// UnityEngine.Transform Oculus.Interaction.Samples.ScaleAudioEvents::get_TrackedTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ScaleAudioEvents_get_TrackedTransform_mBDF0539A9DFAB7E5B4893D13724F18DBAC1331FD (ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B3_0 = NULL;
	{
		// get => _trackedTransform == null ? transform : _trackedTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get__trackedTransform_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get__trackedTransform_5();
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Oculus.Interaction.Samples.ScaleAudioEvents::ScalingStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleAudioEvents_ScalingStarted_mE1B4AA2C6CE1004423F4E1C58E1DEF9F99B27F77 (ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8 * __this, const RuntimeMethod* method)
{
	{
		// _lastStep = TrackedTransform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = ScaleAudioEvents_get_TrackedTransform_mBDF0539A9DFAB7E5B4893D13724F18DBAC1331FD(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_0, /*hidden argument*/NULL);
		__this->set__lastStep_14(L_1);
		// _whenScalingStarted.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = __this->get__whenScalingStarted_8();
		NullCheck(L_2);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ScaleAudioEvents::ScalingEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleAudioEvents_ScalingEnded_m275CF03F9D7483F662ABA6E449911955A9129498 (ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8 * __this, const RuntimeMethod* method)
{
	{
		// _whenScalingEnded.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get__whenScalingEnded_9();
		NullCheck(L_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single Oculus.Interaction.Samples.ScaleAudioEvents::GetTotalDelta(Oculus.Interaction.Samples.ScaleAudioEvents/Direction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScaleAudioEvents_GetTotalDelta_mBB44FDC0B9DFEAF9C6DB441CC55EC88A607F10D2 (ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8 * __this, int32_t* ___direction0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	float V_4 = 0.0f;
	int32_t* G_B4_0 = 0;
	int32_t* G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t* G_B5_1 = 0;
	float G_B9_0 = 0.0f;
	{
		// float prevMagnitude = _lastStep.magnitude;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of__lastStep_14();
		float L_1;
		L_1 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// float newMagnitude = TrackedTransform.localScale.magnitude;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = ScaleAudioEvents_get_TrackedTransform_mBDF0539A9DFAB7E5B4893D13724F18DBAC1331FD(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		float L_4;
		L_4 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		V_1 = L_4;
		// if (newMagnitude == prevMagnitude)
		float L_5 = V_1;
		float L_6 = V_0;
		V_3 = (bool)((((float)L_5) == ((float)L_6))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		// direction = Direction.None;
		int32_t* L_8 = ___direction0;
		*((int32_t*)L_8) = (int32_t)0;
		goto IL_003c;
	}

IL_0030:
	{
		// direction = newMagnitude > prevMagnitude ? Direction.ScaleUp : Direction.ScaleDown;
		int32_t* L_9 = ___direction0;
		float L_10 = V_1;
		float L_11 = V_0;
		G_B3_0 = L_9;
		if ((((float)L_10) > ((float)L_11)))
		{
			G_B4_0 = L_9;
			goto IL_0039;
		}
	}
	{
		G_B5_0 = 2;
		G_B5_1 = G_B3_0;
		goto IL_003a;
	}

IL_0039:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_003a:
	{
		*((int32_t*)G_B5_1) = (int32_t)G_B5_0;
	}

IL_003c:
	{
		// return direction == Direction.ScaleUp ?
		//        newMagnitude - prevMagnitude :
		//        prevMagnitude - newMagnitude;
		int32_t* L_12 = ___direction0;
		int32_t L_13 = *((int32_t*)L_12);
		if ((((int32_t)L_13) == ((int32_t)1)))
		{
			goto IL_0046;
		}
	}
	{
		float L_14 = V_0;
		float L_15 = V_1;
		G_B9_0 = ((float)il2cpp_codegen_subtract((float)L_14, (float)L_15));
		goto IL_0049;
	}

IL_0046:
	{
		float L_16 = V_1;
		float L_17 = V_0;
		G_B9_0 = ((float)il2cpp_codegen_subtract((float)L_16, (float)L_17));
	}

IL_0049:
	{
		V_4 = G_B9_0;
		goto IL_004d;
	}

IL_004d:
	{
		// }
		float L_18 = V_4;
		return L_18;
	}
}
// System.Void Oculus.Interaction.Samples.ScaleAudioEvents::UpdateScaling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleAudioEvents_UpdateScaling_m3307A3E56991FBC90BC938DE760B7CE570EF2B1B (ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B3_0 = 0;
	{
		// if (_stepSize <= 0 || _maxEventFreq <= 0)
		float L_0 = __this->get__stepSize_6();
		if ((((float)L_0) <= ((float)(0.0f))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = __this->get__maxEventFreq_7();
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_2 = (bool)G_B3_0;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// return;
		goto IL_00b8;
	}

IL_0027:
	{
		// float effectiveStepSize = _stepSize;
		float L_3 = __this->get__stepSize_6();
		V_0 = L_3;
		// float totalDelta = GetTotalDelta(out _direction);
		int32_t* L_4 = __this->get_address_of__direction_16();
		float L_5;
		L_5 = ScaleAudioEvents_GetTotalDelta_mBB44FDC0B9DFEAF9C6DB441CC55EC88A607F10D2(__this, (int32_t*)L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// if (totalDelta > effectiveStepSize)
		float L_6 = V_1;
		float L_7 = V_0;
		V_3 = (bool)((((float)L_6) > ((float)L_7))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_00b8;
		}
	}
	{
		// _lastStep = TrackedTransform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = ScaleAudioEvents_get_TrackedTransform_mBDF0539A9DFAB7E5B4893D13724F18DBAC1331FD(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_9, /*hidden argument*/NULL);
		__this->set__lastStep_14(L_10);
		// float timeSince = Time.time - _lastEventTime;
		float L_11;
		L_11 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_12 = __this->get__lastEventTime_15();
		V_4 = ((float)il2cpp_codegen_subtract((float)L_11, (float)L_12));
		// if (timeSince >= 1f / _maxEventFreq)
		float L_13 = V_4;
		int32_t L_14 = __this->get__maxEventFreq_7();
		V_5 = (bool)((((int32_t)((!(((float)L_13) >= ((float)((float)((float)(1.0f)/(float)((float)((float)L_14)))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_00b7;
		}
	}
	{
		// _lastEventTime = Time.time;
		float L_16;
		L_16 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set__lastEventTime_15(L_16);
		// if (_direction == Direction.ScaleUp)
		int32_t L_17 = __this->get__direction_16();
		V_6 = (bool)((((int32_t)L_17) == ((int32_t)1))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_00a8;
		}
	}
	{
		// _whenScaledUp.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_19 = __this->get__whenScaledUp_10();
		NullCheck(L_19);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_19, /*hidden argument*/NULL);
		goto IL_00b6;
	}

IL_00a8:
	{
		// _whenScaledDown.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_20 = __this->get__whenScaledDown_11();
		NullCheck(L_20);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_20, /*hidden argument*/NULL);
	}

IL_00b6:
	{
	}

IL_00b7:
	{
	}

IL_00b8:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ScaleAudioEvents::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleAudioEvents_Awake_mD0842A35F307668A0147840670AE8D996D77BEE9 (ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractableView_tDB565FF06732C41D644F9AB5D0FBA3DCF14FEEAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InteractableView = _interactableView as IInteractableView;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_0 = __this->get__interactableView_4();
		__this->set_InteractableView_12(((RuntimeObject*)IsInst((RuntimeObject*)L_0, IInteractableView_tDB565FF06732C41D644F9AB5D0FBA3DCF14FEEAC_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ScaleAudioEvents::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleAudioEvents_Start_m4FF69E40BED4CB1F8C90283232FE0AC70C7EBC9E (ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisIInteractableView_tDB565FF06732C41D644F9AB5D0FBA3DCF14FEEAC_m02CF2DD3E16D4A62D9BA5A40B6D30974A69A29B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mA85DE49E66654AC5B621D2709476E0A44DD6500E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started);
		bool* L_0 = __this->get_address_of__started_17();
		MonoBehaviourStartExtensions_BeginStart_mAB09EA707D0D458F0758561CA0AD604619F21978(__this, (bool*)L_0, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL, /*hidden argument*/NULL);
		// Assert.IsNotNull(InteractableView);
		RuntimeObject* L_1 = __this->get_InteractableView_12();
		IL2CPP_RUNTIME_CLASS_INIT(Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisIInteractableView_tDB565FF06732C41D644F9AB5D0FBA3DCF14FEEAC_m02CF2DD3E16D4A62D9BA5A40B6D30974A69A29B6(L_1, /*hidden argument*/Assert_IsNotNull_TisIInteractableView_tDB565FF06732C41D644F9AB5D0FBA3DCF14FEEAC_m02CF2DD3E16D4A62D9BA5A40B6D30974A69A29B6_RuntimeMethod_var);
		// Assert.IsNotNull(TrackedTransform);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = ScaleAudioEvents_get_TrackedTransform_mBDF0539A9DFAB7E5B4893D13724F18DBAC1331FD(__this, /*hidden argument*/NULL);
		Assert_IsNotNull_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mA85DE49E66654AC5B621D2709476E0A44DD6500E(L_2, /*hidden argument*/Assert_IsNotNull_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mA85DE49E66654AC5B621D2709476E0A44DD6500E_RuntimeMethod_var);
		// this.EndStart(ref _started);
		bool* L_3 = __this->get_address_of__started_17();
		MonoBehaviourStartExtensions_EndStart_mC572AECC88F4BA4622C137CA4E385812337BC643(__this, (bool*)L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ScaleAudioEvents::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleAudioEvents_Update_mAD189A5690C800D9FCF05D12AAD0FBE438605BDA (ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractableView_tDB565FF06732C41D644F9AB5D0FBA3DCF14FEEAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// bool wasScaling = _isScaling;
		bool L_0 = __this->get__isScaling_13();
		V_0 = L_0;
		// _isScaling = InteractableView.State == InteractableState.Select;
		RuntimeObject* L_1 = __this->get_InteractableView_12();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Oculus.Interaction.InteractableState Oculus.Interaction.IInteractableView::get_State() */, IInteractableView_tDB565FF06732C41D644F9AB5D0FBA3DCF14FEEAC_il2cpp_TypeInfo_var, L_1);
		__this->set__isScaling_13((bool)((((int32_t)L_2) == ((int32_t)2))? 1 : 0));
		// if (!_isScaling)
		bool L_3 = __this->get__isScaling_13();
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// if (wasScaling)
		bool L_5 = V_0;
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// ScalingEnded();
		ScaleAudioEvents_ScalingEnded_m275CF03F9D7483F662ABA6E449911955A9129498(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		goto IL_0055;
	}

IL_003b:
	{
		// if (!wasScaling)
		bool L_7 = V_0;
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		// ScalingStarted();
		ScaleAudioEvents_ScalingStarted_mE1B4AA2C6CE1004423F4E1C58E1DEF9F99B27F77(__this, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// UpdateScaling();
		ScaleAudioEvents_UpdateScaling_m3307A3E56991FBC90BC938DE760B7CE570EF2B1B(__this, /*hidden argument*/NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ScaleAudioEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleAudioEvents__ctor_mD596C63B4483049C47C8A0F9E02E629C2B496288 (ScaleAudioEvents_t8FB36967C52E83F0315CF4E0DF96863450EE8FC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float _stepSize = 0.4f;
		__this->set__stepSize_6((0.400000006f));
		// private int _maxEventFreq = 20;
		__this->set__maxEventFreq_7(((int32_t)20));
		// private UnityEvent _whenScalingStarted = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_0, /*hidden argument*/NULL);
		__this->set__whenScalingStarted_8(L_0);
		// private UnityEvent _whenScalingEnded = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_1, /*hidden argument*/NULL);
		__this->set__whenScalingEnded_9(L_1);
		// private UnityEvent _whenScaledUp = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_2, /*hidden argument*/NULL);
		__this->set__whenScaledUp_10(L_2);
		// private UnityEvent _whenScaledDown = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_3 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_3, /*hidden argument*/NULL);
		__this->set__whenScaledDown_11(L_3);
		// private Direction _direction = Direction.None;
		__this->set__direction_16(0);
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
// System.Void Oculus.Interaction.Samples.ScaleModifier::SetScaleX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleModifier_SetScaleX_m6E4A718C5716E0CDE14F6D2C1C9E8491478388AF (ScaleModifier_t3EDA5B92F3B1EB3DC38D018A36C26EB9BC3FB520 * __this, float ___x0, const RuntimeMethod* method)
{
	{
		// transform.localScale = new Vector3(x, transform.localScale.y, transform.localScale.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_1 = ___x0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), L_1, L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_0, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ScaleModifier::SetScaleY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleModifier_SetScaleY_m79C3FE20D8F448CEFBF25D3CA14AB2FF3837A725 (ScaleModifier_t3EDA5B92F3B1EB3DC38D018A36C26EB9BC3FB520 * __this, float ___y0, const RuntimeMethod* method)
{
	{
		// transform.localScale = new Vector3(transform.localScale.x, y, transform.localScale.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		float L_4 = ___y0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), L_3, L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_0, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ScaleModifier::SetScaleZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleModifier_SetScaleZ_mF50AD626D3A11721C722EFC1374FB7D2C0BE51A1 (ScaleModifier_t3EDA5B92F3B1EB3DC38D018A36C26EB9BC3FB520 * __this, float ___z0, const RuntimeMethod* method)
{
	{
		// transform.localScale = new Vector3(transform.localScale.x, transform.localScale.y, z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		float L_7 = ___z0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), L_3, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_0, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ScaleModifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleModifier__ctor_m8FFE1C27C3DF9EBC5B0ED8E75F58AAB20C93B3A6 (ScaleModifier_t3EDA5B92F3B1EB3DC38D018A36C26EB9BC3FB520 * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.Samples.SceneLoader::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_Load_m487EA8E6C77076D86055B8F3E5C43D12E45E5350 (SceneLoader_t54FAEF49CF78EF9DB3F31680C5CC45D1F8517953 * __this, String_t* ___sceneName0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (_loading) return;
		bool L_0 = __this->get__loading_4();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// if (_loading) return;
		goto IL_0022;
	}

IL_000d:
	{
		// _loading = true;
		__this->set__loading_4((bool)1);
		// StartCoroutine(LoadSceneAsync(sceneName));
		String_t* L_2 = ___sceneName0;
		RuntimeObject* L_3;
		L_3 = SceneLoader_LoadSceneAsync_m0A4070ACEA65C1564805FF0E18BF48B9968268F2(__this, L_2, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Oculus.Interaction.Samples.SceneLoader::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneLoader_LoadSceneAsync_m0A4070ACEA65C1564805FF0E18BF48B9968268F2 (SceneLoader_t54FAEF49CF78EF9DB3F31680C5CC45D1F8517953 * __this, String_t* ___sceneName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadSceneAsyncU3Ed__2_tE31CB71FCD564091D8102F37B397A377EC4BD592_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadSceneAsyncU3Ed__2_tE31CB71FCD564091D8102F37B397A377EC4BD592 * L_0 = (U3CLoadSceneAsyncU3Ed__2_tE31CB71FCD564091D8102F37B397A377EC4BD592 *)il2cpp_codegen_object_new(U3CLoadSceneAsyncU3Ed__2_tE31CB71FCD564091D8102F37B397A377EC4BD592_il2cpp_TypeInfo_var);
		U3CLoadSceneAsyncU3Ed__2__ctor_m54092F8FA2EFA815EB61361F62763A8234C31200(L_0, 0, /*hidden argument*/NULL);
		U3CLoadSceneAsyncU3Ed__2_tE31CB71FCD564091D8102F37B397A377EC4BD592 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CLoadSceneAsyncU3Ed__2_tE31CB71FCD564091D8102F37B397A377EC4BD592 * L_2 = L_1;
		String_t* L_3 = ___sceneName0;
		NullCheck(L_2);
		L_2->set_sceneName_2(L_3);
		return L_2;
	}
}
// System.Void Oculus.Interaction.Samples.SceneLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader__ctor_m110DFAC2BE1FBBF8BF0E9B4DA07CE0E2E2239262 (SceneLoader_t54FAEF49CF78EF9DB3F31680C5CC45D1F8517953 * __this, const RuntimeMethod* method)
{
	{
		// private bool _loading = false;
		__this->set__loading_4((bool)0);
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
// System.Void Oculus.Interaction.Samples.ShouldHideHandOnGrab::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShouldHideHandOnGrab__ctor_m76808F321590622B4183E6514013BC29C042E8C9 (ShouldHideHandOnGrab_tBAB0E4F5C7010765C850D4EB572D73D237A41AB6 * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.Samples.StayInView::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StayInView_Update_mA1C33A6485DF35E82453D37B5DFBBF377CFF7375 (StayInView_tB746CF1F17389C17740687630E63F792A3878924 * __this, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// transform.rotation = Quaternion.identity;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_0, L_1, /*hidden argument*/NULL);
		// transform.position = _eyeCenter.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get__eyeCenter_4();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_4, /*hidden argument*/NULL);
		// transform.Rotate(0, _eyeCenter.rotation.eulerAngles.y, 0, Space.Self);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get__eyeCenter_4();
		NullCheck(L_6);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		NullCheck(L_5);
		Transform_Rotate_mE77655C011C18F49CAD740CED7940EF1C7000357(L_5, (0.0f), L_9, (0.0f), 1, /*hidden argument*/NULL);
		// transform.position = _eyeCenter.position + transform.forward.normalized * _extraDistanceForward;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get__eyeCenter_4();
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		float L_16 = __this->get__extraDistanceForward_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_15, L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_12, L_17, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_18, /*hidden argument*/NULL);
		// if (_zeroOutEyeHeight)
		bool L_19 = __this->get__zeroOutEyeHeight_6();
		V_2 = L_19;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_00d2;
		}
	}
	{
		// transform.position = new Vector3(transform.position.x, 0, transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		float L_27 = L_26.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_28), L_24, (0.0f), L_27, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_21, L_28, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.StayInView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StayInView__ctor_m1C0E073F7A4DB8408EFD9030F272FF7851662026 (StayInView_tB746CF1F17389C17740687630E63F792A3878924 * __this, const RuntimeMethod* method)
{
	{
		// private float _extraDistanceForward = 0;
		__this->set__extraDistanceForward_5((0.0f));
		// private bool _zeroOutEyeHeight = true;
		__this->set__zeroOutEyeHeight_6((bool)1);
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
// System.Void Oculus.Interaction.AudioPhysics/CollisionEvents::add_WhenCollisionEnter(System.Action`1<UnityEngine.Collision>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEvents_add_WhenCollisionEnter_m93955C3F1B9200A198AAE7F5F9FAE27AFD49AA69 (CollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E * __this, Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * V_0 = NULL;
	Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * V_1 = NULL;
	Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * V_2 = NULL;
	{
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_0 = __this->get_WhenCollisionEnter_4();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_2 = V_1;
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45_il2cpp_TypeInfo_var));
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 ** L_5 = __this->get_address_of_WhenCollisionEnter_4();
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_6 = V_2;
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_7 = V_1;
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 *>((Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_9 = V_0;
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 *)L_9) == ((RuntimeObject*)(Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics/CollisionEvents::remove_WhenCollisionEnter(System.Action`1<UnityEngine.Collision>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEvents_remove_WhenCollisionEnter_m20EB6E66EAC624B3762C8331B3C2DD8E553A09A4 (CollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E * __this, Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * V_0 = NULL;
	Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * V_1 = NULL;
	Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * V_2 = NULL;
	{
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_0 = __this->get_WhenCollisionEnter_4();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_2 = V_1;
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45_il2cpp_TypeInfo_var));
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 ** L_5 = __this->get_address_of_WhenCollisionEnter_4();
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_6 = V_2;
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_7 = V_1;
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 *>((Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_9 = V_0;
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 *)L_9) == ((RuntimeObject*)(Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics/CollisionEvents::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEvents_OnCollisionEnter_m4013DEB511B1D665837A972342AD40D4B789136A (CollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mC78A558235B290D6FDC6576BBCED82A6FFE3E78F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WhenCollisionEnter.Invoke(collision);
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_0 = __this->get_WhenCollisionEnter_4();
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_1 = ___collision0;
		NullCheck(L_0);
		Action_1_Invoke_mC78A558235B290D6FDC6576BBCED82A6FFE3E78F(L_0, L_1, /*hidden argument*/Action_1_Invoke_mC78A558235B290D6FDC6576BBCED82A6FFE3E78F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics/CollisionEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEvents__ctor_m7C0DD68474202B6A778598BFE2064E0E44C020ED (CollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m9EFCE0FD810C793AAB24A94691EF69C7E29DCF92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__4_0_m34FFF3992C196443CD5B47F88F3CA418F6014A2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * G_B2_0 = NULL;
	CollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E * G_B2_1 = NULL;
	Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * G_B1_0 = NULL;
	CollisionEvents_t6B7F80B6309C82EE32FE3B2698E180DB9084B39E * G_B1_1 = NULL;
	{
		// public event Action<Collision> WhenCollisionEnter = delegate { };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3_il2cpp_TypeInfo_var);
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_0 = ((U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3_il2cpp_TypeInfo_var))->get_U3CU3E9__4_0_1();
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3_il2cpp_TypeInfo_var);
		U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3 * L_2 = ((U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_3 = (Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 *)il2cpp_codegen_object_new(Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45_il2cpp_TypeInfo_var);
		Action_1__ctor_m9EFCE0FD810C793AAB24A94691EF69C7E29DCF92(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__4_0_m34FFF3992C196443CD5B47F88F3CA418F6014A2E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m9EFCE0FD810C793AAB24A94691EF69C7E29DCF92_RuntimeMethod_var);
		Action_1_t6BB37A25BD1477F2801F5D14F69720BD689B0E45 * L_4 = L_3;
		((U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3_il2cpp_TypeInfo_var))->set_U3CU3E9__4_0_1(L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_WhenCollisionEnter_4(G_B2_0);
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
// System.Void Oculus.Interaction.Samples.PoseUseSample/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m2BBA05A8B2836797AF2F78EB0FE8DA2608FCBBAE (U3CU3Ec__DisplayClass4_0_t217CDA7E0E60088E9A3310535A9A2450FAC81405 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Samples.PoseUseSample/<>c__DisplayClass4_0::<Start>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CStartU3Eb__0_mD8522E04F31A7F9582C1BCFD9863726D235E9760 (U3CU3Ec__DisplayClass4_0_t217CDA7E0E60088E9A3310535A9A2450FAC81405 * __this, const RuntimeMethod* method)
{
	{
		// _poses[i].WhenSelected += () => ShowVisuals(poseNumber);
		PoseUseSample_t5F67B23F2A56359B4A89978FD7DF852C17C5546A * L_0 = __this->get_U3CU3E4__this_1();
		int32_t L_1 = __this->get_poseNumber_0();
		NullCheck(L_0);
		PoseUseSample_ShowVisuals_m286414458B4AE0509F982C3A6CF6511B5FBA29B2(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Samples.PoseUseSample/<>c__DisplayClass4_0::<Start>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CStartU3Eb__1_mB74D7C12A6F4D7970B557D2C1FC4BEF383E1FF24 (U3CU3Ec__DisplayClass4_0_t217CDA7E0E60088E9A3310535A9A2450FAC81405 * __this, const RuntimeMethod* method)
{
	{
		// _poses[i].WhenUnselected += () => HideVisuals(poseNumber);
		PoseUseSample_t5F67B23F2A56359B4A89978FD7DF852C17C5546A * L_0 = __this->get_U3CU3E4__this_1();
		int32_t L_1 = __this->get_poseNumber_0();
		NullCheck(L_0);
		PoseUseSample_HideVisuals_m335D521F571F12C7DDBECDB5BDD2AD46119DFD80(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__2__ctor_m54092F8FA2EFA815EB61361F62763A8234C31200 (U3CLoadSceneAsyncU3Ed__2_tE31CB71FCD564091D8102F37B397A377EC4BD592 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__2_System_IDisposable_Dispose_m2C37C4DF76236DC6E2D824DEC073CD2942CD57FA (U3CLoadSceneAsyncU3Ed__2_tE31CB71FCD564091D8102F37B397A377EC4BD592 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadSceneAsyncU3Ed__2_MoveNext_m8FD20614DFCC8879F684A562946BEE784B2895BA (U3CLoadSceneAsyncU3Ed__2_tE31CB71FCD564091D8102F37B397A377EC4BD592 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
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
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0044;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// AsyncOperation asyncLoad = SceneManager.LoadSceneAsync(sceneName);
		String_t* L_3 = __this->get_sceneName_2();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_4;
		L_4 = SceneManager_LoadSceneAsync_m9710D4ECD4D8BE75ACB7794E5300288C38A8A6BA(L_3, /*hidden argument*/NULL);
		__this->set_U3CasyncLoadU3E5__1_4(L_4);
		goto IL_004c;
	}

IL_0033:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0044:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_004c:
	{
		// while (!asyncLoad.isDone)
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_5 = __this->get_U3CasyncLoadU3E5__1_4();
		NullCheck(L_5);
		bool L_6;
		L_6 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_5, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0033;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadSceneAsyncU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9DF44DBE7097D6FF7507FF0A7E3D2BC0D6470C70 (U3CLoadSceneAsyncU3Ed__2_tE31CB71FCD564091D8102F37B397A377EC4BD592 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__2_System_Collections_IEnumerator_Reset_m0990444B68DE9956FA0D5E9FF01F966F380CE504 (U3CLoadSceneAsyncU3Ed__2_tE31CB71FCD564091D8102F37B397A377EC4BD592 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadSceneAsyncU3Ed__2_System_Collections_IEnumerator_Reset_m0990444B68DE9956FA0D5E9FF01F966F380CE504_RuntimeMethod_var)));
	}
}
// System.Object Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadSceneAsyncU3Ed__2_System_Collections_IEnumerator_get_Current_m6528673DCF2259EC30A167727BBD60781F6F2B9B (U3CLoadSceneAsyncU3Ed__2_tE31CB71FCD564091D8102F37B397A377EC4BD592 * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.AudioPhysics/CollisionEvents/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m81B68653DEC2330A4ED9579686260235B3842EC1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3 * L_0 = (U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3 *)il2cpp_codegen_object_new(U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m486F2D59C08751764ED848785A6701DF8C2AE457(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics/CollisionEvents/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m486F2D59C08751764ED848785A6701DF8C2AE457 (U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics/CollisionEvents/<>c::<.ctor>b__4_0(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__4_0_m34FFF3992C196443CD5B47F88F3CA418F6014A2E (U3CU3Ec_t6150CF3E4BC48D79014A83487AA1EBD7CAFFD2C3 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public event Action<Collision> WhenCollisionEnter = delegate { };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * ImpactAudio_get_SoftCollisionSound_mE0F5735A62EF8A4C9184DCCC591CE20DE26A6DD6_inline (ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F * __this, const RuntimeMethod* method)
{
	{
		// public AudioTrigger SoftCollisionSound => _softCollisionSound;
		AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * L_0 = __this->get__softCollisionSound_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * ImpactAudio_get_HardCollisionSound_m64F3AEB89D81BF3A2C50F38390AA11E1E09AA937_inline (ImpactAudio_t1786ADB4C46A8DB44DE9C06DC04F5E98D3F6458F * __this, const RuntimeMethod* method)
{
	{
		// public AudioTrigger HardCollisionSound => _hardCollisionSound;
		AudioTrigger_tA69641643CE880FEA3868E6B4002B4CE6F008802 * L_0 = __this->get__hardCollisionSound_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MinMaxPair_get_UseRandomRange_m910C499410E123452758F06A981E10AED180FF94_inline (MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 * __this, const RuntimeMethod* method)
{
	{
		// public bool UseRandomRange => _useRandomRange;
		bool L_0 = __this->get__useRandomRange_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MinMaxPair_get_Min_mB1CC843B342011C66EC793F33F33342FC9CDE431_inline (MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 * __this, const RuntimeMethod* method)
{
	{
		// public float Min => _min;
		float L_0 = __this->get__min_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MinMaxPair_get_Max_mB9DBB5333483D69BDE5DF747737ACBDE9D7D399B_inline (MinMaxPair_t515B78BF0DA05D344B388EA1926DFD019FE0CC95 * __this, const RuntimeMethod* method)
{
	{
		// public float Max => _max;
		float L_0 = __this->get__max_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandVisual_set_ForceOffVisibility_mFA2E933400B4A92EA1366FC8996C9F85E85F26C0_inline (HandVisual_tE47B8C2A8D986CFEA9EF8212F023C8B096B8230E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ForceOffVisibility { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CForceOffVisibilityU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * OVRCameraRig_get_centerEyeAnchor_mC0875856CE4EBA9D0867E69A1A05DE40A443E1FF_inline (OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517 * __this, const RuntimeMethod* method)
{
	{
		// public Transform centerEyeAnchor { get; private set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CcenterEyeAnchorU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
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
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a1;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a1;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a1;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
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
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_m3BE44E43965BB9EDFD06DBC1E0985324A83327CF_inline (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___a0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = ___b1;
		float L_2;
		L_2 = Quaternion_Dot_m7F12C5843352AB2EA687923444CC987D51515F9A(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		bool L_4;
		L_4 = Quaternion_IsEqualUsingDot_mC57C44978B13AD1592750B1D523AAB4549BD5643(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		float L_5 = V_0;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_6, (1.0f), /*hidden argument*/NULL);
		float L_8;
		L_8 = acosf(L_7);
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)(2.0f))), (float)(57.2957802f)));
		goto IL_0039;
	}

IL_0034:
	{
		G_B3_0 = (0.0f);
	}

IL_0039:
	{
		V_1 = G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		float L_9 = V_1;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Interactor_2_get_SelectedInteractable_mF198E6A0CD841C1C337C5EE83AB8AEEB984A4C2D_gshared_inline (Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708 * __this, const RuntimeMethod* method)
{
	{
		// public TInteractable SelectedInteractable => _selectedInteractable;
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__selectedInteractable_19();
		return (RuntimeObject *)L_0;
	}
}
