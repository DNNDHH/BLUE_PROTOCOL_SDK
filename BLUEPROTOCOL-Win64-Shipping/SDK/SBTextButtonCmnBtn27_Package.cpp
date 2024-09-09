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
	 * 		Name   -> PredefinedFunction USBTextButtonCmnBtn27_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USBTextButtonCmnBtn27_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SBTextButtonCmnBtn27.SBTextButtonCmnBtn27_C");
		return ptr;
	}

}


