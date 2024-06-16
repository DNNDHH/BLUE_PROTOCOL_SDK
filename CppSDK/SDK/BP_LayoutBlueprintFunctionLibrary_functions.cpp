#pragma once

 

// Package: BP_LayoutBlueprintFunctionLibrary

#include "Basic.hpp"

#include "BP_LayoutBlueprintFunctionLibrary_classes.hpp"
#include "BP_LayoutBlueprintFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function BP_LayoutBlueprintFunctionLibrary.BP_LayoutBlueprintFunctionLibrary_C.ApplyLayout
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LayoutBlueprintFunctionLibrary_C::ApplyLayout(const class FString& Key, class UUserWidget*& Widget, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_LayoutBlueprintFunctionLibrary_C", "ApplyLayout");

	Params::BP_LayoutBlueprintFunctionLibrary_C_ApplyLayout Parms{};

	Parms.Key = std::move(Key);
	Parms.Widget = Widget;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Widget = Parms.Widget;
}


// Function BP_LayoutBlueprintFunctionLibrary.BP_LayoutBlueprintFunctionLibrary_C.ApplyClassHUD
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LayoutBlueprintFunctionLibrary_C::ApplyClassHUD(class UUserWidget* Widget, const class FString& Param_Name, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_LayoutBlueprintFunctionLibrary_C", "ApplyClassHUD");

	Params::BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD Parms{};

	Parms.Widget = Widget;
	Parms.Param_Name = std::move(Param_Name);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_LayoutBlueprintFunctionLibrary.BP_LayoutBlueprintFunctionLibrary_C.RemoveLayoutFromHUD
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsRegisted                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LayoutBlueprintFunctionLibrary_C::RemoveLayoutFromHUD(const class FString& Param_Name, class UObject* __WorldContext, bool* IsRegisted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_LayoutBlueprintFunctionLibrary_C", "RemoveLayoutFromHUD");

	Params::BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsRegisted != nullptr)
		*IsRegisted = Parms.IsRegisted;
}

}

