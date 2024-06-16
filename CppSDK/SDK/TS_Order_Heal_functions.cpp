#pragma once

 

// Package: TS_Order_Heal

#include "Basic.hpp"

#include "TS_Order_Heal_classes.hpp"
#include "TS_Order_Heal_parameters.hpp"


namespace SDK
{

// Function TS_Order_Heal.TS_Order_Heal_C.ExecuteUbergraph_TS_Order_Heal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTS_Order_Heal_C::ExecuteUbergraph_TS_Order_Heal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TS_Order_Heal_C", "ExecuteUbergraph_TS_Order_Heal");

	Params::TS_Order_Heal_C_ExecuteUbergraph_TS_Order_Heal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TS_Order_Heal.TS_Order_Heal_C.ReceivePrepareForPlanning
// (Event, Protected, BlueprintEvent)

void UTS_Order_Heal_C::ReceivePrepareForPlanning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TS_Order_Heal_C", "ReceivePrepareForPlanning");

	UObject::ProcessEvent(Func, nullptr);
}

}

