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
	 * 		Name   -> PredefinedFunction UBP_AB_EarthResistDown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AB_EarthResistDown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AB_EarthResistDown.BP_AB_EarthResistDown_C");
		return ptr;
	}

}


