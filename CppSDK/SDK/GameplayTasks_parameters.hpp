#pragma once

 

// Package: GameplayTasks

#include "Basic.hpp"

#include "GameplayTasks_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
// 0x0048 (0x0048 - 0x0000)
struct GameplayTasksComponent_K2_RunGameplayTask final
{
public:
	TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UGameplayTask*                          Task;                                              // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Priority;                                          // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13FD[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSubclassOf<class UGameplayTaskResource>> AdditionalRequiredResources;                       // 0x0020(0x0010)(Parm, ZeroConstructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayTaskResource>> AdditionalClaimedResources;                        // 0x0030(0x0010)(Parm, ZeroConstructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
	EGameplayTaskRunResult                        ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13FE[0x7];                                     // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameplayTasksComponent_K2_RunGameplayTask) == 0x000008, "Wrong alignment on GameplayTasksComponent_K2_RunGameplayTask");
static_assert(sizeof(GameplayTasksComponent_K2_RunGameplayTask) == 0x000048, "Wrong size on GameplayTasksComponent_K2_RunGameplayTask");
static_assert(offsetof(GameplayTasksComponent_K2_RunGameplayTask, TaskOwner) == 0x000000, "Member 'GameplayTasksComponent_K2_RunGameplayTask::TaskOwner' has a wrong offset!");
static_assert(offsetof(GameplayTasksComponent_K2_RunGameplayTask, Task) == 0x000010, "Member 'GameplayTasksComponent_K2_RunGameplayTask::Task' has a wrong offset!");
static_assert(offsetof(GameplayTasksComponent_K2_RunGameplayTask, Priority) == 0x000018, "Member 'GameplayTasksComponent_K2_RunGameplayTask::Priority' has a wrong offset!");
static_assert(offsetof(GameplayTasksComponent_K2_RunGameplayTask, AdditionalRequiredResources) == 0x000020, "Member 'GameplayTasksComponent_K2_RunGameplayTask::AdditionalRequiredResources' has a wrong offset!");
static_assert(offsetof(GameplayTasksComponent_K2_RunGameplayTask, AdditionalClaimedResources) == 0x000030, "Member 'GameplayTasksComponent_K2_RunGameplayTask::AdditionalClaimedResources' has a wrong offset!");
static_assert(offsetof(GameplayTasksComponent_K2_RunGameplayTask, ReturnValue) == 0x000040, "Member 'GameplayTasksComponent_K2_RunGameplayTask::ReturnValue' has a wrong offset!");

// Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
// 0x0020 (0x0020 - 0x0000)
struct GameplayTask_WaitDelay_TaskWaitDelay final
{
public:
	TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                         Time;                                              // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Priority;                                          // 0x0014(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1403[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameplayTask_WaitDelay*                ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GameplayTask_WaitDelay_TaskWaitDelay) == 0x000008, "Wrong alignment on GameplayTask_WaitDelay_TaskWaitDelay");
static_assert(sizeof(GameplayTask_WaitDelay_TaskWaitDelay) == 0x000020, "Wrong size on GameplayTask_WaitDelay_TaskWaitDelay");
static_assert(offsetof(GameplayTask_WaitDelay_TaskWaitDelay, TaskOwner) == 0x000000, "Member 'GameplayTask_WaitDelay_TaskWaitDelay::TaskOwner' has a wrong offset!");
static_assert(offsetof(GameplayTask_WaitDelay_TaskWaitDelay, Time) == 0x000010, "Member 'GameplayTask_WaitDelay_TaskWaitDelay::Time' has a wrong offset!");
static_assert(offsetof(GameplayTask_WaitDelay_TaskWaitDelay, Priority) == 0x000014, "Member 'GameplayTask_WaitDelay_TaskWaitDelay::Priority' has a wrong offset!");
static_assert(offsetof(GameplayTask_WaitDelay_TaskWaitDelay, ReturnValue) == 0x000018, "Member 'GameplayTask_WaitDelay_TaskWaitDelay::ReturnValue' has a wrong offset!");

// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource
// 0x0030 (0x0030 - 0x0000)
struct GameplayTask_ClaimResource_ClaimResource final
{
public:
	TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayTaskResource>      ResourceClass;                                     // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Priority;                                          // 0x0018(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1406[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   TaskInstanceName;                                  // 0x001C(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1407[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameplayTask_ClaimResource*            ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GameplayTask_ClaimResource_ClaimResource) == 0x000008, "Wrong alignment on GameplayTask_ClaimResource_ClaimResource");
static_assert(sizeof(GameplayTask_ClaimResource_ClaimResource) == 0x000030, "Wrong size on GameplayTask_ClaimResource_ClaimResource");
static_assert(offsetof(GameplayTask_ClaimResource_ClaimResource, InTaskOwner) == 0x000000, "Member 'GameplayTask_ClaimResource_ClaimResource::InTaskOwner' has a wrong offset!");
static_assert(offsetof(GameplayTask_ClaimResource_ClaimResource, ResourceClass) == 0x000010, "Member 'GameplayTask_ClaimResource_ClaimResource::ResourceClass' has a wrong offset!");
static_assert(offsetof(GameplayTask_ClaimResource_ClaimResource, Priority) == 0x000018, "Member 'GameplayTask_ClaimResource_ClaimResource::Priority' has a wrong offset!");
static_assert(offsetof(GameplayTask_ClaimResource_ClaimResource, TaskInstanceName) == 0x00001C, "Member 'GameplayTask_ClaimResource_ClaimResource::TaskInstanceName' has a wrong offset!");
static_assert(offsetof(GameplayTask_ClaimResource_ClaimResource, ReturnValue) == 0x000028, "Member 'GameplayTask_ClaimResource_ClaimResource::ReturnValue' has a wrong offset!");

// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
// 0x0038 (0x0038 - 0x0000)
struct GameplayTask_ClaimResource_ClaimResources final
{
public:
	TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayTaskResource>> ResourceClasses;                                   // 0x0010(0x0010)(Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                         Priority;                                          // 0x0020(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1408[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   TaskInstanceName;                                  // 0x0024(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1409[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameplayTask_ClaimResource*            ReturnValue;                                       // 0x0030(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GameplayTask_ClaimResource_ClaimResources) == 0x000008, "Wrong alignment on GameplayTask_ClaimResource_ClaimResources");
static_assert(sizeof(GameplayTask_ClaimResource_ClaimResources) == 0x000038, "Wrong size on GameplayTask_ClaimResource_ClaimResources");
static_assert(offsetof(GameplayTask_ClaimResource_ClaimResources, InTaskOwner) == 0x000000, "Member 'GameplayTask_ClaimResource_ClaimResources::InTaskOwner' has a wrong offset!");
static_assert(offsetof(GameplayTask_ClaimResource_ClaimResources, ResourceClasses) == 0x000010, "Member 'GameplayTask_ClaimResource_ClaimResources::ResourceClasses' has a wrong offset!");
static_assert(offsetof(GameplayTask_ClaimResource_ClaimResources, Priority) == 0x000020, "Member 'GameplayTask_ClaimResource_ClaimResources::Priority' has a wrong offset!");
static_assert(offsetof(GameplayTask_ClaimResource_ClaimResources, TaskInstanceName) == 0x000024, "Member 'GameplayTask_ClaimResource_ClaimResources::TaskInstanceName' has a wrong offset!");
static_assert(offsetof(GameplayTask_ClaimResource_ClaimResources, ReturnValue) == 0x000030, "Member 'GameplayTask_ClaimResource_ClaimResources::ReturnValue' has a wrong offset!");

// Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
// 0x0040 (0x0040 - 0x0000)
struct GameplayTask_SpawnActor_SpawnActor final
{
public:
	TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FVector                                SpawnLocation;                                     // 0x0010(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               SpawnRotation;                                     // 0x001C(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                     Param_Class;                                       // 0x0028(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSpawnOnlyOnAuthority;                             // 0x0030(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_140B[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameplayTask_SpawnActor*               ReturnValue;                                       // 0x0038(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GameplayTask_SpawnActor_SpawnActor) == 0x000008, "Wrong alignment on GameplayTask_SpawnActor_SpawnActor");
static_assert(sizeof(GameplayTask_SpawnActor_SpawnActor) == 0x000040, "Wrong size on GameplayTask_SpawnActor_SpawnActor");
static_assert(offsetof(GameplayTask_SpawnActor_SpawnActor, TaskOwner) == 0x000000, "Member 'GameplayTask_SpawnActor_SpawnActor::TaskOwner' has a wrong offset!");
static_assert(offsetof(GameplayTask_SpawnActor_SpawnActor, SpawnLocation) == 0x000010, "Member 'GameplayTask_SpawnActor_SpawnActor::SpawnLocation' has a wrong offset!");
static_assert(offsetof(GameplayTask_SpawnActor_SpawnActor, SpawnRotation) == 0x00001C, "Member 'GameplayTask_SpawnActor_SpawnActor::SpawnRotation' has a wrong offset!");
static_assert(offsetof(GameplayTask_SpawnActor_SpawnActor, Param_Class) == 0x000028, "Member 'GameplayTask_SpawnActor_SpawnActor::Param_Class' has a wrong offset!");
static_assert(offsetof(GameplayTask_SpawnActor_SpawnActor, bSpawnOnlyOnAuthority) == 0x000030, "Member 'GameplayTask_SpawnActor_SpawnActor::bSpawnOnlyOnAuthority' has a wrong offset!");
static_assert(offsetof(GameplayTask_SpawnActor_SpawnActor, ReturnValue) == 0x000038, "Member 'GameplayTask_SpawnActor_SpawnActor::ReturnValue' has a wrong offset!");

// Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
// 0x0018 (0x0018 - 0x0000)
struct GameplayTask_SpawnActor_BeginSpawningActor final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 SpawnedActor;                                      // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_140C[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameplayTask_SpawnActor_BeginSpawningActor) == 0x000008, "Wrong alignment on GameplayTask_SpawnActor_BeginSpawningActor");
static_assert(sizeof(GameplayTask_SpawnActor_BeginSpawningActor) == 0x000018, "Wrong size on GameplayTask_SpawnActor_BeginSpawningActor");
static_assert(offsetof(GameplayTask_SpawnActor_BeginSpawningActor, WorldContextObject) == 0x000000, "Member 'GameplayTask_SpawnActor_BeginSpawningActor::WorldContextObject' has a wrong offset!");
static_assert(offsetof(GameplayTask_SpawnActor_BeginSpawningActor, SpawnedActor) == 0x000008, "Member 'GameplayTask_SpawnActor_BeginSpawningActor::SpawnedActor' has a wrong offset!");
static_assert(offsetof(GameplayTask_SpawnActor_BeginSpawningActor, ReturnValue) == 0x000010, "Member 'GameplayTask_SpawnActor_BeginSpawningActor::ReturnValue' has a wrong offset!");

// Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
// 0x0010 (0x0010 - 0x0000)
struct GameplayTask_SpawnActor_FinishSpawningActor final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 SpawnedActor;                                      // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GameplayTask_SpawnActor_FinishSpawningActor) == 0x000008, "Wrong alignment on GameplayTask_SpawnActor_FinishSpawningActor");
static_assert(sizeof(GameplayTask_SpawnActor_FinishSpawningActor) == 0x000010, "Wrong size on GameplayTask_SpawnActor_FinishSpawningActor");
static_assert(offsetof(GameplayTask_SpawnActor_FinishSpawningActor, WorldContextObject) == 0x000000, "Member 'GameplayTask_SpawnActor_FinishSpawningActor::WorldContextObject' has a wrong offset!");
static_assert(offsetof(GameplayTask_SpawnActor_FinishSpawningActor, SpawnedActor) == 0x000008, "Member 'GameplayTask_SpawnActor_FinishSpawningActor::SpawnedActor' has a wrong offset!");

}
