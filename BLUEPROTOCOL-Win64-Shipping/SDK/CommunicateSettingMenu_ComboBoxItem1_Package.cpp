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
	 * 		Name   -> PredefinedFunction UCommunicateSettingMenu_ComboBoxItem1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommunicateSettingMenu_ComboBoxItem1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommunicateSettingMenu_ComboBoxItem1.CommunicateSettingMenu_ComboBoxItem1_C");
		return ptr;
	}

}


