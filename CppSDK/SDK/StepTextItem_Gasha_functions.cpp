#pragma once

 

// Package: StepTextItem_Gasha

#include "Basic.hpp"

#include "StepTextItem_Gasha_classes.hpp"
#include "StepTextItem_Gasha_parameters.hpp"


namespace SDK
{

// Function StepTextItem_Gasha.StepTextItem_Gasha_C.ExecuteUbergraph_StepTextItem_Gasha
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStepTextItem_Gasha_C::ExecuteUbergraph_StepTextItem_Gasha(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepTextItem_Gasha_C", "ExecuteUbergraph_StepTextItem_Gasha");

	Params::StepTextItem_Gasha_C_ExecuteUbergraph_StepTextItem_Gasha Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StepTextItem_Gasha.StepTextItem_Gasha_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStepTextItem_Gasha_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepTextItem_Gasha_C", "PreConstruct");

	Params::StepTextItem_Gasha_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StepTextItem_Gasha.StepTextItem_Gasha_C.SetStep
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Now                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStepTextItem_Gasha_C::SetStep(int32 Now, int32 Max)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepTextItem_Gasha_C", "SetStep");

	Params::StepTextItem_Gasha_C_SetStep Parms{};

	Parms.Now = Now;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);
}

}

