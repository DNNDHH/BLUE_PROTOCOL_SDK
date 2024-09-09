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
	 * 		Name   -> Function ChatLogUnreadMessage.ChatLogUnreadMessage_C.ZeroPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        RetValue                                                   (Parm, OutParm)
	 */
	void UChatLogUnreadMessage_C::ZeroPadding(int32_t InValue, class FText* RetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogUnreadMessage.ChatLogUnreadMessage_C.ZeroPadding");
		
		UChatLogUnreadMessage_C_ZeroPadding_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetValue != nullptr)
			*RetValue = params.RetValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatLogUnreadMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatLogUnreadMessage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatLogUnreadMessage.ChatLogUnreadMessage_C");
		return ptr;
	}

}


