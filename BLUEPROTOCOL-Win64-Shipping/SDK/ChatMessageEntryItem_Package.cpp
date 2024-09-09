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
	 * 		Name   -> PredefinedFunction UChatMessageEntryItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatMessageEntryItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChatMessageEntryItem.ChatMessageEntryItem_C");
		return ptr;
	}

}


