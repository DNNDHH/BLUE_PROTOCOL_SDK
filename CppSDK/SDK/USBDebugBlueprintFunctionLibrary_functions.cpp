#pragma once

 

// Package: USBDebugBlueprintFunctionLibrary

#include "Basic.hpp"

#include "USBDebugBlueprintFunctionLibrary_classes.hpp"
#include "USBDebugBlueprintFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.ApplyDebugUIVisibilitySetting
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUSBDebugBlueprintFunctionLibrary_C::ApplyDebugUIVisibilitySetting(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("USBDebugBlueprintFunctionLibrary_C", "ApplyDebugUIVisibilitySetting");

	Params::USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.Debug_SetBattleHUDVisibility
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisibility                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUSBDebugBlueprintFunctionLibrary_C::Debug_SetBattleHUDVisibility(bool bVisibility, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("USBDebugBlueprintFunctionLibrary_C", "Debug_SetBattleHUDVisibility");

	Params::USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility Parms{};

	Parms.bVisibility = bVisibility;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.Debug_SetUIVisibility
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bVisibility                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUSBDebugBlueprintFunctionLibrary_C::Debug_SetUIVisibility(ESBUIType InUIType, bool bVisibility, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("USBDebugBlueprintFunctionLibrary_C", "Debug_SetUIVisibility");

	Params::USBDebugBlueprintFunctionLibrary_C_Debug_SetUIVisibility Parms{};

	Parms.InUIType = InUIType;
	Parms.bVisibility = bVisibility;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.OnChangedDebugValue
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBDebugMenuType                        MenuType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUSBDebugBlueprintFunctionLibrary_C::OnChangedDebugValue(ESBDebugMenuType MenuType, class FName RowName, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("USBDebugBlueprintFunctionLibrary_C", "OnChangedDebugValue");

	Params::USBDebugBlueprintFunctionLibrary_C_OnChangedDebugValue Parms{};

	Parms.MenuType = MenuType;
	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.OnChangedUIDebugValue
// (Static, Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBDebugMenuType                        MenuType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUSBDebugBlueprintFunctionLibrary_C::OnChangedUIDebugValue(ESBDebugMenuType MenuType, class FName RowName, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("USBDebugBlueprintFunctionLibrary_C", "OnChangedUIDebugValue");

	Params::USBDebugBlueprintFunctionLibrary_C_OnChangedUIDebugValue Parms{};

	Parms.MenuType = MenuType;
	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.OnChangedCameraDebugValue
// (Static, Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBDebugMenuType                        MenuType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUSBDebugBlueprintFunctionLibrary_C::OnChangedCameraDebugValue(ESBDebugMenuType MenuType, class FName RowName, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("USBDebugBlueprintFunctionLibrary_C", "OnChangedCameraDebugValue");

	Params::USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue Parms{};

	Parms.MenuType = MenuType;
	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.OnChangedEffectDebugValue
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBDebugMenuType                        MenuType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUSBDebugBlueprintFunctionLibrary_C::OnChangedEffectDebugValue(ESBDebugMenuType MenuType, class FName RowName, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("USBDebugBlueprintFunctionLibrary_C", "OnChangedEffectDebugValue");

	Params::USBDebugBlueprintFunctionLibrary_C_OnChangedEffectDebugValue Parms{};

	Parms.MenuType = MenuType;
	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

