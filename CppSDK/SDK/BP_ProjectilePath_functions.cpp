#pragma once

 

// Package: BP_ProjectilePath

#include "Basic.hpp"

#include "BP_ProjectilePath_classes.hpp"
#include "BP_ProjectilePath_parameters.hpp"


namespace SDK
{

// Function BP_ProjectilePath.BP_ProjectilePath_C.ExecuteUbergraph_BP_ProjectilePath
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectilePath_C::ExecuteUbergraph_BP_ProjectilePath(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectilePath_C", "ExecuteUbergraph_BP_ProjectilePath");

	Params::BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ProjectilePath.BP_ProjectilePath_C.InitBuildSplineMesh
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_ProjectilePath_C::InitBuildSplineMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectilePath_C", "InitBuildSplineMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ProjectilePath.BP_ProjectilePath_C.RecalcSplinePath
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_ProjectilePath_C::RecalcSplinePath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectilePath_C", "RecalcSplinePath");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ProjectilePath.BP_ProjectilePath_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectilePath_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectilePath_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

