#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskCharacterJoinExt

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C
// 0x0008 (0x0038 - 0x0030)
class UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C final : public USBPlayerLevelStartSequenceTaskBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt(int32 EntryPoint);
	void OnAPICompleted(int32 InRetCode);
	void TryRequestAPI();
	void Start();
	void RequestAPI_Internal(bool* bResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C">();
	}
	static class UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C>();
	}
};
static_assert(alignof(UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C) == 0x000008, "Wrong alignment on UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C");
static_assert(sizeof(UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C) == 0x000038, "Wrong size on UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C, UberGraphFrame) == 0x000030, "Member 'UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C::UberGraphFrame' has a wrong offset!");

}

