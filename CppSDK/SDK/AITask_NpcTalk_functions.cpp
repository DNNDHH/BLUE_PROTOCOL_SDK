#pragma once

 

// Package: AITask_NpcTalk

#include "Basic.hpp"

#include "AITask_NpcTalk_classes.hpp"
#include "AITask_NpcTalk_parameters.hpp"


namespace SDK
{

// Function AITask_NpcTalk.AITask_NpcTalk_C.ExecuteUbergraph_AITask_NpcTalk
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAITask_NpcTalk_C::ExecuteUbergraph_AITask_NpcTalk(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AITask_NpcTalk_C", "ExecuteUbergraph_AITask_NpcTalk");

	Params::AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AITask_NpcTalk.AITask_NpcTalk_C.TaskStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class AAIController*                    Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAITask_NpcTalk_C::TaskStart(class AAIController* Controller, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AITask_NpcTalk_C", "TaskStart");

	Params::AITask_NpcTalk_C_TaskStart Parms{};

	Parms.Controller = Controller;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AITask_NpcTalk.AITask_NpcTalk_C.TaskFinish
// (Event, Public, BlueprintEvent)
// Parameters:
// class AAIController*                    Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInOwnerFinished                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAITask_NpcTalk_C::TaskFinish(class AAIController* Controller, class APawn* ControlledPawn, bool bInOwnerFinished)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AITask_NpcTalk_C", "TaskFinish");

	Params::AITask_NpcTalk_C_TaskFinish Parms{};

	Parms.Controller = Controller;
	Parms.ControlledPawn = ControlledPawn;
	Parms.bInOwnerFinished = bInOwnerFinished;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AITask_NpcTalk.AITask_NpcTalk_C.OnEndScript
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBScriptActor*                   InScriptActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InScriptHandle                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAITask_NpcTalk_C::OnEndScript(class ASBScriptActor* InScriptActor, int32 InScriptHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AITask_NpcTalk_C", "OnEndScript");

	Params::AITask_NpcTalk_C_OnEndScript Parms{};

	Parms.InScriptActor = InScriptActor;
	Parms.InScriptHandle = InScriptHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AITask_NpcTalk.AITask_NpcTalk_C.SetNeedTurn
// (Public, BlueprintCallable, BlueprintEvent)

void UAITask_NpcTalk_C::SetNeedTurn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AITask_NpcTalk_C", "SetNeedTurn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AITask_NpcTalk.AITask_NpcTalk_C.CheckMobCharacterQuestPrecondition
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASBMobCharacter*                  InMobCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Flag                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAITask_NpcTalk_C::CheckMobCharacterQuestPrecondition(class ASBMobCharacter* InMobCharacter, bool* Flag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AITask_NpcTalk_C", "CheckMobCharacterQuestPrecondition");

	Params::AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition Parms{};

	Parms.InMobCharacter = InMobCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (Flag != nullptr)
		*Flag = Parms.Flag;
}


// Function AITask_NpcTalk.AITask_NpcTalk_C.IsNpcIsQuestReceptionist
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             InProfileDatId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Flag                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAITask_NpcTalk_C::IsNpcIsQuestReceptionist(class FName InProfileDatId, bool* Flag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AITask_NpcTalk_C", "IsNpcIsQuestReceptionist");

	Params::AITask_NpcTalk_C_IsNpcIsQuestReceptionist Parms{};

	Parms.InProfileDatId = InProfileDatId;

	UObject::ProcessEvent(Func, &Parms);

	if (Flag != nullptr)
		*Flag = Parms.Flag;
}


// Function AITask_NpcTalk.AITask_NpcTalk_C.ResetPlayerInteractionActionDeltaTime
// (Private, BlueprintCallable, BlueprintEvent)

void UAITask_NpcTalk_C::ResetPlayerInteractionActionDeltaTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AITask_NpcTalk_C", "ResetPlayerInteractionActionDeltaTime");

	UObject::ProcessEvent(Func, nullptr);
}

}

