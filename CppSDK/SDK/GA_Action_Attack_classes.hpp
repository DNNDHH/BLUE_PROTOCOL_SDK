#pragma once

 

// Package: GA_Action_Attack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Action_Attack.GA_Action_Attack_C
// 0x0008 (0x0420 - 0x0418)
class UGA_Action_Attack_C final : public USBGameplayAbility_EnemyAction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0418(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Action_Attack(int32 EntryPoint);
	void SubCommand();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void EventReceived_D04A5F7146685BC738583AA5F1379270(const struct FGameplayEventData& Payload);
	void EventReceived_6EF7D6834E0D17349213C7B878C9E94B(const struct FGameplayEventData& Payload);
	void OnCompleted_A44F33CB4EB8E05E9A81EBB8A3499722();
	void OnRefused_A44F33CB4EB8E05E9A81EBB8A3499722();
	void OnCancelled_A44F33CB4EB8E05E9A81EBB8A3499722();
	void OnCompleted_5CFEF54C48E99683B2F15DB38298EA15();
	void OnRefused_5CFEF54C48E99683B2F15DB38298EA15();
	void OnCancelled_5CFEF54C48E99683B2F15DB38298EA15();
	void EventReceived_CF64C8B04D1460C574E183BA1F5D33C8(const struct FGameplayEventData& Payload);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Action_Attack_C">();
	}
	static class UGA_Action_Attack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Action_Attack_C>();
	}
};
static_assert(alignof(UGA_Action_Attack_C) == 0x000008, "Wrong alignment on UGA_Action_Attack_C");
static_assert(sizeof(UGA_Action_Attack_C) == 0x000420, "Wrong size on UGA_Action_Attack_C");
static_assert(offsetof(UGA_Action_Attack_C, UberGraphFrame) == 0x000418, "Member 'UGA_Action_Attack_C::UberGraphFrame' has a wrong offset!");

}

