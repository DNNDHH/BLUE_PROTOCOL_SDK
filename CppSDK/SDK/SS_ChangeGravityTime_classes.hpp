#pragma once

 

// Package: SS_ChangeGravityTime

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SS_ChangeGravityTime.SS_ChangeGravityTime_C
// 0x0018 (0x0050 - 0x0038)
class USS_ChangeGravityTime_C final : public UASState_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Start_Gravity;                                     // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         End_Gravity;                                       // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         End_Time;                                          // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SS_ChangeGravityTime(int32 EntryPoint);

	void ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;
	void ReceiveEndPlay(class UAnimInstance* AnimInstance) const;
	void ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SS_ChangeGravityTime_C">();
	}
	static class USS_ChangeGravityTime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USS_ChangeGravityTime_C>();
	}
};
static_assert(alignof(USS_ChangeGravityTime_C) == 0x000008, "Wrong alignment on USS_ChangeGravityTime_C");
static_assert(sizeof(USS_ChangeGravityTime_C) == 0x000050, "Wrong size on USS_ChangeGravityTime_C");
static_assert(offsetof(USS_ChangeGravityTime_C, UberGraphFrame) == 0x000038, "Member 'USS_ChangeGravityTime_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USS_ChangeGravityTime_C, Start_Gravity) == 0x000040, "Member 'USS_ChangeGravityTime_C::Start_Gravity' has a wrong offset!");
static_assert(offsetof(USS_ChangeGravityTime_C, End_Gravity) == 0x000044, "Member 'USS_ChangeGravityTime_C::End_Gravity' has a wrong offset!");
static_assert(offsetof(USS_ChangeGravityTime_C, End_Time) == 0x000048, "Member 'USS_ChangeGravityTime_C::End_Time' has a wrong offset!");

}

