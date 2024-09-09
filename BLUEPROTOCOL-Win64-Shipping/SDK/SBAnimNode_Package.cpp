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
	 * 		Name   -> PredefinedFunction USBPartsDamageAnimParamter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USBPartsDamageAnimParamter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SBAnimNode.SBPartsDamageAnimParamter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USBBoneScaleCacheInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USBBoneScaleCacheInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SBAnimNode.SBBoneScaleCacheInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USBPartsDamageAnimInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USBPartsDamageAnimInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SBAnimNode.SBPartsDamageAnimInterface");
		return ptr;
	}

}


