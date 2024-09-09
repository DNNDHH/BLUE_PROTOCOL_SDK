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
	 * 		Name   -> Function StepList_AdventureBoard.StepList_AdventureBoard_C.CreateAdventureBoardCondition
	 * 		Flags  -> ()
	 */
	struct FSBAdventureBoardCondition UStepList_AdventureBoard_C::CreateAdventureBoardCondition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StepList_AdventureBoard.StepList_AdventureBoard_C.CreateAdventureBoardCondition");
		
		UStepList_AdventureBoard_C_CreateAdventureBoardCondition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStepList_AdventureBoard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStepList_AdventureBoard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StepList_AdventureBoard.StepList_AdventureBoard_C");
		return ptr;
	}

}


