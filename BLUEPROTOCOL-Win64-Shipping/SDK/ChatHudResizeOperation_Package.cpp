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
	 * 		Name   -> PredefinedFunction UChatHudResizeOperation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatHudResizeOperation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChatHudResizeOperation.ChatHudResizeOperation_C");
		return ptr;
	}

}


