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
	 * 		Name   -> PredefinedFunction USBComboBoxCmn01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USBComboBoxCmn01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SBComboBoxCmn01.SBComboBoxCmn01_C");
		return ptr;
	}

}


