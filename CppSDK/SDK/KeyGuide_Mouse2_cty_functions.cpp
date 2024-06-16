#pragma once

 

// Package: KeyGuide_Mouse2_cty

#include "Basic.hpp"

#include "KeyGuide_Mouse2_cty_classes.hpp"
#include "KeyGuide_Mouse2_cty_parameters.hpp"


namespace SDK
{

// Function KeyGuide_Mouse2_cty.KeyGuide_Mouse2_cty_C.ExecuteUbergraph_KeyGuide_Mouse2_cty
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuide_Mouse2_cty_C::ExecuteUbergraph_KeyGuide_Mouse2_cty(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Mouse2_cty_C", "ExecuteUbergraph_KeyGuide_Mouse2_cty");

	Params::KeyGuide_Mouse2_cty_C_ExecuteUbergraph_KeyGuide_Mouse2_cty Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide_Mouse2_cty.KeyGuide_Mouse2_cty_C.ApplyKeyConfigData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UKeyGuide_Mouse2_cty_C::ApplyKeyConfigData(const struct FSBPlayerClassKeyConfigData& KeyConfigData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Mouse2_cty_C", "ApplyKeyConfigData");

	Params::KeyGuide_Mouse2_cty_C_ApplyKeyConfigData Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide_Mouse2_cty.KeyGuide_Mouse2_cty_C.MakeMovesText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UKeyGuide_Mouse2_cty_C::MakeMovesText(struct FSBPlayerClassKeyConfigData& KeyConfigData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Mouse2_cty_C", "MakeMovesText");

	Params::KeyGuide_Mouse2_cty_C_MakeMovesText Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);

	UObject::ProcessEvent(Func, &Parms);

	KeyConfigData = std::move(Parms.KeyConfigData);

	return Parms.ReturnValue;
}


// Function KeyGuide_Mouse2_cty.KeyGuide_Mouse2_cty_C.MakePare
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USBRuntimeTextBlock*>      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<ESBKeyConfigAction>              Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>Return_Value                                           (Parm, OutParm, ContainsInstancedReference)

void UKeyGuide_Mouse2_cty_C::MakePare(TArray<class USBRuntimeTextBlock*>& Key, TArray<ESBKeyConfigAction>& Value, TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>* Return_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Mouse2_cty_C", "MakePare");

	Params::KeyGuide_Mouse2_cty_C_MakePare Parms{};

	Parms.Key = std::move(Key);
	Parms.Value = std::move(Value);

	UObject::ProcessEvent(Func, &Parms);

	Key = std::move(Parms.Key);
	Value = std::move(Parms.Value);

	if (Return_Value != nullptr)
		*Return_Value = std::move(Parms.Return_Value);
}


// Function KeyGuide_Mouse2_cty.KeyGuide_Mouse2_cty_C.GetKeyToTextString
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBKeyConfigAction                      KeyConfigAction                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDash                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsAutoRun                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UKeyGuide_Mouse2_cty_C::GetKeyToTextString(struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, bool IsDash, bool IsAutoRun) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Mouse2_cty_C", "GetKeyToTextString");

	Params::KeyGuide_Mouse2_cty_C_GetKeyToTextString Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);
	Parms.KeyConfigAction = KeyConfigAction;
	Parms.IsDash = IsDash;
	Parms.IsAutoRun = IsAutoRun;

	UObject::ProcessEvent(Func, &Parms);

	KeyConfigData = std::move(Parms.KeyConfigData);

	return Parms.ReturnValue;
}


// Function KeyGuide_Mouse2_cty.KeyGuide_Mouse2_cty_C.KeyConfigActionToKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBKeyConfigAction                      KeyConfigAction                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                             Key                                                    (Parm, OutParm, HasGetValueTypeHash)

void UKeyGuide_Mouse2_cty_C::KeyConfigActionToKey(struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, struct FKey* Key) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Mouse2_cty_C", "KeyConfigActionToKey");

	Params::KeyGuide_Mouse2_cty_C_KeyConfigActionToKey Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);
	Parms.KeyConfigAction = KeyConfigAction;

	UObject::ProcessEvent(Func, &Parms);

	KeyConfigData = std::move(Parms.KeyConfigData);

	if (Key != nullptr)
		*Key = std::move(Parms.Key);
}

}

