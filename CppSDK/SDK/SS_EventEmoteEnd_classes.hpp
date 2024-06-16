#pragma once

 

// Package: SS_EventEmoteEnd

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SS_EventEmoteEnd.SS_EventEmoteEnd_C
// 0x0008 (0x0040 - 0x0038)
class USS_EventEmoteEnd_C final : public UASState_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_SS_EventEmoteEnd(int32 EntryPoint);

	void ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;
	void ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;
	void ReceiveEndPlay(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SS_EventEmoteEnd_C">();
	}
	static class USS_EventEmoteEnd_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USS_EventEmoteEnd_C>();
	}
};
static_assert(alignof(USS_EventEmoteEnd_C) == 0x000008, "Wrong alignment on USS_EventEmoteEnd_C");
static_assert(sizeof(USS_EventEmoteEnd_C) == 0x000040, "Wrong size on USS_EventEmoteEnd_C");
static_assert(offsetof(USS_EventEmoteEnd_C, UberGraphFrame) == 0x000038, "Member 'USS_EventEmoteEnd_C::UberGraphFrame' has a wrong offset!");

}

