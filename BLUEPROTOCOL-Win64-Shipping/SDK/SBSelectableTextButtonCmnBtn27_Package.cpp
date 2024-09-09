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
	 * 		Name   -> PredefinedFunction USBSelectableTextButtonCmnBtn27_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USBSelectableTextButtonCmnBtn27_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SBSelectableTextButtonCmnBtn27.SBSelectableTextButtonCmnBtn27_C");
		return ptr;
	}

}


