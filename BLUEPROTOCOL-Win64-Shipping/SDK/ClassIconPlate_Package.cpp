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
	 * 		Name   -> Function ClassIconPlate.ClassIconPlate_C.GetIconTexture
	 * 		Flags  -> ()
	 */
	class UTexture2D* UClassIconPlate_C::GetIconTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClassIconPlate.ClassIconPlate_C.GetIconTexture");
		
		UClassIconPlate_C_GetIconTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClassIconPlate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClassIconPlate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ClassIconPlate.ClassIconPlate_C");
		return ptr;
	}

}


