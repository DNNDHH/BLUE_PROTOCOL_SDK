#pragma once

 

// Package: SS_EmoteByCampFire

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SS_EmoteByCampFire.SS_EmoteByCampFire_C
// 0x0018 (0x0050 - 0x0038)
class USS_EmoteByCampFire_C final : public UASState_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         BeforeCampCollisionCount;                          // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9AE5[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBCharacter*                           _____;                                             // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SS_EmoteByCampFire(int32 EntryPoint);
	void CheckCampFireUsed(bool Flag, bool* CheckResult);

	void ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SS_EmoteByCampFire_C">();
	}
	static class USS_EmoteByCampFire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USS_EmoteByCampFire_C>();
	}
};
static_assert(alignof(USS_EmoteByCampFire_C) == 0x000008, "Wrong alignment on USS_EmoteByCampFire_C");
static_assert(sizeof(USS_EmoteByCampFire_C) == 0x000050, "Wrong size on USS_EmoteByCampFire_C");
static_assert(offsetof(USS_EmoteByCampFire_C, UberGraphFrame) == 0x000038, "Member 'USS_EmoteByCampFire_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USS_EmoteByCampFire_C, BeforeCampCollisionCount) == 0x000040, "Member 'USS_EmoteByCampFire_C::BeforeCampCollisionCount' has a wrong offset!");
static_assert(offsetof(USS_EmoteByCampFire_C, _____) == 0x000048, "Member 'USS_EmoteByCampFire_C::_____' has a wrong offset!");

}

