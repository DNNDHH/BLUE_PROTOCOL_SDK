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
	 * 		Name   -> Function ClassIconProfile.ClassIconProfile_C.GetIconTexture
	 * 		Flags  -> ()
	 */
	class UTexture2D* UClassIconProfile_C::GetIconTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClassIconProfile.ClassIconProfile_C.GetIconTexture");
		
		UClassIconProfile_C_GetIconTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClassIconProfile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClassIconProfile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ClassIconProfile.ClassIconProfile_C");
		return ptr;
	}

}


