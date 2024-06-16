#pragma once

 

// Package: BlueOcean

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "BlueOcean_structs.hpp"


namespace SDK
{

// Class BlueOcean.BuoyancyForceComponent
// 0x00A0 (0x02B0 - 0x0210)
class UBuoyancyForceComponent final : public USceneComponent
{
public:
	class AOcean*                                 Ocean;                                             // 0x0208(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MeshDensity;                                       // 0x0210(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FluidDensity;                                      // 0x0214(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FluidLinearDamping;                                // 0x0218(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FluidAngularDamping;                               // 0x021C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                VelocityDamper;                                    // 0x0220(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ClampMaxVelocity;                                  // 0x022C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C85[0x3];                                     // 0x022D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxUnderwaterVelocity;                             // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TestPointRadius;                                   // 0x0234(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        TestPoints;                                        // 0x0238(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          ApplyForceToBones;                                 // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          SnapToSurfaceIfNoPhysics;                          // 0x0249(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          TwoGerstnerIterations;                             // 0x024A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C86[0x5];                                     // 0x024B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 PointDensityOverride;                              // 0x0250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FStructBoneOverride>            BoneOverride;                                      // 0x0260(0x0010)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                          DrawDebugPoints;                                   // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EnableStayUprightConstraint;                       // 0x0271(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C87[0x2];                                     // 0x0272(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StayUprightStiffness;                              // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StayUprightDamping;                                // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               StayUprightDesiredRotation;                        // 0x027C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                          EnableWaveForces;                                  // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C88[0x3];                                     // 0x0289(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         WaveForceMultiplier;                               // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETickingGroup                                 TickGroup;                                         // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C89[0x1F];                                    // 0x0291(0x001F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BuoyancyForceComponent">();
	}
	static class UBuoyancyForceComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuoyancyForceComponent>();
	}
};
static_assert(alignof(UBuoyancyForceComponent) == 0x000010, "Wrong alignment on UBuoyancyForceComponent");
static_assert(sizeof(UBuoyancyForceComponent) == 0x0002B0, "Wrong size on UBuoyancyForceComponent");
static_assert(offsetof(UBuoyancyForceComponent, Ocean) == 0x000208, "Member 'UBuoyancyForceComponent::Ocean' has a wrong offset!");
static_assert(offsetof(UBuoyancyForceComponent, MeshDensity) == 0x000210, "Member 'UBuoyancyForceComponent::MeshDensity' has a wrong offset!");
static_assert(offsetof(UBuoyancyForceComponent, FluidDensity) == 0x000214, "Member 'UBuoyancyForceComponent::FluidDensity' has a wrong offset!");
static_assert(offsetof(UBuoyancyForceComponent, FluidLinearDamping) == 0x000218, "Member 'UBuoyancyForceComponent::FluidLinearDamping' has a wrong offset!");
static_assert(offsetof(UBuoyancyForceComponent, FluidAngularDamping) == 0x00021C, "Member 'UBuoyancyForceComponent::FluidAngularDamping' has a wrong offset!");
static_assert(offsetof(UBuoyancyForceComponent, VelocityDamper) == 0x000220, "Member 'UBuoyancyForceComponent::VelocityDamper' has a wrong offset!");
static_assert(offsetof(UBuoyancyForceComponent, ClampMaxVelocity) == 0x00022C, "Member 'UBuoyancyForceComponent::ClampMaxVelocity' has a wrong offset!");
static_assert(offsetof(UBuoyancyForceComponent, MaxUnderwaterVelocity) == 0x000230, "Member 'UBuoyancyForceComponent::MaxUnderwaterVelocity' has a wrong offset!");
static_assert(offsetof(UBuoyancyForceComponent, TestPointRadius) == 0x000234, "Member 'UBuoyancyForceComponent::TestPointRadius' has a wrong offset!");
static_assert(offsetof(UBuoyancyForceComponent, TestPoints) == 0x000238, "Member 'UBuoyancyForceComponent::TestPoints' has a wrong offset!");
static_assert(offsetof(UBuoyancyForceComponent, ApplyForceToBones) == 0x000248, "Member 'UBuoyancyForceComponent::ApplyForceToBones' has a wrong offset!");
static_assert(offsetof(UBuoyancyForceComponent, SnapToSurfaceIfNoPhysics) == 0x000249, "Member 'UBuoyancyForceComponent::SnapToSurfaceIfNoPhysics' has a wrong offset!");
static_assert(offsetof(UBuoyancyForceComponent, TwoGerstnerIterations) == 0x00024A, "Member 'UBuoyancyForceComponent::TwoGerstnerIterations' has a wrong offset!");
static_assert(offsetof(UBuoyancyForceComponent, PointDensityOverride) == 0x000250, "Member 'UBuoyancyForceComponent::PointDensityOverride' has a wrong offset!");
static_assert(offsetof(UBuoyancyForceComponent, BoneOverride) == 0x000260, "Member 'UBuoyancyForceComponent::BoneOverride' has a wrong offset!");
static_assert(offsetof(UBuoyancyForceComponent, DrawDebugPoints) == 0x000270, "Member 'UBuoyancyForceComponent::DrawDebugPoints' has a wrong offset!");
static_assert(offsetof(UBuoyancyForceComponent, EnableStayUprightConstraint) == 0x000271, "Member 'UBuoyancyForceComponent::EnableStayUprightConstraint' has a wrong offset!");
static_assert(offsetof(UBuoyancyForceComponent, StayUprightStiffness) == 0x000274, "Member 'UBuoyancyForceComponent::StayUprightStiffness' has a wrong offset!");
static_assert(offsetof(UBuoyancyForceComponent, StayUprightDamping) == 0x000278, "Member 'UBuoyancyForceComponent::StayUprightDamping' has a wrong offset!");
static_assert(offsetof(UBuoyancyForceComponent, StayUprightDesiredRotation) == 0x00027C, "Member 'UBuoyancyForceComponent::StayUprightDesiredRotation' has a wrong offset!");
static_assert(offsetof(UBuoyancyForceComponent, EnableWaveForces) == 0x000288, "Member 'UBuoyancyForceComponent::EnableWaveForces' has a wrong offset!");
static_assert(offsetof(UBuoyancyForceComponent, WaveForceMultiplier) == 0x00028C, "Member 'UBuoyancyForceComponent::WaveForceMultiplier' has a wrong offset!");
static_assert(offsetof(UBuoyancyForceComponent, TickGroup) == 0x000290, "Member 'UBuoyancyForceComponent::TickGroup' has a wrong offset!");

// Class BlueOcean.Ocean
// 0x0098 (0x0308 - 0x0270)
class AOcean : public APhysicsVolume
{
public:
	class UPrimitiveComponent*                    OceanPlane;                                        // 0x0270(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialParameterCollection*           OceanParameterCollection;                          // 0x0278(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     OceanMaterial;                                     // 0x0280(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              GlobalWaveDirection;                               // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GlobalWaveSpeed;                                   // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GlobalWaveAmplitude;                               // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWaveParameter                         WaveCluster;                                       // 0x0298(0x0014)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C8A[0x4];                                     // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADirectionalLight*                      SunLight;                                          // 0x02B0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALandscape*                             Landscape;                                         // 0x02B8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             HeightmapTexture;                                  // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ModulationStartHeight;                             // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ModulationMaxHeight;                               // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ModulationPower;                                   // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C8B[0x34];                                    // 0x02D4(0x0034)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	struct FVector GetWaveHeightValue(const struct FVector& Location, const class UWorld* World, bool HeightOnly, bool TwoIterations) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Ocean">();
	}
	static class AOcean* GetDefaultObj()
	{
		return GetDefaultObjImpl<AOcean>();
	}
};
static_assert(alignof(AOcean) == 0x000008, "Wrong alignment on AOcean");
static_assert(sizeof(AOcean) == 0x000308, "Wrong size on AOcean");
static_assert(offsetof(AOcean, OceanPlane) == 0x000270, "Member 'AOcean::OceanPlane' has a wrong offset!");
static_assert(offsetof(AOcean, OceanParameterCollection) == 0x000278, "Member 'AOcean::OceanParameterCollection' has a wrong offset!");
static_assert(offsetof(AOcean, OceanMaterial) == 0x000280, "Member 'AOcean::OceanMaterial' has a wrong offset!");
static_assert(offsetof(AOcean, GlobalWaveDirection) == 0x000288, "Member 'AOcean::GlobalWaveDirection' has a wrong offset!");
static_assert(offsetof(AOcean, GlobalWaveSpeed) == 0x000290, "Member 'AOcean::GlobalWaveSpeed' has a wrong offset!");
static_assert(offsetof(AOcean, GlobalWaveAmplitude) == 0x000294, "Member 'AOcean::GlobalWaveAmplitude' has a wrong offset!");
static_assert(offsetof(AOcean, WaveCluster) == 0x000298, "Member 'AOcean::WaveCluster' has a wrong offset!");
static_assert(offsetof(AOcean, SunLight) == 0x0002B0, "Member 'AOcean::SunLight' has a wrong offset!");
static_assert(offsetof(AOcean, Landscape) == 0x0002B8, "Member 'AOcean::Landscape' has a wrong offset!");
static_assert(offsetof(AOcean, HeightmapTexture) == 0x0002C0, "Member 'AOcean::HeightmapTexture' has a wrong offset!");
static_assert(offsetof(AOcean, ModulationStartHeight) == 0x0002C8, "Member 'AOcean::ModulationStartHeight' has a wrong offset!");
static_assert(offsetof(AOcean, ModulationMaxHeight) == 0x0002CC, "Member 'AOcean::ModulationMaxHeight' has a wrong offset!");
static_assert(offsetof(AOcean, ModulationPower) == 0x0002D0, "Member 'AOcean::ModulationPower' has a wrong offset!");

// Class BlueOcean.OceanGrid
// 0x0000 (0x0308 - 0x0308)
class AOceanGrid : public AOcean
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OceanGrid">();
	}
	static class AOceanGrid* GetDefaultObj()
	{
		return GetDefaultObjImpl<AOceanGrid>();
	}
};
static_assert(alignof(AOceanGrid) == 0x000008, "Wrong alignment on AOceanGrid");
static_assert(sizeof(AOceanGrid) == 0x000308, "Wrong size on AOceanGrid");

// Class BlueOcean.OceanMesh
// 0x0000 (0x0308 - 0x0308)
class AOceanMesh final : public AOcean
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OceanMesh">();
	}
	static class AOceanMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<AOceanMesh>();
	}
};
static_assert(alignof(AOceanMesh) == 0x000008, "Wrong alignment on AOceanMesh");
static_assert(sizeof(AOceanMesh) == 0x000308, "Wrong size on AOceanMesh");

// Class BlueOcean.ProjectedGrid
// 0x0008 (0x0230 - 0x0228)
class AProjectedGrid final : public AActor
{
public:
	class UProjectedGridComponent*                ProjectedGrid;                                     // 0x0228(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProjectedGrid">();
	}
	static class AProjectedGrid* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProjectedGrid>();
	}
};
static_assert(alignof(AProjectedGrid) == 0x000008, "Wrong alignment on AProjectedGrid");
static_assert(sizeof(AProjectedGrid) == 0x000230, "Wrong size on AProjectedGrid");
static_assert(offsetof(AProjectedGrid, ProjectedGrid) == 0x000228, "Member 'AProjectedGrid::ProjectedGrid' has a wrong offset!");

// Class BlueOcean.ProjectedGridComponent
// 0x0070 (0x04E0 - 0x0470)
class UProjectedGridComponent final : public UPrimitiveComponent
{
public:
	struct FProjectedGridParameters               Parameters;                                        // 0x0468(0x0028)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1C8E[0x50];                                    // 0x0490(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetProjectedGrid(const struct FProjectedGridParameters& Param_Parameters);

	struct FProjectedGridParameters GetParameters() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProjectedGridComponent">();
	}
	static class UProjectedGridComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProjectedGridComponent>();
	}
};
static_assert(alignof(UProjectedGridComponent) == 0x000010, "Wrong alignment on UProjectedGridComponent");
static_assert(sizeof(UProjectedGridComponent) == 0x0004E0, "Wrong size on UProjectedGridComponent");
static_assert(offsetof(UProjectedGridComponent, Parameters) == 0x000468, "Member 'UProjectedGridComponent::Parameters' has a wrong offset!");

// Class BlueOcean.ProjectedGridFrustumComponent
// 0x0000 (0x0470 - 0x0470)
class UProjectedGridFrustumComponent final : public UPrimitiveComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProjectedGridFrustumComponent">();
	}
	static class UProjectedGridFrustumComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProjectedGridFrustumComponent>();
	}
};
static_assert(alignof(UProjectedGridFrustumComponent) == 0x000010, "Wrong alignment on UProjectedGridFrustumComponent");
static_assert(sizeof(UProjectedGridFrustumComponent) == 0x000470, "Wrong size on UProjectedGridFrustumComponent");

}

