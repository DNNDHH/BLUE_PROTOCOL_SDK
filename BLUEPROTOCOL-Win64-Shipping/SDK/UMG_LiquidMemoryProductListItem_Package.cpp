/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetTicketEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBLiquidMemoryAccumulateTokenInfo>  AccumlulateItemMaster                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FSBTokenState>                       InTokenList                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsActivate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_LiquidMemoryProductListItem_C::SetTicketEnable(TArray<struct FSBLiquidMemoryAccumulateTokenInfo>* AccumlulateItemMaster, TArray<struct FSBTokenState>* InTokenList, bool IsActivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetTicketEnable");
		
		UUMG_LiquidMemoryProductListItem_C_SetTicketEnable_Params params {};
		params.IsActivate = IsActivate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AccumlulateItemMaster != nullptr)
			*AccumlulateItemMaster = params.AccumlulateItemMaster;
		if (InTokenList != nullptr)
			*InTokenList = params.InTokenList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.CreateToolTipWidgetifNeeded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonIconToolTip_C*                        Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryProductListItem_C::CreateToolTipWidgetifNeeded(class UCommonIconToolTip_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.CreateToolTipWidgetifNeeded");
		
		UUMG_LiquidMemoryProductListItem_C_CreateToolTipWidgetifNeeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetRemainingUseCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryProductListItem_C::SetRemainingUseCount(int32_t InCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetRemainingUseCount");
		
		UUMG_LiquidMemoryProductListItem_C_SetRemainingUseCount_Params params {};
		params.InCount = InCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.UpdateBottleStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLiquidMemoryId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryProductListItem_C::UpdateBottleStatus(int32_t InLiquidMemoryId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.UpdateBottleStatus");
		
		UUMG_LiquidMemoryProductListItem_C_UpdateBottleStatus_Params params {};
		params.InLiquidMemoryId = InLiquidMemoryId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetLiquidMemoryActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsActivated                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_LiquidMemoryProductListItem_C::SetLiquidMemoryActivated(bool bInIsActivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetLiquidMemoryActivated");
		
		UUMG_LiquidMemoryProductListItem_C_SetLiquidMemoryActivated_Params params {};
		params.bInIsActivated = bInIsActivated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetPurchaseEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEnable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_LiquidMemoryProductListItem_C::SetPurchaseEnable(bool InIsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetPurchaseEnable");
		
		UUMG_LiquidMemoryProductListItem_C_SetPurchaseEnable_Params params {};
		params.InIsEnable = InIsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetTotalCost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTotalCost                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryProductListItem_C::SetTotalCost(int32_t InTotalCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetTotalCost");
		
		UUMG_LiquidMemoryProductListItem_C_SetTotalCost_Params params {};
		params.InTotalCost = InTotalCost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetCost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutCost                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryProductListItem_C::GetCost(int32_t* OutCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetCost");
		
		UUMG_LiquidMemoryProductListItem_C_GetCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCost != nullptr)
			*OutCost = params.OutCost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetCurrUseBottleNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutBottleNum                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryProductListItem_C::GetCurrUseBottleNum(int32_t* OutBottleNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetCurrUseBottleNum");
		
		UUMG_LiquidMemoryProductListItem_C_GetCurrUseBottleNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBottleNum != nullptr)
			*OutBottleNum = params.OutBottleNum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetCostText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCost                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryProductListItem_C::SetCostText(int32_t InCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetCostText");
		
		UUMG_LiquidMemoryProductListItem_C_SetCostText_Params params {};
		params.InCost = InCost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetLimit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LimitNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryProductListItem_C::SetLimit(int32_t LimitNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetLimit");
		
		UUMG_LiquidMemoryProductListItem_C_SetLimit_Params params {};
		params.LimitNum = LimitNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.ButtonUpdate
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryProductListItem_C::ButtonUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.ButtonUpdate");
		
		UUMG_LiquidMemoryProductListItem_C_ButtonUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetRemainUsableBottleNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Remain                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryProductListItem_C::GetRemainUsableBottleNum(int32_t* Remain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetRemainUsableBottleNum");
		
		UUMG_LiquidMemoryProductListItem_C_GetRemainUsableBottleNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Remain != nullptr)
			*Remain = params.Remain;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetBtnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_LiquidMemoryProductListItem_C::SetBtnSelected(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetBtnSelected");
		
		UUMG_LiquidMemoryProductListItem_C_SetBtnSelected_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.UpdateUsingBottleNumberInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InUsingBottleNum                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryProductListItem_C::UpdateUsingBottleNumberInput(int32_t InUsingBottleNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.UpdateUsingBottleNumberInput");
		
		UUMG_LiquidMemoryProductListItem_C_UpdateUsingBottleNumberInput_Params params {};
		params.InUsingBottleNum = InUsingBottleNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetLiquidMemoryId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutProductItemIndex                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryProductListItem_C::GetLiquidMemoryId(int32_t* OutProductItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetLiquidMemoryId");
		
		UUMG_LiquidMemoryProductListItem_C_GetLiquidMemoryId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutProductItemIndex != nullptr)
			*OutProductItemIndex = params.OutProductItemIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetUsingBottleNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutPurchaseNum                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryProductListItem_C::GetUsingBottleNum(int32_t* OutPurchaseNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetUsingBottleNum");
		
		UUMG_LiquidMemoryProductListItem_C_GetUsingBottleNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPurchaseNum != nullptr)
			*OutPurchaseNum = params.OutPurchaseNum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetUsingBottleNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InBottleNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_LiquidMemoryProductListItem_C::SetUsingBottleNum(int32_t InBottleNum, bool Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetUsingBottleNum");
		
		UUMG_LiquidMemoryProductListItem_C_SetUsingBottleNum_Params params {};
		params.InBottleNum = InBottleNum;
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetTotalCost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutPurchasePrice                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryProductListItem_C::GetTotalCost(int32_t* OutPurchasePrice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetTotalCost");
		
		UUMG_LiquidMemoryProductListItem_C_GetTotalCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPurchasePrice != nullptr)
			*OutPurchasePrice = params.OutPurchasePrice;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryProductListItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.Construct");
		
		UUMG_LiquidMemoryProductListItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBLiquidMemoryMasterData                   InLiquidMemoryMaster                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            InUseBottleNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsCostDiscount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              InCostDiscountRate                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsUsable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_LiquidMemoryProductListItem_C::Init(const struct FSBLiquidMemoryMasterData& InLiquidMemoryMaster, int32_t InUseBottleNum, bool InIsCostDiscount, float InCostDiscountRate, bool IsUsable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.Init");
		
		UUMG_LiquidMemoryProductListItem_C_Init_Params params {};
		params.InLiquidMemoryMaster = InLiquidMemoryMaster;
		params.InUseBottleNum = InUseBottleNum;
		params.InIsCostDiscount = InIsCostDiscount;
		params.InCostDiscountRate = InCostDiscountRate;
		params.IsUsable = IsUsable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetPurchaseCountValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryProductListItem_C::SetPurchaseCountValue(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetPurchaseCountValue");
		
		UUMG_LiquidMemoryProductListItem_C_SetPurchaseCountValue_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_53_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryProductListItem_C::BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_53_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_53_OnButtonReleasedEvent__DelegateSignature");
		
		UUMG_LiquidMemoryProductListItem_C_BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_53_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_78_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryProductListItem_C::BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_78_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_78_OnButtonReleasedEvent__DelegateSignature");
		
		UUMG_LiquidMemoryProductListItem_C_BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_78_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.StartRepeatMinus
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryProductListItem_C::StartRepeatMinus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.StartRepeatMinus");
		
		UUMG_LiquidMemoryProductListItem_C_StartRepeatMinus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.StartRepeatPlus
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryProductListItem_C::StartRepeatPlus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.StartRepeatPlus");
		
		UUMG_LiquidMemoryProductListItem_C_StartRepeatPlus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.NumberMinus
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryProductListItem_C::NumberMinus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.NumberMinus");
		
		UUMG_LiquidMemoryProductListItem_C_NumberMinus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.NumberPlus
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryProductListItem_C::NumberPlus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.NumberPlus");
		
		UUMG_LiquidMemoryProductListItem_C_NumberPlus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_198_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryProductListItem_C::BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_198_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_198_OnButtonPressedEvent__DelegateSignature");
		
		UUMG_LiquidMemoryProductListItem_C_BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_198_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_219_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryProductListItem_C::BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_219_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_219_OnButtonPressedEvent__DelegateSignature");
		
		UUMG_LiquidMemoryProductListItem_C_BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_219_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__UMG_LiquidMemoryProductListItem_Btn_Ticket_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryProductListItem_C::BndEvt__UMG_LiquidMemoryProductListItem_Btn_Ticket_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__UMG_LiquidMemoryProductListItem_Btn_Ticket_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_LiquidMemoryProductListItem_C_BndEvt__UMG_LiquidMemoryProductListItem_Btn_Ticket_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryProductListItem_C::BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_LiquidMemoryProductListItem_C_BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryProductListItem_C::BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UUMG_LiquidMemoryProductListItem_C_BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryProductListItem_C::BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UUMG_LiquidMemoryProductListItem_C_BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.ExecuteUbergraph_UMG_LiquidMemoryProductListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryProductListItem_C::ExecuteUbergraph_UMG_LiquidMemoryProductListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.ExecuteUbergraph_UMG_LiquidMemoryProductListItem");
		
		UUMG_LiquidMemoryProductListItem_C_ExecuteUbergraph_UMG_LiquidMemoryProductListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnPopupTokenList__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LiquidMemoryId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsFullCharge                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_LiquidMemoryProductListItem_C::OnPopupTokenList__DelegateSignature(int32_t LiquidMemoryId, bool IsFullCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnPopupTokenList__DelegateSignature");
		
		UUMG_LiquidMemoryProductListItem_C_OnPopupTokenList__DelegateSignature_Params params {};
		params.LiquidMemoryId = LiquidMemoryId;
		params.IsFullCharge = IsFullCharge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnOveredAddNumMax__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryProductListItem_C::OnOveredAddNumMax__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnOveredAddNumMax__DelegateSignature");
		
		UUMG_LiquidMemoryProductListItem_C_OnOveredAddNumMax__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnSub__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_LiquidMemoryProductListItem_C*          InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryProductListItem_C::OnSub__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnSub__DelegateSignature");
		
		UUMG_LiquidMemoryProductListItem_C_OnSub__DelegateSignature_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnAdd__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_LiquidMemoryProductListItem_C*          InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryProductListItem_C::OnAdd__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnAdd__DelegateSignature");
		
		UUMG_LiquidMemoryProductListItem_C_OnAdd__DelegateSignature_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnBtnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_LiquidMemoryProductListItem_C*          InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryProductListItem_C::OnBtnSelected__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnBtnSelected__DelegateSignature");
		
		UUMG_LiquidMemoryProductListItem_C_OnBtnSelected__DelegateSignature_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnBtnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_LiquidMemoryProductListItem_C*          InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryProductListItem_C::OnBtnUnhovered__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnBtnUnhovered__DelegateSignature");
		
		UUMG_LiquidMemoryProductListItem_C_OnBtnUnhovered__DelegateSignature_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnBtnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_LiquidMemoryProductListItem_C*          InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryProductListItem_C::OnBtnHovered__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnBtnHovered__DelegateSignature");
		
		UUMG_LiquidMemoryProductListItem_C_OnBtnHovered__DelegateSignature_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_LiquidMemoryProductListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_LiquidMemoryProductListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C");
		return ptr;
	}

}


