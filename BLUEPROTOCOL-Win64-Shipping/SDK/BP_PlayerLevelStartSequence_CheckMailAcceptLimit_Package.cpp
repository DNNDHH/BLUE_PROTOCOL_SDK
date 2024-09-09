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
	 * 		Name   -> Function BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.GetDescription
	 * 		Flags  -> ()
	 */
	class FString UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C::GetDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.GetDescription");
		
		UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_GetDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.FinishSequence
	 * 		Flags  -> ()
	 */
	void UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C::FinishSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.FinishSequence");
		
		UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_FinishSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.OnSynced
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSyncd                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C::OnSynced(bool bIsSyncd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.OnSynced");
		
		UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_OnSynced_Params params {};
		params.bIsSyncd = bIsSyncd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.PreStart
	 * 		Flags  -> ()
	 */
	void UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C::PreStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.PreStart");
		
		UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_PreStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C::ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit");
		
		UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C");
		return ptr;
	}

}


