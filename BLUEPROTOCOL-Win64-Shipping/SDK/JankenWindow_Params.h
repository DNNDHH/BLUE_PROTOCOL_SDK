#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function JankenWindow.JankenWindow_C.GetJointGestureComponent
	 */
	struct UJankenWindow_C_GetJointGestureComponent_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WFXV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USBJointGestureComponent*                            OutJointGestureComponent;                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function JankenWindow.JankenWindow_C.GetResultText
	 */
	struct UJankenWindow_C_GetResultText_Params
	{
	public:
		ESBJankenHandType                                          MyHandType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBJankenHandType                                          TargetHandType;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C6FL[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutText;                                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function JankenWindow.JankenWindow_C.GetJankenHandText
	 */
	struct UJankenWindow_C_GetJankenHandText_Params
	{
	public:
		ESBJankenHandType                                          InHnadType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T06G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutText;                                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function JankenWindow.JankenWindow_C.JankenResult
	 */
	struct UJankenWindow_C_JankenResult_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function JankenWindow.JankenWindow_C.SelectButton
	 */
	struct UJankenWindow_C_SelectButton_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M9E8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function JankenWindow.JankenWindow_C.SetTimer
	 */
	struct UJankenWindow_C_SetTimer_Params
	{
	public:
		float                                                      InTimer;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function JankenWindow.JankenWindow_C.Destruct
	 */
	struct UJankenWindow_C_Destruct_Params
	{	};

	/**
	 * Function JankenWindow.JankenWindow_C.Close
	 */
	struct UJankenWindow_C_Close_Params
	{	};

	/**
	 * Function JankenWindow.JankenWindow_C.Tick
	 */
	struct UJankenWindow_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function JankenWindow.JankenWindow_C.Construct
	 */
	struct UJankenWindow_C_Construct_Params
	{	};

	/**
	 * Function JankenWindow.JankenWindow_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UJankenWindow_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function JankenWindow.JankenWindow_C.BndEvt__BtnCancel_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UJankenWindow_C_BndEvt__BtnCancel_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function JankenWindow.JankenWindow_C.ExecuteUbergraph_JankenWindow
	 */
	struct UJankenWindow_C_ExecuteUbergraph_JankenWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function JankenWindow.JankenWindow_C.OnClose__DelegateSignature
	 */
	struct UJankenWindow_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
