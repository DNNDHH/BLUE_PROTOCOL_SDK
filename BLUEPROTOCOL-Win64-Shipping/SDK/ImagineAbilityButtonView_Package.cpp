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
	 * 		Name   -> Function ImagineAbilityButtonView.ImagineAbilityButtonView_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineAbilityButtonView_C::SetData(const struct FOwnItemInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAbilityButtonView.ImagineAbilityButtonView_C.SetData");
		
		UImagineAbilityButtonView_C_SetData_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAbilityButtonView.ImagineAbilityButtonView_C.BndEvt__ImagineAbilityButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineAbilityButtonView_C::BndEvt__ImagineAbilityButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAbilityButtonView.ImagineAbilityButtonView_C.BndEvt__ImagineAbilityButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UImagineAbilityButtonView_C_BndEvt__ImagineAbilityButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAbilityButtonView.ImagineAbilityButtonView_C.ExecuteUbergraph_ImagineAbilityButtonView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineAbilityButtonView_C::ExecuteUbergraph_ImagineAbilityButtonView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAbilityButtonView.ImagineAbilityButtonView_C.ExecuteUbergraph_ImagineAbilityButtonView");
		
		UImagineAbilityButtonView_C_ExecuteUbergraph_ImagineAbilityButtonView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAbilityButtonView.ImagineAbilityButtonView_C.Reselect__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineAbilityButtonView_C::Reselect__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAbilityButtonView.ImagineAbilityButtonView_C.Reselect__DelegateSignature");
		
		UImagineAbilityButtonView_C_Reselect__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImagineAbilityButtonView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImagineAbilityButtonView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ImagineAbilityButtonView.ImagineAbilityButtonView_C");
		return ptr;
	}

}


