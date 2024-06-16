#pragma once

 

// Package: SS_JankenEmote

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SS_JankenEmote.SS_JankenEmote_C
// 0x0008 (0x0040 - 0x0038)
class USS_JankenEmote_C final : public UASState_BlueprintBase
{
public:
	float                                         JankenHandRate;                                    // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;
	void ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SS_JankenEmote_C">();
	}
	static class USS_JankenEmote_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USS_JankenEmote_C>();
	}
};
static_assert(alignof(USS_JankenEmote_C) == 0x000008, "Wrong alignment on USS_JankenEmote_C");
static_assert(sizeof(USS_JankenEmote_C) == 0x000040, "Wrong size on USS_JankenEmote_C");
static_assert(offsetof(USS_JankenEmote_C, JankenHandRate) == 0x000038, "Member 'USS_JankenEmote_C::JankenHandRate' has a wrong offset!");

}

