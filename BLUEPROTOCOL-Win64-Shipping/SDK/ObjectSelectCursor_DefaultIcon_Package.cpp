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
	 * 		Name   -> PredefinedFunction UObjectSelectCursor_DefaultIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectSelectCursor_DefaultIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ObjectSelectCursor_DefaultIcon.ObjectSelectCursor_DefaultIcon_C");
		return ptr;
	}

}


