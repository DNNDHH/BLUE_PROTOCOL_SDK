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
	 * 		Name   -> Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.SetMessage
	 * 		Flags  -> ()
	 */
	void UBP_PlayerLevelStartSequence_CheckEndExpedition_C::SetMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.SetMessage");
		
		UBP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.GetDescription
	 * 		Flags  -> ()
	 */
	class FString UBP_PlayerLevelStartSequence_CheckEndExpedition_C::GetDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.GetDescription");
		
		UBP_PlayerLevelStartSequence_CheckEndExpedition_C_GetDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.OnLoaded_D99C7E054941241745424DB27741E175
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequence_CheckEndExpedition_C::OnLoaded_D99C7E054941241745424DB27741E175(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.OnLoaded_D99C7E054941241745424DB27741E175");
		
		UBP_PlayerLevelStartSequence_CheckEndExpedition_C_OnLoaded_D99C7E054941241745424DB27741E175_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.FinishSequence
	 * 		Flags  -> ()
	 */
	void UBP_PlayerLevelStartSequence_CheckEndExpedition_C::FinishSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.FinishSequence");
		
		UBP_PlayerLevelStartSequence_CheckEndExpedition_C_FinishSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.CompleteWork
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasSuccessful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            IdCount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequence_CheckEndExpedition_C::CompleteWork(bool WasSuccessful, int32_t ErrorCode, int32_t IdCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.CompleteWork");
		
		UBP_PlayerLevelStartSequence_CheckEndExpedition_C_CompleteWork_Params params {};
		params.WasSuccessful = WasSuccessful;
		params.ErrorCode = ErrorCode;
		params.IdCount = IdCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerLevelStartSequenceComponent*        Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequence_CheckEndExpedition_C::Start(class USBPlayerLevelStartSequenceComponent* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.Start");
		
		UBP_PlayerLevelStartSequence_CheckEndExpedition_C_Start_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequence_CheckEndExpedition_C::ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition");
		
		UBP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerLevelStartSequence_CheckEndExpedition_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerLevelStartSequence_CheckEndExpedition_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C");
		return ptr;
	}

}


