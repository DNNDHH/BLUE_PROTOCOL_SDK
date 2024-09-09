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
	 * 		Name   -> PredefinedFunction USBTextButtonCmnOnOff01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USBTextButtonCmnOnOff01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SBTextButtonCmnOnOff01.SBTextButtonCmnOnOff01_C");
		return ptr;
	}

}


