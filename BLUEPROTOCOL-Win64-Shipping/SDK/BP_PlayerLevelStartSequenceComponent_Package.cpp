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
	 * 		Name   -> Function BP_PlayerLevelStartSequenceComponent.BP_PlayerLevelStartSequenceComponent_C.CreateTaskList
	 * 		Flags  -> ()
	 */
	bool UBP_PlayerLevelStartSequenceComponent_C::CreateTaskList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceComponent.BP_PlayerLevelStartSequenceComponent_C.CreateTaskList");
		
		UBP_PlayerLevelStartSequenceComponent_C_CreateTaskList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerLevelStartSequenceComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerLevelStartSequenceComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLevelStartSequenceComponent.BP_PlayerLevelStartSequenceComponent_C");
		return ptr;
	}

}


