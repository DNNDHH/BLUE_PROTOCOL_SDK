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
	 * 		Name   -> Function UMG_Notifications.UMG_Notifications_C.Get_PartyInvitationReceivedIcon_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUMG_Notifications_C::Get_PartyInvitationReceivedIcon_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_Notifications.UMG_Notifications_C.Get_PartyInvitationReceivedIcon_Visibility_1");
		
		UUMG_Notifications_C_Get_PartyInvitationReceivedIcon_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_Notifications_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_Notifications_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Notifications.UMG_Notifications_C");
		return ptr;
	}

}


