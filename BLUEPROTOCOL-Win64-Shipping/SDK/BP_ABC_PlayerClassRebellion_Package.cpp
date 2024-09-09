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
	 * 		Name   -> PredefinedFunction UBP_ABC_PlayerClassRebellion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ABC_PlayerClassRebellion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ABC_PlayerClassRebellion.BP_ABC_PlayerClassRebellion_C");
		return ptr;
	}

}


