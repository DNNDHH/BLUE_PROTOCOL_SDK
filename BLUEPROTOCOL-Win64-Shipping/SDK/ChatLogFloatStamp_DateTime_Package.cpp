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
	 * 		Name   -> Function ChatLogFloatStamp_DateTime.ChatLogFloatStamp_DateTime_C.SetExpiryDateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   ExpiryDateTime                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogFloatStamp_DateTime_C::SetExpiryDateTime(const struct FDateTime& ExpiryDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogFloatStamp_DateTime.ChatLogFloatStamp_DateTime_C.SetExpiryDateTime");
		
		UChatLogFloatStamp_DateTime_C_SetExpiryDateTime_Params params {};
		params.ExpiryDateTime = ExpiryDateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogFloatStamp_DateTime.ChatLogFloatStamp_DateTime_C.ExecuteUbergraph_ChatLogFloatStamp_DateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogFloatStamp_DateTime_C::ExecuteUbergraph_ChatLogFloatStamp_DateTime(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogFloatStamp_DateTime.ChatLogFloatStamp_DateTime_C.ExecuteUbergraph_ChatLogFloatStamp_DateTime");
		
		UChatLogFloatStamp_DateTime_C_ExecuteUbergraph_ChatLogFloatStamp_DateTime_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatLogFloatStamp_DateTime_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatLogFloatStamp_DateTime_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatLogFloatStamp_DateTime.ChatLogFloatStamp_DateTime_C");
		return ptr;
	}

}


