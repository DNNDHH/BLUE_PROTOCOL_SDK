#pragma once

 

// Package: CmnGauge1

#include "Basic.hpp"

#include "CmnGauge1_classes.hpp"
#include "CmnGauge1_parameters.hpp"


namespace SDK
{

// Function CmnGauge1.CmnGauge1_C.ExecuteUbergraph_CmnGauge1
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnGauge1_C::ExecuteUbergraph_CmnGauge1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnGauge1_C", "ExecuteUbergraph_CmnGauge1");

	Params::CmnGauge1_C_ExecuteUbergraph_CmnGauge1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnGauge1.CmnGauge1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCmnGauge1_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnGauge1_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnGauge1.CmnGauge1_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnGauge1_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnGauge1_C", "PreConstruct");

	Params::CmnGauge1_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnGauge1.CmnGauge1_C.SetRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InRate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnGauge1_C::SetRate(float InRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnGauge1_C", "SetRate");

	Params::CmnGauge1_C_SetRate Parms{};

	Parms.InRate = InRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnGauge1.CmnGauge1_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Param_SetColor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnGauge1_C::SetColor(const struct FLinearColor& Param_SetColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnGauge1_C", "SetColor");

	Params::CmnGauge1_C_SetColor Parms{};

	Parms.Param_SetColor = std::move(Param_SetColor);

	UObject::ProcessEvent(Func, &Parms);
}

}

