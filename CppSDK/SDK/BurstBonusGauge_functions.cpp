#pragma once

 

// Package: BurstBonusGauge

#include "Basic.hpp"

#include "BurstBonusGauge_classes.hpp"
#include "BurstBonusGauge_parameters.hpp"


namespace SDK
{

// Function BurstBonusGauge.BurstBonusGauge_C.UpdateGaugeSwitcher
// (Public, BlueprintCallable, BlueprintEvent)

void UBurstBonusGauge_C::UpdateGaugeSwitcher()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BurstBonusGauge_C", "UpdateGaugeSwitcher");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BurstBonusGauge.BurstBonusGauge_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBurstBonusGauge_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BurstBonusGauge_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BurstBonusGauge.BurstBonusGauge_C.OnUpdateLV
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBurstBonusGauge_C::OnUpdateLV()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BurstBonusGauge_C", "OnUpdateLV");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BurstBonusGauge.BurstBonusGauge_C.OnUpdateTime
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBurstBonusGauge_C::OnUpdateTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BurstBonusGauge_C", "OnUpdateTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BurstBonusGauge.BurstBonusGauge_C.SetDefaultGaugeSize
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        InDefaultGaugeSize                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBurstBonusGauge_C::SetDefaultGaugeSize(const struct FVector2D& InDefaultGaugeSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BurstBonusGauge_C", "SetDefaultGaugeSize");

	Params::BurstBonusGauge_C_SetDefaultGaugeSize Parms{};

	Parms.InDefaultGaugeSize = std::move(InDefaultGaugeSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BurstBonusGauge.BurstBonusGauge_C.SetGaugeSize
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        InSize                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBurstBonusGauge_C::SetGaugeSize(const struct FVector2D& InSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BurstBonusGauge_C", "SetGaugeSize");

	Params::BurstBonusGauge_C_SetGaugeSize Parms{};

	Parms.InSize = std::move(InSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BurstBonusGauge.BurstBonusGauge_C.PlayAnimNormal
// (Private, BlueprintCallable, BlueprintEvent)

void UBurstBonusGauge_C::PlayAnimNormal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BurstBonusGauge_C", "PlayAnimNormal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BurstBonusGauge.BurstBonusGauge_C.PlayAnimBlink1
// (Private, BlueprintCallable, BlueprintEvent)

void UBurstBonusGauge_C::PlayAnimBlink1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BurstBonusGauge_C", "PlayAnimBlink1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BurstBonusGauge.BurstBonusGauge_C.PlayAnimBlink2
// (Private, BlueprintCallable, BlueprintEvent)

void UBurstBonusGauge_C::PlayAnimBlink2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BurstBonusGauge_C", "PlayAnimBlink2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BurstBonusGauge.BurstBonusGauge_C.StopAnim
// (Private, BlueprintCallable, BlueprintEvent)

void UBurstBonusGauge_C::StopAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BurstBonusGauge_C", "StopAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

