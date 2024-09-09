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
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.ActiveCompletefunc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ErrorCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C::ActiveCompletefunc(bool bWasSuccessful, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.ActiveCompletefunc");
		
		UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ActiveCompletefunc_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.GetDetailWork
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ErrorCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C::GetDetailWork(bool bWasSuccessful, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.GetDetailWork");
		
		UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_GetDetailWork_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.ActiveCheckRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFinish                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C::ActiveCheckRequest(bool IsFinish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.ActiveCheckRequest");
		
		UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ActiveCheckRequest_Params params {};
		params.IsFinish = IsFinish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerLevelStartSequenceComponent*        Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C::Start(class USBPlayerLevelStartSequenceComponent* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.Start");
		
		UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_Start_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.カスタムイベント_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBCryptoCurrency                           Cryptocurrency                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C::_1(bool Result, int32_t RetCode, const struct FSBCryptoCurrency& Cryptocurrency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.カスタムイベント_1");
		
		UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C__1_Params params {};
		params.Result = Result;
		params.RetCode = RetCode;
		params.Cryptocurrency = Cryptocurrency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb");
		
		UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C");
		return ptr;
	}

}


