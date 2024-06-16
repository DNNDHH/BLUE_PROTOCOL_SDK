#pragma once

 

// Package: LevelExtension

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "LevelExtension_structs.hpp"


namespace SDK
{

// Class LevelExtension.DungeonPartsActor
// 0x0008 (0x0230 - 0x0228)
class ADungeonPartsActor final : public AActor
{
public:
	class UDungeonPartsComponent*                 DungeonPartsComponent;                             // 0x0228(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DungeonPartsActor">();
	}
	static class ADungeonPartsActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADungeonPartsActor>();
	}
};
static_assert(alignof(ADungeonPartsActor) == 0x000008, "Wrong alignment on ADungeonPartsActor");
static_assert(sizeof(ADungeonPartsActor) == 0x000230, "Wrong size on ADungeonPartsActor");
static_assert(offsetof(ADungeonPartsActor, DungeonPartsComponent) == 0x000228, "Member 'ADungeonPartsActor::DungeonPartsComponent' has a wrong offset!");

// Class LevelExtension.DungeonPartsComponent
// 0x0000 (0x0210 - 0x0210)
class UDungeonPartsComponent final : public USceneComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DungeonPartsComponent">();
	}
	static class UDungeonPartsComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDungeonPartsComponent>();
	}
};
static_assert(alignof(UDungeonPartsComponent) == 0x000010, "Wrong alignment on UDungeonPartsComponent");
static_assert(sizeof(UDungeonPartsComponent) == 0x000210, "Wrong size on UDungeonPartsComponent");

// Class LevelExtension.DungeonPartsGroupComponent
// 0x0000 (0x0210 - 0x0210)
class UDungeonPartsGroupComponent final : public USceneComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DungeonPartsGroupComponent">();
	}
	static class UDungeonPartsGroupComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDungeonPartsGroupComponent>();
	}
};
static_assert(alignof(UDungeonPartsGroupComponent) == 0x000010, "Wrong alignment on UDungeonPartsGroupComponent");
static_assert(sizeof(UDungeonPartsGroupComponent) == 0x000210, "Wrong size on UDungeonPartsGroupComponent");

// Class LevelExtension.HierarchicalInstancedStaticMeshActor
// 0x0008 (0x0230 - 0x0228)
class AHierarchicalInstancedStaticMeshActor final : public AActor
{
public:
	class UHierarchicalInstancedStaticMeshComponent* HierarchicalInstancedStaticMeshComponent;          // 0x0228(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HierarchicalInstancedStaticMeshActor">();
	}
	static class AHierarchicalInstancedStaticMeshActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHierarchicalInstancedStaticMeshActor>();
	}
};
static_assert(alignof(AHierarchicalInstancedStaticMeshActor) == 0x000008, "Wrong alignment on AHierarchicalInstancedStaticMeshActor");
static_assert(sizeof(AHierarchicalInstancedStaticMeshActor) == 0x000230, "Wrong size on AHierarchicalInstancedStaticMeshActor");
static_assert(offsetof(AHierarchicalInstancedStaticMeshActor, HierarchicalInstancedStaticMeshComponent) == 0x000228, "Member 'AHierarchicalInstancedStaticMeshActor::HierarchicalInstancedStaticMeshComponent' has a wrong offset!");

// Class LevelExtension.InstancedStaticMeshActor
// 0x0008 (0x0230 - 0x0228)
class AInstancedStaticMeshActor final : public AActor
{
public:
	class UInstancedStaticMeshComponent*          InstancedStaticMeshComponent;                      // 0x0228(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InstancedStaticMeshActor">();
	}
	static class AInstancedStaticMeshActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AInstancedStaticMeshActor>();
	}
};
static_assert(alignof(AInstancedStaticMeshActor) == 0x000008, "Wrong alignment on AInstancedStaticMeshActor");
static_assert(sizeof(AInstancedStaticMeshActor) == 0x000230, "Wrong size on AInstancedStaticMeshActor");
static_assert(offsetof(AInstancedStaticMeshActor, InstancedStaticMeshComponent) == 0x000228, "Member 'AInstancedStaticMeshActor::InstancedStaticMeshComponent' has a wrong offset!");

// Class LevelExtension.LandscapeWallBase
// 0x0048 (0x0270 - 0x0228)
class ALandscapeWallBase : public AActor
{
public:
	float                                         HalfHeight;                                        // 0x0228(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HalfThickness;                                     // 0x022C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class UBoxComponent>>   BoxComponents;                                     // 0x0230(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TSubclassOf<class ADecalActor>                DecalActorClass;                                   // 0x0240(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAffectNavigation;                                 // 0x0248(0x0001)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CBC[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TWeakObjectPtr<class UCapsuleComponent>> CapsuleComponents;                                 // 0x0250(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                          bUseCornerCapsule;                                 // 0x0260(0x0001)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CBD[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULandscapeWallComponent*                WallComponent;                                     // 0x0268(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	TSubclassOf<class ADecalActor> GetDecalClass();
	class ULandscapeWallComponent* GetWallComponent();
	void Rebuild();

	float GetHalfHeight() const;
	float GetHalfThickness() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeWallBase">();
	}
	static class ALandscapeWallBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALandscapeWallBase>();
	}
};
static_assert(alignof(ALandscapeWallBase) == 0x000008, "Wrong alignment on ALandscapeWallBase");
static_assert(sizeof(ALandscapeWallBase) == 0x000270, "Wrong size on ALandscapeWallBase");
static_assert(offsetof(ALandscapeWallBase, HalfHeight) == 0x000228, "Member 'ALandscapeWallBase::HalfHeight' has a wrong offset!");
static_assert(offsetof(ALandscapeWallBase, HalfThickness) == 0x00022C, "Member 'ALandscapeWallBase::HalfThickness' has a wrong offset!");
static_assert(offsetof(ALandscapeWallBase, BoxComponents) == 0x000230, "Member 'ALandscapeWallBase::BoxComponents' has a wrong offset!");
static_assert(offsetof(ALandscapeWallBase, DecalActorClass) == 0x000240, "Member 'ALandscapeWallBase::DecalActorClass' has a wrong offset!");
static_assert(offsetof(ALandscapeWallBase, bAffectNavigation) == 0x000248, "Member 'ALandscapeWallBase::bAffectNavigation' has a wrong offset!");
static_assert(offsetof(ALandscapeWallBase, CapsuleComponents) == 0x000250, "Member 'ALandscapeWallBase::CapsuleComponents' has a wrong offset!");
static_assert(offsetof(ALandscapeWallBase, bUseCornerCapsule) == 0x000260, "Member 'ALandscapeWallBase::bUseCornerCapsule' has a wrong offset!");
static_assert(offsetof(ALandscapeWallBase, WallComponent) == 0x000268, "Member 'ALandscapeWallBase::WallComponent' has a wrong offset!");

// Class LevelExtension.LandscapeWallComponent
// 0x0010 (0x0480 - 0x0470)
class ULandscapeWallComponent final : public UPrimitiveComponent
{
public:
	struct FColor                                 DrawColor;                                         // 0x0468(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CBE[0x4];                                     // 0x046C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FLandscapeWallBox>              WallBoxes;                                         // 0x0470(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeWallComponent">();
	}
	static class ULandscapeWallComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeWallComponent>();
	}
};
static_assert(alignof(ULandscapeWallComponent) == 0x000010, "Wrong alignment on ULandscapeWallComponent");
static_assert(sizeof(ULandscapeWallComponent) == 0x000480, "Wrong size on ULandscapeWallComponent");
static_assert(offsetof(ULandscapeWallComponent, DrawColor) == 0x000468, "Member 'ULandscapeWallComponent::DrawColor' has a wrong offset!");
static_assert(offsetof(ULandscapeWallComponent, WallBoxes) == 0x000470, "Member 'ULandscapeWallComponent::WallBoxes' has a wrong offset!");

// Class LevelExtension.LandscapeWallSpline
// 0x0010 (0x0280 - 0x0270)
class ALandscapeWallSpline final : public ALandscapeWallBase
{
public:
	bool                                          bClosedLoop;                                       // 0x0270(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CBF[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULandscapeWallSplineComponent*          SplineComponent;                                   // 0x0278(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	class ULandscapeWallSplineComponent* GetSplineComponent();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeWallSpline">();
	}
	static class ALandscapeWallSpline* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALandscapeWallSpline>();
	}
};
static_assert(alignof(ALandscapeWallSpline) == 0x000008, "Wrong alignment on ALandscapeWallSpline");
static_assert(sizeof(ALandscapeWallSpline) == 0x000280, "Wrong size on ALandscapeWallSpline");
static_assert(offsetof(ALandscapeWallSpline, bClosedLoop) == 0x000270, "Member 'ALandscapeWallSpline::bClosedLoop' has a wrong offset!");
static_assert(offsetof(ALandscapeWallSpline, SplineComponent) == 0x000278, "Member 'ALandscapeWallSpline::SplineComponent' has a wrong offset!");

// Class LevelExtension.LandscapeWallSplineComponent
// 0x0010 (0x0570 - 0x0560)
class ULandscapeWallSplineComponent final : public USplineComponent
{
public:
	uint8                                         Pad_1CC0[0x10];                                    // 0x0560(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeWallSplineComponent">();
	}
	static class ULandscapeWallSplineComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeWallSplineComponent>();
	}
};
static_assert(alignof(ULandscapeWallSplineComponent) == 0x000010, "Wrong alignment on ULandscapeWallSplineComponent");
static_assert(sizeof(ULandscapeWallSplineComponent) == 0x000570, "Wrong size on ULandscapeWallSplineComponent");

}

