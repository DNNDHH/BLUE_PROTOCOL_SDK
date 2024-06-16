#pragma once

 

// Package: CableComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class CableComponent.CableActor
// 0x0008 (0x0230 - 0x0228)
class ACableActor final : public AActor
{
public:
	class UCableComponent*                        CableComponent;                                    // 0x0228(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CableActor">();
	}
	static class ACableActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACableActor>();
	}
};
static_assert(alignof(ACableActor) == 0x000008, "Wrong alignment on ACableActor");
static_assert(sizeof(ACableActor) == 0x000230, "Wrong size on ACableActor");
static_assert(offsetof(ACableActor, CableComponent) == 0x000228, "Member 'ACableActor::CableComponent' has a wrong offset!");

// Class CableComponent.CableComponent
// 0x0090 (0x0520 - 0x0490)
class UCableComponent final : public UMeshComponent
{
public:
	bool                                          bAttachStart;                                      // 0x0490(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAttachEnd;                                        // 0x0491(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1F43[0x6];                                     // 0x0492(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FComponentReference                    AttachEndTo;                                       // 0x0498(0x0028)(Edit, NativeAccessSpecifierPublic)
	class FName                                   AttachEndToSocketName;                             // 0x04C0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                EndLocation;                                       // 0x04C8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CableLength;                                       // 0x04D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumSegments;                                       // 0x04D8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SubstepTime;                                       // 0x04DC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SolverIterations;                                  // 0x04E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableStiffness;                                  // 0x04E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseSubstepping;                                   // 0x04E5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSkipCableUpdateWhenNotVisible;                    // 0x04E6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSkipCableUpdateWhenNotOwnerRecentlyRendered;      // 0x04E7(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableCollision;                                  // 0x04E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1F44[0x3];                                     // 0x04E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CollisionFriction;                                 // 0x04EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                CableForce;                                        // 0x04F0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CableGravityScale;                                 // 0x04FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CableWidth;                                        // 0x0500(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumSides;                                          // 0x0504(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TileMaterial;                                      // 0x0508(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1F45[0x14];                                    // 0x050C(0x0014)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetAttachEndTo(class AActor* Actor, class FName ComponentProperty, class FName SocketName);
	void SetAttachEndToComponent(class USceneComponent* Component, class FName SocketName);

	class AActor* GetAttachedActor() const;
	class USceneComponent* GetAttachedComponent() const;
	void GetCableParticleLocations(TArray<struct FVector>* Locations) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CableComponent">();
	}
	static class UCableComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCableComponent>();
	}
};
static_assert(alignof(UCableComponent) == 0x000010, "Wrong alignment on UCableComponent");
static_assert(sizeof(UCableComponent) == 0x000520, "Wrong size on UCableComponent");
static_assert(offsetof(UCableComponent, bAttachStart) == 0x000490, "Member 'UCableComponent::bAttachStart' has a wrong offset!");
static_assert(offsetof(UCableComponent, bAttachEnd) == 0x000491, "Member 'UCableComponent::bAttachEnd' has a wrong offset!");
static_assert(offsetof(UCableComponent, AttachEndTo) == 0x000498, "Member 'UCableComponent::AttachEndTo' has a wrong offset!");
static_assert(offsetof(UCableComponent, AttachEndToSocketName) == 0x0004C0, "Member 'UCableComponent::AttachEndToSocketName' has a wrong offset!");
static_assert(offsetof(UCableComponent, EndLocation) == 0x0004C8, "Member 'UCableComponent::EndLocation' has a wrong offset!");
static_assert(offsetof(UCableComponent, CableLength) == 0x0004D4, "Member 'UCableComponent::CableLength' has a wrong offset!");
static_assert(offsetof(UCableComponent, NumSegments) == 0x0004D8, "Member 'UCableComponent::NumSegments' has a wrong offset!");
static_assert(offsetof(UCableComponent, SubstepTime) == 0x0004DC, "Member 'UCableComponent::SubstepTime' has a wrong offset!");
static_assert(offsetof(UCableComponent, SolverIterations) == 0x0004E0, "Member 'UCableComponent::SolverIterations' has a wrong offset!");
static_assert(offsetof(UCableComponent, bEnableStiffness) == 0x0004E4, "Member 'UCableComponent::bEnableStiffness' has a wrong offset!");
static_assert(offsetof(UCableComponent, bUseSubstepping) == 0x0004E5, "Member 'UCableComponent::bUseSubstepping' has a wrong offset!");
static_assert(offsetof(UCableComponent, bSkipCableUpdateWhenNotVisible) == 0x0004E6, "Member 'UCableComponent::bSkipCableUpdateWhenNotVisible' has a wrong offset!");
static_assert(offsetof(UCableComponent, bSkipCableUpdateWhenNotOwnerRecentlyRendered) == 0x0004E7, "Member 'UCableComponent::bSkipCableUpdateWhenNotOwnerRecentlyRendered' has a wrong offset!");
static_assert(offsetof(UCableComponent, bEnableCollision) == 0x0004E8, "Member 'UCableComponent::bEnableCollision' has a wrong offset!");
static_assert(offsetof(UCableComponent, CollisionFriction) == 0x0004EC, "Member 'UCableComponent::CollisionFriction' has a wrong offset!");
static_assert(offsetof(UCableComponent, CableForce) == 0x0004F0, "Member 'UCableComponent::CableForce' has a wrong offset!");
static_assert(offsetof(UCableComponent, CableGravityScale) == 0x0004FC, "Member 'UCableComponent::CableGravityScale' has a wrong offset!");
static_assert(offsetof(UCableComponent, CableWidth) == 0x000500, "Member 'UCableComponent::CableWidth' has a wrong offset!");
static_assert(offsetof(UCableComponent, NumSides) == 0x000504, "Member 'UCableComponent::NumSides' has a wrong offset!");
static_assert(offsetof(UCableComponent, TileMaterial) == 0x000508, "Member 'UCableComponent::TileMaterial' has a wrong offset!");

}

