#pragma once

 

// Package: KeyConfigNameFunction

#include "Basic.hpp"

#include "KeyConfigNameFunction_classes.hpp"
#include "KeyConfigNameFunction_parameters.hpp"


namespace SDK
{

// Function KeyConfigNameFunction.KeyConfigNameFunction_C.GetKeyNameAsOperationMode
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBKeyConfigKeyboardKey                 KeyBoard                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBKeyConfigGamepadKey                  Gamepad                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    UseSuffix                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UKeyConfigNameFunction_C::GetKeyNameAsOperationMode(ESBKeyConfigKeyboardKey KeyBoard, ESBKeyConfigGamepadKey Gamepad, bool UseSuffix, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KeyConfigNameFunction_C", "GetKeyNameAsOperationMode");

	Params::KeyConfigNameFunction_C_GetKeyNameAsOperationMode Parms{};

	Parms.KeyBoard = KeyBoard;
	Parms.Gamepad = Gamepad;
	Parms.UseSuffix = UseSuffix;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function KeyConfigNameFunction.KeyConfigNameFunction_C.GetKeyNameText_KB
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBKeyConfigKeyboardKey                 KeyType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           DisplayText                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UKeyConfigNameFunction_C::GetKeyNameText_KB(ESBKeyConfigKeyboardKey KeyType, class UObject* __WorldContext, class FString* DisplayText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KeyConfigNameFunction_C", "GetKeyNameText_KB");

	Params::KeyConfigNameFunction_C_GetKeyNameText_KB Parms{};

	Parms.KeyType = KeyType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (DisplayText != nullptr)
		*DisplayText = std::move(Parms.DisplayText);
}


// Function KeyConfigNameFunction.KeyConfigNameFunction_C.GetKeyNameText_Mouse
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBKeyConfigMouseKey                    KeyType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           DisplayText                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UKeyConfigNameFunction_C::GetKeyNameText_Mouse(ESBKeyConfigMouseKey KeyType, class UObject* __WorldContext, class FString* DisplayText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KeyConfigNameFunction_C", "GetKeyNameText_Mouse");

	Params::KeyConfigNameFunction_C_GetKeyNameText_Mouse Parms{};

	Parms.KeyType = KeyType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (DisplayText != nullptr)
		*DisplayText = std::move(Parms.DisplayText);
}


// Function KeyConfigNameFunction.KeyConfigNameFunction_C.GetKeyNameText_Pad
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBKeyConfigGamepadKey                  KeyType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           DisplayText                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UKeyConfigNameFunction_C::GetKeyNameText_Pad(ESBKeyConfigGamepadKey KeyType, class UObject* __WorldContext, class FString* DisplayText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KeyConfigNameFunction_C", "GetKeyNameText_Pad");

	Params::KeyConfigNameFunction_C_GetKeyNameText_Pad Parms{};

	Parms.KeyType = KeyType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (DisplayText != nullptr)
		*DisplayText = std::move(Parms.DisplayText);
}


// Function KeyConfigNameFunction.KeyConfigNameFunction_C.IsAssignedKeyType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfig                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// EConfig_KeyconfigItems                  ItemType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsAssign                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfigNameFunction_C::IsAssignedKeyType(const struct FSBPlayerClassKeyConfigData& KeyConfig, EConfig_KeyconfigItems ItemType, class UObject* __WorldContext, bool* IsAssign)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KeyConfigNameFunction_C", "IsAssignedKeyType");

	Params::KeyConfigNameFunction_C_IsAssignedKeyType Parms{};

	Parms.KeyConfig = std::move(KeyConfig);
	Parms.ItemType = ItemType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsAssign != nullptr)
		*IsAssign = Parms.IsAssign;
}


// Function KeyConfigNameFunction.KeyConfigNameFunction_C.IsUnassignableKeyboardKey
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EConfig_KeyconfigItems                  ConfigType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBKeyConfigKeyboardKey                 KeyboardKey                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsUnassighnableKey                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfigNameFunction_C::IsUnassignableKeyboardKey(EConfig_KeyconfigItems ConfigType, ESBKeyConfigKeyboardKey KeyboardKey, class UObject* __WorldContext, bool* IsUnassighnableKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KeyConfigNameFunction_C", "IsUnassignableKeyboardKey");

	Params::KeyConfigNameFunction_C_IsUnassignableKeyboardKey Parms{};

	Parms.ConfigType = ConfigType;
	Parms.KeyboardKey = KeyboardKey;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsUnassighnableKey != nullptr)
		*IsUnassighnableKey = Parms.IsUnassighnableKey;
}


// Function KeyConfigNameFunction.KeyConfigNameFunction_C.IsUnassignablePadKey
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EConfig_KeyconfigItems                  ConfigType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBKeyConfigGamepadKey                  PadKey                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsUnassighnableKey                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfigNameFunction_C::IsUnassignablePadKey(EConfig_KeyconfigItems ConfigType, ESBKeyConfigGamepadKey PadKey, class UObject* __WorldContext, bool* IsUnassighnableKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KeyConfigNameFunction_C", "IsUnassignablePadKey");

	Params::KeyConfigNameFunction_C_IsUnassignablePadKey Parms{};

	Parms.ConfigType = ConfigType;
	Parms.PadKey = PadKey;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsUnassighnableKey != nullptr)
		*IsUnassighnableKey = Parms.IsUnassighnableKey;
}


// Function KeyConfigNameFunction.KeyConfigNameFunction_C.IsUnassignableMouseKey
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EConfig_KeyconfigItems                  ConfigType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBKeyConfigMouseKey                    MouseKey                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsUnassighnableKey                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfigNameFunction_C::IsUnassignableMouseKey(EConfig_KeyconfigItems ConfigType, ESBKeyConfigMouseKey MouseKey, class UObject* __WorldContext, bool* IsUnassighnableKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KeyConfigNameFunction_C", "IsUnassignableMouseKey");

	Params::KeyConfigNameFunction_C_IsUnassignableMouseKey Parms{};

	Parms.ConfigType = ConfigType;
	Parms.MouseKey = MouseKey;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsUnassighnableKey != nullptr)
		*IsUnassighnableKey = Parms.IsUnassighnableKey;
}

}

