#pragma once

 

// Package: BP_UIMapBlueprintFunctionLibrary

#include "Basic.hpp"

#include "BP_UIMapBlueprintFunctionLibrary_classes.hpp"
#include "BP_UIMapBlueprintFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function BP_UIMapBlueprintFunctionLibrary.BP_UIMapBlueprintFunctionLibrary_C.IsEnableFieldStatus
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDataTableRowHandle              InFieldStatusDataTable                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnable                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UIMapBlueprintFunctionLibrary_C::IsEnableFieldStatus(const struct FDataTableRowHandle& InFieldStatusDataTable, class UObject* __WorldContext, bool* IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIMapBlueprintFunctionLibrary_C", "IsEnableFieldStatus");

	Params::BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus Parms{};

	Parms.InFieldStatusDataTable = std::move(InFieldStatusDataTable);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsEnable != nullptr)
		*IsEnable = Parms.IsEnable;
}


// Function BP_UIMapBlueprintFunctionLibrary.BP_UIMapBlueprintFunctionLibrary_C.IsViewHUDQuest
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UIMapBlueprintFunctionLibrary_C::IsViewHUDQuest(int32 QuestIndex, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIMapBlueprintFunctionLibrary_C", "IsViewHUDQuest");

	Params::BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest Parms{};

	Parms.QuestIndex = QuestIndex;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_UIMapBlueprintFunctionLibrary.BP_UIMapBlueprintFunctionLibrary_C.IsPublicDungeonDirectWarp
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBLocationInfoType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             LocationId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsOpen                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UIMapBlueprintFunctionLibrary_C::IsPublicDungeonDirectWarp(ESBLocationInfoType Type, class FName LocationId, class UObject* __WorldContext, bool* IsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIMapBlueprintFunctionLibrary_C", "IsPublicDungeonDirectWarp");

	Params::BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp Parms{};

	Parms.Type = Type;
	Parms.LocationId = LocationId;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOpen != nullptr)
		*IsOpen = Parms.IsOpen;
}

}

