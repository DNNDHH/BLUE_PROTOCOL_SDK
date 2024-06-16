#pragma once

 

// Package: AutoPlay

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "AutoPlay_structs.hpp"


namespace SDK::Params
{

// Function AutoPlay.AsyncActionRunAutoPlayTask.RunAutoPlayTask
// 0x0018 (0x0018 - 0x0000)
struct AsyncActionRunAutoPlayTask_RunAutoPlayTask final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAutoPlayTask*                          Task;                                              // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAsyncActionRunAutoPlayTask*            ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AsyncActionRunAutoPlayTask_RunAutoPlayTask) == 0x000008, "Wrong alignment on AsyncActionRunAutoPlayTask_RunAutoPlayTask");
static_assert(sizeof(AsyncActionRunAutoPlayTask_RunAutoPlayTask) == 0x000018, "Wrong size on AsyncActionRunAutoPlayTask_RunAutoPlayTask");
static_assert(offsetof(AsyncActionRunAutoPlayTask_RunAutoPlayTask, WorldContextObject) == 0x000000, "Member 'AsyncActionRunAutoPlayTask_RunAutoPlayTask::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AsyncActionRunAutoPlayTask_RunAutoPlayTask, Task) == 0x000008, "Member 'AsyncActionRunAutoPlayTask_RunAutoPlayTask::Task' has a wrong offset!");
static_assert(offsetof(AsyncActionRunAutoPlayTask_RunAutoPlayTask, ReturnValue) == 0x000010, "Member 'AsyncActionRunAutoPlayTask_RunAutoPlayTask::ReturnValue' has a wrong offset!");

// DelegateFunction AutoPlay.AsyncActionRunAutoPlayTask.OnEnded__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct AsyncActionRunAutoPlayTask_OnEnded__DelegateSignature final
{
public:
	EAutoPlayTaskState                            State;                                             // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AsyncActionRunAutoPlayTask_OnEnded__DelegateSignature) == 0x000001, "Wrong alignment on AsyncActionRunAutoPlayTask_OnEnded__DelegateSignature");
static_assert(sizeof(AsyncActionRunAutoPlayTask_OnEnded__DelegateSignature) == 0x000001, "Wrong size on AsyncActionRunAutoPlayTask_OnEnded__DelegateSignature");
static_assert(offsetof(AsyncActionRunAutoPlayTask_OnEnded__DelegateSignature, State) == 0x000000, "Member 'AsyncActionRunAutoPlayTask_OnEnded__DelegateSignature::State' has a wrong offset!");

// Function AutoPlay.AutoPlayService.GetOwnerTask
// 0x0008 (0x0008 - 0x0000)
struct AutoPlayService_GetOwnerTask final
{
public:
	class UAutoPlayTask*                          ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlayService_GetOwnerTask) == 0x000008, "Wrong alignment on AutoPlayService_GetOwnerTask");
static_assert(sizeof(AutoPlayService_GetOwnerTask) == 0x000008, "Wrong size on AutoPlayService_GetOwnerTask");
static_assert(offsetof(AutoPlayService_GetOwnerTask, ReturnValue) == 0x000000, "Member 'AutoPlayService_GetOwnerTask::ReturnValue' has a wrong offset!");

// Function AutoPlay.AutoPlayAgent.AddSensor
// 0x0010 (0x0010 - 0x0000)
struct AutoPlayAgent_AddSensor final
{
public:
	TSubclassOf<class UAutoPlaySensor>            SensorClass;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAutoPlaySensor*                        ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlayAgent_AddSensor) == 0x000008, "Wrong alignment on AutoPlayAgent_AddSensor");
static_assert(sizeof(AutoPlayAgent_AddSensor) == 0x000010, "Wrong size on AutoPlayAgent_AddSensor");
static_assert(offsetof(AutoPlayAgent_AddSensor, SensorClass) == 0x000000, "Member 'AutoPlayAgent_AddSensor::SensorClass' has a wrong offset!");
static_assert(offsetof(AutoPlayAgent_AddSensor, ReturnValue) == 0x000008, "Member 'AutoPlayAgent_AddSensor::ReturnValue' has a wrong offset!");

// Function AutoPlay.AutoPlayAgent.FindMapByClass
// 0x0010 (0x0010 - 0x0000)
struct AutoPlayAgent_FindMapByClass final
{
public:
	TSubclassOf<class UAutoPlayMap>               MapClass;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAutoPlayMap*                           ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlayAgent_FindMapByClass) == 0x000008, "Wrong alignment on AutoPlayAgent_FindMapByClass");
static_assert(sizeof(AutoPlayAgent_FindMapByClass) == 0x000010, "Wrong size on AutoPlayAgent_FindMapByClass");
static_assert(offsetof(AutoPlayAgent_FindMapByClass, MapClass) == 0x000000, "Member 'AutoPlayAgent_FindMapByClass::MapClass' has a wrong offset!");
static_assert(offsetof(AutoPlayAgent_FindMapByClass, ReturnValue) == 0x000008, "Member 'AutoPlayAgent_FindMapByClass::ReturnValue' has a wrong offset!");

// Function AutoPlay.AutoPlayAgent.FindSensorByClass
// 0x0010 (0x0010 - 0x0000)
struct AutoPlayAgent_FindSensorByClass final
{
public:
	TSubclassOf<class UAutoPlaySensor>            SensorClass;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAutoPlaySensor*                        ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlayAgent_FindSensorByClass) == 0x000008, "Wrong alignment on AutoPlayAgent_FindSensorByClass");
static_assert(sizeof(AutoPlayAgent_FindSensorByClass) == 0x000010, "Wrong size on AutoPlayAgent_FindSensorByClass");
static_assert(offsetof(AutoPlayAgent_FindSensorByClass, SensorClass) == 0x000000, "Member 'AutoPlayAgent_FindSensorByClass::SensorClass' has a wrong offset!");
static_assert(offsetof(AutoPlayAgent_FindSensorByClass, ReturnValue) == 0x000008, "Member 'AutoPlayAgent_FindSensorByClass::ReturnValue' has a wrong offset!");

// Function AutoPlay.AutoPlayAgent.GetInput
// 0x0008 (0x0008 - 0x0000)
struct AutoPlayAgent_GetInput final
{
public:
	class UAutoPlayInput*                         ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlayAgent_GetInput) == 0x000008, "Wrong alignment on AutoPlayAgent_GetInput");
static_assert(sizeof(AutoPlayAgent_GetInput) == 0x000008, "Wrong size on AutoPlayAgent_GetInput");
static_assert(offsetof(AutoPlayAgent_GetInput, ReturnValue) == 0x000000, "Member 'AutoPlayAgent_GetInput::ReturnValue' has a wrong offset!");

// Function AutoPlay.AutoPlayAgent.GetPawn
// 0x0008 (0x0008 - 0x0000)
struct AutoPlayAgent_GetPawn final
{
public:
	class APawn*                                  ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlayAgent_GetPawn) == 0x000008, "Wrong alignment on AutoPlayAgent_GetPawn");
static_assert(sizeof(AutoPlayAgent_GetPawn) == 0x000008, "Wrong size on AutoPlayAgent_GetPawn");
static_assert(offsetof(AutoPlayAgent_GetPawn, ReturnValue) == 0x000000, "Member 'AutoPlayAgent_GetPawn::ReturnValue' has a wrong offset!");

// Function AutoPlay.AutoPlayAgent.GetPlayerController
// 0x0008 (0x0008 - 0x0000)
struct AutoPlayAgent_GetPlayerController final
{
public:
	class APlayerController*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlayAgent_GetPlayerController) == 0x000008, "Wrong alignment on AutoPlayAgent_GetPlayerController");
static_assert(sizeof(AutoPlayAgent_GetPlayerController) == 0x000008, "Wrong size on AutoPlayAgent_GetPlayerController");
static_assert(offsetof(AutoPlayAgent_GetPlayerController, ReturnValue) == 0x000000, "Member 'AutoPlayAgent_GetPlayerController::ReturnValue' has a wrong offset!");

// Function AutoPlay.AutoPlayAgent.GetTaskSystem
// 0x0008 (0x0008 - 0x0000)
struct AutoPlayAgent_GetTaskSystem final
{
public:
	class UAutoPlayTaskSystem*                    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlayAgent_GetTaskSystem) == 0x000008, "Wrong alignment on AutoPlayAgent_GetTaskSystem");
static_assert(sizeof(AutoPlayAgent_GetTaskSystem) == 0x000008, "Wrong size on AutoPlayAgent_GetTaskSystem");
static_assert(offsetof(AutoPlayAgent_GetTaskSystem, ReturnValue) == 0x000000, "Member 'AutoPlayAgent_GetTaskSystem::ReturnValue' has a wrong offset!");

// Function AutoPlay.AutoPlayInput.InputKey
// 0x0020 (0x0020 - 0x0000)
struct AutoPlayInput_InputKey final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Value;                                             // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Time;                                              // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlayInput_InputKey) == 0x000008, "Wrong alignment on AutoPlayInput_InputKey");
static_assert(sizeof(AutoPlayInput_InputKey) == 0x000020, "Wrong size on AutoPlayInput_InputKey");
static_assert(offsetof(AutoPlayInput_InputKey, Key) == 0x000000, "Member 'AutoPlayInput_InputKey::Key' has a wrong offset!");
static_assert(offsetof(AutoPlayInput_InputKey, Value) == 0x000018, "Member 'AutoPlayInput_InputKey::Value' has a wrong offset!");
static_assert(offsetof(AutoPlayInput_InputKey, Time) == 0x00001C, "Member 'AutoPlayInput_InputKey::Time' has a wrong offset!");

// Function AutoPlay.AutoPlaySubsystem.DisableAutoPlay
// 0x0008 (0x0008 - 0x0000)
struct AutoPlaySubsystem_DisableAutoPlay final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlaySubsystem_DisableAutoPlay) == 0x000008, "Wrong alignment on AutoPlaySubsystem_DisableAutoPlay");
static_assert(sizeof(AutoPlaySubsystem_DisableAutoPlay) == 0x000008, "Wrong size on AutoPlaySubsystem_DisableAutoPlay");
static_assert(offsetof(AutoPlaySubsystem_DisableAutoPlay, PlayerController) == 0x000000, "Member 'AutoPlaySubsystem_DisableAutoPlay::PlayerController' has a wrong offset!");

// Function AutoPlay.AutoPlaySubsystem.EnableAutoPlay
// 0x0010 (0x0010 - 0x0000)
struct AutoPlaySubsystem_EnableAutoPlay final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAutoPlayAgent*                         ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlaySubsystem_EnableAutoPlay) == 0x000008, "Wrong alignment on AutoPlaySubsystem_EnableAutoPlay");
static_assert(sizeof(AutoPlaySubsystem_EnableAutoPlay) == 0x000010, "Wrong size on AutoPlaySubsystem_EnableAutoPlay");
static_assert(offsetof(AutoPlaySubsystem_EnableAutoPlay, PlayerController) == 0x000000, "Member 'AutoPlaySubsystem_EnableAutoPlay::PlayerController' has a wrong offset!");
static_assert(offsetof(AutoPlaySubsystem_EnableAutoPlay, ReturnValue) == 0x000008, "Member 'AutoPlaySubsystem_EnableAutoPlay::ReturnValue' has a wrong offset!");

// Function AutoPlay.AutoPlaySubsystem.RecordMacro
// 0x0010 (0x0010 - 0x0000)
struct AutoPlaySubsystem_RecordMacro final
{
public:
	class FString                                 Param_Name;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlaySubsystem_RecordMacro) == 0x000008, "Wrong alignment on AutoPlaySubsystem_RecordMacro");
static_assert(sizeof(AutoPlaySubsystem_RecordMacro) == 0x000010, "Wrong size on AutoPlaySubsystem_RecordMacro");
static_assert(offsetof(AutoPlaySubsystem_RecordMacro, Param_Name) == 0x000000, "Member 'AutoPlaySubsystem_RecordMacro::Param_Name' has a wrong offset!");

// Function AutoPlay.AutoPlaySubsystem.RunMacro
// 0x0010 (0x0010 - 0x0000)
struct AutoPlaySubsystem_RunMacro final
{
public:
	class FString                                 Param_Name;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlaySubsystem_RunMacro) == 0x000008, "Wrong alignment on AutoPlaySubsystem_RunMacro");
static_assert(sizeof(AutoPlaySubsystem_RunMacro) == 0x000010, "Wrong size on AutoPlaySubsystem_RunMacro");
static_assert(offsetof(AutoPlaySubsystem_RunMacro, Param_Name) == 0x000000, "Member 'AutoPlaySubsystem_RunMacro::Param_Name' has a wrong offset!");

// Function AutoPlay.AutoPlaySubsystem.RunTask
// 0x0008 (0x0008 - 0x0000)
struct AutoPlaySubsystem_RunTask final
{
public:
	class FName                                   EventName;                                         // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlaySubsystem_RunTask) == 0x000004, "Wrong alignment on AutoPlaySubsystem_RunTask");
static_assert(sizeof(AutoPlaySubsystem_RunTask) == 0x000008, "Wrong size on AutoPlaySubsystem_RunTask");
static_assert(offsetof(AutoPlaySubsystem_RunTask, EventName) == 0x000000, "Member 'AutoPlaySubsystem_RunTask::EventName' has a wrong offset!");

// Function AutoPlay.AutoPlaySubsystem.GetAgent
// 0x0010 (0x0010 - 0x0000)
struct AutoPlaySubsystem_GetAgent final
{
public:
	const class APlayerController*                PlayerController;                                  // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAutoPlayAgent*                         ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlaySubsystem_GetAgent) == 0x000008, "Wrong alignment on AutoPlaySubsystem_GetAgent");
static_assert(sizeof(AutoPlaySubsystem_GetAgent) == 0x000010, "Wrong size on AutoPlaySubsystem_GetAgent");
static_assert(offsetof(AutoPlaySubsystem_GetAgent, PlayerController) == 0x000000, "Member 'AutoPlaySubsystem_GetAgent::PlayerController' has a wrong offset!");
static_assert(offsetof(AutoPlaySubsystem_GetAgent, ReturnValue) == 0x000008, "Member 'AutoPlaySubsystem_GetAgent::ReturnValue' has a wrong offset!");

// Function AutoPlay.AutoPlayMacroSystem.GetValueAsFloat
// 0x0060 (0x0060 - 0x0000)
struct AutoPlayMacroSystem_GetValueAsFloat final
{
public:
	struct FAutoPlayEventArgs                     Args;                                              // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                   Param_Name;                                        // 0x0050(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OutValue;                                          // 0x0058(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x005C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C7F[0x3];                                     // 0x005D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AutoPlayMacroSystem_GetValueAsFloat) == 0x000008, "Wrong alignment on AutoPlayMacroSystem_GetValueAsFloat");
static_assert(sizeof(AutoPlayMacroSystem_GetValueAsFloat) == 0x000060, "Wrong size on AutoPlayMacroSystem_GetValueAsFloat");
static_assert(offsetof(AutoPlayMacroSystem_GetValueAsFloat, Args) == 0x000000, "Member 'AutoPlayMacroSystem_GetValueAsFloat::Args' has a wrong offset!");
static_assert(offsetof(AutoPlayMacroSystem_GetValueAsFloat, Param_Name) == 0x000050, "Member 'AutoPlayMacroSystem_GetValueAsFloat::Param_Name' has a wrong offset!");
static_assert(offsetof(AutoPlayMacroSystem_GetValueAsFloat, OutValue) == 0x000058, "Member 'AutoPlayMacroSystem_GetValueAsFloat::OutValue' has a wrong offset!");
static_assert(offsetof(AutoPlayMacroSystem_GetValueAsFloat, ReturnValue) == 0x00005C, "Member 'AutoPlayMacroSystem_GetValueAsFloat::ReturnValue' has a wrong offset!");

// Function AutoPlay.AutoPlayMacroSystem.GetValueAsObject
// 0x0068 (0x0068 - 0x0000)
struct AutoPlayMacroSystem_GetValueAsObject final
{
public:
	struct FAutoPlayEventArgs                     Args;                                              // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                   Param_Name;                                        // 0x0050(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                OutValue;                                          // 0x0058(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C80[0x7];                                     // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AutoPlayMacroSystem_GetValueAsObject) == 0x000008, "Wrong alignment on AutoPlayMacroSystem_GetValueAsObject");
static_assert(sizeof(AutoPlayMacroSystem_GetValueAsObject) == 0x000068, "Wrong size on AutoPlayMacroSystem_GetValueAsObject");
static_assert(offsetof(AutoPlayMacroSystem_GetValueAsObject, Args) == 0x000000, "Member 'AutoPlayMacroSystem_GetValueAsObject::Args' has a wrong offset!");
static_assert(offsetof(AutoPlayMacroSystem_GetValueAsObject, Param_Name) == 0x000050, "Member 'AutoPlayMacroSystem_GetValueAsObject::Param_Name' has a wrong offset!");
static_assert(offsetof(AutoPlayMacroSystem_GetValueAsObject, OutValue) == 0x000058, "Member 'AutoPlayMacroSystem_GetValueAsObject::OutValue' has a wrong offset!");
static_assert(offsetof(AutoPlayMacroSystem_GetValueAsObject, ReturnValue) == 0x000060, "Member 'AutoPlayMacroSystem_GetValueAsObject::ReturnValue' has a wrong offset!");

// Function AutoPlay.AutoPlayTask.CreateChildTask
// 0x0010 (0x0010 - 0x0000)
struct AutoPlayTask_CreateChildTask final
{
public:
	TSubclassOf<class UAutoPlayTask>              TaskClass;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAutoPlayTask*                          ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlayTask_CreateChildTask) == 0x000008, "Wrong alignment on AutoPlayTask_CreateChildTask");
static_assert(sizeof(AutoPlayTask_CreateChildTask) == 0x000010, "Wrong size on AutoPlayTask_CreateChildTask");
static_assert(offsetof(AutoPlayTask_CreateChildTask, TaskClass) == 0x000000, "Member 'AutoPlayTask_CreateChildTask::TaskClass' has a wrong offset!");
static_assert(offsetof(AutoPlayTask_CreateChildTask, ReturnValue) == 0x000008, "Member 'AutoPlayTask_CreateChildTask::ReturnValue' has a wrong offset!");

// Function AutoPlay.AutoPlayTask.NotifyResult
// 0x0001 (0x0001 - 0x0000)
struct AutoPlayTask_NotifyResult final
{
public:
	bool                                          bSuccess;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlayTask_NotifyResult) == 0x000001, "Wrong alignment on AutoPlayTask_NotifyResult");
static_assert(sizeof(AutoPlayTask_NotifyResult) == 0x000001, "Wrong size on AutoPlayTask_NotifyResult");
static_assert(offsetof(AutoPlayTask_NotifyResult, bSuccess) == 0x000000, "Member 'AutoPlayTask_NotifyResult::bSuccess' has a wrong offset!");

// Function AutoPlay.AutoPlayTask.ReceiveInitByEvent
// 0x0058 (0x0058 - 0x0000)
struct AutoPlayTask_ReceiveInitByEvent final
{
public:
	class FName                                   Event;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAutoPlayEventArgs                     Args;                                              // 0x0008(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlayTask_ReceiveInitByEvent) == 0x000008, "Wrong alignment on AutoPlayTask_ReceiveInitByEvent");
static_assert(sizeof(AutoPlayTask_ReceiveInitByEvent) == 0x000058, "Wrong size on AutoPlayTask_ReceiveInitByEvent");
static_assert(offsetof(AutoPlayTask_ReceiveInitByEvent, Event) == 0x000000, "Member 'AutoPlayTask_ReceiveInitByEvent::Event' has a wrong offset!");
static_assert(offsetof(AutoPlayTask_ReceiveInitByEvent, Args) == 0x000008, "Member 'AutoPlayTask_ReceiveInitByEvent::Args' has a wrong offset!");

// Function AutoPlay.AutoPlayTask.GetOwnerAgent
// 0x0008 (0x0008 - 0x0000)
struct AutoPlayTask_GetOwnerAgent final
{
public:
	class UAutoPlayAgent*                         ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlayTask_GetOwnerAgent) == 0x000008, "Wrong alignment on AutoPlayTask_GetOwnerAgent");
static_assert(sizeof(AutoPlayTask_GetOwnerAgent) == 0x000008, "Wrong size on AutoPlayTask_GetOwnerAgent");
static_assert(offsetof(AutoPlayTask_GetOwnerAgent, ReturnValue) == 0x000000, "Member 'AutoPlayTask_GetOwnerAgent::ReturnValue' has a wrong offset!");

// Function AutoPlay.AutoPlayTask_BlueprintBase.K2_NotifyResult
// 0x0001 (0x0001 - 0x0000)
struct AutoPlayTask_BlueprintBase_K2_NotifyResult final
{
public:
	bool                                          bSuccess;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlayTask_BlueprintBase_K2_NotifyResult) == 0x000001, "Wrong alignment on AutoPlayTask_BlueprintBase_K2_NotifyResult");
static_assert(sizeof(AutoPlayTask_BlueprintBase_K2_NotifyResult) == 0x000001, "Wrong size on AutoPlayTask_BlueprintBase_K2_NotifyResult");
static_assert(offsetof(AutoPlayTask_BlueprintBase_K2_NotifyResult, bSuccess) == 0x000000, "Member 'AutoPlayTask_BlueprintBase_K2_NotifyResult::bSuccess' has a wrong offset!");

// Function AutoPlay.AutoPlayTask_BlueprintBase.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct AutoPlayTask_BlueprintBase_ReceiveTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlayTask_BlueprintBase_ReceiveTick) == 0x000004, "Wrong alignment on AutoPlayTask_BlueprintBase_ReceiveTick");
static_assert(sizeof(AutoPlayTask_BlueprintBase_ReceiveTick) == 0x000004, "Wrong size on AutoPlayTask_BlueprintBase_ReceiveTick");
static_assert(offsetof(AutoPlayTask_BlueprintBase_ReceiveTick, DeltaTime) == 0x000000, "Member 'AutoPlayTask_BlueprintBase_ReceiveTick::DeltaTime' has a wrong offset!");

// Function AutoPlay.AutoPlayTaskSystem.CreateTask
// 0x0018 (0x0018 - 0x0000)
struct AutoPlayTaskSystem_CreateTask final
{
public:
	TSubclassOf<class UAutoPlayTask>              TaskClass;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                TaskOwner;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAutoPlayTask*                          ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlayTaskSystem_CreateTask) == 0x000008, "Wrong alignment on AutoPlayTaskSystem_CreateTask");
static_assert(sizeof(AutoPlayTaskSystem_CreateTask) == 0x000018, "Wrong size on AutoPlayTaskSystem_CreateTask");
static_assert(offsetof(AutoPlayTaskSystem_CreateTask, TaskClass) == 0x000000, "Member 'AutoPlayTaskSystem_CreateTask::TaskClass' has a wrong offset!");
static_assert(offsetof(AutoPlayTaskSystem_CreateTask, TaskOwner) == 0x000008, "Member 'AutoPlayTaskSystem_CreateTask::TaskOwner' has a wrong offset!");
static_assert(offsetof(AutoPlayTaskSystem_CreateTask, ReturnValue) == 0x000010, "Member 'AutoPlayTaskSystem_CreateTask::ReturnValue' has a wrong offset!");

}

