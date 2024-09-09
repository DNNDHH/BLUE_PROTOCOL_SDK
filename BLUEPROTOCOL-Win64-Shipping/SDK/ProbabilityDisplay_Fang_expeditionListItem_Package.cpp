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
	 * 		Name   -> Function ProbabilityDisplay_Fang_expeditionListItem.ProbabilityDisplay_Fang_expeditionListItem_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FangCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBFang_expeditionRandomRewardData          Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UProbabilityDisplay_Fang_expeditionListItem_C::SetData(int32_t FangCount, const struct FSBFang_expeditionRandomRewardData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_Fang_expeditionListItem.ProbabilityDisplay_Fang_expeditionListItem_C.SetData");
		
		UProbabilityDisplay_Fang_expeditionListItem_C_SetData_Params params {};
		params.FangCount = FangCount;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProbabilityDisplay_Fang_expeditionListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProbabilityDisplay_Fang_expeditionListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProbabilityDisplay_Fang_expeditionListItem.ProbabilityDisplay_Fang_expeditionListItem_C");
		return ptr;
	}

}


