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
	 * 		Name   -> Function CmnNumber1_0to99.CmnNumber1_0to99_C.GetNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutNumber                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnNumber1_0to99_C::GetNumber(int32_t* OutNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnNumber1_0to99.CmnNumber1_0to99_C.GetNumber");
		
		UCmnNumber1_0to99_C_GetNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNumber != nullptr)
			*OutNumber = params.OutNumber;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnNumber1_0to99.CmnNumber1_0to99_C.SetNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InNumber                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnNumber1_0to99_C::SetNumber(int32_t InNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnNumber1_0to99.CmnNumber1_0to99_C.SetNumber");
		
		UCmnNumber1_0to99_C_SetNumber_Params params {};
		params.InNumber = InNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCmnNumber1_0to99_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCmnNumber1_0to99_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CmnNumber1_0to99.CmnNumber1_0to99_C");
		return ptr;
	}

}


