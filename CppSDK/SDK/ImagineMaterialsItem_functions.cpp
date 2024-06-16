#pragma once

 

// Package: ImagineMaterialsItem

#include "Basic.hpp"

#include "ImagineMaterialsItem_classes.hpp"
#include "ImagineMaterialsItem_parameters.hpp"


namespace SDK
{

// Function ImagineMaterialsItem.ImagineMaterialsItem_C.ExecuteUbergraph_ImagineMaterialsItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineMaterialsItem_C::ExecuteUbergraph_ImagineMaterialsItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineMaterialsItem_C", "ExecuteUbergraph_ImagineMaterialsItem");

	Params::ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineMaterialsItem.ImagineMaterialsItem_C.SetMaterialData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMasterImagineMaterial           Param_Material                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UImagineMaterialsItem_C::SetMaterialData(const struct FMasterImagineMaterial& Param_Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineMaterialsItem_C", "SetMaterialData");

	Params::ImagineMaterialsItem_C_SetMaterialData Parms{};

	Parms.Param_Material = std::move(Param_Material);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineMaterialsItem.ImagineMaterialsItem_C.ApplyMaterialData
// (BlueprintCallable, BlueprintEvent)

void UImagineMaterialsItem_C::ApplyMaterialData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineMaterialsItem_C", "ApplyMaterialData");

	UObject::ProcessEvent(Func, nullptr);
}

}

