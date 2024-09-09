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
	 * 		Name   -> Function ProbabilityDisplayButton.ProbabilityDisplayButton_C.SetBtnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProbabilityDisplayButton_C::SetBtnSelected(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplayButton.ProbabilityDisplayButton_C.SetBtnSelected");
		
		UProbabilityDisplayButton_C_SetBtnSelected_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplayButton.ProbabilityDisplayButton_C.Construct
	 * 		Flags  -> ()
	 */
	void UProbabilityDisplayButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplayButton.ProbabilityDisplayButton_C.Construct");
		
		UProbabilityDisplayButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplayButton.ProbabilityDisplayButton_C.BndEvt__ProbabilityDisplayButton_CmnBtn23_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UProbabilityDisplayButton_C::BndEvt__ProbabilityDisplayButton_CmnBtn23_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplayButton.ProbabilityDisplayButton_C.BndEvt__ProbabilityDisplayButton_CmnBtn23_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");
		
		UProbabilityDisplayButton_C_BndEvt__ProbabilityDisplayButton_CmnBtn23_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplayButton.ProbabilityDisplayButton_C.ExecuteUbergraph_ProbabilityDisplayButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplayButton_C::ExecuteUbergraph_ProbabilityDisplayButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplayButton.ProbabilityDisplayButton_C.ExecuteUbergraph_ProbabilityDisplayButton");
		
		UProbabilityDisplayButton_C_ExecuteUbergraph_ProbabilityDisplayButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplayButton.ProbabilityDisplayButton_C.OnClick__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UProbabilityDisplayButton_C::OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplayButton.ProbabilityDisplayButton_C.OnClick__DelegateSignature");
		
		UProbabilityDisplayButton_C_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProbabilityDisplayButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProbabilityDisplayButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProbabilityDisplayButton.ProbabilityDisplayButton_C");
		return ptr;
	}

}


