#pragma once

 

// Package: AnimNotify_BP_FootPrintBase

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C
// 0x0068 (0x00E0 - 0x0078)
class UAnimNotify_BP_FootPrintBase_C : public USBAnimNotify_Footprint
{
public:
	bool                                          Zero0_SpawnON;                                     // 0x0078(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EFootPrintType                                Zero0_FootPrintType;                               // 0x0079(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFootPrintSide                                Zero0_FootSide;                                    // 0x007A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4498[0x1];                                     // 0x007B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Zero0_FootPrintLife;                               // 0x007C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Zero0_RayLength;                                   // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Zero0_RayTopLength;                                // 0x0084(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocationOffset;                                    // 0x0088(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ParticleRotationOffset;                            // 0x0094(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bUseActorRotation;                                 // 0x00A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4499[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 OverrideFootprint;                                 // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OverrideScale;                                     // 0x00B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   OverrideSocketName;                                // 0x00B4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_449A[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Zero0_SocketName;                                  // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	float                                         OverrideEffectDelay;                               // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OverrideSoundDelay;                                // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDisableEffect;                                    // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bDisableSound;                                     // 0x00D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bAsync;                                            // 0x00DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;
	void CreateFootprint(class USBSurfaceFootprintSetting* FootprintSetting, class AActor* Actor, class USBFootprintComponent* FPComponent, uint8 SurfaceType, const struct FVector& Location, const struct FRotator& Rotation) const;
	void Proc(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;
	void GetFootprintType(class USBFootprintComponent* FPComponent, EFootPrintType* FootPrintType) const;
	void GetSocketName(class USBFootprintComponent* FPComponent, class FName* SocketName) const;
	bool IsDisableEffect() const;
	bool IsDisableSound() const;
	bool IsLocomotion() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_BP_FootPrintBase_C">();
	}
	static class UAnimNotify_BP_FootPrintBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_BP_FootPrintBase_C>();
	}
};
static_assert(alignof(UAnimNotify_BP_FootPrintBase_C) == 0x000008, "Wrong alignment on UAnimNotify_BP_FootPrintBase_C");
static_assert(sizeof(UAnimNotify_BP_FootPrintBase_C) == 0x0000E0, "Wrong size on UAnimNotify_BP_FootPrintBase_C");
static_assert(offsetof(UAnimNotify_BP_FootPrintBase_C, Zero0_SpawnON) == 0x000078, "Member 'UAnimNotify_BP_FootPrintBase_C::Zero0_SpawnON' has a wrong offset!");
static_assert(offsetof(UAnimNotify_BP_FootPrintBase_C, Zero0_FootPrintType) == 0x000079, "Member 'UAnimNotify_BP_FootPrintBase_C::Zero0_FootPrintType' has a wrong offset!");
static_assert(offsetof(UAnimNotify_BP_FootPrintBase_C, Zero0_FootSide) == 0x00007A, "Member 'UAnimNotify_BP_FootPrintBase_C::Zero0_FootSide' has a wrong offset!");
static_assert(offsetof(UAnimNotify_BP_FootPrintBase_C, Zero0_FootPrintLife) == 0x00007C, "Member 'UAnimNotify_BP_FootPrintBase_C::Zero0_FootPrintLife' has a wrong offset!");
static_assert(offsetof(UAnimNotify_BP_FootPrintBase_C, Zero0_RayLength) == 0x000080, "Member 'UAnimNotify_BP_FootPrintBase_C::Zero0_RayLength' has a wrong offset!");
static_assert(offsetof(UAnimNotify_BP_FootPrintBase_C, Zero0_RayTopLength) == 0x000084, "Member 'UAnimNotify_BP_FootPrintBase_C::Zero0_RayTopLength' has a wrong offset!");
static_assert(offsetof(UAnimNotify_BP_FootPrintBase_C, LocationOffset) == 0x000088, "Member 'UAnimNotify_BP_FootPrintBase_C::LocationOffset' has a wrong offset!");
static_assert(offsetof(UAnimNotify_BP_FootPrintBase_C, ParticleRotationOffset) == 0x000094, "Member 'UAnimNotify_BP_FootPrintBase_C::ParticleRotationOffset' has a wrong offset!");
static_assert(offsetof(UAnimNotify_BP_FootPrintBase_C, bUseActorRotation) == 0x0000A0, "Member 'UAnimNotify_BP_FootPrintBase_C::bUseActorRotation' has a wrong offset!");
static_assert(offsetof(UAnimNotify_BP_FootPrintBase_C, OverrideFootprint) == 0x0000A8, "Member 'UAnimNotify_BP_FootPrintBase_C::OverrideFootprint' has a wrong offset!");
static_assert(offsetof(UAnimNotify_BP_FootPrintBase_C, OverrideScale) == 0x0000B0, "Member 'UAnimNotify_BP_FootPrintBase_C::OverrideScale' has a wrong offset!");
static_assert(offsetof(UAnimNotify_BP_FootPrintBase_C, OverrideSocketName) == 0x0000B4, "Member 'UAnimNotify_BP_FootPrintBase_C::OverrideSocketName' has a wrong offset!");
static_assert(offsetof(UAnimNotify_BP_FootPrintBase_C, Zero0_SocketName) == 0x0000C0, "Member 'UAnimNotify_BP_FootPrintBase_C::Zero0_SocketName' has a wrong offset!");
static_assert(offsetof(UAnimNotify_BP_FootPrintBase_C, OverrideEffectDelay) == 0x0000D0, "Member 'UAnimNotify_BP_FootPrintBase_C::OverrideEffectDelay' has a wrong offset!");
static_assert(offsetof(UAnimNotify_BP_FootPrintBase_C, OverrideSoundDelay) == 0x0000D4, "Member 'UAnimNotify_BP_FootPrintBase_C::OverrideSoundDelay' has a wrong offset!");
static_assert(offsetof(UAnimNotify_BP_FootPrintBase_C, bDisableEffect) == 0x0000D8, "Member 'UAnimNotify_BP_FootPrintBase_C::bDisableEffect' has a wrong offset!");
static_assert(offsetof(UAnimNotify_BP_FootPrintBase_C, bDisableSound) == 0x0000D9, "Member 'UAnimNotify_BP_FootPrintBase_C::bDisableSound' has a wrong offset!");
static_assert(offsetof(UAnimNotify_BP_FootPrintBase_C, bAsync) == 0x0000DA, "Member 'UAnimNotify_BP_FootPrintBase_C::bAsync' has a wrong offset!");

}

