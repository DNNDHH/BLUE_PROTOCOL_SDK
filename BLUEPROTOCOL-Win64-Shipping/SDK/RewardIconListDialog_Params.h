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
	 * Function RewardIconListDialog.RewardIconListDialog_C.SetBgBlurVisible
	 */
	struct URewardIconListDialog_C_SetBgBlurVisible_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RewardIconListDialog.RewardIconListDialog_C.SetMasterRewardIDList
	 */
	struct URewardIconListDialog_C_SetMasterRewardIDList_Params
	{
	public:
		TArray<class FName>                                        IDList;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function RewardIconListDialog.RewardIconListDialog_C.SetMasterRewardList
	 */
	struct URewardIconListDialog_C_SetMasterRewardList_Params
	{
	public:
		TArray<struct FSBMasterReward>                             MasterRewards;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function RewardIconListDialog.RewardIconListDialog_C.SetMessage
	 */
	struct URewardIconListDialog_C_SetMessage_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsIconVisible;                                           // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RewardIconListDialog.RewardIconListDialog_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2
	 */
	struct URewardIconListDialog_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function RewardIconListDialog.RewardIconListDialog_C.Construct
	 */
	struct URewardIconListDialog_C_Construct_Params
	{	};

	/**
	 * Function RewardIconListDialog.RewardIconListDialog_C.Destruct
	 */
	struct URewardIconListDialog_C_Destruct_Params
	{	};

	/**
	 * Function RewardIconListDialog.RewardIconListDialog_C.Close_Event
	 */
	struct URewardIconListDialog_C_Close_Event_Params
	{	};

	/**
	 * Function RewardIconListDialog.RewardIconListDialog_C.BndEvt__GashaResult_BonusWindow_Btn_BackClose_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct URewardIconListDialog_C_BndEvt__GashaResult_BonusWindow_Btn_BackClose_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RewardIconListDialog.RewardIconListDialog_C.BndEvt__RewardIconListDialog_CmnBtn27_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct URewardIconListDialog_C_BndEvt__RewardIconListDialog_CmnBtn27_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function RewardIconListDialog.RewardIconListDialog_C.ExecuteUbergraph_RewardIconListDialog
	 */
	struct URewardIconListDialog_C_ExecuteUbergraph_RewardIconListDialog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SS2P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RewardIconListDialog.RewardIconListDialog_C.OnClose__DelegateSignature
	 */
	struct URewardIconListDialog_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
