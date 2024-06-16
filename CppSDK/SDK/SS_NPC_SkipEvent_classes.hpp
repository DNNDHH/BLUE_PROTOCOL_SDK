#pragma once

 

// Package: SS_NPC_SkipEvent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SS_NPC_SkipEvent.SS_NPC_SkipEvent_C
// 0x0018 (0x0058 - 0x0040)
class USS_NPC_SkipEvent_C final : public USBCustomState_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0040(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   NotSkip_Tag;                                       // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Skip_RateScale;                                    // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SS_NPC_SkipEvent(int32 EntryPoint);

	void ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;
	void ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;
	void ReceiveEndPlay(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SS_NPC_SkipEvent_C">();
	}
	static class USS_NPC_SkipEvent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USS_NPC_SkipEvent_C>();
	}
};
static_assert(alignof(USS_NPC_SkipEvent_C) == 0x000008, "Wrong alignment on USS_NPC_SkipEvent_C");
static_assert(sizeof(USS_NPC_SkipEvent_C) == 0x000058, "Wrong size on USS_NPC_SkipEvent_C");
static_assert(offsetof(USS_NPC_SkipEvent_C, UberGraphFrame) == 0x000040, "Member 'USS_NPC_SkipEvent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USS_NPC_SkipEvent_C, NotSkip_Tag) == 0x000048, "Member 'USS_NPC_SkipEvent_C::NotSkip_Tag' has a wrong offset!");
static_assert(offsetof(USS_NPC_SkipEvent_C, Skip_RateScale) == 0x000050, "Member 'USS_NPC_SkipEvent_C::Skip_RateScale' has a wrong offset!");

}

