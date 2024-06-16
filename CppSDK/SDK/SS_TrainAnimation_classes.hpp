#pragma once

 

// Package: SS_TrainAnimation

#include "Basic.hpp"

#include "SS_SyncAnimation_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass SS_TrainAnimation.SS_TrainAnimation_C
// 0x0010 (0x0070 - 0x0060)
class USS_TrainAnimation_C final : public USS_SyncAnimation_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_SS_TrainAnimation_C;                // 0x0060(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         TrainStepNum;                                      // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SS_TrainAnimation(int32 EntryPoint);

	void ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;
	void ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;
	void ReceiveEndPlay(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SS_TrainAnimation_C">();
	}
	static class USS_TrainAnimation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USS_TrainAnimation_C>();
	}
};
static_assert(alignof(USS_TrainAnimation_C) == 0x000008, "Wrong alignment on USS_TrainAnimation_C");
static_assert(sizeof(USS_TrainAnimation_C) == 0x000070, "Wrong size on USS_TrainAnimation_C");
static_assert(offsetof(USS_TrainAnimation_C, UberGraphFrame_SS_TrainAnimation_C) == 0x000060, "Member 'USS_TrainAnimation_C::UberGraphFrame_SS_TrainAnimation_C' has a wrong offset!");
static_assert(offsetof(USS_TrainAnimation_C, TrainStepNum) == 0x000068, "Member 'USS_TrainAnimation_C::TrainStepNum' has a wrong offset!");

}

