#pragma once

 

// Package: SS_ChangeAnimSpeedPassageTime

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SS_ChangeAnimSpeedPassageTime.SS_ChangeAnimSpeedPassageTime_C
// 0x0018 (0x0050 - 0x0038)
class USS_ChangeAnimSpeedPassageTime_C final : public UASState_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         EndTime;                                           // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartPlayRate;                                     // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EndPlayRate;                                       // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SS_ChangeAnimSpeedPassageTime(int32 EntryPoint);

	void ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;
	void ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;
	void ReceiveEndPlay(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SS_ChangeAnimSpeedPassageTime_C">();
	}
	static class USS_ChangeAnimSpeedPassageTime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USS_ChangeAnimSpeedPassageTime_C>();
	}
};
static_assert(alignof(USS_ChangeAnimSpeedPassageTime_C) == 0x000008, "Wrong alignment on USS_ChangeAnimSpeedPassageTime_C");
static_assert(sizeof(USS_ChangeAnimSpeedPassageTime_C) == 0x000050, "Wrong size on USS_ChangeAnimSpeedPassageTime_C");
static_assert(offsetof(USS_ChangeAnimSpeedPassageTime_C, UberGraphFrame) == 0x000038, "Member 'USS_ChangeAnimSpeedPassageTime_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USS_ChangeAnimSpeedPassageTime_C, EndTime) == 0x000040, "Member 'USS_ChangeAnimSpeedPassageTime_C::EndTime' has a wrong offset!");
static_assert(offsetof(USS_ChangeAnimSpeedPassageTime_C, StartPlayRate) == 0x000044, "Member 'USS_ChangeAnimSpeedPassageTime_C::StartPlayRate' has a wrong offset!");
static_assert(offsetof(USS_ChangeAnimSpeedPassageTime_C, EndPlayRate) == 0x000048, "Member 'USS_ChangeAnimSpeedPassageTime_C::EndPlayRate' has a wrong offset!");

}

