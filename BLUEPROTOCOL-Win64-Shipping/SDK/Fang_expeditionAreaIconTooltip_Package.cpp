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
	 * 		Name   -> Function Fang_expeditionAreaIconTooltip.Fang_expeditionAreaIconTooltip_C.AddData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBFang_expeditionStatus                           Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      AreaName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Limited                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expeditionAreaIconTooltip_C::AddData(ESBFang_expeditionStatus Status, const class FString& AreaName, bool Limited)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expeditionAreaIconTooltip.Fang_expeditionAreaIconTooltip_C.AddData");
		
		UFang_expeditionAreaIconTooltip_C_AddData_Params params {};
		params.Status = Status;
		params.AreaName = AreaName;
		params.Limited = Limited;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expeditionAreaIconTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expeditionAreaIconTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expeditionAreaIconTooltip.Fang_expeditionAreaIconTooltip_C");
		return ptr;
	}

}


