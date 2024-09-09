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
	 * 		Name   -> Function MapEditSlider.MapEditSlider_C.SliderValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditSlider_C::SliderValueChanged(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditSlider.MapEditSlider_C.SliderValueChanged");
		
		UMapEditSlider_C_SliderValueChanged_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditSlider.MapEditSlider_C.BtnClickedPlus
	 * 		Flags  -> ()
	 */
	void UMapEditSlider_C::BtnClickedPlus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditSlider.MapEditSlider_C.BtnClickedPlus");
		
		UMapEditSlider_C_BtnClickedPlus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditSlider.MapEditSlider_C.BtnClickedMinus
	 * 		Flags  -> ()
	 */
	void UMapEditSlider_C::BtnClickedMinus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditSlider.MapEditSlider_C.BtnClickedMinus");
		
		UMapEditSlider_C_BtnClickedMinus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditSlider.MapEditSlider_C.GetStepSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StepSize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditSlider_C::GetStepSize(float* StepSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditSlider.MapEditSlider_C.GetStepSize");
		
		UMapEditSlider_C_GetStepSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StepSize != nullptr)
			*StepSize = params.StepSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditSlider.MapEditSlider_C.SetStepSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditSlider_C::SetStepSize(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditSlider.MapEditSlider_C.SetStepSize");
		
		UMapEditSlider_C_SetStepSize_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditSlider.MapEditSlider_C.GetValueRange
	 * 		Flags  -> ()
	 */
	float UMapEditSlider_C::GetValueRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditSlider.MapEditSlider_C.GetValueRange");
		
		UMapEditSlider_C_GetValueRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditSlider.MapEditSlider_C.GetValueMax
	 * 		Flags  -> ()
	 */
	float UMapEditSlider_C::GetValueMax()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditSlider.MapEditSlider_C.GetValueMax");
		
		UMapEditSlider_C_GetValueMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditSlider.MapEditSlider_C.GetValueMin
	 * 		Flags  -> ()
	 */
	float UMapEditSlider_C::GetValueMin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditSlider.MapEditSlider_C.GetValueMin");
		
		UMapEditSlider_C_GetValueMin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditSlider.MapEditSlider_C.GetValueRate
	 * 		Flags  -> ()
	 */
	float UMapEditSlider_C::GetValueRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditSlider.MapEditSlider_C.GetValueRate");
		
		UMapEditSlider_C_GetValueRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditSlider.MapEditSlider_C.GetValue
	 * 		Flags  -> ()
	 */
	float UMapEditSlider_C::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditSlider.MapEditSlider_C.GetValue");
		
		UMapEditSlider_C_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditSlider.MapEditSlider_C.SetValueText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditSlider_C::SetValueText(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditSlider.MapEditSlider_C.SetValueText");
		
		UMapEditSlider_C_SetValueText_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditSlider.MapEditSlider_C.SetValueMax
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditSlider_C::SetValueMax(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditSlider.MapEditSlider_C.SetValueMax");
		
		UMapEditSlider_C_SetValueMax_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditSlider.MapEditSlider_C.SetValueMin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditSlider_C::SetValueMin(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditSlider.MapEditSlider_C.SetValueMin");
		
		UMapEditSlider_C_SetValueMin_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditSlider.MapEditSlider_C.SetValueRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InRate                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditSlider_C::SetValueRate(float InRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditSlider.MapEditSlider_C.SetValueRate");
		
		UMapEditSlider_C_SetValueRate_Params params {};
		params.InRate = InRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditSlider.MapEditSlider_C.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditSlider_C::SetValue(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditSlider.MapEditSlider_C.SetValue");
		
		UMapEditSlider_C_SetValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditSlider.MapEditSlider_C.SetTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTextId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditSlider_C::SetTitle(int32_t InTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditSlider.MapEditSlider_C.SetTitle");
		
		UMapEditSlider_C_SetTitle_Params params {};
		params.InTextId = InTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditSlider.MapEditSlider_C.BndEvt__MapEditSlider_MinusBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapEditSlider_C::BndEvt__MapEditSlider_MinusBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditSlider.MapEditSlider_C.BndEvt__MapEditSlider_MinusBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UMapEditSlider_C_BndEvt__MapEditSlider_MinusBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditSlider.MapEditSlider_C.BndEvt__MapEditSlider_PlusBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapEditSlider_C::BndEvt__MapEditSlider_PlusBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditSlider.MapEditSlider_C.BndEvt__MapEditSlider_PlusBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UMapEditSlider_C_BndEvt__MapEditSlider_PlusBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditSlider.MapEditSlider_C.BndEvt__MapEditSlider_Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditSlider_C::BndEvt__MapEditSlider_Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditSlider.MapEditSlider_C.BndEvt__MapEditSlider_Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");
		
		UMapEditSlider_C_BndEvt__MapEditSlider_Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditSlider.MapEditSlider_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapEditSlider_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditSlider.MapEditSlider_C.PreConstruct");
		
		UMapEditSlider_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditSlider.MapEditSlider_C.ExecuteUbergraph_MapEditSlider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditSlider_C::ExecuteUbergraph_MapEditSlider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditSlider.MapEditSlider_C.ExecuteUbergraph_MapEditSlider");
		
		UMapEditSlider_C_ExecuteUbergraph_MapEditSlider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditSlider.MapEditSlider_C.OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditSlider_C::OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditSlider.MapEditSlider_C.OnValueChanged__DelegateSignature");
		
		UMapEditSlider_C_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEditSlider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEditSlider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapEditSlider.MapEditSlider_C");
		return ptr;
	}

}


