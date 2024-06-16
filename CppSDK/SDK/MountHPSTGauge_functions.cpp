#pragma once

 

// Package: MountHPSTGauge

#include "Basic.hpp"

#include "MountHPSTGauge_classes.hpp"
#include "MountHPSTGauge_parameters.hpp"


namespace SDK
{

// Function MountHPSTGauge.MountHPSTGauge_C.ExecuteUbergraph_MountHPSTGauge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMountHPSTGauge_C::ExecuteUbergraph_MountHPSTGauge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountHPSTGauge_C", "ExecuteUbergraph_MountHPSTGauge");

	Params::MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountHPSTGauge.MountHPSTGauge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMountHPSTGauge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountHPSTGauge_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountHPSTGauge.MountHPSTGauge_C.CustomPlayerEvent
// (BlueprintCallable, BlueprintEvent)

void UMountHPSTGauge_C::CustomPlayerEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountHPSTGauge_C", "CustomPlayerEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountHPSTGauge.MountHPSTGauge_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMountHPSTGauge_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountHPSTGauge_C", "Tick");

	Params::MountHPSTGauge_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountHPSTGauge.MountHPSTGauge_C.SetEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsEdit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMountHPSTGauge_C::SetEditMode(bool bIsEdit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountHPSTGauge_C", "SetEditMode");

	Params::MountHPSTGauge_C_SetEditMode Parms{};

	Parms.bIsEdit = bIsEdit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountHPSTGauge.MountHPSTGauge_C.�������_1
// (BlueprintCallable, BlueprintEvent)

void UMountHPSTGauge_C::_________1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountHPSTGauge_C", "�������_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountHPSTGauge.MountHPSTGauge_C.SetBgVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMountHPSTGauge_C::SetBgVisibility(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountHPSTGauge_C", "SetBgVisibility");

	Params::MountHPSTGauge_C_SetBgVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountHPSTGauge.MountHPSTGauge_C.AdjustENGGaugeSize
// (Public, BlueprintCallable, BlueprintEvent)

void UMountHPSTGauge_C::AdjustENGGaugeSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountHPSTGauge_C", "AdjustENGGaugeSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountHPSTGauge.MountHPSTGauge_C.AdjustPlayerHPGaugeSize
// (Public, BlueprintCallable, BlueprintEvent)

void UMountHPSTGauge_C::AdjustPlayerHPGaugeSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountHPSTGauge_C", "AdjustPlayerHPGaugeSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountHPSTGauge.MountHPSTGauge_C.UpdatePrevENG
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMountHPSTGauge_C::UpdatePrevENG(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountHPSTGauge_C", "UpdatePrevENG");

	Params::MountHPSTGauge_C_UpdatePrevENG Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountHPSTGauge.MountHPSTGauge_C.UpdatePrevPlayerHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMountHPSTGauge_C::UpdatePrevPlayerHP(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountHPSTGauge_C", "UpdatePrevPlayerHP");

	Params::MountHPSTGauge_C_UpdatePrevPlayerHP Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountHPSTGauge.MountHPSTGauge_C.UpdateHPLossGaunge
// (Public, BlueprintCallable, BlueprintEvent)

void UMountHPSTGauge_C::UpdateHPLossGaunge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountHPSTGauge_C", "UpdateHPLossGaunge");

	UObject::ProcessEvent(Func, nullptr);
}

}

