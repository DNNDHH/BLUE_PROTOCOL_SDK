#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage.BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C
// 0x0028 (0x0058 - 0x0030)
class UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C final : public USBPlayerLevelStartSequenceTaskBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FSBActiveItemData>              Items;                                             // 0x0038(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AHUD*                                   HUD;                                               // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerStorageComponent*              StorageComponent;                                  // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage(int32 EntryPoint);
	void Start();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C">();
	}
	static class UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C>();
	}
};
static_assert(alignof(UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C) == 0x000008, "Wrong alignment on UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C");
static_assert(sizeof(UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C) == 0x000058, "Wrong size on UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C, UberGraphFrame) == 0x000030, "Member 'UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C, Items) == 0x000038, "Member 'UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C::Items' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C, HUD) == 0x000048, "Member 'UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C::HUD' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C, StorageComponent) == 0x000050, "Member 'UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C::StorageComponent' has a wrong offset!");

}

