﻿/**
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
	 * 		Name   -> PredefinedFunction UBP_AB_SuccessRateUp_Fear_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AB_SuccessRateUp_Fear_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AB_SuccessRateUp_Fear.BP_AB_SuccessRateUp_Fear_C");
		return ptr;
	}

}

