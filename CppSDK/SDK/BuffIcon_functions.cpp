#pragma once

 

// Package: BuffIcon

#include "Basic.hpp"

#include "BuffIcon_classes.hpp"
#include "BuffIcon_parameters.hpp"


namespace SDK
{

// Function BuffIcon.BuffIcon_C.ExecuteUbergraph_BuffIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffIcon_C::ExecuteUbergraph_BuffIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffIcon_C", "ExecuteUbergraph_BuffIcon");

	Params::BuffIcon_C_ExecuteUbergraph_BuffIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BuffIcon.BuffIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffIcon_C", "PreConstruct");

	Params::BuffIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BuffIcon.BuffIcon_C.OnSetup
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBStatusAilmentIconType                InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBuffIcon_C::OnSetup(ESBStatusAilmentIconType InType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffIcon_C", "OnSetup");

	Params::BuffIcon_C_OnSetup Parms{};

	Parms.InType = InType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BuffIcon.BuffIcon_C.PlayAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBuffIcon_C::PlayAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffIcon_C", "PlayAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BuffIcon.BuffIcon_C.StopAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBuffIcon_C::StopAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffIcon_C", "StopAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

