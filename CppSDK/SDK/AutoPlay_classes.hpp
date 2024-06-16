#pragma once

 

// Package: AutoPlay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AutoPlay_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class AutoPlay.AutoPlaySensor
// 0x0000 (0x0028 - 0x0028)
class UAutoPlaySensor : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AutoPlaySensor">();
	}
	static class UAutoPlaySensor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAutoPlaySensor>();
	}
};
static_assert(alignof(UAutoPlaySensor) == 0x000008, "Wrong alignment on UAutoPlaySensor");
static_assert(sizeof(UAutoPlaySensor) == 0x000028, "Wrong size on UAutoPlaySensor");

// Class AutoPlay.AsyncActionRunAutoPlayTask
// 0x0018 (0x0048 - 0x0030)
class UAsyncActionRunAutoPlayTask final : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             Ended;                                             // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1C79[0x8];                                     // 0x0040(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UAsyncActionRunAutoPlayTask* RunAutoPlayTask(class UObject* WorldContextObject, class UAutoPlayTask* Task);

	void OnEnded__DelegateSignature(EAutoPlayTaskState State);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AsyncActionRunAutoPlayTask">();
	}
	static class UAsyncActionRunAutoPlayTask* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncActionRunAutoPlayTask>();
	}
};
static_assert(alignof(UAsyncActionRunAutoPlayTask) == 0x000008, "Wrong alignment on UAsyncActionRunAutoPlayTask");
static_assert(sizeof(UAsyncActionRunAutoPlayTask) == 0x000048, "Wrong size on UAsyncActionRunAutoPlayTask");
static_assert(offsetof(UAsyncActionRunAutoPlayTask, Ended) == 0x000030, "Member 'UAsyncActionRunAutoPlayTask::Ended' has a wrong offset!");

// Class AutoPlay.AutoPlayService
// 0x0010 (0x0038 - 0x0028)
class UAutoPlayService : public UObject
{
public:
	class UAutoPlayTask*                          OwnerTask;                                         // 0x0028(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         TickInterval;                                      // 0x0030(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1C7A[0x4];                                     // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UAutoPlayTask* GetOwnerTask() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AutoPlayService">();
	}
	static class UAutoPlayService* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAutoPlayService>();
	}
};
static_assert(alignof(UAutoPlayService) == 0x000008, "Wrong alignment on UAutoPlayService");
static_assert(sizeof(UAutoPlayService) == 0x000038, "Wrong size on UAutoPlayService");
static_assert(offsetof(UAutoPlayService, OwnerTask) == 0x000028, "Member 'UAutoPlayService::OwnerTask' has a wrong offset!");
static_assert(offsetof(UAutoPlayService, TickInterval) == 0x000030, "Member 'UAutoPlayService::TickInterval' has a wrong offset!");

// Class AutoPlay.AutoPlayAgent
// 0x0048 (0x0070 - 0x0028)
class UAutoPlayAgent final : public UObject
{
public:
	uint8                                         Pad_1C7B[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAutoPlaySensor*>                Sensors;                                           // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UAutoPlayMap*>                   Maps;                                              // 0x0040(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UAutoPlayTaskSystem*                    TaskSystem;                                        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAutoPlayInput*                         Input;                                             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULocalPlayer*                           LocalPlayer;                                       // 0x0060(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class APlayerController*                      PlayerController;                                  // 0x0068(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	class UAutoPlaySensor* AddSensor(TSubclassOf<class UAutoPlaySensor> SensorClass);

	class UAutoPlayMap* FindMapByClass(TSubclassOf<class UAutoPlayMap> MapClass) const;
	class UAutoPlaySensor* FindSensorByClass(TSubclassOf<class UAutoPlaySensor> SensorClass) const;
	class UAutoPlayInput* GetInput() const;
	class APawn* GetPawn() const;
	class APlayerController* GetPlayerController() const;
	class UAutoPlayTaskSystem* GetTaskSystem() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AutoPlayAgent">();
	}
	static class UAutoPlayAgent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAutoPlayAgent>();
	}
};
static_assert(alignof(UAutoPlayAgent) == 0x000008, "Wrong alignment on UAutoPlayAgent");
static_assert(sizeof(UAutoPlayAgent) == 0x000070, "Wrong size on UAutoPlayAgent");
static_assert(offsetof(UAutoPlayAgent, Sensors) == 0x000030, "Member 'UAutoPlayAgent::Sensors' has a wrong offset!");
static_assert(offsetof(UAutoPlayAgent, Maps) == 0x000040, "Member 'UAutoPlayAgent::Maps' has a wrong offset!");
static_assert(offsetof(UAutoPlayAgent, TaskSystem) == 0x000050, "Member 'UAutoPlayAgent::TaskSystem' has a wrong offset!");
static_assert(offsetof(UAutoPlayAgent, Input) == 0x000058, "Member 'UAutoPlayAgent::Input' has a wrong offset!");
static_assert(offsetof(UAutoPlayAgent, LocalPlayer) == 0x000060, "Member 'UAutoPlayAgent::LocalPlayer' has a wrong offset!");
static_assert(offsetof(UAutoPlayAgent, PlayerController) == 0x000068, "Member 'UAutoPlayAgent::PlayerController' has a wrong offset!");

// Class AutoPlay.AutoPlayInput
// 0x0020 (0x0048 - 0x0028)
class UAutoPlayInput final : public UObject
{
public:
	uint8                                         Pad_1C7C[0x20];                                    // 0x0028(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void InputKey(const struct FKey& Key, float Value, float Time);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AutoPlayInput">();
	}
	static class UAutoPlayInput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAutoPlayInput>();
	}
};
static_assert(alignof(UAutoPlayInput) == 0x000008, "Wrong alignment on UAutoPlayInput");
static_assert(sizeof(UAutoPlayInput) == 0x000048, "Wrong size on UAutoPlayInput");

// Class AutoPlay.AutoPlaySubsystem
// 0x0058 (0x0088 - 0x0030)
class UAutoPlaySubsystem final : public UGameInstanceSubsystem
{
public:
	TMap<class ULocalPlayer*, class UAutoPlayAgent*> AgentMap;                                          // 0x0030(0x0050)(NativeAccessSpecifierPrivate)
	class UAutoPlayMacroSystem*                   MacroSystem;                                       // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void DisableAutoPlay(class APlayerController* PlayerController);
	class UAutoPlayAgent* EnableAutoPlay(class APlayerController* PlayerController);
	void RecordMacro(const class FString& Param_Name);
	void RunMacro(const class FString& Param_Name);
	void RunTask(const class FName EventName);
	void StopMacro();

	class UAutoPlayAgent* GetAgent(const class APlayerController* PlayerController) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AutoPlaySubsystem">();
	}
	static class UAutoPlaySubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAutoPlaySubsystem>();
	}
};
static_assert(alignof(UAutoPlaySubsystem) == 0x000008, "Wrong alignment on UAutoPlaySubsystem");
static_assert(sizeof(UAutoPlaySubsystem) == 0x000088, "Wrong size on UAutoPlaySubsystem");
static_assert(offsetof(UAutoPlaySubsystem, AgentMap) == 0x000030, "Member 'UAutoPlaySubsystem::AgentMap' has a wrong offset!");
static_assert(offsetof(UAutoPlaySubsystem, MacroSystem) == 0x000080, "Member 'UAutoPlaySubsystem::MacroSystem' has a wrong offset!");

// Class AutoPlay.AutoPlayMacroSystem
// 0x00E0 (0x0108 - 0x0028)
class UAutoPlayMacroSystem final : public UObject
{
public:
	uint8                                         Pad_1C7D[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, TSubclassOf<class UAutoPlayTask>> RegisteredTaskClass;                               // 0x0030(0x0050)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1C7E[0x80];                                    // 0x0080(0x0080)(Fixing Size After Last Property [ Dumper-7 ])
	class UAutoPlayTask*                          CurrentTask;                                       // 0x0100(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static bool GetValueAsFloat(const struct FAutoPlayEventArgs& Args, class FName Param_Name, float* OutValue);
	static bool GetValueAsObject(const struct FAutoPlayEventArgs& Args, class FName Param_Name, class UObject** OutValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AutoPlayMacroSystem">();
	}
	static class UAutoPlayMacroSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAutoPlayMacroSystem>();
	}
};
static_assert(alignof(UAutoPlayMacroSystem) == 0x000008, "Wrong alignment on UAutoPlayMacroSystem");
static_assert(sizeof(UAutoPlayMacroSystem) == 0x000108, "Wrong size on UAutoPlayMacroSystem");
static_assert(offsetof(UAutoPlayMacroSystem, RegisteredTaskClass) == 0x000030, "Member 'UAutoPlayMacroSystem::RegisteredTaskClass' has a wrong offset!");
static_assert(offsetof(UAutoPlayMacroSystem, CurrentTask) == 0x000100, "Member 'UAutoPlayMacroSystem::CurrentTask' has a wrong offset!");

// Class AutoPlay.AutoPlayMap
// 0x0000 (0x0028 - 0x0028)
class UAutoPlayMap : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AutoPlayMap">();
	}
	static class UAutoPlayMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAutoPlayMap>();
	}
};
static_assert(alignof(UAutoPlayMap) == 0x000008, "Wrong alignment on UAutoPlayMap");
static_assert(sizeof(UAutoPlayMap) == 0x000028, "Wrong size on UAutoPlayMap");

// Class AutoPlay.AutoPlaySettings
// 0x0008 (0x0040 - 0x0038)
class UAutoPlaySettings final : public UDeveloperSettings
{
public:
	ECollisionChannel                             CollisionChannel;                                  // 0x0038(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C81[0x7];                                     // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AutoPlaySettings">();
	}
	static class UAutoPlaySettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAutoPlaySettings>();
	}
};
static_assert(alignof(UAutoPlaySettings) == 0x000008, "Wrong alignment on UAutoPlaySettings");
static_assert(sizeof(UAutoPlaySettings) == 0x000040, "Wrong size on UAutoPlaySettings");
static_assert(offsetof(UAutoPlaySettings, CollisionChannel) == 0x000038, "Member 'UAutoPlaySettings::CollisionChannel' has a wrong offset!");

// Class AutoPlay.AutoPlayTask
// 0x0060 (0x0088 - 0x0028)
class UAutoPlayTask : public UObject
{
public:
	TArray<TSubclassOf<class UAutoPlayService>>   ServiceClasses;                                    // 0x0028(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UAutoPlayService*>               Services;                                          // 0x0038(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class UAutoPlayTaskSystem*                    TaskSystem;                                        // 0x0048(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObject*                                TaskOwner;                                         // 0x0050(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1C82[0x1C];                                    // 0x0058(0x001C)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Resource;                                          // 0x0074(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   EventName;                                         // 0x007C(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C83[0x4];                                     // 0x0084(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UAutoPlayTask* CreateChildTask(TSubclassOf<class UAutoPlayTask> TaskClass);
	void NotifyResult(bool bSuccess);
	void ReceiveInitByEvent(class FName Event, const struct FAutoPlayEventArgs& Args);

	class UAutoPlayAgent* GetOwnerAgent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AutoPlayTask">();
	}
	static class UAutoPlayTask* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAutoPlayTask>();
	}
};
static_assert(alignof(UAutoPlayTask) == 0x000008, "Wrong alignment on UAutoPlayTask");
static_assert(sizeof(UAutoPlayTask) == 0x000088, "Wrong size on UAutoPlayTask");
static_assert(offsetof(UAutoPlayTask, ServiceClasses) == 0x000028, "Member 'UAutoPlayTask::ServiceClasses' has a wrong offset!");
static_assert(offsetof(UAutoPlayTask, Services) == 0x000038, "Member 'UAutoPlayTask::Services' has a wrong offset!");
static_assert(offsetof(UAutoPlayTask, TaskSystem) == 0x000048, "Member 'UAutoPlayTask::TaskSystem' has a wrong offset!");
static_assert(offsetof(UAutoPlayTask, TaskOwner) == 0x000050, "Member 'UAutoPlayTask::TaskOwner' has a wrong offset!");
static_assert(offsetof(UAutoPlayTask, Resource) == 0x000074, "Member 'UAutoPlayTask::Resource' has a wrong offset!");
static_assert(offsetof(UAutoPlayTask, EventName) == 0x00007C, "Member 'UAutoPlayTask::EventName' has a wrong offset!");

// Class AutoPlay.AutoPlayTask_BlueprintBase
// 0x0000 (0x0088 - 0x0088)
class UAutoPlayTask_BlueprintBase : public UAutoPlayTask
{
public:
	void K2_NotifyResult(bool bSuccess);
	void ReceiveStart();
	void ReceiveStop();
	void ReceiveTick(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AutoPlayTask_BlueprintBase">();
	}
	static class UAutoPlayTask_BlueprintBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAutoPlayTask_BlueprintBase>();
	}
};
static_assert(alignof(UAutoPlayTask_BlueprintBase) == 0x000008, "Wrong alignment on UAutoPlayTask_BlueprintBase");
static_assert(sizeof(UAutoPlayTask_BlueprintBase) == 0x000088, "Wrong size on UAutoPlayTask_BlueprintBase");

// Class AutoPlay.AutoPlayTaskSystem
// 0x0020 (0x0048 - 0x0028)
class UAutoPlayTaskSystem final : public UObject
{
public:
	TArray<class UAutoPlayTask*>                  Tasks;                                             // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UAutoPlayTask*>                  PausedTasks;                                       // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	class UAutoPlayTask* CreateTask(TSubclassOf<class UAutoPlayTask> TaskClass, class UObject* TaskOwner);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AutoPlayTaskSystem">();
	}
	static class UAutoPlayTaskSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAutoPlayTaskSystem>();
	}
};
static_assert(alignof(UAutoPlayTaskSystem) == 0x000008, "Wrong alignment on UAutoPlayTaskSystem");
static_assert(sizeof(UAutoPlayTaskSystem) == 0x000048, "Wrong size on UAutoPlayTaskSystem");
static_assert(offsetof(UAutoPlayTaskSystem, Tasks) == 0x000028, "Member 'UAutoPlayTaskSystem::Tasks' has a wrong offset!");
static_assert(offsetof(UAutoPlayTaskSystem, PausedTasks) == 0x000038, "Member 'UAutoPlayTaskSystem::PausedTasks' has a wrong offset!");

}

