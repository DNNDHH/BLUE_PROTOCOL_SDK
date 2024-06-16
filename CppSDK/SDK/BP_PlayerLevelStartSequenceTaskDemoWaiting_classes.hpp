#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskDemoWaiting

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskDemoWaiting.BP_PlayerLevelStartSequenceTaskDemoWaiting_C
// 0x0008 (0x0038 - 0x0030)
class UBP_PlayerLevelStartSequenceTaskDemoWaiting_C final : public USBPlayerLevelStartSequenceTaskBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskDemoWaiting(int32 EntryPoint);
	void Start();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerLevelStartSequenceTaskDemoWaiting_C">();
	}
	static class UBP_PlayerLevelStartSequenceTaskDemoWaiting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerLevelStartSequenceTaskDemoWaiting_C>();
	}
};
static_assert(alignof(UBP_PlayerLevelStartSequenceTaskDemoWaiting_C) == 0x000008, "Wrong alignment on UBP_PlayerLevelStartSequenceTaskDemoWaiting_C");
static_assert(sizeof(UBP_PlayerLevelStartSequenceTaskDemoWaiting_C) == 0x000038, "Wrong size on UBP_PlayerLevelStartSequenceTaskDemoWaiting_C");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskDemoWaiting_C, UberGraphFrame) == 0x000030, "Member 'UBP_PlayerLevelStartSequenceTaskDemoWaiting_C::UberGraphFrame' has a wrong offset!");

}

