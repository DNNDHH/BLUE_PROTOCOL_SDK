#pragma once

 

// Package: Effect_OtherStock

#include "Basic.hpp"

#include "Effect_OtherStock_classes.hpp"
#include "Effect_OtherStock_parameters.hpp"


namespace SDK
{

// Function Effect_OtherStock.Effect_OtherStock_C.ExecuteUbergraph_Effect_OtherStock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEffect_OtherStock_C::ExecuteUbergraph_Effect_OtherStock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_OtherStock_C", "ExecuteUbergraph_Effect_OtherStock");

	Params::Effect_OtherStock_C_ExecuteUbergraph_Effect_OtherStock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Effect_OtherStock.Effect_OtherStock_C.NotActiveData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Buff                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UEffect_OtherStock_C::NotActiveData(const class FText& Buff, const class FText& Item, const class FText& Amount, const class FText& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_OtherStock_C", "NotActiveData");

	Params::Effect_OtherStock_C_NotActiveData Parms{};

	Parms.Buff = std::move(Buff);
	Parms.Item = std::move(Item);
	Parms.Amount = std::move(Amount);
	Parms.Value = std::move(Value);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Effect_OtherStock.Effect_OtherStock_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEffect_OtherStock_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_OtherStock_C", "PreConstruct");

	Params::Effect_OtherStock_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

