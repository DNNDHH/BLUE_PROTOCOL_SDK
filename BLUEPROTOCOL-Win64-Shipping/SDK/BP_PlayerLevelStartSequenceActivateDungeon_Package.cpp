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
	 * 		Name   -> Function BP_PlayerLevelStartSequenceActivateDungeon.BP_PlayerLevelStartSequenceActivateDungeon_C.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerLevelStartSequenceComponent*        Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceActivateDungeon_C::Start(class USBPlayerLevelStartSequenceComponent* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceActivateDungeon.BP_PlayerLevelStartSequenceActivateDungeon_C.Start");
		
		UBP_PlayerLevelStartSequenceActivateDungeon_C_Start_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceActivateDungeon.BP_PlayerLevelStartSequenceActivateDungeon_C.GetActiveDungeons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                OutArray                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_PlayerLevelStartSequenceActivateDungeon_C::GetActiveDungeons(TArray<class FName> OutArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceActivateDungeon.BP_PlayerLevelStartSequenceActivateDungeon_C.GetActiveDungeons");
		
		UBP_PlayerLevelStartSequenceActivateDungeon_C_GetActiveDungeons_Params params {};
		params.OutArray = OutArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceActivateDungeon.BP_PlayerLevelStartSequenceActivateDungeon_C.DialogEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceActivateDungeon_C::DialogEnd(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceActivateDungeon.BP_PlayerLevelStartSequenceActivateDungeon_C.DialogEnd");
		
		UBP_PlayerLevelStartSequenceActivateDungeon_C_DialogEnd_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceActivateDungeon.BP_PlayerLevelStartSequenceActivateDungeon_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceActivateDungeon_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceActivateDungeon.BP_PlayerLevelStartSequenceActivateDungeon_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon");
		
		UBP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerLevelStartSequenceActivateDungeon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerLevelStartSequenceActivateDungeon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLevelStartSequenceActivateDungeon.BP_PlayerLevelStartSequenceActivateDungeon_C");
		return ptr;
	}

}


