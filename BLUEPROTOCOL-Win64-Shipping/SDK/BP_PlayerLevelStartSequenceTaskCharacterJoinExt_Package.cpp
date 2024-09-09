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
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.RequestAPI_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C::RequestAPI_Internal(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.RequestAPI_Internal");
		
		UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_RequestAPI_Internal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerLevelStartSequenceComponent*        Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C::Start(class USBPlayerLevelStartSequenceComponent* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.Start");
		
		UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_Start_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.TryRequestAPI
	 * 		Flags  -> ()
	 */
	void UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C::TryRequestAPI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.TryRequestAPI");
		
		UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_TryRequestAPI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.OnAPICompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C::OnAPICompleted(int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.OnAPICompleted");
		
		UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_OnAPICompleted_Params params {};
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt");
		
		UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C");
		return ptr;
	}

}


