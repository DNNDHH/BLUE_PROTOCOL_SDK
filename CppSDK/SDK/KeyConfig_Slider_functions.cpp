#pragma once

 

// Package: KeyConfig_Slider

#include "Basic.hpp"

#include "KeyConfig_Slider_classes.hpp"
#include "KeyConfig_Slider_parameters.hpp"


namespace SDK
{

// Function KeyConfig_Slider.KeyConfig_Slider_C.SetChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bChanged                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_Slider_C::SetChanged(bool Param_bChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_Slider_C", "SetChanged");

	Params::KeyConfig_Slider_C_SetChanged Parms{};

	Parms.Param_bChanged = Param_bChanged;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_Slider.KeyConfig_Slider_C.GetRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Ratio                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_Slider_C::GetRatio(float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_Slider_C", "GetRatio");

	Params::KeyConfig_Slider_C_GetRatio Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;
}


// Function KeyConfig_Slider.KeyConfig_Slider_C.ApplyRatio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_Slider_C::ApplyRatio(float Ratio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_Slider_C", "ApplyRatio");

	Params::KeyConfig_Slider_C_ApplyRatio Parms{};

	Parms.Ratio = Ratio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_Slider.KeyConfig_Slider_C.GetValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_Slider_C::GetValue(int32* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_Slider_C", "GetValue");

	Params::KeyConfig_Slider_C_GetValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function KeyConfig_Slider.KeyConfig_Slider_C.ApplyValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_Slider_C::ApplyValue(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_Slider_C", "ApplyValue");

	Params::KeyConfig_Slider_C_ApplyValue Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_Slider.KeyConfig_Slider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_Slider_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_Slider_C", "PreConstruct");

	Params::KeyConfig_Slider_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_Slider.KeyConfig_Slider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UKeyConfig_Slider_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_Slider_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig_Slider.KeyConfig_Slider_C.CallOnChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_Slider_C::CallOnChange(int32 NewValue, float Ratio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_Slider_C", "CallOnChange");

	Params::KeyConfig_Slider_C_CallOnChange Parms{};

	Parms.NewValue = NewValue;
	Parms.Ratio = Ratio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_Slider.KeyConfig_Slider_C.ExecuteUbergraph_KeyConfig_Slider
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_Slider_C::ExecuteUbergraph_KeyConfig_Slider(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_Slider_C", "ExecuteUbergraph_KeyConfig_Slider");

	Params::KeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_Slider.KeyConfig_Slider_C.onChangeValue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EConfig_KeyconfigItems                  Param_Type                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyConfig_Slider_C*              Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_Slider_C::OnChangeValue__DelegateSignature(int32 NewValue, float Ratio, EConfig_KeyconfigItems Param_Type, class UKeyConfig_Slider_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_Slider_C", "onChangeValue__DelegateSignature");

	Params::KeyConfig_Slider_C_OnChangeValue__DelegateSignature Parms{};

	Parms.NewValue = NewValue;
	Parms.Ratio = Ratio;
	Parms.Param_Type = Param_Type;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_Slider.KeyConfig_Slider_C.IsChangeBefore
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ChangeBefore                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_Slider_C::IsChangeBefore(bool* ChangeBefore) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_Slider_C", "IsChangeBefore");

	Params::KeyConfig_Slider_C_IsChangeBefore Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ChangeBefore != nullptr)
		*ChangeBefore = Parms.ChangeBefore;
}

}

