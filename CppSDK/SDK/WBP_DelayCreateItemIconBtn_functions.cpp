#pragma once

 

// Package: WBP_DelayCreateItemIconBtn

#include "Basic.hpp"

#include "WBP_DelayCreateItemIconBtn_classes.hpp"
#include "WBP_DelayCreateItemIconBtn_parameters.hpp"


namespace SDK
{

// Function WBP_DelayCreateItemIconBtn.WBP_DelayCreateItemIconBtn_C.ExecuteUbergraph_WBP_DelayCreateItemIconBtn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DelayCreateItemIconBtn_C::ExecuteUbergraph_WBP_DelayCreateItemIconBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DelayCreateItemIconBtn_C", "ExecuteUbergraph_WBP_DelayCreateItemIconBtn");

	Params::WBP_DelayCreateItemIconBtn_C_ExecuteUbergraph_WBP_DelayCreateItemIconBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DelayCreateItemIconBtn.WBP_DelayCreateItemIconBtn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_DelayCreateItemIconBtn_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DelayCreateItemIconBtn_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DelayCreateItemIconBtn.WBP_DelayCreateItemIconBtn_C.TryCreateWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemIconBtn_C*                   Param_Widget                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DelayCreateItemIconBtn_C::TryCreateWidget(class UItemIconBtn_C** Param_Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DelayCreateItemIconBtn_C", "TryCreateWidget");

	Params::WBP_DelayCreateItemIconBtn_C_TryCreateWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Widget != nullptr)
		*Param_Widget = Parms.Param_Widget;
}

}

