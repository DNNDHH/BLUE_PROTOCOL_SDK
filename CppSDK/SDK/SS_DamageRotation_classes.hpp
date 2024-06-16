#pragma once

 

// Package: SS_DamageRotation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ActionSystem_classes.hpp"
#include "E_Damaged_ChangeDir_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass SS_DamageRotation.SS_DamageRotation_C
// 0x0028 (0x0060 - 0x0038)
class USS_DamageRotation_C final : public UASState_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	E_Damaged_ChangeDir                           Direction;                                         // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Launch;                                         // 0x0041(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F13[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Launch_Z;                                          // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Launch_XY;                                         // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Launch_Gravity;                                    // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRotator>                       AddRotations;                                      // 0x0050(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_SS_DamageRotation(int32 EntryPoint);

	void ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;
	void ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;
	void ReceiveEndPlay(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SS_DamageRotation_C">();
	}
	static class USS_DamageRotation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USS_DamageRotation_C>();
	}
};
static_assert(alignof(USS_DamageRotation_C) == 0x000008, "Wrong alignment on USS_DamageRotation_C");
static_assert(sizeof(USS_DamageRotation_C) == 0x000060, "Wrong size on USS_DamageRotation_C");
static_assert(offsetof(USS_DamageRotation_C, UberGraphFrame) == 0x000038, "Member 'USS_DamageRotation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USS_DamageRotation_C, Direction) == 0x000040, "Member 'USS_DamageRotation_C::Direction' has a wrong offset!");
static_assert(offsetof(USS_DamageRotation_C, Is_Launch) == 0x000041, "Member 'USS_DamageRotation_C::Is_Launch' has a wrong offset!");
static_assert(offsetof(USS_DamageRotation_C, Launch_Z) == 0x000044, "Member 'USS_DamageRotation_C::Launch_Z' has a wrong offset!");
static_assert(offsetof(USS_DamageRotation_C, Launch_XY) == 0x000048, "Member 'USS_DamageRotation_C::Launch_XY' has a wrong offset!");
static_assert(offsetof(USS_DamageRotation_C, Launch_Gravity) == 0x00004C, "Member 'USS_DamageRotation_C::Launch_Gravity' has a wrong offset!");
static_assert(offsetof(USS_DamageRotation_C, AddRotations) == 0x000050, "Member 'USS_DamageRotation_C::AddRotations' has a wrong offset!");

}

