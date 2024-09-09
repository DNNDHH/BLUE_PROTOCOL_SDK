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
	 * 		Name   -> Function Fang_expedition_DetailReleaseConditions.Fang_expedition_DetailReleaseConditions_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionLimitData                 LimitData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFang_expedition_DetailReleaseConditions_C::SetData(const struct FSBFang_expeditionLimitData& LimitData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailReleaseConditions.Fang_expedition_DetailReleaseConditions_C.SetData");
		
		UFang_expedition_DetailReleaseConditions_C_SetData_Params params {};
		params.LimitData = LimitData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_DetailReleaseConditions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_DetailReleaseConditions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_DetailReleaseConditions.Fang_expedition_DetailReleaseConditions_C");
		return ptr;
	}

}


