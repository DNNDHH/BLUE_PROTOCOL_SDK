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
	 * 		Name   -> Function UMG_RewardBoostTooltip.UMG_RewardBoostTooltip_C.SetDataList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBRewardBoostTooltipData>           DataList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUMG_RewardBoostTooltip_C::SetDataList(TArray<struct FSBRewardBoostTooltipData>* DataList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RewardBoostTooltip.UMG_RewardBoostTooltip_C.SetDataList");
		
		UUMG_RewardBoostTooltip_C_SetDataList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataList != nullptr)
			*DataList = params.DataList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RewardBoostTooltip.UMG_RewardBoostTooltip_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_RewardBoostTooltip_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RewardBoostTooltip.UMG_RewardBoostTooltip_C.Construct");
		
		UUMG_RewardBoostTooltip_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RewardBoostTooltip.UMG_RewardBoostTooltip_C.ExecuteUbergraph_UMG_RewardBoostTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_RewardBoostTooltip_C::ExecuteUbergraph_UMG_RewardBoostTooltip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RewardBoostTooltip.UMG_RewardBoostTooltip_C.ExecuteUbergraph_UMG_RewardBoostTooltip");
		
		UUMG_RewardBoostTooltip_C_ExecuteUbergraph_UMG_RewardBoostTooltip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_RewardBoostTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_RewardBoostTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_RewardBoostTooltip.UMG_RewardBoostTooltip_C");
		return ptr;
	}

}


