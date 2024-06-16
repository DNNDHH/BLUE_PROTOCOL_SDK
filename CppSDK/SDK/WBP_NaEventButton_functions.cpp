#pragma once

 

// Package: WBP_NaEventButton

#include "Basic.hpp"

#include "WBP_NaEventButton_classes.hpp"
#include "WBP_NaEventButton_parameters.hpp"


namespace SDK
{

// Function WBP_NaEventButton.WBP_NaEventButton_C.ExecuteUbergraph_WBP_NaEventButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NaEventButton_C::ExecuteUbergraph_WBP_NaEventButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NaEventButton_C", "ExecuteUbergraph_WBP_NaEventButton");

	Params::WBP_NaEventButton_C_ExecuteUbergraph_WBP_NaEventButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NaEventButton.WBP_NaEventButton_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommandMenu_C*                   Owner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NaEventButton_C::Init(class UCommandMenu_C* Owner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NaEventButton_C", "Init");

	Params::WBP_NaEventButton_C_Init Parms{};

	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);
}

}

