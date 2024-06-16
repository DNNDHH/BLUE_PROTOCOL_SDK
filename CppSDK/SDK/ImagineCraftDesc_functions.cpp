#pragma once

 

// Package: ImagineCraftDesc

#include "Basic.hpp"

#include "ImagineCraftDesc_classes.hpp"
#include "ImagineCraftDesc_parameters.hpp"


namespace SDK
{

// Function ImagineCraftDesc.ImagineCraftDesc_C.ExecuteUbergraph_ImagineCraftDesc
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineCraftDesc_C::ExecuteUbergraph_ImagineCraftDesc(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftDesc_C", "ExecuteUbergraph_ImagineCraftDesc");

	Params::ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraftDesc.ImagineCraftDesc_C.SetRecepiData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMasterImagineRecepi             Param_RecepiData                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineCraftDesc_C::SetRecepiData(const struct FMasterImagineRecepi& Param_RecepiData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftDesc_C", "SetRecepiData");

	Params::ImagineCraftDesc_C_SetRecepiData Parms{};

	Parms.Param_RecepiData = std::move(Param_RecepiData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraftDesc.ImagineCraftDesc_C.GenerateMaterialData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UImagineCraftDesc_C::GenerateMaterialData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftDesc_C", "GenerateMaterialData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraftDesc.ImagineCraftDesc_C.CalclateMoney
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Money                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsLiquidMemomryActive                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsDiscount                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagineCraftDesc_C::CalclateMoney(int32* Money, bool* IsLiquidMemomryActive, bool* IsDiscount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftDesc_C", "CalclateMoney");

	Params::ImagineCraftDesc_C_CalclateMoney Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Money != nullptr)
		*Money = Parms.Money;

	if (IsLiquidMemomryActive != nullptr)
		*IsLiquidMemomryActive = Parms.IsLiquidMemomryActive;

	if (IsDiscount != nullptr)
		*IsDiscount = Parms.IsDiscount;
}


// Function ImagineCraftDesc.ImagineCraftDesc_C.PerkListGenerate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 InImagineMaster                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UImagineCraftDesc_C::PerkListGenerate(const struct FSBMasterImagine& InImagineMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftDesc_C", "PerkListGenerate");

	Params::ImagineCraftDesc_C_PerkListGenerate Parms{};

	Parms.InImagineMaster = std::move(InImagineMaster);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraftDesc.ImagineCraftDesc_C.GetStorage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   StorageNo                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineCraftDesc_C::GetStorage(int32* StorageNo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftDesc_C", "GetStorage");

	Params::ImagineCraftDesc_C_GetStorage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (StorageNo != nullptr)
		*StorageNo = Parms.StorageNo;
}


// Function ImagineCraftDesc.ImagineCraftDesc_C.IsStorage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    CurrentIsStorage                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagineCraftDesc_C::IsStorage(bool* CurrentIsStorage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftDesc_C", "IsStorage");

	Params::ImagineCraftDesc_C_IsStorage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentIsStorage != nullptr)
		*CurrentIsStorage = Parms.CurrentIsStorage;
}


// Function ImagineCraftDesc.ImagineCraftDesc_C.UpdateSkills
// (Public, BlueprintCallable, BlueprintEvent)

void UImagineCraftDesc_C::UpdateSkills()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftDesc_C", "UpdateSkills");

	UObject::ProcessEvent(Func, nullptr);
}

}

