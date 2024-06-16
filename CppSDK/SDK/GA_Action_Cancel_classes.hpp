#pragma once

 

// Package: GA_Action_Cancel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Action_Cancel.GA_Action_Cancel_C
// 0x0008 (0x0420 - 0x0418)
class UGA_Action_Cancel_C final : public USBGameplayAbility_EnemyAction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0418(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Action_Cancel(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void EventReceived_24E51A6C4D943FA7BDB7EDBA7086404A(const struct FGameplayEventData& Payload);
	void EventReceived_B985FB814EB02487BF36918A821F5C0C(const struct FGameplayEventData& Payload);
	void OnCompleted_4565D44A40D52A401330AE96906B75A0();
	void OnRefused_4565D44A40D52A401330AE96906B75A0();
	void OnCancelled_4565D44A40D52A401330AE96906B75A0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Action_Cancel_C">();
	}
	static class UGA_Action_Cancel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Action_Cancel_C>();
	}
};
static_assert(alignof(UGA_Action_Cancel_C) == 0x000008, "Wrong alignment on UGA_Action_Cancel_C");
static_assert(sizeof(UGA_Action_Cancel_C) == 0x000420, "Wrong size on UGA_Action_Cancel_C");
static_assert(offsetof(UGA_Action_Cancel_C, UberGraphFrame) == 0x000418, "Member 'UGA_Action_Cancel_C::UberGraphFrame' has a wrong offset!");

}

