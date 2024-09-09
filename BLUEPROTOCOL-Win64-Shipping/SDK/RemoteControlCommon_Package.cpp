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
	 * 		Name   -> PredefinedFunction URCPropertyContainerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URCPropertyContainerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RemoteControlCommon.RCPropertyContainerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URCPropertyContainerRegistry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URCPropertyContainerRegistry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RemoteControlCommon.RCPropertyContainerRegistry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPropertyContainerTestObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyContainerTestObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RemoteControlCommon.PropertyContainerTestObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoteControlSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoteControlSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RemoteControlCommon.RemoteControlSettings");
		return ptr;
	}

}


