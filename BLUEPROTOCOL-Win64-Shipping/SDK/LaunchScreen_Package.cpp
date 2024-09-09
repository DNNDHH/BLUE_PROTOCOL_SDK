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
	 * 		Name   -> Function LaunchScreen.LaunchScreen_C.UpdateAspectRate
	 * 		Flags  -> ()
	 */
	void ULaunchScreen_C::UpdateAspectRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaunchScreen.LaunchScreen_C.UpdateAspectRate");
		
		ULaunchScreen_C_UpdateAspectRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULaunchScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULaunchScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LaunchScreen.LaunchScreen_C");
		return ptr;
	}

}


