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
	 * 		Name   -> Function Fang_expeditionAreaIconTooltip_AreaData.Fang_expeditionAreaIconTooltip_AreaData_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBFang_expeditionStatus                           Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      AreaName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               TimeLimited                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expeditionAreaIconTooltip_AreaData_C::SetData(ESBFang_expeditionStatus Status, const class FString& AreaName, bool TimeLimited)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expeditionAreaIconTooltip_AreaData.Fang_expeditionAreaIconTooltip_AreaData_C.SetData");
		
		UFang_expeditionAreaIconTooltip_AreaData_C_SetData_Params params {};
		params.Status = Status;
		params.AreaName = AreaName;
		params.TimeLimited = TimeLimited;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expeditionAreaIconTooltip_AreaData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expeditionAreaIconTooltip_AreaData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expeditionAreaIconTooltip_AreaData.Fang_expeditionAreaIconTooltip_AreaData_C");
		return ptr;
	}

}


