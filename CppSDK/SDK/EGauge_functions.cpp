#pragma once

 

// Package: EGauge

#include "Basic.hpp"

#include "EGauge_classes.hpp"
#include "EGauge_parameters.hpp"


namespace SDK
{

// Function EGauge.EGauge_C.OnPlayAnimNormal
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UEGauge_C::OnPlayAnimNormal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EGauge_C", "OnPlayAnimNormal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EGauge.EGauge_C.OnPlayAnimBlink
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UEGauge_C::OnPlayAnimBlink()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EGauge_C", "OnPlayAnimBlink");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EGauge.EGauge_C.DebugPrintTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEGauge_C::DebugPrintTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EGauge_C", "DebugPrintTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EGauge.EGauge_C.SetDefaultGaugeSize
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        InDefaultGaugeSize                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEGauge_C::SetDefaultGaugeSize(const struct FVector2D& InDefaultGaugeSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EGauge_C", "SetDefaultGaugeSize");

	Params::EGauge_C_SetDefaultGaugeSize Parms{};

	Parms.InDefaultGaugeSize = std::move(InDefaultGaugeSize);

	UObject::ProcessEvent(Func, &Parms);
}

}

