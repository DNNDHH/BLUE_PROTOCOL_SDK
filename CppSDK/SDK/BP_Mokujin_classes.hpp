#pragma once

 

// Package: BP_Mokujin

#include "Basic.hpp"

#include "BP_EnemyCharacter_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Mokujin.BP_Mokujin_C
// 0x0020 (0x1930 - 0x1910)
class ABP_Mokujin_C final : public ABP_EnemyCharacter_C
{
public:
	uint8                                         Pad_4BB3[0x6];                                     // 0x1902(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UASCollisionSphereComponent*            ASDamage_Head;                                     // 0x1908(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBCollisionGroupComponent*             SBCollisionGroup;                                  // 0x1910(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBCharaBodyCapsuleComponent*           SBCharaBodyCapsule;                                // 0x1918(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBTargetableComponent*                 SBTargetable;                                      // 0x1920(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UASCollisionCapsuleComponent*           ASDamage_Body;                                     // 0x1928(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	class FName GetLockOnCameraID() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Mokujin_C">();
	}
	static class ABP_Mokujin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Mokujin_C>();
	}
};
static_assert(alignof(ABP_Mokujin_C) == 0x000010, "Wrong alignment on ABP_Mokujin_C");
static_assert(sizeof(ABP_Mokujin_C) == 0x001930, "Wrong size on ABP_Mokujin_C");
static_assert(offsetof(ABP_Mokujin_C, ASDamage_Head) == 0x001908, "Member 'ABP_Mokujin_C::ASDamage_Head' has a wrong offset!");
static_assert(offsetof(ABP_Mokujin_C, SBCollisionGroup) == 0x001910, "Member 'ABP_Mokujin_C::SBCollisionGroup' has a wrong offset!");
static_assert(offsetof(ABP_Mokujin_C, SBCharaBodyCapsule) == 0x001918, "Member 'ABP_Mokujin_C::SBCharaBodyCapsule' has a wrong offset!");
static_assert(offsetof(ABP_Mokujin_C, SBTargetable) == 0x001920, "Member 'ABP_Mokujin_C::SBTargetable' has a wrong offset!");
static_assert(offsetof(ABP_Mokujin_C, ASDamage_Body) == 0x001928, "Member 'ABP_Mokujin_C::ASDamage_Body' has a wrong offset!");

}

