#pragma once

 

// Package: KeyGuide_Mouse

#include "Basic.hpp"

#include "KeyGuide_Mouse_classes.hpp"
#include "KeyGuide_Mouse_parameters.hpp"


namespace SDK
{

// Function KeyGuide_Mouse.KeyGuide_Mouse_C.ExecuteUbergraph_KeyGuide_Mouse
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuide_Mouse_C::ExecuteUbergraph_KeyGuide_Mouse(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Mouse_C", "ExecuteUbergraph_KeyGuide_Mouse");

	Params::KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide_Mouse.KeyGuide_Mouse_C.ApplyKeyConfigData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UKeyGuide_Mouse_C::ApplyKeyConfigData(const struct FSBPlayerClassKeyConfigData& KeyConfigData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Mouse_C", "ApplyKeyConfigData");

	Params::KeyGuide_Mouse_C_ApplyKeyConfigData Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide_Mouse.KeyGuide_Mouse_C.MakeMovesText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UKeyGuide_Mouse_C::MakeMovesText(struct FSBPlayerClassKeyConfigData& KeyConfigData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Mouse_C", "MakeMovesText");

	Params::KeyGuide_Mouse_C_MakeMovesText Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);

	UObject::ProcessEvent(Func, &Parms);

	KeyConfigData = std::move(Parms.KeyConfigData);

	return Parms.ReturnValue;
}


// Function KeyGuide_Mouse.KeyGuide_Mouse_C.MakeDodgeAttackText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UKeyGuide_Mouse_C::MakeDodgeAttackText(const struct FSBPlayerClassKeyConfigData& KeyConfigData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Mouse_C", "MakeDodgeAttackText");

	Params::KeyGuide_Mouse_C_MakeDodgeAttackText Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function KeyGuide_Mouse.KeyGuide_Mouse_C.MakeJumpAttackText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UKeyGuide_Mouse_C::MakeJumpAttackText(const struct FSBPlayerClassKeyConfigData& KeyConfigData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Mouse_C", "MakeJumpAttackText");

	Params::KeyGuide_Mouse_C_MakeJumpAttackText Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function KeyGuide_Mouse.KeyGuide_Mouse_C.MakePare
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USBRuntimeTextBlock*>      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<ESBKeyConfigAction>              Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>Return_Value                                           (Parm, OutParm, ContainsInstancedReference)

void UKeyGuide_Mouse_C::MakePare(TArray<class USBRuntimeTextBlock*>& Key, TArray<ESBKeyConfigAction>& Value, TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>* Return_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Mouse_C", "MakePare");

	Params::KeyGuide_Mouse_C_MakePare Parms{};

	Parms.Key = std::move(Key);
	Parms.Value = std::move(Value);

	UObject::ProcessEvent(Func, &Parms);

	Key = std::move(Parms.Key);
	Value = std::move(Parms.Value);

	if (Return_Value != nullptr)
		*Return_Value = std::move(Parms.Return_Value);
}


// Function KeyGuide_Mouse.KeyGuide_Mouse_C.SetTextVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    SkillActionPosition                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuide_Mouse_C::SetTextVisible(ESkillActionPosition SkillActionPosition, bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Mouse_C", "SetTextVisible");

	Params::KeyGuide_Mouse_C_SetTextVisible Parms{};

	Parms.SkillActionPosition = SkillActionPosition;
	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide_Mouse.KeyGuide_Mouse_C.InitializeVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UKeyGuide_Mouse_C::InitializeVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Mouse_C", "InitializeVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide_Mouse.KeyGuide_Mouse_C.GetKeyToTextString
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBKeyConfigAction                      KeyConfigAction                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDash                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UKeyGuide_Mouse_C::GetKeyToTextString(struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, bool IsDash) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Mouse_C", "GetKeyToTextString");

	Params::KeyGuide_Mouse_C_GetKeyToTextString Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);
	Parms.KeyConfigAction = KeyConfigAction;
	Parms.IsDash = IsDash;

	UObject::ProcessEvent(Func, &Parms);

	KeyConfigData = std::move(Parms.KeyConfigData);

	return Parms.ReturnValue;
}


// Function KeyGuide_Mouse.KeyGuide_Mouse_C.KeyConfigActionToKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBKeyConfigAction                      KeyConfigAction                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                             Key                                                    (Parm, OutParm, HasGetValueTypeHash)

void UKeyGuide_Mouse_C::KeyConfigActionToKey(struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, struct FKey* Key) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Mouse_C", "KeyConfigActionToKey");

	Params::KeyGuide_Mouse_C_KeyConfigActionToKey Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);
	Parms.KeyConfigAction = KeyConfigAction;

	UObject::ProcessEvent(Func, &Parms);

	KeyConfigData = std::move(Parms.KeyConfigData);

	if (Key != nullptr)
		*Key = std::move(Parms.Key);
}

}

