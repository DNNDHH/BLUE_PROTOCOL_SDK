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
	 * 		Name   -> Function ShortcutRing_KeyGuidePlate.ShortcutRing_KeyGuidePlate_C.OnSetup
	 * 		Flags  -> ()
	 */
	void UShortcutRing_KeyGuidePlate_C::OnSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRing_KeyGuidePlate.ShortcutRing_KeyGuidePlate_C.OnSetup");
		
		UShortcutRing_KeyGuidePlate_C_OnSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShortcutRing_KeyGuidePlate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShortcutRing_KeyGuidePlate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ShortcutRing_KeyGuidePlate.ShortcutRing_KeyGuidePlate_C");
		return ptr;
	}

}


