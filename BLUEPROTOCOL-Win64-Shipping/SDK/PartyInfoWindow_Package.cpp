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
	 * 		Name   -> Function PartyInfoWindow.PartyInfoWindow_C.SetEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EditMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartyInfoWindow_C::SetEditMode(bool EditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyInfoWindow.PartyInfoWindow_C.SetEditMode");
		
		UPartyInfoWindow_C_SetEditMode_Params params {};
		params.EditMode = EditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPartyInfoWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPartyInfoWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PartyInfoWindow.PartyInfoWindow_C");
		return ptr;
	}

}


