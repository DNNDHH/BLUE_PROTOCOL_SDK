#pragma once

 

// Package: SS_EmoteAction

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SS_EmoteAction.SS_EmoteAction_C
// 0x0000 (0x0038 - 0x0038)
class USS_EmoteAction_C final : public UASState_BlueprintBase
{
public:
	void ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SS_EmoteAction_C">();
	}
	static class USS_EmoteAction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USS_EmoteAction_C>();
	}
};
static_assert(alignof(USS_EmoteAction_C) == 0x000008, "Wrong alignment on USS_EmoteAction_C");
static_assert(sizeof(USS_EmoteAction_C) == 0x000038, "Wrong size on USS_EmoteAction_C");

}

