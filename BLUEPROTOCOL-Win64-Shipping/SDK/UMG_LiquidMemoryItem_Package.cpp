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
	 * 		Name   -> Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.UpdateBonusStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LiquidMemoryId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Visible                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_LiquidMemoryItem_C::UpdateBonusStatus(int32_t LiquidMemoryId, bool* Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.UpdateBonusStatus");
		
		UUMG_LiquidMemoryItem_C_UpdateBonusStatus_Params params {};
		params.LiquidMemoryId = LiquidMemoryId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visible != nullptr)
			*Visible = params.Visible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.Setup Tooltip Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBRewardBoostTooltipData>           DataList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUMG_LiquidMemoryItem_C::SetupTooltipWidget(TArray<struct FSBRewardBoostTooltipData>* DataList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.Setup Tooltip Widget");
		
		UUMG_LiquidMemoryItem_C_SetupTooltipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataList != nullptr)
			*DataList = params.DataList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.SetAccumulateConditionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBTextTableHash>                    InTextId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUMG_LiquidMemoryItem_C::SetAccumulateConditionText(TArray<struct FSBTextTableHash>* InTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.SetAccumulateConditionText");
		
		UUMG_LiquidMemoryItem_C_SetAccumulateConditionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InTextId != nullptr)
			*InTextId = params.InTextId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.SetBottleStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsLiquidMemoryInfoValid                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBLiquidMemoryInfo                         InLiquidMemoryInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUMG_LiquidMemoryItem_C::SetBottleStatus(bool InIsLiquidMemoryInfoValid, const struct FSBLiquidMemoryInfo& InLiquidMemoryInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.SetBottleStatus");
		
		UUMG_LiquidMemoryItem_C_SetBottleStatus_Params params {};
		params.InIsLiquidMemoryInfoValid = InIsLiquidMemoryInfoValid;
		params.InLiquidMemoryInfo = InLiquidMemoryInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.SetEfficacyTypeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBTextTableHash                            InNameTextId                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBTextTableHash                            InDescTextId                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryItem_C::SetEfficacyTypeText(const struct FSBTextTableHash& InNameTextId, const struct FSBTextTableHash& InDescTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.SetEfficacyTypeText");
		
		UUMG_LiquidMemoryItem_C_SetEfficacyTypeText_Params params {};
		params.InNameTextId = InNameTextId;
		params.InDescTextId = InDescTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_LiquidMemoryItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_LiquidMemoryItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C");
		return ptr;
	}

}


