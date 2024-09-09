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
	 * 		Name   -> Function DirectInputPlugin.IDirectInputPluginSettings.GetSettings
	 * 		Flags  -> ()
	 */
	class UIDirectInputPluginSettings* UIDirectInputPluginSettings::GetSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DirectInputPlugin.IDirectInputPluginSettings.GetSettings");
		
		UIDirectInputPluginSettings_GetSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIDirectInputPluginSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIDirectInputPluginSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DirectInputPlugin.IDirectInputPluginSettings");
		return ptr;
	}

}


