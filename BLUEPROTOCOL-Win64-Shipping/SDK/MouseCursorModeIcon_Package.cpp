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
	 * 		Name   -> Function MouseCursorModeIcon.MouseCursorModeIcon_C.SetSwitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMouseCursorModeIcon_C::SetSwitch(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MouseCursorModeIcon.MouseCursorModeIcon_C.SetSwitch");
		
		UMouseCursorModeIcon_C_SetSwitch_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMouseCursorModeIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMouseCursorModeIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MouseCursorModeIcon.MouseCursorModeIcon_C");
		return ptr;
	}

}


