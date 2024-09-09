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
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.GetStorageComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerStorageComponent*                   StorageComponent                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C::GetStorageComponent(class USBPlayerStorageComponent** StorageComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.GetStorageComponent");
		
		UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_GetStorageComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StorageComponent != nullptr)
			*StorageComponent = params.StorageComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.RequestGetBagItems_API
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C::RequestGetBagItems_API(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.RequestGetBagItems_API");
		
		UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_RequestGetBagItems_API_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerLevelStartSequenceComponent*        Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C::Start(class USBPlayerLevelStartSequenceComponent* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.Start");
		
		UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_Start_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.EndTask
	 * 		Flags  -> ()
	 */
	void UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C::EndTask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.EndTask");
		
		UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_EndTask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.OnReturnDisconnectedPartyComplete_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ReturnPartyResultMessageIndex                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C::OnReturnDisconnectedPartyComplete_Event(bool bWasSuccessful, int32_t ReturnPartyResultMessageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.OnReturnDisconnectedPartyComplete_Event");
		
		UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_OnReturnDisconnectedPartyComplete_Event_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.ReturnPartyResultMessageIndex = ReturnPartyResultMessageIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty");
		
		UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C");
		return ptr;
	}

}


