#pragma once

 

// Package: WBP_StatusAlimentNotifyWidgetOwner

#include "Basic.hpp"

#include "WBP_StatusAlimentNotifyWidgetOwner_classes.hpp"
#include "WBP_StatusAlimentNotifyWidgetOwner_parameters.hpp"


namespace SDK
{

// Function WBP_StatusAlimentNotifyWidgetOwner.WBP_StatusAlimentNotifyWidgetOwner_C.ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StatusAlimentNotifyWidgetOwner_C::ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StatusAlimentNotifyWidgetOwner_C", "ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner");

	Params::WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StatusAlimentNotifyWidgetOwner.WBP_StatusAlimentNotifyWidgetOwner_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_StatusAlimentNotifyWidgetOwner_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StatusAlimentNotifyWidgetOwner_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StatusAlimentNotifyWidgetOwner.WBP_StatusAlimentNotifyWidgetOwner_C.OnUIVisibleSettingChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StatusAlimentNotifyWidgetOwner_C::OnUIVisibleSettingChange(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StatusAlimentNotifyWidgetOwner_C", "OnUIVisibleSettingChange");

	Params::WBP_StatusAlimentNotifyWidgetOwner_C_OnUIVisibleSettingChange Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StatusAlimentNotifyWidgetOwner.WBP_StatusAlimentNotifyWidgetOwner_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_StatusAlimentNotifyWidgetOwner_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StatusAlimentNotifyWidgetOwner_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StatusAlimentNotifyWidgetOwner.WBP_StatusAlimentNotifyWidgetOwner_C.AddProcessing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBStatusAilmentIconConfig       InStatusAilmentIconType                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class AActor*                           InOwnerActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StatusAlimentNotifyWidgetOwner_C::AddProcessing(const struct FSBStatusAilmentIconConfig& InStatusAilmentIconType, class AActor* InOwnerActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StatusAlimentNotifyWidgetOwner_C", "AddProcessing");

	Params::WBP_StatusAlimentNotifyWidgetOwner_C_AddProcessing Parms{};

	Parms.InStatusAilmentIconType = std::move(InStatusAilmentIconType);
	Parms.InOwnerActor = InOwnerActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StatusAlimentNotifyWidgetOwner.WBP_StatusAlimentNotifyWidgetOwner_C.SetSystemVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisibility                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StatusAlimentNotifyWidgetOwner_C::SetSystemVisibility(bool bVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StatusAlimentNotifyWidgetOwner_C", "SetSystemVisibility");

	Params::WBP_StatusAlimentNotifyWidgetOwner_C_SetSystemVisibility Parms{};

	Parms.bVisibility = bVisibility;

	UObject::ProcessEvent(Func, &Parms);
}

}

