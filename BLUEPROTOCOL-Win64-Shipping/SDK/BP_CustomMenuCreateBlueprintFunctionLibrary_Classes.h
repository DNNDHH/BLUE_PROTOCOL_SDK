﻿#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_CustomMenuCreateBlueprintFunctionLibrary.BP_CustomMenuCreateBlueprintFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_CustomMenuCreateBlueprintFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void CreateCustomMenu(class UClass* Class, class UObject* __WorldContext, class USBCustomMenuBase** WeaponCustomMenu);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif