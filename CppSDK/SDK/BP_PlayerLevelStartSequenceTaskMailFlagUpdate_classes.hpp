#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskMailFlagUpdate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskMailFlagUpdate.BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C
// 0x0008 (0x0038 - 0x0030)
class UBP_PlayerLevelStartSequenceTaskMailFlagUpdate_C final : public USBPlayerLevelStartSequenceTaskBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskMailFlagUpdate(int32 EntryPoint);
	void Start();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C">();
	}
	static class UBP_PlayerLevelStartSequenceTaskMailFlagUpdate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerLevelStartSequenceTaskMailFlagUpdate_C>();
	}
};
static_assert(alignof(UBP_PlayerLevelStartSequenceTaskMailFlagUpdate_C) == 0x000008, "Wrong alignment on UBP_PlayerLevelStartSequenceTaskMailFlagUpdate_C");
static_assert(sizeof(UBP_PlayerLevelStartSequenceTaskMailFlagUpdate_C) == 0x000038, "Wrong size on UBP_PlayerLevelStartSequenceTaskMailFlagUpdate_C");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskMailFlagUpdate_C, UberGraphFrame) == 0x000030, "Member 'UBP_PlayerLevelStartSequenceTaskMailFlagUpdate_C::UberGraphFrame' has a wrong offset!");

}

