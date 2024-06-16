#pragma once

 

// Package: AutoPlay

#include "Basic.hpp"

#include "AutoPlay_classes.hpp"
#include "AutoPlay_parameters.hpp"


namespace SDK
{

// Function AutoPlay.AsyncActionRunAutoPlayTask.RunAutoPlayTask
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAutoPlayTask*                    Task                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncActionRunAutoPlayTask*      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncActionRunAutoPlayTask* UAsyncActionRunAutoPlayTask::RunAutoPlayTask(class UObject* WorldContextObject, class UAutoPlayTask* Task)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AsyncActionRunAutoPlayTask", "RunAutoPlayTask");

	Params::AsyncActionRunAutoPlayTask_RunAutoPlayTask Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Task = Task;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// DelegateFunction AutoPlay.AsyncActionRunAutoPlayTask.OnEnded__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// EAutoPlayTaskState                      State                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAsyncActionRunAutoPlayTask::OnEnded__DelegateSignature(EAutoPlayTaskState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AsyncActionRunAutoPlayTask", "OnEnded__DelegateSignature");

	Params::AsyncActionRunAutoPlayTask_OnEnded__DelegateSignature Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AutoPlay.AutoPlayService.GetOwnerTask
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAutoPlayTask*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAutoPlayTask* UAutoPlayService::GetOwnerTask() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlayService", "GetOwnerTask");

	Params::AutoPlayService_GetOwnerTask Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AutoPlay.AutoPlayAgent.AddSensor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UAutoPlaySensor>      SensorClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAutoPlaySensor*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAutoPlaySensor* UAutoPlayAgent::AddSensor(TSubclassOf<class UAutoPlaySensor> SensorClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlayAgent", "AddSensor");

	Params::AutoPlayAgent_AddSensor Parms{};

	Parms.SensorClass = SensorClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AutoPlay.AutoPlayAgent.FindMapByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UAutoPlayMap>         MapClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAutoPlayMap*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAutoPlayMap* UAutoPlayAgent::FindMapByClass(TSubclassOf<class UAutoPlayMap> MapClass) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlayAgent", "FindMapByClass");

	Params::AutoPlayAgent_FindMapByClass Parms{};

	Parms.MapClass = MapClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AutoPlay.AutoPlayAgent.FindSensorByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UAutoPlaySensor>      SensorClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAutoPlaySensor*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAutoPlaySensor* UAutoPlayAgent::FindSensorByClass(TSubclassOf<class UAutoPlaySensor> SensorClass) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlayAgent", "FindSensorByClass");

	Params::AutoPlayAgent_FindSensorByClass Parms{};

	Parms.SensorClass = SensorClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AutoPlay.AutoPlayAgent.GetInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAutoPlayInput*                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAutoPlayInput* UAutoPlayAgent::GetInput() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlayAgent", "GetInput");

	Params::AutoPlayAgent_GetInput Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AutoPlay.AutoPlayAgent.GetPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APawn* UAutoPlayAgent::GetPawn() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlayAgent", "GetPawn");

	Params::AutoPlayAgent_GetPawn Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AutoPlay.AutoPlayAgent.GetPlayerController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APlayerController* UAutoPlayAgent::GetPlayerController() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlayAgent", "GetPlayerController");

	Params::AutoPlayAgent_GetPlayerController Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AutoPlay.AutoPlayAgent.GetTaskSystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAutoPlayTaskSystem*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAutoPlayTaskSystem* UAutoPlayAgent::GetTaskSystem() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlayAgent", "GetTaskSystem");

	Params::AutoPlayAgent_GetTaskSystem Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AutoPlay.AutoPlayInput.InputKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                             Key                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Time                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutoPlayInput::InputKey(const struct FKey& Key, float Value, float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlayInput", "InputKey");

	Params::AutoPlayInput_InputKey Parms{};

	Parms.Key = std::move(Key);
	Parms.Value = Value;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AutoPlay.AutoPlaySubsystem.DisableAutoPlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*                PlayerController                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutoPlaySubsystem::DisableAutoPlay(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlaySubsystem", "DisableAutoPlay");

	Params::AutoPlaySubsystem_DisableAutoPlay Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AutoPlay.AutoPlaySubsystem.EnableAutoPlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*                PlayerController                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAutoPlayAgent*                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAutoPlayAgent* UAutoPlaySubsystem::EnableAutoPlay(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlaySubsystem", "EnableAutoPlay");

	Params::AutoPlaySubsystem_EnableAutoPlay Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AutoPlay.AutoPlaySubsystem.RecordMacro
// (Final, Exec, Native, Public)
// Parameters:
// class FString                           Param_Name                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutoPlaySubsystem::RecordMacro(const class FString& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlaySubsystem", "RecordMacro");

	Params::AutoPlaySubsystem_RecordMacro Parms{};

	Parms.Param_Name = std::move(Param_Name);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AutoPlay.AutoPlaySubsystem.RunMacro
// (Final, Exec, Native, Public)
// Parameters:
// class FString                           Param_Name                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutoPlaySubsystem::RunMacro(const class FString& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlaySubsystem", "RunMacro");

	Params::AutoPlaySubsystem_RunMacro Parms{};

	Parms.Param_Name = std::move(Param_Name);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AutoPlay.AutoPlaySubsystem.RunTask
// (Final, Exec, Native, Public)
// Parameters:
// class FName                             EventName                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutoPlaySubsystem::RunTask(const class FName EventName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlaySubsystem", "RunTask");

	Params::AutoPlaySubsystem_RunTask Parms{};

	Parms.EventName = EventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AutoPlay.AutoPlaySubsystem.StopMacro
// (Final, Exec, Native, Public)

void UAutoPlaySubsystem::StopMacro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlaySubsystem", "StopMacro");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function AutoPlay.AutoPlaySubsystem.GetAgent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*                PlayerController                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAutoPlayAgent*                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAutoPlayAgent* UAutoPlaySubsystem::GetAgent(const class APlayerController* PlayerController) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlaySubsystem", "GetAgent");

	Params::AutoPlaySubsystem_GetAgent Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AutoPlay.AutoPlayMacroSystem.GetValueAsFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAutoPlayEventArgs               Args                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                             Param_Name                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   OutValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAutoPlayMacroSystem::GetValueAsFloat(const struct FAutoPlayEventArgs& Args, class FName Param_Name, float* OutValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AutoPlayMacroSystem", "GetValueAsFloat");

	Params::AutoPlayMacroSystem_GetValueAsFloat Parms{};

	Parms.Args = std::move(Args);
	Parms.Param_Name = Param_Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;
}


// Function AutoPlay.AutoPlayMacroSystem.GetValueAsObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAutoPlayEventArgs               Args                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                             Param_Name                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          OutValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAutoPlayMacroSystem::GetValueAsObject(const struct FAutoPlayEventArgs& Args, class FName Param_Name, class UObject** OutValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AutoPlayMacroSystem", "GetValueAsObject");

	Params::AutoPlayMacroSystem_GetValueAsObject Parms{};

	Parms.Args = std::move(Args);
	Parms.Param_Name = Param_Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;
}


// Function AutoPlay.AutoPlayTask.CreateChildTask
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TSubclassOf<class UAutoPlayTask>        TaskClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAutoPlayTask*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAutoPlayTask* UAutoPlayTask::CreateChildTask(TSubclassOf<class UAutoPlayTask> TaskClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlayTask", "CreateChildTask");

	Params::AutoPlayTask_CreateChildTask Parms{};

	Parms.TaskClass = TaskClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AutoPlay.AutoPlayTask.NotifyResult
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                                    bSuccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutoPlayTask::NotifyResult(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlayTask", "NotifyResult");

	Params::AutoPlayTask_NotifyResult Parms{};

	Parms.bSuccess = bSuccess;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AutoPlay.AutoPlayTask.ReceiveInitByEvent
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             Event                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAutoPlayEventArgs               Args                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAutoPlayTask::ReceiveInitByEvent(class FName Event, const struct FAutoPlayEventArgs& Args)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlayTask", "ReceiveInitByEvent");

	Params::AutoPlayTask_ReceiveInitByEvent Parms{};

	Parms.Event = Event;
	Parms.Args = std::move(Args);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AutoPlay.AutoPlayTask.GetOwnerAgent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAutoPlayAgent*                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAutoPlayAgent* UAutoPlayTask::GetOwnerAgent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlayTask", "GetOwnerAgent");

	Params::AutoPlayTask_GetOwnerAgent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AutoPlay.AutoPlayTask_BlueprintBase.K2_NotifyResult
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// bool                                    bSuccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutoPlayTask_BlueprintBase::K2_NotifyResult(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlayTask_BlueprintBase", "K2_NotifyResult");

	Params::AutoPlayTask_BlueprintBase_K2_NotifyResult Parms{};

	Parms.bSuccess = bSuccess;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AutoPlay.AutoPlayTask_BlueprintBase.ReceiveStart
// (Event, Protected, BlueprintEvent)

void UAutoPlayTask_BlueprintBase::ReceiveStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlayTask_BlueprintBase", "ReceiveStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AutoPlay.AutoPlayTask_BlueprintBase.ReceiveStop
// (Event, Protected, BlueprintEvent)

void UAutoPlayTask_BlueprintBase::ReceiveStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlayTask_BlueprintBase", "ReceiveStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AutoPlay.AutoPlayTask_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutoPlayTask_BlueprintBase::ReceiveTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlayTask_BlueprintBase", "ReceiveTick");

	Params::AutoPlayTask_BlueprintBase_ReceiveTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AutoPlay.AutoPlayTaskSystem.CreateTask
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UAutoPlayTask>        TaskClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          TaskOwner                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAutoPlayTask*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAutoPlayTask* UAutoPlayTaskSystem::CreateTask(TSubclassOf<class UAutoPlayTask> TaskClass, class UObject* TaskOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoPlayTaskSystem", "CreateTask");

	Params::AutoPlayTaskSystem_CreateTask Parms{};

	Parms.TaskClass = TaskClass;
	Parms.TaskOwner = TaskOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

