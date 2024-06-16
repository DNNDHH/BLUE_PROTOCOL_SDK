#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskNotificationMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskNotificationMenu.BP_PlayerLevelStartSequenceTaskNotificationMenu_C
// 0x0028 (0x0058 - 0x0030)
class UBP_PlayerLevelStartSequenceTaskNotificationMenu_C final : public USBPlayerLevelStartSequenceTaskBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBNotificationMenu*                    NotificationWindow;                                // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    PlayerController;                                  // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCharacterCommonComponent*      CommonComponent;                                   // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDebug;                                           // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu(int32 EntryPoint);
	void NotificationLoaded(bool Result);
	void OnFinishEvent();
	void FinishTaskEvent();
	void Start();
	void OnLoaded_955FE1A0452B9F2013DC63A7677EFD85(TSubclassOf<class UObject> Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerLevelStartSequenceTaskNotificationMenu_C">();
	}
	static class UBP_PlayerLevelStartSequenceTaskNotificationMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerLevelStartSequenceTaskNotificationMenu_C>();
	}
};
static_assert(alignof(UBP_PlayerLevelStartSequenceTaskNotificationMenu_C) == 0x000008, "Wrong alignment on UBP_PlayerLevelStartSequenceTaskNotificationMenu_C");
static_assert(sizeof(UBP_PlayerLevelStartSequenceTaskNotificationMenu_C) == 0x000058, "Wrong size on UBP_PlayerLevelStartSequenceTaskNotificationMenu_C");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskNotificationMenu_C, UberGraphFrame) == 0x000030, "Member 'UBP_PlayerLevelStartSequenceTaskNotificationMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskNotificationMenu_C, NotificationWindow) == 0x000038, "Member 'UBP_PlayerLevelStartSequenceTaskNotificationMenu_C::NotificationWindow' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskNotificationMenu_C, PlayerController) == 0x000040, "Member 'UBP_PlayerLevelStartSequenceTaskNotificationMenu_C::PlayerController' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskNotificationMenu_C, CommonComponent) == 0x000048, "Member 'UBP_PlayerLevelStartSequenceTaskNotificationMenu_C::CommonComponent' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskNotificationMenu_C, IsDebug) == 0x000050, "Member 'UBP_PlayerLevelStartSequenceTaskNotificationMenu_C::IsDebug' has a wrong offset!");

}

