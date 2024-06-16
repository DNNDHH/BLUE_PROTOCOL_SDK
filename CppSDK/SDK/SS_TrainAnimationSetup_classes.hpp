#pragma once

 

// Package: SS_TrainAnimationSetup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SS_TrainAnimationSetup.SS_TrainAnimationSetup_C
// 0x0008 (0x0040 - 0x0038)
class USS_TrainAnimationSetup_C final : public UASState_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_SS_TrainAnimationSetup(int32 EntryPoint);

	void ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SS_TrainAnimationSetup_C">();
	}
	static class USS_TrainAnimationSetup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USS_TrainAnimationSetup_C>();
	}
};
static_assert(alignof(USS_TrainAnimationSetup_C) == 0x000008, "Wrong alignment on USS_TrainAnimationSetup_C");
static_assert(sizeof(USS_TrainAnimationSetup_C) == 0x000040, "Wrong size on USS_TrainAnimationSetup_C");
static_assert(offsetof(USS_TrainAnimationSetup_C, UberGraphFrame) == 0x000038, "Member 'USS_TrainAnimationSetup_C::UberGraphFrame' has a wrong offset!");

}

