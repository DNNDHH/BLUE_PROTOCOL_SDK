#pragma once

 

// Package: CraftResultWeaponMulti

#include "Basic.hpp"

#include "CraftResultWeaponMulti_classes.hpp"
#include "CraftResultWeaponMulti_parameters.hpp"


namespace SDK
{

// Function CraftResultWeaponMulti.CraftResultWeaponMulti_C.ExecuteUbergraph_CraftResultWeaponMulti
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftResultWeaponMulti_C::ExecuteUbergraph_CraftResultWeaponMulti(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftResultWeaponMulti_C", "ExecuteUbergraph_CraftResultWeaponMulti");

	Params::CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftResultWeaponMulti.CraftResultWeaponMulti_C.Set Result
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftMasterData                 Recepi                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class FString>                   Uids                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   StorageNo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>                            Criticals                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCraftResultWeaponMulti_C::Set_Result(const struct FCraftMasterData& Recepi, const TArray<class FString>& Uids, int32 StorageNo, const TArray<bool>& Criticals)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftResultWeaponMulti_C", "Set Result");

	Params::CraftResultWeaponMulti_C_Set_Result Parms{};

	Parms.Recepi = std::move(Recepi);
	Parms.Uids = std::move(Uids);
	Parms.StorageNo = StorageNo;
	Parms.Criticals = std::move(Criticals);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftResultWeaponMulti.CraftResultWeaponMulti_C.UpdateCriticalCount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                            CriticalCount                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCraftResultWeaponMulti_C::UpdateCriticalCount(TArray<bool>& CriticalCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftResultWeaponMulti_C", "UpdateCriticalCount");

	Params::CraftResultWeaponMulti_C_UpdateCriticalCount Parms{};

	Parms.CriticalCount = std::move(CriticalCount);

	UObject::ProcessEvent(Func, &Parms);

	CriticalCount = std::move(Parms.CriticalCount);
}


// Function CraftResultWeaponMulti.CraftResultWeaponMulti_C.PlayAnimIn
// (Public, BlueprintCallable, BlueprintEvent)

void UCraftResultWeaponMulti_C::PlayAnimIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftResultWeaponMulti_C", "PlayAnimIn");

	UObject::ProcessEvent(Func, nullptr);
}

}

