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
	 * 		Name   -> Function UMG_RewardBoostTooltopElement.UMG_RewardBoostTooltopElement_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBRewardBoostTooltipData                   Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_RewardBoostTooltopElement_C::SetData(const struct FSBRewardBoostTooltipData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RewardBoostTooltopElement.UMG_RewardBoostTooltopElement_C.SetData");
		
		UUMG_RewardBoostTooltopElement_C_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RewardBoostTooltopElement.UMG_RewardBoostTooltopElement_C.ExecuteUbergraph_UMG_RewardBoostTooltopElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_RewardBoostTooltopElement_C::ExecuteUbergraph_UMG_RewardBoostTooltopElement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RewardBoostTooltopElement.UMG_RewardBoostTooltopElement_C.ExecuteUbergraph_UMG_RewardBoostTooltopElement");
		
		UUMG_RewardBoostTooltopElement_C_ExecuteUbergraph_UMG_RewardBoostTooltopElement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_RewardBoostTooltopElement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_RewardBoostTooltopElement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_RewardBoostTooltopElement.UMG_RewardBoostTooltopElement_C");
		return ptr;
	}

}


