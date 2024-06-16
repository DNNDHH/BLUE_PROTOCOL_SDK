#pragma once

 

// Package: TS_Order_Buff

#include "Basic.hpp"

#include "TS_Order_Buff_classes.hpp"
#include "TS_Order_Buff_parameters.hpp"


namespace SDK
{

// Function TS_Order_Buff.TS_Order_Buff_C.ExecuteUbergraph_TS_Order_Buff
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTS_Order_Buff_C::ExecuteUbergraph_TS_Order_Buff(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TS_Order_Buff_C", "ExecuteUbergraph_TS_Order_Buff");

	Params::TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TS_Order_Buff.TS_Order_Buff_C.ReceivePrepareForPlanning
// (Event, Protected, BlueprintEvent)

void UTS_Order_Buff_C::ReceivePrepareForPlanning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TS_Order_Buff_C", "ReceivePrepareForPlanning");

	UObject::ProcessEvent(Func, nullptr);
}

}

