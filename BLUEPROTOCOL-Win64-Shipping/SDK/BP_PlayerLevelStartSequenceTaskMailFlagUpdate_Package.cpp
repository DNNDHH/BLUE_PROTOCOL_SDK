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
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskMailFlagUpdate.BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerLevelStartSequenceComponent*        Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskMailFlagUpdate_C::Start(class USBPlayerLevelStartSequenceComponent* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskMailFlagUpdate.BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C.Start");
		
		UBP_PlayerLevelStartSequenceTaskMailFlagUpdate_C_Start_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskMailFlagUpdate.BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskMailFlagUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskMailFlagUpdate_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskMailFlagUpdate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskMailFlagUpdate.BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskMailFlagUpdate");
		
		UBP_PlayerLevelStartSequenceTaskMailFlagUpdate_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskMailFlagUpdate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerLevelStartSequenceTaskMailFlagUpdate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerLevelStartSequenceTaskMailFlagUpdate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskMailFlagUpdate.BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C");
		return ptr;
	}

}

