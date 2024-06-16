#pragma once

 

// Package: WeaponDescription

#include "Basic.hpp"

#include "WeaponDescription_classes.hpp"
#include "WeaponDescription_parameters.hpp"


namespace SDK
{

// Function WeaponDescription.WeaponDescription_C.ExecuteUbergraph_WeaponDescription
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDescription_C::ExecuteUbergraph_WeaponDescription(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDescription_C", "ExecuteUbergraph_WeaponDescription");

	Params::WeaponDescription_C_ExecuteUbergraph_WeaponDescription Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDescription.WeaponDescription_C.Set WeaponData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBWeaponMasterData              Param_WeaponMasterData                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   MinLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDescription_C::Set_WeaponData(const struct FSBWeaponMasterData& Param_WeaponMasterData, int32 MinLevel, int32 MaxLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDescription_C", "Set WeaponData");

	Params::WeaponDescription_C_Set_WeaponData Parms{};

	Parms.Param_WeaponMasterData = std::move(Param_WeaponMasterData);
	Parms.MinLevel = MinLevel;
	Parms.MaxLevel = MaxLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDescription.WeaponDescription_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponDescription_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDescription_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDescription.WeaponDescription_C.CollectWeaponParams
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponDescription_C::CollectWeaponParams()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDescription_C", "CollectWeaponParams");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDescription.WeaponDescription_C.UpdateWeaponParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDescription_C::UpdateWeaponParam(int32 NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDescription_C", "UpdateWeaponParam");

	Params::WeaponDescription_C_UpdateWeaponParam Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDescription.WeaponDescription_C.UpdateMaxParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDescription_C::UpdateMaxParam(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDescription_C", "UpdateMaxParam");

	Params::WeaponDescription_C_UpdateMaxParam Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}

}

