#pragma once

 

// Package: SliderInput

#include "Basic.hpp"

#include "SliderInput_classes.hpp"
#include "SliderInput_parameters.hpp"


namespace SDK
{

// Function SliderInput.SliderInput_C.SetRatio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USliderInput_C::SetRatio(float Ratio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SliderInput_C", "SetRatio");

	Params::SliderInput_C_SetRatio Parms{};

	Parms.Ratio = Ratio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SliderInput.SliderInput_C.SetValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USliderInput_C::SetValue(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SliderInput_C", "SetValue");

	Params::SliderInput_C_SetValue Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SliderInput.SliderInput_C.BndEvt__Slider_K2Node_ComponentBoundEvent_84_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Param_Value                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USliderInput_C::BndEvt__Slider_K2Node_ComponentBoundEvent_84_OnFloatValueChangedEvent__DelegateSignature(float Param_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SliderInput_C", "BndEvt__Slider_K2Node_ComponentBoundEvent_84_OnFloatValueChangedEvent__DelegateSignature");

	Params::SliderInput_C_BndEvt__Slider_K2Node_ComponentBoundEvent_84_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Param_Value = Param_Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SliderInput.SliderInput_C.BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void USliderInput_C::BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SliderInput_C", "BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SliderInput.SliderInput_C.ClipedNealy
// (BlueprintCallable, BlueprintEvent)

void USliderInput_C::ClipedNealy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SliderInput_C", "ClipedNealy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SliderInput.SliderInput_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_92_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USliderInput_C::BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_92_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SliderInput_C", "BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_92_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::SliderInput_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_92_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SliderInput.SliderInput_C.BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void USliderInput_C::BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SliderInput_C", "BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SliderInput.SliderInput_C.ExecuteUbergraph_SliderInput
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USliderInput_C::ExecuteUbergraph_SliderInput(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SliderInput_C", "ExecuteUbergraph_SliderInput");

	Params::SliderInput_C_ExecuteUbergraph_SliderInput Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SliderInput.SliderInput_C.OnChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Value                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USliderInput_C::OnChanged__DelegateSignature(int32 Param_Value, float Ratio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SliderInput_C", "OnChanged__DelegateSignature");

	Params::SliderInput_C_OnChanged__DelegateSignature Parms{};

	Parms.Param_Value = Param_Value;
	Parms.Ratio = Ratio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SliderInput.SliderInput_C.OnChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USliderInput_C::OnChange__DelegateSignature(int32 NewValue, float Ratio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SliderInput_C", "OnChange__DelegateSignature");

	Params::SliderInput_C_OnChange__DelegateSignature Parms{};

	Parms.NewValue = NewValue;
	Parms.Ratio = Ratio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SliderInput.SliderInput_C.IsEqualBefore
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Equal                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USliderInput_C::IsEqualBefore(bool* Equal) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SliderInput_C", "IsEqualBefore");

	Params::SliderInput_C_IsEqualBefore Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Equal != nullptr)
		*Equal = Parms.Equal;
}


// Function SliderInput.SliderInput_C.GetRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   Ratio                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USliderInput_C::GetRatio(float* Ratio) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SliderInput_C", "GetRatio");

	Params::SliderInput_C_GetRatio Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;
}


// Function SliderInput.SliderInput_C.GetValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   Param_Value                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USliderInput_C::GetValue(int32* Param_Value) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SliderInput_C", "GetValue");

	Params::SliderInput_C_GetValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Value != nullptr)
		*Param_Value = Parms.Param_Value;
}

}

