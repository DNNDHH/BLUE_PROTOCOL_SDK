#pragma once

 

// Package: SS_PlayerTransform_WalkRun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SS_PlayerTransform_WalkRun.SS_PlayerTransform_WalkRun_C
// 0x0008 (0x0040 - 0x0038)
class USS_PlayerTransform_WalkRun_C final : public UASState_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_SS_PlayerTransform_WalkRun(int32 EntryPoint);

	void ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SS_PlayerTransform_WalkRun_C">();
	}
	static class USS_PlayerTransform_WalkRun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USS_PlayerTransform_WalkRun_C>();
	}
};
static_assert(alignof(USS_PlayerTransform_WalkRun_C) == 0x000008, "Wrong alignment on USS_PlayerTransform_WalkRun_C");
static_assert(sizeof(USS_PlayerTransform_WalkRun_C) == 0x000040, "Wrong size on USS_PlayerTransform_WalkRun_C");
static_assert(offsetof(USS_PlayerTransform_WalkRun_C, UberGraphFrame) == 0x000038, "Member 'USS_PlayerTransform_WalkRun_C::UberGraphFrame' has a wrong offset!");

}

