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
	 * 		Name   -> PredefinedFunction UBP_SBScreenShotUtils_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SBScreenShotUtils_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SBScreenShotUtils.BP_SBScreenShotUtils_C");
		return ptr;
	}

}


