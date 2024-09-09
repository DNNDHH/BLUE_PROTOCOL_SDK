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
	 * 		Name   -> Function BP_PlayerInteractionComponent.BP_PlayerInteractionComponent_C.UpdateInteractionInfo
	 * 		Flags  -> ()
	 */
	void UBP_PlayerInteractionComponent_C::UpdateInteractionInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerInteractionComponent.BP_PlayerInteractionComponent_C.UpdateInteractionInfo");
		
		UBP_PlayerInteractionComponent_C_UpdateInteractionInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerInteractionComponent.BP_PlayerInteractionComponent_C.TutorialHelp
	 * 		Flags  -> ()
	 */
	void UBP_PlayerInteractionComponent_C::TutorialHelp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerInteractionComponent.BP_PlayerInteractionComponent_C.TutorialHelp");
		
		UBP_PlayerInteractionComponent_C_TutorialHelp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerInteractionComponent.BP_PlayerInteractionComponent_C.OnChangeInteractionUI
	 * 		Flags  -> ()
	 */
	void UBP_PlayerInteractionComponent_C::OnChangeInteractionUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerInteractionComponent.BP_PlayerInteractionComponent_C.OnChangeInteractionUI");
		
		UBP_PlayerInteractionComponent_C_OnChangeInteractionUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerInteractionComponent.BP_PlayerInteractionComponent_C.ExecuteUbergraph_BP_PlayerInteractionComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerInteractionComponent_C::ExecuteUbergraph_BP_PlayerInteractionComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerInteractionComponent.BP_PlayerInteractionComponent_C.ExecuteUbergraph_BP_PlayerInteractionComponent");
		
		UBP_PlayerInteractionComponent_C_ExecuteUbergraph_BP_PlayerInteractionComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerInteractionComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerInteractionComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerInteractionComponent.BP_PlayerInteractionComponent_C");
		return ptr;
	}

}


