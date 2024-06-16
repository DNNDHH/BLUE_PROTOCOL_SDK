#pragma once

 

// Package: BP_UIManager

#include "Basic.hpp"

#include "BP_UIManager_classes.hpp"
#include "BP_UIManager_parameters.hpp"


namespace SDK
{

// Function BP_UIManager.BP_UIManager_C.ExecuteUbergraph_BP_UIManager
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIManager_C::ExecuteUbergraph_BP_UIManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIManager_C", "ExecuteUbergraph_BP_UIManager");

	Params::BP_UIManager_C_ExecuteUbergraph_BP_UIManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

