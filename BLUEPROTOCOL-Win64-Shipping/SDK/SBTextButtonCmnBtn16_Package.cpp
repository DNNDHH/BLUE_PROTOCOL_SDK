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
	 * 		Name   -> PredefinedFunction USBTextButtonCmnBtn16_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USBTextButtonCmnBtn16_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SBTextButtonCmnBtn16.SBTextButtonCmnBtn16_C");
		return ptr;
	}

}


