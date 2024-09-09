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
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetTicketEnable
	 */
	struct UUMG_LiquidMemoryProductListItem_C_SetTicketEnable_Params
	{
	public:
		TArray<struct FSBLiquidMemoryAccumulateTokenInfo>          AccumlulateItemMaster;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FSBTokenState>                               InTokenList;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsActivate;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RCHA[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.CreateToolTipWidgetifNeeded
	 */
	struct UUMG_LiquidMemoryProductListItem_C_CreateToolTipWidgetifNeeded_Params
	{
	public:
		class UCommonIconToolTip_C*                                Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetRemainingUseCount
	 */
	struct UUMG_LiquidMemoryProductListItem_C_SetRemainingUseCount_Params
	{
	public:
		int32_t                                                    InCount;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1VRD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.UpdateBottleStatus
	 */
	struct UUMG_LiquidMemoryProductListItem_C_UpdateBottleStatus_Params
	{
	public:
		int32_t                                                    InLiquidMemoryId;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NNWD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetLiquidMemoryActivated
	 */
	struct UUMG_LiquidMemoryProductListItem_C_SetLiquidMemoryActivated_Params
	{
	public:
		bool                                                       bInIsActivated;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetPurchaseEnable
	 */
	struct UUMG_LiquidMemoryProductListItem_C_SetPurchaseEnable_Params
	{
	public:
		bool                                                       InIsEnable;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetTotalCost
	 */
	struct UUMG_LiquidMemoryProductListItem_C_SetTotalCost_Params
	{
	public:
		int32_t                                                    InTotalCost;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetCost
	 */
	struct UUMG_LiquidMemoryProductListItem_C_GetCost_Params
	{
	public:
		int32_t                                                    OutCost;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetCurrUseBottleNum
	 */
	struct UUMG_LiquidMemoryProductListItem_C_GetCurrUseBottleNum_Params
	{
	public:
		int32_t                                                    OutBottleNum;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetCostText
	 */
	struct UUMG_LiquidMemoryProductListItem_C_SetCostText_Params
	{
	public:
		int32_t                                                    InCost;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UDXJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetLimit
	 */
	struct UUMG_LiquidMemoryProductListItem_C_SetLimit_Params
	{
	public:
		int32_t                                                    LimitNum;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.ButtonUpdate
	 */
	struct UUMG_LiquidMemoryProductListItem_C_ButtonUpdate_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetRemainUsableBottleNum
	 */
	struct UUMG_LiquidMemoryProductListItem_C_GetRemainUsableBottleNum_Params
	{
	public:
		int32_t                                                    Remain;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetBtnSelected
	 */
	struct UUMG_LiquidMemoryProductListItem_C_SetBtnSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LHHO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.UpdateUsingBottleNumberInput
	 */
	struct UUMG_LiquidMemoryProductListItem_C_UpdateUsingBottleNumberInput_Params
	{
	public:
		int32_t                                                    InUsingBottleNum;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetLiquidMemoryId
	 */
	struct UUMG_LiquidMemoryProductListItem_C_GetLiquidMemoryId_Params
	{
	public:
		int32_t                                                    OutProductItemIndex;                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetUsingBottleNum
	 */
	struct UUMG_LiquidMemoryProductListItem_C_GetUsingBottleNum_Params
	{
	public:
		int32_t                                                    OutPurchaseNum;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetUsingBottleNum
	 */
	struct UUMG_LiquidMemoryProductListItem_C_SetUsingBottleNum_Params
	{
	public:
		int32_t                                                    InBottleNum;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Force;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetTotalCost
	 */
	struct UUMG_LiquidMemoryProductListItem_C_GetTotalCost_Params
	{
	public:
		int32_t                                                    OutPurchasePrice;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.Construct
	 */
	struct UUMG_LiquidMemoryProductListItem_C_Construct_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.Init
	 */
	struct UUMG_LiquidMemoryProductListItem_C_Init_Params
	{
	public:
		struct FSBLiquidMemoryMasterData                           InLiquidMemoryMaster;                                    // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    InUseBottleNum;                                          // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsCostDiscount;                                        // 0x003C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R5BZ[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InCostDiscountRate;                                      // 0x0040(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsUsable;                                                // 0x0044(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetPurchaseCountValue
	 */
	struct UUMG_LiquidMemoryProductListItem_C_SetPurchaseCountValue_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_53_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUMG_LiquidMemoryProductListItem_C_BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_53_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_78_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUMG_LiquidMemoryProductListItem_C_BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_78_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.StartRepeatMinus
	 */
	struct UUMG_LiquidMemoryProductListItem_C_StartRepeatMinus_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.StartRepeatPlus
	 */
	struct UUMG_LiquidMemoryProductListItem_C_StartRepeatPlus_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.NumberMinus
	 */
	struct UUMG_LiquidMemoryProductListItem_C_NumberMinus_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.NumberPlus
	 */
	struct UUMG_LiquidMemoryProductListItem_C_NumberPlus_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_198_OnButtonPressedEvent__DelegateSignature
	 */
	struct UUMG_LiquidMemoryProductListItem_C_BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_198_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_219_OnButtonPressedEvent__DelegateSignature
	 */
	struct UUMG_LiquidMemoryProductListItem_C_BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_219_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__UMG_LiquidMemoryProductListItem_Btn_Ticket_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_LiquidMemoryProductListItem_C_BndEvt__UMG_LiquidMemoryProductListItem_Btn_Ticket_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_LiquidMemoryProductListItem_C_BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUMG_LiquidMemoryProductListItem_C_BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUMG_LiquidMemoryProductListItem_C_BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.ExecuteUbergraph_UMG_LiquidMemoryProductListItem
	 */
	struct UUMG_LiquidMemoryProductListItem_C_ExecuteUbergraph_UMG_LiquidMemoryProductListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnPopupTokenList__DelegateSignature
	 */
	struct UUMG_LiquidMemoryProductListItem_C_OnPopupTokenList__DelegateSignature_Params
	{
	public:
		int32_t                                                    LiquidMemoryId;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsFullCharge;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnOveredAddNumMax__DelegateSignature
	 */
	struct UUMG_LiquidMemoryProductListItem_C_OnOveredAddNumMax__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnSub__DelegateSignature
	 */
	struct UUMG_LiquidMemoryProductListItem_C_OnSub__DelegateSignature_Params
	{
	public:
		class UUMG_LiquidMemoryProductListItem_C*                  InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnAdd__DelegateSignature
	 */
	struct UUMG_LiquidMemoryProductListItem_C_OnAdd__DelegateSignature_Params
	{
	public:
		class UUMG_LiquidMemoryProductListItem_C*                  InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnBtnSelected__DelegateSignature
	 */
	struct UUMG_LiquidMemoryProductListItem_C_OnBtnSelected__DelegateSignature_Params
	{
	public:
		class UUMG_LiquidMemoryProductListItem_C*                  InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnBtnUnhovered__DelegateSignature
	 */
	struct UUMG_LiquidMemoryProductListItem_C_OnBtnUnhovered__DelegateSignature_Params
	{
	public:
		class UUMG_LiquidMemoryProductListItem_C*                  InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnBtnHovered__DelegateSignature
	 */
	struct UUMG_LiquidMemoryProductListItem_C_OnBtnHovered__DelegateSignature_Params
	{
	public:
		class UUMG_LiquidMemoryProductListItem_C*                  InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
