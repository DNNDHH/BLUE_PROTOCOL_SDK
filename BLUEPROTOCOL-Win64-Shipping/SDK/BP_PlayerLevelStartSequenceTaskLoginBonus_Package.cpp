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
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.Lock Loading Screen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayerLevelStartSequenceTaskLoginBonus_C::LockLoadingScreen(bool Lock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.Lock Loading Screen");
		
		UBP_PlayerLevelStartSequenceTaskLoginBonus_C_LockLoadingScreen_Params params {};
		params.Lock = Lock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.OnLoaded_9C8A3A574D92EE195DA83A82A8920833
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskLoginBonus_C::OnLoaded_9C8A3A574D92EE195DA83A82A8920833(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.OnLoaded_9C8A3A574D92EE195DA83A82A8920833");
		
		UBP_PlayerLevelStartSequenceTaskLoginBonus_C_OnLoaded_9C8A3A574D92EE195DA83A82A8920833_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.ActiveCompletefunc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ErrorCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskLoginBonus_C::ActiveCompletefunc(bool bWasSuccessful, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.ActiveCompletefunc");
		
		UBP_PlayerLevelStartSequenceTaskLoginBonus_C_ActiveCompletefunc_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.GetDetailWork
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ErrorCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskLoginBonus_C::GetDetailWork(bool bWasSuccessful, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.GetDetailWork");
		
		UBP_PlayerLevelStartSequenceTaskLoginBonus_C_GetDetailWork_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.ActiveCheckRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFinish                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayerLevelStartSequenceTaskLoginBonus_C::ActiveCheckRequest(bool IsFinish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.ActiveCheckRequest");
		
		UBP_PlayerLevelStartSequenceTaskLoginBonus_C_ActiveCheckRequest_Params params {};
		params.IsFinish = IsFinish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.OnFinishEvent
	 * 		Flags  -> ()
	 */
	void UBP_PlayerLevelStartSequenceTaskLoginBonus_C::OnFinishEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.OnFinishEvent");
		
		UBP_PlayerLevelStartSequenceTaskLoginBonus_C_OnFinishEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.CheckCompleteFunc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ErrorCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskLoginBonus_C::CheckCompleteFunc(bool bWasSuccessful, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.CheckCompleteFunc");
		
		UBP_PlayerLevelStartSequenceTaskLoginBonus_C_CheckCompleteFunc_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerLevelStartSequenceComponent*        Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskLoginBonus_C::Start(class USBPlayerLevelStartSequenceComponent* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.Start");
		
		UBP_PlayerLevelStartSequenceTaskLoginBonus_C_Start_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.Finish
	 * 		Flags  -> ()
	 */
	void UBP_PlayerLevelStartSequenceTaskLoginBonus_C::Finish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.Finish");
		
		UBP_PlayerLevelStartSequenceTaskLoginBonus_C_Finish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskLoginBonus_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus");
		
		UBP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerLevelStartSequenceTaskLoginBonus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerLevelStartSequenceTaskLoginBonus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C");
		return ptr;
	}

}


