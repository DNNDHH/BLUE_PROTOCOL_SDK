#pragma once

 

// Package: BP_KeyConfigFunctionLibrary

#include "Basic.hpp"

#include "BP_KeyConfigFunctionLibrary_classes.hpp"
#include "BP_KeyConfigFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function BP_KeyConfigFunctionLibrary.BP_KeyConfigFunctionLibrary_C.IsWarningKey
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             InKey                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// EConfig_KeyconfigItems                  KeyItemType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsWarning                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             WarningText                                            (Parm, OutParm)

void UBP_KeyConfigFunctionLibrary_C::IsWarningKey(const struct FKey& InKey, EConfig_KeyconfigItems KeyItemType, class UObject* __WorldContext, bool* bIsWarning, class FText* WarningText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_KeyConfigFunctionLibrary_C", "IsWarningKey");

	Params::BP_KeyConfigFunctionLibrary_C_IsWarningKey Parms{};

	Parms.InKey = std::move(InKey);
	Parms.KeyItemType = KeyItemType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsWarning != nullptr)
		*bIsWarning = Parms.bIsWarning;

	if (WarningText != nullptr)
		*WarningText = std::move(Parms.WarningText);
}

}

