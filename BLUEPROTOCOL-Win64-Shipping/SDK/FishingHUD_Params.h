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
	 * Function FishingHUD.FishingHUD_C.ResultVisibility
	 */
	struct UFishingHUD_C_ResultVisibility_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FishingHUD.FishingHUD_C.ResetMenu
	 */
	struct UFishingHUD_C_ResetMenu_Params
	{	};

	/**
	 * Function FishingHUD.FishingHUD_C.WarningBackPackIsFull
	 */
	struct UFishingHUD_C_WarningBackPackIsFull_Params
	{	};

	/**
	 * Function FishingHUD.FishingHUD_C.Reset
	 */
	struct UFishingHUD_C_Reset_Params
	{	};

	/**
	 * Function FishingHUD.FishingHUD_C.HookSuccess
	 */
	struct UFishingHUD_C_HookSuccess_Params
	{	};

	/**
	 * Function FishingHUD.FishingHUD_C.CheckBackPack
	 */
	struct UFishingHUD_C_CheckBackPack_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PXVC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FishingHUD.FishingHUD_C.Set State
	 */
	struct UFishingHUD_C_SetState_Params
	{
	public:
		EPlayerFishingState                                        Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O09I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FishingHUD.FishingHUD_C.DebugFunc
	 */
	struct UFishingHUD_C_DebugFunc_Params
	{	};

	/**
	 * Function FishingHUD.FishingHUD_C.ExitEvent
	 */
	struct UFishingHUD_C_ExitEvent_Params
	{
	public:
		class UUserWidget*                                         InButtonWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FishingHUD.FishingHUD_C.ContinueFishing
	 */
	struct UFishingHUD_C_ContinueFishing_Params
	{
	public:
		class UUserWidget*                                         InButtonWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FishingHUD.FishingHUD_C.DialogEnd
	 */
	struct UFishingHUD_C_DialogEnd_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FishingHUD.FishingHUD_C.Destruct
	 */
	struct UFishingHUD_C_Destruct_Params
	{	};

	/**
	 * Function FishingHUD.FishingHUD_C.BndEvt__FishingHUD_SBButtonFullScreen_C_98_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UFishingHUD_C_BndEvt__FishingHUD_SBButtonFullScreen_C_98_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function FishingHUD.FishingHUD_C.ReceiveMessageDelegate
	 */
	struct UFishingHUD_C_ReceiveMessageDelegate_Params
	{
	public:
		class USBChatMessage*                                      Message;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBChatUIMessage                                    Mess;                                                    // 0x0008(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function FishingHUD.FishingHUD_C.EscExit
	 */
	struct UFishingHUD_C_EscExit_Params
	{	};

	/**
	 * Function FishingHUD.FishingHUD_C.Construct
	 */
	struct UFishingHUD_C_Construct_Params
	{	};

	/**
	 * Function FishingHUD.FishingHUD_C.Tick
	 */
	struct UFishingHUD_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FishingHUD.FishingHUD_C.ExecuteUbergraph_FishingHUD
	 */
	struct UFishingHUD_C_ExecuteUbergraph_FishingHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FishingHUD.FishingHUD_C.Continue__DelegateSignature
	 */
	struct UFishingHUD_C_Continue__DelegateSignature_Params
	{	};

	/**
	 * Function FishingHUD.FishingHUD_C.ExitFishing__DelegateSignature
	 */
	struct UFishingHUD_C_ExitFishing__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
