#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard.BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C
// 0x0008 (0x0038 - 0x0030)
class UBP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C final : public USBPlayerLevelStartSequenceTaskBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard(int32 EntryPoint);
	void OnRankupCompleteDelegete_Event(int32 InRetCode);
	void Start();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C">();
	}
	static class UBP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C>();
	}
};
static_assert(alignof(UBP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C) == 0x000008, "Wrong alignment on UBP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C");
static_assert(sizeof(UBP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C) == 0x000038, "Wrong size on UBP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C, UberGraphFrame) == 0x000030, "Member 'UBP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C::UberGraphFrame' has a wrong offset!");

}
