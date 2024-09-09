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
	 * 		Name   -> PredefinedFunction UBP_DmgTypeSuper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DmgTypeSuper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DmgTypeSuper.BP_DmgTypeSuper_C");
		return ptr;
	}

}


