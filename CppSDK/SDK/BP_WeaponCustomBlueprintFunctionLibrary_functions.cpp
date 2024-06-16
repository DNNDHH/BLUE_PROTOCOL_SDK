#pragma once

 

// Package: BP_WeaponCustomBlueprintFunctionLibrary

#include "Basic.hpp"

#include "BP_WeaponCustomBlueprintFunctionLibrary_classes.hpp"
#include "BP_WeaponCustomBlueprintFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function BP_WeaponCustomBlueprintFunctionLibrary.BP_WeaponCustomBlueprintFunctionLibrary_C.IsInvalidAbilityEffectValue
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_WeaponCustomBlueprintFunctionLibrary_C::IsInvalidAbilityEffectValue(int32 Value, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_WeaponCustomBlueprintFunctionLibrary_C", "IsInvalidAbilityEffectValue");

	Params::BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValue Parms{};

	Parms.Value = Value;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_WeaponCustomBlueprintFunctionLibrary.BP_WeaponCustomBlueprintFunctionLibrary_C.IsInvalidAbilityEffectValueMinMax
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   ValueMin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ValueMax                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_WeaponCustomBlueprintFunctionLibrary_C::IsInvalidAbilityEffectValueMinMax(int32 ValueMin, int32 ValueMax, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_WeaponCustomBlueprintFunctionLibrary_C", "IsInvalidAbilityEffectValueMinMax");

	Params::BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueMinMax Parms{};

	Parms.ValueMin = ValueMin;
	Parms.ValueMax = ValueMax;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_WeaponCustomBlueprintFunctionLibrary.BP_WeaponCustomBlueprintFunctionLibrary_C.IsInvalidAbilityEffectValueAbilityEffectID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   AbilityEffectId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_WeaponCustomBlueprintFunctionLibrary_C::IsInvalidAbilityEffectValueAbilityEffectID(int32 AbilityEffectId, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_WeaponCustomBlueprintFunctionLibrary_C", "IsInvalidAbilityEffectValueAbilityEffectID");

	Params::BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID Parms{};

	Parms.AbilityEffectId = AbilityEffectId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_WeaponCustomBlueprintFunctionLibrary.BP_WeaponCustomBlueprintFunctionLibrary_C.IsSameAbilityEffectValueMinMax
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   ValueMin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ValueMax                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_WeaponCustomBlueprintFunctionLibrary_C::IsSameAbilityEffectValueMinMax(int32 ValueMin, int32 ValueMax, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_WeaponCustomBlueprintFunctionLibrary_C", "IsSameAbilityEffectValueMinMax");

	Params::BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueMinMax Parms{};

	Parms.ValueMin = ValueMin;
	Parms.ValueMax = ValueMax;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_WeaponCustomBlueprintFunctionLibrary.BP_WeaponCustomBlueprintFunctionLibrary_C.IsSameAbilityEffectValueAbilityEffectID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   AbilityEffectId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_WeaponCustomBlueprintFunctionLibrary_C::IsSameAbilityEffectValueAbilityEffectID(int32 AbilityEffectId, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_WeaponCustomBlueprintFunctionLibrary_C", "IsSameAbilityEffectValueAbilityEffectID");

	Params::BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID Parms{};

	Parms.AbilityEffectId = AbilityEffectId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_WeaponCustomBlueprintFunctionLibrary.BP_WeaponCustomBlueprintFunctionLibrary_C.GetAbilityEffectValue
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   AbilityEffectId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Perk1ValueMin                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Perk1ValueMax                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Perk2ValueMin                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Perk2ValueMax                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RarityMin                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RarityMax                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeaponCustomBlueprintFunctionLibrary_C::GetAbilityEffectValue(int32 AbilityEffectId, class UObject* __WorldContext, int32* Perk1ValueMin, int32* Perk1ValueMax, int32* Perk2ValueMin, int32* Perk2ValueMax, int32* RarityMin, int32* RarityMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_WeaponCustomBlueprintFunctionLibrary_C", "GetAbilityEffectValue");

	Params::BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue Parms{};

	Parms.AbilityEffectId = AbilityEffectId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Perk1ValueMin != nullptr)
		*Perk1ValueMin = Parms.Perk1ValueMin;

	if (Perk1ValueMax != nullptr)
		*Perk1ValueMax = Parms.Perk1ValueMax;

	if (Perk2ValueMin != nullptr)
		*Perk2ValueMin = Parms.Perk2ValueMin;

	if (Perk2ValueMax != nullptr)
		*Perk2ValueMax = Parms.Perk2ValueMax;

	if (RarityMin != nullptr)
		*RarityMin = Parms.RarityMin;

	if (RarityMax != nullptr)
		*RarityMax = Parms.RarityMax;
}


// Function BP_WeaponCustomBlueprintFunctionLibrary.BP_WeaponCustomBlueprintFunctionLibrary_C.GetAbilityEffectID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   ItemId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AbilityEffectId                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeaponCustomBlueprintFunctionLibrary_C::GetAbilityEffectID(const int32 ItemId, class UObject* __WorldContext, int32* AbilityEffectId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_WeaponCustomBlueprintFunctionLibrary_C", "GetAbilityEffectID");

	Params::BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID Parms{};

	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (AbilityEffectId != nullptr)
		*AbilityEffectId = Parms.AbilityEffectId;
}

}

