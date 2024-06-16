#pragma once

 

// Package: GraphicsSlider

#include "Basic.hpp"

#include "GraphicsSlider_classes.hpp"
#include "GraphicsSlider_parameters.hpp"


namespace SDK
{

// Function GraphicsSlider.GraphicsSlider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGraphicsSlider_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GraphicsSlider_C", "PreConstruct");

	Params::GraphicsSlider_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GraphicsSlider.GraphicsSlider_C.OnChangeSignature
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGraphicsSlider_C::OnChangeSignature(int32 NewValue, float Ratio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GraphicsSlider_C", "OnChangeSignature");

	Params::GraphicsSlider_C_OnChangeSignature Parms{};

	Parms.NewValue = NewValue;
	Parms.Ratio = Ratio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GraphicsSlider.GraphicsSlider_C.ExecuteUbergraph_GraphicsSlider
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGraphicsSlider_C::ExecuteUbergraph_GraphicsSlider(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GraphicsSlider_C", "ExecuteUbergraph_GraphicsSlider");

	Params::GraphicsSlider_C_ExecuteUbergraph_GraphicsSlider Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GraphicsSlider.GraphicsSlider_C.OnGraphicsChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   New_Value                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGraphicsSlider_C::OnGraphicsChanged__DelegateSignature(int32 New_Value, float Ratio, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GraphicsSlider_C", "OnGraphicsChanged__DelegateSignature");

	Params::GraphicsSlider_C_OnGraphicsChanged__DelegateSignature Parms{};

	Parms.New_Value = New_Value;
	Parms.Ratio = Ratio;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}

}

