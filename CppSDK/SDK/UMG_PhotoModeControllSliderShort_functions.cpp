#pragma once

 

// Package: UMG_PhotoModeControllSliderShort

#include "Basic.hpp"

#include "UMG_PhotoModeControllSliderShort_classes.hpp"
#include "UMG_PhotoModeControllSliderShort_parameters.hpp"


namespace SDK
{

// Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Value                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllSliderShort_C::OnValueChanged__DelegateSignature(float Param_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllSliderShort_C", "OnValueChanged__DelegateSignature");

	Params::UMG_PhotoModeControllSliderShort_C_OnValueChanged__DelegateSignature Parms{};

	Parms.Param_Value = Param_Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.ExecuteUbergraph_UMG_PhotoModeControllSliderShort
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllSliderShort_C::ExecuteUbergraph_UMG_PhotoModeControllSliderShort(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllSliderShort_C", "ExecuteUbergraph_UMG_PhotoModeControllSliderShort");

	Params::UMG_PhotoModeControllSliderShort_C_ExecuteUbergraph_UMG_PhotoModeControllSliderShort Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_PhotoModeControllSliderShort_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllSliderShort_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_ValueDefault                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_ValueMin                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_ValueMax                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_ValueStepSize                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllSliderShort_C::Initialize(float Param_ValueDefault, float Param_ValueMin, float Param_ValueMax, float Param_ValueStepSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllSliderShort_C", "Initialize");

	Params::UMG_PhotoModeControllSliderShort_C_Initialize Parms{};

	Parms.Param_ValueDefault = Param_ValueDefault;
	Parms.Param_ValueMin = Param_ValueMin;
	Parms.Param_ValueMax = Param_ValueMax;
	Parms.Param_ValueStepSize = Param_ValueStepSize;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UUMG_PhotoModeControllSliderShort_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllSliderShort_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.SetDefaultValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Value                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllSliderShort_C::SetDefaultValue(float Param_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllSliderShort_C", "SetDefaultValue");

	Params::UMG_PhotoModeControllSliderShort_C_SetDefaultValue Parms{};

	Parms.Param_Value = Param_Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.SetValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Value                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bOnlyDisplay                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeControllSliderShort_C::SetValue(float Param_Value, bool bOnlyDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllSliderShort_C", "SetValue");

	Params::UMG_PhotoModeControllSliderShort_C_SetValue Parms{};

	Parms.Param_Value = Param_Value;
	Parms.bOnlyDisplay = bOnlyDisplay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.BndEvt__Slider_Value_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Param_Value                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllSliderShort_C::BndEvt__Slider_Value_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Param_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllSliderShort_C", "BndEvt__Slider_Value_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");

	Params::UMG_PhotoModeControllSliderShort_C_BndEvt__Slider_Value_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Param_Value = Param_Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.BndEvt__Button_Plus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllSliderShort_C::BndEvt__Button_Plus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllSliderShort_C", "BndEvt__Button_Plus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.BndEvt__Button_Minus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllSliderShort_C::BndEvt__Button_Minus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllSliderShort_C", "BndEvt__Button_Minus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeControllSliderShort_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllSliderShort_C", "PreConstruct");

	Params::UMG_PhotoModeControllSliderShort_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.SetValue_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Value                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllSliderShort_C::SetValue_Internal(float Param_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllSliderShort_C", "SetValue_Internal");

	Params::UMG_PhotoModeControllSliderShort_C_SetValue_Internal Parms{};

	Parms.Param_Value = Param_Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.GetLoopValue
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Value                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Min                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUMG_PhotoModeControllSliderShort_C::GetLoopValue(float Param_Value, float Min, float Max)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllSliderShort_C", "GetLoopValue");

	Params::UMG_PhotoModeControllSliderShort_C_GetLoopValue Parms{};

	Parms.Param_Value = Param_Value;
	Parms.Min = Min;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.GetDisplayValue
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUMG_PhotoModeControllSliderShort_C::GetDisplayValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllSliderShort_C", "GetDisplayValue");

	Params::UMG_PhotoModeControllSliderShort_C_GetDisplayValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

