#pragma once

 

// Package: Effect_Other

#include "Basic.hpp"

#include "Effect_Other_classes.hpp"
#include "Effect_Other_parameters.hpp"


namespace SDK
{

// Function Effect_Other.Effect_Other_C.ExecuteUbergraph_Effect_Other
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEffect_Other_C::ExecuteUbergraph_Effect_Other(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Other_C", "ExecuteUbergraph_Effect_Other");

	Params::Effect_Other_C_ExecuteUbergraph_Effect_Other Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Effect_Other.Effect_Other_C.UpdateTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        LimitTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UEffect_Other_C::UpdateTime(const struct FDateTime& LimitTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Other_C", "UpdateTime");

	Params::Effect_Other_C_UpdateTime Parms{};

	Parms.LimitTime = std::move(LimitTime);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Effect_Other.Effect_Other_C.ActiveData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Category                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bValidTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                        LimitTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Permanent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEffect_Other_C::ActiveData(const class FText& Category, const class FText& Param_Name, const class FText& Value, bool bValidTime, const struct FDateTime& LimitTime, bool Permanent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Other_C", "ActiveData");

	Params::Effect_Other_C_ActiveData Parms{};

	Parms.Category = std::move(Category);
	Parms.Param_Name = std::move(Param_Name);
	Parms.Value = std::move(Value);
	Parms.bValidTime = bValidTime;
	Parms.LimitTime = std::move(LimitTime);
	Parms.Permanent = Permanent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Effect_Other.Effect_Other_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEffect_Other_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Other_C", "PreConstruct");

	Params::Effect_Other_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

