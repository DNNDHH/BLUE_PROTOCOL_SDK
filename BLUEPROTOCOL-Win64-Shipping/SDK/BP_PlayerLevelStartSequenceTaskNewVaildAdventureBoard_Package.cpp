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
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard.BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerLevelStartSequenceComponent*        Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C::Start(class USBPlayerLevelStartSequenceComponent* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard.BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C.Start");
		
		UBP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_Start_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard.BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C.OnRankupCompleteDelegete_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C::OnRankupCompleteDelegete_Event(int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard.BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C.OnRankupCompleteDelegete_Event");
		
		UBP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_OnRankupCompleteDelegete_Event_Params params {};
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard.BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard.BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard");
		
		UBP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard.BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C");
		return ptr;
	}

}


