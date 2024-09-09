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
	 * 		Name   -> PredefinedFunction AColorCorrectRegion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AColorCorrectRegion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ColorCorrectRegions.ColorCorrectRegion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UColorCorrectRegionsSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UColorCorrectRegionsSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ColorCorrectRegions.ColorCorrectRegionsSubsystem");
		return ptr;
	}

}


