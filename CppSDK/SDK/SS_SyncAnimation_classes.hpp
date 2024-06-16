#pragma once

 

// Package: SS_SyncAnimation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SS_SyncAnimation.SS_SyncAnimation_C
// 0x0028 (0x0060 - 0x0038)
class USS_SyncAnimation_C : public UASState_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         BasePlayRate;                                      // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PlayRateAdjustMax;                                 // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PlayRateAdjustMin;                                 // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EasingTime;                                        // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SyncShiftTime;                                     // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71CB[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            SyncRateCurve;                                     // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SS_SyncAnimation(int32 EntryPoint);

	void ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;
	void ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;
	void ReceiveEndPlay(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SS_SyncAnimation_C">();
	}
	static class USS_SyncAnimation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USS_SyncAnimation_C>();
	}
};
static_assert(alignof(USS_SyncAnimation_C) == 0x000008, "Wrong alignment on USS_SyncAnimation_C");
static_assert(sizeof(USS_SyncAnimation_C) == 0x000060, "Wrong size on USS_SyncAnimation_C");
static_assert(offsetof(USS_SyncAnimation_C, UberGraphFrame) == 0x000038, "Member 'USS_SyncAnimation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USS_SyncAnimation_C, BasePlayRate) == 0x000040, "Member 'USS_SyncAnimation_C::BasePlayRate' has a wrong offset!");
static_assert(offsetof(USS_SyncAnimation_C, PlayRateAdjustMax) == 0x000044, "Member 'USS_SyncAnimation_C::PlayRateAdjustMax' has a wrong offset!");
static_assert(offsetof(USS_SyncAnimation_C, PlayRateAdjustMin) == 0x000048, "Member 'USS_SyncAnimation_C::PlayRateAdjustMin' has a wrong offset!");
static_assert(offsetof(USS_SyncAnimation_C, EasingTime) == 0x00004C, "Member 'USS_SyncAnimation_C::EasingTime' has a wrong offset!");
static_assert(offsetof(USS_SyncAnimation_C, SyncShiftTime) == 0x000050, "Member 'USS_SyncAnimation_C::SyncShiftTime' has a wrong offset!");
static_assert(offsetof(USS_SyncAnimation_C, SyncRateCurve) == 0x000058, "Member 'USS_SyncAnimation_C::SyncRateCurve' has a wrong offset!");

}

