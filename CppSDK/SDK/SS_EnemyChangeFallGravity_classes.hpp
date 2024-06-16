#pragma once

 

// Package: SS_EnemyChangeFallGravity

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SS_EnemyChangeFallGravity.SS_EnemyChangeFallGravity_C
// 0x0018 (0x0050 - 0x0038)
class USS_EnemyChangeFallGravity_C final : public UASState_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         DefaultGravity;                                    // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Start_VelocityZ;                                   // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         End_VelocityZ;                                     // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Top_Gravity;                                       // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SS_EnemyChangeFallGravity(int32 EntryPoint);

	void ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;
	void ReceiveEndPlay(class UAnimInstance* AnimInstance) const;
	void ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SS_EnemyChangeFallGravity_C">();
	}
	static class USS_EnemyChangeFallGravity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USS_EnemyChangeFallGravity_C>();
	}
};
static_assert(alignof(USS_EnemyChangeFallGravity_C) == 0x000008, "Wrong alignment on USS_EnemyChangeFallGravity_C");
static_assert(sizeof(USS_EnemyChangeFallGravity_C) == 0x000050, "Wrong size on USS_EnemyChangeFallGravity_C");
static_assert(offsetof(USS_EnemyChangeFallGravity_C, UberGraphFrame) == 0x000038, "Member 'USS_EnemyChangeFallGravity_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USS_EnemyChangeFallGravity_C, DefaultGravity) == 0x000040, "Member 'USS_EnemyChangeFallGravity_C::DefaultGravity' has a wrong offset!");
static_assert(offsetof(USS_EnemyChangeFallGravity_C, Start_VelocityZ) == 0x000044, "Member 'USS_EnemyChangeFallGravity_C::Start_VelocityZ' has a wrong offset!");
static_assert(offsetof(USS_EnemyChangeFallGravity_C, End_VelocityZ) == 0x000048, "Member 'USS_EnemyChangeFallGravity_C::End_VelocityZ' has a wrong offset!");
static_assert(offsetof(USS_EnemyChangeFallGravity_C, Top_Gravity) == 0x00004C, "Member 'USS_EnemyChangeFallGravity_C::Top_Gravity' has a wrong offset!");

}

