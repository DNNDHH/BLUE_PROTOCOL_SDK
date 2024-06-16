#pragma once

 

// Package: CurrencyWidget

#include "Basic.hpp"

#include "CurrencyWidget_classes.hpp"
#include "CurrencyWidget_parameters.hpp"


namespace SDK
{

// Function CurrencyWidget.CurrencyWidget_C.ExecuteUbergraph_CurrencyWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCurrencyWidget_C::ExecuteUbergraph_CurrencyWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurrencyWidget_C", "ExecuteUbergraph_CurrencyWidget");

	Params::CurrencyWidget_C_ExecuteUbergraph_CurrencyWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CurrencyWidget.CurrencyWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCurrencyWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurrencyWidget_C", "Tick");

	Params::CurrencyWidget_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CurrencyWidget.CurrencyWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCurrencyWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurrencyWidget_C", "PreConstruct");

	Params::CurrencyWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CurrencyWidget.CurrencyWidget_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInActive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInForce                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCurrencyWidget_C::SetActive(bool bInActive, bool bInForce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurrencyWidget_C", "SetActive");

	Params::CurrencyWidget_C_SetActive Parms{};

	Parms.bInActive = bInActive;
	Parms.bInForce = bInForce;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CurrencyWidget.CurrencyWidget_C.UpdateAmount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCurrencyWidget_C::UpdateAmount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurrencyWidget_C", "UpdateAmount");

	UObject::ProcessEvent(Func, nullptr);
}

}

