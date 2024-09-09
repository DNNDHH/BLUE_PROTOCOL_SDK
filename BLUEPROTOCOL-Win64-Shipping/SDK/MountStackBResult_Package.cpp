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
	 * 		Name   -> Function MountStackBResult.MountStackBResult_C.SetImagineData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMountStackBResult_C::SetImagineData(const struct FOwnItemInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBResult.MountStackBResult_C.SetImagineData");
		
		UMountStackBResult_C_SetImagineData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMountStackBResult_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMountStackBResult_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MountStackBResult.MountStackBResult_C");
		return ptr;
	}

}


