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
	 * 		Name   -> PredefinedFunction ABP_DropTreasureBoxAuthor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DropTreasureBoxAuthor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DropTreasureBoxAuthor.BP_DropTreasureBoxAuthor_C");
		return ptr;
	}

}


