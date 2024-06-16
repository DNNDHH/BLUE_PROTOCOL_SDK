#pragma once

 

// Package: GenericStatusItemForBattleSet

#include "Basic.hpp"

#include "GenericStatusItemForBattleSet_classes.hpp"
#include "GenericStatusItemForBattleSet_parameters.hpp"


namespace SDK
{

// Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.ExecuteUbergraph_GenericStatusItemForBattleSet
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGenericStatusItemForBattleSet_C::ExecuteUbergraph_GenericStatusItemForBattleSet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericStatusItemForBattleSet_C", "ExecuteUbergraph_GenericStatusItemForBattleSet");

	Params::GenericStatusItemForBattleSet_C_ExecuteUbergraph_GenericStatusItemForBattleSet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGenericStatusItemForBattleSet_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericStatusItemForBattleSet_C", "PreConstruct");

	Params::GenericStatusItemForBattleSet_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.SetHeading
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InHeadingTextId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGenericStatusItemForBattleSet_C::SetHeading(int32 InHeadingTextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericStatusItemForBattleSet_C", "SetHeading");

	Params::GenericStatusItemForBattleSet_C_SetHeading Parms{};

	Parms.InHeadingTextId = InHeadingTextId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.SetValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGenericStatusItemForBattleSet_C::SetValue(int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericStatusItemForBattleSet_C", "SetValue");

	Params::GenericStatusItemForBattleSet_C_SetValue Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.SetValueText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGenericStatusItemForBattleSet_C::SetValueText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericStatusItemForBattleSet_C", "SetValueText");

	Params::GenericStatusItemForBattleSet_C_SetValueText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.SetPrevValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PrevValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGenericStatusItemForBattleSet_C::SetPrevValue(int32 PrevValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericStatusItemForBattleSet_C", "SetPrevValue");

	Params::GenericStatusItemForBattleSet_C_SetPrevValue Parms{};

	Parms.PrevValue = PrevValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

