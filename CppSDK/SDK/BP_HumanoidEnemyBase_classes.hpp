#pragma once

 

// Package: BP_HumanoidEnemyBase

#include "Basic.hpp"

#include "BP_EnemyCharacter_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HumanoidEnemyBase.BP_HumanoidEnemyBase_C
// 0x0050 (0x1960 - 0x1910)
class ABP_HumanoidEnemyBase_C final : public ABP_EnemyCharacter_C
{
public:
	uint8                                         Pad_9AD9[0x6];                                     // 0x1902(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEnemySwitchWeaponAttachmentComponent* SBEnemySwitchWeaponAttachment;                     // 0x1908(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBTargetableComponent*                 SBTargetable;                                      // 0x1910(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UASCollisionSphereComponent*            ASDamage_Head;                                     // 0x1918(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBCollisionGroupComponent*             SBCollisionGroup_Weak;                             // 0x1920(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UASCollisionCapsuleComponent*           ASDamage_LegR;                                     // 0x1928(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UASCollisionCapsuleComponent*           ASDamage_LegL;                                     // 0x1930(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UASCollisionCapsuleComponent*           ASDamage_UpLegR;                                   // 0x1938(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UASCollisionCapsuleComponent*           ASDamage_UpLegL;                                   // 0x1940(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UASCollisionSphereComponent*            ASDamage_Body;                                     // 0x1948(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UASCollisionCapsuleComponent*           ASDamage_Chest;                                    // 0x1950(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBCharaBodyCapsuleComponent*           SBCharaBodyCapsule;                                // 0x1958(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	class FName GetLockOnCameraID() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HumanoidEnemyBase_C">();
	}
	static class ABP_HumanoidEnemyBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HumanoidEnemyBase_C>();
	}
};
static_assert(alignof(ABP_HumanoidEnemyBase_C) == 0x000010, "Wrong alignment on ABP_HumanoidEnemyBase_C");
static_assert(sizeof(ABP_HumanoidEnemyBase_C) == 0x001960, "Wrong size on ABP_HumanoidEnemyBase_C");
static_assert(offsetof(ABP_HumanoidEnemyBase_C, SBEnemySwitchWeaponAttachment) == 0x001908, "Member 'ABP_HumanoidEnemyBase_C::SBEnemySwitchWeaponAttachment' has a wrong offset!");
static_assert(offsetof(ABP_HumanoidEnemyBase_C, SBTargetable) == 0x001910, "Member 'ABP_HumanoidEnemyBase_C::SBTargetable' has a wrong offset!");
static_assert(offsetof(ABP_HumanoidEnemyBase_C, ASDamage_Head) == 0x001918, "Member 'ABP_HumanoidEnemyBase_C::ASDamage_Head' has a wrong offset!");
static_assert(offsetof(ABP_HumanoidEnemyBase_C, SBCollisionGroup_Weak) == 0x001920, "Member 'ABP_HumanoidEnemyBase_C::SBCollisionGroup_Weak' has a wrong offset!");
static_assert(offsetof(ABP_HumanoidEnemyBase_C, ASDamage_LegR) == 0x001928, "Member 'ABP_HumanoidEnemyBase_C::ASDamage_LegR' has a wrong offset!");
static_assert(offsetof(ABP_HumanoidEnemyBase_C, ASDamage_LegL) == 0x001930, "Member 'ABP_HumanoidEnemyBase_C::ASDamage_LegL' has a wrong offset!");
static_assert(offsetof(ABP_HumanoidEnemyBase_C, ASDamage_UpLegR) == 0x001938, "Member 'ABP_HumanoidEnemyBase_C::ASDamage_UpLegR' has a wrong offset!");
static_assert(offsetof(ABP_HumanoidEnemyBase_C, ASDamage_UpLegL) == 0x001940, "Member 'ABP_HumanoidEnemyBase_C::ASDamage_UpLegL' has a wrong offset!");
static_assert(offsetof(ABP_HumanoidEnemyBase_C, ASDamage_Body) == 0x001948, "Member 'ABP_HumanoidEnemyBase_C::ASDamage_Body' has a wrong offset!");
static_assert(offsetof(ABP_HumanoidEnemyBase_C, ASDamage_Chest) == 0x001950, "Member 'ABP_HumanoidEnemyBase_C::ASDamage_Chest' has a wrong offset!");
static_assert(offsetof(ABP_HumanoidEnemyBase_C, SBCharaBodyCapsule) == 0x001958, "Member 'ABP_HumanoidEnemyBase_C::SBCharaBodyCapsule' has a wrong offset!");

}

