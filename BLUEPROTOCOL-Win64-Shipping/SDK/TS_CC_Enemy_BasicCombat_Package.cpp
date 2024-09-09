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
	 * 		Name   -> PredefinedFunction UTS_CC_Enemy_BasicCombat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTS_CC_Enemy_BasicCombat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TS_CC_Enemy_BasicCombat.TS_CC_Enemy_BasicCombat_C");
		return ptr;
	}

}


