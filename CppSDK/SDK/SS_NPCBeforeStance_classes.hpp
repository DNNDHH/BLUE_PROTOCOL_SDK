#pragma once

 

// Package: SS_NPCBeforeStance

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SS_NPCBeforeStance.SS_NPCBeforeStance_C
// 0x0010 (0x0050 - 0x0040)
class USS_NPCBeforeStance_C final : public USBCustomState_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0040(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   BeforeStance;                                      // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SS_NPCBeforeStance(int32 EntryPoint);

	void ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SS_NPCBeforeStance_C">();
	}
	static class USS_NPCBeforeStance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USS_NPCBeforeStance_C>();
	}
};
static_assert(alignof(USS_NPCBeforeStance_C) == 0x000008, "Wrong alignment on USS_NPCBeforeStance_C");
static_assert(sizeof(USS_NPCBeforeStance_C) == 0x000050, "Wrong size on USS_NPCBeforeStance_C");
static_assert(offsetof(USS_NPCBeforeStance_C, UberGraphFrame) == 0x000040, "Member 'USS_NPCBeforeStance_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USS_NPCBeforeStance_C, BeforeStance) == 0x000048, "Member 'USS_NPCBeforeStance_C::BeforeStance' has a wrong offset!");

}

