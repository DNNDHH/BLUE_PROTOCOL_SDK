#pragma once

 

// Package: GA_Action_Movement

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Action_Movement.GA_Action_Movement_C
// 0x0008 (0x0420 - 0x0418)
class UGA_Action_Movement_C final : public USBGameplayAbility_EnemyAction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0418(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Action_Movement(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void EventReceived_DDC49E4D4373DEBC9BDCBE863747A93E(const struct FGameplayEventData& Payload);
	void OnCompleted_F0A7509B4F9F16E6439C7895753943AC();
	void OnRefused_F0A7509B4F9F16E6439C7895753943AC();
	void OnCancelled_F0A7509B4F9F16E6439C7895753943AC();
	void EventReceived_DC6488B9460FBDBF1C592493913CCCF7(const struct FGameplayEventData& Payload);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Action_Movement_C">();
	}
	static class UGA_Action_Movement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Action_Movement_C>();
	}
};
static_assert(alignof(UGA_Action_Movement_C) == 0x000008, "Wrong alignment on UGA_Action_Movement_C");
static_assert(sizeof(UGA_Action_Movement_C) == 0x000420, "Wrong size on UGA_Action_Movement_C");
static_assert(offsetof(UGA_Action_Movement_C, UberGraphFrame) == 0x000418, "Member 'UGA_Action_Movement_C::UberGraphFrame' has a wrong offset!");

}

