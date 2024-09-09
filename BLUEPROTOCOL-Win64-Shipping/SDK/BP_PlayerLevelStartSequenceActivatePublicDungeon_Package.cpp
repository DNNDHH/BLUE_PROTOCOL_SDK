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
	 * 		Name   -> Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.NewDngID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                ClientCheckList                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FString>                              ServerList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FString>                              Return                                                     (Parm, OutParm)
	 */
	void UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::NewDngID(TArray<class FName>* ClientCheckList, TArray<class FString>* ServerList, TArray<class FString>* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.NewDngID");
		
		UBP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClientCheckList != nullptr)
			*ClientCheckList = params.ClientCheckList;
		if (ServerList != nullptr)
			*ServerList = params.ServerList;
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.CheckActivatedPubDng
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                ActivatedPubDng                                            (Parm, OutParm)
	 */
	void UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::CheckActivatedPubDng(TArray<class FName>* ActivatedPubDng)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.CheckActivatedPubDng");
		
		UBP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActivatedPubDng != nullptr)
			*ActivatedPubDng = params.ActivatedPubDng;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.DialogClose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::DialogClose(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.DialogClose");
		
		UBP_PlayerLevelStartSequenceActivatePublicDungeon_C_DialogClose_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.GetActivatedPublicDungeons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              OutArray                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::GetActivatedPublicDungeons(int32_t RetCode, TArray<class FString> OutArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.GetActivatedPublicDungeons");
		
		UBP_PlayerLevelStartSequenceActivatePublicDungeon_C_GetActivatedPublicDungeons_Params params {};
		params.RetCode = RetCode;
		params.OutArray = OutArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.ShowRecursive
	 * 		Flags  -> ()
	 */
	void UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::ShowRecursive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.ShowRecursive");
		
		UBP_PlayerLevelStartSequenceActivatePublicDungeon_C_ShowRecursive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerLevelStartSequenceComponent*        Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::Start(class USBPlayerLevelStartSequenceComponent* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.Start");
		
		UBP_PlayerLevelStartSequenceActivatePublicDungeon_C_Start_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.AddActivatedPublicDungeons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::AddActivatedPublicDungeons(int32_t RetCode, bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.AddActivatedPublicDungeons");
		
		UBP_PlayerLevelStartSequenceActivatePublicDungeon_C_AddActivatedPublicDungeons_Params params {};
		params.RetCode = RetCode;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon");
		
		UBP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerLevelStartSequenceActivatePublicDungeon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C");
		return ptr;
	}

}


