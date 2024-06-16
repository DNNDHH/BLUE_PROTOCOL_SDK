#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C
// 0x0010 (0x0040 - 0x0030)
class UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C final : public USBPlayerLevelStartSequenceTaskBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          bAPIRequested;                                     // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NewVar_0;                                          // 0x0039(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty(int32 EntryPoint);
	void OnReturnDisconnectedPartyComplete_Event(const bool bWasSuccessful, const int32 ReturnPartyResultMessageIndex);
	void EndTask();
	void Start();
	void RequestGetBagItems_API(bool* bResult);
	void GetStorageComponent(class USBPlayerStorageComponent** StorageComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C">();
	}
	static class UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C>();
	}
};
static_assert(alignof(UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C) == 0x000008, "Wrong alignment on UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C");
static_assert(sizeof(UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C) == 0x000040, "Wrong size on UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C, UberGraphFrame) == 0x000030, "Member 'UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C, bAPIRequested) == 0x000038, "Member 'UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C::bAPIRequested' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C, NewVar_0) == 0x000039, "Member 'UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C::NewVar_0' has a wrong offset!");

}

