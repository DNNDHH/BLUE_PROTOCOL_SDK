#pragma once

 

// Package: AITask_NpcWait

#include "Basic.hpp"

#include "AITask_NpcWait_classes.hpp"
#include "AITask_NpcWait_parameters.hpp"


namespace SDK
{

// Function AITask_NpcWait.AITask_NpcWait_C.ExecuteUbergraph_AITask_NpcWait
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAITask_NpcWait_C::ExecuteUbergraph_AITask_NpcWait(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AITask_NpcWait_C", "ExecuteUbergraph_AITask_NpcWait");

	Params::AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AITask_NpcWait.AITask_NpcWait_C.TaskStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class AAIController*                    Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAITask_NpcWait_C::TaskStart(class AAIController* Controller, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AITask_NpcWait_C", "TaskStart");

	Params::AITask_NpcWait_C_TaskStart Parms{};

	Parms.Controller = Controller;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AITask_NpcWait.AITask_NpcWait_C.RequestAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAITask_NpcWait_C::RequestAnimation(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AITask_NpcWait_C", "RequestAnimation");

	Params::AITask_NpcWait_C_RequestAnimation Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AITask_NpcWait.AITask_NpcWait_C.TaskFinish
// (Event, Public, BlueprintEvent)
// Parameters:
// class AAIController*                    Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInOwnerFinished                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAITask_NpcWait_C::TaskFinish(class AAIController* Controller, class APawn* ControlledPawn, bool bInOwnerFinished)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AITask_NpcWait_C", "TaskFinish");

	Params::AITask_NpcWait_C_TaskFinish Parms{};

	Parms.Controller = Controller;
	Parms.ControlledPawn = ControlledPawn;
	Parms.bInOwnerFinished = bInOwnerFinished;

	UObject::ProcessEvent(Func, &Parms);
}

}

