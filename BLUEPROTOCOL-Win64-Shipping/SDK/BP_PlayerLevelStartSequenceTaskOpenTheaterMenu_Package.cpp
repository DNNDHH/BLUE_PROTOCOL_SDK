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
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskOpenTheaterMenu.BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C.CheckOpenedLoginBonusWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpened                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C::CheckOpenedLoginBonusWindow(bool* IsOpened)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskOpenTheaterMenu.BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C.CheckOpenedLoginBonusWindow");
		
		UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_CheckOpenedLoginBonusWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOpened != nullptr)
			*IsOpened = params.IsOpened;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskOpenTheaterMenu.BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerLevelStartSequenceComponent*        Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C::Start(class USBPlayerLevelStartSequenceComponent* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskOpenTheaterMenu.BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C.Start");
		
		UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_Start_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskOpenTheaterMenu.BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskOpenTheaterMenu.BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu");
		
		UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskOpenTheaterMenu.BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C");
		return ptr;
	}

}


