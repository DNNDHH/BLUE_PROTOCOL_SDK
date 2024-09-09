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
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskTutorialHelp.BP_PlayerLevelStartSequenceTaskTutorialHelp_C.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerLevelStartSequenceComponent*        Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskTutorialHelp_C::Start(class USBPlayerLevelStartSequenceComponent* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskTutorialHelp.BP_PlayerLevelStartSequenceTaskTutorialHelp_C.Start");
		
		UBP_PlayerLevelStartSequenceTaskTutorialHelp_C_Start_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskTutorialHelp.BP_PlayerLevelStartSequenceTaskTutorialHelp_C.CreateTutorialHelpDialog
	 * 		Flags  -> ()
	 */
	void UBP_PlayerLevelStartSequenceTaskTutorialHelp_C::CreateTutorialHelpDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskTutorialHelp.BP_PlayerLevelStartSequenceTaskTutorialHelp_C.CreateTutorialHelpDialog");
		
		UBP_PlayerLevelStartSequenceTaskTutorialHelp_C_CreateTutorialHelpDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskTutorialHelp.BP_PlayerLevelStartSequenceTaskTutorialHelp_C.OnClose_Event
	 * 		Flags  -> ()
	 */
	void UBP_PlayerLevelStartSequenceTaskTutorialHelp_C::OnClose_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskTutorialHelp.BP_PlayerLevelStartSequenceTaskTutorialHelp_C.OnClose_Event");
		
		UBP_PlayerLevelStartSequenceTaskTutorialHelp_C_OnClose_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskTutorialHelp.BP_PlayerLevelStartSequenceTaskTutorialHelp_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskTutorialHelp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskTutorialHelp_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskTutorialHelp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskTutorialHelp.BP_PlayerLevelStartSequenceTaskTutorialHelp_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskTutorialHelp");
		
		UBP_PlayerLevelStartSequenceTaskTutorialHelp_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskTutorialHelp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerLevelStartSequenceTaskTutorialHelp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerLevelStartSequenceTaskTutorialHelp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskTutorialHelp.BP_PlayerLevelStartSequenceTaskTutorialHelp_C");
		return ptr;
	}

}


