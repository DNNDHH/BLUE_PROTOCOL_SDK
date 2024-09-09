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
	 * 		Name   -> PredefinedFunction ULicenseSTRIXLogoWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULicenseSTRIXLogoWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LicenseSTRIXLogoWidget.LicenseSTRIXLogoWidget_C");
		return ptr;
	}

}


