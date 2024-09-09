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
	 * 		Name   -> PredefinedFunction UBP_RequestCameraAnimNotify_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RequestCameraAnimNotify_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RequestCameraAnimNOtify.BP_RequestCameraAnimNotify_C");
		return ptr;
	}

}


