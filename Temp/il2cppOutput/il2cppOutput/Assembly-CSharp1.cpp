#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// AdManager
struct AdManager_tC2779FAA5E28975A9817609A8DAF049E9451A912;
// GameController
struct GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3;
// GameDataReader
struct GameDataReader_t2D0084ECC4827F2E510F29A214562FAA32B32E97;
// GameDataWriter
struct GameDataWriter_tDE6D451FD1A567A30F2189551054DEE43E1DEB7C;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t98763832B122F67AC2952360B6381F4F5848306F;
// GoogleMobileAds.Api.Mediation.MediationExtras
struct MediationExtras_t53F0F7F90139A2D039272C9764DC880D4B3AB301;
// GoogleMobileAds.Api.Mediation.MediationExtras[]
struct MediationExtrasU5BU5D_tFB81D6FC5C84CCBF15F7317FB1BFAEAC22FCFF16;
// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidCloseCallback
struct GADURewardedAdDidCloseCallback_t506A5A3B01F7221AB06AC6E689610FDCE627BCAF;
// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToReceiveAdWithErrorCallback
struct GADURewardedAdDidFailToReceiveAdWithErrorCallback_tCDA36987E2F970C589B4F9B0D153AF5EC883F9BE;
// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToShowAdWithErrorCallback
struct GADURewardedAdDidFailToShowAdWithErrorCallback_t7ECC0C4E4E19D517843B7F217597B1365D6B2BF8;
// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidOpenCallback
struct GADURewardedAdDidOpenCallback_t3C1F9C88CBDD1DDE862D771C31FBFDFD30BCBB9C;
// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidReceiveAdCallback
struct GADURewardedAdDidReceiveAdCallback_t643161A4F15EE54392448B33D32F455E4F988E5A;
// GoogleMobileAds.iOS.RewardedAdClient/GADUUserEarnedRewardCallback
struct GADUUserEarnedRewardCallback_tD3405735D8FA00F085D1F680CBA864C85F5CEC62;
// GoogleMobileAds.iOS.Utils
struct Utils_t556E7CC3B1D0D46BFFE21762D6F9E776521277D4;
// IncentiveController
struct IncentiveController_t808EB287A43214CBB4B6D0BCF401B1973A86CC5C;
// IncentiveSpawner
struct IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD;
// Joystick
struct Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB;
// MissileController
struct MissileController_t00541937DA8E984F65B35C796E2A26960D58465E;
// MissileSpawner
struct MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF;
// MissileSpawner/<Spawning>d__6
struct U3CSpawningU3Ed__6_t5AEC324527E86BE881896DEC924A820D204E884B;
// MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t0B801029DE3A1B9D601C52FDBED1EC104703FB02;
// PersistableObject
struct PersistableObject_t4C26456E3EA82C26268CB57F2113EA1C2BC3C426;
// PersistentStorage
struct PersistentStorage_tF3F37AEB47F8A3A37612B6965C91CA7E6E2082B0;
// PlanetController
struct PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF;
// PlanetSpawner
struct PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE;
// PlayerController
struct PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85;
// SelfDestroy
struct SelfDestroy_t914E0DDB257662ECE11BA3AA2280DE94351400CB;
// ShipInfoController
struct ShipInfoController_tB4A1582E3DFCB36D073E261496C5E13038F6FA9A;
// ShipRequirements
struct ShipRequirements_tFDDCB2950CFF188C8F8F935EB2BC1574AE18D297;
// ShipSpecs
struct ShipSpecs_tAB40A70A93C82661D7BBD774D178FE654AA27DF0;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_tC73654392B284B89334464107B696C9BD89776D9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t7D654D5D811EA1E18FB487C5E2E5081DEC5F9975;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t8F38EE057190BE9897CDE829F7EB4282DF6F3EBA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650;
// System.Collections.Generic.List`1<UnityEngine.GameObject>[]
struct List_1U5BU5D_t94B00E308FD53421F9A8256D755B8AAED7BC9F06;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.BinaryReader
struct BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969;
// System.IO.BinaryWriter
struct BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3;
// System.IO.FileStream
struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.Decoder
struct Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26;
// System.Text.Encoder
struct Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UiDisplayFps
struct UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D;
// UnityEngine.Rigidbody
struct Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;
// VariableJoystick
struct VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1;

IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameDataReader_t2D0084ECC4827F2E510F29A214562FAA32B32E97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameDataWriter_tDE6D451FD1A567A30F2189551054DEE43E1DEB7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1U5BU5D_t94B00E308FD53421F9A8256D755B8AAED7BC9F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawningU3Ed__6_t5AEC324527E86BE881896DEC924A820D204E884B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A5E7A05836B400F9DE317B87DF54111B135FDBE;
IL2CPP_EXTERN_C String_t* _stringLiteral1E642BDF46FE31BC40EF90D05487FB4F4E783170;
IL2CPP_EXTERN_C String_t* _stringLiteral2DA2851FFF39350C99BB7AD4124737E960D9DE37;
IL2CPP_EXTERN_C String_t* _stringLiteral356A192B7913B04C54574D18C28D46E6395428AB;
IL2CPP_EXTERN_C String_t* _stringLiteral38F6D7875E3195BDAEE448D2CB6917F3AE4994AF;
IL2CPP_EXTERN_C String_t* _stringLiteral3A410CB4DE736B7DFFDB58561D8DF20B1E72E2B0;
IL2CPP_EXTERN_C String_t* _stringLiteral482DBBAC8498C7AC42E17295F275719E62121402;
IL2CPP_EXTERN_C String_t* _stringLiteral54C66CE3FC562A5C0CED9F04DB7AE0F27825865D;
IL2CPP_EXTERN_C String_t* _stringLiteral75CED707AD7969184F544055D29CD6DC0A2F66DF;
IL2CPP_EXTERN_C String_t* _stringLiteralA3F80B87A456136FC59C442BD1EE5B5EEC2430F1;
IL2CPP_EXTERN_C String_t* _stringLiteralA9749253C369D0C8855999E9DF1E54FFB9CB0E5F;
IL2CPP_EXTERN_C String_t* _stringLiteralB33A0C1D823C639909D93A4C283DD29937CA70B2;
IL2CPP_EXTERN_C String_t* _stringLiteralBA1DD0B660CC874C44EF9074A1D2B137291A9351;
IL2CPP_EXTERN_C String_t* _stringLiteralBA5D8C466BB20F75587D894E0540D80CFA945225;
IL2CPP_EXTERN_C String_t* _stringLiteralD1E0451303B39E580BF0A8C185CBC4EDD8C5B177;
IL2CPP_EXTERN_C String_t* _stringLiteralD443A1185575C125D61E0AF393B044D7B06EF572;
IL2CPP_EXTERN_C String_t* _stringLiteralE6617A78009D6D4ED88EC0B325B81A46A1756B63;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerController_t4CE339054014370D89B89922EDC0EA2766589C85_m503EAA28F55B66971C880C00538F81DCCB8C1629_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m3378B4792B81EF81397CB9D9A761BD7149BD27F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m16C0E963A012498CD27422B463DB327BA4C7A321_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB4D942857769BA4A52C25194705752C32D86DCED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB81C8E39092695921473DBCA98385B2C53AFA7CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mBFE61DBAEB92C4FB64F6B1ACF2E895D0467CE1E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6E6A22A8620F5A5582BB67E367BE5086D7D895A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB55179B6FAFF356F8635980C5BE36716D5A3CF7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCCD47EE234D4C2A16ED96329CC6BC10D2C101702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF9F196771804D9FAE1887C1EE679DB80CF90182D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m42A600F939D181CE139B9C26F825FD4BC28F6F1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB8FC184CAAB4A8E56B08699B9C9894803A9EA58A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBEC9B470213860581893E0F197CAAE657B8B6C69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF1A272E02A81B502A1CDF431D0AC41BE3D53E764_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_m64E547BB2F34853E78EB9487F66094E4FAF5CB0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMissileController_t00541937DA8E984F65B35C796E2A26960D58465E_m873071DFF79DDC7F994B6D1735D0749E10BCBE8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF_m80B9F78DC497D7E2E0040FB39FACBBE001E1B283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE_m5B60021AA806475686C0E7896FBFF1D2B88DE21D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m43C07809909DE265C356A2CD8E8B290E74E2EFC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m2EC6A826B51D71BE1AB94EEFB697BC6412B1CDF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m434E29A1251E81B5A2124466105823011C462BF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mCE8DF4076F0FB5A76A7D21A657E69AF3BB683018_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m739CC8C648FEC19900D51E4F3BCE6B15D3C6325A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE24C416317D3F4E40A03014ED01FDE0F4FFDC8BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m3F60BC23F48E82BD2B61BF75F6B55502FD6FE250_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m9EDDA3FC2B886F793AC331A3E3617416D931833E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mA2BC7FE28E1E54F6DED8F2DA5ACA72A56083E43D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mD65884636E94AF88C2745255BBE130A1B64BA294_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB231DEE33107C7E966680F0404FFDD7939B24625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mE966D0285B7519BF51C1B117A064B4F40858077A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawningU3Ed__6_System_Collections_IEnumerator_Reset_m14275F66582966CAABC3C913B6A2113BC7FD688B_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t GADURewardedAdDidCloseCallback_BeginInvoke_mBB27DC37FD25BDFE8FD264F7C95E02179087A9C5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GADURewardedAdDidFailToReceiveAdWithErrorCallback_BeginInvoke_m0BC8E719A53FE7FD5F5AB15B6B76FEF95D32DDAF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GADURewardedAdDidFailToShowAdWithErrorCallback_BeginInvoke_mF750899139C415B39AACDA867A119B9EF7764EA5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GADURewardedAdDidOpenCallback_BeginInvoke_mFB864A51CC2FE867896A57D11F496DD35BF6544C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GADURewardedAdDidReceiveAdCallback_BeginInvoke_m4A31ED913FBA9ADBC0690F1174C7607FEA2F9536_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GADUUserEarnedRewardCallback_BeginInvoke_m8814A0919CCE313552C8A978026C14D210CE08B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IncentiveController_OnDestroy_m54EEB7652687AFE7B8CAE785C584270F642F2CF1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IncentiveController_Start_mF05379CE6F4AFC0424D58E6D633D4821BA5AB6B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IncentiveController_TraceSign_m1FF986ED2378C38DFE808BB4BFF44DB0BD729A0E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IncentiveSpawner_RemoveCurrentIncentives_mEBD3B83D94FAB1D664D007FAC8C70366B84B771A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IncentiveSpawner_SpawnIncentive_mBFA9E65500DFD18ECC05F3FA9C2BCF0C10783655_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IncentiveSpawner_Start_m7C844DBCF4FC316A9A4C02C0246E73EBF034821C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick__ctor_m0CEC3DFCF02C69B8020F600539EB02297E26D1CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MissileController_Destroy_m2B1F06C4D8FE6B21882B3C53CD1D462BF3D4BA8F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MissileController_FixedUpdate_m9A94C24BD1745496E1352E7B2D517CCCD91D3B31_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MissileController_MagnetMissiles_mD2AD58DEEF11C9B86E2B930326359469A3068437_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MissileController_OnTriggerEnter_mE0E6A100574855CFBD1058774726F5DA62A50E8A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MissileController_Rotate_mAA68317C362F23ED1DD2750305099A2DAFF1E915_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MissileController_SpawnCoin_m95389B52202021761B63D8CF7566091FBE855FAF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MissileController_Start_m1F5F68112B67E61761C4D2132AEF33CEE442F388_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MissileController_TraceSign_mBB1E7D70CE1923F076682CB4FC2F4E477BEF237D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MissileSpawner_SpawnMissiles_mA42EF6628C0178238CBD951DAFF49ACAB148E824_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MissileSpawner_Spawning_mB1C5BACE8461A72114E9E58E73633E0F031917CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MissileSpawner_StopSpawning_m2F77018ACE9237D2AA960C6069F5125A323E0119_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PersistentStorage_Awake_mB6B8EA757E6238E02E2AEB4A3C64DF2735717515_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PersistentStorage_Load_m1C6C3F1D542A5747CD71D99AF00895748C6C41F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PersistentStorage_Save_m9FDC60CF0EC913708664A6FBCD539EE4E504443A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlanetController_FixedUpdate_m74288265F6D5717D7E96B5326DAEA6C9752E4BE5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlanetController_OnTriggerExit_mACD939B70B9389B33605235887D7B3EF65C8077F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlanetController_Start_m788EB3E2B4D4CABE9DDE9B53179762AD390BBB17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlanetSpawner_Awake_mA8C344D78CCBFE967C7138C147F32DD1F2C2691E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlanetSpawner_CreatePools_mBC9B7FA0958F1DD7A9AD6D37A781D60DD025A84F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlanetSpawner_InstantiatePlanet_m1826E6E39E54B465A6785F26682802A289784613_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlanetSpawner_ReclaimPlanet_mF2774A8564719B1C9A4F1D2BFD26516E1A822A17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlanetSpawner_SetPlayingMode_m2A302E00C74C199876E1CB89EF4452CF7E4D1319_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlanetSpawner_SpawnPlanetAtPosition_mB3174A1C0A339D7C2D857E14B22B283EDB2139C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlanetSpawner_SpawnPlanet_mEBDD9E4EA7EC7695EC4D67C417BB584EE739C1AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerController_MagnetCoins_mE167FA23D168300F1CE98FDDF69786F47A6188F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerController_Move_m0CD456A5EA1116F1B4EA5A731C7EAC46D26B598F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerController_OnTriggerEnter_m2F6A24BACBA236DC01D4689BD68C270C29607E44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerController_SetPlayingMode_m0B0048F7C02B20115B9E0D9E258E0A1F5B789E5E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerController_Start_mC0C9B9461D0BDAC48EC43715818A4BA63C4F45EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SelfDestroy_Start_m71293DA770D3E74FC33F7DBB4C6D13E28CB68EDF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSpawningU3Ed__6_MoveNext_m511595EF92A35C8B7BC5B35CBE8F53F26CCD942C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSpawningU3Ed__6_System_Collections_IEnumerator_Reset_m14275F66582966CAABC3C913B6A2113BC7FD688B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UiDisplayFps_Update_mAB3F46A645F752849C11F682EDD6CF56A657E8F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UiDisplayFps__ctor_mD68DDF4B48BA37807286DC132397C62A3E475DD6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utils_BuildAdRequest_m79F99FD27AEBB11A401DF217D6C5F537B8CC9FA2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utils_PtrToString_m0284D6A58DAAED94BA52E4781AAC7D55645B4B67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VariableJoystick_OnDrag_m6D6F9FB3802309502B93EF4C2F218969DAEFE619_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VariableJoystick_OnFixed_mBDD3E7597A7E7F75CCB07026E9655F769A6BAD68_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VariableJoystick_OnFloat_mD79CAFA448FD8A0309B82DFA1E6A8D6B8D8CF0F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VariableJoystick_OnPointerDown_m066F12E7818D1CD22977EAEA9FE4AEC0DD179FAC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VariableJoystick_OnPointerUp_m42B201EDAB1B3A2F2ED747FA7A4773E2654DA061_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VariableJoystick__ctor_m8A6171BB962558D6833C6CF80E3E0092DF768D84_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct List_1U5BU5D_t94B00E308FD53421F9A8256D755B8AAED7BC9F06;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252;
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// GameDataReader
struct  GameDataReader_t2D0084ECC4827F2E510F29A214562FAA32B32E97  : public RuntimeObject
{
public:
	// System.IO.BinaryReader GameDataReader::reader
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___reader_0;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(GameDataReader_t2D0084ECC4827F2E510F29A214562FAA32B32E97, ___reader_0)); }
	inline BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * get_reader_0() const { return ___reader_0; }
	inline BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_0), (void*)value);
	}
};


// GameDataWriter
struct  GameDataWriter_tDE6D451FD1A567A30F2189551054DEE43E1DEB7C  : public RuntimeObject
{
public:
	// System.IO.BinaryWriter GameDataWriter::writer
	BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer_0;

public:
	inline static int32_t get_offset_of_writer_0() { return static_cast<int32_t>(offsetof(GameDataWriter_tDE6D451FD1A567A30F2189551054DEE43E1DEB7C, ___writer_0)); }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * get_writer_0() const { return ___writer_0; }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 ** get_address_of_writer_0() { return &___writer_0; }
	inline void set_writer_0(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * value)
	{
		___writer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writer_0), (void*)value);
	}
};


// GoogleMobileAds.Api.Mediation.MediationExtras
struct  MediationExtras_t53F0F7F90139A2D039272C9764DC880D4B3AB301  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.Mediation.MediationExtras::<Extras>k__BackingField
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___U3CExtrasU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MediationExtras_t53F0F7F90139A2D039272C9764DC880D4B3AB301, ___U3CExtrasU3Ek__BackingField_0)); }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * get_U3CExtrasU3Ek__BackingField_0() const { return ___U3CExtrasU3Ek__BackingField_0; }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC ** get_address_of_U3CExtrasU3Ek__BackingField_0() { return &___U3CExtrasU3Ek__BackingField_0; }
	inline void set_U3CExtrasU3Ek__BackingField_0(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * value)
	{
		___U3CExtrasU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtrasU3Ek__BackingField_0), (void*)value);
	}
};


// GoogleMobileAds.iOS.Utils
struct  Utils_t556E7CC3B1D0D46BFFE21762D6F9E776521277D4  : public RuntimeObject
{
public:

public:
};


// MissileSpawner_<Spawning>d__6
struct  U3CSpawningU3Ed__6_t5AEC324527E86BE881896DEC924A820D204E884B  : public RuntimeObject
{
public:
	// System.Int32 MissileSpawner_<Spawning>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MissileSpawner_<Spawning>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MissileSpawner MissileSpawner_<Spawning>d__6::<>4__this
	MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSpawningU3Ed__6_t5AEC324527E86BE881896DEC924A820D204E884B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSpawningU3Ed__6_t5AEC324527E86BE881896DEC924A820D204E884B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSpawningU3Ed__6_t5AEC324527E86BE881896DEC924A820D204E884B, ___U3CU3E4__this_2)); }
	inline MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// ShipRequirements
struct  ShipRequirements_tFDDCB2950CFF188C8F8F935EB2BC1574AE18D297  : public RuntimeObject
{
public:
	// System.Int32 ShipRequirements::Coins
	int32_t ___Coins_0;
	// System.Int32 ShipRequirements::Score
	int32_t ___Score_1;
	// System.Int32 ShipRequirements::MissilesCollapsed
	int32_t ___MissilesCollapsed_2;

public:
	inline static int32_t get_offset_of_Coins_0() { return static_cast<int32_t>(offsetof(ShipRequirements_tFDDCB2950CFF188C8F8F935EB2BC1574AE18D297, ___Coins_0)); }
	inline int32_t get_Coins_0() const { return ___Coins_0; }
	inline int32_t* get_address_of_Coins_0() { return &___Coins_0; }
	inline void set_Coins_0(int32_t value)
	{
		___Coins_0 = value;
	}

	inline static int32_t get_offset_of_Score_1() { return static_cast<int32_t>(offsetof(ShipRequirements_tFDDCB2950CFF188C8F8F935EB2BC1574AE18D297, ___Score_1)); }
	inline int32_t get_Score_1() const { return ___Score_1; }
	inline int32_t* get_address_of_Score_1() { return &___Score_1; }
	inline void set_Score_1(int32_t value)
	{
		___Score_1 = value;
	}

	inline static int32_t get_offset_of_MissilesCollapsed_2() { return static_cast<int32_t>(offsetof(ShipRequirements_tFDDCB2950CFF188C8F8F935EB2BC1574AE18D297, ___MissilesCollapsed_2)); }
	inline int32_t get_MissilesCollapsed_2() const { return ___MissilesCollapsed_2; }
	inline int32_t* get_address_of_MissilesCollapsed_2() { return &___MissilesCollapsed_2; }
	inline void set_MissilesCollapsed_2(int32_t value)
	{
		___MissilesCollapsed_2 = value;
	}
};


// ShipSpecs
struct  ShipSpecs_tAB40A70A93C82661D7BBD774D178FE654AA27DF0  : public RuntimeObject
{
public:
	// System.Single ShipSpecs::Speed
	float ___Speed_0;
	// System.Single ShipSpecs::Steering
	float ___Steering_1;

public:
	inline static int32_t get_offset_of_Speed_0() { return static_cast<int32_t>(offsetof(ShipSpecs_tAB40A70A93C82661D7BBD774D178FE654AA27DF0, ___Speed_0)); }
	inline float get_Speed_0() const { return ___Speed_0; }
	inline float* get_address_of_Speed_0() { return &___Speed_0; }
	inline void set_Speed_0(float value)
	{
		___Speed_0 = value;
	}

	inline static int32_t get_offset_of_Steering_1() { return static_cast<int32_t>(offsetof(ShipSpecs_tAB40A70A93C82661D7BBD774D178FE654AA27DF0, ___Steering_1)); }
	inline float get_Steering_1() const { return ___Steering_1; }
	inline float* get_address_of_Steering_1() { return &___Steering_1; }
	inline void set_Steering_1(float value)
	{
		___Steering_1 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___entries_1)); }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___keys_7)); }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___values_8)); }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.String>
struct  HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t7D654D5D811EA1E18FB487C5E2E5081DEC5F9975* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61, ____slots_8)); }
	inline SlotU5BU5D_t7D654D5D811EA1E18FB487C5E2E5081DEC5F9975* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t7D654D5D811EA1E18FB487C5E2E5081DEC5F9975** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t7D654D5D811EA1E18FB487C5E2E5081DEC5F9975* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct  List_1_t8F38EE057190BE9897CDE829F7EB4282DF6F3EBA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MediationExtrasU5BU5D_tFB81D6FC5C84CCBF15F7317FB1BFAEAC22FCFF16* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8F38EE057190BE9897CDE829F7EB4282DF6F3EBA, ____items_1)); }
	inline MediationExtrasU5BU5D_tFB81D6FC5C84CCBF15F7317FB1BFAEAC22FCFF16* get__items_1() const { return ____items_1; }
	inline MediationExtrasU5BU5D_tFB81D6FC5C84CCBF15F7317FB1BFAEAC22FCFF16** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MediationExtrasU5BU5D_tFB81D6FC5C84CCBF15F7317FB1BFAEAC22FCFF16* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8F38EE057190BE9897CDE829F7EB4282DF6F3EBA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8F38EE057190BE9897CDE829F7EB4282DF6F3EBA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8F38EE057190BE9897CDE829F7EB4282DF6F3EBA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8F38EE057190BE9897CDE829F7EB4282DF6F3EBA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MediationExtrasU5BU5D_tFB81D6FC5C84CCBF15F7317FB1BFAEAC22FCFF16* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8F38EE057190BE9897CDE829F7EB4282DF6F3EBA_StaticFields, ____emptyArray_5)); }
	inline MediationExtrasU5BU5D_tFB81D6FC5C84CCBF15F7317FB1BFAEAC22FCFF16* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MediationExtrasU5BU5D_tFB81D6FC5C84CCBF15F7317FB1BFAEAC22FCFF16** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MediationExtrasU5BU5D_tFB81D6FC5C84CCBF15F7317FB1BFAEAC22FCFF16* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650, ____items_1)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};

// System.IO.BinaryReader
struct  BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;

public:
	inline static int32_t get_offset_of_m_stream_0() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_stream_0)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_m_stream_0() const { return ___m_stream_0; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_m_stream_0() { return &___m_stream_0; }
	inline void set_m_stream_0(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___m_stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stream_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_buffer_1() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_buffer_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_buffer_1() const { return ___m_buffer_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_buffer_1() { return &___m_buffer_1; }
	inline void set_m_buffer_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_decoder_2() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_decoder_2)); }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * get_m_decoder_2() const { return ___m_decoder_2; }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 ** get_address_of_m_decoder_2() { return &___m_decoder_2; }
	inline void set_m_decoder_2(Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * value)
	{
		___m_decoder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_decoder_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_charBytes_3() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_charBytes_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_charBytes_3() const { return ___m_charBytes_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_charBytes_3() { return &___m_charBytes_3; }
	inline void set_m_charBytes_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_charBytes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_charBytes_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_singleChar_4() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_singleChar_4)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_singleChar_4() const { return ___m_singleChar_4; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_singleChar_4() { return &___m_singleChar_4; }
	inline void set_m_singleChar_4(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_singleChar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_singleChar_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_charBuffer_5() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_charBuffer_5)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_charBuffer_5() const { return ___m_charBuffer_5; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_charBuffer_5() { return &___m_charBuffer_5; }
	inline void set_m_charBuffer_5(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_charBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_charBuffer_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_maxCharsSize_6() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_maxCharsSize_6)); }
	inline int32_t get_m_maxCharsSize_6() const { return ___m_maxCharsSize_6; }
	inline int32_t* get_address_of_m_maxCharsSize_6() { return &___m_maxCharsSize_6; }
	inline void set_m_maxCharsSize_6(int32_t value)
	{
		___m_maxCharsSize_6 = value;
	}

	inline static int32_t get_offset_of_m_2BytesPerChar_7() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_2BytesPerChar_7)); }
	inline bool get_m_2BytesPerChar_7() const { return ___m_2BytesPerChar_7; }
	inline bool* get_address_of_m_2BytesPerChar_7() { return &___m_2BytesPerChar_7; }
	inline void set_m_2BytesPerChar_7(bool value)
	{
		___m_2BytesPerChar_7 = value;
	}

	inline static int32_t get_offset_of_m_isMemoryStream_8() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_isMemoryStream_8)); }
	inline bool get_m_isMemoryStream_8() const { return ___m_isMemoryStream_8; }
	inline bool* get_address_of_m_isMemoryStream_8() { return &___m_isMemoryStream_8; }
	inline void set_m_isMemoryStream_8(bool value)
	{
		___m_isMemoryStream_8 = value;
	}

	inline static int32_t get_offset_of_m_leaveOpen_9() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_leaveOpen_9)); }
	inline bool get_m_leaveOpen_9() const { return ___m_leaveOpen_9; }
	inline bool* get_address_of_m_leaveOpen_9() { return &___m_leaveOpen_9; }
	inline void set_m_leaveOpen_9(bool value)
	{
		___m_leaveOpen_9 = value;
	}
};


// System.IO.BinaryWriter
struct  BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;

public:
	inline static int32_t get_offset_of_OutStream_1() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ___OutStream_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_OutStream_1() const { return ___OutStream_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_OutStream_1() { return &___OutStream_1; }
	inline void set_OutStream_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___OutStream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutStream_1), (void*)value);
	}

	inline static int32_t get_offset_of__buffer_2() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____buffer_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buffer_2() const { return ____buffer_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buffer_2() { return &____buffer_2; }
	inline void set__buffer_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_2), (void*)value);
	}

	inline static int32_t get_offset_of__encoding_3() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get__encoding_3() const { return ____encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of__encoding_3() { return &____encoding_3; }
	inline void set__encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		____encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of__encoder_4() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____encoder_4)); }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * get__encoder_4() const { return ____encoder_4; }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 ** get_address_of__encoder_4() { return &____encoder_4; }
	inline void set__encoder_4(Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * value)
	{
		____encoder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoder_4), (void*)value);
	}

	inline static int32_t get_offset_of__leaveOpen_5() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____leaveOpen_5)); }
	inline bool get__leaveOpen_5() const { return ____leaveOpen_5; }
	inline bool* get_address_of__leaveOpen_5() { return &____leaveOpen_5; }
	inline void set__leaveOpen_5(bool value)
	{
		____leaveOpen_5 = value;
	}

	inline static int32_t get_offset_of__largeByteBuffer_6() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____largeByteBuffer_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__largeByteBuffer_6() const { return ____largeByteBuffer_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__largeByteBuffer_6() { return &____largeByteBuffer_6; }
	inline void set__largeByteBuffer_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____largeByteBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____largeByteBuffer_6), (void*)value);
	}

	inline static int32_t get_offset_of__maxChars_7() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____maxChars_7)); }
	inline int32_t get__maxChars_7() const { return ____maxChars_7; }
	inline int32_t* get_address_of__maxChars_7() { return &____maxChars_7; }
	inline void set__maxChars_7(int32_t value)
	{
		____maxChars_7 = value;
	}
};

struct BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_StaticFields
{
public:
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_StaticFields, ___Null_0)); }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * get_Null_0() const { return ___Null_0; }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// MonoPInvokeCallbackAttribute
struct  MonoPInvokeCallbackAttribute_t0B801029DE3A1B9D601C52FDBED1EC104703FB02  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1_Enumerator<System.Object>
struct  Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1_Enumerator::_set
	HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1_Enumerator::_current
	RuntimeObject * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A, ____set_0)); }
	inline HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897 * get__set_0() const { return ____set_0; }
	inline HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A, ____current_3)); }
	inline RuntimeObject * get__current_3() const { return ____current_3; }
	inline RuntimeObject ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1_Enumerator<System.String>
struct  Enumerator_tF6B5A6D64F2347BF9A12A794D4A8C252CA1431A7 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1_Enumerator::_set
	HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1_Enumerator::_current
	String_t* ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_tF6B5A6D64F2347BF9A12A794D4A8C252CA1431A7, ____set_0)); }
	inline HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * get__set_0() const { return ____set_0; }
	inline HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_tF6B5A6D64F2347BF9A12A794D4A8C252CA1431A7, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_tF6B5A6D64F2347BF9A12A794D4A8C252CA1431A7, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_tF6B5A6D64F2347BF9A12A794D4A8C252CA1431A7, ____current_3)); }
	inline String_t* get__current_3() const { return ____current_3; }
	inline String_t** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(String_t* value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct  KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<GoogleMobileAds.Api.Mediation.MediationExtras>
struct  Enumerator_t1B7A508A639F9A6260571CC57EAB3F3C4B96A49C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t8F38EE057190BE9897CDE829F7EB4282DF6F3EBA * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	MediationExtras_t53F0F7F90139A2D039272C9764DC880D4B3AB301 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t1B7A508A639F9A6260571CC57EAB3F3C4B96A49C, ___list_0)); }
	inline List_1_t8F38EE057190BE9897CDE829F7EB4282DF6F3EBA * get_list_0() const { return ___list_0; }
	inline List_1_t8F38EE057190BE9897CDE829F7EB4282DF6F3EBA ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t8F38EE057190BE9897CDE829F7EB4282DF6F3EBA * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t1B7A508A639F9A6260571CC57EAB3F3C4B96A49C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t1B7A508A639F9A6260571CC57EAB3F3C4B96A49C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1B7A508A639F9A6260571CC57EAB3F3C4B96A49C, ___current_3)); }
	inline MediationExtras_t53F0F7F90139A2D039272C9764DC880D4B3AB301 * get_current_3() const { return ___current_3; }
	inline MediationExtras_t53F0F7F90139A2D039272C9764DC880D4B3AB301 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(MediationExtras_t53F0F7F90139A2D039272C9764DC880D4B3AB301 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.String>
struct  Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D, ___list_0)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_list_0() const { return ___list_0; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// System.Nullable`1<System.Boolean>
struct  Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};

// GoogleMobileAds.Api.Gender
struct  Gender_tB13F4EC090657F9C9725E7EAEFCA6056E5C72660 
{
public:
	// System.Int32 GoogleMobileAds.Api.Gender::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Gender_tB13F4EC090657F9C9725E7EAEFCA6056E5C72660, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// JoystickMode
struct  JoystickMode_tA913D8E070DC197A739670BB03CA088266AE3EC9 
{
public:
	// System.Int32 JoystickMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JoystickMode_tA913D8E070DC197A739670BB03CA088266AE3EC9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.Object,System.Object>
struct  Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___dictionary_0)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___current_3)); }
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.String,System.String>
struct  Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3, ___dictionary_0)); }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3, ___current_3)); }
	inline KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.IO.FileAccess
struct  FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileMode
struct  FileMode_tD19D05B1E6CAF201F88401B04FDB25227664C419 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_tD19D05B1E6CAF201F88401B04FDB25227664C419, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Nullable`1<System.DateTime>
struct  Nullable_1_t9B468FE267D697A84B680BFB00D8C20BAB1A26E7 
{
public:
	// T System.Nullable`1::value
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9B468FE267D697A84B680BFB00D8C20BAB1A26E7, ___value_0)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_value_0() const { return ___value_0; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9B468FE267D697A84B680BFB00D8C20BAB1A26E7, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventSystems.PointerEventData_InputButton
struct  InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData_InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___m_GameObject_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___module_1)); }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldPosition_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldNormal_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___screenPosition_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___screenPosition_9 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_pinvoke
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_com
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Space
struct  Space_t0F622BF939B7A47E0F9632CE968F7D72FC63AF58 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t0F622BF939B7A47E0F9632CE968F7D72FC63AF58, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileStream
struct  FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_6), (void*)value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___safeHandle_8)); }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_8), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_4), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_5), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// System.Nullable`1<GoogleMobileAds.Api.Gender>
struct  Nullable_1_t65AAF2600D9569366D224E2EB7B3F65128A96D1B 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t65AAF2600D9569366D224E2EB7B3F65128A96D1B, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t65AAF2600D9569366D224E2EB7B3F65128A96D1B, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32Enum>
struct  Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
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
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData_InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___m_PointerPress_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___hovered_9)); }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// GoogleMobileAds.Api.AdRequest
struct  AdRequest_t98763832B122F67AC2952360B6381F4F5848306F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest::<TestDevices>k__BackingField
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___U3CTestDevicesU3Ek__BackingField_2;
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * ___U3CKeywordsU3Ek__BackingField_3;
	// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest::<Birthday>k__BackingField
	Nullable_1_t9B468FE267D697A84B680BFB00D8C20BAB1A26E7  ___U3CBirthdayU3Ek__BackingField_4;
	// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest::<Gender>k__BackingField
	Nullable_1_t65AAF2600D9569366D224E2EB7B3F65128A96D1B  ___U3CGenderU3Ek__BackingField_5;
	// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest::<TagForChildDirectedTreatment>k__BackingField
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___U3CExtrasU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t8F38EE057190BE9897CDE829F7EB4282DF6F3EBA * ___U3CMediationExtrasU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CTestDevicesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdRequest_t98763832B122F67AC2952360B6381F4F5848306F, ___U3CTestDevicesU3Ek__BackingField_2)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_U3CTestDevicesU3Ek__BackingField_2() const { return ___U3CTestDevicesU3Ek__BackingField_2; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_U3CTestDevicesU3Ek__BackingField_2() { return &___U3CTestDevicesU3Ek__BackingField_2; }
	inline void set_U3CTestDevicesU3Ek__BackingField_2(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___U3CTestDevicesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTestDevicesU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AdRequest_t98763832B122F67AC2952360B6381F4F5848306F, ___U3CKeywordsU3Ek__BackingField_3)); }
	inline HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * get_U3CKeywordsU3Ek__BackingField_3() const { return ___U3CKeywordsU3Ek__BackingField_3; }
	inline HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 ** get_address_of_U3CKeywordsU3Ek__BackingField_3() { return &___U3CKeywordsU3Ek__BackingField_3; }
	inline void set_U3CKeywordsU3Ek__BackingField_3(HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * value)
	{
		___U3CKeywordsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBirthdayU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AdRequest_t98763832B122F67AC2952360B6381F4F5848306F, ___U3CBirthdayU3Ek__BackingField_4)); }
	inline Nullable_1_t9B468FE267D697A84B680BFB00D8C20BAB1A26E7  get_U3CBirthdayU3Ek__BackingField_4() const { return ___U3CBirthdayU3Ek__BackingField_4; }
	inline Nullable_1_t9B468FE267D697A84B680BFB00D8C20BAB1A26E7 * get_address_of_U3CBirthdayU3Ek__BackingField_4() { return &___U3CBirthdayU3Ek__BackingField_4; }
	inline void set_U3CBirthdayU3Ek__BackingField_4(Nullable_1_t9B468FE267D697A84B680BFB00D8C20BAB1A26E7  value)
	{
		___U3CBirthdayU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CGenderU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AdRequest_t98763832B122F67AC2952360B6381F4F5848306F, ___U3CGenderU3Ek__BackingField_5)); }
	inline Nullable_1_t65AAF2600D9569366D224E2EB7B3F65128A96D1B  get_U3CGenderU3Ek__BackingField_5() const { return ___U3CGenderU3Ek__BackingField_5; }
	inline Nullable_1_t65AAF2600D9569366D224E2EB7B3F65128A96D1B * get_address_of_U3CGenderU3Ek__BackingField_5() { return &___U3CGenderU3Ek__BackingField_5; }
	inline void set_U3CGenderU3Ek__BackingField_5(Nullable_1_t65AAF2600D9569366D224E2EB7B3F65128A96D1B  value)
	{
		___U3CGenderU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AdRequest_t98763832B122F67AC2952360B6381F4F5848306F, ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_U3CTagForChildDirectedTreatmentU3Ek__BackingField_6() const { return ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_6() { return &___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6; }
	inline void set_U3CTagForChildDirectedTreatmentU3Ek__BackingField_6(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AdRequest_t98763832B122F67AC2952360B6381F4F5848306F, ___U3CExtrasU3Ek__BackingField_7)); }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * get_U3CExtrasU3Ek__BackingField_7() const { return ___U3CExtrasU3Ek__BackingField_7; }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC ** get_address_of_U3CExtrasU3Ek__BackingField_7() { return &___U3CExtrasU3Ek__BackingField_7; }
	inline void set_U3CExtrasU3Ek__BackingField_7(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * value)
	{
		___U3CExtrasU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtrasU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMediationExtrasU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AdRequest_t98763832B122F67AC2952360B6381F4F5848306F, ___U3CMediationExtrasU3Ek__BackingField_8)); }
	inline List_1_t8F38EE057190BE9897CDE829F7EB4282DF6F3EBA * get_U3CMediationExtrasU3Ek__BackingField_8() const { return ___U3CMediationExtrasU3Ek__BackingField_8; }
	inline List_1_t8F38EE057190BE9897CDE829F7EB4282DF6F3EBA ** get_address_of_U3CMediationExtrasU3Ek__BackingField_8() { return &___U3CMediationExtrasU3Ek__BackingField_8; }
	inline void set_U3CMediationExtrasU3Ek__BackingField_8(List_1_t8F38EE057190BE9897CDE829F7EB4282DF6F3EBA * value)
	{
		___U3CMediationExtrasU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMediationExtrasU3Ek__BackingField_8), (void*)value);
	}
};


// GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidCloseCallback
struct  GADURewardedAdDidCloseCallback_t506A5A3B01F7221AB06AC6E689610FDCE627BCAF  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidFailToReceiveAdWithErrorCallback
struct  GADURewardedAdDidFailToReceiveAdWithErrorCallback_tCDA36987E2F970C589B4F9B0D153AF5EC883F9BE  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidFailToShowAdWithErrorCallback
struct  GADURewardedAdDidFailToShowAdWithErrorCallback_t7ECC0C4E4E19D517843B7F217597B1365D6B2BF8  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidOpenCallback
struct  GADURewardedAdDidOpenCallback_t3C1F9C88CBDD1DDE862D771C31FBFDFD30BCBB9C  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidReceiveAdCallback
struct  GADURewardedAdDidReceiveAdCallback_t643161A4F15EE54392448B33D32F455E4F988E5A  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.RewardedAdClient_GADUUserEarnedRewardCallback
struct  GADUUserEarnedRewardCallback_tD3405735D8FA00F085D1F680CBA864C85F5CEC62  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.RectTransform
struct  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20  : public Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA
{
public:

public:
};

struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields
{
public:
	// UnityEngine.RectTransform_ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// IncentiveController
struct  IncentiveController_t808EB287A43214CBB4B6D0BCF401B1973A86CC5C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject IncentiveController::signPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___signPrefab_4;
	// UnityEngine.GameObject IncentiveController::sign
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___sign_5;
	// UnityEngine.GameObject IncentiveController::canvas
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___canvas_6;

public:
	inline static int32_t get_offset_of_signPrefab_4() { return static_cast<int32_t>(offsetof(IncentiveController_t808EB287A43214CBB4B6D0BCF401B1973A86CC5C, ___signPrefab_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_signPrefab_4() const { return ___signPrefab_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_signPrefab_4() { return &___signPrefab_4; }
	inline void set_signPrefab_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___signPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_sign_5() { return static_cast<int32_t>(offsetof(IncentiveController_t808EB287A43214CBB4B6D0BCF401B1973A86CC5C, ___sign_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_sign_5() const { return ___sign_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_sign_5() { return &___sign_5; }
	inline void set_sign_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___sign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sign_5), (void*)value);
	}

	inline static int32_t get_offset_of_canvas_6() { return static_cast<int32_t>(offsetof(IncentiveController_t808EB287A43214CBB4B6D0BCF401B1973A86CC5C, ___canvas_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_canvas_6() const { return ___canvas_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_canvas_6() { return &___canvas_6; }
	inline void set_canvas_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___canvas_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_6), (void*)value);
	}
};


// IncentiveSpawner
struct  IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform IncentiveSpawner::playerTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___playerTransform_4;
	// UnityEngine.GameObject[] IncentiveSpawner::incentivePrefabs
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___incentivePrefabs_5;
	// System.Single IncentiveSpawner::radius
	float ___radius_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> IncentiveSpawner::currentIncentives
	List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * ___currentIncentives_7;

public:
	inline static int32_t get_offset_of_playerTransform_4() { return static_cast<int32_t>(offsetof(IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD, ___playerTransform_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_playerTransform_4() const { return ___playerTransform_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_playerTransform_4() { return &___playerTransform_4; }
	inline void set_playerTransform_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___playerTransform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerTransform_4), (void*)value);
	}

	inline static int32_t get_offset_of_incentivePrefabs_5() { return static_cast<int32_t>(offsetof(IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD, ___incentivePrefabs_5)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_incentivePrefabs_5() const { return ___incentivePrefabs_5; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_incentivePrefabs_5() { return &___incentivePrefabs_5; }
	inline void set_incentivePrefabs_5(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___incentivePrefabs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___incentivePrefabs_5), (void*)value);
	}

	inline static int32_t get_offset_of_radius_6() { return static_cast<int32_t>(offsetof(IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD, ___radius_6)); }
	inline float get_radius_6() const { return ___radius_6; }
	inline float* get_address_of_radius_6() { return &___radius_6; }
	inline void set_radius_6(float value)
	{
		___radius_6 = value;
	}

	inline static int32_t get_offset_of_currentIncentives_7() { return static_cast<int32_t>(offsetof(IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD, ___currentIncentives_7)); }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * get_currentIncentives_7() const { return ___currentIncentives_7; }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 ** get_address_of_currentIncentives_7() { return &___currentIncentives_7; }
	inline void set_currentIncentives_7(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * value)
	{
		___currentIncentives_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentIncentives_7), (void*)value);
	}
};


// Joystick
struct  Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single Joystick::handleLimit
	float ___handleLimit_4;
	// JoystickMode Joystick::joystickMode
	int32_t ___joystickMode_5;
	// UnityEngine.Vector2 Joystick::inputVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___inputVector_6;
	// UnityEngine.RectTransform Joystick::background
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___background_7;
	// UnityEngine.RectTransform Joystick::handle
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___handle_8;

public:
	inline static int32_t get_offset_of_handleLimit_4() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___handleLimit_4)); }
	inline float get_handleLimit_4() const { return ___handleLimit_4; }
	inline float* get_address_of_handleLimit_4() { return &___handleLimit_4; }
	inline void set_handleLimit_4(float value)
	{
		___handleLimit_4 = value;
	}

	inline static int32_t get_offset_of_joystickMode_5() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___joystickMode_5)); }
	inline int32_t get_joystickMode_5() const { return ___joystickMode_5; }
	inline int32_t* get_address_of_joystickMode_5() { return &___joystickMode_5; }
	inline void set_joystickMode_5(int32_t value)
	{
		___joystickMode_5 = value;
	}

	inline static int32_t get_offset_of_inputVector_6() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___inputVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_inputVector_6() const { return ___inputVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_inputVector_6() { return &___inputVector_6; }
	inline void set_inputVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___inputVector_6 = value;
	}

	inline static int32_t get_offset_of_background_7() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___background_7)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_background_7() const { return ___background_7; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_background_7() { return &___background_7; }
	inline void set_background_7(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___background_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___background_7), (void*)value);
	}

	inline static int32_t get_offset_of_handle_8() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___handle_8)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_handle_8() const { return ___handle_8; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_handle_8() { return &___handle_8; }
	inline void set_handle_8(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___handle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handle_8), (void*)value);
	}
};


// MissileController
struct  MissileController_t00541937DA8E984F65B35C796E2A26960D58465E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// PlayerController MissileController::playerController
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * ___playerController_4;
	// UnityEngine.GameObject MissileController::signPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___signPrefab_5;
	// UnityEngine.GameObject MissileController::coinPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___coinPrefab_6;
	// UnityEngine.GameObject MissileController::explosionPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___explosionPrefab_7;
	// System.Single MissileController::degreesRotatePerFrame
	float ___degreesRotatePerFrame_8;
	// System.Single MissileController::speed
	float ___speed_9;
	// System.Single MissileController::magnetSpeed
	float ___magnetSpeed_10;
	// System.Single MissileController::magnetRadius
	float ___magnetRadius_11;
	// UnityEngine.GameObject MissileController::sign
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___sign_12;
	// UnityEngine.GameObject MissileController::canvas
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___canvas_13;
	// GameController MissileController::gameController
	GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * ___gameController_14;
	// UnityEngine.Rigidbody MissileController::rb
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___rb_15;

public:
	inline static int32_t get_offset_of_playerController_4() { return static_cast<int32_t>(offsetof(MissileController_t00541937DA8E984F65B35C796E2A26960D58465E, ___playerController_4)); }
	inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * get_playerController_4() const { return ___playerController_4; }
	inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 ** get_address_of_playerController_4() { return &___playerController_4; }
	inline void set_playerController_4(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * value)
	{
		___playerController_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerController_4), (void*)value);
	}

	inline static int32_t get_offset_of_signPrefab_5() { return static_cast<int32_t>(offsetof(MissileController_t00541937DA8E984F65B35C796E2A26960D58465E, ___signPrefab_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_signPrefab_5() const { return ___signPrefab_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_signPrefab_5() { return &___signPrefab_5; }
	inline void set_signPrefab_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___signPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_coinPrefab_6() { return static_cast<int32_t>(offsetof(MissileController_t00541937DA8E984F65B35C796E2A26960D58465E, ___coinPrefab_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_coinPrefab_6() const { return ___coinPrefab_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_coinPrefab_6() { return &___coinPrefab_6; }
	inline void set_coinPrefab_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___coinPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coinPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_explosionPrefab_7() { return static_cast<int32_t>(offsetof(MissileController_t00541937DA8E984F65B35C796E2A26960D58465E, ___explosionPrefab_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_explosionPrefab_7() const { return ___explosionPrefab_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_explosionPrefab_7() { return &___explosionPrefab_7; }
	inline void set_explosionPrefab_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___explosionPrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explosionPrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_degreesRotatePerFrame_8() { return static_cast<int32_t>(offsetof(MissileController_t00541937DA8E984F65B35C796E2A26960D58465E, ___degreesRotatePerFrame_8)); }
	inline float get_degreesRotatePerFrame_8() const { return ___degreesRotatePerFrame_8; }
	inline float* get_address_of_degreesRotatePerFrame_8() { return &___degreesRotatePerFrame_8; }
	inline void set_degreesRotatePerFrame_8(float value)
	{
		___degreesRotatePerFrame_8 = value;
	}

	inline static int32_t get_offset_of_speed_9() { return static_cast<int32_t>(offsetof(MissileController_t00541937DA8E984F65B35C796E2A26960D58465E, ___speed_9)); }
	inline float get_speed_9() const { return ___speed_9; }
	inline float* get_address_of_speed_9() { return &___speed_9; }
	inline void set_speed_9(float value)
	{
		___speed_9 = value;
	}

	inline static int32_t get_offset_of_magnetSpeed_10() { return static_cast<int32_t>(offsetof(MissileController_t00541937DA8E984F65B35C796E2A26960D58465E, ___magnetSpeed_10)); }
	inline float get_magnetSpeed_10() const { return ___magnetSpeed_10; }
	inline float* get_address_of_magnetSpeed_10() { return &___magnetSpeed_10; }
	inline void set_magnetSpeed_10(float value)
	{
		___magnetSpeed_10 = value;
	}

	inline static int32_t get_offset_of_magnetRadius_11() { return static_cast<int32_t>(offsetof(MissileController_t00541937DA8E984F65B35C796E2A26960D58465E, ___magnetRadius_11)); }
	inline float get_magnetRadius_11() const { return ___magnetRadius_11; }
	inline float* get_address_of_magnetRadius_11() { return &___magnetRadius_11; }
	inline void set_magnetRadius_11(float value)
	{
		___magnetRadius_11 = value;
	}

	inline static int32_t get_offset_of_sign_12() { return static_cast<int32_t>(offsetof(MissileController_t00541937DA8E984F65B35C796E2A26960D58465E, ___sign_12)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_sign_12() const { return ___sign_12; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_sign_12() { return &___sign_12; }
	inline void set_sign_12(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___sign_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sign_12), (void*)value);
	}

	inline static int32_t get_offset_of_canvas_13() { return static_cast<int32_t>(offsetof(MissileController_t00541937DA8E984F65B35C796E2A26960D58465E, ___canvas_13)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_canvas_13() const { return ___canvas_13; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_canvas_13() { return &___canvas_13; }
	inline void set_canvas_13(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_gameController_14() { return static_cast<int32_t>(offsetof(MissileController_t00541937DA8E984F65B35C796E2A26960D58465E, ___gameController_14)); }
	inline GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * get_gameController_14() const { return ___gameController_14; }
	inline GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 ** get_address_of_gameController_14() { return &___gameController_14; }
	inline void set_gameController_14(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * value)
	{
		___gameController_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameController_14), (void*)value);
	}

	inline static int32_t get_offset_of_rb_15() { return static_cast<int32_t>(offsetof(MissileController_t00541937DA8E984F65B35C796E2A26960D58465E, ___rb_15)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_rb_15() const { return ___rb_15; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_rb_15() { return &___rb_15; }
	inline void set_rb_15(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___rb_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_15), (void*)value);
	}
};


// MissileSpawner
struct  MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject MissileSpawner::missilePrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___missilePrefab_4;
	// UnityEngine.Transform MissileSpawner::playerTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___playerTransform_5;
	// System.Single MissileSpawner::radius
	float ___radius_6;
	// System.Int32 MissileSpawner::missilesToSpawn
	int32_t ___missilesToSpawn_7;

public:
	inline static int32_t get_offset_of_missilePrefab_4() { return static_cast<int32_t>(offsetof(MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF, ___missilePrefab_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_missilePrefab_4() const { return ___missilePrefab_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_missilePrefab_4() { return &___missilePrefab_4; }
	inline void set_missilePrefab_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___missilePrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___missilePrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_playerTransform_5() { return static_cast<int32_t>(offsetof(MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF, ___playerTransform_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_playerTransform_5() const { return ___playerTransform_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_playerTransform_5() { return &___playerTransform_5; }
	inline void set_playerTransform_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___playerTransform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerTransform_5), (void*)value);
	}

	inline static int32_t get_offset_of_radius_6() { return static_cast<int32_t>(offsetof(MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF, ___radius_6)); }
	inline float get_radius_6() const { return ___radius_6; }
	inline float* get_address_of_radius_6() { return &___radius_6; }
	inline void set_radius_6(float value)
	{
		___radius_6 = value;
	}

	inline static int32_t get_offset_of_missilesToSpawn_7() { return static_cast<int32_t>(offsetof(MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF, ___missilesToSpawn_7)); }
	inline int32_t get_missilesToSpawn_7() const { return ___missilesToSpawn_7; }
	inline int32_t* get_address_of_missilesToSpawn_7() { return &___missilesToSpawn_7; }
	inline void set_missilesToSpawn_7(int32_t value)
	{
		___missilesToSpawn_7 = value;
	}
};


// PersistableObject
struct  PersistableObject_t4C26456E3EA82C26268CB57F2113EA1C2BC3C426  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// PersistentStorage
struct  PersistentStorage_tF3F37AEB47F8A3A37612B6965C91CA7E6E2082B0  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String PersistentStorage::savePath
	String_t* ___savePath_4;

public:
	inline static int32_t get_offset_of_savePath_4() { return static_cast<int32_t>(offsetof(PersistentStorage_tF3F37AEB47F8A3A37612B6965C91CA7E6E2082B0, ___savePath_4)); }
	inline String_t* get_savePath_4() const { return ___savePath_4; }
	inline String_t** get_address_of_savePath_4() { return &___savePath_4; }
	inline void set_savePath_4(String_t* value)
	{
		___savePath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___savePath_4), (void*)value);
	}
};


// PlanetController
struct  PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject PlanetController::PlanetSpawner
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___PlanetSpawner_4;
	// System.Int32 PlanetController::PlanetId
	int32_t ___PlanetId_5;
	// UnityEngine.Transform PlanetController::PlayerTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___PlayerTransform_6;
	// System.Single PlanetController::speed
	float ___speed_7;
	// System.Single PlanetController::MinRotationSpeed
	float ___MinRotationSpeed_8;
	// System.Single PlanetController::MaxRotationSpeed
	float ___MaxRotationSpeed_9;
	// PlanetSpawner PlanetController::planetSpawnerScript
	PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * ___planetSpawnerScript_10;
	// System.Single PlanetController::rotationSpeed
	float ___rotationSpeed_11;

public:
	inline static int32_t get_offset_of_PlanetSpawner_4() { return static_cast<int32_t>(offsetof(PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF, ___PlanetSpawner_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_PlanetSpawner_4() const { return ___PlanetSpawner_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_PlanetSpawner_4() { return &___PlanetSpawner_4; }
	inline void set_PlanetSpawner_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___PlanetSpawner_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlanetSpawner_4), (void*)value);
	}

	inline static int32_t get_offset_of_PlanetId_5() { return static_cast<int32_t>(offsetof(PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF, ___PlanetId_5)); }
	inline int32_t get_PlanetId_5() const { return ___PlanetId_5; }
	inline int32_t* get_address_of_PlanetId_5() { return &___PlanetId_5; }
	inline void set_PlanetId_5(int32_t value)
	{
		___PlanetId_5 = value;
	}

	inline static int32_t get_offset_of_PlayerTransform_6() { return static_cast<int32_t>(offsetof(PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF, ___PlayerTransform_6)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_PlayerTransform_6() const { return ___PlayerTransform_6; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_PlayerTransform_6() { return &___PlayerTransform_6; }
	inline void set_PlayerTransform_6(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___PlayerTransform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerTransform_6), (void*)value);
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of_MinRotationSpeed_8() { return static_cast<int32_t>(offsetof(PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF, ___MinRotationSpeed_8)); }
	inline float get_MinRotationSpeed_8() const { return ___MinRotationSpeed_8; }
	inline float* get_address_of_MinRotationSpeed_8() { return &___MinRotationSpeed_8; }
	inline void set_MinRotationSpeed_8(float value)
	{
		___MinRotationSpeed_8 = value;
	}

	inline static int32_t get_offset_of_MaxRotationSpeed_9() { return static_cast<int32_t>(offsetof(PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF, ___MaxRotationSpeed_9)); }
	inline float get_MaxRotationSpeed_9() const { return ___MaxRotationSpeed_9; }
	inline float* get_address_of_MaxRotationSpeed_9() { return &___MaxRotationSpeed_9; }
	inline void set_MaxRotationSpeed_9(float value)
	{
		___MaxRotationSpeed_9 = value;
	}

	inline static int32_t get_offset_of_planetSpawnerScript_10() { return static_cast<int32_t>(offsetof(PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF, ___planetSpawnerScript_10)); }
	inline PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * get_planetSpawnerScript_10() const { return ___planetSpawnerScript_10; }
	inline PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE ** get_address_of_planetSpawnerScript_10() { return &___planetSpawnerScript_10; }
	inline void set_planetSpawnerScript_10(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * value)
	{
		___planetSpawnerScript_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___planetSpawnerScript_10), (void*)value);
	}

	inline static int32_t get_offset_of_rotationSpeed_11() { return static_cast<int32_t>(offsetof(PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF, ___rotationSpeed_11)); }
	inline float get_rotationSpeed_11() const { return ___rotationSpeed_11; }
	inline float* get_address_of_rotationSpeed_11() { return &___rotationSpeed_11; }
	inline void set_rotationSpeed_11(float value)
	{
		___rotationSpeed_11 = value;
	}
};


// PlanetSpawner
struct  PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform PlanetSpawner::playerTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___playerTransform_4;
	// UnityEngine.GameObject[] PlanetSpawner::planetPrefabs
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___planetPrefabs_5;
	// System.Single PlanetSpawner::radius
	float ___radius_6;
	// System.Single PlanetSpawner::spawnAngleInRadians
	float ___spawnAngleInRadians_7;
	// System.Single PlanetSpawner::minScale
	float ___minScale_8;
	// System.Single PlanetSpawner::maxScale
	float ___maxScale_9;
	// System.Single PlanetSpawner::speed
	float ___speed_10;
	// System.Int32 PlanetSpawner::maxPlanetCount
	int32_t ___maxPlanetCount_11;
	// System.Int32 PlanetSpawner::maxPlanetChacheSize
	int32_t ___maxPlanetChacheSize_12;
	// System.Collections.Generic.List`1<UnityEngine.GameObject>[] PlanetSpawner::pools
	List_1U5BU5D_t94B00E308FD53421F9A8256D755B8AAED7BC9F06* ___pools_13;
	// System.Int32 PlanetSpawner::planetCount
	int32_t ___planetCount_14;

public:
	inline static int32_t get_offset_of_playerTransform_4() { return static_cast<int32_t>(offsetof(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE, ___playerTransform_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_playerTransform_4() const { return ___playerTransform_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_playerTransform_4() { return &___playerTransform_4; }
	inline void set_playerTransform_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___playerTransform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerTransform_4), (void*)value);
	}

	inline static int32_t get_offset_of_planetPrefabs_5() { return static_cast<int32_t>(offsetof(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE, ___planetPrefabs_5)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_planetPrefabs_5() const { return ___planetPrefabs_5; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_planetPrefabs_5() { return &___planetPrefabs_5; }
	inline void set_planetPrefabs_5(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___planetPrefabs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___planetPrefabs_5), (void*)value);
	}

	inline static int32_t get_offset_of_radius_6() { return static_cast<int32_t>(offsetof(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE, ___radius_6)); }
	inline float get_radius_6() const { return ___radius_6; }
	inline float* get_address_of_radius_6() { return &___radius_6; }
	inline void set_radius_6(float value)
	{
		___radius_6 = value;
	}

	inline static int32_t get_offset_of_spawnAngleInRadians_7() { return static_cast<int32_t>(offsetof(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE, ___spawnAngleInRadians_7)); }
	inline float get_spawnAngleInRadians_7() const { return ___spawnAngleInRadians_7; }
	inline float* get_address_of_spawnAngleInRadians_7() { return &___spawnAngleInRadians_7; }
	inline void set_spawnAngleInRadians_7(float value)
	{
		___spawnAngleInRadians_7 = value;
	}

	inline static int32_t get_offset_of_minScale_8() { return static_cast<int32_t>(offsetof(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE, ___minScale_8)); }
	inline float get_minScale_8() const { return ___minScale_8; }
	inline float* get_address_of_minScale_8() { return &___minScale_8; }
	inline void set_minScale_8(float value)
	{
		___minScale_8 = value;
	}

	inline static int32_t get_offset_of_maxScale_9() { return static_cast<int32_t>(offsetof(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE, ___maxScale_9)); }
	inline float get_maxScale_9() const { return ___maxScale_9; }
	inline float* get_address_of_maxScale_9() { return &___maxScale_9; }
	inline void set_maxScale_9(float value)
	{
		___maxScale_9 = value;
	}

	inline static int32_t get_offset_of_speed_10() { return static_cast<int32_t>(offsetof(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE, ___speed_10)); }
	inline float get_speed_10() const { return ___speed_10; }
	inline float* get_address_of_speed_10() { return &___speed_10; }
	inline void set_speed_10(float value)
	{
		___speed_10 = value;
	}

	inline static int32_t get_offset_of_maxPlanetCount_11() { return static_cast<int32_t>(offsetof(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE, ___maxPlanetCount_11)); }
	inline int32_t get_maxPlanetCount_11() const { return ___maxPlanetCount_11; }
	inline int32_t* get_address_of_maxPlanetCount_11() { return &___maxPlanetCount_11; }
	inline void set_maxPlanetCount_11(int32_t value)
	{
		___maxPlanetCount_11 = value;
	}

	inline static int32_t get_offset_of_maxPlanetChacheSize_12() { return static_cast<int32_t>(offsetof(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE, ___maxPlanetChacheSize_12)); }
	inline int32_t get_maxPlanetChacheSize_12() const { return ___maxPlanetChacheSize_12; }
	inline int32_t* get_address_of_maxPlanetChacheSize_12() { return &___maxPlanetChacheSize_12; }
	inline void set_maxPlanetChacheSize_12(int32_t value)
	{
		___maxPlanetChacheSize_12 = value;
	}

	inline static int32_t get_offset_of_pools_13() { return static_cast<int32_t>(offsetof(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE, ___pools_13)); }
	inline List_1U5BU5D_t94B00E308FD53421F9A8256D755B8AAED7BC9F06* get_pools_13() const { return ___pools_13; }
	inline List_1U5BU5D_t94B00E308FD53421F9A8256D755B8AAED7BC9F06** get_address_of_pools_13() { return &___pools_13; }
	inline void set_pools_13(List_1U5BU5D_t94B00E308FD53421F9A8256D755B8AAED7BC9F06* value)
	{
		___pools_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pools_13), (void*)value);
	}

	inline static int32_t get_offset_of_planetCount_14() { return static_cast<int32_t>(offsetof(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE, ___planetCount_14)); }
	inline int32_t get_planetCount_14() const { return ___planetCount_14; }
	inline int32_t* get_address_of_planetCount_14() { return &___planetCount_14; }
	inline void set_planetCount_14(int32_t value)
	{
		___planetCount_14 = value;
	}
};


// PlayerController
struct  PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Vector3 PlayerController::MissileTarget
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___MissileTarget_4;
	// System.Single PlayerController::Speed
	float ___Speed_5;
	// System.Single PlayerController::Boost
	float ___Boost_6;
	// System.Single PlayerController::Tilt
	float ___Tilt_7;
	// System.Single PlayerController::MagnetRadius
	float ___MagnetRadius_8;
	// System.Single PlayerController::Steering
	float ___Steering_9;
	// System.Single PlayerController::MissileTargetUpdateThreshold
	float ___MissileTargetUpdateThreshold_10;
	// Joystick PlayerController::Joystick
	Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * ___Joystick_11;
	// UnityEngine.Transform PlayerController::ScrollHolderTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___ScrollHolderTransform_12;
	// UnityEngine.GameObject PlayerController::ExplosionPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___ExplosionPrefab_13;
	// UnityEngine.GameObject PlayerController::CoinCollectPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___CoinCollectPrefab_14;
	// UnityEngine.GameObject PlayerController::BoostCollectPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___BoostCollectPrefab_15;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___rb_16;
	// GameController PlayerController::gameController
	GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * ___gameController_17;
	// System.Single PlayerController::oldRotationZ
	float ___oldRotationZ_18;
	// System.Boolean PlayerController::isPlaying
	bool ___isPlaying_19;
	// System.Single PlayerController::lastMissileTargetSetTime
	float ___lastMissileTargetSetTime_20;
	// System.Single PlayerController::boostEnd
	float ___boostEnd_21;

public:
	inline static int32_t get_offset_of_MissileTarget_4() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___MissileTarget_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_MissileTarget_4() const { return ___MissileTarget_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_MissileTarget_4() { return &___MissileTarget_4; }
	inline void set_MissileTarget_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___MissileTarget_4 = value;
	}

	inline static int32_t get_offset_of_Speed_5() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___Speed_5)); }
	inline float get_Speed_5() const { return ___Speed_5; }
	inline float* get_address_of_Speed_5() { return &___Speed_5; }
	inline void set_Speed_5(float value)
	{
		___Speed_5 = value;
	}

	inline static int32_t get_offset_of_Boost_6() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___Boost_6)); }
	inline float get_Boost_6() const { return ___Boost_6; }
	inline float* get_address_of_Boost_6() { return &___Boost_6; }
	inline void set_Boost_6(float value)
	{
		___Boost_6 = value;
	}

	inline static int32_t get_offset_of_Tilt_7() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___Tilt_7)); }
	inline float get_Tilt_7() const { return ___Tilt_7; }
	inline float* get_address_of_Tilt_7() { return &___Tilt_7; }
	inline void set_Tilt_7(float value)
	{
		___Tilt_7 = value;
	}

	inline static int32_t get_offset_of_MagnetRadius_8() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___MagnetRadius_8)); }
	inline float get_MagnetRadius_8() const { return ___MagnetRadius_8; }
	inline float* get_address_of_MagnetRadius_8() { return &___MagnetRadius_8; }
	inline void set_MagnetRadius_8(float value)
	{
		___MagnetRadius_8 = value;
	}

	inline static int32_t get_offset_of_Steering_9() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___Steering_9)); }
	inline float get_Steering_9() const { return ___Steering_9; }
	inline float* get_address_of_Steering_9() { return &___Steering_9; }
	inline void set_Steering_9(float value)
	{
		___Steering_9 = value;
	}

	inline static int32_t get_offset_of_MissileTargetUpdateThreshold_10() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___MissileTargetUpdateThreshold_10)); }
	inline float get_MissileTargetUpdateThreshold_10() const { return ___MissileTargetUpdateThreshold_10; }
	inline float* get_address_of_MissileTargetUpdateThreshold_10() { return &___MissileTargetUpdateThreshold_10; }
	inline void set_MissileTargetUpdateThreshold_10(float value)
	{
		___MissileTargetUpdateThreshold_10 = value;
	}

	inline static int32_t get_offset_of_Joystick_11() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___Joystick_11)); }
	inline Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * get_Joystick_11() const { return ___Joystick_11; }
	inline Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 ** get_address_of_Joystick_11() { return &___Joystick_11; }
	inline void set_Joystick_11(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * value)
	{
		___Joystick_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Joystick_11), (void*)value);
	}

	inline static int32_t get_offset_of_ScrollHolderTransform_12() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___ScrollHolderTransform_12)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_ScrollHolderTransform_12() const { return ___ScrollHolderTransform_12; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_ScrollHolderTransform_12() { return &___ScrollHolderTransform_12; }
	inline void set_ScrollHolderTransform_12(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___ScrollHolderTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScrollHolderTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_ExplosionPrefab_13() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___ExplosionPrefab_13)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_ExplosionPrefab_13() const { return ___ExplosionPrefab_13; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_ExplosionPrefab_13() { return &___ExplosionPrefab_13; }
	inline void set_ExplosionPrefab_13(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___ExplosionPrefab_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExplosionPrefab_13), (void*)value);
	}

	inline static int32_t get_offset_of_CoinCollectPrefab_14() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___CoinCollectPrefab_14)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_CoinCollectPrefab_14() const { return ___CoinCollectPrefab_14; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_CoinCollectPrefab_14() { return &___CoinCollectPrefab_14; }
	inline void set_CoinCollectPrefab_14(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___CoinCollectPrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoinCollectPrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_BoostCollectPrefab_15() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___BoostCollectPrefab_15)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_BoostCollectPrefab_15() const { return ___BoostCollectPrefab_15; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_BoostCollectPrefab_15() { return &___BoostCollectPrefab_15; }
	inline void set_BoostCollectPrefab_15(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___BoostCollectPrefab_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoostCollectPrefab_15), (void*)value);
	}

	inline static int32_t get_offset_of_rb_16() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___rb_16)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_rb_16() const { return ___rb_16; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_rb_16() { return &___rb_16; }
	inline void set_rb_16(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___rb_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_16), (void*)value);
	}

	inline static int32_t get_offset_of_gameController_17() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___gameController_17)); }
	inline GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * get_gameController_17() const { return ___gameController_17; }
	inline GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 ** get_address_of_gameController_17() { return &___gameController_17; }
	inline void set_gameController_17(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * value)
	{
		___gameController_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameController_17), (void*)value);
	}

	inline static int32_t get_offset_of_oldRotationZ_18() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___oldRotationZ_18)); }
	inline float get_oldRotationZ_18() const { return ___oldRotationZ_18; }
	inline float* get_address_of_oldRotationZ_18() { return &___oldRotationZ_18; }
	inline void set_oldRotationZ_18(float value)
	{
		___oldRotationZ_18 = value;
	}

	inline static int32_t get_offset_of_isPlaying_19() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___isPlaying_19)); }
	inline bool get_isPlaying_19() const { return ___isPlaying_19; }
	inline bool* get_address_of_isPlaying_19() { return &___isPlaying_19; }
	inline void set_isPlaying_19(bool value)
	{
		___isPlaying_19 = value;
	}

	inline static int32_t get_offset_of_lastMissileTargetSetTime_20() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___lastMissileTargetSetTime_20)); }
	inline float get_lastMissileTargetSetTime_20() const { return ___lastMissileTargetSetTime_20; }
	inline float* get_address_of_lastMissileTargetSetTime_20() { return &___lastMissileTargetSetTime_20; }
	inline void set_lastMissileTargetSetTime_20(float value)
	{
		___lastMissileTargetSetTime_20 = value;
	}

	inline static int32_t get_offset_of_boostEnd_21() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___boostEnd_21)); }
	inline float get_boostEnd_21() const { return ___boostEnd_21; }
	inline float* get_address_of_boostEnd_21() { return &___boostEnd_21; }
	inline void set_boostEnd_21(float value)
	{
		___boostEnd_21 = value;
	}
};


// SelfDestroy
struct  SelfDestroy_t914E0DDB257662ECE11BA3AA2280DE94351400CB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single SelfDestroy::seconds
	float ___seconds_4;

public:
	inline static int32_t get_offset_of_seconds_4() { return static_cast<int32_t>(offsetof(SelfDestroy_t914E0DDB257662ECE11BA3AA2280DE94351400CB, ___seconds_4)); }
	inline float get_seconds_4() const { return ___seconds_4; }
	inline float* get_address_of_seconds_4() { return &___seconds_4; }
	inline void set_seconds_4(float value)
	{
		___seconds_4 = value;
	}
};


// ShipInfoController
struct  ShipInfoController_tB4A1582E3DFCB36D073E261496C5E13038F6FA9A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// ShipRequirements ShipInfoController::requirements
	ShipRequirements_tFDDCB2950CFF188C8F8F935EB2BC1574AE18D297 * ___requirements_4;
	// ShipSpecs ShipInfoController::specs
	ShipSpecs_tAB40A70A93C82661D7BBD774D178FE654AA27DF0 * ___specs_5;

public:
	inline static int32_t get_offset_of_requirements_4() { return static_cast<int32_t>(offsetof(ShipInfoController_tB4A1582E3DFCB36D073E261496C5E13038F6FA9A, ___requirements_4)); }
	inline ShipRequirements_tFDDCB2950CFF188C8F8F935EB2BC1574AE18D297 * get_requirements_4() const { return ___requirements_4; }
	inline ShipRequirements_tFDDCB2950CFF188C8F8F935EB2BC1574AE18D297 ** get_address_of_requirements_4() { return &___requirements_4; }
	inline void set_requirements_4(ShipRequirements_tFDDCB2950CFF188C8F8F935EB2BC1574AE18D297 * value)
	{
		___requirements_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___requirements_4), (void*)value);
	}

	inline static int32_t get_offset_of_specs_5() { return static_cast<int32_t>(offsetof(ShipInfoController_tB4A1582E3DFCB36D073E261496C5E13038F6FA9A, ___specs_5)); }
	inline ShipSpecs_tAB40A70A93C82661D7BBD774D178FE654AA27DF0 * get_specs_5() const { return ___specs_5; }
	inline ShipSpecs_tAB40A70A93C82661D7BBD774D178FE654AA27DF0 ** get_address_of_specs_5() { return &___specs_5; }
	inline void set_specs_5(ShipSpecs_tAB40A70A93C82661D7BBD774D178FE654AA27DF0 * value)
	{
		___specs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___specs_5), (void*)value);
	}
};


// UiDisplayFps
struct  UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String UiDisplayFps::formatedString
	String_t* ___formatedString_4;
	// UnityEngine.UI.Text UiDisplayFps::txtFps
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___txtFps_5;
	// System.Single UiDisplayFps::updateRateSeconds
	float ___updateRateSeconds_6;
	// System.Int32 UiDisplayFps::frameCount
	int32_t ___frameCount_7;
	// System.Single UiDisplayFps::dt
	float ___dt_8;
	// System.Single UiDisplayFps::fps
	float ___fps_9;

public:
	inline static int32_t get_offset_of_formatedString_4() { return static_cast<int32_t>(offsetof(UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1, ___formatedString_4)); }
	inline String_t* get_formatedString_4() const { return ___formatedString_4; }
	inline String_t** get_address_of_formatedString_4() { return &___formatedString_4; }
	inline void set_formatedString_4(String_t* value)
	{
		___formatedString_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formatedString_4), (void*)value);
	}

	inline static int32_t get_offset_of_txtFps_5() { return static_cast<int32_t>(offsetof(UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1, ___txtFps_5)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_txtFps_5() const { return ___txtFps_5; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_txtFps_5() { return &___txtFps_5; }
	inline void set_txtFps_5(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___txtFps_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___txtFps_5), (void*)value);
	}

	inline static int32_t get_offset_of_updateRateSeconds_6() { return static_cast<int32_t>(offsetof(UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1, ___updateRateSeconds_6)); }
	inline float get_updateRateSeconds_6() const { return ___updateRateSeconds_6; }
	inline float* get_address_of_updateRateSeconds_6() { return &___updateRateSeconds_6; }
	inline void set_updateRateSeconds_6(float value)
	{
		___updateRateSeconds_6 = value;
	}

	inline static int32_t get_offset_of_frameCount_7() { return static_cast<int32_t>(offsetof(UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1, ___frameCount_7)); }
	inline int32_t get_frameCount_7() const { return ___frameCount_7; }
	inline int32_t* get_address_of_frameCount_7() { return &___frameCount_7; }
	inline void set_frameCount_7(int32_t value)
	{
		___frameCount_7 = value;
	}

	inline static int32_t get_offset_of_dt_8() { return static_cast<int32_t>(offsetof(UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1, ___dt_8)); }
	inline float get_dt_8() const { return ___dt_8; }
	inline float* get_address_of_dt_8() { return &___dt_8; }
	inline void set_dt_8(float value)
	{
		___dt_8 = value;
	}

	inline static int32_t get_offset_of_fps_9() { return static_cast<int32_t>(offsetof(UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1, ___fps_9)); }
	inline float get_fps_9() const { return ___fps_9; }
	inline float* get_address_of_fps_9() { return &___fps_9; }
	inline void set_fps_9(float value)
	{
		___fps_9 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// GameController
struct  GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3  : public PersistableObject_t4C26456E3EA82C26268CB57F2113EA1C2BC3C426
{
public:
	// UnityEngine.GameObject[] GameController::SpaceshipPrefabs
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___SpaceshipPrefabs_4;
	// UnityEngine.GameObject GameController::ScorePlusPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___ScorePlusPrefab_5;
	// UnityEngine.GameObject GameController::UiInterface
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___UiInterface_6;
	// UnityEngine.UI.Image GameController::LockImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___LockImage_7;
	// UnityEngine.UI.Button GameController::LeftButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___LeftButton_8;
	// UnityEngine.UI.Button GameController::RightButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___RightButton_9;
	// UnityEngine.UI.Button GameController::PlayButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___PlayButton_10;
	// UnityEngine.UI.Text GameController::ShipDescription
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___ShipDescription_11;
	// UnityEngine.UI.Text GameController::SpeedText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___SpeedText_12;
	// UnityEngine.UI.Text GameController::SteeringText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___SteeringText_13;
	// UnityEngine.UI.Image GameController::SpeedImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___SpeedImage_14;
	// UnityEngine.UI.Image GameController::SteeringImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___SteeringImage_15;
	// UnityEngine.UI.Text GameController::CoinsCollectedText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___CoinsCollectedText_16;
	// UnityEngine.UI.Text GameController::ScoreText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___ScoreText_17;
	// UnityEngine.GameObject GameController::Player
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___Player_18;
	// MissileSpawner GameController::MissileSpawner
	MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF * ___MissileSpawner_19;
	// PlanetSpawner GameController::PlanetSpawner
	PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * ___PlanetSpawner_20;
	// IncentiveSpawner GameController::IncentiveSpawner
	IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD * ___IncentiveSpawner_21;
	// AdManager GameController::AdManager
	AdManager_tC2779FAA5E28975A9817609A8DAF049E9451A912 * ___AdManager_22;
	// PersistentStorage GameController::PersistentStorage
	PersistentStorage_tF3F37AEB47F8A3A37612B6965C91CA7E6E2082B0 * ___PersistentStorage_23;
	// PlayerController GameController::playerController
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * ___playerController_24;
	// UnityEngine.GameObject GameController::canvas
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___canvas_25;
	// System.Int32 GameController::topScore
	int32_t ___topScore_26;
	// System.Single GameController::nextScoreUpdateTime
	float ___nextScoreUpdateTime_27;
	// System.Int32 GameController::level
	int32_t ___level_28;
	// System.Int32 GameController::coins
	int32_t ___coins_29;
	// System.Int32 GameController::score
	int32_t ___score_30;
	// System.Single GameController::missilesCollapsed
	float ___missilesCollapsed_31;
	// System.Int32 GameController::currentShipPrefab
	int32_t ___currentShipPrefab_32;
	// System.Boolean GameController::isPlaying
	bool ___isPlaying_33;
	// System.Boolean GameController::firstRun
	bool ___firstRun_34;
	// System.Single GameController::savedShipSpeed
	float ___savedShipSpeed_35;
	// System.Single GameController::baseSpeed
	float ___baseSpeed_36;
	// System.Single GameController::baseSteering
	float ___baseSteering_37;

public:
	inline static int32_t get_offset_of_SpaceshipPrefabs_4() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___SpaceshipPrefabs_4)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_SpaceshipPrefabs_4() const { return ___SpaceshipPrefabs_4; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_SpaceshipPrefabs_4() { return &___SpaceshipPrefabs_4; }
	inline void set_SpaceshipPrefabs_4(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___SpaceshipPrefabs_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpaceshipPrefabs_4), (void*)value);
	}

	inline static int32_t get_offset_of_ScorePlusPrefab_5() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___ScorePlusPrefab_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_ScorePlusPrefab_5() const { return ___ScorePlusPrefab_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_ScorePlusPrefab_5() { return &___ScorePlusPrefab_5; }
	inline void set_ScorePlusPrefab_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___ScorePlusPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScorePlusPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_UiInterface_6() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___UiInterface_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_UiInterface_6() const { return ___UiInterface_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_UiInterface_6() { return &___UiInterface_6; }
	inline void set_UiInterface_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___UiInterface_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UiInterface_6), (void*)value);
	}

	inline static int32_t get_offset_of_LockImage_7() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___LockImage_7)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_LockImage_7() const { return ___LockImage_7; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_LockImage_7() { return &___LockImage_7; }
	inline void set_LockImage_7(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___LockImage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LockImage_7), (void*)value);
	}

	inline static int32_t get_offset_of_LeftButton_8() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___LeftButton_8)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_LeftButton_8() const { return ___LeftButton_8; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_LeftButton_8() { return &___LeftButton_8; }
	inline void set_LeftButton_8(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___LeftButton_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LeftButton_8), (void*)value);
	}

	inline static int32_t get_offset_of_RightButton_9() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___RightButton_9)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_RightButton_9() const { return ___RightButton_9; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_RightButton_9() { return &___RightButton_9; }
	inline void set_RightButton_9(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___RightButton_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RightButton_9), (void*)value);
	}

	inline static int32_t get_offset_of_PlayButton_10() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___PlayButton_10)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_PlayButton_10() const { return ___PlayButton_10; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_PlayButton_10() { return &___PlayButton_10; }
	inline void set_PlayButton_10(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___PlayButton_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayButton_10), (void*)value);
	}

	inline static int32_t get_offset_of_ShipDescription_11() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___ShipDescription_11)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_ShipDescription_11() const { return ___ShipDescription_11; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_ShipDescription_11() { return &___ShipDescription_11; }
	inline void set_ShipDescription_11(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___ShipDescription_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShipDescription_11), (void*)value);
	}

	inline static int32_t get_offset_of_SpeedText_12() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___SpeedText_12)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_SpeedText_12() const { return ___SpeedText_12; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_SpeedText_12() { return &___SpeedText_12; }
	inline void set_SpeedText_12(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___SpeedText_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpeedText_12), (void*)value);
	}

	inline static int32_t get_offset_of_SteeringText_13() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___SteeringText_13)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_SteeringText_13() const { return ___SteeringText_13; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_SteeringText_13() { return &___SteeringText_13; }
	inline void set_SteeringText_13(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___SteeringText_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SteeringText_13), (void*)value);
	}

	inline static int32_t get_offset_of_SpeedImage_14() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___SpeedImage_14)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_SpeedImage_14() const { return ___SpeedImage_14; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_SpeedImage_14() { return &___SpeedImage_14; }
	inline void set_SpeedImage_14(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___SpeedImage_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpeedImage_14), (void*)value);
	}

	inline static int32_t get_offset_of_SteeringImage_15() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___SteeringImage_15)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_SteeringImage_15() const { return ___SteeringImage_15; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_SteeringImage_15() { return &___SteeringImage_15; }
	inline void set_SteeringImage_15(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___SteeringImage_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SteeringImage_15), (void*)value);
	}

	inline static int32_t get_offset_of_CoinsCollectedText_16() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___CoinsCollectedText_16)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_CoinsCollectedText_16() const { return ___CoinsCollectedText_16; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_CoinsCollectedText_16() { return &___CoinsCollectedText_16; }
	inline void set_CoinsCollectedText_16(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___CoinsCollectedText_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoinsCollectedText_16), (void*)value);
	}

	inline static int32_t get_offset_of_ScoreText_17() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___ScoreText_17)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_ScoreText_17() const { return ___ScoreText_17; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_ScoreText_17() { return &___ScoreText_17; }
	inline void set_ScoreText_17(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___ScoreText_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScoreText_17), (void*)value);
	}

	inline static int32_t get_offset_of_Player_18() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___Player_18)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_Player_18() const { return ___Player_18; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_Player_18() { return &___Player_18; }
	inline void set_Player_18(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___Player_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Player_18), (void*)value);
	}

	inline static int32_t get_offset_of_MissileSpawner_19() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___MissileSpawner_19)); }
	inline MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF * get_MissileSpawner_19() const { return ___MissileSpawner_19; }
	inline MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF ** get_address_of_MissileSpawner_19() { return &___MissileSpawner_19; }
	inline void set_MissileSpawner_19(MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF * value)
	{
		___MissileSpawner_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MissileSpawner_19), (void*)value);
	}

	inline static int32_t get_offset_of_PlanetSpawner_20() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___PlanetSpawner_20)); }
	inline PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * get_PlanetSpawner_20() const { return ___PlanetSpawner_20; }
	inline PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE ** get_address_of_PlanetSpawner_20() { return &___PlanetSpawner_20; }
	inline void set_PlanetSpawner_20(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * value)
	{
		___PlanetSpawner_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlanetSpawner_20), (void*)value);
	}

	inline static int32_t get_offset_of_IncentiveSpawner_21() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___IncentiveSpawner_21)); }
	inline IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD * get_IncentiveSpawner_21() const { return ___IncentiveSpawner_21; }
	inline IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD ** get_address_of_IncentiveSpawner_21() { return &___IncentiveSpawner_21; }
	inline void set_IncentiveSpawner_21(IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD * value)
	{
		___IncentiveSpawner_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IncentiveSpawner_21), (void*)value);
	}

	inline static int32_t get_offset_of_AdManager_22() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___AdManager_22)); }
	inline AdManager_tC2779FAA5E28975A9817609A8DAF049E9451A912 * get_AdManager_22() const { return ___AdManager_22; }
	inline AdManager_tC2779FAA5E28975A9817609A8DAF049E9451A912 ** get_address_of_AdManager_22() { return &___AdManager_22; }
	inline void set_AdManager_22(AdManager_tC2779FAA5E28975A9817609A8DAF049E9451A912 * value)
	{
		___AdManager_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AdManager_22), (void*)value);
	}

	inline static int32_t get_offset_of_PersistentStorage_23() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___PersistentStorage_23)); }
	inline PersistentStorage_tF3F37AEB47F8A3A37612B6965C91CA7E6E2082B0 * get_PersistentStorage_23() const { return ___PersistentStorage_23; }
	inline PersistentStorage_tF3F37AEB47F8A3A37612B6965C91CA7E6E2082B0 ** get_address_of_PersistentStorage_23() { return &___PersistentStorage_23; }
	inline void set_PersistentStorage_23(PersistentStorage_tF3F37AEB47F8A3A37612B6965C91CA7E6E2082B0 * value)
	{
		___PersistentStorage_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PersistentStorage_23), (void*)value);
	}

	inline static int32_t get_offset_of_playerController_24() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___playerController_24)); }
	inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * get_playerController_24() const { return ___playerController_24; }
	inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 ** get_address_of_playerController_24() { return &___playerController_24; }
	inline void set_playerController_24(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * value)
	{
		___playerController_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerController_24), (void*)value);
	}

	inline static int32_t get_offset_of_canvas_25() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___canvas_25)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_canvas_25() const { return ___canvas_25; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_canvas_25() { return &___canvas_25; }
	inline void set_canvas_25(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___canvas_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_25), (void*)value);
	}

	inline static int32_t get_offset_of_topScore_26() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___topScore_26)); }
	inline int32_t get_topScore_26() const { return ___topScore_26; }
	inline int32_t* get_address_of_topScore_26() { return &___topScore_26; }
	inline void set_topScore_26(int32_t value)
	{
		___topScore_26 = value;
	}

	inline static int32_t get_offset_of_nextScoreUpdateTime_27() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___nextScoreUpdateTime_27)); }
	inline float get_nextScoreUpdateTime_27() const { return ___nextScoreUpdateTime_27; }
	inline float* get_address_of_nextScoreUpdateTime_27() { return &___nextScoreUpdateTime_27; }
	inline void set_nextScoreUpdateTime_27(float value)
	{
		___nextScoreUpdateTime_27 = value;
	}

	inline static int32_t get_offset_of_level_28() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___level_28)); }
	inline int32_t get_level_28() const { return ___level_28; }
	inline int32_t* get_address_of_level_28() { return &___level_28; }
	inline void set_level_28(int32_t value)
	{
		___level_28 = value;
	}

	inline static int32_t get_offset_of_coins_29() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___coins_29)); }
	inline int32_t get_coins_29() const { return ___coins_29; }
	inline int32_t* get_address_of_coins_29() { return &___coins_29; }
	inline void set_coins_29(int32_t value)
	{
		___coins_29 = value;
	}

	inline static int32_t get_offset_of_score_30() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___score_30)); }
	inline int32_t get_score_30() const { return ___score_30; }
	inline int32_t* get_address_of_score_30() { return &___score_30; }
	inline void set_score_30(int32_t value)
	{
		___score_30 = value;
	}

	inline static int32_t get_offset_of_missilesCollapsed_31() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___missilesCollapsed_31)); }
	inline float get_missilesCollapsed_31() const { return ___missilesCollapsed_31; }
	inline float* get_address_of_missilesCollapsed_31() { return &___missilesCollapsed_31; }
	inline void set_missilesCollapsed_31(float value)
	{
		___missilesCollapsed_31 = value;
	}

	inline static int32_t get_offset_of_currentShipPrefab_32() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___currentShipPrefab_32)); }
	inline int32_t get_currentShipPrefab_32() const { return ___currentShipPrefab_32; }
	inline int32_t* get_address_of_currentShipPrefab_32() { return &___currentShipPrefab_32; }
	inline void set_currentShipPrefab_32(int32_t value)
	{
		___currentShipPrefab_32 = value;
	}

	inline static int32_t get_offset_of_isPlaying_33() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___isPlaying_33)); }
	inline bool get_isPlaying_33() const { return ___isPlaying_33; }
	inline bool* get_address_of_isPlaying_33() { return &___isPlaying_33; }
	inline void set_isPlaying_33(bool value)
	{
		___isPlaying_33 = value;
	}

	inline static int32_t get_offset_of_firstRun_34() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___firstRun_34)); }
	inline bool get_firstRun_34() const { return ___firstRun_34; }
	inline bool* get_address_of_firstRun_34() { return &___firstRun_34; }
	inline void set_firstRun_34(bool value)
	{
		___firstRun_34 = value;
	}

	inline static int32_t get_offset_of_savedShipSpeed_35() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___savedShipSpeed_35)); }
	inline float get_savedShipSpeed_35() const { return ___savedShipSpeed_35; }
	inline float* get_address_of_savedShipSpeed_35() { return &___savedShipSpeed_35; }
	inline void set_savedShipSpeed_35(float value)
	{
		___savedShipSpeed_35 = value;
	}

	inline static int32_t get_offset_of_baseSpeed_36() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___baseSpeed_36)); }
	inline float get_baseSpeed_36() const { return ___baseSpeed_36; }
	inline float* get_address_of_baseSpeed_36() { return &___baseSpeed_36; }
	inline void set_baseSpeed_36(float value)
	{
		___baseSpeed_36 = value;
	}

	inline static int32_t get_offset_of_baseSteering_37() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___baseSteering_37)); }
	inline float get_baseSteering_37() const { return ___baseSteering_37; }
	inline float* get_address_of_baseSteering_37() { return &___baseSteering_37; }
	inline void set_baseSteering_37(float value)
	{
		___baseSteering_37 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// VariableJoystick
struct  VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1  : public Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153
{
public:
	// System.Boolean VariableJoystick::isFixed
	bool ___isFixed_9;
	// UnityEngine.Vector2 VariableJoystick::fixedScreenPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___fixedScreenPosition_10;
	// UnityEngine.Vector2 VariableJoystick::joystickCenter
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___joystickCenter_11;

public:
	inline static int32_t get_offset_of_isFixed_9() { return static_cast<int32_t>(offsetof(VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1, ___isFixed_9)); }
	inline bool get_isFixed_9() const { return ___isFixed_9; }
	inline bool* get_address_of_isFixed_9() { return &___isFixed_9; }
	inline void set_isFixed_9(bool value)
	{
		___isFixed_9 = value;
	}

	inline static int32_t get_offset_of_fixedScreenPosition_10() { return static_cast<int32_t>(offsetof(VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1, ___fixedScreenPosition_10)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_fixedScreenPosition_10() const { return ___fixedScreenPosition_10; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_fixedScreenPosition_10() { return &___fixedScreenPosition_10; }
	inline void set_fixedScreenPosition_10(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___fixedScreenPosition_10 = value;
	}

	inline static int32_t get_offset_of_joystickCenter_11() { return static_cast<int32_t>(offsetof(VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1, ___joystickCenter_11)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_joystickCenter_11() const { return ___joystickCenter_11; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_joystickCenter_11() { return &___joystickCenter_11; }
	inline void set_joystickCenter_11(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___joystickCenter_11 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_29;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_31;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_32;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_33;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_29)); }
	inline bool get_m_IncludeForMasking_29() const { return ___m_IncludeForMasking_29; }
	inline bool* get_address_of_m_IncludeForMasking_29() { return &___m_IncludeForMasking_29; }
	inline void set_m_IncludeForMasking_29(bool value)
	{
		___m_IncludeForMasking_29 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_30)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_30() const { return ___m_OnCullStateChanged_30; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_30() { return &___m_OnCullStateChanged_30; }
	inline void set_m_OnCullStateChanged_30(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_31)); }
	inline bool get_m_ShouldRecalculate_31() const { return ___m_ShouldRecalculate_31; }
	inline bool* get_address_of_m_ShouldRecalculate_31() { return &___m_ShouldRecalculate_31; }
	inline void set_m_ShouldRecalculate_31(bool value)
	{
		___m_ShouldRecalculate_31 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_32)); }
	inline int32_t get_m_StencilValue_32() const { return ___m_StencilValue_32; }
	inline int32_t* get_address_of_m_StencilValue_32() { return &___m_StencilValue_32; }
	inline void set_m_StencilValue_32(int32_t value)
	{
		___m_StencilValue_32 = value;
	}

	inline static int32_t get_offset_of_m_Corners_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_33)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_33() const { return ___m_Corners_33; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_33() { return &___m_Corners_33; }
	inline void set_m_Corners_33(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_33), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_34;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_35;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_37;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_39;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_40;

public:
	inline static int32_t get_offset_of_m_FontData_34() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_34)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_34() const { return ___m_FontData_34; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_34() { return &___m_FontData_34; }
	inline void set_m_FontData_34(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_35)); }
	inline String_t* get_m_Text_35() const { return ___m_Text_35; }
	inline String_t** get_address_of_m_Text_35() { return &___m_Text_35; }
	inline void set_m_Text_35(String_t* value)
	{
		___m_Text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_36)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_36() const { return ___m_TextCache_36; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_36() { return &___m_TextCache_36; }
	inline void set_m_TextCache_36(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_37() const { return ___m_TextCacheForLayout_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_37() { return &___m_TextCacheForLayout_37; }
	inline void set_m_TextCacheForLayout_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_39)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_39() const { return ___m_DisableFontTextureRebuiltCallback_39; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_39() { return &___m_DisableFontTextureRebuiltCallback_39; }
	inline void set_m_DisableFontTextureRebuiltCallback_39(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_39 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_40)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_40() const { return ___m_TempVerts_40; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_40() { return &___m_TempVerts_40; }
	inline void set_m_TempVerts_40(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_40), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_38;

public:
	inline static int32_t get_offset_of_s_DefaultText_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_38)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_38() const { return ___s_DefaultText_38; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_38() { return &___s_DefaultText_38; }
	inline void set_s_DefaultText_38(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_38), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * m_Items[1];

public:
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * m_Items[1];

public:
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.List`1<UnityEngine.GameObject>[]
struct List_1U5BU5D_t94B00E308FD53421F9A8256D755B8AAED7BC9F06  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * m_Items[1];

public:
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A  HashSet_1_GetEnumerator_m263AF8F8486FF5B6747A4B4C20B314EC6BB388BF_gshared (HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C430D4730AABE78C2EDBC5324F1E82FEC21CDED_gshared (Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA66925E71356820C9239CA8E620442745C88E07F_gshared (Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD1758E7826FDA8D185FC2C218F9D32B9ADA4FE0D_gshared (Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB231DEE33107C7E966680F0404FFDD7939B24625_gshared (Nullable_1_t9B468FE267D697A84B680BFB00D8C20BAB1A26E7 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.DateTime>::GetValueOrDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  Nullable_1_GetValueOrDefault_mA2BC7FE28E1E54F6DED8F2DA5ACA72A56083E43D_gshared (Nullable_1_t9B468FE267D697A84B680BFB00D8C20BAB1A26E7 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m58742F2DBAEDAA6626C115F9E99209C8F4D8F195_gshared (Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32Enum>::GetValueOrDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m19DE1B4F1BFB431B2FE3475CECA352580499168D_gshared (Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_gshared (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Boolean>::GetValueOrDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_mD65884636E94AF88C2745255BBE130A1B64BA294_gshared (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB  Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m3AA5875E6F038F027D9B80929300B746525F9D65_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_gshared (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00_gshared (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared (RuntimeObject * p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m1EC5117AD814B97460F8F95D49A428032FE37CBF_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mEF511C369E0CA9462FD3427DFC2375E81469570F_gshared (RuntimeObject * p0, const RuntimeMethod* method);

// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateRequest_m73B645271C266986E9711F38EF4E0CA6FC511D9C (const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::get_Keywords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * AdRequest_get_Keywords_mA1D66061D1F93CF256DDD5AAE938C629104F11AA (AdRequest_t98763832B122F67AC2952360B6381F4F5848306F * __this, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.String>::GetEnumerator()
inline Enumerator_tF6B5A6D64F2347BF9A12A794D4A8C252CA1431A7  HashSet_1_GetEnumerator_m2EC6A826B51D71BE1AB94EEFB697BC6412B1CDF8 (HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF6B5A6D64F2347BF9A12A794D4A8C252CA1431A7  (*) (HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 *, const RuntimeMethod*))HashSet_1_GetEnumerator_m263AF8F8486FF5B6747A4B4C20B314EC6BB388BF_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_mF1A272E02A81B502A1CDF431D0AC41BE3D53E764 (Enumerator_tF6B5A6D64F2347BF9A12A794D4A8C252CA1431A7 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tF6B5A6D64F2347BF9A12A794D4A8C252CA1431A7 *, const RuntimeMethod*))Enumerator_get_Current_m4C430D4730AABE78C2EDBC5324F1E82FEC21CDED_gshared)(__this, method);
}
// System.Void GoogleMobileAds.iOS.Externs::GADUAddKeyword(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUAddKeyword_mCF88D72AA181DCB3C3DA3FB9BD096E64818FB492 (intptr_t ___request0, String_t* ___keyword1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mCCD47EE234D4C2A16ED96329CC6BC10D2C101702 (Enumerator_tF6B5A6D64F2347BF9A12A794D4A8C252CA1431A7 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF6B5A6D64F2347BF9A12A794D4A8C252CA1431A7 *, const RuntimeMethod*))Enumerator_MoveNext_mA66925E71356820C9239CA8E620442745C88E07F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_mB81C8E39092695921473DBCA98385B2C53AFA7CF (Enumerator_tF6B5A6D64F2347BF9A12A794D4A8C252CA1431A7 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF6B5A6D64F2347BF9A12A794D4A8C252CA1431A7 *, const RuntimeMethod*))Enumerator_Dispose_mD1758E7826FDA8D185FC2C218F9D32B9ADA4FE0D_gshared)(__this, method);
}
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest::get_TestDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * AdRequest_get_TestDevices_m02EC537E8CEEC7E695A6055B8CB1E1889F164617 (AdRequest_t98763832B122F67AC2952360B6381F4F5848306F * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D  List_1_GetEnumerator_mE24C416317D3F4E40A03014ED01FDE0F4FFDC8BE (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D  (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m42A600F939D181CE139B9C26F825FD4BC28F6F1B (Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared)(__this, method);
}
// System.Void GoogleMobileAds.iOS.Externs::GADUAddTestDevice(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUAddTestDevice_m76BAC633F8636E5D4F8BF2A1D6A9383B7BCC3866 (intptr_t ___request0, String_t* ___deviceId1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mB55179B6FAFF356F8635980C5BE36716D5A3CF7F (Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_mBFE61DBAEB92C4FB64F6B1ACF2E895D0467CE1E4 (Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest::get_Birthday()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t9B468FE267D697A84B680BFB00D8C20BAB1A26E7  AdRequest_get_Birthday_mF6551ECBB0E8EB04D73536381A5685D0FF55715A (AdRequest_t98763832B122F67AC2952360B6381F4F5848306F * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB231DEE33107C7E966680F0404FFDD7939B24625 (Nullable_1_t9B468FE267D697A84B680BFB00D8C20BAB1A26E7 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t9B468FE267D697A84B680BFB00D8C20BAB1A26E7 *, const RuntimeMethod*))Nullable_1_get_HasValue_mB231DEE33107C7E966680F0404FFDD7939B24625_gshared)(__this, method);
}
// !0 System.Nullable`1<System.DateTime>::GetValueOrDefault()
inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  Nullable_1_GetValueOrDefault_mA2BC7FE28E1E54F6DED8F2DA5ACA72A56083E43D (Nullable_1_t9B468FE267D697A84B680BFB00D8C20BAB1A26E7 * __this, const RuntimeMethod* method)
{
	return ((  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  (*) (Nullable_1_t9B468FE267D697A84B680BFB00D8C20BAB1A26E7 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mA2BC7FE28E1E54F6DED8F2DA5ACA72A56083E43D_gshared)(__this, method);
}
// System.Int32 System.DateTime::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Year_m019BED6042282D03E51CE82F590D2A9FE5EA859E (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Month_m9E31D84567E6D221F0E686EC6894A7AD07A5E43C (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Day_m3C888FF1DA5019583A4326FAB232F81D32B1478D (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUSetBirthday(System.IntPtr,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetBirthday_mF7965515078BEAD86EBCC07FFA7004755A1F4D4F (intptr_t ___request0, int32_t ___year1, int32_t ___month2, int32_t ___day3, const RuntimeMethod* method);
// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest::get_Gender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t65AAF2600D9569366D224E2EB7B3F65128A96D1B  AdRequest_get_Gender_m40E1D2BE6A214044F95918E202D11E5551118889 (AdRequest_t98763832B122F67AC2952360B6381F4F5848306F * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<GoogleMobileAds.Api.Gender>::get_HasValue()
inline bool Nullable_1_get_HasValue_mE966D0285B7519BF51C1B117A064B4F40858077A (Nullable_1_t65AAF2600D9569366D224E2EB7B3F65128A96D1B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t65AAF2600D9569366D224E2EB7B3F65128A96D1B *, const RuntimeMethod*))Nullable_1_get_HasValue_m58742F2DBAEDAA6626C115F9E99209C8F4D8F195_gshared)(__this, method);
}
// !0 System.Nullable`1<GoogleMobileAds.Api.Gender>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m9EDDA3FC2B886F793AC331A3E3617416D931833E (Nullable_1_t65AAF2600D9569366D224E2EB7B3F65128A96D1B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t65AAF2600D9569366D224E2EB7B3F65128A96D1B *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m19DE1B4F1BFB431B2FE3475CECA352580499168D_gshared)(__this, method);
}
// System.Void GoogleMobileAds.iOS.Externs::GADUSetGender(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetGender_m6DA6BDFDB359466F6E2FBBC7FCF77693DA9241C2 (intptr_t ___request0, int32_t ___genderCode1, const RuntimeMethod* method);
// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest::get_TagForChildDirectedTreatment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  AdRequest_get_TagForChildDirectedTreatment_mAF138AD39FC86FA60D310B685A6F3F1CDE91ABAA (AdRequest_t98763832B122F67AC2952360B6381F4F5848306F * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *, const RuntimeMethod*))Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_gshared)(__this, method);
}
// !0 System.Nullable`1<System.Boolean>::GetValueOrDefault()
inline bool Nullable_1_GetValueOrDefault_mD65884636E94AF88C2745255BBE130A1B64BA294 (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mD65884636E94AF88C2745255BBE130A1B64BA294_gshared)(__this, method);
}
// System.Void GoogleMobileAds.iOS.Externs::GADUTagForChildDirectedTreatment(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUTagForChildDirectedTreatment_m79D9D3D2E5D37AD810F239728B87D2264F994AF3 (intptr_t ___request0, bool ___childDirectedTreatment1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::get_Extras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * AdRequest_get_Extras_m814DAAAC04DFD17FC1DD6446718BEF964934B83B (AdRequest_t98763832B122F67AC2952360B6381F4F5848306F * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3  Dictionary_2_GetEnumerator_m3378B4792B81EF81397CB9D9A761BD7149BD27F5 (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3  (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  Enumerator_get_Current_mBEC9B470213860581893E0F197CAAE657B8B6C69 (Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  (*) (Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 *, const RuntimeMethod*))Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m434E29A1251E81B5A2124466105823011C462BF2 (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3AA5875E6F038F027D9B80929300B746525F9D65_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2 (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared)(__this, method);
}
// System.Void GoogleMobileAds.iOS.Externs::GADUSetExtra(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetExtra_m220E34583749470A8335664E94766D25674D1726 (intptr_t ___request0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_m6E6A22A8620F5A5582BB67E367BE5086D7D895A6 (Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 *, const RuntimeMethod*))Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m16C0E963A012498CD27422B463DB327BA4C7A321 (Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 *, const RuntimeMethod*))Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00_gshared)(__this, method);
}
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::get_MediationExtras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8F38EE057190BE9897CDE829F7EB4282DF6F3EBA * AdRequest_get_MediationExtras_mEEC772BDDD5CA17C993C45BD09F342E0CCFB1842 (AdRequest_t98763832B122F67AC2952360B6381F4F5848306F * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>::GetEnumerator()
inline Enumerator_t1B7A508A639F9A6260571CC57EAB3F3C4B96A49C  List_1_GetEnumerator_m739CC8C648FEC19900D51E4F3BCE6B15D3C6325A (List_1_t8F38EE057190BE9897CDE829F7EB4282DF6F3EBA * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1B7A508A639F9A6260571CC57EAB3F3C4B96A49C  (*) (List_1_t8F38EE057190BE9897CDE829F7EB4282DF6F3EBA *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<GoogleMobileAds.Api.Mediation.MediationExtras>::get_Current()
inline MediationExtras_t53F0F7F90139A2D039272C9764DC880D4B3AB301 * Enumerator_get_Current_mB8FC184CAAB4A8E56B08699B9C9894803A9EA58A (Enumerator_t1B7A508A639F9A6260571CC57EAB3F3C4B96A49C * __this, const RuntimeMethod* method)
{
	return ((  MediationExtras_t53F0F7F90139A2D039272C9764DC880D4B3AB301 * (*) (Enumerator_t1B7A508A639F9A6260571CC57EAB3F3C4B96A49C *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared)(__this, method);
}
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateMutableDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateMutableDictionary_m71EE6107C3600A67D5A7C4D73C018CBAE659C23C (const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.Mediation.MediationExtras::get_Extras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * MediationExtras_get_Extras_m845B48080AE808551366F9B6E363E0429EAE7869 (MediationExtras_t53F0F7F90139A2D039272C9764DC880D4B3AB301 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUMutableDictionarySetValue(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUMutableDictionarySetValue_m1806F4834F6CCA36CD93928D50F81B097D90F60D (intptr_t ___mutableDictionaryPtr0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUSetMediationExtras(System.IntPtr,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetMediationExtras_m89618AB332B3A9FE4FB423511B821186B35F1D2E (intptr_t ___request0, intptr_t ___mutableDictionaryPtr1, String_t* ___adNetworkExtrasClassName2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<GoogleMobileAds.Api.Mediation.MediationExtras>::MoveNext()
inline bool Enumerator_MoveNext_mF9F196771804D9FAE1887C1EE679DB80CF90182D (Enumerator_t1B7A508A639F9A6260571CC57EAB3F3C4B96A49C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1B7A508A639F9A6260571CC57EAB3F3C4B96A49C *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<GoogleMobileAds.Api.Mediation.MediationExtras>::Dispose()
inline void Enumerator_Dispose_mB4D942857769BA4A52C25194705752C32D86DCED (Enumerator_t1B7A508A639F9A6260571CC57EAB3F3C4B96A49C * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1B7A508A639F9A6260571CC57EAB3F3C4B96A49C *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void GoogleMobileAds.iOS.Externs::GADUSetRequestAgent(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetRequestAgent_m27CF00F87EA0EBA6A9C3C8709E5FAD8810198647 (intptr_t ___request0, String_t* ___requestAgent1, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_mA5D5D1AA7C0EB6A96F92454A8AF9C266E2DF5DA5 (intptr_t p0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_mF098DF00F5341FDE4747A6F2004D5A0C9B03ED85 (intptr_t p0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_FindGameObjectWithTag_m9F2877F52346B973DE3023209D73852E96ECC10D (String_t* p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p2, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared)(p0, p1, p2, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, bool p1, const RuntimeMethod* method);
// System.Void IncentiveController::TraceSign()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncentiveController_TraceSign_m1FF986ED2378C38DFE808BB4BFF44DB0BD729A0E (IncentiveController_t808EB287A43214CBB4B6D0BCF401B1973A86CC5C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Camera_WorldToViewportPoint_mC939A83CE134EA2CE666C2DF5AD8FA4CB48AE3C1 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * GameObject_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m43C07809909DE265C356A2CD8E8B290E74E2EFC7 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mCF9BE0E9CAC9F18D207692BB2DAC7F3E1D4E1CB7 (float p0, float p1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6 (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void IncentiveSpawner::RemoveCurrentIncentives()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncentiveSpawner_RemoveCurrentIncentives_mEBD3B83D94FAB1D664D007FAC8C70366B84B771A (IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384 (float p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780 (int32_t p0, int32_t p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112 (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8 (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35 (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_mCE8DF4076F0FB5A76A7D21A657E69AF3BB683018 (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_mD2CEADF3C7AD02BA60F7990F1A39BC67C6D8819B (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method);
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_m2326D40EF66E0A5E2B34F9CF02A53C05CCAFDED0 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<GameController>()
inline GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * GameObject_GetComponent_TisGameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_m64E547BB2F34853E78EB9487F66094E4FAF5CB0B (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t p0, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m09F51D8BDECFD2E8C618498EF7377029B669030D (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, float p1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::DetachChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void MissileController::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileController_Rotate_mAA68317C362F23ED1DD2750305099A2DAFF1E915 (MissileController_t00541937DA8E984F65B35C796E2A26960D58465E * __this, const RuntimeMethod* method);
// System.Void MissileController::MagnetMissiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileController_MagnetMissiles_mD2AD58DEEF11C9B86E2B930326359469A3068437 (MissileController_t00541937DA8E984F65B35C796E2A26960D58465E * __this, const RuntimeMethod* method);
// System.Void MissileController::TraceSign()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileController_TraceSign_mBB1E7D70CE1923F076682CB4FC2F4E477BEF237D (MissileController_t00541937DA8E984F65B35C796E2A26960D58465E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Rigidbody_get_rotation_mD967DD98F16F80C0D74F8F1C25953D0609906BE5 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MoveRotation_mCBE2CF9F1B4A86C4BCB899AAB4C4EE8BBAD21C84 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* Physics_OverlapSphere_m354A92672F7A6DE59EF1285D02D62247F46A5D84 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void MissileController::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileController_Destroy_m2B1F06C4D8FE6B21882B3C53CD1D462BF3D4BA8F (MissileController_t00541937DA8E984F65B35C796E2A26960D58465E * __this, const RuntimeMethod* method);
// System.Void MissileController::SpawnCoin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileController_SpawnCoin_m95389B52202021761B63D8CF7566091FBE855FAF (MissileController_t00541937DA8E984F65B35C796E2A26960D58465E * __this, const RuntimeMethod* method);
// System.Void GameController::HandleMissileCollapse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_HandleMissileCollapse_mB62ECACB045C08320D95D4C4FF7929518F3FFE91 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_m590A0A7F161D579C18E678B4C5ACCE77B1B318DD (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mC2C29B39556BFC68657F27343602BCC57AA6604F (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void MissileSpawner/<Spawning>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawningU3Ed__6__ctor_m39C581D29F321B065206557E2414B88E0074F6E0 (U3CSpawningU3Ed__6_t5AEC324527E86BE881896DEC924A820D204E884B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<MissileController>()
inline MissileController_t00541937DA8E984F65B35C796E2A26960D58465E * GameObject_GetComponent_TisMissileController_t00541937DA8E984F65B35C796E2A26960D58465E_m873071DFF79DDC7F994B6D1735D0749E10BCBE8C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MissileController_t00541937DA8E984F65B35C796E2A26960D58465E * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<PlayerController>()
inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * Component_GetComponent_TisPlayerController_t4CE339054014370D89B89922EDC0EA2766589C85_m503EAA28F55B66971C880C00538F81DCCB8C1629 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float p0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0 (Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void GameDataWriter::Write(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDataWriter_Write_m790A8ACA3F8097A34F3002FE10C5D58D3D804735 (GameDataWriter_tDE6D451FD1A567A30F2189551054DEE43E1DEB7C * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void GameDataWriter::Write(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDataWriter_Write_mEC466B5780155FCC5041319CE1D76BFDACFABC73 (GameDataWriter_tDE6D451FD1A567A30F2189551054DEE43E1DEB7C * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 GameDataReader::ReadVector3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GameDataReader_ReadVector3_m99F37C88D8A3382F4FFA2DE75361A5ED7E6E08B0 (GameDataReader_t2D0084ECC4827F2E510F29A214562FAA32B32E97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion GameDataReader::ReadQuaternion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  GameDataReader_ReadQuaternion_mB1C0C94760E817F84261D92B5E4A141458A76D47 (GameDataReader_t2D0084ECC4827F2E510F29A214562FAA32B32E97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311 (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB (String_t* p0, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * File_Open_mDA5EB4A312EAEBF8543B13C572271FB5F673A501 (String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_m2E92F4E5096905E2E7487E003AB7B3CC5C5EC185 (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * p0, const RuntimeMethod* method);
// System.Void GameDataWriter::.ctor(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDataWriter__ctor_m913C8087B64B2E9D1D702E08D54503F3D355F90A (GameDataWriter_tDE6D451FD1A567A30F2189551054DEE43E1DEB7C * __this, BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer0, const RuntimeMethod* method);
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_mD134893EA93809AFA29B025FF7439B82C35FE55F (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * p0, const RuntimeMethod* method);
// System.Void GameDataReader::.ctor(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDataReader__ctor_mFEFE1FBDA51B77F3BBA9C4C7C45A3FB1FEECBEA5 (GameDataReader_t2D0084ECC4827F2E510F29A214562FAA32B32E97 * __this, BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___reader0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<PlanetSpawner>()
inline PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * GameObject_GetComponent_TisPlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE_m5B60021AA806475686C0E7896FBFF1D2B88DE21D (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m3424566A0D19A1487AE3A82B08C47F2A2D2A26CB (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, int32_t p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839 (float p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void PlanetSpawner::ReclaimPlanet(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetSpawner_ReclaimPlanet_mF2774A8564719B1C9A4F1D2BFD26516E1A822A17 (PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___planet0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<PlanetController>()
inline PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF * GameObject_GetComponent_TisPlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF_m80B9F78DC497D7E2E0040FB39FACBBE001E1B283 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// System.Void PlanetController::SetSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetController_SetSpeed_m6E046A715BD07DF1F504DC2AA1F8195B6DEB6AF3 (PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF * __this, float ___speed0, const RuntimeMethod* method);
// System.Void PlanetSpawner::CreatePools()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetSpawner_CreatePools_mBC9B7FA0958F1DD7A9AD6D37A781D60DD025A84F (PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * __this, const RuntimeMethod* method);
// System.Void PlanetSpawner::SpawnInitialPlanets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetSpawner_SpawnInitialPlanets_m33B495CC543EC21F4BF1369CB3741D39CC9751E5 (PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * __this, const RuntimeMethod* method);
// System.Void PlanetSpawner::SpawnPlanetAtPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetSpawner_SpawnPlanetAtPosition_mB3174A1C0A339D7C2D857E14B22B283EDB2139C4 (PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// System.Void PlanetSpawner::SpawnPlanet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetSpawner_SpawnPlanet_mEBDD9E4EA7EC7695EC4D67C417BB584EE739C1AE (PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Random::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Random_get_rotation_mFEB212A2058746E0E8F544D8C2201663861BA77A (const RuntimeMethod* method);
// UnityEngine.GameObject PlanetSpawner::InstantiatePlanet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PlanetSpawner_InstantiatePlanet_m1826E6E39E54B465A6785F26682802A289784613 (PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * __this, int32_t ___idx0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m3F60BC23F48E82BD2B61BF75F6B55502FD6FE250 (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m1EC5117AD814B97460F8F95D49A428032FE37CBF_gshared)(__this, p0, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mEF511C369E0CA9462FD3427DFC2375E81469570F_gshared)(p0, method);
}
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.Void PlayerController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Move_m0CD456A5EA1116F1B4EA5A731C7EAC46D26B598F (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method);
// System.Void PlayerController::MagnetCoins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_MagnetCoins_mE167FA23D168300F1CE98FDDF69786F47A6188F4 (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Handheld::Vibrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handheld_Vibrate_mA83C229AF2018DCA33714AE61271EF8B87B16277 (const RuntimeMethod* method);
// System.Void GameController::HandleShipDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_HandleShipDestroy_mFD703B37D9D30A351EA0798374BCA98D63214750 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method);
// System.Void GameController::HandleCoinCollect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_HandleCoinCollect_m6FA783EA580308B50251BD42075EA75A1F1E723E (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2 (const RuntimeMethod* method);
// System.Double System.Math::Round(System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Round_m43E20353F30A47D0005BEC4431B380572B9A4932 (double p0, int32_t p1, const RuntimeMethod* method);
// System.String System.Double::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m4A142BE5E5F1EF1434658FC874A19E124D95313F (double* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void VariableJoystick::OnFixed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnFixed_mBDD3E7597A7E7F75CCB07026E9655F769A6BAD68 (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, const RuntimeMethod* method);
// System.Void VariableJoystick::OnFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnFloat_mD79CAFA448FD8A0309B82DFA1E6A8D6B8D8CF0F0 (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  PointerEventData_get_position_m00FFBA0CB6385B8E8B82BE9C8AAC45E027B2D061 (PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Division_m0961A935168EE6701E098E2B37013DFFF46A5077 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_normalized_m058E75C38C6FC66E178D7C8EF1B6298DE8F0E14B (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// System.Void Joystick::ClampJoystick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_ClampJoystick_m4407381A239C637BE3515E642EC169EC9F6BC385 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, const RuntimeMethod* method);
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m0CEC3DFCF02C69B8020F600539EB02297E26D1CE (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADURewardedAdDidCloseCallback_t506A5A3B01F7221AB06AC6E689610FDCE627BCAF (GADURewardedAdDidCloseCallback_t506A5A3B01F7221AB06AC6E689610FDCE627BCAF * __this, intptr_t ___rewardedAdClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardedAdClient0);

}
// System.Void GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidCloseCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidCloseCallback__ctor_mDE3E6BDF0466C62F82852A5C57A93282AF46D212 (GADURewardedAdDidCloseCallback_t506A5A3B01F7221AB06AC6E689610FDCE627BCAF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidCloseCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidCloseCallback_Invoke_mAFB7626EBCEA58E7D042B37534BFB4847CFADA13 (GADURewardedAdDidCloseCallback_t506A5A3B01F7221AB06AC6E689610FDCE627BCAF * __this, intptr_t ___rewardedAdClient0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rewardedAdClient0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___rewardedAdClient0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardedAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardedAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardedAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardedAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidCloseCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADURewardedAdDidCloseCallback_BeginInvoke_mBB27DC37FD25BDFE8FD264F7C95E02179087A9C5 (GADURewardedAdDidCloseCallback_t506A5A3B01F7221AB06AC6E689610FDCE627BCAF * __this, intptr_t ___rewardedAdClient0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADURewardedAdDidCloseCallback_BeginInvoke_mBB27DC37FD25BDFE8FD264F7C95E02179087A9C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardedAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidCloseCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidCloseCallback_EndInvoke_m029DDB01126D18879DFFCCAE3F69816699E4C87D (GADURewardedAdDidCloseCallback_t506A5A3B01F7221AB06AC6E689610FDCE627BCAF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADURewardedAdDidFailToReceiveAdWithErrorCallback_tCDA36987E2F970C589B4F9B0D153AF5EC883F9BE (GADURewardedAdDidFailToReceiveAdWithErrorCallback_tCDA36987E2F970C589B4F9B0D153AF5EC883F9BE * __this, intptr_t ___rewardedAdClient0, String_t* ___error1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter U27___error1U27 to native representation
	char* ____error1_marshaled = NULL;
	____error1_marshaled = il2cpp_codegen_marshal_string(___error1);

	// Native function invocation
	il2cppPInvokeFunc(___rewardedAdClient0, ____error1_marshaled);

	// Marshaling cleanup of parameter U27___error1U27 native representation
	il2cpp_codegen_marshal_free(____error1_marshaled);
	____error1_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidFailToReceiveAdWithErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidFailToReceiveAdWithErrorCallback__ctor_mE36E0D844FE9B40DD7C89F333724FDD8B6A43E0F (GADURewardedAdDidFailToReceiveAdWithErrorCallback_tCDA36987E2F970C589B4F9B0D153AF5EC883F9BE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidFailToReceiveAdWithErrorCallback::Invoke(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidFailToReceiveAdWithErrorCallback_Invoke_m0063F584FF7CFA18EE2F7805FCC2AFE55E5F084C (GADURewardedAdDidFailToReceiveAdWithErrorCallback_tCDA36987E2F970C589B4F9B0D153AF5EC883F9BE * __this, intptr_t ___rewardedAdClient0, String_t* ___error1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rewardedAdClient0, ___error1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, ___error1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___rewardedAdClient0, ___error1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___rewardedAdClient0, ___error1);
					else
						GenericVirtActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___rewardedAdClient0, ___error1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardedAdClient0, ___error1);
					else
						VirtActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardedAdClient0, ___error1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, ___error1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidFailToReceiveAdWithErrorCallback::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADURewardedAdDidFailToReceiveAdWithErrorCallback_BeginInvoke_m0BC8E719A53FE7FD5F5AB15B6B76FEF95D32DDAF (GADURewardedAdDidFailToReceiveAdWithErrorCallback_tCDA36987E2F970C589B4F9B0D153AF5EC883F9BE * __this, intptr_t ___rewardedAdClient0, String_t* ___error1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADURewardedAdDidFailToReceiveAdWithErrorCallback_BeginInvoke_m0BC8E719A53FE7FD5F5AB15B6B76FEF95D32DDAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardedAdClient0);
	__d_args[1] = ___error1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidFailToReceiveAdWithErrorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidFailToReceiveAdWithErrorCallback_EndInvoke_mE21B2E9E3A35E1A45CE66AC0D1F8049B739C25BA (GADURewardedAdDidFailToReceiveAdWithErrorCallback_tCDA36987E2F970C589B4F9B0D153AF5EC883F9BE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADURewardedAdDidFailToShowAdWithErrorCallback_t7ECC0C4E4E19D517843B7F217597B1365D6B2BF8 (GADURewardedAdDidFailToShowAdWithErrorCallback_t7ECC0C4E4E19D517843B7F217597B1365D6B2BF8 * __this, intptr_t ___rewardedAdClient0, String_t* ___error1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter U27___error1U27 to native representation
	char* ____error1_marshaled = NULL;
	____error1_marshaled = il2cpp_codegen_marshal_string(___error1);

	// Native function invocation
	il2cppPInvokeFunc(___rewardedAdClient0, ____error1_marshaled);

	// Marshaling cleanup of parameter U27___error1U27 native representation
	il2cpp_codegen_marshal_free(____error1_marshaled);
	____error1_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidFailToShowAdWithErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidFailToShowAdWithErrorCallback__ctor_m6F44926BCAAE22867C751723F1BB03BBDB9D78FE (GADURewardedAdDidFailToShowAdWithErrorCallback_t7ECC0C4E4E19D517843B7F217597B1365D6B2BF8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidFailToShowAdWithErrorCallback::Invoke(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidFailToShowAdWithErrorCallback_Invoke_m05FCB6A99E8F1E06D7B5A92A08CF77B5F5CA21FA (GADURewardedAdDidFailToShowAdWithErrorCallback_t7ECC0C4E4E19D517843B7F217597B1365D6B2BF8 * __this, intptr_t ___rewardedAdClient0, String_t* ___error1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rewardedAdClient0, ___error1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, ___error1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___rewardedAdClient0, ___error1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___rewardedAdClient0, ___error1);
					else
						GenericVirtActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___rewardedAdClient0, ___error1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardedAdClient0, ___error1);
					else
						VirtActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardedAdClient0, ___error1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, ___error1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidFailToShowAdWithErrorCallback::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADURewardedAdDidFailToShowAdWithErrorCallback_BeginInvoke_mF750899139C415B39AACDA867A119B9EF7764EA5 (GADURewardedAdDidFailToShowAdWithErrorCallback_t7ECC0C4E4E19D517843B7F217597B1365D6B2BF8 * __this, intptr_t ___rewardedAdClient0, String_t* ___error1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADURewardedAdDidFailToShowAdWithErrorCallback_BeginInvoke_mF750899139C415B39AACDA867A119B9EF7764EA5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardedAdClient0);
	__d_args[1] = ___error1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidFailToShowAdWithErrorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidFailToShowAdWithErrorCallback_EndInvoke_mC0C59ACFBACE6CEEB6F48D52FE6FC4395AECCF8A (GADURewardedAdDidFailToShowAdWithErrorCallback_t7ECC0C4E4E19D517843B7F217597B1365D6B2BF8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADURewardedAdDidOpenCallback_t3C1F9C88CBDD1DDE862D771C31FBFDFD30BCBB9C (GADURewardedAdDidOpenCallback_t3C1F9C88CBDD1DDE862D771C31FBFDFD30BCBB9C * __this, intptr_t ___rewardedAdClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardedAdClient0);

}
// System.Void GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidOpenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidOpenCallback__ctor_mCCAEC5F264875DEAE61047B391C1117DBD5FB6B7 (GADURewardedAdDidOpenCallback_t3C1F9C88CBDD1DDE862D771C31FBFDFD30BCBB9C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidOpenCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidOpenCallback_Invoke_mB62A711F64677A59921FE5588BB4A67F2BB7A170 (GADURewardedAdDidOpenCallback_t3C1F9C88CBDD1DDE862D771C31FBFDFD30BCBB9C * __this, intptr_t ___rewardedAdClient0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rewardedAdClient0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___rewardedAdClient0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardedAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardedAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardedAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardedAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidOpenCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADURewardedAdDidOpenCallback_BeginInvoke_mFB864A51CC2FE867896A57D11F496DD35BF6544C (GADURewardedAdDidOpenCallback_t3C1F9C88CBDD1DDE862D771C31FBFDFD30BCBB9C * __this, intptr_t ___rewardedAdClient0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADURewardedAdDidOpenCallback_BeginInvoke_mFB864A51CC2FE867896A57D11F496DD35BF6544C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardedAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidOpenCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidOpenCallback_EndInvoke_mFB8427D49697CDCD73717E826ECDDC44F9E1429D (GADURewardedAdDidOpenCallback_t3C1F9C88CBDD1DDE862D771C31FBFDFD30BCBB9C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADURewardedAdDidReceiveAdCallback_t643161A4F15EE54392448B33D32F455E4F988E5A (GADURewardedAdDidReceiveAdCallback_t643161A4F15EE54392448B33D32F455E4F988E5A * __this, intptr_t ___rewardedAdClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardedAdClient0);

}
// System.Void GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidReceiveAdCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidReceiveAdCallback__ctor_mBE79E3FFEE2DBB6DDB1FF6B5E4DABEDE8F56681C (GADURewardedAdDidReceiveAdCallback_t643161A4F15EE54392448B33D32F455E4F988E5A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidReceiveAdCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidReceiveAdCallback_Invoke_m1F667CE2CA9E00762DABB4DAB425CE369628ACCD (GADURewardedAdDidReceiveAdCallback_t643161A4F15EE54392448B33D32F455E4F988E5A * __this, intptr_t ___rewardedAdClient0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rewardedAdClient0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___rewardedAdClient0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardedAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardedAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardedAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardedAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidReceiveAdCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADURewardedAdDidReceiveAdCallback_BeginInvoke_m4A31ED913FBA9ADBC0690F1174C7607FEA2F9536 (GADURewardedAdDidReceiveAdCallback_t643161A4F15EE54392448B33D32F455E4F988E5A * __this, intptr_t ___rewardedAdClient0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADURewardedAdDidReceiveAdCallback_BeginInvoke_m4A31ED913FBA9ADBC0690F1174C7607FEA2F9536_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardedAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient_GADURewardedAdDidReceiveAdCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidReceiveAdCallback_EndInvoke_m06880BF1A5BA7D9C324304DDBA524F6FFCF66A21 (GADURewardedAdDidReceiveAdCallback_t643161A4F15EE54392448B33D32F455E4F988E5A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUUserEarnedRewardCallback_tD3405735D8FA00F085D1F680CBA864C85F5CEC62 (GADUUserEarnedRewardCallback_tD3405735D8FA00F085D1F680CBA864C85F5CEC62 * __this, intptr_t ___rewardedAdClient0, String_t* ___rewardType1, double ___rewardAmount2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, double);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter U27___rewardType1U27 to native representation
	char* ____rewardType1_marshaled = NULL;
	____rewardType1_marshaled = il2cpp_codegen_marshal_string(___rewardType1);

	// Native function invocation
	il2cppPInvokeFunc(___rewardedAdClient0, ____rewardType1_marshaled, ___rewardAmount2);

	// Marshaling cleanup of parameter U27___rewardType1U27 native representation
	il2cpp_codegen_marshal_free(____rewardType1_marshaled);
	____rewardType1_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.RewardedAdClient_GADUUserEarnedRewardCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUUserEarnedRewardCallback__ctor_m65FC6D0FDBDFE9AB82D9CF4EE2FF806CB082352E (GADUUserEarnedRewardCallback_tD3405735D8FA00F085D1F680CBA864C85F5CEC62 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient_GADUUserEarnedRewardCallback::Invoke(System.IntPtr,System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUUserEarnedRewardCallback_Invoke_mDFB60F308C8B8DAC1B24B880B07766E99208675C (GADUUserEarnedRewardCallback_tD3405735D8FA00F085D1F680CBA864C85F5CEC62 * __this, intptr_t ___rewardedAdClient0, String_t* ___rewardType1, double ___rewardAmount2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rewardedAdClient0, ___rewardType1, ___rewardAmount2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, ___rewardType1, ___rewardAmount2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, String_t*, double, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___rewardedAdClient0, ___rewardType1, ___rewardAmount2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, String_t*, double >::Invoke(targetMethod, targetThis, ___rewardedAdClient0, ___rewardType1, ___rewardAmount2);
					else
						GenericVirtActionInvoker3< intptr_t, String_t*, double >::Invoke(targetMethod, targetThis, ___rewardedAdClient0, ___rewardType1, ___rewardAmount2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, String_t*, double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardedAdClient0, ___rewardType1, ___rewardAmount2);
					else
						VirtActionInvoker3< intptr_t, String_t*, double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardedAdClient0, ___rewardType1, ___rewardAmount2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, ___rewardType1, ___rewardAmount2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardedAdClient_GADUUserEarnedRewardCallback::BeginInvoke(System.IntPtr,System.String,System.Double,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUUserEarnedRewardCallback_BeginInvoke_m8814A0919CCE313552C8A978026C14D210CE08B8 (GADUUserEarnedRewardCallback_tD3405735D8FA00F085D1F680CBA864C85F5CEC62 * __this, intptr_t ___rewardedAdClient0, String_t* ___rewardType1, double ___rewardAmount2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADUUserEarnedRewardCallback_BeginInvoke_m8814A0919CCE313552C8A978026C14D210CE08B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardedAdClient0);
	__d_args[1] = ___rewardType1;
	__d_args[2] = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &___rewardAmount2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient_GADUUserEarnedRewardCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUUserEarnedRewardCallback_EndInvoke_m1409A80228F8E8298A5296276EA8E66A94FDF0B3 (GADUUserEarnedRewardCallback_tD3405735D8FA00F085D1F680CBA864C85F5CEC62 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.IntPtr GoogleMobileAds.iOS.Utils::BuildAdRequest(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utils_BuildAdRequest_m79F99FD27AEBB11A401DF217D6C5F537B8CC9FA2 (AdRequest_t98763832B122F67AC2952360B6381F4F5848306F * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_BuildAdRequest_m79F99FD27AEBB11A401DF217D6C5F537B8CC9FA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_tF6B5A6D64F2347BF9A12A794D4A8C252CA1431A7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	Nullable_1_t9B468FE267D697A84B680BFB00D8C20BAB1A26E7  V_5;
	memset((&V_5), 0, sizeof(V_5));
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Nullable_1_t65AAF2600D9569366D224E2EB7B3F65128A96D1B  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3  V_9;
	memset((&V_9), 0, sizeof(V_9));
	KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Enumerator_t1B7A508A639F9A6260571CC57EAB3F3C4B96A49C  V_11;
	memset((&V_11), 0, sizeof(V_11));
	MediationExtras_t53F0F7F90139A2D039272C9764DC880D4B3AB301 * V_12 = NULL;
	intptr_t V_13;
	memset((&V_13), 0, sizeof(V_13));
	KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  V_14;
	memset((&V_14), 0, sizeof(V_14));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		intptr_t L_0 = Externs_GADUCreateRequest_m73B645271C266986E9711F38EF4E0CA6FC511D9C(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		AdRequest_t98763832B122F67AC2952360B6381F4F5848306F * L_1 = ___request0;
		NullCheck(L_1);
		HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * L_2 = AdRequest_get_Keywords_mA1D66061D1F93CF256DDD5AAE938C629104F11AA(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Enumerator_tF6B5A6D64F2347BF9A12A794D4A8C252CA1431A7  L_3 = HashSet_1_GetEnumerator_m2EC6A826B51D71BE1AB94EEFB697BC6412B1CDF8(L_2, /*hidden argument*/HashSet_1_GetEnumerator_m2EC6A826B51D71BE1AB94EEFB697BC6412B1CDF8_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0023;
		}

IL_0014:
		{
			String_t* L_4 = Enumerator_get_Current_mF1A272E02A81B502A1CDF431D0AC41BE3D53E764((Enumerator_tF6B5A6D64F2347BF9A12A794D4A8C252CA1431A7 *)(&V_1), /*hidden argument*/Enumerator_get_Current_mF1A272E02A81B502A1CDF431D0AC41BE3D53E764_RuntimeMethod_var);
			V_2 = L_4;
			intptr_t L_5 = V_0;
			String_t* L_6 = V_2;
			Externs_GADUAddKeyword_mCF88D72AA181DCB3C3DA3FB9BD096E64818FB492((intptr_t)L_5, L_6, /*hidden argument*/NULL);
		}

IL_0023:
		{
			bool L_7 = Enumerator_MoveNext_mCCD47EE234D4C2A16ED96329CC6BC10D2C101702((Enumerator_tF6B5A6D64F2347BF9A12A794D4A8C252CA1431A7 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mCCD47EE234D4C2A16ED96329CC6BC10D2C101702_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0014;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB81C8E39092695921473DBCA98385B2C53AFA7CF((Enumerator_tF6B5A6D64F2347BF9A12A794D4A8C252CA1431A7 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mB81C8E39092695921473DBCA98385B2C53AFA7CF_RuntimeMethod_var);
		IL2CPP_RESET_LEAVE(0x3C);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003c:
	{
		AdRequest_t98763832B122F67AC2952360B6381F4F5848306F * L_8 = ___request0;
		NullCheck(L_8);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_9 = AdRequest_get_TestDevices_m02EC537E8CEEC7E695A6055B8CB1E1889F164617(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D  L_10 = List_1_GetEnumerator_mE24C416317D3F4E40A03014ED01FDE0F4FFDC8BE(L_9, /*hidden argument*/List_1_GetEnumerator_mE24C416317D3F4E40A03014ED01FDE0F4FFDC8BE_RuntimeMethod_var);
		V_3 = L_10;
	}

IL_0048:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005b;
		}

IL_004a:
		{
			String_t* L_11 = Enumerator_get_Current_m42A600F939D181CE139B9C26F825FD4BC28F6F1B((Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D *)(&V_3), /*hidden argument*/Enumerator_get_Current_m42A600F939D181CE139B9C26F825FD4BC28F6F1B_RuntimeMethod_var);
			V_4 = L_11;
			intptr_t L_12 = V_0;
			String_t* L_13 = V_4;
			Externs_GADUAddTestDevice_m76BAC633F8636E5D4F8BF2A1D6A9383B7BCC3866((intptr_t)L_12, L_13, /*hidden argument*/NULL);
		}

IL_005b:
		{
			bool L_14 = Enumerator_MoveNext_mB55179B6FAFF356F8635980C5BE36716D5A3CF7F((Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mB55179B6FAFF356F8635980C5BE36716D5A3CF7F_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_004a;
			}
		}

IL_0064:
		{
			IL2CPP_LEAVE(0x74, FINALLY_0066);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0066;
	}

FINALLY_0066:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mBFE61DBAEB92C4FB64F6B1ACF2E895D0467CE1E4((Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D *)(&V_3), /*hidden argument*/Enumerator_Dispose_mBFE61DBAEB92C4FB64F6B1ACF2E895D0467CE1E4_RuntimeMethod_var);
		IL2CPP_RESET_LEAVE(0x74);
		IL2CPP_END_FINALLY(102)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(102)
	{
		IL2CPP_JUMP_TBL(0x74, IL_0074)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0074:
	{
		AdRequest_t98763832B122F67AC2952360B6381F4F5848306F * L_15 = ___request0;
		NullCheck(L_15);
		Nullable_1_t9B468FE267D697A84B680BFB00D8C20BAB1A26E7  L_16 = AdRequest_get_Birthday_mF6551ECBB0E8EB04D73536381A5685D0FF55715A(L_15, /*hidden argument*/NULL);
		V_5 = L_16;
		bool L_17 = Nullable_1_get_HasValue_mB231DEE33107C7E966680F0404FFDD7939B24625((Nullable_1_t9B468FE267D697A84B680BFB00D8C20BAB1A26E7 *)(&V_5), /*hidden argument*/Nullable_1_get_HasValue_mB231DEE33107C7E966680F0404FFDD7939B24625_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_00b1;
		}
	}
	{
		AdRequest_t98763832B122F67AC2952360B6381F4F5848306F * L_18 = ___request0;
		NullCheck(L_18);
		Nullable_1_t9B468FE267D697A84B680BFB00D8C20BAB1A26E7  L_19 = AdRequest_get_Birthday_mF6551ECBB0E8EB04D73536381A5685D0FF55715A(L_18, /*hidden argument*/NULL);
		V_5 = L_19;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_20 = Nullable_1_GetValueOrDefault_mA2BC7FE28E1E54F6DED8F2DA5ACA72A56083E43D((Nullable_1_t9B468FE267D697A84B680BFB00D8C20BAB1A26E7 *)(&V_5), /*hidden argument*/Nullable_1_GetValueOrDefault_mA2BC7FE28E1E54F6DED8F2DA5ACA72A56083E43D_RuntimeMethod_var);
		V_6 = L_20;
		intptr_t L_21 = V_0;
		int32_t L_22 = DateTime_get_Year_m019BED6042282D03E51CE82F590D2A9FE5EA859E((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_6), /*hidden argument*/NULL);
		int32_t L_23 = DateTime_get_Month_m9E31D84567E6D221F0E686EC6894A7AD07A5E43C((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_6), /*hidden argument*/NULL);
		int32_t L_24 = DateTime_get_Day_m3C888FF1DA5019583A4326FAB232F81D32B1478D((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_6), /*hidden argument*/NULL);
		Externs_GADUSetBirthday_mF7965515078BEAD86EBCC07FFA7004755A1F4D4F((intptr_t)L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		AdRequest_t98763832B122F67AC2952360B6381F4F5848306F * L_25 = ___request0;
		NullCheck(L_25);
		Nullable_1_t65AAF2600D9569366D224E2EB7B3F65128A96D1B  L_26 = AdRequest_get_Gender_m40E1D2BE6A214044F95918E202D11E5551118889(L_25, /*hidden argument*/NULL);
		V_7 = L_26;
		bool L_27 = Nullable_1_get_HasValue_mE966D0285B7519BF51C1B117A064B4F40858077A((Nullable_1_t65AAF2600D9569366D224E2EB7B3F65128A96D1B *)(&V_7), /*hidden argument*/Nullable_1_get_HasValue_mE966D0285B7519BF51C1B117A064B4F40858077A_RuntimeMethod_var);
		if (!L_27)
		{
			goto IL_00d7;
		}
	}
	{
		intptr_t L_28 = V_0;
		AdRequest_t98763832B122F67AC2952360B6381F4F5848306F * L_29 = ___request0;
		NullCheck(L_29);
		Nullable_1_t65AAF2600D9569366D224E2EB7B3F65128A96D1B  L_30 = AdRequest_get_Gender_m40E1D2BE6A214044F95918E202D11E5551118889(L_29, /*hidden argument*/NULL);
		V_7 = L_30;
		int32_t L_31 = Nullable_1_GetValueOrDefault_m9EDDA3FC2B886F793AC331A3E3617416D931833E((Nullable_1_t65AAF2600D9569366D224E2EB7B3F65128A96D1B *)(&V_7), /*hidden argument*/Nullable_1_GetValueOrDefault_m9EDDA3FC2B886F793AC331A3E3617416D931833E_RuntimeMethod_var);
		Externs_GADUSetGender_m6DA6BDFDB359466F6E2FBBC7FCF77693DA9241C2((intptr_t)L_28, L_31, /*hidden argument*/NULL);
	}

IL_00d7:
	{
		AdRequest_t98763832B122F67AC2952360B6381F4F5848306F * L_32 = ___request0;
		NullCheck(L_32);
		Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  L_33 = AdRequest_get_TagForChildDirectedTreatment_mAF138AD39FC86FA60D310B685A6F3F1CDE91ABAA(L_32, /*hidden argument*/NULL);
		V_8 = L_33;
		bool L_34 = Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B((Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *)(&V_8), /*hidden argument*/Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_RuntimeMethod_var);
		if (!L_34)
		{
			goto IL_00fd;
		}
	}
	{
		intptr_t L_35 = V_0;
		AdRequest_t98763832B122F67AC2952360B6381F4F5848306F * L_36 = ___request0;
		NullCheck(L_36);
		Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  L_37 = AdRequest_get_TagForChildDirectedTreatment_mAF138AD39FC86FA60D310B685A6F3F1CDE91ABAA(L_36, /*hidden argument*/NULL);
		V_8 = L_37;
		bool L_38 = Nullable_1_GetValueOrDefault_mD65884636E94AF88C2745255BBE130A1B64BA294((Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *)(&V_8), /*hidden argument*/Nullable_1_GetValueOrDefault_mD65884636E94AF88C2745255BBE130A1B64BA294_RuntimeMethod_var);
		Externs_GADUTagForChildDirectedTreatment_m79D9D3D2E5D37AD810F239728B87D2264F994AF3((intptr_t)L_35, L_38, /*hidden argument*/NULL);
	}

IL_00fd:
	{
		AdRequest_t98763832B122F67AC2952360B6381F4F5848306F * L_39 = ___request0;
		NullCheck(L_39);
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_40 = AdRequest_get_Extras_m814DAAAC04DFD17FC1DD6446718BEF964934B83B(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3  L_41 = Dictionary_2_GetEnumerator_m3378B4792B81EF81397CB9D9A761BD7149BD27F5(L_40, /*hidden argument*/Dictionary_2_GetEnumerator_m3378B4792B81EF81397CB9D9A761BD7149BD27F5_RuntimeMethod_var);
		V_9 = L_41;
	}

IL_010a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0129;
		}

IL_010c:
		{
			KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  L_42 = Enumerator_get_Current_mBEC9B470213860581893E0F197CAAE657B8B6C69((Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 *)(&V_9), /*hidden argument*/Enumerator_get_Current_mBEC9B470213860581893E0F197CAAE657B8B6C69_RuntimeMethod_var);
			V_10 = L_42;
			intptr_t L_43 = V_0;
			String_t* L_44 = KeyValuePair_2_get_Key_m434E29A1251E81B5A2124466105823011C462BF2((KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *)(&V_10), /*hidden argument*/KeyValuePair_2_get_Key_m434E29A1251E81B5A2124466105823011C462BF2_RuntimeMethod_var);
			String_t* L_45 = KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2((KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *)(&V_10), /*hidden argument*/KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_RuntimeMethod_var);
			Externs_GADUSetExtra_m220E34583749470A8335664E94766D25674D1726((intptr_t)L_43, L_44, L_45, /*hidden argument*/NULL);
		}

IL_0129:
		{
			bool L_46 = Enumerator_MoveNext_m6E6A22A8620F5A5582BB67E367BE5086D7D895A6((Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 *)(&V_9), /*hidden argument*/Enumerator_MoveNext_m6E6A22A8620F5A5582BB67E367BE5086D7D895A6_RuntimeMethod_var);
			if (L_46)
			{
				goto IL_010c;
			}
		}

IL_0132:
		{
			IL2CPP_LEAVE(0x142, FINALLY_0134);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0134;
	}

FINALLY_0134:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m16C0E963A012498CD27422B463DB327BA4C7A321((Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 *)(&V_9), /*hidden argument*/Enumerator_Dispose_m16C0E963A012498CD27422B463DB327BA4C7A321_RuntimeMethod_var);
		IL2CPP_RESET_LEAVE(0x142);
		IL2CPP_END_FINALLY(308)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(308)
	{
		IL2CPP_JUMP_TBL(0x142, IL_0142)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0142:
	{
		intptr_t L_47 = V_0;
		Externs_GADUSetExtra_m220E34583749470A8335664E94766D25674D1726((intptr_t)L_47, _stringLiteral54C66CE3FC562A5C0CED9F04DB7AE0F27825865D, _stringLiteral356A192B7913B04C54574D18C28D46E6395428AB, /*hidden argument*/NULL);
		AdRequest_t98763832B122F67AC2952360B6381F4F5848306F * L_48 = ___request0;
		NullCheck(L_48);
		List_1_t8F38EE057190BE9897CDE829F7EB4282DF6F3EBA * L_49 = AdRequest_get_MediationExtras_mEEC772BDDD5CA17C993C45BD09F342E0CCFB1842(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		Enumerator_t1B7A508A639F9A6260571CC57EAB3F3C4B96A49C  L_50 = List_1_GetEnumerator_m739CC8C648FEC19900D51E4F3BCE6B15D3C6325A(L_49, /*hidden argument*/List_1_GetEnumerator_m739CC8C648FEC19900D51E4F3BCE6B15D3C6325A_RuntimeMethod_var);
		V_11 = L_50;
	}

IL_015f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01d5;
		}

IL_0161:
		{
			MediationExtras_t53F0F7F90139A2D039272C9764DC880D4B3AB301 * L_51 = Enumerator_get_Current_mB8FC184CAAB4A8E56B08699B9C9894803A9EA58A((Enumerator_t1B7A508A639F9A6260571CC57EAB3F3C4B96A49C *)(&V_11), /*hidden argument*/Enumerator_get_Current_mB8FC184CAAB4A8E56B08699B9C9894803A9EA58A_RuntimeMethod_var);
			V_12 = L_51;
			intptr_t L_52 = Externs_GADUCreateMutableDictionary_m71EE6107C3600A67D5A7C4D73C018CBAE659C23C(/*hidden argument*/NULL);
			V_13 = (intptr_t)L_52;
			intptr_t L_53 = V_13;
			bool L_54 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_53, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_54)
			{
				goto IL_01d5;
			}
		}

IL_017f:
		{
			MediationExtras_t53F0F7F90139A2D039272C9764DC880D4B3AB301 * L_55 = V_12;
			NullCheck(L_55);
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_56 = MediationExtras_get_Extras_m845B48080AE808551366F9B6E363E0429EAE7869(L_55, /*hidden argument*/NULL);
			NullCheck(L_56);
			Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3  L_57 = Dictionary_2_GetEnumerator_m3378B4792B81EF81397CB9D9A761BD7149BD27F5(L_56, /*hidden argument*/Dictionary_2_GetEnumerator_m3378B4792B81EF81397CB9D9A761BD7149BD27F5_RuntimeMethod_var);
			V_9 = L_57;
		}

IL_018d:
		try
		{ // begin try (depth: 2)
			{
				goto IL_01ad;
			}

IL_018f:
			{
				KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  L_58 = Enumerator_get_Current_mBEC9B470213860581893E0F197CAAE657B8B6C69((Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 *)(&V_9), /*hidden argument*/Enumerator_get_Current_mBEC9B470213860581893E0F197CAAE657B8B6C69_RuntimeMethod_var);
				V_14 = L_58;
				intptr_t L_59 = V_13;
				String_t* L_60 = KeyValuePair_2_get_Key_m434E29A1251E81B5A2124466105823011C462BF2((KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *)(&V_14), /*hidden argument*/KeyValuePair_2_get_Key_m434E29A1251E81B5A2124466105823011C462BF2_RuntimeMethod_var);
				String_t* L_61 = KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2((KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *)(&V_14), /*hidden argument*/KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_RuntimeMethod_var);
				Externs_GADUMutableDictionarySetValue_m1806F4834F6CCA36CD93928D50F81B097D90F60D((intptr_t)L_59, L_60, L_61, /*hidden argument*/NULL);
			}

IL_01ad:
			{
				bool L_62 = Enumerator_MoveNext_m6E6A22A8620F5A5582BB67E367BE5086D7D895A6((Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 *)(&V_9), /*hidden argument*/Enumerator_MoveNext_m6E6A22A8620F5A5582BB67E367BE5086D7D895A6_RuntimeMethod_var);
				if (L_62)
				{
					goto IL_018f;
				}
			}

IL_01b6:
			{
				IL2CPP_LEAVE(0x1C6, FINALLY_01b8);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01b8;
		}

FINALLY_01b8:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m16C0E963A012498CD27422B463DB327BA4C7A321((Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 *)(&V_9), /*hidden argument*/Enumerator_Dispose_m16C0E963A012498CD27422B463DB327BA4C7A321_RuntimeMethod_var);
			IL2CPP_RESET_LEAVE(0x1C6);
			IL2CPP_END_FINALLY(440)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(440)
		{
			IL2CPP_JUMP_TBL(0x1C6, IL_01c6)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_01c6:
		{
			intptr_t L_63 = V_0;
			intptr_t L_64 = V_13;
			MediationExtras_t53F0F7F90139A2D039272C9764DC880D4B3AB301 * L_65 = V_12;
			NullCheck(L_65);
			String_t* L_66 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String GoogleMobileAds.Api.Mediation.MediationExtras::get_IOSMediationExtraBuilderClassName() */, L_65);
			Externs_GADUSetMediationExtras_m89618AB332B3A9FE4FB423511B821186B35F1D2E((intptr_t)L_63, (intptr_t)L_64, L_66, /*hidden argument*/NULL);
		}

IL_01d5:
		{
			bool L_67 = Enumerator_MoveNext_mF9F196771804D9FAE1887C1EE679DB80CF90182D((Enumerator_t1B7A508A639F9A6260571CC57EAB3F3C4B96A49C *)(&V_11), /*hidden argument*/Enumerator_MoveNext_mF9F196771804D9FAE1887C1EE679DB80CF90182D_RuntimeMethod_var);
			if (L_67)
			{
				goto IL_0161;
			}
		}

IL_01de:
		{
			IL2CPP_LEAVE(0x1EE, FINALLY_01e0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01e0;
	}

FINALLY_01e0:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB4D942857769BA4A52C25194705752C32D86DCED((Enumerator_t1B7A508A639F9A6260571CC57EAB3F3C4B96A49C *)(&V_11), /*hidden argument*/Enumerator_Dispose_mB4D942857769BA4A52C25194705752C32D86DCED_RuntimeMethod_var);
		IL2CPP_RESET_LEAVE(0x1EE);
		IL2CPP_END_FINALLY(480)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(480)
	{
		IL2CPP_JUMP_TBL(0x1EE, IL_01ee)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01ee:
	{
		intptr_t L_68 = V_0;
		Externs_GADUSetRequestAgent_m27CF00F87EA0EBA6A9C3C8709E5FAD8810198647((intptr_t)L_68, _stringLiteral482DBBAC8498C7AC42E17295F275719E62121402, /*hidden argument*/NULL);
		intptr_t L_69 = V_0;
		return (intptr_t)L_69;
	}
}
// System.String GoogleMobileAds.iOS.Utils::PtrToString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_PtrToString_m0284D6A58DAAED94BA52E4781AAC7D55645B4B67 (intptr_t ___stringPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_PtrToString_m0284D6A58DAAED94BA52E4781AAC7D55645B4B67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___stringPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		String_t* L_1 = Marshal_PtrToStringAnsi_mA5D5D1AA7C0EB6A96F92454A8AF9C266E2DF5DA5((intptr_t)L_0, /*hidden argument*/NULL);
		intptr_t L_2 = ___stringPtr0;
		Marshal_FreeHGlobal_mF098DF00F5341FDE4747A6F2004D5A0C9B03ED85((intptr_t)L_2, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void GoogleMobileAds.iOS.Utils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils__ctor_mFAEDAC0248C372B9CD40E50183B3662EB5B4A7AC (Utils_t556E7CC3B1D0D46BFFE21762D6F9E776521277D4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void IncentiveController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncentiveController_Start_mF05379CE6F4AFC0424D58E6D633D4821BA5AB6B8 (IncentiveController_t808EB287A43214CBB4B6D0BCF401B1973A86CC5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IncentiveController_Start_mF05379CE6F4AFC0424D58E6D633D4821BA5AB6B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_FindGameObjectWithTag_m9F2877F52346B973DE3023209D73852E96ECC10D(_stringLiteralA3F80B87A456136FC59C442BD1EE5B5EEC2430F1, /*hidden argument*/NULL);
		__this->set_canvas_6(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_signPrefab_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_1, L_2, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		__this->set_sign_5(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_sign_5();
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_5, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_canvas_6();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35(L_6, L_8, (bool)0, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(4 /* System.Void IncentiveController::CreateIncentive() */, __this);
		return;
	}
}
// System.Void IncentiveController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncentiveController_Update_mFF3B182A24D9041EC692D23A5852A6647ABDBEDC (IncentiveController_t808EB287A43214CBB4B6D0BCF401B1973A86CC5C * __this, const RuntimeMethod* method)
{
	{
		IncentiveController_TraceSign_m1FF986ED2378C38DFE808BB4BFF44DB0BD729A0E(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IncentiveController::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncentiveController_OnDestroy_m54EEB7652687AFE7B8CAE785C584270F642F2CF1 (IncentiveController_t808EB287A43214CBB4B6D0BCF401B1973A86CC5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IncentiveController_OnDestroy_m54EEB7652687AFE7B8CAE785C584270F642F2CF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_sign_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IncentiveController::TraceSign()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncentiveController_TraceSign_m1FF986ED2378C38DFE808BB4BFF44DB0BD729A0E (IncentiveController_t808EB287A43214CBB4B6D0BCF401B1973A86CC5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IncentiveController_TraceSign_m1FF986ED2378C38DFE808BB4BFF44DB0BD729A0E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * V_2 = NULL;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B5_0 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * G_B7_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * G_B8_1 = NULL;
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Camera_WorldToViewportPoint_mC939A83CE134EA2CE666C2DF5AD8FA4CB48AE3C1(L_0, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = V_0;
		float L_7 = L_6.get_x_0();
		if ((!(((float)L_7) > ((float)(0.0f)))))
		{
			goto IL_0056;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = V_0;
		float L_9 = L_8.get_x_0();
		if ((!(((float)L_9) < ((float)(1.0f)))))
		{
			goto IL_0056;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = V_0;
		float L_11 = L_10.get_y_1();
		if ((!(((float)L_11) > ((float)(0.0f)))))
		{
			goto IL_0056;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = V_0;
		float L_13 = L_12.get_y_1();
		G_B5_0 = ((((float)L_13) < ((float)(1.0f)))? 1 : 0);
		goto IL_0057;
	}

IL_0056:
	{
		G_B5_0 = 0;
	}

IL_0057:
	{
		V_1 = (bool)G_B5_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = __this->get_sign_5();
		bool L_15 = V_1;
		G_B6_0 = L_14;
		if (L_15)
		{
			G_B7_0 = L_14;
			goto IL_0069;
		}
	}
	{
		bool L_16 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean IncentiveController::ShouldShowSign() */, __this);
		G_B8_0 = ((int32_t)(L_16));
		G_B8_1 = G_B6_0;
		goto IL_006a;
	}

IL_0069:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_006a:
	{
		NullCheck(G_B8_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(G_B8_1, (bool)G_B8_0, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = __this->get_sign_5();
		NullCheck(L_17);
		bool L_18 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00f3;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = __this->get_sign_5();
		NullCheck(L_19);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_20 = GameObject_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m43C07809909DE265C356A2CD8E8B290E74E2EFC7(L_19, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m43C07809909DE265C356A2CD8E8B290E74E2EFC7_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = __this->get_canvas_6();
		NullCheck(L_21);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_22 = GameObject_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m43C07809909DE265C356A2CD8E8B290E74E2EFC7(L_21, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m43C07809909DE265C356A2CD8E8B290E74E2EFC7_RuntimeMethod_var);
		V_2 = L_22;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = V_0;
		float L_24 = L_23.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_25 = Mathf_Min_mCF9BE0E9CAC9F18D207692BB2DAC7F3E1D4E1CB7(L_24, (0.93f), /*hidden argument*/NULL);
		float L_26 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_25, (0.07f), /*hidden argument*/NULL);
		V_3 = L_26;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_27 = V_0;
		float L_28 = L_27.get_y_1();
		float L_29 = Mathf_Min_mCF9BE0E9CAC9F18D207692BB2DAC7F3E1D4E1CB7(L_28, (0.9f), /*hidden argument*/NULL);
		float L_30 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_29, (0.05f), /*hidden argument*/NULL);
		V_4 = L_30;
		float L_31 = V_3;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_32 = V_2;
		NullCheck(L_32);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_33 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_x_0();
		float L_35 = V_4;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_36 = V_2;
		NullCheck(L_36);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_37 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_36, /*hidden argument*/NULL);
		float L_38 = L_37.get_y_1();
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_5), ((float)il2cpp_codegen_multiply((float)L_31, (float)L_34)), ((float)il2cpp_codegen_multiply((float)L_35, (float)L_38)), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_39 = V_5;
		NullCheck(L_20);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_20, L_39, /*hidden argument*/NULL);
	}

IL_00f3:
	{
		return;
	}
}
// System.Void IncentiveController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncentiveController__ctor_mDC52B919DDF5CDBF12CFEEC2D60A27ACC5202CBC (IncentiveController_t808EB287A43214CBB4B6D0BCF401B1973A86CC5C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void IncentiveSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncentiveSpawner_Start_m7C844DBCF4FC316A9A4C02C0246E73EBF034821C (IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IncentiveSpawner_Start_m7C844DBCF4FC316A9A4C02C0246E73EBF034821C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_0 = (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *)il2cpp_codegen_object_new(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650_il2cpp_TypeInfo_var);
		List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6(L_0, /*hidden argument*/List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6_RuntimeMethod_var);
		__this->set_currentIncentives_7(L_0);
		return;
	}
}
// System.Void IncentiveSpawner::SpawnIncentive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncentiveSpawner_SpawnIncentive_mBFA9E65500DFD18ECC05F3FA9C2BCF0C10783655 (IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IncentiveSpawner_SpawnIncentive_mBFA9E65500DFD18ECC05F3FA9C2BCF0C10783655_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_4 = NULL;
	{
		IncentiveSpawner_RemoveCurrentIncentives_mEBD3B83D94FAB1D664D007FAC8C70366B84B771A(__this, /*hidden argument*/NULL);
		float L_0 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((0.0f), (6.28318548f), /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = sinf(L_1);
		float L_3 = V_0;
		float L_4 = cosf(L_3);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_5), L_2, L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_radius_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = __this->get_playerTransform_4();
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_8, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = V_1;
		float L_11 = L_10.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = V_1;
		float L_13 = L_12.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_14), L_11, (0.0f), L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_9, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		(&V_2)->set_y_3((0.0f));
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_16 = __this->get_incentivePrefabs_5();
		NullCheck(L_16);
		int32_t L_17 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, (((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))), /*hidden argument*/NULL);
		V_3 = L_17;
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_18 = __this->get_incentivePrefabs_5();
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_2;
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_23 = __this->get_incentivePrefabs_5();
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_28 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_21, L_22, L_28, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		V_4 = L_29;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_30 = __this->get_currentIncentives_7();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_31 = V_4;
		NullCheck(L_30);
		List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112(L_30, L_31, /*hidden argument*/List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112_RuntimeMethod_var);
		return;
	}
}
// System.Void IncentiveSpawner::RemoveCurrentIncentives()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncentiveSpawner_RemoveCurrentIncentives_mEBD3B83D94FAB1D664D007FAC8C70366B84B771A (IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IncentiveSpawner_RemoveCurrentIncentives_mEBD3B83D94FAB1D664D007FAC8C70366B84B771A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_0 = __this->get_currentIncentives_7();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_0, L_1, /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_2, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0019:
	{
		int32_t L_4 = V_0;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_5 = __this->get_currentIncentives_7();
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_5, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_7 = __this->get_currentIncentives_7();
		NullCheck(L_7);
		List_1_Clear_mCE8DF4076F0FB5A76A7D21A657E69AF3BB683018(L_7, /*hidden argument*/List_1_Clear_mCE8DF4076F0FB5A76A7D21A657E69AF3BB683018_RuntimeMethod_var);
		return;
	}
}
// System.Void IncentiveSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncentiveSpawner__ctor_mC8D075914E4FCE1EC8C688F1A5FC8EC73D91E17A (IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_mD2CEADF3C7AD02BA60F7990F1A39BC67C6D8819B (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_0 = __this->get_address_of_inputVector_6();
		float L_1 = L_0->get_x_0();
		return L_1;
	}
}
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_m2326D40EF66E0A5E2B34F9CF02A53C05CCAFDED0 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_0 = __this->get_address_of_inputVector_6();
		float L_1 = L_0->get_y_1();
		return L_1;
	}
}
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Joystick_get_Direction_mF64961ED5359C8E31E79CAA306019CB66DF50F3E (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = Joystick_get_Horizontal_mD2CEADF3C7AD02BA60F7990F1A39BC67C6D8819B(__this, /*hidden argument*/NULL);
		float L_1 = Joystick_get_Vertical_m2326D40EF66E0A5E2B34F9CF02A53C05CCAFDED0(__this, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m5C8DBE5110822CAF8A7DEDDE6AC240D2C1BDD7C4 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_m408D43BE6A49862DFD49B5198E0B61B85A162703 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_m771F7519F51F02DAADA7DE0A562F82710FA721BC (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Joystick::ClampJoystick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_ClampJoystick_m4407381A239C637BE3515E642EC169EC9F6BC385 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_joystickMode_5();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0024;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_1 = __this->get_address_of_inputVector_6();
		float L_2 = L_1->get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_3), L_2, (0.0f), /*hidden argument*/NULL);
		__this->set_inputVector_6(L_3);
	}

IL_0024:
	{
		int32_t L_4 = __this->get_joystickMode_5();
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0048;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_5 = __this->get_address_of_inputVector_6();
		float L_6 = L_5->get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_7), (0.0f), L_6, /*hidden argument*/NULL);
		__this->set_inputVector_6(L_7);
	}

IL_0048:
	{
		return;
	}
}
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m0CEC3DFCF02C69B8020F600539EB02297E26D1CE (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick__ctor_m0CEC3DFCF02C69B8020F600539EB02297E26D1CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_handleLimit_4((1.0f));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		__this->set_inputVector_6(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void MissileController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileController_Start_m1F5F68112B67E61761C4D2132AEF33CEE442F388 (MissileController_t00541937DA8E984F65B35C796E2A26960D58465E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MissileController_Start_m1F5F68112B67E61761C4D2132AEF33CEE442F388_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_FindGameObjectWithTag_m9F2877F52346B973DE3023209D73852E96ECC10D(_stringLiteralA3F80B87A456136FC59C442BD1EE5B5EEC2430F1, /*hidden argument*/NULL);
		__this->set_canvas_13(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = GameObject_FindGameObjectWithTag_m9F2877F52346B973DE3023209D73852E96ECC10D(_stringLiteralBA5D8C466BB20F75587D894E0540D80CFA945225, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * L_2 = GameObject_GetComponent_TisGameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_m64E547BB2F34853E78EB9487F66094E4FAF5CB0B(L_1, /*hidden argument*/GameObject_GetComponent_TisGameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_m64E547BB2F34853E78EB9487F66094E4FAF5CB0B_RuntimeMethod_var);
		__this->set_gameController_14(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_signPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_3, L_4, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		__this->set_sign_12(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_sign_12();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_7, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_canvas_13();
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35(L_8, L_10, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MissileController::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileController_Destroy_m2B1F06C4D8FE6B21882B3C53CD1D462BF3D4BA8F (MissileController_t00541937DA8E984F65B35C796E2A26960D58465E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MissileController_Destroy_m2B1F06C4D8FE6B21882B3C53CD1D462BF3D4BA8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B3_0 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B2_0 = NULL;
	{
		V_0 = 0;
		goto IL_0042;
	}

IL_0004:
	{
		V_1 = (0.0f);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_1, L_2, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = L_3;
		NullCheck(L_4);
		String_t* L_5 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_4, /*hidden argument*/NULL);
		bool L_6 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_5, _stringLiteralBA1DD0B660CC874C44EF9074A1D2B137291A9351, /*hidden argument*/NULL);
		G_B2_0 = L_4;
		if (!L_6)
		{
			G_B3_0 = L_4;
			goto IL_0033;
		}
	}
	{
		V_1 = (3.0f);
		G_B3_0 = G_B2_0;
	}

IL_0033:
	{
		NullCheck(G_B3_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(G_B3_0, /*hidden argument*/NULL);
		float L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m09F51D8BDECFD2E8C618498EF7377029B669030D(L_7, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0042:
	{
		int32_t L_10 = V_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13 = Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23(L_15, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_16, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = __this->get_sign_12();
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_17, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = __this->get_explosionPrefab_7();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_18, L_20, L_21, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		return;
	}
}
// System.Void MissileController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileController_FixedUpdate_m9A94C24BD1745496E1352E7B2D517CCCD91D3B31 (MissileController_t00541937DA8E984F65B35C796E2A26960D58465E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MissileController_FixedUpdate_m9A94C24BD1745496E1352E7B2D517CCCD91D3B31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MissileController_Rotate_mAA68317C362F23ED1DD2750305099A2DAFF1E915(__this, /*hidden argument*/NULL);
		MissileController_MagnetMissiles_mD2AD58DEEF11C9B86E2B930326359469A3068437(__this, /*hidden argument*/NULL);
		MissileController_TraceSign_mBB1E7D70CE1923F076682CB4FC2F4E477BEF237D(__this, /*hidden argument*/NULL);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_0 = __this->get_rb_15();
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_1 = __this->get_rb_15();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_speed_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380(L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MissileController::TraceSign()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileController_TraceSign_mBB1E7D70CE1923F076682CB4FC2F4E477BEF237D (MissileController_t00541937DA8E984F65B35C796E2A26960D58465E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MissileController_TraceSign_mBB1E7D70CE1923F076682CB4FC2F4E477BEF237D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * V_2 = NULL;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B5_0 = 0;
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Camera_WorldToViewportPoint_mC939A83CE134EA2CE666C2DF5AD8FA4CB48AE3C1(L_0, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = V_0;
		float L_7 = L_6.get_x_0();
		if ((!(((float)L_7) > ((float)(0.0f)))))
		{
			goto IL_0056;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = V_0;
		float L_9 = L_8.get_x_0();
		if ((!(((float)L_9) < ((float)(1.0f)))))
		{
			goto IL_0056;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = V_0;
		float L_11 = L_10.get_y_1();
		if ((!(((float)L_11) > ((float)(0.0f)))))
		{
			goto IL_0056;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = V_0;
		float L_13 = L_12.get_y_1();
		G_B5_0 = ((((float)L_13) < ((float)(1.0f)))? 1 : 0);
		goto IL_0057;
	}

IL_0056:
	{
		G_B5_0 = 0;
	}

IL_0057:
	{
		V_1 = (bool)G_B5_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = __this->get_sign_12();
		bool L_15 = V_1;
		NullCheck(L_14);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_14, (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = __this->get_sign_12();
		NullCheck(L_16);
		bool L_17 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00eb;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = __this->get_sign_12();
		NullCheck(L_18);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_19 = GameObject_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m43C07809909DE265C356A2CD8E8B290E74E2EFC7(L_18, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m43C07809909DE265C356A2CD8E8B290E74E2EFC7_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = __this->get_canvas_13();
		NullCheck(L_20);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_21 = GameObject_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m43C07809909DE265C356A2CD8E8B290E74E2EFC7(L_20, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m43C07809909DE265C356A2CD8E8B290E74E2EFC7_RuntimeMethod_var);
		V_2 = L_21;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = V_0;
		float L_23 = L_22.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_24 = Mathf_Min_mCF9BE0E9CAC9F18D207692BB2DAC7F3E1D4E1CB7(L_23, (0.93f), /*hidden argument*/NULL);
		float L_25 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_24, (0.07f), /*hidden argument*/NULL);
		V_3 = L_25;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_26 = V_0;
		float L_27 = L_26.get_y_1();
		float L_28 = Mathf_Min_mCF9BE0E9CAC9F18D207692BB2DAC7F3E1D4E1CB7(L_27, (0.9f), /*hidden argument*/NULL);
		float L_29 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_28, (0.05f), /*hidden argument*/NULL);
		V_4 = L_29;
		float L_30 = V_3;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_31 = V_2;
		NullCheck(L_31);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_32 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_31, /*hidden argument*/NULL);
		float L_33 = L_32.get_x_0();
		float L_34 = V_4;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_35 = V_2;
		NullCheck(L_35);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_36 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_35, /*hidden argument*/NULL);
		float L_37 = L_36.get_y_1();
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_5), ((float)il2cpp_codegen_multiply((float)L_30, (float)L_33)), ((float)il2cpp_codegen_multiply((float)L_34, (float)L_37)), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_38 = V_5;
		NullCheck(L_19);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_19, L_38, /*hidden argument*/NULL);
	}

IL_00eb:
	{
		return;
	}
}
// System.Void MissileController::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileController_Rotate_mAA68317C362F23ED1DD2750305099A2DAFF1E915 (MissileController_t00541937DA8E984F65B35C796E2A26960D58465E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MissileController_Rotate_mAA68317C362F23ED1DD2750305099A2DAFF1E915_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float G_B2_0 = 0.0f;
	float G_B2_1 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B1_1 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	float G_B3_2 = 0.0f;
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_0 = Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var);
		__this->set_rb_15(L_0);
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_1 = __this->get_playerController_4();
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = L_1->get_MissileTarget_4();
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_3 = __this->get_rb_15();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_2, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_4), /*hidden argument*/NULL);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_10 = __this->get_rb_15();
		NullCheck(L_10);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Rigidbody_get_rotation_mD967DD98F16F80C0D74F8F1C25953D0609906BE5(L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_4), /*hidden argument*/NULL);
		V_0 = L_12;
		float L_13 = L_9.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_0;
		float L_15 = L_14.get_y_3();
		V_1 = ((float)il2cpp_codegen_subtract((float)(fmodf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_13, (float)L_15)), (float)(180.0f))), (360.0f))), (float)(180.0f)));
		float L_16 = __this->get_degreesRotatePerFrame_8();
		float L_17 = __this->get_degreesRotatePerFrame_8();
		float L_18 = V_1;
		G_B1_0 = L_17;
		G_B1_1 = ((-L_16));
		if ((((float)L_18) < ((float)(-180.0f))))
		{
			G_B2_0 = L_17;
			G_B2_1 = ((-L_16));
			goto IL_008e;
		}
	}
	{
		float L_19 = V_1;
		G_B3_0 = L_19;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0095;
	}

IL_008e:
	{
		float L_20 = V_1;
		G_B3_0 = ((float)il2cpp_codegen_add((float)L_20, (float)(360.0f)));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0095:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_21 = Mathf_Min_mCF9BE0E9CAC9F18D207692BB2DAC7F3E1D4E1CB7(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		float L_22 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(G_B3_2, L_21, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = V_0;
		float L_24 = L_23.get_y_3();
		V_2 = ((float)il2cpp_codegen_add((float)L_22, (float)L_24));
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_25 = __this->get_rb_15();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = V_0;
		float L_27 = L_26.get_x_2();
		float L_28 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_0;
		float L_30 = L_29.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_31 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05(L_27, L_28, L_30, /*hidden argument*/NULL);
		NullCheck(L_25);
		Rigidbody_MoveRotation_mCBE2CF9F1B4A86C4BCB899AAB4C4EE8BBAD21C84(L_25, L_31, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MissileController::MagnetMissiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileController_MagnetMissiles_mD2AD58DEEF11C9B86E2B930326359469A3068437 (MissileController_t00541937DA8E984F65B35C796E2A26960D58465E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MissileController_MagnetMissiles_mD2AD58DEEF11C9B86E2B930326359469A3068437_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* V_0 = NULL;
	int32_t V_1 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = __this->get_magnetRadius_11();
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_3 = Physics_OverlapSphere_m354A92672F7A6DE59EF1285D02D62247F46A5D84(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_00ab;
	}

IL_001e:
	{
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		String_t* L_8 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_7, /*hidden argument*/NULL);
		bool L_9 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_8, _stringLiteralD1E0451303B39E580BF0A8C185CBC4EDD8C5B177, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00a7;
		}
	}
	{
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_13, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00a7;
		}
	}
	{
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_17 = V_0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_22, /*hidden argument*/NULL);
		V_2 = L_23;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_24, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_25, L_26, /*hidden argument*/NULL);
		V_5 = L_27;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_5), /*hidden argument*/NULL);
		V_3 = L_28;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = V_3;
		float L_31 = __this->get_magnetSpeed_10();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_30, L_31, /*hidden argument*/NULL);
		float L_33 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_32, L_33, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_29, L_34, /*hidden argument*/NULL);
		V_4 = L_35;
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_36 = V_0;
		int32_t L_37 = V_1;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_39);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_40 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_41 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_40, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = V_4;
		NullCheck(L_41);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_41, L_42, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		int32_t L_43 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_00ab:
	{
		int32_t L_44 = V_1;
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_45 = V_0;
		NullCheck(L_45);
		if ((((int32_t)L_44) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}
}
// System.Void MissileController::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileController_OnTriggerEnter_mE0E6A100574855CFBD1058774726F5DA62A50E8A (MissileController_t00541937DA8E984F65B35C796E2A26960D58465E * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MissileController_OnTriggerEnter_mE0E6A100574855CFBD1058774726F5DA62A50E8A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_1, /*hidden argument*/NULL);
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, _stringLiteralD1E0451303B39E580BF0A8C185CBC4EDD8C5B177, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		MissileController_Destroy_m2B1F06C4D8FE6B21882B3C53CD1D462BF3D4BA8F(__this, /*hidden argument*/NULL);
		MissileController_SpawnCoin_m95389B52202021761B63D8CF7566091FBE855FAF(__this, /*hidden argument*/NULL);
		GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * L_4 = __this->get_gameController_14();
		NullCheck(L_4);
		GameController_HandleMissileCollapse_mB62ECACB045C08320D95D4C4FF7929518F3FFE91(L_4, /*hidden argument*/NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void MissileController::SpawnCoin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileController_SpawnCoin_m95389B52202021761B63D8CF7566091FBE855FAF (MissileController_t00541937DA8E984F65B35C796E2A26960D58465E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MissileController_SpawnCoin_m95389B52202021761B63D8CF7566091FBE855FAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((0.0f), (1.0f), /*hidden argument*/NULL);
		if ((!(((float)L_0) < ((float)(0.2f)))))
		{
			goto IL_003d;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_coinPrefab_6();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_coinPrefab_6();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_1, L_3, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
	}

IL_003d:
	{
		return;
	}
}
// System.Void MissileController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileController__ctor_m0E5B670257FCBE3C88FB8D1F3379E7A9FC387870 (MissileController_t00541937DA8E984F65B35C796E2A26960D58465E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void MissileSpawner::SpawnMissiles(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileSpawner_SpawnMissiles_mA42EF6628C0178238CBD951DAFF49ACAB148E824 (MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF * __this, int32_t ___num0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MissileSpawner_SpawnMissiles_mA42EF6628C0178238CBD951DAFF49ACAB148E824_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___num0;
		__this->set_missilesToSpawn_7(L_0);
		MonoBehaviour_StartCoroutine_m590A0A7F161D579C18E678B4C5ACCE77B1B318DD(__this, _stringLiteralB33A0C1D823C639909D93A4C283DD29937CA70B2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MissileSpawner::StopSpawning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileSpawner_StopSpawning_m2F77018ACE9237D2AA960C6069F5125A323E0119 (MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MissileSpawner_StopSpawning_m2F77018ACE9237D2AA960C6069F5125A323E0119_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_StopCoroutine_mC2C29B39556BFC68657F27343602BCC57AA6604F(__this, _stringLiteralB33A0C1D823C639909D93A4C283DD29937CA70B2, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator MissileSpawner::Spawning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MissileSpawner_Spawning_mB1C5BACE8461A72114E9E58E73633E0F031917CE (MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MissileSpawner_Spawning_mB1C5BACE8461A72114E9E58E73633E0F031917CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawningU3Ed__6_t5AEC324527E86BE881896DEC924A820D204E884B * L_0 = (U3CSpawningU3Ed__6_t5AEC324527E86BE881896DEC924A820D204E884B *)il2cpp_codegen_object_new(U3CSpawningU3Ed__6_t5AEC324527E86BE881896DEC924A820D204E884B_il2cpp_TypeInfo_var);
		U3CSpawningU3Ed__6__ctor_m39C581D29F321B065206557E2414B88E0074F6E0(L_0, 0, /*hidden argument*/NULL);
		U3CSpawningU3Ed__6_t5AEC324527E86BE881896DEC924A820D204E884B * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void MissileSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileSpawner__ctor_mD5B2585E88BD740ECBCCA7ED0367CF528F538BF0 (MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void MissileSpawner_<Spawning>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawningU3Ed__6__ctor_m39C581D29F321B065206557E2414B88E0074F6E0 (U3CSpawningU3Ed__6_t5AEC324527E86BE881896DEC924A820D204E884B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MissileSpawner_<Spawning>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawningU3Ed__6_System_IDisposable_Dispose_mC408386CFA4776EE5FB5851533727E7081CF8DED (U3CSpawningU3Ed__6_t5AEC324527E86BE881896DEC924A820D204E884B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MissileSpawner_<Spawning>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawningU3Ed__6_MoveNext_m511595EF92A35C8B7BC5B35CBE8F53F26CCD942C (U3CSpawningU3Ed__6_t5AEC324527E86BE881896DEC924A820D204E884B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSpawningU3Ed__6_MoveNext_m511595EF92A35C8B7BC5B35CBE8F53F26CCD942C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF * V_1 = NULL;
	float V_2 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0100;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0021:
	{
		MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF * L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_missilesToSpawn_7();
		if (!L_5)
		{
			goto IL_00dd;
		}
	}
	{
		float L_6 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((0.0f), (6.28318548f), /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_8 = sinf(L_7);
		float L_9 = V_2;
		float L_10 = cosf(L_9);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_11), L_8, L_10, /*hidden argument*/NULL);
		MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF * L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->get_radius_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_11, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF * L_15 = V_1;
		NullCheck(L_15);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = L_15->get_playerTransform_5();
		NullCheck(L_16);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_16, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = V_3;
		float L_19 = L_18.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = V_3;
		float L_21 = L_20.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_22), L_19, (0.0f), L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_17, L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		(&V_4)->set_y_3((0.0f));
		MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF * L_24 = V_1;
		NullCheck(L_24);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = L_24->get_playerTransform_5();
		NullCheck(L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_26, L_27, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_28, L_29, /*hidden argument*/NULL);
		V_5 = L_30;
		MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF * L_31 = V_1;
		NullCheck(L_31);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_32 = L_31->get_missilePrefab_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = V_4;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_34 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_35 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_32, L_33, L_34, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		NullCheck(L_35);
		MissileController_t00541937DA8E984F65B35C796E2A26960D58465E * L_36 = GameObject_GetComponent_TisMissileController_t00541937DA8E984F65B35C796E2A26960D58465E_m873071DFF79DDC7F994B6D1735D0749E10BCBE8C(L_35, /*hidden argument*/GameObject_GetComponent_TisMissileController_t00541937DA8E984F65B35C796E2A26960D58465E_m873071DFF79DDC7F994B6D1735D0749E10BCBE8C_RuntimeMethod_var);
		MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF * L_37 = V_1;
		NullCheck(L_37);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = L_37->get_playerTransform_5();
		NullCheck(L_38);
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_39 = Component_GetComponent_TisPlayerController_t4CE339054014370D89B89922EDC0EA2766589C85_m503EAA28F55B66971C880C00538F81DCCB8C1629(L_38, /*hidden argument*/Component_GetComponent_TisPlayerController_t4CE339054014370D89B89922EDC0EA2766589C85_m503EAA28F55B66971C880C00538F81DCCB8C1629_RuntimeMethod_var);
		NullCheck(L_36);
		L_36->set_playerController_4(L_39);
		MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF * L_40 = V_1;
		MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF * L_41 = V_1;
		NullCheck(L_41);
		int32_t L_42 = L_41->get_missilesToSpawn_7();
		NullCheck(L_40);
		L_40->set_missilesToSpawn_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)1)));
	}

IL_00dd:
	{
		float L_43 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((0.5f), (1.0f), /*hidden argument*/NULL);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_44 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_44, L_43, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_44);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0100:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0021;
	}
}
// System.Object MissileSpawner_<Spawning>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawningU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9CA2CC880DE4422CA6F20C15AD93B58EFAD1320D (U3CSpawningU3Ed__6_t5AEC324527E86BE881896DEC924A820D204E884B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MissileSpawner_<Spawning>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawningU3Ed__6_System_Collections_IEnumerator_Reset_m14275F66582966CAABC3C913B6A2113BC7FD688B (U3CSpawningU3Ed__6_t5AEC324527E86BE881896DEC924A820D204E884B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSpawningU3Ed__6_System_Collections_IEnumerator_Reset_m14275F66582966CAABC3C913B6A2113BC7FD688B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CSpawningU3Ed__6_System_Collections_IEnumerator_Reset_m14275F66582966CAABC3C913B6A2113BC7FD688B_RuntimeMethod_var);
	}
}
// System.Object MissileSpawner_<Spawning>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawningU3Ed__6_System_Collections_IEnumerator_get_Current_mEF8C2091C4CC4DE9E9998E19F102FD50F6E5C82D (U3CSpawningU3Ed__6_t5AEC324527E86BE881896DEC924A820D204E884B * __this, const RuntimeMethod* method)
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
// System.Void MonoPInvokeCallbackAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_mB9D2688DB30B918CCD5961A8DB873F32F2205D7E (MonoPInvokeCallbackAttribute_t0B801029DE3A1B9D601C52FDBED1EC104703FB02 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
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
// System.Void PersistableObject::Save(GameDataWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistableObject_Save_m884DD04AB75AF5900C57F7D2C9E0DE98EBB28825 (PersistableObject_t4C26456E3EA82C26268CB57F2113EA1C2BC3C426 * __this, GameDataWriter_tDE6D451FD1A567A30F2189551054DEE43E1DEB7C * ___writer0, const RuntimeMethod* method)
{
	{
		GameDataWriter_tDE6D451FD1A567A30F2189551054DEE43E1DEB7C * L_0 = ___writer0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameDataWriter_Write_m790A8ACA3F8097A34F3002FE10C5D58D3D804735(L_0, L_2, /*hidden argument*/NULL);
		GameDataWriter_tDE6D451FD1A567A30F2189551054DEE43E1DEB7C * L_3 = ___writer0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameDataWriter_Write_mEC466B5780155FCC5041319CE1D76BFDACFABC73(L_3, L_5, /*hidden argument*/NULL);
		GameDataWriter_tDE6D451FD1A567A30F2189551054DEE43E1DEB7C * L_6 = ___writer0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameDataWriter_Write_m790A8ACA3F8097A34F3002FE10C5D58D3D804735(L_6, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PersistableObject::Load(GameDataReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistableObject_Load_m4DF657A6619B1B14C8FA1EAAFB11DB1D3E211D12 (PersistableObject_t4C26456E3EA82C26268CB57F2113EA1C2BC3C426 * __this, GameDataReader_t2D0084ECC4827F2E510F29A214562FAA32B32E97 * ___reader0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		GameDataReader_t2D0084ECC4827F2E510F29A214562FAA32B32E97 * L_1 = ___reader0;
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = GameDataReader_ReadVector3_m99F37C88D8A3382F4FFA2DE75361A5ED7E6E08B0(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_0, L_2, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		GameDataReader_t2D0084ECC4827F2E510F29A214562FAA32B32E97 * L_4 = ___reader0;
		NullCheck(L_4);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = GameDataReader_ReadQuaternion_mB1C0C94760E817F84261D92B5E4A141458A76D47(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_3, L_5, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		GameDataReader_t2D0084ECC4827F2E510F29A214562FAA32B32E97 * L_7 = ___reader0;
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = GameDataReader_ReadVector3_m99F37C88D8A3382F4FFA2DE75361A5ED7E6E08B0(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_6, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PersistableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistableObject__ctor_m0435100125A07BC13AE01349CABF015EAAA11DDB (PersistableObject_t4C26456E3EA82C26268CB57F2113EA1C2BC3C426 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void PersistentStorage::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentStorage_Awake_mB6B8EA757E6238E02E2AEB4A3C64DF2735717515 (PersistentStorage_tF3F37AEB47F8A3A37612B6965C91CA7E6E2082B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PersistentStorage_Awake_mB6B8EA757E6238E02E2AEB4A3C64DF2735717515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_1 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_0, _stringLiteral1E642BDF46FE31BC40EF90D05487FB4F4E783170, /*hidden argument*/NULL);
		__this->set_savePath_4(L_1);
		return;
	}
}
// System.Boolean PersistentStorage::SaveFileExist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PersistentStorage_SaveFileExist_m462703934BE670267D431667FEB190907BAB89EB (PersistentStorage_tF3F37AEB47F8A3A37612B6965C91CA7E6E2082B0 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_savePath_4();
		bool L_1 = File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void PersistentStorage::Save(PersistableObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentStorage_Save_m9FDC60CF0EC913708664A6FBCD539EE4E504443A (PersistentStorage_tF3F37AEB47F8A3A37612B6965C91CA7E6E2082B0 * __this, PersistableObject_t4C26456E3EA82C26268CB57F2113EA1C2BC3C426 * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PersistentStorage_Save_m9FDC60CF0EC913708664A6FBCD539EE4E504443A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = __this->get_savePath_4();
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_1 = File_Open_mDA5EB4A312EAEBF8543B13C572271FB5F673A501(L_0, 2, /*hidden argument*/NULL);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_2 = (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 *)il2cpp_codegen_object_new(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_m2E92F4E5096905E2E7487E003AB7B3CC5C5EC185(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		PersistableObject_t4C26456E3EA82C26268CB57F2113EA1C2BC3C426 * L_3 = ___o0;
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_4 = V_0;
		GameDataWriter_tDE6D451FD1A567A30F2189551054DEE43E1DEB7C * L_5 = (GameDataWriter_tDE6D451FD1A567A30F2189551054DEE43E1DEB7C *)il2cpp_codegen_object_new(GameDataWriter_tDE6D451FD1A567A30F2189551054DEE43E1DEB7C_il2cpp_TypeInfo_var);
		GameDataWriter__ctor_m913C8087B64B2E9D1D702E08D54503F3D355F90A(L_5, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< GameDataWriter_tDE6D451FD1A567A30F2189551054DEE43E1DEB7C * >::Invoke(4 /* System.Void PersistableObject::Save(GameDataWriter) */, L_3, L_5);
		IL2CPP_LEAVE(0x2A, FINALLY_0020);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0020;
	}

FINALLY_0020:
	{ // begin finally (depth: 1)
		{
			BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_6 = V_0;
			if (!L_6)
			{
				goto IL_0029;
			}
		}

IL_0023:
		{
			BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_7 = V_0;
			NullCheck(L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_7);
		}

IL_0029:
		{
			IL2CPP_RESET_LEAVE(0x2A);
			IL2CPP_END_FINALLY(32)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(32)
	{
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002a:
	{
		return;
	}
}
// System.Void PersistentStorage::Load(PersistableObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentStorage_Load_m1C6C3F1D542A5747CD71D99AF00895748C6C41F0 (PersistentStorage_tF3F37AEB47F8A3A37612B6965C91CA7E6E2082B0 * __this, PersistableObject_t4C26456E3EA82C26268CB57F2113EA1C2BC3C426 * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PersistentStorage_Load_m1C6C3F1D542A5747CD71D99AF00895748C6C41F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = __this->get_savePath_4();
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_1 = File_Open_mDA5EB4A312EAEBF8543B13C572271FB5F673A501(L_0, 3, /*hidden argument*/NULL);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_2 = (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 *)il2cpp_codegen_object_new(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969_il2cpp_TypeInfo_var);
		BinaryReader__ctor_mD134893EA93809AFA29B025FF7439B82C35FE55F(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		PersistableObject_t4C26456E3EA82C26268CB57F2113EA1C2BC3C426 * L_3 = ___o0;
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_4 = V_0;
		GameDataReader_t2D0084ECC4827F2E510F29A214562FAA32B32E97 * L_5 = (GameDataReader_t2D0084ECC4827F2E510F29A214562FAA32B32E97 *)il2cpp_codegen_object_new(GameDataReader_t2D0084ECC4827F2E510F29A214562FAA32B32E97_il2cpp_TypeInfo_var);
		GameDataReader__ctor_mFEFE1FBDA51B77F3BBA9C4C7C45A3FB1FEECBEA5(L_5, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< GameDataReader_t2D0084ECC4827F2E510F29A214562FAA32B32E97 * >::Invoke(5 /* System.Void PersistableObject::Load(GameDataReader) */, L_3, L_5);
		IL2CPP_LEAVE(0x2A, FINALLY_0020);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0020;
	}

FINALLY_0020:
	{ // begin finally (depth: 1)
		{
			BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_6 = V_0;
			if (!L_6)
			{
				goto IL_0029;
			}
		}

IL_0023:
		{
			BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_7 = V_0;
			NullCheck(L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_7);
		}

IL_0029:
		{
			IL2CPP_RESET_LEAVE(0x2A);
			IL2CPP_END_FINALLY(32)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(32)
	{
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002a:
	{
		return;
	}
}
// System.Void PersistentStorage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentStorage__ctor_m66CD98F7F483506916521C4B0831374FEF427155 (PersistentStorage_tF3F37AEB47F8A3A37612B6965C91CA7E6E2082B0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void PlanetController::SetSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetController_SetSpeed_m6E046A715BD07DF1F504DC2AA1F8195B6DEB6AF3 (PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF * __this, float ___speed0, const RuntimeMethod* method)
{
	{
		float L_0 = ___speed0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		__this->set_speed_7(((float)il2cpp_codegen_multiply((float)L_0, (float)((-((float)((float)(1.0f)/(float)L_3)))))));
		return;
	}
}
// System.Void PlanetController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetController_Start_m788EB3E2B4D4CABE9DDE9B53179762AD390BBB17 (PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlanetController_Start_m788EB3E2B4D4CABE9DDE9B53179762AD390BBB17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_PlanetSpawner_4();
		NullCheck(L_0);
		PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * L_1 = GameObject_GetComponent_TisPlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE_m5B60021AA806475686C0E7896FBFF1D2B88DE21D(L_0, /*hidden argument*/GameObject_GetComponent_TisPlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE_m5B60021AA806475686C0E7896FBFF1D2B88DE21D_RuntimeMethod_var);
		__this->set_planetSpawnerScript_10(L_1);
		float L_2 = __this->get_MinRotationSpeed_8();
		float L_3 = __this->get_MaxRotationSpeed_9();
		float L_4 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384(L_2, L_3, /*hidden argument*/NULL);
		__this->set_rotationSpeed_11(L_4);
		return;
	}
}
// System.Void PlanetController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetController_FixedUpdate_m74288265F6D5717D7E96B5326DAEA6C9752E4BE5 (PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlanetController_FixedUpdate_m74288265F6D5717D7E96B5326DAEA6C9752E4BE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_rotationSpeed_11();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_2), (0.0f), (0.0f), L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m3424566A0D19A1487AE3A82B08C47F2A2D2A26CB(L_0, L_2, 1, /*hidden argument*/NULL);
		float L_3 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_4 = __this->get_speed_7();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = __this->get_PlayerTransform_6();
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		(&V_0)->set_y_3((0.0f));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_10, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_9, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlanetController::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetController_OnTriggerExit_mACD939B70B9389B33605235887D7B3EF65C8077F (PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlanetController_OnTriggerExit_mACD939B70B9389B33605235887D7B3EF65C8077F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_0, /*hidden argument*/NULL);
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, _stringLiteral0A5E7A05836B400F9DE317B87DF54111B135FDBE, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * L_3 = __this->get_planetSpawnerScript_10();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		PlanetSpawner_ReclaimPlanet_mF2774A8564719B1C9A4F1D2BFD26516E1A822A17(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void PlanetController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetController__ctor_mFF80D9212327B5730DFF92E3B8FBF1EF39C5A082 (PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF * __this, const RuntimeMethod* method)
{
	{
		__this->set_MinRotationSpeed_8((0.1f));
		__this->set_MaxRotationSpeed_9((0.5f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void PlanetSpawner::SetPlayingMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetSpawner_SetPlayingMode_m2A302E00C74C199876E1CB89EF4452CF7E4D1319 (PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * __this, bool ___isPlaying0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlanetSpawner_SetPlayingMode_m2A302E00C74C199876E1CB89EF4452CF7E4D1319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* V_0 = NULL;
	int32_t V_1 = 0;
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * V_2 = NULL;
	PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF * G_B4_0 = NULL;
	PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF * G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF * G_B5_1 = NULL;
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_playerTransform_4();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_2 = Physics_OverlapSphere_m354A92672F7A6DE59EF1285D02D62247F46A5D84(L_1, (50.0f), /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0054;
	}

IL_001a:
	{
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_7 = V_2;
		NullCheck(L_7);
		String_t* L_8 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_7, /*hidden argument*/NULL);
		bool L_9 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_8, _stringLiteralD443A1185575C125D61E0AF393B044D7B06EF572, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_10 = V_2;
		NullCheck(L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF * L_12 = GameObject_GetComponent_TisPlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF_m80B9F78DC497D7E2E0040FB39FACBBE001E1B283(L_11, /*hidden argument*/GameObject_GetComponent_TisPlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF_m80B9F78DC497D7E2E0040FB39FACBBE001E1B283_RuntimeMethod_var);
		bool L_13 = ___isPlaying0;
		G_B3_0 = L_12;
		if (L_13)
		{
			G_B4_0 = L_12;
			goto IL_0045;
		}
	}
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B3_0;
		goto IL_004b;
	}

IL_0045:
	{
		float L_14 = __this->get_speed_10();
		G_B5_0 = L_14;
		G_B5_1 = G_B4_0;
	}

IL_004b:
	{
		NullCheck(G_B5_1);
		PlanetController_SetSpeed_m6E046A715BD07DF1F504DC2AA1F8195B6DEB6AF3(G_B5_1, G_B5_0, /*hidden argument*/NULL);
	}

IL_0050:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0054:
	{
		int32_t L_16 = V_1;
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.Void PlanetSpawner::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetSpawner_Awake_mA8C344D78CCBFE967C7138C147F32DD1F2C2691E (PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlanetSpawner_Awake_mA8C344D78CCBFE967C7138C147F32DD1F2C2691E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlanetSpawner_CreatePools_mBC9B7FA0958F1DD7A9AD6D37A781D60DD025A84F(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m590A0A7F161D579C18E678B4C5ACCE77B1B318DD(__this, _stringLiteral3A410CB4DE736B7DFFDB58561D8DF20B1E72E2B0, /*hidden argument*/NULL);
		PlanetSpawner_SpawnInitialPlanets_m33B495CC543EC21F4BF1369CB3741D39CC9751E5(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlanetSpawner::SpawnInitialPlanets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetSpawner_SpawnInitialPlanets_m33B495CC543EC21F4BF1369CB3741D39CC9751E5 (PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		goto IL_0048;
	}

IL_0002:
	{
		float L_0 = __this->get_radius_6();
		float L_1 = __this->get_radius_6();
		float L_2 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384(((-L_0)), L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = __this->get_radius_6();
		float L_4 = __this->get_radius_6();
		float L_5 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384(((-L_3)), L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = V_0;
		float L_7 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((7.0f), (30.0f), /*hidden argument*/NULL);
		float L_8 = V_1;
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), L_6, ((-L_7)), L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_2;
		PlanetSpawner_SpawnPlanetAtPosition_mB3174A1C0A339D7C2D857E14B22B283EDB2139C4(__this, L_9, /*hidden argument*/NULL);
	}

IL_0048:
	{
		int32_t L_10 = __this->get_planetCount_14();
		int32_t L_11 = __this->get_maxPlanetCount_11();
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void PlanetSpawner::CreatePools()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetSpawner_CreatePools_mBC9B7FA0958F1DD7A9AD6D37A781D60DD025A84F (PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlanetSpawner_CreatePools_mBC9B7FA0958F1DD7A9AD6D37A781D60DD025A84F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_0 = __this->get_planetPrefabs_5();
		NullCheck(L_0);
		List_1U5BU5D_t94B00E308FD53421F9A8256D755B8AAED7BC9F06* L_1 = (List_1U5BU5D_t94B00E308FD53421F9A8256D755B8AAED7BC9F06*)(List_1U5BU5D_t94B00E308FD53421F9A8256D755B8AAED7BC9F06*)SZArrayNew(List_1U5BU5D_t94B00E308FD53421F9A8256D755B8AAED7BC9F06_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		__this->set_pools_13(L_1);
		V_0 = 0;
		goto IL_0028;
	}

IL_0017:
	{
		List_1U5BU5D_t94B00E308FD53421F9A8256D755B8AAED7BC9F06* L_2 = __this->get_pools_13();
		int32_t L_3 = V_0;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_4 = (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *)il2cpp_codegen_object_new(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650_il2cpp_TypeInfo_var);
		List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6(L_4, /*hidden argument*/List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6_RuntimeMethod_var);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *)L_4);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0028:
	{
		int32_t L_6 = V_0;
		List_1U5BU5D_t94B00E308FD53421F9A8256D755B8AAED7BC9F06* L_7 = __this->get_pools_13();
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}
}
// System.Void PlanetSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetSpawner_Update_m271D9D1D0155134FE251BD9FA2C86A143155BE91 (PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_planetCount_14();
		int32_t L_1 = __this->get_maxPlanetCount_11();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		PlanetSpawner_SpawnPlanet_mEBDD9E4EA7EC7695EC4D67C417BB584EE739C1AE(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void PlanetSpawner::SpawnPlanet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetSpawner_SpawnPlanet_mEBDD9E4EA7EC7695EC4D67C417BB584EE739C1AE (PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlanetSpawner_SpawnPlanet_mEBDD9E4EA7EC7695EC4D67C417BB584EE739C1AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_playerTransform_4();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = __this->get_playerTransform_4();
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_z_4();
		V_0 = L_5;
		float L_6 = __this->get_spawnAngleInRadians_7();
		float L_7 = __this->get_spawnAngleInRadians_7();
		float L_8 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384(((-L_6)), L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		float L_9 = L_2;
		float L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_11 = cosf(L_10);
		float L_12 = V_0;
		float L_13 = V_1;
		float L_14 = sinf(L_13);
		V_2 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11)), (float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_14))));
		float L_15 = V_1;
		float L_16 = sinf(L_15);
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = cosf(L_18);
		V_3 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_16)), (float)((float)il2cpp_codegen_multiply((float)L_17, (float)L_19))));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = __this->get_playerTransform_4();
		NullCheck(L_20);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_20, /*hidden argument*/NULL);
		float L_22 = V_2;
		float L_23 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_24), L_22, (0.0f), L_23, /*hidden argument*/NULL);
		float L_25 = __this->get_radius_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_24, L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_21, L_26, /*hidden argument*/NULL);
		V_4 = L_27;
		float L_28 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((7.0f), (30.0f), /*hidden argument*/NULL);
		(&V_4)->set_y_3(((-L_28)));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_4;
		PlanetSpawner_SpawnPlanetAtPosition_mB3174A1C0A339D7C2D857E14B22B283EDB2139C4(__this, L_29, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlanetSpawner::SpawnPlanetAtPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetSpawner_SpawnPlanetAtPosition_mB3174A1C0A339D7C2D857E14B22B283EDB2139C4 (PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlanetSpawner_SpawnPlanetAtPosition_mB3174A1C0A339D7C2D857E14B22B283EDB2139C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = Random_get_rotation_mFEB212A2058746E0E8F544D8C2201663861BA77A(/*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = __this->get_minScale_8();
		float L_2 = __this->get_maxScale_9();
		float L_3 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_4 = __this->get_planetPrefabs_5();
		NullCheck(L_4);
		int32_t L_5 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))), (int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = PlanetSpawner_InstantiatePlanet_m1826E6E39E54B465A6785F26682802A289784613(__this, L_6, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = L_7;
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = ___position0;
		NullCheck(L_9);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_9, L_10, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = L_8;
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_11, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = V_0;
		NullCheck(L_12);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_12, L_13, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = L_11;
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_14, /*hidden argument*/NULL);
		float L_16 = V_1;
		float L_17 = V_1;
		float L_18 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_19), L_16, L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_15, L_19, /*hidden argument*/NULL);
		NullCheck(L_14);
		PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF * L_20 = GameObject_GetComponent_TisPlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF_m80B9F78DC497D7E2E0040FB39FACBBE001E1B283(L_14, /*hidden argument*/GameObject_GetComponent_TisPlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF_m80B9F78DC497D7E2E0040FB39FACBBE001E1B283_RuntimeMethod_var);
		PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF * L_21 = L_20;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->set_PlanetSpawner_4(L_22);
		PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF * L_23 = L_21;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = __this->get_playerTransform_4();
		NullCheck(L_23);
		L_23->set_PlayerTransform_6(L_24);
		PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF * L_25 = L_23;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		L_25->set_PlanetId_5(L_26);
		float L_27 = __this->get_speed_10();
		NullCheck(L_25);
		PlanetController_SetSpeed_m6E046A715BD07DF1F504DC2AA1F8195B6DEB6AF3(L_25, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlanetSpawner::ReclaimPlanet(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetSpawner_ReclaimPlanet_mF2774A8564719B1C9A4F1D2BFD26516E1A822A17 (PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___planet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlanetSpawner_ReclaimPlanet_mF2774A8564719B1C9A4F1D2BFD26516E1A822A17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF * V_0 = NULL;
	List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_planetCount_14();
		__this->set_planetCount_14(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = ___planet0;
		NullCheck(L_1);
		PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF * L_2 = GameObject_GetComponent_TisPlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF_m80B9F78DC497D7E2E0040FB39FACBBE001E1B283(L_1, /*hidden argument*/GameObject_GetComponent_TisPlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF_m80B9F78DC497D7E2E0040FB39FACBBE001E1B283_RuntimeMethod_var);
		V_0 = L_2;
		List_1U5BU5D_t94B00E308FD53421F9A8256D755B8AAED7BC9F06* L_3 = __this->get_pools_13();
		PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_PlanetId_5();
		NullCheck(L_3);
		int32_t L_6 = L_5;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_7 = (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_8, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		int32_t L_10 = __this->get_maxPlanetChacheSize_12();
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0038;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = ___planet0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_11, /*hidden argument*/NULL);
		return;
	}

IL_0038:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = ___planet0;
		NullCheck(L_12);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_12, (bool)0, /*hidden argument*/NULL);
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_13 = V_1;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = ___planet0;
		NullCheck(L_13);
		List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112(L_13, L_14, /*hidden argument*/List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.GameObject PlanetSpawner::InstantiatePlanet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PlanetSpawner_InstantiatePlanet_m1826E6E39E54B465A6785F26682802A289784613 (PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlanetSpawner_InstantiatePlanet_m1826E6E39E54B465A6785F26682802A289784613_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_planetCount_14();
		__this->set_planetCount_14(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		List_1U5BU5D_t94B00E308FD53421F9A8256D755B8AAED7BC9F06* L_1 = __this->get_pools_13();
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		PlanetSpawner_CreatePools_mBC9B7FA0958F1DD7A9AD6D37A781D60DD025A84F(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		List_1U5BU5D_t94B00E308FD53421F9A8256D755B8AAED7BC9F06* L_2 = __this->get_pools_13();
		int32_t L_3 = ___idx0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_5 = (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_6, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_8 = V_0;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_9, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		NullCheck(L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_8, ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)), /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = L_11;
		NullCheck(L_12);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_12, (bool)1, /*hidden argument*/NULL);
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_13 = V_0;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_14, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		NullCheck(L_13);
		List_1_RemoveAt_m3F60BC23F48E82BD2B61BF75F6B55502FD6FE250(L_13, ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)), /*hidden argument*/List_1_RemoveAt_m3F60BC23F48E82BD2B61BF75F6B55502FD6FE250_RuntimeMethod_var);
		return L_12;
	}

IL_0052:
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_16 = __this->get_planetPrefabs_5();
		int32_t L_17 = ___idx0;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E(L_19, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E_RuntimeMethod_var);
		return L_20;
	}
}
// System.Void PlanetSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetSpawner__ctor_m08DA3B072073AC721C68FF93920FE0F9C21C611E (PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * __this, const RuntimeMethod* method)
{
	{
		__this->set_spawnAngleInRadians_7((1.0f));
		__this->set_minScale_8((0.8f));
		__this->set_maxScale_9((1.5f));
		__this->set_maxPlanetCount_11(((int32_t)10));
		__this->set_maxPlanetChacheSize_12(5);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void PlayerController::SetPlayingMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SetPlayingMode_m0B0048F7C02B20115B9E0D9E258E0A1F5B789E5E (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, bool ___isPlaying0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_SetPlayingMode_m0B0048F7C02B20115B9E0D9E258E0A1F5B789E5E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___isPlaying0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0013:
	{
		Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * L_3 = __this->get_Joystick_11();
		NullCheck(L_3);
		L_3->set_joystickMode_5(0);
		Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * L_4 = __this->get_Joystick_11();
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_4, /*hidden argument*/NULL);
		bool L_6 = ___isPlaying0;
		NullCheck(L_5);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, L_6, /*hidden argument*/NULL);
		__this->set_boostEnd_21((0.0f));
		bool L_7 = ___isPlaying0;
		__this->set_isPlaying_19(L_7);
		return;
	}
}
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_mC0C9B9461D0BDAC48EC43715818A4BA63C4F45EF (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Start_mC0C9B9461D0BDAC48EC43715818A4BA63C4F45EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		__this->set_lastMissileTargetSetTime_20(L_0);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_1 = Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var);
		__this->set_rb_16(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_FindGameObjectWithTag_m9F2877F52346B973DE3023209D73852E96ECC10D(_stringLiteralBA5D8C466BB20F75587D894E0540D80CFA945225, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * L_3 = GameObject_GetComponent_TisGameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_m64E547BB2F34853E78EB9487F66094E4FAF5CB0B(L_2, /*hidden argument*/GameObject_GetComponent_TisGameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_m64E547BB2F34853E78EB9487F66094E4FAF5CB0B_RuntimeMethod_var);
		__this->set_gameController_17(L_3);
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_FixedUpdate_m914EA3E3CCE4DF6AEB2E78317FFC1D507DACEBDE (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	{
		PlayerController_Move_m0CD456A5EA1116F1B4EA5A731C7EAC46D26B598F(__this, /*hidden argument*/NULL);
		PlayerController_MagnetCoins_mE167FA23D168300F1CE98FDDF69786F47A6188F4(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Move_m0CD456A5EA1116F1B4EA5A731C7EAC46D26B598F (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Move_m0CD456A5EA1116F1B4EA5A731C7EAC46D26B598F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B11_0 = 0.0f;
	float G_B11_1 = 0.0f;
	float G_B10_0 = 0.0f;
	float G_B10_1 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	float G_B12_2 = 0.0f;
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_ScrollHolderTransform_12();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = __this->get_ScrollHolderTransform_12();
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_10), L_3, L_6, L_9, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_10, /*hidden argument*/NULL);
		float L_11 = __this->get_boostEnd_21();
		float L_12 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		if ((!(((float)L_11) > ((float)L_12))))
		{
			goto IL_0055;
		}
	}
	{
		bool L_13 = __this->get_isPlaying_19();
		if (L_13)
		{
			goto IL_005c;
		}
	}

IL_0055:
	{
		G_B4_0 = (0.0f);
		goto IL_0062;
	}

IL_005c:
	{
		float L_14 = __this->get_Boost_6();
		G_B4_0 = L_14;
	}

IL_0062:
	{
		V_0 = G_B4_0;
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_15 = __this->get_rb_16();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_16, /*hidden argument*/NULL);
		float L_18 = __this->get_Speed_5();
		float L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_17, ((float)il2cpp_codegen_add((float)L_18, (float)L_19)), /*hidden argument*/NULL);
		NullCheck(L_15);
		Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380(L_15, L_20, /*hidden argument*/NULL);
		bool L_21 = __this->get_isPlaying_19();
		if (L_21)
		{
			goto IL_008f;
		}
	}
	{
		return;
	}

IL_008f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * L_23 = __this->get_Joystick_11();
		NullCheck(L_23);
		float L_24 = Joystick_get_Horizontal_mD2CEADF3C7AD02BA60F7990F1A39BC67C6D8819B(L_23, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_22, L_24, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * L_27 = __this->get_Joystick_11();
		NullCheck(L_27);
		float L_28 = Joystick_get_Vertical_m2326D40EF66E0A5E2B34F9CF02A53C05CCAFDED0(L_27, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_26, L_28, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_25, L_29, /*hidden argument*/NULL);
		V_1 = L_30;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_32 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_31, /*hidden argument*/NULL);
		V_3 = L_32;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_3), /*hidden argument*/NULL);
		V_2 = L_33;
		float L_34 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_35 = __this->get_lastMissileTargetSetTime_20();
		float L_36 = __this->get_MissileTargetUpdateThreshold_10();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_34, (float)L_35))) >= ((float)L_36))))
		{
			goto IL_011d;
		}
	}
	{
		float L_37 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		__this->set_lastMissileTargetSetTime_20(L_37);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_38, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_40 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_41, (0.7f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_39, L_42, /*hidden argument*/NULL);
		__this->set_MissileTarget_4(L_43);
	}

IL_011d:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_46 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_44, L_45, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_01d9;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_48 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_47, /*hidden argument*/NULL);
		V_3 = L_48;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_3), /*hidden argument*/NULL);
		float L_50 = L_49.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = V_2;
		float L_52 = L_51.get_y_3();
		V_4 = ((float)il2cpp_codegen_subtract((float)(fmodf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_50, (float)L_52)), (float)(180.0f))), (360.0f))), (float)(180.0f)));
		float L_53 = __this->get_Steering_9();
		float L_54 = __this->get_Steering_9();
		float L_55 = V_4;
		G_B10_0 = L_54;
		G_B10_1 = ((-L_53));
		if ((((float)L_55) < ((float)(-180.0f))))
		{
			G_B11_0 = L_54;
			G_B11_1 = ((-L_53));
			goto IL_0175;
		}
	}
	{
		float L_56 = V_4;
		G_B12_0 = L_56;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		goto IL_017d;
	}

IL_0175:
	{
		float L_57 = V_4;
		G_B12_0 = ((float)il2cpp_codegen_add((float)L_57, (float)(360.0f)));
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
	}

IL_017d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_58 = Mathf_Min_mCF9BE0E9CAC9F18D207692BB2DAC7F3E1D4E1CB7(G_B12_1, G_B12_0, /*hidden argument*/NULL);
		float L_59 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(G_B12_2, L_58, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = V_2;
		float L_61 = L_60.get_y_3();
		V_5 = ((float)il2cpp_codegen_add((float)L_59, (float)L_61));
		float L_62 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_63 = V_2;
		float L_64 = L_63.get_y_3();
		float L_65 = __this->get_Tilt_7();
		V_6 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_62, (float)L_64)), (float)((-L_65))));
		float L_66 = __this->get_oldRotationZ_18();
		float L_67 = V_6;
		float L_68 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_66, L_67, (0.05f), /*hidden argument*/NULL);
		V_7 = L_68;
		float L_69 = V_7;
		__this->set_oldRotationZ_18(L_69);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_70 = __this->get_rb_16();
		float L_71 = V_5;
		float L_72 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_73 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), L_71, L_72, /*hidden argument*/NULL);
		NullCheck(L_70);
		Rigidbody_MoveRotation_mCBE2CF9F1B4A86C4BCB899AAB4C4EE8BBAD21C84(L_70, L_73, /*hidden argument*/NULL);
		return;
	}

IL_01d9:
	{
		float L_74 = __this->get_oldRotationZ_18();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_75 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_74, (0.0f), (0.4f), /*hidden argument*/NULL);
		V_8 = L_75;
		float L_76 = V_8;
		__this->set_oldRotationZ_18(L_76);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_77 = __this->get_rb_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_78 = V_2;
		float L_79 = L_78.get_y_3();
		float L_80 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_81 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), L_79, L_80, /*hidden argument*/NULL);
		NullCheck(L_77);
		Rigidbody_MoveRotation_mCBE2CF9F1B4A86C4BCB899AAB4C4EE8BBAD21C84(L_77, L_81, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnTriggerEnter_m2F6A24BACBA236DC01D4689BD68C270C29607E44 (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnTriggerEnter_m2F6A24BACBA236DC01D4689BD68C270C29607E44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_isPlaying_19();
		if (!L_0)
		{
			goto IL_00d8;
		}
	}
	{
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_1 = ___other0;
		NullCheck(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_2, /*hidden argument*/NULL);
		bool L_4 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_3, _stringLiteralD1E0451303B39E580BF0A8C185CBC4EDD8C5B177, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		Handheld_Vibrate_mA83C229AF2018DCA33714AE61271EF8B87B16277(/*hidden argument*/NULL);
		__this->set_isPlaying_19((bool)0);
		GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * L_5 = __this->get_gameController_17();
		NullCheck(L_5);
		GameController_HandleShipDestroy_mFD703B37D9D30A351EA0798374BCA98D63214750(L_5, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_ExplosionPrefab_13();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_6, L_8, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		return;
	}

IL_0056:
	{
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_10 = ___other0;
		NullCheck(L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_11, /*hidden argument*/NULL);
		bool L_13 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_12, _stringLiteralA9749253C369D0C8855999E9DF1E54FFB9CB0E5F, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_009a;
		}
	}
	{
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_14 = ___other0;
		NullCheck(L_14);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_15, /*hidden argument*/NULL);
		GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * L_16 = __this->get_gameController_17();
		NullCheck(L_16);
		GameController_HandleCoinCollect_m6FA783EA580308B50251BD42075EA75A1F1E723E(L_16, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = __this->get_CoinCollectPrefab_14();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_17, L_18, L_19, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		return;
	}

IL_009a:
	{
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_20 = ___other0;
		NullCheck(L_20);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_22 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_21, /*hidden argument*/NULL);
		bool L_23 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_22, _stringLiteral2DA2851FFF39350C99BB7AD4124737E960D9DE37, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00d8;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = __this->get_BoostCollectPrefab_15();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_26 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_24, L_25, L_26, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		float L_27 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		__this->set_boostEnd_21(((float)il2cpp_codegen_add((float)L_27, (float)(10.0f))));
	}

IL_00d8:
	{
		return;
	}
}
// System.Void PlayerController::MagnetCoins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_MagnetCoins_mE167FA23D168300F1CE98FDDF69786F47A6188F4 (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_MagnetCoins_mE167FA23D168300F1CE98FDDF69786F47A6188F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* V_0 = NULL;
	int32_t V_1 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = __this->get_MagnetRadius_8();
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_3 = Physics_OverlapSphere_m354A92672F7A6DE59EF1285D02D62247F46A5D84(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_00f3;
	}

IL_001e:
	{
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		String_t* L_8 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_7, /*hidden argument*/NULL);
		bool L_9 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_8, _stringLiteralA9749253C369D0C8855999E9DF1E54FFB9CB0E5F, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00ef;
		}
	}
	{
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_17, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_18, L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_6), /*hidden argument*/NULL);
		V_3 = L_21;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_23, (10.0f), /*hidden argument*/NULL);
		float L_25 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_24, L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_22, L_26, /*hidden argument*/NULL);
		V_4 = L_27;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_28, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_29, L_30, /*hidden argument*/NULL);
		V_6 = L_31;
		float L_32 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_6), /*hidden argument*/NULL);
		float L_33 = __this->get_MagnetRadius_8();
		float L_34 = __this->get_MagnetRadius_8();
		V_5 = ((float)((float)L_32/(float)((float)il2cpp_codegen_multiply((float)L_33, (float)L_34))));
		float L_35 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_36 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_35, (0.2f), (1.0f), /*hidden argument*/NULL);
		V_5 = L_36;
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_37 = V_0;
		int32_t L_38 = V_1;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_41 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_42 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_41, /*hidden argument*/NULL);
		float L_43 = V_5;
		float L_44 = V_5;
		float L_45 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_46), L_43, L_44, L_45, /*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_42, L_46, /*hidden argument*/NULL);
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_47 = V_0;
		int32_t L_48 = V_1;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_50);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_51 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_52 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_51, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = V_4;
		NullCheck(L_52);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_52, L_53, /*hidden argument*/NULL);
	}

IL_00ef:
	{
		int32_t L_54 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_00f3:
	{
		int32_t L_55 = V_1;
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_56 = V_0;
		NullCheck(L_56);
		if ((((int32_t)L_55) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_m648E40092E37395F4307411E855445886113CD60 (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void SelfDestroy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelfDestroy_Start_m71293DA770D3E74FC33F7DBB4C6D13E28CB68EDF (SelfDestroy_t914E0DDB257662ECE11BA3AA2280DE94351400CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SelfDestroy_Start_m71293DA770D3E74FC33F7DBB4C6D13E28CB68EDF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_seconds_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m09F51D8BDECFD2E8C618498EF7377029B669030D(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SelfDestroy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelfDestroy__ctor_mA2963A1A1A5A9D1D11BCB7CB0AF35046236540E7 (SelfDestroy_t914E0DDB257662ECE11BA3AA2280DE94351400CB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void ShipInfoController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShipInfoController__ctor_mD81F783645A24E500D5CC0610FEA52398BF46950 (ShipInfoController_tB4A1582E3DFCB36D073E261496C5E13038F6FA9A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void ShipRequirements::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShipRequirements__ctor_m1BF2E39EFB6BF900B77E5700455C38F669EE3A4A (ShipRequirements_tFDDCB2950CFF188C8F8F935EB2BC1574AE18D297 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void ShipSpecs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShipSpecs__ctor_m5CDD9A0D4F0511C46EDE0C1186069A575A790B65 (ShipSpecs_tAB40A70A93C82661D7BBD774D178FE654AA27DF0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void UiDisplayFps::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiDisplayFps_Update_mAB3F46A645F752849C11F682EDD6CF56A657E8F8 (UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UiDisplayFps_Update_mAB3F46A645F752849C11F682EDD6CF56A657E8F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		int32_t L_0 = __this->get_frameCount_7();
		__this->set_frameCount_7(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		float L_1 = __this->get_dt_8();
		float L_2 = Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2(/*hidden argument*/NULL);
		__this->set_dt_8(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
		float L_3 = __this->get_dt_8();
		float L_4 = __this->get_updateRateSeconds_6();
		if ((!(((double)(((double)((double)L_3)))) > ((double)((double)((double)(1.0)/(double)(((double)((double)L_4)))))))))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_5 = __this->get_frameCount_7();
		float L_6 = __this->get_dt_8();
		__this->set_fps_9(((float)((float)(((float)((float)L_5)))/(float)L_6)));
		__this->set_frameCount_7(0);
		float L_7 = __this->get_dt_8();
		float L_8 = __this->get_updateRateSeconds_6();
		__this->set_dt_8(((float)il2cpp_codegen_subtract((float)L_7, (float)((float)((float)(1.0f)/(float)L_8)))));
	}

IL_006e:
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_9 = __this->get_txtFps_5();
		String_t* L_10 = __this->get_formatedString_4();
		float L_11 = __this->get_fps_9();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_12 = Math_Round_m43E20353F30A47D0005BEC4431B380572B9A4932((((double)((double)L_11))), 1, /*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13 = Double_ToString_m4A142BE5E5F1EF1434658FC874A19E124D95313F((double*)(&V_0), _stringLiteral38F6D7875E3195BDAEE448D2CB6917F3AE4994AF, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_14 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_10, _stringLiteral75CED707AD7969184F544055D29CD6DC0A2F66DF, L_13, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_14);
		return;
	}
}
// System.Void UiDisplayFps::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiDisplayFps__ctor_mD68DDF4B48BA37807286DC132397C62A3E475DD6 (UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UiDisplayFps__ctor_mD68DDF4B48BA37807286DC132397C62A3E475DD6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_formatedString_4(_stringLiteralE6617A78009D6D4ED88EC0B325B81A46A1756B63);
		__this->set_updateRateSeconds_6((4.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void VariableJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_Start_m5BB1A8FE9E2EBC394C4AC8B4E495AB653F61E8E2 (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isFixed_9();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		VariableJoystick_OnFixed_mBDD3E7597A7E7F75CCB07026E9655F769A6BAD68(__this, /*hidden argument*/NULL);
		return;
	}

IL_000f:
	{
		VariableJoystick_OnFloat_mD79CAFA448FD8A0309B82DFA1E6A8D6B8D8CF0F0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VariableJoystick::ChangeFixed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_ChangeFixed_mC08821BBCF0510BEB364F7032BAB3F9826816035 (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, bool ___joystickFixed0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___joystickFixed0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		VariableJoystick_OnFixed_mBDD3E7597A7E7F75CCB07026E9655F769A6BAD68(__this, /*hidden argument*/NULL);
		goto IL_0011;
	}

IL_000b:
	{
		VariableJoystick_OnFloat_mD79CAFA448FD8A0309B82DFA1E6A8D6B8D8CF0F0(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		bool L_1 = ___joystickFixed0;
		__this->set_isFixed_9(L_1);
		return;
	}
}
// System.Void VariableJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnDrag_m6D6F9FB3802309502B93EF4C2F218969DAEFE619 (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick_OnDrag_m6D6F9FB3802309502B93EF4C2F218969DAEFE619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * G_B2_0 = NULL;
	VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * G_B1_0 = NULL;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * G_B3_1 = NULL;
	{
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_0 = ___eventData0;
		NullCheck(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = PointerEventData_get_position_m00FFBA0CB6385B8E8B82BE9C8AAC45E027B2D061(L_0, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = __this->get_joystickCenter_11();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_5 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_7();
		NullCheck(L_5);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_x_0();
		G_B1_0 = __this;
		if ((((float)L_4) > ((float)((float)((float)L_7/(float)(2.0f))))))
		{
			G_B2_0 = __this;
			goto IL_0050;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = V_0;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_9 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_7();
		NullCheck(L_9);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = Vector2_op_Division_m0961A935168EE6701E098E2B37013DFFF46A5077(L_8, ((float)((float)L_11/(float)(2.0f))), /*hidden argument*/NULL);
		G_B3_0 = L_12;
		G_B3_1 = G_B1_0;
		goto IL_0057;
	}

IL_0050:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = Vector2_get_normalized_m058E75C38C6FC66E178D7C8EF1B6298DE8F0E14B((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_13;
		G_B3_1 = G_B2_0;
	}

IL_0057:
	{
		NullCheck(G_B3_1);
		((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)G_B3_1)->set_inputVector_6(G_B3_0);
		Joystick_ClampJoystick_m4407381A239C637BE3515E642EC169EC9F6BC385(__this, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_14 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_handle_8();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_inputVector_6();
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_16 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_7();
		NullCheck(L_16);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_15, L_18, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = Vector2_op_Division_m0961A935168EE6701E098E2B37013DFFF46A5077(L_19, (2.0f), /*hidden argument*/NULL);
		float L_21 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_handleLimit_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_14);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_14, L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VariableJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerDown_m066F12E7818D1CD22977EAEA9FE4AEC0DD179FAC (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick_OnPointerDown_m066F12E7818D1CD22977EAEA9FE4AEC0DD179FAC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_isFixed_9();
		if (L_0)
		{
			goto IL_004b;
		}
	}
	{
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_1 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_7();
		NullCheck(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_2, (bool)1, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_3 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_7();
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_4 = ___eventData0;
		NullCheck(L_4);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = PointerEventData_get_position_m00FFBA0CB6385B8E8B82BE9C8AAC45E027B2D061(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_3, L_6, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_7 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_handle_8();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		NullCheck(L_7);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_7, L_8, /*hidden argument*/NULL);
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_9 = ___eventData0;
		NullCheck(L_9);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = PointerEventData_get_position_m00FFBA0CB6385B8E8B82BE9C8AAC45E027B2D061(L_9, /*hidden argument*/NULL);
		__this->set_joystickCenter_11(L_10);
	}

IL_004b:
	{
		return;
	}
}
// System.Void VariableJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerUp_m42B201EDAB1B3A2F2ED747FA7A4773E2654DA061 (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick_OnPointerUp_m42B201EDAB1B3A2F2ED747FA7A4773E2654DA061_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_isFixed_9();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_1 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_7();
		NullCheck(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_2, (bool)0, /*hidden argument*/NULL);
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->set_inputVector_6(L_3);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_4 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_handle_8();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VariableJoystick::OnFixed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnFixed_mBDD3E7597A7E7F75CCB07026E9655F769A6BAD68 (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick_OnFixed_mBDD3E7597A7E7F75CCB07026E9655F769A6BAD68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_fixedScreenPosition_10();
		__this->set_joystickCenter_11(L_0);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_1 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_7();
		NullCheck(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_2, (bool)1, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_3 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_handle_8();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		NullCheck(L_3);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_3, L_4, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_5 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_7();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = __this->get_fixedScreenPosition_10();
		NullCheck(L_5);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VariableJoystick::OnFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnFloat_mD79CAFA448FD8A0309B82DFA1E6A8D6B8D8CF0F0 (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick_OnFloat_mD79CAFA448FD8A0309B82DFA1E6A8D6B8D8CF0F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_0 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_handle_8();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_0, L_1, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_2 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_7();
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_3, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VariableJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick__ctor_m8A6171BB962558D6833C6CF80E3E0092DF768D84 (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick__ctor_m8A6171BB962558D6833C6CF80E3E0092DF768D84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isFixed_9((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		__this->set_joystickCenter_11(L_0);
		Joystick__ctor_m0CEC3DFCF02C69B8020F600539EB02297E26D1CE(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
