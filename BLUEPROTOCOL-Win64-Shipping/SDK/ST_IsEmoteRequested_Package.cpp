﻿/**
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
	 * 		Name   -> Function ST_IsEmoteRequested.ST_IsEmoteRequested_C.ReceiveCanEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UST_IsEmoteRequested_C::ReceiveCanEnter(class UAnimInstance* AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ST_IsEmoteRequested.ST_IsEmoteRequested_C.ReceiveCanEnter");
		
		UST_IsEmoteRequested_C_ReceiveCanEnter_Params params {};
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UST_IsEmoteRequested_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UST_IsEmoteRequested_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ST_IsEmoteRequested.ST_IsEmoteRequested_C");
		return ptr;
	}

}


