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
	 * 		Name   -> PredefinedFunction UStepListItem_NFTAreaTimer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStepListItem_NFTAreaTimer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StepListItem_NFTAreaTimer.StepListItem_NFTAreaTimer_C");
		return ptr;
	}

}


