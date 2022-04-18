#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,Cell[]>
struct Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject[]>
struct Dictionary_2_tA67244141E978011D16C324808EB61B56151233E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Cell[]>
struct KeyCollection_tD7938D487ED5423DC5D6F04CBEAEBB1D0F13DA4A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.GameObject[]>
struct KeyCollection_tD4A4866259ED773EB3C368893E5A6382C8134854;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Cell[]>
struct ValueCollection_t1E1D02D4995E8207C5810CEAA73463652F4C8650;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.GameObject[]>
struct ValueCollection_tA4D778970B5DF06EA2D06E32761D2337C203EB74;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Cell[]>[]
struct EntryU5BU5D_t49E9EC9322A88EA95439E2596BEA512302C5BCCA;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.GameObject[]>[]
struct EntryU5BU5D_tD5BE1378CECC410E1E3AC32486B80F0C477ABCD4;
// Cell[]
struct CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// AudioFX
struct AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83;
// AudioFXMenu
struct AudioFXMenu_t4498BD4FEBBD68B072684229840F23302A821EC8;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// ButtonClear
struct ButtonClear_tF60EBD696D6CE10612AF264DDD9D96AC8B3D230E;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Cell
struct Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameEvents
struct GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// GridGenerator
struct GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Advertisements.IUnityAdsInitializationListener
struct IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7;
// UnityEngine.Advertisements.IUnityAdsLoadListener
struct IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039;
// UnityEngine.Advertisements.IUnityAdsShowListener
struct IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// InterstitialAds
struct InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MenuManager
struct MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// Number
struct Number_tEBF6658D4F4914215862D82F55F8186CFC2EA119;
// OpenSomeCell
struct OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// PauseGame
struct PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// RewardedAd
struct RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SetMabyNumber
struct SetMabyNumber_tE8829E4A0165C7BD47455387370ED6D493BE2AB0;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Timer
struct Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityAds
struct UnityAds_t261657F9CACA9B380AA7BE6215A33A41E0F8292E;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Timer/<Time>d__7
struct U3CTimeU3Ed__7_t9C1AF6C0271E0156BADC6432456BB7D01965B641;

IL2CPP_EXTERN_C RuntimeClass* Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA67244141E978011D16C324808EB61B56151233E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTimeU3Ed__7_t9C1AF6C0271E0156BADC6432456BB7D01965B641_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0439B60B3710197EF1DD42F78C1F1D4997DA0444;
IL2CPP_EXTERN_C String_t* _stringLiteral14273CC7963ABCDA970ED8603590C265496E3778;
IL2CPP_EXTERN_C String_t* _stringLiteral186728018354DD5A345662365525D1905258CFCE;
IL2CPP_EXTERN_C String_t* _stringLiteral1F42F5C936B62465829D39E0D78AEB00CF685E7B;
IL2CPP_EXTERN_C String_t* _stringLiteral2583E589FA3E95DD1BA6E24BF1C2AC18D041B062;
IL2CPP_EXTERN_C String_t* _stringLiteral34F92C46F045354EEC9FBFCC82EE0690422992C4;
IL2CPP_EXTERN_C String_t* _stringLiteral3915BCEE1104CEC85AA6966E6C98DA6ED321B9DB;
IL2CPP_EXTERN_C String_t* _stringLiteral4BD3052BB1EC7598F0952B3FA0F49095189128A3;
IL2CPP_EXTERN_C String_t* _stringLiteral615F08617A6BB8AE41FE079E06F3AB3E827437BC;
IL2CPP_EXTERN_C String_t* _stringLiteral62480A630F2BB993948C975A3D0E82E56909C2FD;
IL2CPP_EXTERN_C String_t* _stringLiteral63C2154944E4280E2774EFCF98A75CD57680E656;
IL2CPP_EXTERN_C String_t* _stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5;
IL2CPP_EXTERN_C String_t* _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64;
IL2CPP_EXTERN_C String_t* _stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF;
IL2CPP_EXTERN_C String_t* _stringLiteral83BDDE957990475AC96D3CEAD0905F689C9F73C5;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral9752B1F8ECD74E47277F9984984568B584B27B20;
IL2CPP_EXTERN_C String_t* _stringLiteral981FDAAB8ED00F5CD504C1606E9EE7E61CEA428C;
IL2CPP_EXTERN_C String_t* _stringLiteralA39ED3BFD248E6AB85DE9F42B1A49C153503739A;
IL2CPP_EXTERN_C String_t* _stringLiteralA9A23CC6485ED0C3EA9C8C62BA91E1D1CD5C01C9;
IL2CPP_EXTERN_C String_t* _stringLiteralB28E469948EEF6ABD17ABF274158630CEDAC6C21;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA4550607643A4F93F43D7312ED8D5B5EDE40559;
IL2CPP_EXTERN_C String_t* _stringLiteralE156459C3DD2FE58ED56C06AAB89980DB93E6C6F;
IL2CPP_EXTERN_C String_t* _stringLiteralE2515E3704A7547CA894C95A945C924EA4E8C43D;
IL2CPP_EXTERN_C String_t* _stringLiteralE81722BFBE6B8BE82B89DC88B493505E760280A0;
IL2CPP_EXTERN_C String_t* _stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonClear_SetButtonActive_m8BF78E4A5405DC826D3E4513351A1BEC3DB9792B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonClear_SetButtonClearColor_mAE8CB7BD7F6F86FE3C9F89996056A1788FFC3EC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Cell_SetButtonClear_m5FA7B791ED646FF8C02CE3F443FFFC1977DD6AFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Cell_SetButtonMabyNumber_mD22C29D8082962DF28D5D36487CEF51213130327_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Cell_SetButtonSomeNumber_mBCDF4EAA71F46A3E27A7CBA333147E2B42C5D8C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Cell_SetCanBeSetPlayerNumber_m69E960D007A20C6664520D08ED4A87CA00C1C70A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Cell_SetCellColor_m32772FD59E36AD1AD25D6090F5AB257C5CC93DB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m7FE20EC51F5F0CD242B94967CCF5B8E32BA9FC62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisInterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9_m0CE4A546B55D3AC8774958164CF7BF883E43C385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638_m1662BBD37D423388873F1D0E7CF6C5B3E15EFECC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m97CA2375ACDBDDA203173ADF3FE70D8D3A760A64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mFD549E360DA40C8F8320EAD046D469395C198AD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9242BF83415E907FCF962578CE4F90EB39A5D582_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEDA86F201BDF45741A63879C26E72633540F51A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m3DD3471427343BF35F167E67DAC91CA242DF9181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mEE66CB46A21B71EAE52B3F2ED82E8B95E58D0821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mA812D91FE8B310DE904FBA1F50374F4180617D2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mE59609688990592EC36B84DE9285D85BF2C92EE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_m58B62177CC1CFD40C90E3CE26DB4D79F0B0924BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_mDCA0E76F08ABA3862C853B2A0D375205C721A0AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAds_OnUnityAdsShowClick_m3556B2D88E67D81606223A8A3FF24E27AF42FDDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAds_OnUnityAdsShowFailure_m97BD2885CAC5EDFACBEA7C10EF84AD4BDA33AB56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Number_SetButtonNumberColor_mA8B869F977FCF050CE9E58F0BC1C10B7C6D44323_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Number_SetMabyNumber_m94D75B7C4B5E23F6953CA6B2DEC5B780C3EB6CD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Number_SetSelectNumber_mDE3584003293497E070B828AA256EE610EFD5ED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_mC5A02CF46A925164EB7B42855AEA2AC1CFE002FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F_mC714637F67D4DA69C6B888E141CEC4A6F1663182_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisOpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845_mE20B9E7572A44107CB16CAD4372BDB7B1791C097_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenSomeCell_SetButtonSomeNumber_mB7B65EC73BB824C5BDD07D76CB066D2A9680B688_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenSomeCell_SetColorButunSomeNumber_m9287831D2FF6E005FD18C5CE83B609F9AD908E65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_OnUnityAdsFailedToLoad_m6FA00D274F8E797747879F69588B95660FE5E3FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_OnUnityAdsShowClick_mDA24E76A5CF8A300C0ED8052F7228E17B0D629A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_OnUnityAdsShowFailure_m470A14EF4BE83E1E19B7BEAAD28184F85A4E8068_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_ShowAd_m0543C76EA3C2C2FB4FB6C89AE548951DF8ACF6EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SetMabyNumber_SetButtonMabyNumber_mB55AC0058EA01E28BC7EDE8773263CD645139786_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SetMabyNumber_SetColorButunMabyNumber_m3702DA4CFFC12DD67A0818011C38ADF57EB88E57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Timer_SetBestScore_mB85F43E6A353BB9A45B2F5A6A0FC7583E15167E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTimeU3Ed__7_System_Collections_IEnumerator_Reset_m0A0207CC61D6B1C8BE6BEBE8F902A1A81D99418A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,Cell[]>
struct Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t49E9EC9322A88EA95439E2596BEA512302C5BCCA* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tD7938D487ED5423DC5D6F04CBEAEBB1D0F13DA4A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1E1D02D4995E8207C5810CEAA73463652F4C8650* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject[]>
struct Dictionary_2_tA67244141E978011D16C324808EB61B56151233E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD5BE1378CECC410E1E3AC32486B80F0C477ABCD4* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tD4A4866259ED773EB3C368893E5A6382C8134854* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA4D778970B5DF06EA2D06E32761D2337C203EB74* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Timer/<Time>d__7
struct U3CTimeU3Ed__7_t9C1AF6C0271E0156BADC6432456BB7D01965B641  : public RuntimeObject
{
	// System.Int32 Timer/<Time>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Timer/<Time>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Timer Timer/<Time>d__7::<>4__this
	Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* ___U3CU3E4__this_2;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AudioFX
struct AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource AudioFX::_audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____audioSource_4;
	// UnityEngine.AudioClip AudioFX::_setNumber
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____setNumber_5;
	// UnityEngine.AudioClip AudioFX::_startGame
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____startGame_6;
	// UnityEngine.AudioClip AudioFX::_gameOver
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____gameOver_7;
	// UnityEngine.AudioClip AudioFX::_finishGame
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____finishGame_8;
};

// AudioFXMenu
struct AudioFXMenu_t4498BD4FEBBD68B072684229840F23302A821EC8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip AudioFXMenu::_ckick
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____ckick_4;
	// UnityEngine.AudioSource AudioFXMenu::_audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____audioSource_5;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// ButtonClear
struct ButtonClear_tF60EBD696D6CE10612AF264DDD9D96AC8B3D230E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ButtonClear::_buttonActive
	bool ____buttonActive_4;
	// AudioFX ButtonClear::_audioSource
	AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* ____audioSource_5;
};

// Cell
struct Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Cell::_playerNumber
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____playerNumber_4;
	// UnityEngine.UI.Text Cell::_mabyNumberText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____mabyNumberText_5;
	// UnityEngine.ParticleSystem Cell::_particleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ____particleSystem_6;
	// OpenSomeCell Cell::_someNumber
	OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* ____someNumber_7;
	// GridGenerator Cell::_gameManager
	GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* ____gameManager_8;
	// AudioFX Cell::_audioSource
	AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* ____audioSource_9;
	// System.Int32 Cell::_trueNumber
	int32_t ____trueNumber_10;
	// System.Boolean Cell::_block
	bool ____block_11;
	// System.Boolean Cell::_canBeSetPlayerNumber
	bool ____canBeSetPlayerNumber_12;
	// System.Boolean Cell::_buttonSomeNumber
	bool ____buttonSomeNumber_13;
	// System.Boolean Cell::_buttonMabyNumber
	bool ____buttonMabyNumber_14;
	// System.Boolean Cell::_buttonClear
	bool ____buttonClear_15;
};

struct Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_StaticFields
{
	// System.Int32 Cell::numberButton
	int32_t ___numberButton_16;
};

// GameEvents
struct GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields
{
	// UnityEngine.Events.UnityEvent GameEvents::buttonNumberSetColorEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___buttonNumberSetColorEvent_4;
	// UnityEngine.Events.UnityEvent GameEvents::setCellColorEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___setCellColorEvent_5;
	// UnityEngine.Events.UnityEvent GameEvents::setColorButtonSomeNumberEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___setColorButtonSomeNumberEvent_6;
	// UnityEngine.Events.UnityEvent GameEvents::setColorMabyNumberButtonEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___setColorMabyNumberButtonEvent_7;
	// UnityEngine.Events.UnityEvent GameEvents::setColorClearButtonEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___setColorClearButtonEvent_8;
	// UnityEngine.Events.UnityEvent`1<System.Boolean> GameEvents::buttonNumberSetEvent
	UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* ___buttonNumberSetEvent_9;
	// UnityEngine.Events.UnityEvent`1<System.Boolean> GameEvents::buttonSomeNumberEvent
	UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* ___buttonSomeNumberEvent_10;
	// UnityEngine.Events.UnityEvent`1<System.Boolean> GameEvents::setCanBeSetPlayerNumberEvent
	UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* ___setCanBeSetPlayerNumberEvent_11;
	// UnityEngine.Events.UnityEvent`1<System.Boolean> GameEvents::buttonMabyNumberEvent
	UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* ___buttonMabyNumberEvent_12;
	// UnityEngine.Events.UnityEvent`1<System.Boolean> GameEvents::buttonClearEvent
	UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* ___buttonClearEvent_13;
	// UnityEngine.Events.UnityEvent GameEvents::setBestScore
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___setBestScore_14;
};

// GridGenerator
struct GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GridGenerator::_matrixPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____matrixPrefab_4;
	// UnityEngine.GameObject GridGenerator::_cellPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____cellPrefab_5;
	// UnityEngine.GameObject GridGenerator::_gameOverPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gameOverPanel_6;
	// UnityEngine.GameObject GridGenerator::_finishGame
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____finishGame_7;
	// UnityEngine.GameObject GridGenerator::_numbersPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____numbersPanel_8;
	// UnityAds GridGenerator::_unityAds
	UnityAds_t261657F9CACA9B380AA7BE6215A33A41E0F8292E* ____unityAds_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GridGenerator::_numberButtonList
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____numberButtonList_10;
	// System.Int32 GridGenerator::_hp
	int32_t ____hp_11;
	// UnityEngine.GameObject GridGenerator::_mainGrid
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____mainGrid_12;
	// UnityEngine.GameObject GridGenerator::_soundManager
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____soundManager_13;
	// System.Collections.Generic.Dictionary`2<System.Int32,Cell[]> GridGenerator::_cellsGrid
	Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* ____cellsGrid_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject[]> GridGenerator::_matrices
	Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* ____matrices_15;
	// System.Int32 GridGenerator::_openCountCells
	int32_t ____openCountCells_16;
};

// InterstitialAds
struct InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String InterstitialAds::_androidAdID
	String_t* ____androidAdID_4;
	// System.String InterstitialAds::_iOSAdID
	String_t* ____iOSAdID_5;
	// System.String InterstitialAds::_adID
	String_t* ____adID_6;
};

// MenuManager
struct MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text MenuManager::_yeasyScoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____yeasyScoreText_4;
	// UnityEngine.UI.Text MenuManager::_mediumScoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____mediumScoreText_5;
	// UnityEngine.UI.Text MenuManager::_hardScoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____hardScoreText_6;
};

struct MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields
{
	// System.String MenuManager::easyScore
	String_t* ___easyScore_7;
	// System.String MenuManager::mediumScore
	String_t* ___mediumScore_8;
	// System.String MenuManager::hardScore
	String_t* ___hardScore_9;
	// System.String MenuManager::lvl
	String_t* ___lvl_10;
	// System.Int32 MenuManager::fullSecondsEasyScore
	int32_t ___fullSecondsEasyScore_11;
	// System.Int32 MenuManager::fullSecondsMediumScore
	int32_t ___fullSecondsMediumScore_12;
	// System.Int32 MenuManager::fullSecondsHardScore
	int32_t ___fullSecondsHardScore_13;
};

// Number
struct Number_tEBF6658D4F4914215862D82F55F8186CFC2EA119  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Number::_numberButton
	int32_t ____numberButton_4;
	// AudioFX Number::_audioSource
	AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* ____audioSource_5;
	// System.Boolean Number::_selectNumber
	bool ____selectNumber_6;
	// System.Boolean Number::_mabyNumber
	bool ____mabyNumber_7;
};

// OpenSomeCell
struct OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 OpenSomeCell::_countCanBeOpenCells
	int32_t ____countCanBeOpenCells_4;
	// UnityAds OpenSomeCell::_unityAds
	UnityAds_t261657F9CACA9B380AA7BE6215A33A41E0F8292E* ____unityAds_5;
	// UnityEngine.UI.Text OpenSomeCell::_countCanBeOpenCellsText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____countCanBeOpenCellsText_6;
	// AudioFX OpenSomeCell::_audioSource
	AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* ____audioSource_7;
	// System.Boolean OpenSomeCell::_buttonSomeNumber
	bool ____buttonSomeNumber_8;
};

// PauseGame
struct PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PauseGame::_pausePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____pausePanel_4;
	// System.Boolean PauseGame::_pauseStatus
	bool ____pauseStatus_5;
};

// RewardedAd
struct RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String RewardedAd::_androidAdID
	String_t* ____androidAdID_4;
	// System.String RewardedAd::_iOSAdID
	String_t* ____iOSAdID_5;
	// UnityEngine.UI.Button RewardedAd::_buttonPlus
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____buttonPlus_6;
	// OpenSomeCell RewardedAd::_openSomeCell
	OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* ____openSomeCell_7;
	// System.String RewardedAd::_adID
	String_t* ____adID_8;
};

// SetMabyNumber
struct SetMabyNumber_tE8829E4A0165C7BD47455387370ED6D493BE2AB0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SetMabyNumber::_buttonMabyNumber
	bool ____buttonMabyNumber_4;
	// AudioFX SetMabyNumber::_audioSource
	AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* ____audioSource_5;
};

// Timer
struct Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Timer::_timer
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____timer_4;
	// System.Int32 Timer::_fullSeconds
	int32_t ____fullSeconds_5;
	// System.Int32 Timer::_sec
	int32_t ____sec_6;
	// System.Int32 Timer::_min
	int32_t ____min_7;
	// System.Int32 Timer::_hour
	int32_t ____hour_8;
	// System.String Timer::_time
	String_t* ____time_9;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityAds
struct UnityAds_t261657F9CACA9B380AA7BE6215A33A41E0F8292E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UnityAds::_androidGameID
	String_t* ____androidGameID_4;
	// System.String UnityAds::_iOSGameID
	String_t* ____iOSGameID_5;
	// System.Boolean UnityAds::_testMode
	bool ____testMode_6;
	// InterstitialAds UnityAds::_interstitialAds
	InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* ____interstitialAds_7;
	// RewardedAd UnityAds::_rewardedAd
	RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638* ____rewardedAd_8;
	// System.String UnityAds::_gameID
	String_t* ____gameID_9;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Cell[]
struct CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0  : public RuntimeArray
{
	ALIGN_FIELD (8) Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* m_Items[1];

	inline Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___arg00, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;

// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// System.Void InterstitialAds::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_LoadAd_m67F348FD34C462C6633963450E3E69F22F002283 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Load_m18267376C71DD6875C832B7438C78656142B8F3C (String_t* ___placementId0, RuntimeObject* ___loadListener1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_mC9F749C22FBCAF2E7581A35AA729C19EA6FE78C5 (String_t* ___placementId0, RuntimeObject* ___showListener1, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void RewardedAd::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_LoadAd_mA929FFE0EF81CE1D2CF474DE54860F597FBB569E (RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Enum::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void OpenSomeCell::GetBonus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSomeCell_GetBonus_m4C9B69110A2B76538DA8ED8127FC9A00C95B9040 (OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityAds::InitializeAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAds_InitializeAds_m5354D1FFC0E55D8010443EF78DCD0FEC451A790B (UnityAds_t261657F9CACA9B380AA7BE6215A33A41E0F8292E* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<InterstitialAds>()
inline InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* Component_GetComponent_TisInterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9_m0CE4A546B55D3AC8774958164CF7BF883E43C385 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<RewardedAd>()
inline RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638* Component_GetComponent_TisRewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638_m1662BBD37D423388873F1D0E7CF6C5B3E15EFECC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_m55B4E5A16566DB6F87FDC57B4E75AA708396AF6E (String_t* ___gameId0, bool ___testMode1, RuntimeObject* ___initializationListener2, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void InterstitialAds::ShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_ShowAd_mEB24E644FC8AF6D01A93E02DC8BD02FCDE91D490 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, const RuntimeMethod* method) ;
// System.Void RewardedAd::ShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_ShowAd_m0543C76EA3C2C2FB4FB6C89AE548951DF8ACF6EA (RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Object::FindObjectOfType<AudioFX>()
inline AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* Object_FindObjectOfType_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_mC5A02CF46A925164EB7B42855AEA2AC1CFE002FD (const RuntimeMethod* method)
{
	return ((  AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared)(__this, ___call0, method);
}
// System.Void AudioFX::PlayAudioSetNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioFX_PlayAudioSetNumber_mD3474093EF6547DED30C0DF47E1839E96474BD54 (AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* __this, const RuntimeMethod* method) ;
// System.Boolean ButtonClear::GetButtonActive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ButtonClear_GetButtonActive_m7A90ACD950C3AFDE6858113979FA9329ED96E7F0_inline (ButtonClear_tF60EBD696D6CE10612AF264DDD9D96AC8B3D230E* __this, const RuntimeMethod* method) ;
// System.Void ButtonClear::SetButtonActive(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ButtonClear_SetButtonActive_m8BF78E4A5405DC826D3E4513351A1BEC3DB9792B_inline (ButtonClear_tF60EBD696D6CE10612AF264DDD9D96AC8B3D230E* __this, bool ___buttonClear0, const RuntimeMethod* method) ;
// System.Void ButtonClear::SetButtonClearColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonClear_SetButtonClearColor_mAE8CB7BD7F6F86FE3C9F89996056A1788FFC3EC0 (ButtonClear_tF60EBD696D6CE10612AF264DDD9D96AC8B3D230E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
inline void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, bool, const RuntimeMethod*))UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m1257FED4776F2A33BD7250357D024B3FA3E592EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
inline void UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, const RuntimeMethod*))UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_gshared)(__this, method);
}
// System.Void Cell::SetPlayerNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_SetPlayerNumber_m71E8904F2B923E1370DAEE50E79F017BF6361C93 (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, int32_t ___playerNumber0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<OpenSomeCell>()
inline OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* Object_FindObjectOfType_TisOpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845_mE20B9E7572A44107CB16CAD4372BDB7B1791C097 (const RuntimeMethod* method)
{
	return ((  OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<GridGenerator>()
inline GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* Object_FindObjectOfType_TisGridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F_mC714637F67D4DA69C6B888E141CEC4A6F1663182 (const RuntimeMethod* method)
{
	return ((  GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Component_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m7FE20EC51F5F0CD242B94967CCF5B8E32BA9FC62 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767 (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Boolean Cell::GetCanBeSetPlayerNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cell_GetCanBeSetPlayerNumber_m90C880DE5420D9B16FDF7A78B82838C8E13174E2_inline (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) ;
// System.Boolean Cell::GetButtonSomeNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cell_GetButtonSomeNumber_m24C0719B40DD814EB1923FC7DA695604CEA697FE_inline (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) ;
// System.Boolean Cell::GetButtonMabyNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cell_GetButtonMabyNumber_mB9B107CB25D55C051A1D726EA926796D7A91C238_inline (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) ;
// System.Boolean Cell::GetButtonClear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cell_GetButtonClear_mB9C1F6F9308F2543E6EC1A95BB2FF79F12731894_inline (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) ;
// System.Void Cell::SetNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_SetNumber_m2DEC8F847A202F47905E0F5370C631781F93D7E9 (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) ;
// System.Int32 Cell::GetTrueNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cell_GetTrueNumber_m444FDFC16A0AE9D21CCAC944569D7FDEED6CFB9A_inline (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) ;
// System.Void OpenSomeCell::SetCountCanBeOpenCells()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSomeCell_SetCountCanBeOpenCells_mB639FCED9053DC59CAF05DBA972AA8EA2DE1C7C4 (OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* __this, const RuntimeMethod* method) ;
// System.Void Cell::SetMabyNumberText(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_SetMabyNumberText_mF3BF1210A2D679A0B040C9760CF43A693D345EFF (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, int32_t ___mabyNumberText0, const RuntimeMethod* method) ;
// System.Void Cell::ClearWrongNumberOrMabyNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_ClearWrongNumberOrMabyNumber_m2200D17F47AB7491E649ACFE58BC93B3C76ED783 (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) ;
// System.Void Cell::SetMabyNumberText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_SetMabyNumberText_mA90381786A4244A4217FAA998F20BA8AF24373AD (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) ;
// System.Void Cell::SetPlayerNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_SetPlayerNumber_m0B0673A3C2C8B906B197CE7F742B486859E64A0A (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) ;
// System.Int32 Cell::GetPlayerNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cell_GetPlayerNumber_mEE48CD7740BA0794EE570181D03A2D16ADC84BB0 (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) ;
// System.Void Cell::SetBlock(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cell_SetBlock_m0A371E296D30CBB45D0D13BFEB6CCB136A356FB4_inline (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, bool ___block0, const RuntimeMethod* method) ;
// System.Void GridGenerator::SetOpenCountCells()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_SetOpenCountCells_mC9098B287722BBFDB3B8D021546CE8B6555770C8 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// System.Void GridGenerator::SetDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_SetDamage_m8BC8FDA91915D8AA49E6EC8A075B8CED44C3DD85 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, const RuntimeMethod* method) ;
// System.Boolean Cell::GetBlock()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cell_GetBlock_mB7312C68DC93EF9C37DCA4CE2585DFE635CC2E7D_inline (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9 (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void GridGenerator::GenerateNumbers(System.Collections.Generic.Dictionary`2<System.Int32,Cell[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_GenerateNumbers_mE8592516A24156D792930320A234F041C9FC39FB (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* ___cellsGrid0, const RuntimeMethod* method) ;
// System.Void GridGenerator::RenderingMatrixGame(System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject[]>,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_RenderingMatrixGame_mDA830DF439B0580BC50D0EE37062B17B0A2D2D62 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* ___matrices0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___matrixPrefab1, const RuntimeMethod* method) ;
// System.Void GridGenerator::RandomOpenCells(System.Collections.Generic.Dictionary`2<System.Int32,Cell[]>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_RandomOpenCells_m728F27695C7DB1C3F3E18E837096E8FC482EBAEC (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* ___cellsGrid0, String_t* ___lvl1, const RuntimeMethod* method) ;
// System.Void GridGenerator::PoolMatrix(System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_PoolMatrix_m028EA6B840A963920A1D866A58A0AABAF6CA42DE (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* ___matrices0, const RuntimeMethod* method) ;
// System.Void GridGenerator::SpawnNumberButtonList(System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_SpawnNumberButtonList_m75649DB8A94945AF953BB0F409A0B00849865032 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___numberButtonList0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Int32 GridGenerator::GetOpenCountCells()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GridGenerator_GetOpenCountCells_m18B9AC75B7BECEE091793139675F09FBD8DD9B27_inline (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, const RuntimeMethod* method) ;
// System.Void UnityAds::PlayInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAds_PlayInterstitialAd_m589D4A92FBA59D323D1462BF3C9822F541D91DCC (UnityAds_t261657F9CACA9B380AA7BE6215A33A41E0F8292E* __this, const RuntimeMethod* method) ;
// System.Void GridGenerator::FinishGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_FinishGame_mF3426A4AE16AEB1A6AD76991FAAF7330424D29D2 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, const RuntimeMethod* method) ;
// System.Int32 GridGenerator::GetHP()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GridGenerator_GetHP_mB6E115AF359DF076D5683F4AC8A2772B39335763_inline (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, const RuntimeMethod* method) ;
// System.Void GridGenerator::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_GameOver_m65BC05A1E3EE6873FAB4461C215232C5CA714EE0 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<AudioFX>()
inline AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* GameObject_GetComponent_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_m58B62177CC1CFD40C90E3CE26DB4D79F0B0924BC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void AudioFX::PlayAudioGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioFX_PlayAudioGameOver_m3F11A9E7DE988164F4F355448FC5F4797AA2E651 (AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* __this, const RuntimeMethod* method) ;
// System.Void AudioFX::PlayAudioFinishGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioFX_PlayAudioFinishGame_m8AD76AFD94F09FD99959DA7FA44E05EF6A348760 (AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject[]>::get_Item(TKey)
inline GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* Dictionary_2_get_Item_mA812D91FE8B310DE904FBA1F50374F4180617D2D (Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* (*) (Dictionary_2_tA67244141E978011D16C324808EB61B56151233E*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___key0, method);
}
// System.Void GridGenerator::SpawnMatrix(System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject[]>,UnityEngine.GameObject,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_SpawnMatrix_m62E8E169B4D74C8473C2B31B5B61C5AFE3F64F17 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* ___matrices0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___matrixPrefab1, int32_t ___indexRow2, int32_t ___indexMatrix3, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject[]>::get_Count()
inline int32_t Dictionary_2_get_Count_mEE66CB46A21B71EAE52B3F2ED82E8B95E58D0821 (Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA67244141E978011D16C324808EB61B56151233E*, const RuntimeMethod*))Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Cell[]>::get_Count()
inline int32_t Dictionary_2_get_Count_m3DD3471427343BF35F167E67DAC91CA242DF9181 (Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8*, const RuntimeMethod*))Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared)(__this, method);
}
// System.Void Cell::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell__ctor_m97290B444F71D07D2F674DCCE44D6BFDE14FD0C7 (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, int32_t ___trueNumber0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// Cell[] GridGenerator::GenerationRandomRow(System.Collections.Generic.Dictionary`2<System.Int32,Cell[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* GridGenerator_GenerationRandomRow_m3A8729836D1D6C4AF53429A2BDBF1B6353416EC3 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* ___cellsGrid0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Cell[]>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mE59609688990592EC36B84DE9285D85BF2C92EE0 (Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* __this, int32_t ___key0, CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8*, int32_t, CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Cell[]>::get_Item(TKey)
inline CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B (Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* (*) (Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___key0, method);
}
// System.Void GridGenerator::MatrixShuffle(System.Collections.Generic.Dictionary`2<System.Int32,Cell[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_MatrixShuffle_mB7B425A6506453C4110494C39130A5222FD1C7C7 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* ___cellsGrid0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Cell>()
inline Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* GameObject_GetComponent_TisCell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_mDCA0E76F08ABA3862C853B2A0D375205C721A0AF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Cell::SetTrueNumber(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cell_SetTrueNumber_mDD4199345406DBE56526747024968AF4F7A580DC_inline (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, int32_t ___trueNumber0, const RuntimeMethod* method) ;
// System.Void GridGenerator::SpawnCell(UnityEngine.GameObject,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_SpawnCell_mD035BCE7B6FB11FA9428EC729D716E04574D4257 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___matrixPrefab0, int32_t ___indexRowNumbers1, int32_t ___indexNumber2, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Cell[]>::.ctor()
inline void Dictionary_2__ctor_mEDA86F201BDF45741A63879C26E72633540F51A0 (Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Cell[]>::Add(TKey,TValue)
inline void Dictionary_2_Add_m97CA2375ACDBDDA203173ADF3FE70D8D3A760A64 (Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* __this, int32_t ___key0, CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8*, int32_t, CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject[]>::.ctor()
inline void Dictionary_2__ctor_m9242BF83415E907FCF962578CE4F90EB39A5D582 (Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA67244141E978011D16C324808EB61B56151233E*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject[]>::Add(TKey,TValue)
inline void Dictionary_2_Add_mFD549E360DA40C8F8320EAD046D469395C198AD3 (Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* __this, int32_t ___key0, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA67244141E978011D16C324808EB61B56151233E*, int32_t, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Number::GetSelectNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Number_GetSelectNumber_mA7FCA68C0B95196A51CCAE44FDD22262A1BBCCBB_inline (Number_tEBF6658D4F4914215862D82F55F8186CFC2EA119* __this, const RuntimeMethod* method) ;
// System.Boolean Number::GetMabyNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Number_GetMabyNumber_mA065DADA1C77A208FDC535504EB1C6D3A6B03388_inline (Number_tEBF6658D4F4914215862D82F55F8186CFC2EA119* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Number::SetSelectNumber(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Number_SetSelectNumber_mDE3584003293497E070B828AA256EE610EFD5ED5_inline (Number_tEBF6658D4F4914215862D82F55F8186CFC2EA119* __this, bool ___selectNumber0, const RuntimeMethod* method) ;
// System.Void MenuManager::LoadScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_LoadScore_mEED024EE4A7B207BD797228E21D763AC06B3A86D (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) ;
// System.Void MenuManager::SetScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_SetScore_mAFAC1F072897A6BFBAF9342F50CF456A7A526AA3 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mC671EDA77D8D35BE514817F54950630327A74F63 (String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::DeleteAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteAll_mBB63C28A69EA934DC7DF12336F8D5341BF6CA521 (const RuntimeMethod* method) ;
// System.Void OpenSomeCell::SetCountCanBeOpenCellsText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSomeCell_SetCountCanBeOpenCellsText_m7D7104BD2EF9DCC13B9C7C0965B704C247DE8CD9 (OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* __this, const RuntimeMethod* method) ;
// System.Boolean OpenSomeCell::GetButtonSomeNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OpenSomeCell_GetButtonSomeNumber_m1157231114C7A26DEAE52D6508A3CCE545E85135_inline (OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* __this, const RuntimeMethod* method) ;
// System.Int32 OpenSomeCell::GetCountCanBeOpenCells()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OpenSomeCell_GetCountCanBeOpenCells_m38C047CA0BE8A46046FF689A1315D5470FE6AE9D_inline (OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* __this, const RuntimeMethod* method) ;
// System.Void UnityAds::LoarRewardedAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAds_LoarRewardedAds_m3EE638FB65616180BD89D748BC4E9550C314A674 (UnityAds_t261657F9CACA9B380AA7BE6215A33A41E0F8292E* __this, const RuntimeMethod* method) ;
// System.Void OpenSomeCell::SetButtonSomeNumber(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenSomeCell_SetButtonSomeNumber_mB7B65EC73BB824C5BDD07D76CB066D2A9680B688_inline (OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* __this, bool ___buttonSomeNumber0, const RuntimeMethod* method) ;
// System.Void OpenSomeCell::SetColorButunSomeNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSomeCell_SetColorButunSomeNumber_m9287831D2FF6E005FD18C5CE83B609F9AD908E65 (OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* __this, const RuntimeMethod* method) ;
// System.Boolean PauseGame::GetPauseStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PauseGame_GetPauseStatus_mA84BDA15503876007E14CAB643302FC36942F25A_inline (PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF* __this, const RuntimeMethod* method) ;
// System.Void PauseGame::SetPauseStatus(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PauseGame_SetPauseStatus_m470D01A4090F81F99B7757EC31BBAF191C947DFF_inline (PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF* __this, bool ___pauseStatus0, const RuntimeMethod* method) ;
// System.Void PauseGame::SetGamePause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseGame_SetGamePause_mDE448E068293D6DB107802C1CB8959D807C9B146 (PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF* __this, const RuntimeMethod* method) ;
// System.Void PauseGame::SetGameUnPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseGame_SetGameUnPause_mEA347B4D4501D3307A30F5A36C1BF21F139A85E9 (PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C (float ___value0, const RuntimeMethod* method) ;
// System.Boolean SetMabyNumber::GetButtonMabyNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SetMabyNumber_GetButtonMabyNumber_m0B52F095F2C472CC85FD421388C685C4A22603EA_inline (SetMabyNumber_tE8829E4A0165C7BD47455387370ED6D493BE2AB0* __this, const RuntimeMethod* method) ;
// System.Void SetMabyNumber::SetButtonMabyNumber(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SetMabyNumber_SetButtonMabyNumber_mB55AC0058EA01E28BC7EDE8773263CD645139786_inline (SetMabyNumber_tE8829E4A0165C7BD47455387370ED6D493BE2AB0* __this, bool ___buttonMabyNumber0, const RuntimeMethod* method) ;
// System.Void SetMabyNumber::SetColorButunMabyNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetMabyNumber_SetColorButunMabyNumber_m3702DA4CFFC12DD67A0818011C38ADF57EB88E57 (SetMabyNumber_tE8829E4A0165C7BD47455387370ED6D493BE2AB0* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Collections.IEnumerator Timer::Time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Timer_Time_m1A7315C47154C967038256E3BDE9382D0742CB30 (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Timer/<Time>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeU3Ed__7__ctor_mA65F58B6E3148AECF373739A1735650F7783AF08 (U3CTimeU3Ed__7_t9C1AF6C0271E0156BADC6432456BB7D01965B641* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void MenuManager::SaveScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_SaveScore_m18E24205E5E5C557966AEC0E1642E923070F3010 (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
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
// System.Void InterstitialAds::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_Awake_m5F00E0DC2478380B06DAA31CE4AE02129394DFB1 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, const RuntimeMethod* method) 
{
	InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* G_B2_0 = NULL;
	InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* G_B3_1 = NULL;
	{
		// _adID = (Application.platform == RuntimePlatform.IPhonePlayer) ? _iOSAdID : _androidAdID;
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = __this->____androidAdID_4;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0011:
	{
		String_t* L_2 = __this->____iOSAdID_5;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		G_B3_1->____adID_6 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->____adID_6), (void*)G_B3_0);
		// LoadAd();
		InterstitialAds_LoadAd_m67F348FD34C462C6633963450E3E69F22F002283(__this, NULL);
		// }
		return;
	}
}
// System.Void InterstitialAds::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_LoadAd_m67F348FD34C462C6633963450E3E69F22F002283 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Advertisement.Load(_adID, this);
		String_t* L_0 = __this->____adID_6;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Load_m18267376C71DD6875C832B7438C78656142B8F3C(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void InterstitialAds::ShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_ShowAd_mEB24E644FC8AF6D01A93E02DC8BD02FCDE91D490 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Advertisement.Show(_adID, this);
		String_t* L_0 = __this->____adID_6;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_mC9F749C22FBCAF2E7581A35AA729C19EA6FE78C5(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void InterstitialAds::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_OnUnityAdsShowFailure_m97BD2885CAC5EDFACBEA7C10EF84AD4BDA33AB56 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, String_t* ___placementId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InterstitialAds_OnUnityAdsShowFailure_m97BD2885CAC5EDFACBEA7C10EF84AD4BDA33AB56_RuntimeMethod_var)));
	}
}
// System.Void InterstitialAds::OnUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_OnUnityAdsShowStart_m12DCBF7E9EF81BEB064861EF8E0F29008A1B3D63 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63C2154944E4280E2774EFCF98A75CD57680E656);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnUnityAdsShowStart");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral63C2154944E4280E2774EFCF98A75CD57680E656, NULL);
		// }
		return;
	}
}
// System.Void InterstitialAds::OnUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_OnUnityAdsShowClick_m3556B2D88E67D81606223A8A3FF24E27AF42FDDB (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InterstitialAds_OnUnityAdsShowClick_m3556B2D88E67D81606223A8A3FF24E27AF42FDDB_RuntimeMethod_var)));
	}
}
// System.Void InterstitialAds::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_OnUnityAdsShowComplete_mA2D0DE10A159F9B78231F924844CE0552177BB49 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, String_t* ___placementId0, int32_t ___showCompletionState1, const RuntimeMethod* method) 
{
	{
		// LoadAd();
		InterstitialAds_LoadAd_m67F348FD34C462C6633963450E3E69F22F002283(__this, NULL);
		// }
		return;
	}
}
// System.Void InterstitialAds::OnUnityAdsAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_OnUnityAdsAdLoaded_m088C1B467EC78B30881E2D01E1FE18EBB6E32A13 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE81722BFBE6B8BE82B89DC88B493505E760280A0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnUnityAdsAdLoaded");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralE81722BFBE6B8BE82B89DC88B493505E760280A0, NULL);
		// }
		return;
	}
}
// System.Void InterstitialAds::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_OnUnityAdsFailedToLoad_mF8F2ACD38F2E26048596215DE34916560F8B4B04 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, String_t* ___placementId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA39ED3BFD248E6AB85DE9F42B1A49C153503739A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnUnityAdsFailedToLoad");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralA39ED3BFD248E6AB85DE9F42B1A49C153503739A, NULL);
		// }
		return;
	}
}
// System.Void InterstitialAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds__ctor_mD9070CCFDDB37CADB08E2150095A562C8C7D16D4 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3915BCEE1104CEC85AA6966E6C98DA6ED321B9DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string _androidAdID = "Interstitial_Android";
		__this->____androidAdID_4 = _stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____androidAdID_4), (void*)_stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642);
		// [SerializeField] private string _iOSAdID = "Interstitial_iOS";
		__this->____iOSAdID_5 = _stringLiteral3915BCEE1104CEC85AA6966E6C98DA6ED321B9DB;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____iOSAdID_5), (void*)_stringLiteral3915BCEE1104CEC85AA6966E6C98DA6ED321B9DB);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RewardedAd::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_Awake_mA4F9105EC375AC85CCC3779CE0363820EC036DEB (RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638* __this, const RuntimeMethod* method) 
{
	RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638* G_B2_0 = NULL;
	RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638* G_B3_1 = NULL;
	{
		// _adID = (Application.platform == RuntimePlatform.IPhonePlayer) ? _iOSAdID : _androidAdID;
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = __this->____androidAdID_4;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0011:
	{
		String_t* L_2 = __this->____iOSAdID_5;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		G_B3_1->____adID_8 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->____adID_8), (void*)G_B3_0);
		// _buttonPlus.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->____buttonPlus_6;
		NullCheck(L_3);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void RewardedAd::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_LoadAd_mA929FFE0EF81CE1D2CF474DE54860F597FBB569E (RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Advertisement.Load(_adID, this);
		String_t* L_0 = __this->____adID_8;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Load_m18267376C71DD6875C832B7438C78656142B8F3C(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void RewardedAd::ShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_ShowAd_m0543C76EA3C2C2FB4FB6C89AE548951DF8ACF6EA (RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _buttonPlus.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____buttonPlus_6;
		NullCheck(L_0);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, (bool)0, NULL);
		// Advertisement.Show(_adID, this);
		String_t* L_1 = __this->____adID_8;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_mC9F749C22FBCAF2E7581A35AA729C19EA6FE78C5(L_1, __this, NULL);
		// }
		return;
	}
}
// System.Void RewardedAd::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_OnUnityAdsShowFailure_m470A14EF4BE83E1E19B7BEAAD28184F85A4E8068 (RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638* __this, String_t* ___placementId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RewardedAd_OnUnityAdsShowFailure_m470A14EF4BE83E1E19B7BEAAD28184F85A4E8068_RuntimeMethod_var)));
	}
}
// System.Void RewardedAd::OnUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_OnUnityAdsShowStart_m480C40B2D180E67055A523E263C95E33585AF2DF (RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	{
		// LoadAd();
		RewardedAd_LoadAd_mA929FFE0EF81CE1D2CF474DE54860F597FBB569E(__this, NULL);
		// }
		return;
	}
}
// System.Void RewardedAd::OnUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_OnUnityAdsShowClick_mDA24E76A5CF8A300C0ED8052F7228E17B0D629A6 (RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RewardedAd_OnUnityAdsShowClick_mDA24E76A5CF8A300C0ED8052F7228E17B0D629A6_RuntimeMethod_var)));
	}
}
// System.Void RewardedAd::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_OnUnityAdsShowComplete_m3B12C32243FA8E67224DFDB8FE60D2085303579F (RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638* __this, String_t* ___placementId0, int32_t ___showCompletionState1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (placementId.Equals(_adID) && showCompletionState.Equals(UnityAdsShowCompletionState.COMPLETED))
		String_t* L_0 = ___placementId0;
		String_t* L_1 = __this->____adID_8;
		NullCheck(L_0);
		bool L_2;
		L_2 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = 1;
		RuntimeObject* L_4 = Box(UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var, &L_3);
		Il2CppFakeBox<int32_t> L_5(UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var, (&___showCompletionState1));
		bool L_6;
		L_6 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), L_4, NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		// _openSomeCell.GetBonus();
		OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* L_7 = __this->____openSomeCell_7;
		NullCheck(L_7);
		OpenSomeCell_GetBonus_m4C9B69110A2B76538DA8ED8127FC9A00C95B9040(L_7, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void RewardedAd::OnUnityAdsAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_OnUnityAdsAdLoaded_mD6B0D4E41304E1EC677DE7C7311D2C1267F888E6 (RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_ShowAd_m0543C76EA3C2C2FB4FB6C89AE548951DF8ACF6EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (placementId.Equals(_adID))
		String_t* L_0 = ___placementId0;
		String_t* L_1 = __this->____adID_8;
		NullCheck(L_0);
		bool L_2;
		L_2 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// _buttonPlus.onClick.AddListener(ShowAd);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->____buttonPlus_6;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)RewardedAd_ShowAd_m0543C76EA3C2C2FB4FB6C89AE548951DF8ACF6EA_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// _buttonPlus.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->____buttonPlus_6;
		NullCheck(L_6);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_6, (bool)1, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void RewardedAd::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_OnUnityAdsFailedToLoad_m6FA00D274F8E797747879F69588B95660FE5E3FD (RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638* __this, String_t* ___placementId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RewardedAd_OnUnityAdsFailedToLoad_m6FA00D274F8E797747879F69588B95660FE5E3FD_RuntimeMethod_var)));
	}
}
// System.Void RewardedAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd__ctor_mD8119DD79DD9B55F3DD1ABAC31156A6016A23B4B (RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string _androidAdID = "Rewarded_Android";
		__this->____androidAdID_4 = _stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____androidAdID_4), (void*)_stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF);
		// [SerializeField] private string _iOSAdID = "Rewarded_iOS";
		__this->____iOSAdID_5 = _stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____iOSAdID_5), (void*)_stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityAds::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAds_Awake_mF730B19D8D9927269588420BA4C6B2C11BCBB1CC (UnityAds_t261657F9CACA9B380AA7BE6215A33A41E0F8292E* __this, const RuntimeMethod* method) 
{
	{
		// InitializeAds();
		UnityAds_InitializeAds_m5354D1FFC0E55D8010443EF78DCD0FEC451A790B(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityAds::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAds_Start_mC5D3AEE56DA6F872F3CFA210A9198E62A009D3D1 (UnityAds_t261657F9CACA9B380AA7BE6215A33A41E0F8292E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9_m0CE4A546B55D3AC8774958164CF7BF883E43C385_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638_m1662BBD37D423388873F1D0E7CF6C5B3E15EFECC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _interstitialAds = GetComponent<InterstitialAds>();
		InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* L_0;
		L_0 = Component_GetComponent_TisInterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9_m0CE4A546B55D3AC8774958164CF7BF883E43C385(__this, Component_GetComponent_TisInterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9_m0CE4A546B55D3AC8774958164CF7BF883E43C385_RuntimeMethod_var);
		__this->____interstitialAds_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interstitialAds_7), (void*)L_0);
		// _rewardedAd = GetComponent<RewardedAd>();
		RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638* L_1;
		L_1 = Component_GetComponent_TisRewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638_m1662BBD37D423388873F1D0E7CF6C5B3E15EFECC(__this, Component_GetComponent_TisRewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638_m1662BBD37D423388873F1D0E7CF6C5B3E15EFECC_RuntimeMethod_var);
		__this->____rewardedAd_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rewardedAd_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnityAds::InitializeAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAds_InitializeAds_m5354D1FFC0E55D8010443EF78DCD0FEC451A790B (UnityAds_t261657F9CACA9B380AA7BE6215A33A41E0F8292E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAds_t261657F9CACA9B380AA7BE6215A33A41E0F8292E* G_B2_0 = NULL;
	UnityAds_t261657F9CACA9B380AA7BE6215A33A41E0F8292E* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	UnityAds_t261657F9CACA9B380AA7BE6215A33A41E0F8292E* G_B3_1 = NULL;
	{
		// _gameID = (Application.platform == RuntimePlatform.IPhonePlayer) ? _iOSGameID : _androidGameID;
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = __this->____androidGameID_4;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0011:
	{
		String_t* L_2 = __this->____iOSGameID_5;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		G_B3_1->____gameID_9 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->____gameID_9), (void*)G_B3_0);
		// Advertisement.Initialize(_gameID, _testMode, this);
		String_t* L_3 = __this->____gameID_9;
		bool L_4 = __this->____testMode_6;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Initialize_m55B4E5A16566DB6F87FDC57B4E75AA708396AF6E(L_3, L_4, __this, NULL);
		// }
		return;
	}
}
// System.Void UnityAds::OnInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAds_OnInitializationComplete_m28B9FE4A9019A67FAD2207A297E3DEE0BCEF01A9 (UnityAds_t261657F9CACA9B380AA7BE6215A33A41E0F8292E* __this, const RuntimeMethod* method) 
{
	{
		// _rewardedAd.LoadAd();
		RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638* L_0 = __this->____rewardedAd_8;
		NullCheck(L_0);
		RewardedAd_LoadAd_mA929FFE0EF81CE1D2CF474DE54860F597FBB569E(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityAds::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAds_OnInitializationFailed_mA693F4AB755946840EDD859DC3A655FAE721C515 (UnityAds_t261657F9CACA9B380AA7BE6215A33A41E0F8292E* __this, int32_t ___error0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14273CC7963ABCDA970ED8603590C265496E3778);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Unity Ads initialization is not complete.{error.ToString()} = {message}");
		Il2CppFakeBox<int32_t> L_0(UnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_il2cpp_TypeInfo_var, (&___error0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		String_t* L_2 = ___message1;
		String_t* L_3;
		L_3 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral14273CC7963ABCDA970ED8603590C265496E3778, L_1, _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityAds::PlayInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAds_PlayInterstitialAd_m589D4A92FBA59D323D1462BF3C9822F541D91DCC (UnityAds_t261657F9CACA9B380AA7BE6215A33A41E0F8292E* __this, const RuntimeMethod* method) 
{
	{
		// _interstitialAds.ShowAd();
		InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* L_0 = __this->____interstitialAds_7;
		NullCheck(L_0);
		InterstitialAds_ShowAd_mEB24E644FC8AF6D01A93E02DC8BD02FCDE91D490(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityAds::PlayRewardedAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAds_PlayRewardedAd_m0D632374B83D82FEC9BD73BD85E95926064ED2DC (UnityAds_t261657F9CACA9B380AA7BE6215A33A41E0F8292E* __this, const RuntimeMethod* method) 
{
	{
		// _rewardedAd.ShowAd();
		RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638* L_0 = __this->____rewardedAd_8;
		NullCheck(L_0);
		RewardedAd_ShowAd_m0543C76EA3C2C2FB4FB6C89AE548951DF8ACF6EA(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityAds::LoarRewardedAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAds_LoarRewardedAds_m3EE638FB65616180BD89D748BC4E9550C314A674 (UnityAds_t261657F9CACA9B380AA7BE6215A33A41E0F8292E* __this, const RuntimeMethod* method) 
{
	{
		// _rewardedAd.LoadAd();
		RewardedAd_t61603E68B32BB7020D8994B7987B431ECEC65638* L_0 = __this->____rewardedAd_8;
		NullCheck(L_0);
		RewardedAd_LoadAd_mA929FFE0EF81CE1D2CF474DE54860F597FBB569E(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAds__ctor_m9578644B67917E4ED6BF3D5D9A17BD89C90AC672 (UnityAds_t261657F9CACA9B380AA7BE6215A33A41E0F8292E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0439B60B3710197EF1DD42F78C1F1D4997DA0444);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE156459C3DD2FE58ED56C06AAB89980DB93E6C6F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string _androidGameID = "4712697";
		__this->____androidGameID_4 = _stringLiteral0439B60B3710197EF1DD42F78C1F1D4997DA0444;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____androidGameID_4), (void*)_stringLiteral0439B60B3710197EF1DD42F78C1F1D4997DA0444);
		// [SerializeField] private string _iOSGameID = "4712696";
		__this->____iOSGameID_5 = _stringLiteralE156459C3DD2FE58ED56C06AAB89980DB93E6C6F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____iOSGameID_5), (void*)_stringLiteralE156459C3DD2FE58ED56C06AAB89980DB93E6C6F);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void AudioFX::PlayAudioSetNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioFX_PlayAudioSetNumber_mD3474093EF6547DED30C0DF47E1839E96474BD54 (AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* __this, const RuntimeMethod* method) 
{
	{
		// _audioSource.PlayOneShot(_setNumber);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____audioSource_4;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->____setNumber_5;
		NullCheck(L_0);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void AudioFX::PlayAudioGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioFX_PlayAudioGameOver_m3F11A9E7DE988164F4F355448FC5F4797AA2E651 (AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* __this, const RuntimeMethod* method) 
{
	{
		// _audioSource.PlayOneShot(_gameOver);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____audioSource_4;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->____gameOver_7;
		NullCheck(L_0);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void AudioFX::PlayAudioFinishGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioFX_PlayAudioFinishGame_m8AD76AFD94F09FD99959DA7FA44E05EF6A348760 (AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* __this, const RuntimeMethod* method) 
{
	{
		// _audioSource.PlayOneShot(_finishGame);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____audioSource_4;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->____finishGame_8;
		NullCheck(L_0);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void AudioFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioFX__ctor_m8EE4B39BC6E4B2C98CC9F9DBFC2CC37FD85583C1 (AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void AudioFXMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioFXMenu_Start_m4E4B907A27D192451D7185FD3EF623C98078BA7A (AudioFXMenu_t4498BD4FEBBD68B072684229840F23302A821EC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->____audioSource_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioSource_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void AudioFXMenu::PlayAudioClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioFXMenu_PlayAudioClick_m787C061C4FCA3B54AC3030EAD348191CBF75E153 (AudioFXMenu_t4498BD4FEBBD68B072684229840F23302A821EC8* __this, const RuntimeMethod* method) 
{
	{
		// _audioSource.PlayOneShot(_ckick);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____audioSource_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->____ckick_4;
		NullCheck(L_0);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void AudioFXMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioFXMenu__ctor_m0DB86DF88CB455EBC08FABA66FD138698E50D4C2 (AudioFXMenu_t4498BD4FEBBD68B072684229840F23302A821EC8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ButtonClear::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonClear_Start_m7A266E6662E3EA244F82578C0BF09DF729636242 (ButtonClear_tF60EBD696D6CE10612AF264DDD9D96AC8B3D230E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonClear_SetButtonActive_m8BF78E4A5405DC826D3E4513351A1BEC3DB9792B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonClear_SetButtonClearColor_mAE8CB7BD7F6F86FE3C9F89996056A1788FFC3EC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_mC5A02CF46A925164EB7B42855AEA2AC1CFE002FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _audioSource = FindObjectOfType<AudioFX>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* L_0;
		L_0 = Object_FindObjectOfType_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_mC5A02CF46A925164EB7B42855AEA2AC1CFE002FD(Object_FindObjectOfType_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_mC5A02CF46A925164EB7B42855AEA2AC1CFE002FD_RuntimeMethod_var);
		__this->____audioSource_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioSource_5), (void*)L_0);
		// GameEvents.buttonClearEvent.AddListener(SetButtonActive);
		il2cpp_codegen_runtime_class_init_inline(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_1 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonClearEvent_13;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_2 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_2, __this, (intptr_t)((void*)ButtonClear_SetButtonActive_m8BF78E4A5405DC826D3E4513351A1BEC3DB9792B_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_1, L_2, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// GameEvents.setColorClearButtonEvent.AddListener(SetButtonClearColor);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setColorClearButtonEvent_8;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)ButtonClear_SetButtonClearColor_mAE8CB7BD7F6F86FE3C9F89996056A1788FFC3EC0_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void ButtonClear::SetButtonActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonClear_SetButtonActive_m8BF78E4A5405DC826D3E4513351A1BEC3DB9792B (ButtonClear_tF60EBD696D6CE10612AF264DDD9D96AC8B3D230E* __this, bool ___buttonClear0, const RuntimeMethod* method) 
{
	{
		// private void SetButtonActive(bool buttonClear) => _buttonActive = buttonClear;
		bool L_0 = ___buttonClear0;
		__this->____buttonActive_4 = L_0;
		return;
	}
}
// System.Boolean ButtonClear::GetButtonActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonClear_GetButtonActive_m7A90ACD950C3AFDE6858113979FA9329ED96E7F0 (ButtonClear_tF60EBD696D6CE10612AF264DDD9D96AC8B3D230E* __this, const RuntimeMethod* method) 
{
	{
		// private bool GetButtonActive() => _buttonActive;
		bool L_0 = __this->____buttonActive_4;
		return L_0;
	}
}
// System.Void ButtonClear::ClickOnClearButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonClear_ClickOnClearButton_m0D44C2E32E02C468C25D1396261CC8A4D6146EBF (ButtonClear_tF60EBD696D6CE10612AF264DDD9D96AC8B3D230E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _audioSource.PlayAudioSetNumber();
		AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* L_0 = __this->____audioSource_5;
		NullCheck(L_0);
		AudioFX_PlayAudioSetNumber_mD3474093EF6547DED30C0DF47E1839E96474BD54(L_0, NULL);
		// SetButtonActive(!GetButtonActive());
		bool L_1;
		L_1 = ButtonClear_GetButtonActive_m7A90ACD950C3AFDE6858113979FA9329ED96E7F0_inline(__this, NULL);
		ButtonClear_SetButtonActive_m8BF78E4A5405DC826D3E4513351A1BEC3DB9792B_inline(__this, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), NULL);
		// SetButtonClearColor();
		ButtonClear_SetButtonClearColor_mAE8CB7BD7F6F86FE3C9F89996056A1788FFC3EC0(__this, NULL);
		// Cell.numberButton = 0;
		((Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_StaticFields*)il2cpp_codegen_static_fields_for(Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var))->___numberButton_16 = 0;
		// GameEvents.setCanBeSetPlayerNumberEvent.Invoke(false);
		il2cpp_codegen_runtime_class_init_inline(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_2 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCanBeSetPlayerNumberEvent_11;
		NullCheck(L_2);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_2, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.buttonMabyNumberEvent.Invoke(false);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_3 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonMabyNumberEvent_12;
		NullCheck(L_3);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_3, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.buttonSomeNumberEvent.Invoke(false);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_4 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonSomeNumberEvent_10;
		NullCheck(L_4);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_4, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.buttonNumberSetEvent.Invoke(false);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_5 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonNumberSetEvent_9;
		NullCheck(L_5);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_5, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.buttonClearEvent.Invoke(GetButtonActive());
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_6 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonClearEvent_13;
		bool L_7;
		L_7 = ButtonClear_GetButtonActive_m7A90ACD950C3AFDE6858113979FA9329ED96E7F0_inline(__this, NULL);
		NullCheck(L_6);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_6, L_7, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.setColorButtonSomeNumberEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_8 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setColorButtonSomeNumberEvent_6;
		NullCheck(L_8);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_8, NULL);
		// GameEvents.setColorMabyNumberButtonEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_9 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setColorMabyNumberButtonEvent_7;
		NullCheck(L_9);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_9, NULL);
		// GameEvents.buttonNumberSetColorEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_10 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonNumberSetColorEvent_4;
		NullCheck(L_10);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_10, NULL);
		// GameEvents.setCellColorEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_11 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCellColorEvent_5;
		NullCheck(L_11);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_11, NULL);
		// }
		return;
	}
}
// System.Void ButtonClear::SetButtonClearColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonClear_SetButtonClearColor_mAE8CB7BD7F6F86FE3C9F89996056A1788FFC3EC0 (ButtonClear_tF60EBD696D6CE10612AF264DDD9D96AC8B3D230E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetButtonActive())
		bool L_0;
		L_0 = ButtonClear_GetButtonActive_m7A90ACD950C3AFDE6858113979FA9329ED96E7F0_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// gameObject.GetComponent<Image>().color = Color.cyan;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2;
		L_2 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_1, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_cyan_m1257FED4776F2A33BD7250357D024B3FA3E592EB_inline(NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		return;
	}

IL_001e:
	{
		// gameObject.GetComponent<Image>().color = Color.white;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_4, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// }
		return;
	}
}
// System.Void ButtonClear::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonClear__ctor_mD36E72C849058CB15DB97E79C35D21F917DBFF85 (ButtonClear_tF60EBD696D6CE10612AF264DDD9D96AC8B3D230E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GameEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents__ctor_mB4B47DA5529A1F0FC3524DCE716EF264ACDF650E (GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void GameEvents::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents__cctor_m33DB7BEC47848FBBD8A3D85529C227A9D3BADDD0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UnityEvent buttonNumberSetColorEvent = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonNumberSetColorEvent_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonNumberSetColorEvent_4), (void*)L_0);
		// public static UnityEvent setCellColorEvent = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCellColorEvent_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCellColorEvent_5), (void*)L_1);
		// public static UnityEvent setColorButtonSomeNumberEvent = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_2, NULL);
		((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setColorButtonSomeNumberEvent_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setColorButtonSomeNumberEvent_6), (void*)L_2);
		// public static UnityEvent setColorMabyNumberButtonEvent = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_3, NULL);
		((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setColorMabyNumberButtonEvent_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setColorMabyNumberButtonEvent_7), (void*)L_3);
		// public static UnityEvent setColorClearButtonEvent = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_4, NULL);
		((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setColorClearButtonEvent_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setColorClearButtonEvent_8), (void*)L_4);
		// public static UnityEvent<bool> buttonNumberSetEvent = new UnityEvent<bool>();
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_5 = (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*)il2cpp_codegen_object_new(UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934(L_5, UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var);
		((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonNumberSetEvent_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonNumberSetEvent_9), (void*)L_5);
		// public static UnityEvent<bool> buttonSomeNumberEvent = new UnityEvent<bool>();
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_6 = (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*)il2cpp_codegen_object_new(UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934(L_6, UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var);
		((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonSomeNumberEvent_10 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonSomeNumberEvent_10), (void*)L_6);
		// public static UnityEvent<bool> setCanBeSetPlayerNumberEvent = new UnityEvent<bool>();
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_7 = (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*)il2cpp_codegen_object_new(UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934(L_7, UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var);
		((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCanBeSetPlayerNumberEvent_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCanBeSetPlayerNumberEvent_11), (void*)L_7);
		// public static UnityEvent<bool> buttonMabyNumberEvent = new UnityEvent<bool>();
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_8 = (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*)il2cpp_codegen_object_new(UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934(L_8, UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var);
		((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonMabyNumberEvent_12 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonMabyNumberEvent_12), (void*)L_8);
		// public static UnityEvent<bool> buttonClearEvent = new UnityEvent<bool>();
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_9 = (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*)il2cpp_codegen_object_new(UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934(L_9, UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var);
		((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonClearEvent_13 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonClearEvent_13), (void*)L_9);
		// public static UnityEvent setBestScore = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_10 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_10, NULL);
		((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setBestScore_14 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setBestScore_14), (void*)L_10);
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
// System.Void Cell::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell__ctor_m97290B444F71D07D2F674DCCE44D6BFDE14FD0C7 (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, int32_t ___trueNumber0, const RuntimeMethod* method) 
{
	{
		// public Cell(int trueNumber)
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		// _trueNumber = trueNumber;
		int32_t L_0 = ___trueNumber0;
		__this->____trueNumber_10 = L_0;
		// }
		return;
	}
}
// System.Void Cell::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_Start_mBC2ED4BD64C7239041418D72EBB609F4DD4EAB7B (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cell_SetButtonClear_m5FA7B791ED646FF8C02CE3F443FFFC1977DD6AFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cell_SetButtonMabyNumber_mD22C29D8082962DF28D5D36487CEF51213130327_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cell_SetButtonSomeNumber_mBCDF4EAA71F46A3E27A7CBA333147E2B42C5D8C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cell_SetCanBeSetPlayerNumber_m69E960D007A20C6664520D08ED4A87CA00C1C70A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cell_SetCellColor_m32772FD59E36AD1AD25D6090F5AB257C5CC93DB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m7FE20EC51F5F0CD242B94967CCF5B8E32BA9FC62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_mC5A02CF46A925164EB7B42855AEA2AC1CFE002FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F_mC714637F67D4DA69C6B888E141CEC4A6F1663182_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisOpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845_mE20B9E7572A44107CB16CAD4372BDB7B1791C097_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_block)
		bool L_0 = __this->____block_11;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// SetPlayerNumber(_trueNumber);
		int32_t L_1 = __this->____trueNumber_10;
		Cell_SetPlayerNumber_m71E8904F2B923E1370DAEE50E79F017BF6361C93(__this, L_1, NULL);
		// GetComponent<Button>().enabled = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2;
		L_2 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
	}

IL_0020:
	{
		// _someNumber = FindObjectOfType<OpenSomeCell>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* L_3;
		L_3 = Object_FindObjectOfType_TisOpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845_mE20B9E7572A44107CB16CAD4372BDB7B1791C097(Object_FindObjectOfType_TisOpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845_mE20B9E7572A44107CB16CAD4372BDB7B1791C097_RuntimeMethod_var);
		__this->____someNumber_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____someNumber_7), (void*)L_3);
		// _audioSource = FindObjectOfType<AudioFX>();
		AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* L_4;
		L_4 = Object_FindObjectOfType_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_mC5A02CF46A925164EB7B42855AEA2AC1CFE002FD(Object_FindObjectOfType_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_mC5A02CF46A925164EB7B42855AEA2AC1CFE002FD_RuntimeMethod_var);
		__this->____audioSource_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioSource_9), (void*)L_4);
		// _gameManager = FindObjectOfType<GridGenerator>();
		GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* L_5;
		L_5 = Object_FindObjectOfType_TisGridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F_mC714637F67D4DA69C6B888E141CEC4A6F1663182(Object_FindObjectOfType_TisGridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F_mC714637F67D4DA69C6B888E141CEC4A6F1663182_RuntimeMethod_var);
		__this->____gameManager_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameManager_8), (void*)L_5);
		// _particleSystem = GetComponentInChildren<ParticleSystem>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_6;
		L_6 = Component_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m7FE20EC51F5F0CD242B94967CCF5B8E32BA9FC62(__this, Component_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m7FE20EC51F5F0CD242B94967CCF5B8E32BA9FC62_RuntimeMethod_var);
		__this->____particleSystem_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____particleSystem_6), (void*)L_6);
		// GameEvents.setCanBeSetPlayerNumberEvent.AddListener(SetCanBeSetPlayerNumber);
		il2cpp_codegen_runtime_class_init_inline(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_7 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCanBeSetPlayerNumberEvent_11;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_8 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_8, __this, (intptr_t)((void*)Cell_SetCanBeSetPlayerNumber_m69E960D007A20C6664520D08ED4A87CA00C1C70A_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_7, L_8, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// GameEvents.setCellColorEvent.AddListener(SetCellColor);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_9 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCellColorEvent_5;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_10, __this, (intptr_t)((void*)Cell_SetCellColor_m32772FD59E36AD1AD25D6090F5AB257C5CC93DB9_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_9, L_10, NULL);
		// GameEvents.buttonMabyNumberEvent.AddListener(SetButtonMabyNumber);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_11 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonMabyNumberEvent_12;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_12 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_12, __this, (intptr_t)((void*)Cell_SetButtonMabyNumber_mD22C29D8082962DF28D5D36487CEF51213130327_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_11, L_12, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// GameEvents.buttonClearEvent.AddListener(SetButtonClear);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_13 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonClearEvent_13;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_14 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_14, __this, (intptr_t)((void*)Cell_SetButtonClear_m5FA7B791ED646FF8C02CE3F443FFFC1977DD6AFC_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_13, L_14, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// GameEvents.buttonSomeNumberEvent.AddListener(SetButtonSomeNumber);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_15 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonSomeNumberEvent_10;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_16 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_16, __this, (intptr_t)((void*)Cell_SetButtonSomeNumber_mBCDF4EAA71F46A3E27A7CBA333147E2B42C5D8C0_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_15, L_16, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Cell::GetButtonSomeNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cell_GetButtonSomeNumber_m24C0719B40DD814EB1923FC7DA695604CEA697FE (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) 
{
	{
		// public bool GetButtonSomeNumber() => _buttonSomeNumber;
		bool L_0 = __this->____buttonSomeNumber_13;
		return L_0;
	}
}
// System.Void Cell::SetButtonSomeNumber(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_SetButtonSomeNumber_mBCDF4EAA71F46A3E27A7CBA333147E2B42C5D8C0 (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, bool ___buttonNumber0, const RuntimeMethod* method) 
{
	{
		// public void SetButtonSomeNumber(bool buttonNumber) => _buttonSomeNumber = buttonNumber;
		bool L_0 = ___buttonNumber0;
		__this->____buttonSomeNumber_13 = L_0;
		return;
	}
}
// System.Boolean Cell::GetButtonMabyNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cell_GetButtonMabyNumber_mB9B107CB25D55C051A1D726EA926796D7A91C238 (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) 
{
	{
		// public bool GetButtonMabyNumber() => _buttonMabyNumber;
		bool L_0 = __this->____buttonMabyNumber_14;
		return L_0;
	}
}
// System.Void Cell::SetButtonMabyNumber(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_SetButtonMabyNumber_mD22C29D8082962DF28D5D36487CEF51213130327 (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, bool ___buttonNumber0, const RuntimeMethod* method) 
{
	{
		// public void SetButtonMabyNumber(bool buttonNumber) => _buttonMabyNumber = buttonNumber;
		bool L_0 = ___buttonNumber0;
		__this->____buttonMabyNumber_14 = L_0;
		return;
	}
}
// System.Int32 Cell::GetPlayerNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cell_GetPlayerNumber_mEE48CD7740BA0794EE570181D03A2D16ADC84BB0 (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) 
{
	{
		// public int GetPlayerNumber() => int.Parse(_playerNumber.text);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____playerNumber_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		int32_t L_2;
		L_2 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_1, NULL);
		return L_2;
	}
}
// System.Void Cell::SetPlayerNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_SetPlayerNumber_m71E8904F2B923E1370DAEE50E79F017BF6361C93 (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, int32_t ___playerNumber0, const RuntimeMethod* method) 
{
	{
		// public void SetPlayerNumber(int playerNumber) => _playerNumber.text = playerNumber.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____playerNumber_4;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___playerNumber0), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void Cell::SetPlayerNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_SetPlayerNumber_m0B0673A3C2C8B906B197CE7F742B486859E64A0A (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void SetPlayerNumber() => _playerNumber.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____playerNumber_4;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		return;
	}
}
// System.Int32 Cell::GetMabyNumberText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cell_GetMabyNumberText_m47A6683A3DFD52C9157343119B20E70BA1973EDB (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) 
{
	{
		// public int GetMabyNumberText() => int.Parse(_mabyNumberText.text);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____mabyNumberText_5;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		int32_t L_2;
		L_2 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_1, NULL);
		return L_2;
	}
}
// System.Void Cell::SetMabyNumberText(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_SetMabyNumberText_mF3BF1210A2D679A0B040C9760CF43A693D345EFF (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, int32_t ___mabyNumberText0, const RuntimeMethod* method) 
{
	{
		// public void SetMabyNumberText(int mabyNumberText) => _mabyNumberText.text = mabyNumberText.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____mabyNumberText_5;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___mabyNumberText0), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void Cell::SetMabyNumberText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_SetMabyNumberText_mA90381786A4244A4217FAA998F20BA8AF24373AD (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void SetMabyNumberText() => _mabyNumberText.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____mabyNumberText_5;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		return;
	}
}
// System.Int32 Cell::GetTrueNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cell_GetTrueNumber_m444FDFC16A0AE9D21CCAC944569D7FDEED6CFB9A (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) 
{
	{
		// public int GetTrueNumber() => _trueNumber;
		int32_t L_0 = __this->____trueNumber_10;
		return L_0;
	}
}
// System.Void Cell::SetTrueNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_SetTrueNumber_mDD4199345406DBE56526747024968AF4F7A580DC (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, int32_t ___trueNumber0, const RuntimeMethod* method) 
{
	{
		// public void SetTrueNumber(int trueNumber) => _trueNumber = trueNumber;
		int32_t L_0 = ___trueNumber0;
		__this->____trueNumber_10 = L_0;
		return;
	}
}
// System.Boolean Cell::GetBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cell_GetBlock_mB7312C68DC93EF9C37DCA4CE2585DFE635CC2E7D (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) 
{
	{
		// public bool GetBlock() => _block;
		bool L_0 = __this->____block_11;
		return L_0;
	}
}
// System.Void Cell::SetBlock(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_SetBlock_m0A371E296D30CBB45D0D13BFEB6CCB136A356FB4 (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, bool ___block0, const RuntimeMethod* method) 
{
	{
		// public void SetBlock(bool block) => _block = block;
		bool L_0 = ___block0;
		__this->____block_11 = L_0;
		return;
	}
}
// System.Void Cell::SetCanBeSetPlayerNumber(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_SetCanBeSetPlayerNumber_m69E960D007A20C6664520D08ED4A87CA00C1C70A (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, bool ___canBeSetPlayerNumber0, const RuntimeMethod* method) 
{
	{
		// public void SetCanBeSetPlayerNumber(bool canBeSetPlayerNumber) => _canBeSetPlayerNumber = canBeSetPlayerNumber;
		bool L_0 = ___canBeSetPlayerNumber0;
		__this->____canBeSetPlayerNumber_12 = L_0;
		return;
	}
}
// System.Boolean Cell::GetCanBeSetPlayerNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cell_GetCanBeSetPlayerNumber_m90C880DE5420D9B16FDF7A78B82838C8E13174E2 (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) 
{
	{
		// public bool GetCanBeSetPlayerNumber() => _canBeSetPlayerNumber;
		bool L_0 = __this->____canBeSetPlayerNumber_12;
		return L_0;
	}
}
// System.Boolean Cell::GetButtonClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cell_GetButtonClear_mB9C1F6F9308F2543E6EC1A95BB2FF79F12731894 (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) 
{
	{
		// public bool GetButtonClear() => _buttonClear;
		bool L_0 = __this->____buttonClear_15;
		return L_0;
	}
}
// System.Void Cell::SetButtonClear(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_SetButtonClear_m5FA7B791ED646FF8C02CE3F443FFFC1977DD6AFC (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, bool ___buttonClear0, const RuntimeMethod* method) 
{
	{
		// public void SetButtonClear(bool buttonClear) => _buttonClear = buttonClear;
		bool L_0 = ___buttonClear0;
		__this->____buttonClear_15 = L_0;
		return;
	}
}
// System.Void Cell::ClickOnCell()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_ClickOnCell_m8A3D02B63AFA1DA01E0C7B891CE0F26DAEE516B3 (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _audioSource.PlayAudioSetNumber();
		AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* L_0 = __this->____audioSource_9;
		NullCheck(L_0);
		AudioFX_PlayAudioSetNumber_mD3474093EF6547DED30C0DF47E1839E96474BD54(L_0, NULL);
		// if (GetCanBeSetPlayerNumber() && !GetButtonSomeNumber() && !GetButtonMabyNumber() && !GetButtonClear())
		bool L_1;
		L_1 = Cell_GetCanBeSetPlayerNumber_m90C880DE5420D9B16FDF7A78B82838C8E13174E2_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		bool L_2;
		L_2 = Cell_GetButtonSomeNumber_m24C0719B40DD814EB1923FC7DA695604CEA697FE_inline(__this, NULL);
		if (L_2)
		{
			goto IL_003d;
		}
	}
	{
		bool L_3;
		L_3 = Cell_GetButtonMabyNumber_mB9B107CB25D55C051A1D726EA926796D7A91C238_inline(__this, NULL);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		bool L_4;
		L_4 = Cell_GetButtonClear_mB9C1F6F9308F2543E6EC1A95BB2FF79F12731894_inline(__this, NULL);
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		// SetPlayerNumber(numberButton);
		int32_t L_5 = ((Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_StaticFields*)il2cpp_codegen_static_fields_for(Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var))->___numberButton_16;
		Cell_SetPlayerNumber_m71E8904F2B923E1370DAEE50E79F017BF6361C93(__this, L_5, NULL);
		// SetNumber();
		Cell_SetNumber_m2DEC8F847A202F47905E0F5370C631781F93D7E9(__this, NULL);
		return;
	}

IL_003d:
	{
		// else if (GetButtonSomeNumber() && !GetCanBeSetPlayerNumber() && !GetButtonMabyNumber() && !GetButtonClear())
		bool L_6;
		L_6 = Cell_GetButtonSomeNumber_m24C0719B40DD814EB1923FC7DA695604CEA697FE_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_007b;
		}
	}
	{
		bool L_7;
		L_7 = Cell_GetCanBeSetPlayerNumber_m90C880DE5420D9B16FDF7A78B82838C8E13174E2_inline(__this, NULL);
		if (L_7)
		{
			goto IL_007b;
		}
	}
	{
		bool L_8;
		L_8 = Cell_GetButtonMabyNumber_mB9B107CB25D55C051A1D726EA926796D7A91C238_inline(__this, NULL);
		if (L_8)
		{
			goto IL_007b;
		}
	}
	{
		bool L_9;
		L_9 = Cell_GetButtonClear_mB9C1F6F9308F2543E6EC1A95BB2FF79F12731894_inline(__this, NULL);
		if (L_9)
		{
			goto IL_007b;
		}
	}
	{
		// SetPlayerNumber(GetTrueNumber());
		int32_t L_10;
		L_10 = Cell_GetTrueNumber_m444FDFC16A0AE9D21CCAC944569D7FDEED6CFB9A_inline(__this, NULL);
		Cell_SetPlayerNumber_m71E8904F2B923E1370DAEE50E79F017BF6361C93(__this, L_10, NULL);
		// SetNumber();
		Cell_SetNumber_m2DEC8F847A202F47905E0F5370C631781F93D7E9(__this, NULL);
		// _someNumber.SetCountCanBeOpenCells();
		OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* L_11 = __this->____someNumber_7;
		NullCheck(L_11);
		OpenSomeCell_SetCountCanBeOpenCells_mB639FCED9053DC59CAF05DBA972AA8EA2DE1C7C4(L_11, NULL);
		return;
	}

IL_007b:
	{
		// else if(GetButtonMabyNumber() && !GetButtonSomeNumber() && !GetCanBeSetPlayerNumber() && !GetButtonClear())
		bool L_12;
		L_12 = Cell_GetButtonMabyNumber_mB9B107CB25D55C051A1D726EA926796D7A91C238_inline(__this, NULL);
		if (!L_12)
		{
			goto IL_00f3;
		}
	}
	{
		bool L_13;
		L_13 = Cell_GetButtonSomeNumber_m24C0719B40DD814EB1923FC7DA695604CEA697FE_inline(__this, NULL);
		if (L_13)
		{
			goto IL_00f3;
		}
	}
	{
		bool L_14;
		L_14 = Cell_GetCanBeSetPlayerNumber_m90C880DE5420D9B16FDF7A78B82838C8E13174E2_inline(__this, NULL);
		if (L_14)
		{
			goto IL_00f3;
		}
	}
	{
		bool L_15;
		L_15 = Cell_GetButtonClear_mB9C1F6F9308F2543E6EC1A95BB2FF79F12731894_inline(__this, NULL);
		if (L_15)
		{
			goto IL_00f3;
		}
	}
	{
		// if(numberButton == 0)
		int32_t L_16 = ((Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_StaticFields*)il2cpp_codegen_static_fields_for(Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var))->___numberButton_16;
		if (L_16)
		{
			goto IL_00ad;
		}
	}
	{
		// GameEvents.setCellColorEvent.Invoke();
		il2cpp_codegen_runtime_class_init_inline(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_17 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCellColorEvent_5;
		NullCheck(L_17);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_17, NULL);
		return;
	}

IL_00ad:
	{
		// SetMabyNumberText(numberButton);
		int32_t L_18 = ((Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_StaticFields*)il2cpp_codegen_static_fields_for(Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var))->___numberButton_16;
		Cell_SetMabyNumberText_mF3BF1210A2D679A0B040C9760CF43A693D345EFF(__this, L_18, NULL);
		// GameEvents.buttonMabyNumberEvent.Invoke(false);
		il2cpp_codegen_runtime_class_init_inline(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_19 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonMabyNumberEvent_12;
		NullCheck(L_19);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_19, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.buttonNumberSetEvent.Invoke(false);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_20 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonNumberSetEvent_9;
		NullCheck(L_20);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_20, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.buttonNumberSetColorEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_21 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonNumberSetColorEvent_4;
		NullCheck(L_21);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_21, NULL);
		// GameEvents.setCellColorEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_22 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCellColorEvent_5;
		NullCheck(L_22);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_22, NULL);
		// GameEvents.setColorMabyNumberButtonEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_23 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setColorMabyNumberButtonEvent_7;
		NullCheck(L_23);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_23, NULL);
		// numberButton = 0;
		((Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_StaticFields*)il2cpp_codegen_static_fields_for(Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var))->___numberButton_16 = 0;
		return;
	}

IL_00f3:
	{
		// else if(GetButtonClear())
		bool L_24;
		L_24 = Cell_GetButtonClear_mB9C1F6F9308F2543E6EC1A95BB2FF79F12731894_inline(__this, NULL);
		if (!L_24)
		{
			goto IL_0101;
		}
	}
	{
		// ClearWrongNumberOrMabyNumber();
		Cell_ClearWrongNumberOrMabyNumber_m2200D17F47AB7491E649ACFE58BC93B3C76ED783(__this, NULL);
	}

IL_0101:
	{
		// }
		return;
	}
}
// System.Void Cell::ClearWrongNumberOrMabyNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_ClearWrongNumberOrMabyNumber_m2200D17F47AB7491E649ACFE58BC93B3C76ED783 (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetMabyNumberText();
		Cell_SetMabyNumberText_mA90381786A4244A4217FAA998F20BA8AF24373AD(__this, NULL);
		// SetPlayerNumber();
		Cell_SetPlayerNumber_m0B0673A3C2C8B906B197CE7F742B486859E64A0A(__this, NULL);
		// GameEvents.buttonClearEvent.Invoke(false);
		il2cpp_codegen_runtime_class_init_inline(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_0 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonClearEvent_13;
		NullCheck(L_0);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_0, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.setColorClearButtonEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setColorClearButtonEvent_8;
		NullCheck(L_1);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_1, NULL);
		// GameEvents.setCellColorEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCellColorEvent_5;
		NullCheck(L_2);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_2, NULL);
		// }
		return;
	}
}
// System.Void Cell::SetNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_SetNumber_m2DEC8F847A202F47905E0F5370C631781F93D7E9 (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetTrueNumber() == GetPlayerNumber())
		int32_t L_0;
		L_0 = Cell_GetTrueNumber_m444FDFC16A0AE9D21CCAC944569D7FDEED6CFB9A_inline(__this, NULL);
		int32_t L_1;
		L_1 = Cell_GetPlayerNumber_mEE48CD7740BA0794EE570181D03A2D16ADC84BB0(__this, NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_004f;
		}
	}
	{
		// _particleSystem.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_2 = __this->____particleSystem_6;
		NullCheck(L_2);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_2, NULL);
		// _playerNumber.color = Color.black;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->____playerNumber_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// SetBlock(true);
		Cell_SetBlock_m0A371E296D30CBB45D0D13BFEB6CCB136A356FB4_inline(__this, (bool)1, NULL);
		// GetComponent<Button>().enabled = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5;
		L_5 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
		// _gameManager.SetOpenCountCells();
		GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* L_6 = __this->____gameManager_8;
		NullCheck(L_6);
		GridGenerator_SetOpenCountCells_mC9098B287722BBFDB3B8D021546CE8B6555770C8(L_6, NULL);
		// SetMabyNumberText();
		Cell_SetMabyNumberText_mA90381786A4244A4217FAA998F20BA8AF24373AD(__this, NULL);
		goto IL_006a;
	}

IL_004f:
	{
		// _playerNumber.color = Color.red;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->____playerNumber_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		// _gameManager.SetDamage();
		GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* L_9 = __this->____gameManager_8;
		NullCheck(L_9);
		GridGenerator_SetDamage_m8BC8FDA91915D8AA49E6EC8A075B8CED44C3DD85(L_9, NULL);
	}

IL_006a:
	{
		// numberButton = 0;
		((Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_StaticFields*)il2cpp_codegen_static_fields_for(Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var))->___numberButton_16 = 0;
		// GameEvents.buttonNumberSetEvent.Invoke(false);
		il2cpp_codegen_runtime_class_init_inline(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_10 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonNumberSetEvent_9;
		NullCheck(L_10);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_10, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.buttonNumberSetColorEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_11 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonNumberSetColorEvent_4;
		NullCheck(L_11);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_11, NULL);
		// GameEvents.buttonSomeNumberEvent.Invoke(false);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_12 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonSomeNumberEvent_10;
		NullCheck(L_12);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_12, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.setColorButtonSomeNumberEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_13 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setColorButtonSomeNumberEvent_6;
		NullCheck(L_13);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_13, NULL);
		// GameEvents.setCanBeSetPlayerNumberEvent.Invoke(false);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_14 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCanBeSetPlayerNumberEvent_11;
		NullCheck(L_14);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_14, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.setCellColorEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_15 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCellColorEvent_5;
		NullCheck(L_15);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_15, NULL);
		// }
		return;
	}
}
// System.Void Cell::SetCellColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_SetCellColor_m32772FD59E36AD1AD25D6090F5AB257C5CC93DB9 (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((GetCanBeSetPlayerNumber() && !GetBlock()) || (GetButtonSomeNumber() && !GetBlock()) || (GetButtonMabyNumber() && !GetBlock()))
		bool L_0;
		L_0 = Cell_GetCanBeSetPlayerNumber_m90C880DE5420D9B16FDF7A78B82838C8E13174E2_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1;
		L_1 = Cell_GetBlock_mB7312C68DC93EF9C37DCA4CE2585DFE635CC2E7D_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}

IL_0010:
	{
		bool L_2;
		L_2 = Cell_GetButtonSomeNumber_m24C0719B40DD814EB1923FC7DA695604CEA697FE_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		bool L_3;
		L_3 = Cell_GetBlock_mB7312C68DC93EF9C37DCA4CE2585DFE635CC2E7D_inline(__this, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}

IL_0020:
	{
		bool L_4;
		L_4 = Cell_GetButtonMabyNumber_mB9B107CB25D55C051A1D726EA926796D7A91C238_inline(__this, NULL);
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		bool L_5;
		L_5 = Cell_GetBlock_mB7312C68DC93EF9C37DCA4CE2585DFE635CC2E7D_inline(__this, NULL);
		if (L_5)
		{
			goto IL_0046;
		}
	}

IL_0030:
	{
		// gameObject.GetComponent<Image>().color = Color.cyan;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7;
		L_7 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_6, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_cyan_m1257FED4776F2A33BD7250357D024B3FA3E592EB_inline(NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		return;
	}

IL_0046:
	{
		// else if (!GetBlock() && GetButtonClear())
		bool L_9;
		L_9 = Cell_GetBlock_mB7312C68DC93EF9C37DCA4CE2585DFE635CC2E7D_inline(__this, NULL);
		if (L_9)
		{
			goto IL_006c;
		}
	}
	{
		bool L_10;
		L_10 = Cell_GetButtonClear_mB9C1F6F9308F2543E6EC1A95BB2FF79F12731894_inline(__this, NULL);
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		// gameObject.GetComponent<Image>().color = Color.cyan;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_11);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12;
		L_12 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_11, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_get_cyan_m1257FED4776F2A33BD7250357D024B3FA3E592EB_inline(NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_13);
		return;
	}

IL_006c:
	{
		// gameObject.GetComponent<Image>().color = Color.white;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_14);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15;
		L_15 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_14, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_16);
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
// System.Void GridGenerator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_Start_mBFBBCA347A36B2127BC3A6D52F4C90F9A1094D38 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62480A630F2BB993948C975A3D0E82E56909C2FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB28E469948EEF6ABD17ABF274158630CEDAC6C21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _mainGrid = GameObject.FindGameObjectWithTag("MainGrid");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralB28E469948EEF6ABD17ABF274158630CEDAC6C21, NULL);
		__this->____mainGrid_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mainGrid_12), (void*)L_0);
		// _soundManager = GameObject.FindGameObjectWithTag("SoundManager");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteral62480A630F2BB993948C975A3D0E82E56909C2FD, NULL);
		__this->____soundManager_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____soundManager_13), (void*)L_1);
		// GenerateNumbers(_cellsGrid);
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_2 = __this->____cellsGrid_14;
		GridGenerator_GenerateNumbers_mE8592516A24156D792930320A234F041C9FC39FB(__this, L_2, NULL);
		// RenderingMatrixGame(_matrices, _matrixPrefab);
		Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* L_3 = __this->____matrices_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->____matrixPrefab_4;
		GridGenerator_RenderingMatrixGame_mDA830DF439B0580BC50D0EE37062B17B0A2D2D62(__this, L_3, L_4, NULL);
		// RandomOpenCells(_cellsGrid, MenuManager.lvl);
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_5 = __this->____cellsGrid_14;
		String_t* L_6 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___lvl_10;
		GridGenerator_RandomOpenCells_m728F27695C7DB1C3F3E18E837096E8FC482EBAEC(__this, L_5, L_6, NULL);
		// PoolMatrix(_matrices);
		Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* L_7 = __this->____matrices_15;
		GridGenerator_PoolMatrix_m028EA6B840A963920A1D866A58A0AABAF6CA42DE(__this, L_7, NULL);
		// SpawnNumberButtonList(_numberButtonList);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->____numberButtonList_10;
		GridGenerator_SpawnNumberButtonList_m75649DB8A94945AF953BB0F409A0B00849865032(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Void GridGenerator::BackToMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_BackToMainMenu_m8182B24FE5B64EA3326C852FE02FBF8791363450 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void BackToMainMenu() => SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(0, NULL);
		return;
	}
}
// System.Void GridGenerator::SetOpenCountCells()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_SetOpenCountCells_mC9098B287722BBFDB3B8D021546CE8B6555770C8 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, const RuntimeMethod* method) 
{
	{
		// _openCountCells++;
		int32_t L_0 = __this->____openCountCells_16;
		__this->____openCountCells_16 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if(GetOpenCountCells() == 81)
		int32_t L_1;
		L_1 = GridGenerator_GetOpenCountCells_m18B9AC75B7BECEE091793139675F09FBD8DD9B27_inline(__this, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)81)))))
		{
			goto IL_0029;
		}
	}
	{
		// _unityAds.PlayInterstitialAd();
		UnityAds_t261657F9CACA9B380AA7BE6215A33A41E0F8292E* L_2 = __this->____unityAds_9;
		NullCheck(L_2);
		UnityAds_PlayInterstitialAd_m589D4A92FBA59D323D1462BF3C9822F541D91DCC(L_2, NULL);
		// FinishGame();
		GridGenerator_FinishGame_mF3426A4AE16AEB1A6AD76991FAAF7330424D29D2(__this, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void GridGenerator::SetDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_SetDamage_m8BC8FDA91915D8AA49E6EC8A075B8CED44C3DD85 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, const RuntimeMethod* method) 
{
	{
		// _hp--;
		int32_t L_0 = __this->____hp_11;
		__this->____hp_11 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if (GetHP() == 0)
		int32_t L_1;
		L_1 = GridGenerator_GetHP_mB6E115AF359DF076D5683F4AC8A2772B39335763_inline(__this, NULL);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		// GameOver();
		GridGenerator_GameOver_m65BC05A1E3EE6873FAB4461C215232C5CA714EE0(__this, NULL);
		// _unityAds.PlayInterstitialAd();
		UnityAds_t261657F9CACA9B380AA7BE6215A33A41E0F8292E* L_2 = __this->____unityAds_9;
		NullCheck(L_2);
		UnityAds_PlayInterstitialAd_m589D4A92FBA59D323D1462BF3C9822F541D91DCC(L_2, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Int32 GridGenerator::GetHP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GridGenerator_GetHP_mB6E115AF359DF076D5683F4AC8A2772B39335763 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, const RuntimeMethod* method) 
{
	{
		// public int GetHP() => _hp;
		int32_t L_0 = __this->____hp_11;
		return L_0;
	}
}
// System.Int32 GridGenerator::GetOpenCountCells()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GridGenerator_GetOpenCountCells_m18B9AC75B7BECEE091793139675F09FBD8DD9B27 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, const RuntimeMethod* method) 
{
	{
		// public int GetOpenCountCells() => _openCountCells;
		int32_t L_0 = __this->____openCountCells_16;
		return L_0;
	}
}
// System.Void GridGenerator::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_GameOver_m65BC05A1E3EE6873FAB4461C215232C5CA714EE0 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_m58B62177CC1CFD40C90E3CE26DB4D79F0B0924BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _numbersPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____numbersPanel_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _gameOverPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____gameOverPanel_6;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// _soundManager.GetComponent<AudioFX>().PlayAudioGameOver();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____soundManager_13;
		NullCheck(L_2);
		AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* L_3;
		L_3 = GameObject_GetComponent_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_m58B62177CC1CFD40C90E3CE26DB4D79F0B0924BC(L_2, GameObject_GetComponent_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_m58B62177CC1CFD40C90E3CE26DB4D79F0B0924BC_RuntimeMethod_var);
		NullCheck(L_3);
		AudioFX_PlayAudioGameOver_m3F11A9E7DE988164F4F355448FC5F4797AA2E651(L_3, NULL);
		// }
		return;
	}
}
// System.Void GridGenerator::FinishGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_FinishGame_mF3426A4AE16AEB1A6AD76991FAAF7330424D29D2 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_m58B62177CC1CFD40C90E3CE26DB4D79F0B0924BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _numbersPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____numbersPanel_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _finishGame.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____finishGame_7;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// _soundManager.GetComponent<AudioFX>().PlayAudioFinishGame();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____soundManager_13;
		NullCheck(L_2);
		AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* L_3;
		L_3 = GameObject_GetComponent_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_m58B62177CC1CFD40C90E3CE26DB4D79F0B0924BC(L_2, GameObject_GetComponent_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_m58B62177CC1CFD40C90E3CE26DB4D79F0B0924BC_RuntimeMethod_var);
		NullCheck(L_3);
		AudioFX_PlayAudioFinishGame_m8AD76AFD94F09FD99959DA7FA44E05EF6A348760(L_3, NULL);
		// GameEvents.setBestScore.Invoke();
		il2cpp_codegen_runtime_class_init_inline(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setBestScore_14;
		NullCheck(L_4);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_4, NULL);
		// }
		return;
	}
}
// System.Void GridGenerator::SpawnMatrix(System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject[]>,UnityEngine.GameObject,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_SpawnMatrix_m62E8E169B4D74C8473C2B31B5B61C5AFE3F64F17 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* ___matrices0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___matrixPrefab1, int32_t ___indexRow2, int32_t ___indexMatrix3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mA812D91FE8B310DE904FBA1F50374F4180617D2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// GameObject cellPrefab = Instantiate(matrixPrefab, new Vector3(), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___matrixPrefab1;
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_0, L_1, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_0 = L_3;
		// cellPrefab.transform.SetParent(_mainGrid.transform, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->____mainGrid_12;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_5);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_5, L_7, (bool)0, NULL);
		// matrices[indexRow][indexMatrix] = cellPrefab;
		Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* L_8 = ___matrices0;
		int32_t L_9 = ___indexRow2;
		NullCheck(L_8);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10;
		L_10 = Dictionary_2_get_Item_mA812D91FE8B310DE904FBA1F50374F4180617D2D(L_8, L_9, Dictionary_2_get_Item_mA812D91FE8B310DE904FBA1F50374F4180617D2D_RuntimeMethod_var);
		int32_t L_11 = ___indexMatrix3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_12);
		// }
		return;
	}
}
// System.Void GridGenerator::RenderingMatrixGame(System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject[]>,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_RenderingMatrixGame_mDA830DF439B0580BC50D0EE37062B17B0A2D2D62 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* ___matrices0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___matrixPrefab1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mEE66CB46A21B71EAE52B3F2ED82E8B95E58D0821_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mA812D91FE8B310DE904FBA1F50374F4180617D2D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int indexRow = 0; indexRow < _matrices.Count; indexRow++)
		V_0 = 0;
		goto IL_002b;
	}

IL_0004:
	{
		// for (int indexMatrix = 0; indexMatrix < _matrices[0].Length; indexMatrix++)
		V_1 = 0;
		goto IL_0016;
	}

IL_0008:
	{
		// SpawnMatrix(matrices, matrixPrefab, indexRow, indexMatrix);
		Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* L_0 = ___matrices0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___matrixPrefab1;
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		GridGenerator_SpawnMatrix_m62E8E169B4D74C8473C2B31B5B61C5AFE3F64F17(__this, L_0, L_1, L_2, L_3, NULL);
		// for (int indexMatrix = 0; indexMatrix < _matrices[0].Length; indexMatrix++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0016:
	{
		// for (int indexMatrix = 0; indexMatrix < _matrices[0].Length; indexMatrix++)
		int32_t L_5 = V_1;
		Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* L_6 = __this->____matrices_15;
		NullCheck(L_6);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7;
		L_7 = Dictionary_2_get_Item_mA812D91FE8B310DE904FBA1F50374F4180617D2D(L_6, 0, Dictionary_2_get_Item_mA812D91FE8B310DE904FBA1F50374F4180617D2D_RuntimeMethod_var);
		NullCheck(L_7);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0008;
		}
	}
	{
		// for (int indexRow = 0; indexRow < _matrices.Count; indexRow++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002b:
	{
		// for (int indexRow = 0; indexRow < _matrices.Count; indexRow++)
		int32_t L_9 = V_0;
		Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* L_10 = __this->____matrices_15;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mEE66CB46A21B71EAE52B3F2ED82E8B95E58D0821(L_10, Dictionary_2_get_Count_mEE66CB46A21B71EAE52B3F2ED82E8B95E58D0821_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// Cell[] GridGenerator::GenerationRandomRow(System.Collections.Generic.Dictionary`2<System.Int32,Cell[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* GridGenerator_GenerationRandomRow_m3A8729836D1D6C4AF53429A2BDBF1B6353416EC3 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* ___cellsGrid0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m3DD3471427343BF35F167E67DAC91CA242DF9181_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* V_5 = NULL;
	{
		// Cell[] result = new Cell[cellsGrid.Count];
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_0 = ___cellsGrid0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m3DD3471427343BF35F167E67DAC91CA242DF9181(L_0, Dictionary_2_get_Count_m3DD3471427343BF35F167E67DAC91CA242DF9181_RuntimeMethod_var);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_2 = (CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*)(CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*)SZArrayNew(CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// for (int i = 0; i < cellsGrid.Count; i++)
		V_1 = 0;
		goto IL_001f;
	}

IL_0010:
	{
		// result[i] = new Cell(i + 1);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = V_1;
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_6 = (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A*)il2cpp_codegen_object_new(Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Cell__ctor_m97290B444F71D07D2F674DCCE44D6BFDE14FD0C7(L_6, ((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A*)L_6);
		// for (int i = 0; i < cellsGrid.Count; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001f:
	{
		// for (int i = 0; i < cellsGrid.Count; i++)
		int32_t L_8 = V_1;
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_9 = ___cellsGrid0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Dictionary_2_get_Count_m3DD3471427343BF35F167E67DAC91CA242DF9181(L_9, Dictionary_2_get_Count_m3DD3471427343BF35F167E67DAC91CA242DF9181_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0010;
		}
	}
	{
		// for (int i = 0; i < result.Length; i++)
		V_2 = 0;
		goto IL_0055;
	}

IL_002c:
	{
		// int index1 = Random.Range(0, 9);
		int32_t L_11;
		L_11 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)9), NULL);
		V_3 = L_11;
		// int index2 = Random.Range(0, 9);
		int32_t L_12;
		L_12 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)9), NULL);
		V_4 = L_12;
		// Cell temp = result[index1];
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_13 = V_0;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_5 = L_16;
		// result[index1] = result[index2];
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_17 = V_0;
		int32_t L_18 = V_3;
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_19 = V_0;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_22);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A*)L_22);
		// result[index2] = temp;
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_23 = V_0;
		int32_t L_24 = V_4;
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_25 = V_5;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A*)L_25);
		// for (int i = 0; i < result.Length; i++)
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0055:
	{
		// for (int i = 0; i < result.Length; i++)
		int32_t L_27 = V_2;
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_28 = V_0;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_002c;
		}
	}
	{
		// return result;
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_29 = V_0;
		return L_29;
	}
}
// System.Void GridGenerator::GenerateNumbers(System.Collections.Generic.Dictionary`2<System.Int32,Cell[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_GenerateNumbers_mE8592516A24156D792930320A234F041C9FC39FB (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* ___cellsGrid0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mE59609688990592EC36B84DE9285D85BF2C92EE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// cellsGrid[0] = GenerationRandomRow(cellsGrid);
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_0 = ___cellsGrid0;
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_1 = ___cellsGrid0;
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_2;
		L_2 = GridGenerator_GenerationRandomRow_m3A8729836D1D6C4AF53429A2BDBF1B6353416EC3(__this, L_1, NULL);
		NullCheck(L_0);
		Dictionary_2_set_Item_mE59609688990592EC36B84DE9285D85BF2C92EE0(L_0, 0, L_2, Dictionary_2_set_Item_mE59609688990592EC36B84DE9285D85BF2C92EE0_RuntimeMethod_var);
		// for (int indexRowFrom = 0, indexRowTo = 1; indexRowFrom < 2; indexRowFrom++, indexRowTo++)
		V_0 = 0;
		// for (int indexRowFrom = 0, indexRowTo = 1; indexRowFrom < 2; indexRowFrom++, indexRowTo++)
		V_1 = 1;
		goto IL_0078;
	}

IL_0014:
	{
		// for (int indexNumber = 3; indexNumber < cellsGrid[indexRowFrom].Length; indexNumber++)
		V_2 = 3;
		goto IL_003a;
	}

IL_0018:
	{
		// cellsGrid[indexRowTo][indexNumber - 3] = new Cell(cellsGrid[indexRowFrom][indexNumber].GetTrueNumber());
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_3 = ___cellsGrid0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_5;
		L_5 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_3, L_4, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		int32_t L_6 = V_2;
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_7 = ___cellsGrid0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_9;
		L_9 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_7, L_8, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Cell_GetTrueNumber_m444FDFC16A0AE9D21CCAC944569D7FDEED6CFB9A_inline(L_12, NULL);
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_14 = (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A*)il2cpp_codegen_object_new(Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Cell__ctor_m97290B444F71D07D2F674DCCE44D6BFDE14FD0C7(L_14, L_13, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_14);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_6, 3))), (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A*)L_14);
		// for (int indexNumber = 3; indexNumber < cellsGrid[indexRowFrom].Length; indexNumber++)
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003a:
	{
		// for (int indexNumber = 3; indexNumber < cellsGrid[indexRowFrom].Length; indexNumber++)
		int32_t L_16 = V_2;
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_17 = ___cellsGrid0;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_19;
		L_19 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_17, L_18, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		NullCheck(L_19);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		// for (int indexNumber = 0; indexNumber < 3; indexNumber++)
		V_3 = 0;
		goto IL_006c;
	}

IL_004a:
	{
		// cellsGrid[indexRowTo][indexNumber + 6] = new Cell(cellsGrid[indexRowFrom][indexNumber].GetTrueNumber());
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_20 = ___cellsGrid0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_22;
		L_22 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_20, L_21, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		int32_t L_23 = V_3;
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_24 = ___cellsGrid0;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_26;
		L_26 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_24, L_25, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		int32_t L_27 = V_3;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		int32_t L_30;
		L_30 = Cell_GetTrueNumber_m444FDFC16A0AE9D21CCAC944569D7FDEED6CFB9A_inline(L_29, NULL);
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_31 = (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A*)il2cpp_codegen_object_new(Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Cell__ctor_m97290B444F71D07D2F674DCCE44D6BFDE14FD0C7(L_31, L_30, NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_31);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 6))), (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A*)L_31);
		// for (int indexNumber = 0; indexNumber < 3; indexNumber++)
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_006c:
	{
		// for (int indexNumber = 0; indexNumber < 3; indexNumber++)
		int32_t L_33 = V_3;
		if ((((int32_t)L_33) < ((int32_t)3)))
		{
			goto IL_004a;
		}
	}
	{
		// for (int indexRowFrom = 0, indexRowTo = 1; indexRowFrom < 2; indexRowFrom++, indexRowTo++)
		int32_t L_34 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		// for (int indexRowFrom = 0, indexRowTo = 1; indexRowFrom < 2; indexRowFrom++, indexRowTo++)
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_0078:
	{
		// for (int indexRowFrom = 0, indexRowTo = 1; indexRowFrom < 2; indexRowFrom++, indexRowTo++)
		int32_t L_36 = V_0;
		if ((((int32_t)L_36) < ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		// for (int indexRowFrom = 0, indexRowTo = 3; indexRowFrom < 6; indexRowFrom++, indexRowTo++)
		V_4 = 0;
		// for (int indexRowFrom = 0, indexRowTo = 3; indexRowFrom < 6; indexRowFrom++, indexRowTo++)
		V_5 = 3;
		goto IL_00e9;
	}

IL_0084:
	{
		// for (int indexNumber = 1; indexNumber < cellsGrid[indexRowFrom].Length; indexNumber++)
		V_6 = 1;
		goto IL_00cf;
	}

IL_0089:
	{
		// cellsGrid[indexRowTo][indexNumber - 1] = new Cell(cellsGrid[indexRowFrom][indexNumber].GetTrueNumber());
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_37 = ___cellsGrid0;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_39;
		L_39 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_37, L_38, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		int32_t L_40 = V_6;
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_41 = ___cellsGrid0;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_43;
		L_43 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_41, L_42, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		int32_t L_44 = V_6;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_46);
		int32_t L_47;
		L_47 = Cell_GetTrueNumber_m444FDFC16A0AE9D21CCAC944569D7FDEED6CFB9A_inline(L_46, NULL);
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_48 = (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A*)il2cpp_codegen_object_new(Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		Cell__ctor_m97290B444F71D07D2F674DCCE44D6BFDE14FD0C7(L_48, L_47, NULL);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_48);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_40, 1))), (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A*)L_48);
		// cellsGrid[indexRowTo][8] = new Cell(cellsGrid[indexRowFrom][0].GetTrueNumber());
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_49 = ___cellsGrid0;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_51;
		L_51 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_49, L_50, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_52 = ___cellsGrid0;
		int32_t L_53 = V_4;
		NullCheck(L_52);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_54;
		L_54 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_52, L_53, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		NullCheck(L_54);
		int32_t L_55 = 0;
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_56);
		int32_t L_57;
		L_57 = Cell_GetTrueNumber_m444FDFC16A0AE9D21CCAC944569D7FDEED6CFB9A_inline(L_56, NULL);
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_58 = (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A*)il2cpp_codegen_object_new(Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var);
		NullCheck(L_58);
		Cell__ctor_m97290B444F71D07D2F674DCCE44D6BFDE14FD0C7(L_58, L_57, NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_58);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(8), (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A*)L_58);
		// for (int indexNumber = 1; indexNumber < cellsGrid[indexRowFrom].Length; indexNumber++)
		int32_t L_59 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_00cf:
	{
		// for (int indexNumber = 1; indexNumber < cellsGrid[indexRowFrom].Length; indexNumber++)
		int32_t L_60 = V_6;
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_61 = ___cellsGrid0;
		int32_t L_62 = V_4;
		NullCheck(L_61);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_63;
		L_63 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_61, L_62, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		NullCheck(L_63);
		if ((((int32_t)L_60) < ((int32_t)((int32_t)(((RuntimeArray*)L_63)->max_length)))))
		{
			goto IL_0089;
		}
	}
	{
		// for (int indexRowFrom = 0, indexRowTo = 3; indexRowFrom < 6; indexRowFrom++, indexRowTo++)
		int32_t L_64 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_64, 1));
		// for (int indexRowFrom = 0, indexRowTo = 3; indexRowFrom < 6; indexRowFrom++, indexRowTo++)
		int32_t L_65 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_00e9:
	{
		// for (int indexRowFrom = 0, indexRowTo = 3; indexRowFrom < 6; indexRowFrom++, indexRowTo++)
		int32_t L_66 = V_4;
		if ((((int32_t)L_66) < ((int32_t)6)))
		{
			goto IL_0084;
		}
	}
	{
		// MatrixShuffle(cellsGrid);
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_67 = ___cellsGrid0;
		GridGenerator_MatrixShuffle_mB7B425A6506453C4110494C39130A5222FD1C7C7(__this, L_67, NULL);
		// }
		return;
	}
}
// System.Void GridGenerator::MatrixShuffle(System.Collections.Generic.Dictionary`2<System.Int32,Cell[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_MatrixShuffle_mB7B425A6506453C4110494C39130A5222FD1C7C7 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* ___cellsGrid0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m3DD3471427343BF35F167E67DAC91CA242DF9181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mE59609688990592EC36B84DE9285D85BF2C92EE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* V_0 = NULL;
	Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Cell[] tempRow = new Cell[9];
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_0 = (CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*)(CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*)SZArrayNew(CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		V_0 = L_0;
		// tempRow = cellsGrid[3];
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_1 = ___cellsGrid0;
		NullCheck(L_1);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_2;
		L_2 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_1, 3, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		V_0 = L_2;
		// cellsGrid[3] = cellsGrid[5];
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_3 = ___cellsGrid0;
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_4 = ___cellsGrid0;
		NullCheck(L_4);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_5;
		L_5 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_4, 5, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		NullCheck(L_3);
		Dictionary_2_set_Item_mE59609688990592EC36B84DE9285D85BF2C92EE0(L_3, 3, L_5, Dictionary_2_set_Item_mE59609688990592EC36B84DE9285D85BF2C92EE0_RuntimeMethod_var);
		// cellsGrid[5] = tempRow;
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_6 = ___cellsGrid0;
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_7 = V_0;
		NullCheck(L_6);
		Dictionary_2_set_Item_mE59609688990592EC36B84DE9285D85BF2C92EE0(L_6, 5, L_7, Dictionary_2_set_Item_mE59609688990592EC36B84DE9285D85BF2C92EE0_RuntimeMethod_var);
		// tempRow = cellsGrid[1];
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_8 = ___cellsGrid0;
		NullCheck(L_8);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_9;
		L_9 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_8, 1, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		V_0 = L_9;
		// cellsGrid[1] = cellsGrid[2];
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_10 = ___cellsGrid0;
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_11 = ___cellsGrid0;
		NullCheck(L_11);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_12;
		L_12 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_11, 2, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		NullCheck(L_10);
		Dictionary_2_set_Item_mE59609688990592EC36B84DE9285D85BF2C92EE0(L_10, 1, L_12, Dictionary_2_set_Item_mE59609688990592EC36B84DE9285D85BF2C92EE0_RuntimeMethod_var);
		// cellsGrid[2] = tempRow;
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_13 = ___cellsGrid0;
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_14 = V_0;
		NullCheck(L_13);
		Dictionary_2_set_Item_mE59609688990592EC36B84DE9285D85BF2C92EE0(L_13, 2, L_14, Dictionary_2_set_Item_mE59609688990592EC36B84DE9285D85BF2C92EE0_RuntimeMethod_var);
		// tempRow = cellsGrid[6];
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_15 = ___cellsGrid0;
		NullCheck(L_15);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_16;
		L_16 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_15, 6, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		V_0 = L_16;
		// cellsGrid[6] = cellsGrid[8];
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_17 = ___cellsGrid0;
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_18 = ___cellsGrid0;
		NullCheck(L_18);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_19;
		L_19 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_18, 8, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		NullCheck(L_17);
		Dictionary_2_set_Item_mE59609688990592EC36B84DE9285D85BF2C92EE0(L_17, 6, L_19, Dictionary_2_set_Item_mE59609688990592EC36B84DE9285D85BF2C92EE0_RuntimeMethod_var);
		// cellsGrid[8] = tempRow;
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_20 = ___cellsGrid0;
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_21 = V_0;
		NullCheck(L_20);
		Dictionary_2_set_Item_mE59609688990592EC36B84DE9285D85BF2C92EE0(L_20, 8, L_21, Dictionary_2_set_Item_mE59609688990592EC36B84DE9285D85BF2C92EE0_RuntimeMethod_var);
		// for (int indexRow = 0; indexRow < cellsGrid.Count; indexRow++)
		V_2 = 0;
		goto IL_00dc;
	}

IL_0066:
	{
		// tempColumn = cellsGrid[indexRow][0];
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_22 = ___cellsGrid0;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_24;
		L_24 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_22, L_23, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		NullCheck(L_24);
		int32_t L_25 = 0;
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_1 = L_26;
		// cellsGrid[indexRow][0] = cellsGrid[indexRow][2];
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_27 = ___cellsGrid0;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_29;
		L_29 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_27, L_28, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_30 = ___cellsGrid0;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_32;
		L_32 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_30, L_31, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		NullCheck(L_32);
		int32_t L_33 = 2;
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_34);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A*)L_34);
		// cellsGrid[indexRow][2] = tempColumn;
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_35 = ___cellsGrid0;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_37;
		L_37 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_35, L_36, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_38 = V_1;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(2), (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A*)L_38);
		// tempColumn = cellsGrid[indexRow][3];
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_39 = ___cellsGrid0;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_41;
		L_41 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_39, L_40, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		NullCheck(L_41);
		int32_t L_42 = 3;
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_1 = L_43;
		// cellsGrid[indexRow][3] = cellsGrid[indexRow][5];
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_44 = ___cellsGrid0;
		int32_t L_45 = V_2;
		NullCheck(L_44);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_46;
		L_46 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_44, L_45, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_47 = ___cellsGrid0;
		int32_t L_48 = V_2;
		NullCheck(L_47);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_49;
		L_49 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_47, L_48, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		NullCheck(L_49);
		int32_t L_50 = 5;
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_51);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(3), (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A*)L_51);
		// cellsGrid[indexRow][5] = tempColumn;
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_52 = ___cellsGrid0;
		int32_t L_53 = V_2;
		NullCheck(L_52);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_54;
		L_54 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_52, L_53, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_55 = V_1;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_55);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(5), (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A*)L_55);
		// tempColumn = cellsGrid[indexRow][6];
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_56 = ___cellsGrid0;
		int32_t L_57 = V_2;
		NullCheck(L_56);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_58;
		L_58 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_56, L_57, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		NullCheck(L_58);
		int32_t L_59 = 6;
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_1 = L_60;
		// cellsGrid[indexRow][6] = cellsGrid[indexRow][7];
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_61 = ___cellsGrid0;
		int32_t L_62 = V_2;
		NullCheck(L_61);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_63;
		L_63 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_61, L_62, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_64 = ___cellsGrid0;
		int32_t L_65 = V_2;
		NullCheck(L_64);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_66;
		L_66 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_64, L_65, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		NullCheck(L_66);
		int32_t L_67 = 7;
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_68);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(6), (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A*)L_68);
		// cellsGrid[indexRow][7] = tempColumn;
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_69 = ___cellsGrid0;
		int32_t L_70 = V_2;
		NullCheck(L_69);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_71;
		L_71 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_69, L_70, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_72 = V_1;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_72);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(7), (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A*)L_72);
		// for (int indexRow = 0; indexRow < cellsGrid.Count; indexRow++)
		int32_t L_73 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_00dc:
	{
		// for (int indexRow = 0; indexRow < cellsGrid.Count; indexRow++)
		int32_t L_74 = V_2;
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_75 = ___cellsGrid0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = Dictionary_2_get_Count_m3DD3471427343BF35F167E67DAC91CA242DF9181(L_75, Dictionary_2_get_Count_m3DD3471427343BF35F167E67DAC91CA242DF9181_RuntimeMethod_var);
		if ((((int32_t)L_74) < ((int32_t)L_76)))
		{
			goto IL_0066;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GridGenerator::SpawnCell(UnityEngine.GameObject,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_SpawnCell_mD035BCE7B6FB11FA9428EC729D716E04574D4257 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___matrixPrefab0, int32_t ___indexRowNumbers1, int32_t ___indexNumber2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_mDCA0E76F08ABA3862C853B2A0D375205C721A0AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// GameObject cellPrefab = Instantiate(_cellPrefab, new Vector3(), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____cellPrefab_5;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_0, L_1, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// cellPrefab.transform.SetParent(matrixPrefab.transform, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___matrixPrefab0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_5);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_5, L_7, (bool)0, NULL);
		// cellPrefab.GetComponent<Cell>().SetTrueNumber(_cellsGrid[indexRowNumbers][indexNumber].GetTrueNumber());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_4;
		NullCheck(L_8);
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_9;
		L_9 = GameObject_GetComponent_TisCell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_mDCA0E76F08ABA3862C853B2A0D375205C721A0AF(L_8, GameObject_GetComponent_TisCell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_mDCA0E76F08ABA3862C853B2A0D375205C721A0AF_RuntimeMethod_var);
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_10 = __this->____cellsGrid_14;
		int32_t L_11 = ___indexRowNumbers1;
		NullCheck(L_10);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_12;
		L_12 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_10, L_11, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		int32_t L_13 = ___indexNumber2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Cell_GetTrueNumber_m444FDFC16A0AE9D21CCAC944569D7FDEED6CFB9A_inline(L_15, NULL);
		NullCheck(L_9);
		Cell_SetTrueNumber_mDD4199345406DBE56526747024968AF4F7A580DC_inline(L_9, L_16, NULL);
		// cellPrefab.GetComponent<Cell>().SetBlock(_cellsGrid[indexRowNumbers][indexNumber].GetBlock());
		NullCheck(L_8);
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_17;
		L_17 = GameObject_GetComponent_TisCell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_mDCA0E76F08ABA3862C853B2A0D375205C721A0AF(L_8, GameObject_GetComponent_TisCell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_mDCA0E76F08ABA3862C853B2A0D375205C721A0AF_RuntimeMethod_var);
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_18 = __this->____cellsGrid_14;
		int32_t L_19 = ___indexRowNumbers1;
		NullCheck(L_18);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_20;
		L_20 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_18, L_19, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		int32_t L_21 = ___indexNumber2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		bool L_24;
		L_24 = Cell_GetBlock_mB7312C68DC93EF9C37DCA4CE2585DFE635CC2E7D_inline(L_23, NULL);
		NullCheck(L_17);
		Cell_SetBlock_m0A371E296D30CBB45D0D13BFEB6CCB136A356FB4_inline(L_17, L_24, NULL);
		// }
		return;
	}
}
// System.Void GridGenerator::PoolMatrix(System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_PoolMatrix_m028EA6B840A963920A1D866A58A0AABAF6CA42DE (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* ___matrices0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mEE66CB46A21B71EAE52B3F2ED82E8B95E58D0821_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mA812D91FE8B310DE904FBA1F50374F4180617D2D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// for (int indexColumnMatrix = 0; indexColumnMatrix < matrices[0].Length; indexColumnMatrix++)
		V_0 = 0;
		goto IL_0075;
	}

IL_0004:
	{
		// for (int indexRowMatrix = 0; indexRowMatrix < matrices.Count; indexRowMatrix++)
		V_1 = 0;
		goto IL_0068;
	}

IL_0008:
	{
		// for (int indexRowNumbers = indexRowMatrix * matrices.Count; indexRowNumbers < indexRowMatrix * matrices.Count + matrices.Count; indexRowNumbers++)
		int32_t L_0 = V_1;
		Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* L_1 = ___matrices0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Dictionary_2_get_Count_mEE66CB46A21B71EAE52B3F2ED82E8B95E58D0821(L_1, Dictionary_2_get_Count_mEE66CB46A21B71EAE52B3F2ED82E8B95E58D0821_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_0, L_2));
		goto IL_0052;
	}

IL_0013:
	{
		// for (int indexNumber = indexColumnMatrix * matrices[0].Length; indexNumber < indexColumnMatrix * matrices[0].Length + matrices[0].Length; indexNumber++)
		int32_t L_3 = V_0;
		Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* L_4 = ___matrices0;
		NullCheck(L_4);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5;
		L_5 = Dictionary_2_get_Item_mA812D91FE8B310DE904FBA1F50374F4180617D2D(L_4, 0, Dictionary_2_get_Item_mA812D91FE8B310DE904FBA1F50374F4180617D2D_RuntimeMethod_var);
		NullCheck(L_5);
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)(((RuntimeArray*)L_5)->max_length))));
		goto IL_0036;
	}

IL_0021:
	{
		// SpawnCell(matrices[indexRowMatrix][indexColumnMatrix], indexRowNumbers, indexNumber);
		Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* L_6 = ___matrices0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8;
		L_8 = Dictionary_2_get_Item_mA812D91FE8B310DE904FBA1F50374F4180617D2D(L_6, L_7, Dictionary_2_get_Item_mA812D91FE8B310DE904FBA1F50374F4180617D2D_RuntimeMethod_var);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = V_2;
		int32_t L_13 = V_3;
		GridGenerator_SpawnCell_mD035BCE7B6FB11FA9428EC729D716E04574D4257(__this, L_11, L_12, L_13, NULL);
		// for (int indexNumber = indexColumnMatrix * matrices[0].Length; indexNumber < indexColumnMatrix * matrices[0].Length + matrices[0].Length; indexNumber++)
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0036:
	{
		// for (int indexNumber = indexColumnMatrix * matrices[0].Length; indexNumber < indexColumnMatrix * matrices[0].Length + matrices[0].Length; indexNumber++)
		int32_t L_15 = V_3;
		int32_t L_16 = V_0;
		Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* L_17 = ___matrices0;
		NullCheck(L_17);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18;
		L_18 = Dictionary_2_get_Item_mA812D91FE8B310DE904FBA1F50374F4180617D2D(L_17, 0, Dictionary_2_get_Item_mA812D91FE8B310DE904FBA1F50374F4180617D2D_RuntimeMethod_var);
		NullCheck(L_18);
		Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* L_19 = ___matrices0;
		NullCheck(L_19);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20;
		L_20 = Dictionary_2_get_Item_mA812D91FE8B310DE904FBA1F50374F4180617D2D(L_19, 0, Dictionary_2_get_Item_mA812D91FE8B310DE904FBA1F50374F4180617D2D_RuntimeMethod_var);
		NullCheck(L_20);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)(((RuntimeArray*)L_18)->max_length)))), ((int32_t)(((RuntimeArray*)L_20)->max_length)))))))
		{
			goto IL_0021;
		}
	}
	{
		// for (int indexRowNumbers = indexRowMatrix * matrices.Count; indexRowNumbers < indexRowMatrix * matrices.Count + matrices.Count; indexRowNumbers++)
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0052:
	{
		// for (int indexRowNumbers = indexRowMatrix * matrices.Count; indexRowNumbers < indexRowMatrix * matrices.Count + matrices.Count; indexRowNumbers++)
		int32_t L_22 = V_2;
		int32_t L_23 = V_1;
		Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* L_24 = ___matrices0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = Dictionary_2_get_Count_mEE66CB46A21B71EAE52B3F2ED82E8B95E58D0821(L_24, Dictionary_2_get_Count_mEE66CB46A21B71EAE52B3F2ED82E8B95E58D0821_RuntimeMethod_var);
		Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* L_26 = ___matrices0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = Dictionary_2_get_Count_mEE66CB46A21B71EAE52B3F2ED82E8B95E58D0821(L_26, Dictionary_2_get_Count_mEE66CB46A21B71EAE52B3F2ED82E8B95E58D0821_RuntimeMethod_var);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_23, L_25)), L_27)))))
		{
			goto IL_0013;
		}
	}
	{
		// for (int indexRowMatrix = 0; indexRowMatrix < matrices.Count; indexRowMatrix++)
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0068:
	{
		// for (int indexRowMatrix = 0; indexRowMatrix < matrices.Count; indexRowMatrix++)
		int32_t L_29 = V_1;
		Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* L_30 = ___matrices0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = Dictionary_2_get_Count_mEE66CB46A21B71EAE52B3F2ED82E8B95E58D0821(L_30, Dictionary_2_get_Count_mEE66CB46A21B71EAE52B3F2ED82E8B95E58D0821_RuntimeMethod_var);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_0008;
		}
	}
	{
		// for (int indexColumnMatrix = 0; indexColumnMatrix < matrices[0].Length; indexColumnMatrix++)
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0075:
	{
		// for (int indexColumnMatrix = 0; indexColumnMatrix < matrices[0].Length; indexColumnMatrix++)
		int32_t L_33 = V_0;
		Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* L_34 = ___matrices0;
		NullCheck(L_34);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_35;
		L_35 = Dictionary_2_get_Item_mA812D91FE8B310DE904FBA1F50374F4180617D2D(L_34, 0, Dictionary_2_get_Item_mA812D91FE8B310DE904FBA1F50374F4180617D2D_RuntimeMethod_var);
		NullCheck(L_35);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GridGenerator::RandomOpenCells(System.Collections.Generic.Dictionary`2<System.Int32,Cell[]>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_RandomOpenCells_m728F27695C7DB1C3F3E18E837096E8FC482EBAEC (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* ___cellsGrid0, String_t* ___lvl1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m3DD3471427343BF35F167E67DAC91CA242DF9181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34F92C46F045354EEC9FBFCC82EE0690422992C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BD3052BB1EC7598F0952B3FA0F49095189128A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9752B1F8ECD74E47277F9984984568B584B27B20);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		String_t* L_0 = ___lvl1;
		bool L_1;
		L_1 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, _stringLiteral9752B1F8ECD74E47277F9984984568B584B27B20, NULL);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_2 = ___lvl1;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral4BD3052BB1EC7598F0952B3FA0F49095189128A3, NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_4 = ___lvl1;
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteral34F92C46F045354EEC9FBFCC82EE0690422992C4, NULL);
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		goto IL_0038;
	}

IL_0029:
	{
		// minCellsForOpening = 35;
		V_0 = ((int32_t)35);
		// break;
		goto IL_009b;
	}

IL_002e:
	{
		// minCellsForOpening = 32;
		V_0 = ((int32_t)32);
		// break;
		goto IL_009b;
	}

IL_0033:
	{
		// minCellsForOpening = 28;
		V_0 = ((int32_t)28);
		// break;
		goto IL_009b;
	}

IL_0038:
	{
		// minCellsForOpening = 32;
		V_0 = ((int32_t)32);
		// break;
		goto IL_009b;
	}

IL_003d:
	{
		// for (int indexRow = 0; indexRow < cellsGrid.Count; indexRow++)
		V_1 = 0;
		goto IL_0092;
	}

IL_0041:
	{
		// if(GetOpenCountCells() > minCellsForOpening)
		int32_t L_6;
		L_6 = GridGenerator_GetOpenCountCells_m18B9AC75B7BECEE091793139675F09FBD8DD9B27_inline(__this, NULL);
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) > ((int32_t)L_7)))
		{
			goto IL_009b;
		}
	}
	{
		// int countNumbersOpenInTheRow = Random.Range(4, 5);
		int32_t L_8;
		L_8 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(4, 5, NULL);
		V_2 = L_8;
		// for (int indexNumber = 0; indexNumber < countNumbersOpenInTheRow; indexNumber++)
		V_3 = 0;
		goto IL_008a;
	}

IL_0056:
	{
		// int randomIndex = Random.Range(0, 8);
		int32_t L_9;
		L_9 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 8, NULL);
		V_4 = L_9;
		// if (!cellsGrid[indexRow][randomIndex].GetBlock())
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_10 = ___cellsGrid0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_12;
		L_12 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_10, L_11, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		bool L_16;
		L_16 = Cell_GetBlock_mB7312C68DC93EF9C37DCA4CE2585DFE635CC2E7D_inline(L_15, NULL);
		if (L_16)
		{
			goto IL_0086;
		}
	}
	{
		// cellsGrid[indexRow][randomIndex].SetBlock(true);
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_17 = ___cellsGrid0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_19;
		L_19 = Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B(L_17, L_18, Dictionary_2_get_Item_m821EE6EE1FD14DBBC03BA2AAB1E2B7CB6C67B60B_RuntimeMethod_var);
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Cell_SetBlock_m0A371E296D30CBB45D0D13BFEB6CCB136A356FB4_inline(L_22, (bool)1, NULL);
		// SetOpenCountCells();
		GridGenerator_SetOpenCountCells_mC9098B287722BBFDB3B8D021546CE8B6555770C8(__this, NULL);
	}

IL_0086:
	{
		// for (int indexNumber = 0; indexNumber < countNumbersOpenInTheRow; indexNumber++)
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_008a:
	{
		// for (int indexNumber = 0; indexNumber < countNumbersOpenInTheRow; indexNumber++)
		int32_t L_24 = V_3;
		int32_t L_25 = V_2;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0056;
		}
	}
	{
		// for (int indexRow = 0; indexRow < cellsGrid.Count; indexRow++)
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0092:
	{
		// for (int indexRow = 0; indexRow < cellsGrid.Count; indexRow++)
		int32_t L_27 = V_1;
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_28 = ___cellsGrid0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = Dictionary_2_get_Count_m3DD3471427343BF35F167E67DAC91CA242DF9181(L_28, Dictionary_2_get_Count_m3DD3471427343BF35F167E67DAC91CA242DF9181_RuntimeMethod_var);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0041;
		}
	}

IL_009b:
	{
		// while(GetOpenCountCells() < minCellsForOpening)
		int32_t L_30;
		L_30 = GridGenerator_GetOpenCountCells_m18B9AC75B7BECEE091793139675F09FBD8DD9B27_inline(__this, NULL);
		int32_t L_31 = V_0;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_003d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GridGenerator::SpawnNumberButtonList(System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator_SpawnNumberButtonList_m75649DB8A94945AF953BB0F409A0B00849865032 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___numberButtonList0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83BDDE957990475AC96D3CEAD0905F689C9F73C5);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var item in numberButtonList)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = ___numberButtonList0;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002f_1;
			}

IL_0009_1:
			{
				// foreach (var item in numberButtonList)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// GameObject numberButton = Instantiate(item);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
				L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
				// numberButton.transform.SetParent(GameObject.FindGameObjectWithTag("NumbersPanel").transform, false);
				NullCheck(L_3);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
				L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
				L_5 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteral83BDDE957990475AC96D3CEAD0905F689C9F73C5, NULL);
				NullCheck(L_5);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
				L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
				NullCheck(L_4);
				Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_4, L_6, (bool)0, NULL);
			}

IL_002f_1:
			{
				// foreach (var item in numberButtonList)
				bool L_7;
				L_7 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0048;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void GridGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGenerator__ctor_mC7CD5D375B84E1692D9FDDE4B138C56E678191F2 (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m97CA2375ACDBDDA203173ADF3FE70D8D3A760A64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFD549E360DA40C8F8320EAD046D469395C198AD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9242BF83415E907FCF962578CE4F90EB39A5D582_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEDA86F201BDF45741A63879C26E72633540F51A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA67244141E978011D16C324808EB61B56151233E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private List<GameObject> _numberButtonList = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->____numberButtonList_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____numberButtonList_10), (void*)L_0);
		// private Dictionary<int, Cell[]> _cellsGrid = new Dictionary<int, Cell[]>()
		// {
		//     {0, new  Cell[9]},
		//     {1, new  Cell[9]},
		//     {2, new  Cell[9]},
		//     {3, new  Cell[9]},
		//     {4, new  Cell[9]},
		//     {5, new  Cell[9]},
		//     {6, new  Cell[9]},
		//     {7, new  Cell[9]},
		//     {8, new  Cell[9]}
		// };
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_1 = (Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8*)il2cpp_codegen_object_new(Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mEDA86F201BDF45741A63879C26E72633540F51A0(L_1, Dictionary_2__ctor_mEDA86F201BDF45741A63879C26E72633540F51A0_RuntimeMethod_var);
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_2 = L_1;
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_3 = (CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*)(CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*)SZArrayNew(CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		NullCheck(L_2);
		Dictionary_2_Add_m97CA2375ACDBDDA203173ADF3FE70D8D3A760A64(L_2, 0, L_3, Dictionary_2_Add_m97CA2375ACDBDDA203173ADF3FE70D8D3A760A64_RuntimeMethod_var);
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_4 = L_2;
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_5 = (CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*)(CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*)SZArrayNew(CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		NullCheck(L_4);
		Dictionary_2_Add_m97CA2375ACDBDDA203173ADF3FE70D8D3A760A64(L_4, 1, L_5, Dictionary_2_Add_m97CA2375ACDBDDA203173ADF3FE70D8D3A760A64_RuntimeMethod_var);
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_6 = L_4;
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_7 = (CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*)(CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*)SZArrayNew(CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		NullCheck(L_6);
		Dictionary_2_Add_m97CA2375ACDBDDA203173ADF3FE70D8D3A760A64(L_6, 2, L_7, Dictionary_2_Add_m97CA2375ACDBDDA203173ADF3FE70D8D3A760A64_RuntimeMethod_var);
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_8 = L_6;
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_9 = (CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*)(CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*)SZArrayNew(CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		NullCheck(L_8);
		Dictionary_2_Add_m97CA2375ACDBDDA203173ADF3FE70D8D3A760A64(L_8, 3, L_9, Dictionary_2_Add_m97CA2375ACDBDDA203173ADF3FE70D8D3A760A64_RuntimeMethod_var);
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_10 = L_8;
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_11 = (CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*)(CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*)SZArrayNew(CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		NullCheck(L_10);
		Dictionary_2_Add_m97CA2375ACDBDDA203173ADF3FE70D8D3A760A64(L_10, 4, L_11, Dictionary_2_Add_m97CA2375ACDBDDA203173ADF3FE70D8D3A760A64_RuntimeMethod_var);
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_12 = L_10;
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_13 = (CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*)(CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*)SZArrayNew(CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		NullCheck(L_12);
		Dictionary_2_Add_m97CA2375ACDBDDA203173ADF3FE70D8D3A760A64(L_12, 5, L_13, Dictionary_2_Add_m97CA2375ACDBDDA203173ADF3FE70D8D3A760A64_RuntimeMethod_var);
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_14 = L_12;
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_15 = (CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*)(CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*)SZArrayNew(CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		NullCheck(L_14);
		Dictionary_2_Add_m97CA2375ACDBDDA203173ADF3FE70D8D3A760A64(L_14, 6, L_15, Dictionary_2_Add_m97CA2375ACDBDDA203173ADF3FE70D8D3A760A64_RuntimeMethod_var);
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_16 = L_14;
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_17 = (CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*)(CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*)SZArrayNew(CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		NullCheck(L_16);
		Dictionary_2_Add_m97CA2375ACDBDDA203173ADF3FE70D8D3A760A64(L_16, 7, L_17, Dictionary_2_Add_m97CA2375ACDBDDA203173ADF3FE70D8D3A760A64_RuntimeMethod_var);
		Dictionary_2_tA730D810CEDF8899940E95904CC215326AC30CF8* L_18 = L_16;
		CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0* L_19 = (CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*)(CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0*)SZArrayNew(CellU5BU5D_t0E72BD3F6FA8728DBCB5A3B12E47A9DACB8005B0_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		NullCheck(L_18);
		Dictionary_2_Add_m97CA2375ACDBDDA203173ADF3FE70D8D3A760A64(L_18, 8, L_19, Dictionary_2_Add_m97CA2375ACDBDDA203173ADF3FE70D8D3A760A64_RuntimeMethod_var);
		__this->____cellsGrid_14 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cellsGrid_14), (void*)L_18);
		// private Dictionary<int, GameObject[]> _matrices = new Dictionary<int, GameObject[]>()
		// {
		//     {0, new GameObject[3]},
		//     {1, new GameObject[3]},
		//     {2, new GameObject[3]}
		// };
		Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* L_20 = (Dictionary_2_tA67244141E978011D16C324808EB61B56151233E*)il2cpp_codegen_object_new(Dictionary_2_tA67244141E978011D16C324808EB61B56151233E_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Dictionary_2__ctor_m9242BF83415E907FCF962578CE4F90EB39A5D582(L_20, Dictionary_2__ctor_m9242BF83415E907FCF962578CE4F90EB39A5D582_RuntimeMethod_var);
		Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* L_21 = L_20;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_22 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)3);
		NullCheck(L_21);
		Dictionary_2_Add_mFD549E360DA40C8F8320EAD046D469395C198AD3(L_21, 0, L_22, Dictionary_2_Add_mFD549E360DA40C8F8320EAD046D469395C198AD3_RuntimeMethod_var);
		Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* L_23 = L_21;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_24 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)3);
		NullCheck(L_23);
		Dictionary_2_Add_mFD549E360DA40C8F8320EAD046D469395C198AD3(L_23, 1, L_24, Dictionary_2_Add_mFD549E360DA40C8F8320EAD046D469395C198AD3_RuntimeMethod_var);
		Dictionary_2_tA67244141E978011D16C324808EB61B56151233E* L_25 = L_23;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_26 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)3);
		NullCheck(L_25);
		Dictionary_2_Add_mFD549E360DA40C8F8320EAD046D469395C198AD3(L_25, 2, L_26, Dictionary_2_Add_mFD549E360DA40C8F8320EAD046D469395C198AD3_RuntimeMethod_var);
		__this->____matrices_15 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____matrices_15), (void*)L_25);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Number::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_Start_m5899C2579FADC587CF74BCDADDB6ECF5E799F1C2 (Number_tEBF6658D4F4914215862D82F55F8186CFC2EA119* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Number_SetButtonNumberColor_mA8B869F977FCF050CE9E58F0BC1C10B7C6D44323_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Number_SetMabyNumber_m94D75B7C4B5E23F6953CA6B2DEC5B780C3EB6CD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Number_SetSelectNumber_mDE3584003293497E070B828AA256EE610EFD5ED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_mC5A02CF46A925164EB7B42855AEA2AC1CFE002FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _audioSource = FindObjectOfType<AudioFX>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* L_0;
		L_0 = Object_FindObjectOfType_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_mC5A02CF46A925164EB7B42855AEA2AC1CFE002FD(Object_FindObjectOfType_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_mC5A02CF46A925164EB7B42855AEA2AC1CFE002FD_RuntimeMethod_var);
		__this->____audioSource_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioSource_5), (void*)L_0);
		// GameEvents.buttonNumberSetEvent.AddListener(SetSelectNumber);
		il2cpp_codegen_runtime_class_init_inline(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_1 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonNumberSetEvent_9;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_2 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_2, __this, (intptr_t)((void*)Number_SetSelectNumber_mDE3584003293497E070B828AA256EE610EFD5ED5_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_1, L_2, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// GameEvents.buttonNumberSetColorEvent.AddListener(SetButtonNumberColor);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonNumberSetColorEvent_4;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)Number_SetButtonNumberColor_mA8B869F977FCF050CE9E58F0BC1C10B7C6D44323_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
		// GameEvents.buttonMabyNumberEvent.AddListener(SetMabyNumber);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_5 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonMabyNumberEvent_12;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_6 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_6, __this, (intptr_t)((void*)Number_SetMabyNumber_m94D75B7C4B5E23F6953CA6B2DEC5B780C3EB6CD1_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_5, L_6, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Number::GetSelectNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Number_GetSelectNumber_mA7FCA68C0B95196A51CCAE44FDD22262A1BBCCBB (Number_tEBF6658D4F4914215862D82F55F8186CFC2EA119* __this, const RuntimeMethod* method) 
{
	{
		// private bool GetSelectNumber() => _selectNumber;
		bool L_0 = __this->____selectNumber_6;
		return L_0;
	}
}
// System.Void Number::SetSelectNumber(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_SetSelectNumber_mDE3584003293497E070B828AA256EE610EFD5ED5 (Number_tEBF6658D4F4914215862D82F55F8186CFC2EA119* __this, bool ___selectNumber0, const RuntimeMethod* method) 
{
	{
		// private void SetSelectNumber(bool selectNumber) => _selectNumber = selectNumber;
		bool L_0 = ___selectNumber0;
		__this->____selectNumber_6 = L_0;
		return;
	}
}
// System.Boolean Number::GetMabyNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Number_GetMabyNumber_mA065DADA1C77A208FDC535504EB1C6D3A6B03388 (Number_tEBF6658D4F4914215862D82F55F8186CFC2EA119* __this, const RuntimeMethod* method) 
{
	{
		// private bool GetMabyNumber() => _mabyNumber;
		bool L_0 = __this->____mabyNumber_7;
		return L_0;
	}
}
// System.Void Number::SetMabyNumber(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_SetMabyNumber_m94D75B7C4B5E23F6953CA6B2DEC5B780C3EB6CD1 (Number_tEBF6658D4F4914215862D82F55F8186CFC2EA119* __this, bool ___mabyNumber0, const RuntimeMethod* method) 
{
	{
		// private void SetMabyNumber(bool mabyNumber) => _mabyNumber = mabyNumber;
		bool L_0 = ___mabyNumber0;
		__this->____mabyNumber_7 = L_0;
		return;
	}
}
// System.Void Number::SetButtonNumberColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_SetButtonNumberColor_mA8B869F977FCF050CE9E58F0BC1C10B7C6D44323 (Number_tEBF6658D4F4914215862D82F55F8186CFC2EA119* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((GetSelectNumber() && Cell.numberButton != _numberButton) || (GetMabyNumber() && GetSelectNumber()))
		bool L_0;
		L_0 = Number_GetSelectNumber_mA7FCA68C0B95196A51CCAE44FDD22262A1BBCCBB_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ((Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_StaticFields*)il2cpp_codegen_static_fields_for(Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var))->___numberButton_16;
		int32_t L_2 = __this->____numberButton_4;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0025;
		}
	}

IL_0015:
	{
		bool L_3;
		L_3 = Number_GetMabyNumber_mA065DADA1C77A208FDC535504EB1C6D3A6B03388_inline(__this, NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		bool L_4;
		L_4 = Number_GetSelectNumber_mA7FCA68C0B95196A51CCAE44FDD22262A1BBCCBB_inline(__this, NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}

IL_0025:
	{
		// GetComponent<Image>().color = Color.cyan;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_cyan_m1257FED4776F2A33BD7250357D024B3FA3E592EB_inline(NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		return;
	}

IL_0036:
	{
		// GetComponent<Image>().color = Color.white;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7;
		L_7 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		// }
		return;
	}
}
// System.Void Number::SelectButtonNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_SelectButtonNumber_mA4ADBE15827D994A7F45BC71AFF9AAD4F05101AB (Number_tEBF6658D4F4914215862D82F55F8186CFC2EA119* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _audioSource.PlayAudioSetNumber();
		AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* L_0 = __this->____audioSource_5;
		NullCheck(L_0);
		AudioFX_PlayAudioSetNumber_mD3474093EF6547DED30C0DF47E1839E96474BD54(L_0, NULL);
		// GameEvents.buttonSomeNumberEvent.Invoke(false);
		il2cpp_codegen_runtime_class_init_inline(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_1 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonSomeNumberEvent_10;
		NullCheck(L_1);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_1, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.setColorButtonSomeNumberEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setColorButtonSomeNumberEvent_6;
		NullCheck(L_2);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_2, NULL);
		// GameEvents.buttonNumberSetEvent.Invoke(false);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_3 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonNumberSetEvent_9;
		NullCheck(L_3);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_3, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// SetSelectNumber(true);
		Number_SetSelectNumber_mDE3584003293497E070B828AA256EE610EFD5ED5_inline(__this, (bool)1, NULL);
		// GameEvents.buttonNumberSetColorEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonNumberSetColorEvent_4;
		NullCheck(L_4);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_4, NULL);
		// GameEvents.buttonClearEvent.Invoke(false);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_5 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonClearEvent_13;
		NullCheck(L_5);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_5, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.setColorClearButtonEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_6 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setColorClearButtonEvent_8;
		NullCheck(L_6);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_6, NULL);
		// if (GetSelectNumber() && !GetMabyNumber() && Cell.numberButton != _numberButton)
		bool L_7;
		L_7 = Number_GetSelectNumber_mA7FCA68C0B95196A51CCAE44FDD22262A1BBCCBB_inline(__this, NULL);
		if (!L_7)
		{
			goto IL_008f;
		}
	}
	{
		bool L_8;
		L_8 = Number_GetMabyNumber_mA065DADA1C77A208FDC535504EB1C6D3A6B03388_inline(__this, NULL);
		if (L_8)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_9 = ((Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_StaticFields*)il2cpp_codegen_static_fields_for(Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var))->___numberButton_16;
		int32_t L_10 = __this->____numberButton_4;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_008f;
		}
	}
	{
		// Cell.numberButton = _numberButton;
		int32_t L_11 = __this->____numberButton_4;
		((Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_StaticFields*)il2cpp_codegen_static_fields_for(Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var))->___numberButton_16 = L_11;
		// GameEvents.setCanBeSetPlayerNumberEvent.Invoke(true);
		il2cpp_codegen_runtime_class_init_inline(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_12 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCanBeSetPlayerNumberEvent_11;
		NullCheck(L_12);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_12, (bool)1, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.setCellColorEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_13 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCellColorEvent_5;
		NullCheck(L_13);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_13, NULL);
		return;
	}

IL_008f:
	{
		// else if (GetMabyNumber() && GetSelectNumber())
		bool L_14;
		L_14 = Number_GetMabyNumber_mA065DADA1C77A208FDC535504EB1C6D3A6B03388_inline(__this, NULL);
		if (!L_14)
		{
			goto IL_00c0;
		}
	}
	{
		bool L_15;
		L_15 = Number_GetSelectNumber_mA7FCA68C0B95196A51CCAE44FDD22262A1BBCCBB_inline(__this, NULL);
		if (!L_15)
		{
			goto IL_00c0;
		}
	}
	{
		// Cell.numberButton = _numberButton;
		int32_t L_16 = __this->____numberButton_4;
		((Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_StaticFields*)il2cpp_codegen_static_fields_for(Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var))->___numberButton_16 = L_16;
		// GameEvents.setCanBeSetPlayerNumberEvent.Invoke(false);
		il2cpp_codegen_runtime_class_init_inline(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_17 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCanBeSetPlayerNumberEvent_11;
		NullCheck(L_17);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_17, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.setCellColorEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_18 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCellColorEvent_5;
		NullCheck(L_18);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_18, NULL);
		return;
	}

IL_00c0:
	{
		// Cell.numberButton = 0;
		((Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_StaticFields*)il2cpp_codegen_static_fields_for(Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var))->___numberButton_16 = 0;
		// GameEvents.setCanBeSetPlayerNumberEvent.Invoke(false);
		il2cpp_codegen_runtime_class_init_inline(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_19 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCanBeSetPlayerNumberEvent_11;
		NullCheck(L_19);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_19, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.setCellColorEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_20 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCellColorEvent_5;
		NullCheck(L_20);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_20, NULL);
		// }
		return;
	}
}
// System.Void Number::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number__ctor_mF537777596A207C46CE724B4ADBD06C4BF62C00E (Number_tEBF6658D4F4914215862D82F55F8186CFC2EA119* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MenuManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Start_m58062825AA9A256E42311B4A4833E7425589BBDF (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	{
		// LoadScore();
		MenuManager_LoadScore_mEED024EE4A7B207BD797228E21D763AC06B3A86D(__this, NULL);
		// SetScore();
		MenuManager_SetScore_mAFAC1F072897A6BFBAF9342F50CF456A7A526AA3(__this, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::LoadScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_LoadScore_mEED024EE4A7B207BD797228E21D763AC06B3A86D (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F42F5C936B62465829D39E0D78AEB00CF685E7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2583E589FA3E95DD1BA6E24BF1C2AC18D041B062);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral615F08617A6BB8AE41FE079E06F3AB3E827437BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral981FDAAB8ED00F5CD504C1606E9EE7E61CEA428C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9A23CC6485ED0C3EA9C8C62BA91E1D1CD5C01C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA4550607643A4F93F43D7312ED8D5B5EDE40559);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2515E3704A7547CA894C95A945C924EA4E8C43D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// easyScore = PlayerPrefs.GetString("easyScore", "00:00:00");
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mC671EDA77D8D35BE514817F54950630327A74F63(_stringLiteral615F08617A6BB8AE41FE079E06F3AB3E827437BC, _stringLiteralDA4550607643A4F93F43D7312ED8D5B5EDE40559, NULL);
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___easyScore_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___easyScore_7), (void*)L_0);
		// mediumScore = PlayerPrefs.GetString("mediumScore", "00:00:00");
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mC671EDA77D8D35BE514817F54950630327A74F63(_stringLiteral2583E589FA3E95DD1BA6E24BF1C2AC18D041B062, _stringLiteralDA4550607643A4F93F43D7312ED8D5B5EDE40559, NULL);
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___mediumScore_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___mediumScore_8), (void*)L_1);
		// hardScore = PlayerPrefs.GetString("hardScore", "00:00:00");
		String_t* L_2;
		L_2 = PlayerPrefs_GetString_mC671EDA77D8D35BE514817F54950630327A74F63(_stringLiteralA9A23CC6485ED0C3EA9C8C62BA91E1D1CD5C01C9, _stringLiteralDA4550607643A4F93F43D7312ED8D5B5EDE40559, NULL);
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___hardScore_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___hardScore_9), (void*)L_2);
		// fullSecondsEasyScore = PlayerPrefs.GetInt("fullSecondsEasyScore");
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral981FDAAB8ED00F5CD504C1606E9EE7E61CEA428C, NULL);
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___fullSecondsEasyScore_11 = L_3;
		// fullSecondsMediumScore = PlayerPrefs.GetInt("fullSecondsMediumScore");
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteralE2515E3704A7547CA894C95A945C924EA4E8C43D, NULL);
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___fullSecondsMediumScore_12 = L_4;
		// fullSecondsHardScore = PlayerPrefs.GetInt("fullSecondsHardScore");
		int32_t L_5;
		L_5 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral1F42F5C936B62465829D39E0D78AEB00CF685E7B, NULL);
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___fullSecondsHardScore_13 = L_5;
		// }
		return;
	}
}
// System.Void MenuManager::SetScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_SetScore_mAFAC1F072897A6BFBAF9342F50CF456A7A526AA3 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _yeasyScoreText.text = easyScore;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____yeasyScoreText_4;
		String_t* L_1 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___easyScore_7;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// _mediumScoreText.text = mediumScore;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->____mediumScoreText_5;
		String_t* L_3 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___mediumScore_8;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// _hardScoreText.text = hardScore;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->____hardScoreText_6;
		String_t* L_5 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___hardScore_9;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		// }
		return;
	}
}
// System.Void MenuManager::SaveScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_SaveScore_m18E24205E5E5C557966AEC0E1642E923070F3010 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F42F5C936B62465829D39E0D78AEB00CF685E7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2583E589FA3E95DD1BA6E24BF1C2AC18D041B062);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral615F08617A6BB8AE41FE079E06F3AB3E827437BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral981FDAAB8ED00F5CD504C1606E9EE7E61CEA428C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9A23CC6485ED0C3EA9C8C62BA91E1D1CD5C01C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2515E3704A7547CA894C95A945C924EA4E8C43D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString("easyScore", easyScore);
		String_t* L_0 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___easyScore_7;
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteral615F08617A6BB8AE41FE079E06F3AB3E827437BC, L_0, NULL);
		// PlayerPrefs.SetString("mediumScore", mediumScore);
		String_t* L_1 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___mediumScore_8;
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteral2583E589FA3E95DD1BA6E24BF1C2AC18D041B062, L_1, NULL);
		// PlayerPrefs.SetString("hardScore", hardScore);
		String_t* L_2 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___hardScore_9;
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteralA9A23CC6485ED0C3EA9C8C62BA91E1D1CD5C01C9, L_2, NULL);
		// PlayerPrefs.SetInt("fullSecondsEasyScore", fullSecondsEasyScore);
		int32_t L_3 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___fullSecondsEasyScore_11;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral981FDAAB8ED00F5CD504C1606E9EE7E61CEA428C, L_3, NULL);
		// PlayerPrefs.SetInt("fullSecondsMediumScore", fullSecondsMediumScore);
		int32_t L_4 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___fullSecondsMediumScore_12;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralE2515E3704A7547CA894C95A945C924EA4E8C43D, L_4, NULL);
		// PlayerPrefs.SetInt("fullSecondsHardScore", fullSecondsHardScore);
		int32_t L_5 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___fullSecondsHardScore_13;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral1F42F5C936B62465829D39E0D78AEB00CF685E7B, L_5, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::DeleteAllScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_DeleteAllScore_m17A597389CB7FC6C248BD3330CFD687CB75E244F (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	{
		// PlayerPrefs.DeleteAll();
		PlayerPrefs_DeleteAll_mBB63C28A69EA934DC7DF12336F8D5341BF6CA521(NULL);
		// LoadScore();
		MenuManager_LoadScore_mEED024EE4A7B207BD797228E21D763AC06B3A86D(__this, NULL);
		// SetScore();
		MenuManager_SetScore_mAFAC1F072897A6BFBAF9342F50CF456A7A526AA3(__this, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::LoadGameSceneEasy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_LoadGameSceneEasy_mB40B52B10C03C67BD05B155F396C59938DB9D2BF (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9752B1F8ECD74E47277F9984984568B584B27B20);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lvl = "easy";
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___lvl_10 = _stringLiteral9752B1F8ECD74E47277F9984984568B584B27B20;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___lvl_10), (void*)_stringLiteral9752B1F8ECD74E47277F9984984568B584B27B20);
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(1, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::LoadGameSceneMedium()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_LoadGameSceneMedium_m01BA4732CDA8AC416962E34E1BBE7798B782C474 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BD3052BB1EC7598F0952B3FA0F49095189128A3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lvl = "medium";
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___lvl_10 = _stringLiteral4BD3052BB1EC7598F0952B3FA0F49095189128A3;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___lvl_10), (void*)_stringLiteral4BD3052BB1EC7598F0952B3FA0F49095189128A3);
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(1, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::LoadGameSceneHard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_LoadGameSceneHard_mBDCB72DB7E57026235562945B7575BDBF21FDFC5 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34F92C46F045354EEC9FBFCC82EE0690422992C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lvl = "hard";
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___lvl_10 = _stringLiteral34F92C46F045354EEC9FBFCC82EE0690422992C4;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___lvl_10), (void*)_stringLiteral34F92C46F045354EEC9FBFCC82EE0690422992C4);
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(1, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager__ctor_m07A22DFDD90E3164393F8BDE06DAEF5AFA786CF2 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void OpenSomeCell::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSomeCell_Start_m47E3C7C46AF49A12D3E2788EE1FDA4E09C330323 (OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_mC5A02CF46A925164EB7B42855AEA2AC1CFE002FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenSomeCell_SetButtonSomeNumber_mB7B65EC73BB824C5BDD07D76CB066D2A9680B688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenSomeCell_SetColorButunSomeNumber_m9287831D2FF6E005FD18C5CE83B609F9AD908E65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _audioSource = FindObjectOfType<AudioFX>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* L_0;
		L_0 = Object_FindObjectOfType_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_mC5A02CF46A925164EB7B42855AEA2AC1CFE002FD(Object_FindObjectOfType_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_mC5A02CF46A925164EB7B42855AEA2AC1CFE002FD_RuntimeMethod_var);
		__this->____audioSource_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioSource_7), (void*)L_0);
		// SetCountCanBeOpenCellsText();
		OpenSomeCell_SetCountCanBeOpenCellsText_m7D7104BD2EF9DCC13B9C7C0965B704C247DE8CD9(__this, NULL);
		// GameEvents.buttonSomeNumberEvent.AddListener(SetButtonSomeNumber);
		il2cpp_codegen_runtime_class_init_inline(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_1 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonSomeNumberEvent_10;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_2 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_2, __this, (intptr_t)((void*)OpenSomeCell_SetButtonSomeNumber_mB7B65EC73BB824C5BDD07D76CB066D2A9680B688_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_1, L_2, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// GameEvents.setColorButtonSomeNumberEvent.AddListener(SetColorButunSomeNumber);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setColorButtonSomeNumberEvent_6;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)OpenSomeCell_SetColorButunSomeNumber_m9287831D2FF6E005FD18C5CE83B609F9AD908E65_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void OpenSomeCell::SetButtonSomeNumber(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSomeCell_SetButtonSomeNumber_mB7B65EC73BB824C5BDD07D76CB066D2A9680B688 (OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* __this, bool ___buttonSomeNumber0, const RuntimeMethod* method) 
{
	{
		// private void SetButtonSomeNumber(bool buttonSomeNumber) => _buttonSomeNumber = buttonSomeNumber;
		bool L_0 = ___buttonSomeNumber0;
		__this->____buttonSomeNumber_8 = L_0;
		return;
	}
}
// System.Boolean OpenSomeCell::GetButtonSomeNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenSomeCell_GetButtonSomeNumber_m1157231114C7A26DEAE52D6508A3CCE545E85135 (OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* __this, const RuntimeMethod* method) 
{
	{
		// private bool GetButtonSomeNumber() => _buttonSomeNumber;
		bool L_0 = __this->____buttonSomeNumber_8;
		return L_0;
	}
}
// System.Void OpenSomeCell::SetCountCanBeOpenCellsText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSomeCell_SetCountCanBeOpenCellsText_m7D7104BD2EF9DCC13B9C7C0965B704C247DE8CD9 (OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* __this, const RuntimeMethod* method) 
{
	{
		// private void SetCountCanBeOpenCellsText() => _countCanBeOpenCellsText.text = _countCanBeOpenCells.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____countCanBeOpenCellsText_6;
		int32_t* L_1 = (&__this->____countCanBeOpenCells_4);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		return;
	}
}
// System.Int32 OpenSomeCell::GetCountCanBeOpenCells()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenSomeCell_GetCountCanBeOpenCells_m38C047CA0BE8A46046FF689A1315D5470FE6AE9D (OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* __this, const RuntimeMethod* method) 
{
	{
		// public int GetCountCanBeOpenCells() => _countCanBeOpenCells;
		int32_t L_0 = __this->____countCanBeOpenCells_4;
		return L_0;
	}
}
// System.Void OpenSomeCell::SetColorButunSomeNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSomeCell_SetColorButunSomeNumber_m9287831D2FF6E005FD18C5CE83B609F9AD908E65 (OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetButtonSomeNumber())
		bool L_0;
		L_0 = OpenSomeCell_GetButtonSomeNumber_m1157231114C7A26DEAE52D6508A3CCE545E85135_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// GetComponent<Image>().color = Color.cyan;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_cyan_m1257FED4776F2A33BD7250357D024B3FA3E592EB_inline(NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		return;
	}

IL_0019:
	{
		// GetComponent<Image>().color = Color.white;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// }
		return;
	}
}
// System.Void OpenSomeCell::SetCountCanBeOpenCells()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSomeCell_SetCountCanBeOpenCells_mB639FCED9053DC59CAF05DBA972AA8EA2DE1C7C4 (OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _countCanBeOpenCells--;
		int32_t L_0 = __this->____countCanBeOpenCells_4;
		__this->____countCanBeOpenCells_4 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// SetCountCanBeOpenCellsText();
		OpenSomeCell_SetCountCanBeOpenCellsText_m7D7104BD2EF9DCC13B9C7C0965B704C247DE8CD9(__this, NULL);
		// if(GetCountCanBeOpenCells() == 0)
		int32_t L_1;
		L_1 = OpenSomeCell_GetCountCanBeOpenCells_m38C047CA0BE8A46046FF689A1315D5470FE6AE9D_inline(__this, NULL);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		// GetComponent<Button>().interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2;
		L_2 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_2);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_2, (bool)0, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void OpenSomeCell::GetBonus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSomeCell_GetBonus_m4C9B69110A2B76538DA8ED8127FC9A00C95B9040 (OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _countCanBeOpenCells++;
		int32_t L_0 = __this->____countCanBeOpenCells_4;
		__this->____countCanBeOpenCells_4 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// SetCountCanBeOpenCellsText();
		OpenSomeCell_SetCountCanBeOpenCellsText_m7D7104BD2EF9DCC13B9C7C0965B704C247DE8CD9(__this, NULL);
		// if (GetCountCanBeOpenCells() > 0)
		int32_t L_1;
		L_1 = OpenSomeCell_GetCountCanBeOpenCells_m38C047CA0BE8A46046FF689A1315D5470FE6AE9D_inline(__this, NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		// GetComponent<Button>().interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2;
		L_2 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_2);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_2, (bool)1, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void OpenSomeCell::ClickOnButtonSomeNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSomeCell_ClickOnButtonSomeNumber_mC67F0E3D14760085909F2A9AC8A35FFC72F1839C (OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _audioSource.PlayAudioSetNumber();
		AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* L_0 = __this->____audioSource_7;
		NullCheck(L_0);
		AudioFX_PlayAudioSetNumber_mD3474093EF6547DED30C0DF47E1839E96474BD54(L_0, NULL);
		// _unityAds.LoarRewardedAds();
		UnityAds_t261657F9CACA9B380AA7BE6215A33A41E0F8292E* L_1 = __this->____unityAds_5;
		NullCheck(L_1);
		UnityAds_LoarRewardedAds_m3EE638FB65616180BD89D748BC4E9550C314A674(L_1, NULL);
		// GameEvents.buttonClearEvent.Invoke(false);
		il2cpp_codegen_runtime_class_init_inline(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_2 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonClearEvent_13;
		NullCheck(L_2);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_2, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.setColorClearButtonEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setColorClearButtonEvent_8;
		NullCheck(L_3);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_3, NULL);
		// SetButtonSomeNumber(!GetButtonSomeNumber());
		bool L_4;
		L_4 = OpenSomeCell_GetButtonSomeNumber_m1157231114C7A26DEAE52D6508A3CCE545E85135_inline(__this, NULL);
		OpenSomeCell_SetButtonSomeNumber_mB7B65EC73BB824C5BDD07D76CB066D2A9680B688_inline(__this, (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0), NULL);
		// if (GetButtonSomeNumber())
		bool L_5;
		L_5 = OpenSomeCell_GetButtonSomeNumber_m1157231114C7A26DEAE52D6508A3CCE545E85135_inline(__this, NULL);
		if (!L_5)
		{
			goto IL_0094;
		}
	}
	{
		// GameEvents.buttonNumberSetEvent.Invoke(false);
		il2cpp_codegen_runtime_class_init_inline(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_6 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonNumberSetEvent_9;
		NullCheck(L_6);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_6, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.setCanBeSetPlayerNumberEvent.Invoke(false);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_7 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCanBeSetPlayerNumberEvent_11;
		NullCheck(L_7);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_7, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.buttonSomeNumberEvent.Invoke(true);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_8 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonSomeNumberEvent_10;
		NullCheck(L_8);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_8, (bool)1, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.buttonMabyNumberEvent.Invoke(false);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_9 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonMabyNumberEvent_12;
		NullCheck(L_9);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_9, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.setColorMabyNumberButtonEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_10 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setColorMabyNumberButtonEvent_7;
		NullCheck(L_10);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_10, NULL);
		// GameEvents.setCellColorEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_11 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCellColorEvent_5;
		NullCheck(L_11);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_11, NULL);
		// GameEvents.buttonNumberSetColorEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_12 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonNumberSetColorEvent_4;
		NullCheck(L_12);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_12, NULL);
		// SetColorButunSomeNumber();
		OpenSomeCell_SetColorButunSomeNumber_m9287831D2FF6E005FD18C5CE83B609F9AD908E65(__this, NULL);
		goto IL_00af;
	}

IL_0094:
	{
		// GameEvents.buttonSomeNumberEvent.Invoke(false);
		il2cpp_codegen_runtime_class_init_inline(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_13 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonSomeNumberEvent_10;
		NullCheck(L_13);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_13, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.setCellColorEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_14 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCellColorEvent_5;
		NullCheck(L_14);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_14, NULL);
		// SetColorButunSomeNumber();
		OpenSomeCell_SetColorButunSomeNumber_m9287831D2FF6E005FD18C5CE83B609F9AD908E65(__this, NULL);
	}

IL_00af:
	{
		// Cell.numberButton = 0;
		((Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_StaticFields*)il2cpp_codegen_static_fields_for(Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var))->___numberButton_16 = 0;
		// }
		return;
	}
}
// System.Void OpenSomeCell::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSomeCell__ctor_mD4AD64175446DBEEC01149E15E6211480EBF0BF7 (OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean PauseGame::GetPauseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PauseGame_GetPauseStatus_mA84BDA15503876007E14CAB643302FC36942F25A (PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF* __this, const RuntimeMethod* method) 
{
	{
		// private bool GetPauseStatus() => _pauseStatus;
		bool L_0 = __this->____pauseStatus_5;
		return L_0;
	}
}
// System.Void PauseGame::SetPauseStatus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseGame_SetPauseStatus_m470D01A4090F81F99B7757EC31BBAF191C947DFF (PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF* __this, bool ___pauseStatus0, const RuntimeMethod* method) 
{
	{
		// private void SetPauseStatus(bool pauseStatus) => _pauseStatus = pauseStatus;
		bool L_0 = ___pauseStatus0;
		__this->____pauseStatus_5 = L_0;
		return;
	}
}
// System.Void PauseGame::PauseUnPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseGame_PauseUnPause_mB10E3C0B1F588A7FD1485C12CD6020A93C6DE4E7 (PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF* __this, const RuntimeMethod* method) 
{
	{
		// SetPauseStatus(!GetPauseStatus());
		bool L_0;
		L_0 = PauseGame_GetPauseStatus_mA84BDA15503876007E14CAB643302FC36942F25A_inline(__this, NULL);
		PauseGame_SetPauseStatus_m470D01A4090F81F99B7757EC31BBAF191C947DFF_inline(__this, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), NULL);
		// if (GetPauseStatus())
		bool L_1;
		L_1 = PauseGame_GetPauseStatus_mA84BDA15503876007E14CAB643302FC36942F25A_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// SetGamePause();
		PauseGame_SetGamePause_mDE448E068293D6DB107802C1CB8959D807C9B146(__this, NULL);
		// _pausePanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____pausePanel_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		return;
	}

IL_002a:
	{
		// SetGameUnPause();
		PauseGame_SetGameUnPause_mEA347B4D4501D3307A30F5A36C1BF21F139A85E9(__this, NULL);
		// _pausePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->____pausePanel_4;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PauseGame::SetGamePause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseGame_SetGamePause_mDE448E068293D6DB107802C1CB8959D807C9B146 (PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		// }
		return;
	}
}
// System.Void PauseGame::SetGameUnPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseGame_SetGameUnPause_mEA347B4D4501D3307A30F5A36C1BF21F139A85E9 (PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// }
		return;
	}
}
// System.Void PauseGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseGame__ctor_m40F04C5BDA467AE03A77CA6D7A4080F85CAA4056 (PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SetMabyNumber::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetMabyNumber_Start_m8620CD6310B082BF5451A5DD19968B343FA7B570 (SetMabyNumber_tE8829E4A0165C7BD47455387370ED6D493BE2AB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_mC5A02CF46A925164EB7B42855AEA2AC1CFE002FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetMabyNumber_SetButtonMabyNumber_mB55AC0058EA01E28BC7EDE8773263CD645139786_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetMabyNumber_SetColorButunMabyNumber_m3702DA4CFFC12DD67A0818011C38ADF57EB88E57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _audioSource = FindObjectOfType<AudioFX>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* L_0;
		L_0 = Object_FindObjectOfType_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_mC5A02CF46A925164EB7B42855AEA2AC1CFE002FD(Object_FindObjectOfType_TisAudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83_mC5A02CF46A925164EB7B42855AEA2AC1CFE002FD_RuntimeMethod_var);
		__this->____audioSource_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioSource_5), (void*)L_0);
		// GameEvents.buttonMabyNumberEvent.AddListener(SetButtonMabyNumber);
		il2cpp_codegen_runtime_class_init_inline(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_1 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonMabyNumberEvent_12;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_2 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_2, __this, (intptr_t)((void*)SetMabyNumber_SetButtonMabyNumber_mB55AC0058EA01E28BC7EDE8773263CD645139786_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_1, L_2, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// GameEvents.setColorMabyNumberButtonEvent.AddListener(SetColorButunMabyNumber);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setColorMabyNumberButtonEvent_7;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)SetMabyNumber_SetColorButunMabyNumber_m3702DA4CFFC12DD67A0818011C38ADF57EB88E57_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Boolean SetMabyNumber::GetButtonMabyNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetMabyNumber_GetButtonMabyNumber_m0B52F095F2C472CC85FD421388C685C4A22603EA (SetMabyNumber_tE8829E4A0165C7BD47455387370ED6D493BE2AB0* __this, const RuntimeMethod* method) 
{
	{
		// private bool GetButtonMabyNumber() => _buttonMabyNumber;
		bool L_0 = __this->____buttonMabyNumber_4;
		return L_0;
	}
}
// System.Void SetMabyNumber::SetButtonMabyNumber(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetMabyNumber_SetButtonMabyNumber_mB55AC0058EA01E28BC7EDE8773263CD645139786 (SetMabyNumber_tE8829E4A0165C7BD47455387370ED6D493BE2AB0* __this, bool ___buttonMabyNumber0, const RuntimeMethod* method) 
{
	{
		// private void SetButtonMabyNumber(bool buttonMabyNumber) => _buttonMabyNumber = buttonMabyNumber;
		bool L_0 = ___buttonMabyNumber0;
		__this->____buttonMabyNumber_4 = L_0;
		return;
	}
}
// System.Void SetMabyNumber::SetColorButunMabyNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetMabyNumber_SetColorButunMabyNumber_m3702DA4CFFC12DD67A0818011C38ADF57EB88E57 (SetMabyNumber_tE8829E4A0165C7BD47455387370ED6D493BE2AB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetButtonMabyNumber())
		bool L_0;
		L_0 = SetMabyNumber_GetButtonMabyNumber_m0B52F095F2C472CC85FD421388C685C4A22603EA_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// GetComponent<Image>().color = Color.cyan;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_cyan_m1257FED4776F2A33BD7250357D024B3FA3E592EB_inline(NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		return;
	}

IL_0019:
	{
		// GetComponent<Image>().color = Color.white;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// }
		return;
	}
}
// System.Void SetMabyNumber::ClickOnButtonMabyNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetMabyNumber_ClickOnButtonMabyNumber_m047797602AD2606AA28B497CB818E7F4B883F7CE (SetMabyNumber_tE8829E4A0165C7BD47455387370ED6D493BE2AB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _audioSource.PlayAudioSetNumber();
		AudioFX_t53EDF91707FDD817C39CB743045BCD080C038F83* L_0 = __this->____audioSource_5;
		NullCheck(L_0);
		AudioFX_PlayAudioSetNumber_mD3474093EF6547DED30C0DF47E1839E96474BD54(L_0, NULL);
		// GameEvents.buttonClearEvent.Invoke(false);
		il2cpp_codegen_runtime_class_init_inline(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_1 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonClearEvent_13;
		NullCheck(L_1);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_1, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.setColorClearButtonEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setColorClearButtonEvent_8;
		NullCheck(L_2);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_2, NULL);
		// SetButtonMabyNumber(!GetButtonMabyNumber());
		bool L_3;
		L_3 = SetMabyNumber_GetButtonMabyNumber_m0B52F095F2C472CC85FD421388C685C4A22603EA_inline(__this, NULL);
		SetMabyNumber_SetButtonMabyNumber_mB55AC0058EA01E28BC7EDE8773263CD645139786_inline(__this, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), NULL);
		// if (GetButtonMabyNumber())
		bool L_4;
		L_4 = SetMabyNumber_GetButtonMabyNumber_m0B52F095F2C472CC85FD421388C685C4A22603EA_inline(__this, NULL);
		if (!L_4)
		{
			goto IL_0094;
		}
	}
	{
		// GameEvents.buttonNumberSetEvent.Invoke(false);
		il2cpp_codegen_runtime_class_init_inline(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_5 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonNumberSetEvent_9;
		NullCheck(L_5);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_5, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.setCanBeSetPlayerNumberEvent.Invoke(false);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_6 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCanBeSetPlayerNumberEvent_11;
		NullCheck(L_6);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_6, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.buttonSomeNumberEvent.Invoke(false);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_7 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonSomeNumberEvent_10;
		NullCheck(L_7);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_7, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.setCanBeSetPlayerNumberEvent.Invoke(false);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_8 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCanBeSetPlayerNumberEvent_11;
		NullCheck(L_8);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_8, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.buttonMabyNumberEvent.Invoke(true);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_9 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonMabyNumberEvent_12;
		NullCheck(L_9);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_9, (bool)1, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.setColorButtonSomeNumberEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_10 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setColorButtonSomeNumberEvent_6;
		NullCheck(L_10);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_10, NULL);
		// GameEvents.buttonNumberSetColorEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_11 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonNumberSetColorEvent_4;
		NullCheck(L_11);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_11, NULL);
		// GameEvents.setCellColorEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_12 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCellColorEvent_5;
		NullCheck(L_12);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_12, NULL);
		// SetColorButunMabyNumber();
		SetMabyNumber_SetColorButunMabyNumber_m3702DA4CFFC12DD67A0818011C38ADF57EB88E57(__this, NULL);
		goto IL_00c4;
	}

IL_0094:
	{
		// GameEvents.buttonMabyNumberEvent.Invoke(false);
		il2cpp_codegen_runtime_class_init_inline(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_13 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonMabyNumberEvent_12;
		NullCheck(L_13);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_13, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.buttonNumberSetEvent.Invoke(false);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_14 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonNumberSetEvent_9;
		NullCheck(L_14);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_14, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// GameEvents.buttonNumberSetColorEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_15 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___buttonNumberSetColorEvent_4;
		NullCheck(L_15);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_15, NULL);
		// GameEvents.setCellColorEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_16 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setCellColorEvent_5;
		NullCheck(L_16);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_16, NULL);
		// SetColorButunMabyNumber();
		SetMabyNumber_SetColorButunMabyNumber_m3702DA4CFFC12DD67A0818011C38ADF57EB88E57(__this, NULL);
	}

IL_00c4:
	{
		// Cell.numberButton = 0;
		((Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_StaticFields*)il2cpp_codegen_static_fields_for(Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_il2cpp_TypeInfo_var))->___numberButton_16 = 0;
		// }
		return;
	}
}
// System.Void SetMabyNumber::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetMabyNumber__ctor_m71ADFB0F60D811C58A031438AA97D60C14ECADC6 (SetMabyNumber_tE8829E4A0165C7BD47455387370ED6D493BE2AB0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Timer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Start_m6820D211A06B2E5E24795D7EBE67EE865F39BC43 (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_SetBestScore_mB85F43E6A353BB9A45B2F5A6A0FC7583E15167E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _timer = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->____timer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____timer_4), (void*)L_0);
		// StartCoroutine(Time());
		RuntimeObject* L_1;
		L_1 = Timer_Time_m1A7315C47154C967038256E3BDE9382D0742CB30(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// GameEvents.setBestScore.AddListener(SetBestScore);
		il2cpp_codegen_runtime_class_init_inline(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___setBestScore_14;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)Timer_SetBestScore_mB85F43E6A353BB9A45B2F5A6A0FC7583E15167E9_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Timer::Time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Timer_Time_m1A7315C47154C967038256E3BDE9382D0742CB30 (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTimeU3Ed__7_t9C1AF6C0271E0156BADC6432456BB7D01965B641_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTimeU3Ed__7_t9C1AF6C0271E0156BADC6432456BB7D01965B641* L_0 = (U3CTimeU3Ed__7_t9C1AF6C0271E0156BADC6432456BB7D01965B641*)il2cpp_codegen_object_new(U3CTimeU3Ed__7_t9C1AF6C0271E0156BADC6432456BB7D01965B641_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTimeU3Ed__7__ctor_mA65F58B6E3148AECF373739A1735650F7783AF08(L_0, 0, NULL);
		U3CTimeU3Ed__7_t9C1AF6C0271E0156BADC6432456BB7D01965B641* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Timer::SetBestScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_SetBestScore_mB85F43E6A353BB9A45B2F5A6A0FC7583E15167E9 (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34F92C46F045354EEC9FBFCC82EE0690422992C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BD3052BB1EC7598F0952B3FA0F49095189128A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9752B1F8ECD74E47277F9984984568B584B27B20);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// switch (MenuManager.lvl)
		String_t* L_0 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___lvl_10;
		V_0 = L_0;
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral9752B1F8ECD74E47277F9984984568B584B27B20, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteral4BD3052BB1EC7598F0952B3FA0F49095189128A3, NULL);
		if (L_4)
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral34F92C46F045354EEC9FBFCC82EE0690422992C4, NULL);
		if (L_6)
		{
			goto IL_008a;
		}
	}
	{
		goto IL_00b4;
	}

IL_0032:
	{
		// if(MenuManager.fullSecondsEasyScore > _fullSeconds || MenuManager.fullSecondsEasyScore == 0)
		int32_t L_7 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___fullSecondsEasyScore_11;
		int32_t L_8 = __this->____fullSeconds_5;
		if ((((int32_t)L_7) > ((int32_t)L_8)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___fullSecondsEasyScore_11;
		if (L_9)
		{
			goto IL_00b4;
		}
	}

IL_0046:
	{
		// MenuManager.easyScore = _time;
		String_t* L_10 = __this->____time_9;
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___easyScore_7 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___easyScore_7), (void*)L_10);
		// MenuManager.fullSecondsEasyScore = _fullSeconds;
		int32_t L_11 = __this->____fullSeconds_5;
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___fullSecondsEasyScore_11 = L_11;
		// break;
		goto IL_00b4;
	}

IL_005e:
	{
		// if (MenuManager.fullSecondsMediumScore > _fullSeconds || MenuManager.fullSecondsMediumScore == 0)
		int32_t L_12 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___fullSecondsMediumScore_12;
		int32_t L_13 = __this->____fullSeconds_5;
		if ((((int32_t)L_12) > ((int32_t)L_13)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_14 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___fullSecondsMediumScore_12;
		if (L_14)
		{
			goto IL_00b4;
		}
	}

IL_0072:
	{
		// MenuManager.mediumScore = _time;
		String_t* L_15 = __this->____time_9;
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___mediumScore_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___mediumScore_8), (void*)L_15);
		// MenuManager.fullSecondsMediumScore = _fullSeconds;
		int32_t L_16 = __this->____fullSeconds_5;
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___fullSecondsMediumScore_12 = L_16;
		// break;
		goto IL_00b4;
	}

IL_008a:
	{
		// if (MenuManager.fullSecondsHardScore > _fullSeconds || MenuManager.fullSecondsHardScore == 0)
		int32_t L_17 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___fullSecondsHardScore_13;
		int32_t L_18 = __this->____fullSeconds_5;
		if ((((int32_t)L_17) > ((int32_t)L_18)))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_19 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___fullSecondsHardScore_13;
		if (L_19)
		{
			goto IL_00b4;
		}
	}

IL_009e:
	{
		// MenuManager.hardScore = _time;
		String_t* L_20 = __this->____time_9;
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___hardScore_9 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___hardScore_9), (void*)L_20);
		// MenuManager.fullSecondsHardScore = _fullSeconds;
		int32_t L_21 = __this->____fullSeconds_5;
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___fullSecondsHardScore_13 = L_21;
	}

IL_00b4:
	{
		// MenuManager.SaveScore();
		MenuManager_SaveScore_m18E24205E5E5C557966AEC0E1642E923070F3010(NULL);
		// }
		return;
	}
}
// System.Void Timer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_m5FF13F1DAD0527F97E229A1904A8AD662731C4B5 (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Timer/<Time>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeU3Ed__7__ctor_mA65F58B6E3148AECF373739A1735650F7783AF08 (U3CTimeU3Ed__7_t9C1AF6C0271E0156BADC6432456BB7D01965B641* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Timer/<Time>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeU3Ed__7_System_IDisposable_Dispose_m79DD693DF2E6C8561D9141092ECEC529934DF363 (U3CTimeU3Ed__7_t9C1AF6C0271E0156BADC6432456BB7D01965B641* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Timer/<Time>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTimeU3Ed__7_MoveNext_mBDD6779C9924ECDF4E8BECE760C6FA796D9E1C92 (U3CTimeU3Ed__7_t9C1AF6C0271E0156BADC6432456BB7D01965B641* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral186728018354DD5A345662365525D1905258CFCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_00ff;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0021:
	{
		// _fullSeconds++;
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_4 = V_1;
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = L_5->____fullSeconds_5;
		NullCheck(L_4);
		L_4->____fullSeconds_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// _sec++;
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_7 = V_1;
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->____sec_6;
		NullCheck(L_7);
		L_7->____sec_6 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// if (_sec >= 59)
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = L_10->____sec_6;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)59))))
		{
			goto IL_005c;
		}
	}
	{
		// _min++;
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_12 = V_1;
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14 = L_13->____min_7;
		NullCheck(L_12);
		L_12->____min_7 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		// _sec = 0;
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_15 = V_1;
		NullCheck(L_15);
		L_15->____sec_6 = 0;
	}

IL_005c:
	{
		// if (_min >= 59)
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = L_16->____min_7;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)59))))
		{
			goto IL_007b;
		}
	}
	{
		// _hour++;
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_18 = V_1;
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = L_19->____hour_8;
		NullCheck(L_18);
		L_18->____hour_8 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		// _min = 0;
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_21 = V_1;
		NullCheck(L_21);
		L_21->____min_7 = 0;
	}

IL_007b:
	{
		// _time = _hour.ToString("D2") + ":" + _min.ToString("D2") + ":" + _sec.ToString("D2");
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_22 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_25 = V_1;
		NullCheck(L_25);
		int32_t* L_26 = (&L_25->____hour_8);
		String_t* L_27;
		L_27 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9(L_26, _stringLiteral186728018354DD5A345662365525D1905258CFCE, NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_27);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_24;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_28;
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_30 = V_1;
		NullCheck(L_30);
		int32_t* L_31 = (&L_30->____min_7);
		String_t* L_32;
		L_32 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9(L_31, _stringLiteral186728018354DD5A345662365525D1905258CFCE, NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_29;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_35 = V_1;
		NullCheck(L_35);
		int32_t* L_36 = (&L_35->____sec_6);
		String_t* L_37;
		L_37 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9(L_36, _stringLiteral186728018354DD5A345662365525D1905258CFCE, NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_37);
		String_t* L_38;
		L_38 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_34, NULL);
		NullCheck(L_22);
		L_22->____time_9 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->____time_9), (void*)L_38);
		// _timer.text = _time;
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_39 = V_1;
		NullCheck(L_39);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_40 = L_39->____timer_4;
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_41 = V_1;
		NullCheck(L_41);
		String_t* L_42 = L_41->____time_9;
		NullCheck(L_40);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_40, L_42);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_43 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_43, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_43);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ff:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_0021;
	}
}
// System.Object Timer/<Time>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimeU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2D921E80F52966377CD6EAAF38F9606E0CBBDAD2 (U3CTimeU3Ed__7_t9C1AF6C0271E0156BADC6432456BB7D01965B641* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Timer/<Time>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeU3Ed__7_System_Collections_IEnumerator_Reset_m0A0207CC61D6B1C8BE6BEBE8F902A1A81D99418A (U3CTimeU3Ed__7_t9C1AF6C0271E0156BADC6432456BB7D01965B641* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTimeU3Ed__7_System_Collections_IEnumerator_Reset_m0A0207CC61D6B1C8BE6BEBE8F902A1A81D99418A_RuntimeMethod_var)));
	}
}
// System.Object Timer/<Time>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimeU3Ed__7_System_Collections_IEnumerator_get_Current_mA56C754485BF8A9527F8895D4B91E1A3E47303B1 (U3CTimeU3Ed__7_t9C1AF6C0271E0156BADC6432456BB7D01965B641* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ButtonClear_GetButtonActive_m7A90ACD950C3AFDE6858113979FA9329ED96E7F0_inline (ButtonClear_tF60EBD696D6CE10612AF264DDD9D96AC8B3D230E* __this, const RuntimeMethod* method) 
{
	{
		// private bool GetButtonActive() => _buttonActive;
		bool L_0 = __this->____buttonActive_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ButtonClear_SetButtonActive_m8BF78E4A5405DC826D3E4513351A1BEC3DB9792B_inline (ButtonClear_tF60EBD696D6CE10612AF264DDD9D96AC8B3D230E* __this, bool ___buttonClear0, const RuntimeMethod* method) 
{
	{
		// private void SetButtonActive(bool buttonClear) => _buttonActive = buttonClear;
		bool L_0 = ___buttonClear0;
		__this->____buttonActive_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m1257FED4776F2A33BD7250357D024B3FA3E592EB_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cell_GetCanBeSetPlayerNumber_m90C880DE5420D9B16FDF7A78B82838C8E13174E2_inline (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) 
{
	{
		// public bool GetCanBeSetPlayerNumber() => _canBeSetPlayerNumber;
		bool L_0 = __this->____canBeSetPlayerNumber_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cell_GetButtonSomeNumber_m24C0719B40DD814EB1923FC7DA695604CEA697FE_inline (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) 
{
	{
		// public bool GetButtonSomeNumber() => _buttonSomeNumber;
		bool L_0 = __this->____buttonSomeNumber_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cell_GetButtonMabyNumber_mB9B107CB25D55C051A1D726EA926796D7A91C238_inline (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) 
{
	{
		// public bool GetButtonMabyNumber() => _buttonMabyNumber;
		bool L_0 = __this->____buttonMabyNumber_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cell_GetButtonClear_mB9C1F6F9308F2543E6EC1A95BB2FF79F12731894_inline (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) 
{
	{
		// public bool GetButtonClear() => _buttonClear;
		bool L_0 = __this->____buttonClear_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cell_GetTrueNumber_m444FDFC16A0AE9D21CCAC944569D7FDEED6CFB9A_inline (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) 
{
	{
		// public int GetTrueNumber() => _trueNumber;
		int32_t L_0 = __this->____trueNumber_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cell_SetBlock_m0A371E296D30CBB45D0D13BFEB6CCB136A356FB4_inline (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, bool ___block0, const RuntimeMethod* method) 
{
	{
		// public void SetBlock(bool block) => _block = block;
		bool L_0 = ___block0;
		__this->____block_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cell_GetBlock_mB7312C68DC93EF9C37DCA4CE2585DFE635CC2E7D_inline (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) 
{
	{
		// public bool GetBlock() => _block;
		bool L_0 = __this->____block_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GridGenerator_GetOpenCountCells_m18B9AC75B7BECEE091793139675F09FBD8DD9B27_inline (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, const RuntimeMethod* method) 
{
	{
		// public int GetOpenCountCells() => _openCountCells;
		int32_t L_0 = __this->____openCountCells_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GridGenerator_GetHP_mB6E115AF359DF076D5683F4AC8A2772B39335763_inline (GridGenerator_t5296749A63C41DE30936DBDAF505181F000AEC9F* __this, const RuntimeMethod* method) 
{
	{
		// public int GetHP() => _hp;
		int32_t L_0 = __this->____hp_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cell_SetTrueNumber_mDD4199345406DBE56526747024968AF4F7A580DC_inline (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, int32_t ___trueNumber0, const RuntimeMethod* method) 
{
	{
		// public void SetTrueNumber(int trueNumber) => _trueNumber = trueNumber;
		int32_t L_0 = ___trueNumber0;
		__this->____trueNumber_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Number_GetSelectNumber_mA7FCA68C0B95196A51CCAE44FDD22262A1BBCCBB_inline (Number_tEBF6658D4F4914215862D82F55F8186CFC2EA119* __this, const RuntimeMethod* method) 
{
	{
		// private bool GetSelectNumber() => _selectNumber;
		bool L_0 = __this->____selectNumber_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Number_GetMabyNumber_mA065DADA1C77A208FDC535504EB1C6D3A6B03388_inline (Number_tEBF6658D4F4914215862D82F55F8186CFC2EA119* __this, const RuntimeMethod* method) 
{
	{
		// private bool GetMabyNumber() => _mabyNumber;
		bool L_0 = __this->____mabyNumber_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Number_SetSelectNumber_mDE3584003293497E070B828AA256EE610EFD5ED5_inline (Number_tEBF6658D4F4914215862D82F55F8186CFC2EA119* __this, bool ___selectNumber0, const RuntimeMethod* method) 
{
	{
		// private void SetSelectNumber(bool selectNumber) => _selectNumber = selectNumber;
		bool L_0 = ___selectNumber0;
		__this->____selectNumber_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OpenSomeCell_GetButtonSomeNumber_m1157231114C7A26DEAE52D6508A3CCE545E85135_inline (OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* __this, const RuntimeMethod* method) 
{
	{
		// private bool GetButtonSomeNumber() => _buttonSomeNumber;
		bool L_0 = __this->____buttonSomeNumber_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OpenSomeCell_GetCountCanBeOpenCells_m38C047CA0BE8A46046FF689A1315D5470FE6AE9D_inline (OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* __this, const RuntimeMethod* method) 
{
	{
		// public int GetCountCanBeOpenCells() => _countCanBeOpenCells;
		int32_t L_0 = __this->____countCanBeOpenCells_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenSomeCell_SetButtonSomeNumber_mB7B65EC73BB824C5BDD07D76CB066D2A9680B688_inline (OpenSomeCell_tBFAF326681CB76A212FC6802154153BE8CD8C845* __this, bool ___buttonSomeNumber0, const RuntimeMethod* method) 
{
	{
		// private void SetButtonSomeNumber(bool buttonSomeNumber) => _buttonSomeNumber = buttonSomeNumber;
		bool L_0 = ___buttonSomeNumber0;
		__this->____buttonSomeNumber_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PauseGame_GetPauseStatus_mA84BDA15503876007E14CAB643302FC36942F25A_inline (PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF* __this, const RuntimeMethod* method) 
{
	{
		// private bool GetPauseStatus() => _pauseStatus;
		bool L_0 = __this->____pauseStatus_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PauseGame_SetPauseStatus_m470D01A4090F81F99B7757EC31BBAF191C947DFF_inline (PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF* __this, bool ___pauseStatus0, const RuntimeMethod* method) 
{
	{
		// private void SetPauseStatus(bool pauseStatus) => _pauseStatus = pauseStatus;
		bool L_0 = ___pauseStatus0;
		__this->____pauseStatus_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SetMabyNumber_GetButtonMabyNumber_m0B52F095F2C472CC85FD421388C685C4A22603EA_inline (SetMabyNumber_tE8829E4A0165C7BD47455387370ED6D493BE2AB0* __this, const RuntimeMethod* method) 
{
	{
		// private bool GetButtonMabyNumber() => _buttonMabyNumber;
		bool L_0 = __this->____buttonMabyNumber_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SetMabyNumber_SetButtonMabyNumber_mB55AC0058EA01E28BC7EDE8773263CD645139786_inline (SetMabyNumber_tE8829E4A0165C7BD47455387370ED6D493BE2AB0* __this, bool ___buttonMabyNumber0, const RuntimeMethod* method) 
{
	{
		// private void SetButtonMabyNumber(bool buttonMabyNumber) => _buttonMabyNumber = buttonMabyNumber;
		bool L_0 = ___buttonMabyNumber0;
		__this->____buttonMabyNumber_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
