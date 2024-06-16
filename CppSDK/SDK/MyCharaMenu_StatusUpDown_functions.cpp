#pragma once

 

// Package: MyCharaMenu_StatusUpDown

#include "Basic.hpp"

#include "MyCharaMenu_StatusUpDown_classes.hpp"
#include "MyCharaMenu_StatusUpDown_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_StatusUpDown.MyCharaMenu_StatusUpDown_C.ExecuteUbergraph_MyCharaMenu_StatusUpDown
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_StatusUpDown_C::ExecuteUbergraph_MyCharaMenu_StatusUpDown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_StatusUpDown_C", "ExecuteUbergraph_MyCharaMenu_StatusUpDown");

	Params::MyCharaMenu_StatusUpDown_C_ExecuteUbergraph_MyCharaMenu_StatusUpDown Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_StatusUpDown.MyCharaMenu_StatusUpDown_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_StatusUpDown_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_StatusUpDown_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_StatusUpDown.MyCharaMenu_StatusUpDown_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_StatusUpDown_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_StatusUpDown_C", "PreConstruct");

	Params::MyCharaMenu_StatusUpDown_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_StatusUpDown.MyCharaMenu_StatusUpDown_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_StatusUpDown_C::SetValue(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_StatusUpDown_C", "SetValue");

	Params::MyCharaMenu_StatusUpDown_C_SetValue Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_StatusUpDown.MyCharaMenu_StatusUpDown_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_StatusUpDown_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_StatusUpDown_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_StatusUpDown.MyCharaMenu_StatusUpDown_C.SetValueAsPercentage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_StatusUpDown_C::SetValueAsPercentage(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_StatusUpDown_C", "SetValueAsPercentage");

	Params::MyCharaMenu_StatusUpDown_C_SetValueAsPercentage Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_StatusUpDown.MyCharaMenu_StatusUpDown_C.SetValueBase
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsPercentage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_StatusUpDown_C::SetValueBase(float InValue, bool InIsPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_StatusUpDown_C", "SetValueBase");

	Params::MyCharaMenu_StatusUpDown_C_SetValueBase Parms{};

	Parms.InValue = InValue;
	Parms.InIsPercentage = InIsPercentage;

	UObject::ProcessEvent(Func, &Parms);
}

}

