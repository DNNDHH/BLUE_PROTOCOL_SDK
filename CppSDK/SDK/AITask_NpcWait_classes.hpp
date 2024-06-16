#pragma once

 

// Package: AITask_NpcWait

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AITask_NpcWait.AITask_NpcWait_C
// 0x0008 (0x00B0 - 0x00A8)
class UAITask_NpcWait_C final : public USBAITask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_AITask_NpcWait(int32 EntryPoint);
	void TaskStart(class AAIController* Controller, class APawn* ControlledPawn);
	void RequestAnimation(bool Result);
	void TaskFinish(class AAIController* Controller, class APawn* ControlledPawn, bool bInOwnerFinished);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AITask_NpcWait_C">();
	}
	static class UAITask_NpcWait_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAITask_NpcWait_C>();
	}
};
static_assert(alignof(UAITask_NpcWait_C) == 0x000008, "Wrong alignment on UAITask_NpcWait_C");
static_assert(sizeof(UAITask_NpcWait_C) == 0x0000B0, "Wrong size on UAITask_NpcWait_C");
static_assert(offsetof(UAITask_NpcWait_C, UberGraphFrame) == 0x0000A8, "Member 'UAITask_NpcWait_C::UberGraphFrame' has a wrong offset!");

}

