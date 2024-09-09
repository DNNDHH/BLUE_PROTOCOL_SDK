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
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage.BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerLevelStartSequenceComponent*        Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C::Start(class USBPlayerLevelStartSequenceComponent* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage.BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C.Start");
		
		UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_Start_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage.BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage.BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage");
		
		UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage.BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C");
		return ptr;
	}

}


