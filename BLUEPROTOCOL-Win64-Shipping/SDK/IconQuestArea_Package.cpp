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
	 * 		Name   -> Function IconQuestArea.IconQuestArea_C.SetPinMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InPinMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIconQuestArea_C::SetPinMode(bool InPinMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IconQuestArea.IconQuestArea_C.SetPinMode");
		
		UIconQuestArea_C_SetPinMode_Params params {};
		params.InPinMode = InPinMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIconQuestArea_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIconQuestArea_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass IconQuestArea.IconQuestArea_C");
		return ptr;
	}

}


