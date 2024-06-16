#pragma once

 

// Package: BP_WeaponForCapture

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WeaponForCapture.BP_WeaponForCapture_C
// 0x0030 (0x0258 - 0x0228)
class ABP_WeaponForCapture_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBCharaPartsComponent*                 SBCharaParts;                                      // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Pivot;                                             // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SkeletalMeshDefaultLocation;                       // 0x0248(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_WeaponForCapture(int32 EntryPoint);
	void SetWeaponMesh(class ASBWeapon* InWeapon, const struct FRotator& InRotation);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WeaponForCapture_C">();
	}
	static class ABP_WeaponForCapture_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WeaponForCapture_C>();
	}
};
static_assert(alignof(ABP_WeaponForCapture_C) == 0x000008, "Wrong alignment on ABP_WeaponForCapture_C");
static_assert(sizeof(ABP_WeaponForCapture_C) == 0x000258, "Wrong size on ABP_WeaponForCapture_C");
static_assert(offsetof(ABP_WeaponForCapture_C, UberGraphFrame) == 0x000228, "Member 'ABP_WeaponForCapture_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_WeaponForCapture_C, SBCharaParts) == 0x000230, "Member 'ABP_WeaponForCapture_C::SBCharaParts' has a wrong offset!");
static_assert(offsetof(ABP_WeaponForCapture_C, Pivot) == 0x000238, "Member 'ABP_WeaponForCapture_C::Pivot' has a wrong offset!");
static_assert(offsetof(ABP_WeaponForCapture_C, DefaultSceneRoot) == 0x000240, "Member 'ABP_WeaponForCapture_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_WeaponForCapture_C, SkeletalMeshDefaultLocation) == 0x000248, "Member 'ABP_WeaponForCapture_C::SkeletalMeshDefaultLocation' has a wrong offset!");

}

