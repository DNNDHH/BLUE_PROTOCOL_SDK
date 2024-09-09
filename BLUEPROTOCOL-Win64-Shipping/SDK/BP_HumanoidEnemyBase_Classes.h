#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_HumanoidEnemyBase.BP_HumanoidEnemyBase_C
	 * Size -> 0x005E (FullSize[0x1980] - InheritedSize[0x1922])
	 */
	class ABP_HumanoidEnemyBase_C : public ABP_EnemyCharacter_C
	{
	public:
		unsigned char                                              UnknownData_MT8V[0x6];                                   // 0x1922(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USBEnemySwitchWeaponAttachmentComponent*             SBEnemySwitchWeaponAttachment;                           // 0x1928(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBTargetableComponent*                              SBTargetable;                                            // 0x1930(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UASCollisionSphereComponent*                         ASDamage_Head;                                           // 0x1938(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBCollisionGroupComponent*                          SBCollisionGroup_Weak;                                   // 0x1940(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UASCollisionCapsuleComponent*                        ASDamage_LegR;                                           // 0x1948(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UASCollisionCapsuleComponent*                        ASDamage_LegL;                                           // 0x1950(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UASCollisionCapsuleComponent*                        ASDamage_UpLegR;                                         // 0x1958(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UASCollisionCapsuleComponent*                        ASDamage_UpLegL;                                         // 0x1960(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UASCollisionSphereComponent*                         ASDamage_Body;                                           // 0x1968(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UASCollisionCapsuleComponent*                        ASDamage_Chest;                                          // 0x1970(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBCharaBodyCapsuleComponent*                        SBCharaBodyCapsule;                                      // 0x1978(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		class FName GetLockOnCameraID();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
