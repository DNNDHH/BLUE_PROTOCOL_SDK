#pragma once

 

// Package: CmnAlertIcon

#include "Basic.hpp"

#include "CmnAlertIcon_classes.hpp"
#include "CmnAlertIcon_parameters.hpp"


namespace SDK
{

// Function CmnAlertIcon.CmnAlertIcon_C.ExecuteUbergraph_CmnAlertIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnAlertIcon_C::ExecuteUbergraph_CmnAlertIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnAlertIcon_C", "ExecuteUbergraph_CmnAlertIcon");

	Params::CmnAlertIcon_C_ExecuteUbergraph_CmnAlertIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnAlertIcon.CmnAlertIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnAlertIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnAlertIcon_C", "PreConstruct");

	Params::CmnAlertIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnAlertIcon.CmnAlertIcon_C.ResetIconToDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UCmnAlertIcon_C::ResetIconToDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnAlertIcon_C", "ResetIconToDefault");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnAlertIcon.CmnAlertIcon_C.SetAlertType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsYellow                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnAlertIcon_C::SetAlertType(bool Param_IsYellow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnAlertIcon_C", "SetAlertType");

	Params::CmnAlertIcon_C_SetAlertType Parms{};

	Parms.Param_IsYellow = Param_IsYellow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnAlertIcon.CmnAlertIcon_C.SetAlertTypeYellow
// (Public, BlueprintCallable, BlueprintEvent)

void UCmnAlertIcon_C::SetAlertTypeYellow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnAlertIcon_C", "SetAlertTypeYellow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnAlertIcon.CmnAlertIcon_C.SetAlertTypeRed
// (Public, BlueprintCallable, BlueprintEvent)

void UCmnAlertIcon_C::SetAlertTypeRed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnAlertIcon_C", "SetAlertTypeRed");

	UObject::ProcessEvent(Func, nullptr);
}

}

