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
	 * 		Name   -> Function BP_PlayerLevelStartSequenceForceNavigation.BP_PlayerLevelStartSequenceForceNavigation_C.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerLevelStartSequenceComponent*        Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceForceNavigation_C::Start(class USBPlayerLevelStartSequenceComponent* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceForceNavigation.BP_PlayerLevelStartSequenceForceNavigation_C.Start");
		
		UBP_PlayerLevelStartSequenceForceNavigation_C_Start_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceForceNavigation.BP_PlayerLevelStartSequenceForceNavigation_C.WaitScriptExecution
	 * 		Flags  -> ()
	 */
	void UBP_PlayerLevelStartSequenceForceNavigation_C::WaitScriptExecution()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceForceNavigation.BP_PlayerLevelStartSequenceForceNavigation_C.WaitScriptExecution");
		
		UBP_PlayerLevelStartSequenceForceNavigation_C_WaitScriptExecution_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceForceNavigation.BP_PlayerLevelStartSequenceForceNavigation_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceForceNavigation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceForceNavigation_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceForceNavigation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceForceNavigation.BP_PlayerLevelStartSequenceForceNavigation_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceForceNavigation");
		
		UBP_PlayerLevelStartSequenceForceNavigation_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceForceNavigation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerLevelStartSequenceForceNavigation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerLevelStartSequenceForceNavigation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLevelStartSequenceForceNavigation.BP_PlayerLevelStartSequenceForceNavigation_C");
		return ptr;
	}

}


