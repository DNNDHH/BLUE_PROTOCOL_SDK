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
	 * 		Name   -> Function ChatLogIcon1.ChatLogIcon1_C.SetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogType                                     ChatLogType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogIcon1_C::SetIcon(ESBChatLogType ChatLogType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogIcon1.ChatLogIcon1_C.SetIcon");
		
		UChatLogIcon1_C_SetIcon_Params params {};
		params.ChatLogType = ChatLogType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatLogIcon1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatLogIcon1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatLogIcon1.ChatLogIcon1_C");
		return ptr;
	}

}


