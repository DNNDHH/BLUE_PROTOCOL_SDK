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
	 * 		Name   -> Function MultipleCraftWidget.MultipleCraftWidget_C.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SetValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SetedValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMultipleCraftWidget_C::SetValue(int32_t SetValue, int32_t* SetedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultipleCraftWidget.MultipleCraftWidget_C.SetValue");
		
		UMultipleCraftWidget_C_SetValue_Params params {};
		params.SetValue = SetValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SetedValue != nullptr)
			*SetedValue = params.SetedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultipleCraftWidget.MultipleCraftWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UMultipleCraftWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultipleCraftWidget.MultipleCraftWidget_C.Construct");
		
		UMultipleCraftWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultipleCraftWidget.MultipleCraftWidget_C.Reset
	 * 		Flags  -> ()
	 */
	void UMultipleCraftWidget_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultipleCraftWidget.MultipleCraftWidget_C.Reset");
		
		UMultipleCraftWidget_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultipleCraftWidget.MultipleCraftWidget_C.BndEvt__Btn_Minus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMultipleCraftWidget_C::BndEvt__Btn_Minus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultipleCraftWidget.MultipleCraftWidget_C.BndEvt__Btn_Minus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UMultipleCraftWidget_C_BndEvt__Btn_Minus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultipleCraftWidget.MultipleCraftWidget_C.BndEvt__Btn_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMultipleCraftWidget_C::BndEvt__Btn_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultipleCraftWidget.MultipleCraftWidget_C.BndEvt__Btn_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UMultipleCraftWidget_C_BndEvt__Btn_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultipleCraftWidget.MultipleCraftWidget_C.ExecuteUbergraph_MultipleCraftWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMultipleCraftWidget_C::ExecuteUbergraph_MultipleCraftWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultipleCraftWidget.MultipleCraftWidget_C.ExecuteUbergraph_MultipleCraftWidget");
		
		UMultipleCraftWidget_C_ExecuteUbergraph_MultipleCraftWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultipleCraftWidget.MultipleCraftWidget_C.OnCreateNumChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Now                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMultipleCraftWidget_C::OnCreateNumChanged__DelegateSignature(int32_t Now)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultipleCraftWidget.MultipleCraftWidget_C.OnCreateNumChanged__DelegateSignature");
		
		UMultipleCraftWidget_C_OnCreateNumChanged__DelegateSignature_Params params {};
		params.Now = Now;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultipleCraftWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultipleCraftWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MultipleCraftWidget.MultipleCraftWidget_C");
		return ptr;
	}

}


