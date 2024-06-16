#pragma once

 

// Package: SS_NPC_WalkRun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SS_NPC_WalkRun.SS_NPC_WalkRun_C
// 0x0020 (0x0060 - 0x0040)
class USS_NPC_WalkRun_C final : public USBCustomState_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0040(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         MotionMaxSpeed;                                    // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MotionMinSpeed;                                    // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinBlendRate;                                      // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StopSpeed;                                         // 0x0054(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ChangeFrontSpeed;                                  // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoWalkRun;                                         // 0x005C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_SS_NPC_WalkRun(int32 EntryPoint);
	void FNC_GetBSFront(class USBCharacterAnimInstance* NpcAnim, float FrontVelocity, float DeltaSec, float* BS_Front);

	void ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;
	void ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SS_NPC_WalkRun_C">();
	}
	static class USS_NPC_WalkRun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USS_NPC_WalkRun_C>();
	}
};
static_assert(alignof(USS_NPC_WalkRun_C) == 0x000008, "Wrong alignment on USS_NPC_WalkRun_C");
static_assert(sizeof(USS_NPC_WalkRun_C) == 0x000060, "Wrong size on USS_NPC_WalkRun_C");
static_assert(offsetof(USS_NPC_WalkRun_C, UberGraphFrame) == 0x000040, "Member 'USS_NPC_WalkRun_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USS_NPC_WalkRun_C, MotionMaxSpeed) == 0x000048, "Member 'USS_NPC_WalkRun_C::MotionMaxSpeed' has a wrong offset!");
static_assert(offsetof(USS_NPC_WalkRun_C, MotionMinSpeed) == 0x00004C, "Member 'USS_NPC_WalkRun_C::MotionMinSpeed' has a wrong offset!");
static_assert(offsetof(USS_NPC_WalkRun_C, MinBlendRate) == 0x000050, "Member 'USS_NPC_WalkRun_C::MinBlendRate' has a wrong offset!");
static_assert(offsetof(USS_NPC_WalkRun_C, StopSpeed) == 0x000054, "Member 'USS_NPC_WalkRun_C::StopSpeed' has a wrong offset!");
static_assert(offsetof(USS_NPC_WalkRun_C, ChangeFrontSpeed) == 0x000058, "Member 'USS_NPC_WalkRun_C::ChangeFrontSpeed' has a wrong offset!");
static_assert(offsetof(USS_NPC_WalkRun_C, NoWalkRun) == 0x00005C, "Member 'USS_NPC_WalkRun_C::NoWalkRun' has a wrong offset!");

}

