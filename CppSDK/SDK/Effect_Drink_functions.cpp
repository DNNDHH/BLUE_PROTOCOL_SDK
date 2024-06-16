#pragma once

 

// Package: Effect_Drink

#include "Basic.hpp"

#include "Effect_Drink_classes.hpp"
#include "Effect_Drink_parameters.hpp"


namespace SDK
{

// Function Effect_Drink.Effect_Drink_C.ExecuteUbergraph_Effect_Drink
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEffect_Drink_C::ExecuteUbergraph_Effect_Drink(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Drink_C", "ExecuteUbergraph_Effect_Drink");

	Params::Effect_Drink_C_ExecuteUbergraph_Effect_Drink Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Effect_Drink.Effect_Drink_C.NonAct iveData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEffect_Drink_C::NonAct_iveData(const class FString& InString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Drink_C", "NonAct iveData");

	Params::Effect_Drink_C_NonAct_iveData Parms{};

	Parms.InString = std::move(InString);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Effect_Drink.Effect_Drink_C.ActiveData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBLiquidMemoryEfficacyValueType        EffucaryValueType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEffect_Drink_C::ActiveData(const class FString& Param_Name, float Value, ESBLiquidMemoryEfficacyValueType EffucaryValueType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Drink_C", "ActiveData");

	Params::Effect_Drink_C_ActiveData Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.Value = Value;
	Parms.EffucaryValueType = EffucaryValueType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Effect_Drink.Effect_Drink_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEffect_Drink_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Drink_C", "PreConstruct");

	Params::Effect_Drink_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

