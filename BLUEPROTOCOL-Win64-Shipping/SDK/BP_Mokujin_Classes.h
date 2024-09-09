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
	 * BlueprintGeneratedClass BP_Mokujin.BP_Mokujin_C
	 * Size -> 0x002E (FullSize[0x1950] - InheritedSize[0x1922])
	 */
	class ABP_Mokujin_C : public ABP_EnemyCharacter_C
	{
	public:
		unsigned char                                              UnknownData_E8X8[0x6];                                   // 0x1922(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UASCollisionSphereComponent*                         ASDamage_Head;                                           // 0x1928(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBCollisionGroupComponent*                          SBCollisionGroup;                                        // 0x1930(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBCharaBodyCapsuleComponent*                        SBCharaBodyCapsule;                                      // 0x1938(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBTargetableComponent*                              SBTargetable;                                            // 0x1940(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UASCollisionCapsuleComponent*                        ASDamage_Body;                                           // 0x1948(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		class FName GetLockOnCameraID();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
