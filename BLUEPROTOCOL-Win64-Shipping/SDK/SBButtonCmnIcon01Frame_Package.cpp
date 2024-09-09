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
	 * 		Name   -> PredefinedFunction USBButtonCmnIcon01Frame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USBButtonCmnIcon01Frame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SBButtonCmnIcon01Frame.SBButtonCmnIcon01Frame_C");
		return ptr;
	}

}


