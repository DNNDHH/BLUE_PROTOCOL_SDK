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
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.CalculateTotalUsingLiquidMemory
	 */
	struct UUMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.RandomPlayAnimation2
	 */
	struct UUMG_LiquidMemoryShop_C_RandomPlayAnimation2_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.RandomPlayAnimation
	 */
	struct UUMG_LiquidMemoryShop_C_RandomPlayAnimation_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.CalculateTotalCost
	 */
	struct UUMG_LiquidMemoryShop_C_CalculateTotalCost_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.AddOrMinusLiquidMemoryIdAndLevelToUsingList
	 */
	struct UUMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList_Params
	{
	public:
		class UUMG_LiquidMemoryProductListItem_C*                  InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.InitProductItemList
	 */
	struct UUMG_LiquidMemoryShop_C_InitProductItemList_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.HideLiquidMemoryDetails
	 */
	struct UUMG_LiquidMemoryShop_C_HideLiquidMemoryDetails_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.ShowLiquidMemoryDetails
	 */
	struct UUMG_LiquidMemoryShop_C_ShowLiquidMemoryDetails_Params
	{
	public:
		int32_t                                                    InLiquidMemoryId;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InBottleNum;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.CreateItemDetails
	 */
	struct UUMG_LiquidMemoryShop_C_CreateItemDetails_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.CreateProductItemList
	 */
	struct UUMG_LiquidMemoryShop_C_CreateProductItemList_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.PlayLiquidMemoryDrinkingAnimation
	 */
	struct UUMG_LiquidMemoryShop_C_PlayLiquidMemoryDrinkingAnimation_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnLiquidMemoryDrinkingAnimationFinished
	 */
	struct UUMG_LiquidMemoryShop_C_OnLiquidMemoryDrinkingAnimationFinished_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.ShowSystemMessage
	 */
	struct UUMG_LiquidMemoryShop_C_ShowSystemMessage_Params
	{
	public:
		class FText                                                InMessageText;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.EndSystemMessage
	 */
	struct UUMG_LiquidMemoryShop_C_EndSystemMessage_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.Destruct
	 */
	struct UUMG_LiquidMemoryShop_C_Destruct_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.Construct
	 */
	struct UUMG_LiquidMemoryShop_C_Construct_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.onAnimTimer
	 */
	struct UUMG_LiquidMemoryShop_C_onAnimTimer_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1
	 */
	struct UUMG_LiquidMemoryShop_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_LiquidMemoryShop_C_BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnPress_Cancel
	 */
	struct UUMG_LiquidMemoryShop_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.DoClose
	 */
	struct UUMG_LiquidMemoryShop_C_DoClose_Params
	{
	public:
		bool                                                       IsLiquidMemoryUsed;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnListItemPurchaseNumAdded
	 */
	struct UUMG_LiquidMemoryShop_C_OnListItemPurchaseNumAdded_Params
	{
	public:
		class UUMG_LiquidMemoryProductListItem_C*                  InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnListItemPurchaseNumSubbed
	 */
	struct UUMG_LiquidMemoryShop_C_OnListItemPurchaseNumSubbed_Params
	{
	public:
		class UUMG_LiquidMemoryProductListItem_C*                  InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnListItemSelected
	 */
	struct UUMG_LiquidMemoryShop_C_OnListItemSelected_Params
	{
	public:
		class UUMG_LiquidMemoryProductListItem_C*                  InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnDetailsCloseAnimationFinished
	 */
	struct UUMG_LiquidMemoryShop_C_OnDetailsCloseAnimationFinished_Params
	{
	public:
		class UUserWidget*                                         InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.BndEvt__PurchaseBtnGrp_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_LiquidMemoryShop_C_BndEvt__PurchaseBtnGrp_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.EndUseLiquidMemoryYesNoDialog_イベント
	 */
	struct UUMG_LiquidMemoryShop_C_EndUseLiquidMemoryYesNoDialog__Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnUseLiquidMemoryDelegate_イベント
	 */
	struct UUMG_LiquidMemoryShop_C_OnUseLiquidMemoryDelegate__Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GKN5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBLiquidMemoryInfo>                         InUpdatedLiquidMemoryInfos;                              // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnAccumulateLiquidMemory_Event
	 */
	struct UUMG_LiquidMemoryShop_C_OnAccumulateLiquidMemory_Event_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M4WR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBLiquidMemoryInfo>                         InUpdatedLiquidMemoryInfos;                              // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.ExecOpen
	 */
	struct UUMG_LiquidMemoryShop_C_ExecOpen_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnListItemPurchaseNumAddOveredMax
	 */
	struct UUMG_LiquidMemoryShop_C_OnListItemPurchaseNumAddOveredMax_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature
	 */
	struct UUMG_LiquidMemoryShop_C_BndEvt__CmnBack01_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2
	 */
	struct UUMG_LiquidMemoryShop_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.BndEvt__PurchaseBtnGrp_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUMG_LiquidMemoryShop_C_BndEvt__PurchaseBtnGrp_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.BndEvt__PurchaseBtnGrp_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUMG_LiquidMemoryShop_C_BndEvt__PurchaseBtnGrp_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.GetTokenList
	 */
	struct UUMG_LiquidMemoryShop_C_GetTokenList_Params
	{
	public:
		struct FSBTokenStates                                      States;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnPopupTokenList
	 */
	struct UUMG_LiquidMemoryShop_C_OnPopupTokenList_Params
	{
	public:
		int32_t                                                    LiquidMemoryId;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsFullCharge;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.BndEvt__UMG_LiquidMemoryShop_UMG_LiquidMemoryAccumlulateList_K2Node_ComponentBoundEvent_5_OnAccumulateCompleted__DelegateSignature
	 */
	struct UUMG_LiquidMemoryShop_C_BndEvt__UMG_LiquidMemoryShop_UMG_LiquidMemoryAccumlulateList_K2Node_ComponentBoundEvent_5_OnAccumulateCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.WidgetAnimationEvt_AnimDrink_K2Node_WidgetAnimationEvent_1
	 */
	struct UUMG_LiquidMemoryShop_C_WidgetAnimationEvt_AnimDrink_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.Init
	 */
	struct UUMG_LiquidMemoryShop_C_Init_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.BndEvt__UMG_LiquidMemoryShop_SBButton_C_146_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_LiquidMemoryShop_C_BndEvt__UMG_LiquidMemoryShop_SBButton_C_146_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.ExecuteUbergraph_UMG_LiquidMemoryShop
	 */
	struct UUMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnClose__DelegateSignature
	 */
	struct UUMG_LiquidMemoryShop_C_OnClose__DelegateSignature_Params
	{
	public:
		bool                                                       IsLiquidMemoryUsed;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
