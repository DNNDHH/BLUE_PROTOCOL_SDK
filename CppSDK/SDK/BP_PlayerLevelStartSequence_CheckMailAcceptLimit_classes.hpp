#pragma once

 

// Package: BP_PlayerLevelStartSequence_CheckMailAcceptLimit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C
// 0x0010 (0x0040 - 0x0030)
class UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C final : public USBPlayerLevelStartSequenceTaskBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimespan                              Remain_Time;                                       // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit(int32 EntryPoint);
	void PreStart();
	void OnSynced(bool bIsSyncd);
	void FinishSequence();
	class FString GetDescription();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C">();
	}
	static class UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C>();
	}
};
static_assert(alignof(UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C) == 0x000008, "Wrong alignment on UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C");
static_assert(sizeof(UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C) == 0x000040, "Wrong size on UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C");
static_assert(offsetof(UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C, UberGraphFrame) == 0x000030, "Member 'UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C, Remain_Time) == 0x000038, "Member 'UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C::Remain_Time' has a wrong offset!");

}

