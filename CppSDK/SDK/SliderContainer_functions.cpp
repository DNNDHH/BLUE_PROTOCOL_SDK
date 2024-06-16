#pragma once

 

// Package: SliderContainer

#include "Basic.hpp"

#include "SliderContainer_classes.hpp"
#include "SliderContainer_parameters.hpp"


namespace SDK
{

// Function SliderContainer.SliderContainer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USliderContainer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SliderContainer_C", "PreConstruct");

	Params::SliderContainer_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SliderContainer.SliderContainer_C.SetValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGraphicsSliderSetting                  Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USliderContainer_C::SetValue(EGraphicsSliderSetting Type, int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SliderContainer_C", "SetValue");

	Params::SliderContainer_C_SetValue Parms{};

	Parms.Type = Type;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SliderContainer.SliderContainer_C.OnChangeSlider_Deligate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   New_Value                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USliderContainer_C::OnChangeSlider_Deligate(int32 New_Value, float Ratio, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SliderContainer_C", "OnChangeSlider_Deligate");

	Params::SliderContainer_C_OnChangeSlider_Deligate Parms{};

	Parms.New_Value = New_Value;
	Parms.Ratio = Ratio;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SliderContainer.SliderContainer_C.ExecuteUbergraph_SliderContainer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USliderContainer_C::ExecuteUbergraph_SliderContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SliderContainer_C", "ExecuteUbergraph_SliderContainer");

	Params::SliderContainer_C_ExecuteUbergraph_SliderContainer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SliderContainer.SliderContainer_C.OnChangeSlider__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGraphicsSliderSetting                  Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USliderContainer_C::OnChangeSlider__DelegateSignature(int32 Value, float Ratio, EGraphicsSliderSetting Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SliderContainer_C", "OnChangeSlider__DelegateSignature");

	Params::SliderContainer_C_OnChangeSlider__DelegateSignature Parms{};

	Parms.Value = Value;
	Parms.Ratio = Ratio;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}

}

