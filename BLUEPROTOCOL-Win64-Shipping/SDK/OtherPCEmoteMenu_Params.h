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
	 * Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.Is Enable Emote Icon
	 */
	struct UOtherPCEmoteMenu_C_IsEnableEmoteIcon_Params
	{
	public:
		class FName                                                InputPin;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsEnable;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8WAE[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.UpdateEmoteIconEnable
	 */
	struct UOtherPCEmoteMenu_C_UpdateEmoteIconEnable_Params
	{	};

	/**
	 * Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.GetPlayerCharacter
	 */
	struct UOtherPCEmoteMenu_C_GetPlayerCharacter_Params
	{
	public:
		class ASBPlayerCharacter*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.SetRootVisible
	 */
	struct UOtherPCEmoteMenu_C_SetRootVisible_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.ClearEmotionSlot
	 */
	struct UOtherPCEmoteMenu_C_ClearEmotionSlot_Params
	{	};

	/**
	 * Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.CreateEmptySlot
	 */
	struct UOtherPCEmoteMenu_C_CreateEmptySlot_Params
	{
	public:
		class UGridPanel*                                          InGridPanel;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSlotCount;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.CloseMenu
	 */
	struct UOtherPCEmoteMenu_C_CloseMenu_Params
	{	};

	/**
	 * Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnRequestTutorialHelp
	 */
	struct UOtherPCEmoteMenu_C_OnRequestTutorialHelp_Params
	{	};

	/**
	 * Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnTutorialHelp_Close
	 */
	struct UOtherPCEmoteMenu_C_OnTutorialHelp_Close_Params
	{	};

	/**
	 * Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.Construct
	 */
	struct UOtherPCEmoteMenu_C_Construct_Params
	{	};

	/**
	 * Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.Destruct
	 */
	struct UOtherPCEmoteMenu_C_Destruct_Params
	{	};

	/**
	 * Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnRefresh
	 */
	struct UOtherPCEmoteMenu_C_OnRefresh_Params
	{	};

	/**
	 * Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnSelect
	 */
	struct UOtherPCEmoteMenu_C_OnSelect_Params
	{
	public:
		class UEmotionMenu_Item_C*                                 InSelectedItem;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnAnimationFinished
	 */
	struct UOtherPCEmoteMenu_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnPress_Cancel
	 */
	struct UOtherPCEmoteMenu_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnJankenUIDelegate_Event_1
	 */
	struct UOtherPCEmoteMenu_C_OnJankenUIDelegate_Event_1_Params
	{	};

	/**
	 * Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.ForcedClose
	 */
	struct UOtherPCEmoteMenu_C_ForcedClose_Params
	{	};

	/**
	 * Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.UpdateEmotionList
	 */
	struct UOtherPCEmoteMenu_C_UpdateEmotionList_Params
	{
	public:
		bool                                                       bInit;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.BndEvt__OtherPCEmoteMenu_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 */
	struct UOtherPCEmoteMenu_C_BndEvt__OtherPCEmoteMenu_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.BndEvt__OtherPCEmoteMenu_SBButtonFullScreen_C_35_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOtherPCEmoteMenu_C_BndEvt__OtherPCEmoteMenu_SBButtonFullScreen_C_35_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.EmoteListUpdate
	 */
	struct UOtherPCEmoteMenu_C_EmoteListUpdate_Params
	{	};

	/**
	 * Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.ExecuteUbergraph_OtherPCEmoteMenu
	 */
	struct UOtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnClose__DelegateSignature
	 */
	struct UOtherPCEmoteMenu_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
