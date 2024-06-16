#pragma once

 

// Package: WeaponSynthePart_WindowAbilityChange

#include "Basic.hpp"

#include "WeaponSynthePart_WindowAbilityChange_classes.hpp"
#include "WeaponSynthePart_WindowAbilityChange_parameters.hpp"


namespace SDK
{

// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.ExecuteUbergraph_WeaponSynthePart_WindowAbilityChange
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_WindowAbilityChange_C::ExecuteUbergraph_WeaponSynthePart_WindowAbilityChange(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowAbilityChange_C", "ExecuteUbergraph_WeaponSynthePart_WindowAbilityChange");

	Params::WeaponSynthePart_WindowAbilityChange_C_ExecuteUbergraph_WeaponSynthePart_WindowAbilityChange Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponSynthePart_WindowAbilityChange_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowAbilityChange_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.Initialize
// (Private, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_WindowAbilityChange_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowAbilityChange_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAbilityEffectId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AbilityDBRowName1                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AbilityDBRowName2                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_WindowAbilityChange_C::Setup(int32 InAbilityEffectId, class FName AbilityDBRowName1, class FName AbilityDBRowName2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowAbilityChange_C", "Setup");

	Params::WeaponSynthePart_WindowAbilityChange_C_Setup Parms{};

	Parms.InAbilityEffectId = InAbilityEffectId;
	Parms.AbilityDBRowName1 = AbilityDBRowName1;
	Parms.AbilityDBRowName2 = AbilityDBRowName2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.SetupNone
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_WindowAbilityChange_C::SetupNone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowAbilityChange_C", "SetupNone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.SetupLock
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_WindowAbilityChange_C::SetupLock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowAbilityChange_C", "SetupLock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.SetupValue
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_WindowAbilityChange_C::SetupValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowAbilityChange_C", "SetupValue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.SetVisibleTitle
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_WindowAbilityChange_C::SetVisibleTitle(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowAbilityChange_C", "SetVisibleTitle");

	Params::WeaponSynthePart_WindowAbilityChange_C_SetVisibleTitle Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.SetVisibleValue
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_WindowAbilityChange_C::SetVisibleValue(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowAbilityChange_C", "SetVisibleValue");

	Params::WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.SetVisibleValue1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_WindowAbilityChange_C::SetVisibleValue1(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowAbilityChange_C", "SetVisibleValue1");

	Params::WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue1 Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.SetVisibleValue2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_WindowAbilityChange_C::SetVisibleValue2(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowAbilityChange_C", "SetVisibleValue2");

	Params::WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue2 Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.SetTitleText
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsProtect                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_WindowAbilityChange_C::SetTitleText(bool IsProtect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowAbilityChange_C", "SetTitleText");

	Params::WeaponSynthePart_WindowAbilityChange_C_SetTitleText Parms{};

	Parms.IsProtect = IsProtect;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.SetTitleRarity
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RarityMin                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RarityMax                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_WindowAbilityChange_C::SetTitleRarity(int32 RarityMin, int32 RarityMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowAbilityChange_C", "SetTitleRarity");

	Params::WeaponSynthePart_WindowAbilityChange_C_SetTitleRarity Parms{};

	Parms.RarityMin = RarityMin;
	Parms.RarityMax = RarityMax;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.SetValue1
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ValueMin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ValueMax                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_WindowAbilityChange_C::SetValue1(int32 ValueMin, int32 ValueMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowAbilityChange_C", "SetValue1");

	Params::WeaponSynthePart_WindowAbilityChange_C_SetValue1 Parms{};

	Parms.ValueMin = ValueMin;
	Parms.ValueMax = ValueMax;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.SetValue2
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ValueMin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ValueMax                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_WindowAbilityChange_C::SetValue2(int32 ValueMin, int32 ValueMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowAbilityChange_C", "SetValue2");

	Params::WeaponSynthePart_WindowAbilityChange_C_SetValue2 Parms{};

	Parms.ValueMin = ValueMin;
	Parms.ValueMax = ValueMax;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.PlayAnimArrow
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_WindowAbilityChange_C::PlayAnimArrow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowAbilityChange_C", "PlayAnimArrow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.StopAnimArrow
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_WindowAbilityChange_C::StopAnimArrow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowAbilityChange_C", "StopAnimArrow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.ConvertValueToString
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   UIAttribute                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutStr                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWeaponSynthePart_WindowAbilityChange_C::ConvertValueToString(int32 Value, int32 UIAttribute, class FString* OutStr) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowAbilityChange_C", "ConvertValueToString");

	Params::WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString Parms{};

	Parms.Value = Value;
	Parms.UIAttribute = UIAttribute;

	UObject::ProcessEvent(Func, &Parms);

	if (OutStr != nullptr)
		*OutStr = std::move(Parms.OutStr);
}

}

