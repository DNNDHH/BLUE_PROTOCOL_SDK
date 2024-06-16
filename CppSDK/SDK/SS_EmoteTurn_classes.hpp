#pragma once

 

// Package: SS_EmoteTurn

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SS_EmoteTurn.SS_EmoteTurn_C
// 0x0008 (0x0040 - 0x0038)
class USS_EmoteTurn_C final : public UASState_BlueprintBase
{
public:
	float                                         TurnSpeed;                                         // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;
	void ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;
	void ReceiveEndPlay(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SS_EmoteTurn_C">();
	}
	static class USS_EmoteTurn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USS_EmoteTurn_C>();
	}
};
static_assert(alignof(USS_EmoteTurn_C) == 0x000008, "Wrong alignment on USS_EmoteTurn_C");
static_assert(sizeof(USS_EmoteTurn_C) == 0x000040, "Wrong size on USS_EmoteTurn_C");
static_assert(offsetof(USS_EmoteTurn_C, TurnSpeed) == 0x000038, "Member 'USS_EmoteTurn_C::TurnSpeed' has a wrong offset!");

}

