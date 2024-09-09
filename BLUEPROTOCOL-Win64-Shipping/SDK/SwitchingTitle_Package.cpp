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
	 * 		Name   -> Function SwitchingTitle.SwitchingTitle_C.OnPlaySE
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USwitchingTitle_C::OnPlaySE(bool IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchingTitle.SwitchingTitle_C.OnPlaySE");
		
		USwitchingTitle_C_OnPlaySE_Params params {};
		params.IsOpen = IsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SwitchingTitle.SwitchingTitle_C.BndEvt__Effect_ContainerTab_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USwitchingTitle_C::BndEvt__Effect_ContainerTab_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchingTitle.SwitchingTitle_C.BndEvt__Effect_ContainerTab_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		USwitchingTitle_C_BndEvt__Effect_ContainerTab_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SwitchingTitle.SwitchingTitle_C.ExecuteUbergraph_SwitchingTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USwitchingTitle_C::ExecuteUbergraph_SwitchingTitle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchingTitle.SwitchingTitle_C.ExecuteUbergraph_SwitchingTitle");
		
		USwitchingTitle_C_ExecuteUbergraph_SwitchingTitle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USwitchingTitle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USwitchingTitle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SwitchingTitle.SwitchingTitle_C");
		return ptr;
	}

}


