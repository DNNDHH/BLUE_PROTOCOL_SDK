#pragma once

 

// Package: KawaiiPhysics

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// Enum KawaiiPhysics.EBoneForwardAxis
// NumValues: 0x0007
enum class EBoneForwardAxis : uint8
{
	X_Positive                               = 0,
	X_Negative                               = 1,
	Y_Positive                               = 2,
	Y_Negative                               = 3,
	Z_Positive                               = 4,
	Z_Negative                               = 5,
	EBoneForwardAxis_MAX                     = 6,
};

// Enum KawaiiPhysics.EPlanarConstraint
// NumValues: 0x0005
enum class EPlanarConstraint : uint8
{
	None                                     = 0,
	X                                        = 1,
	Y                                        = 2,
	Z                                        = 3,
	EPlanarConstraint_MAX                    = 4,
};

// ScriptStruct KawaiiPhysics.KawaiiPhysicsSettings
// 0x0018 (0x0018 - 0x0000)
struct FKawaiiPhysicsSettings final
{
public:
	float                                         Damping;                                           // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WorldDampingLocation;                              // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WorldDampingRotation;                              // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Stiffness;                                         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Radius;                                            // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LimitAngle;                                        // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKawaiiPhysicsSettings) == 0x000004, "Wrong alignment on FKawaiiPhysicsSettings");
static_assert(sizeof(FKawaiiPhysicsSettings) == 0x000018, "Wrong size on FKawaiiPhysicsSettings");
static_assert(offsetof(FKawaiiPhysicsSettings, Damping) == 0x000000, "Member 'FKawaiiPhysicsSettings::Damping' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsSettings, WorldDampingLocation) == 0x000004, "Member 'FKawaiiPhysicsSettings::WorldDampingLocation' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsSettings, WorldDampingRotation) == 0x000008, "Member 'FKawaiiPhysicsSettings::WorldDampingRotation' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsSettings, Stiffness) == 0x00000C, "Member 'FKawaiiPhysicsSettings::Stiffness' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsSettings, Radius) == 0x000010, "Member 'FKawaiiPhysicsSettings::Radius' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsSettings, LimitAngle) == 0x000014, "Member 'FKawaiiPhysicsSettings::LimitAngle' has a wrong offset!");

// ScriptStruct KawaiiPhysics.CollisionLimitBase
// 0x0060 (0x0060 - 0x0000)
struct FCollisionLimitBase
{
public:
	struct FBoneReference                         DrivingBone;                                       // 0x0000(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                OffsetLocation;                                    // 0x0010(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               OffsetRotation;                                    // 0x001C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43D2[0xC];                                     // 0x0034(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  Rotation;                                          // 0x0040(0x0010)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Scale;                                             // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43D3[0x4];                                     // 0x005C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCollisionLimitBase) == 0x000010, "Wrong alignment on FCollisionLimitBase");
static_assert(sizeof(FCollisionLimitBase) == 0x000060, "Wrong size on FCollisionLimitBase");
static_assert(offsetof(FCollisionLimitBase, DrivingBone) == 0x000000, "Member 'FCollisionLimitBase::DrivingBone' has a wrong offset!");
static_assert(offsetof(FCollisionLimitBase, OffsetLocation) == 0x000010, "Member 'FCollisionLimitBase::OffsetLocation' has a wrong offset!");
static_assert(offsetof(FCollisionLimitBase, OffsetRotation) == 0x00001C, "Member 'FCollisionLimitBase::OffsetRotation' has a wrong offset!");
static_assert(offsetof(FCollisionLimitBase, Location) == 0x000028, "Member 'FCollisionLimitBase::Location' has a wrong offset!");
static_assert(offsetof(FCollisionLimitBase, Rotation) == 0x000040, "Member 'FCollisionLimitBase::Rotation' has a wrong offset!");
static_assert(offsetof(FCollisionLimitBase, Scale) == 0x000050, "Member 'FCollisionLimitBase::Scale' has a wrong offset!");

// ScriptStruct KawaiiPhysics.SphericalLimit
// 0x0010 (0x0070 - 0x0060)
struct FSphericalLimit final : public FCollisionLimitBase
{
public:
	float                                         Radius;                                            // 0x0060(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESphericalLimitType                           LimitType;                                         // 0x0064(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43D4[0xB];                                     // 0x0065(0x000B)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSphericalLimit) == 0x000010, "Wrong alignment on FSphericalLimit");
static_assert(sizeof(FSphericalLimit) == 0x000070, "Wrong size on FSphericalLimit");
static_assert(offsetof(FSphericalLimit, Radius) == 0x000060, "Member 'FSphericalLimit::Radius' has a wrong offset!");
static_assert(offsetof(FSphericalLimit, LimitType) == 0x000064, "Member 'FSphericalLimit::LimitType' has a wrong offset!");

// ScriptStruct KawaiiPhysics.CapsuleLimit
// 0x0010 (0x0070 - 0x0060)
struct FCapsuleLimit final : public FCollisionLimitBase
{
public:
	float                                         Radius;                                            // 0x0060(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Length;                                            // 0x0064(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43D5[0x8];                                     // 0x0068(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCapsuleLimit) == 0x000010, "Wrong alignment on FCapsuleLimit");
static_assert(sizeof(FCapsuleLimit) == 0x000070, "Wrong size on FCapsuleLimit");
static_assert(offsetof(FCapsuleLimit, Radius) == 0x000060, "Member 'FCapsuleLimit::Radius' has a wrong offset!");
static_assert(offsetof(FCapsuleLimit, Length) == 0x000064, "Member 'FCapsuleLimit::Length' has a wrong offset!");

// ScriptStruct KawaiiPhysics.PlanarLimit
// 0x0010 (0x0070 - 0x0060)
struct FPlanarLimit final : public FCollisionLimitBase
{
public:
	struct FPlane                                 Plane;                                             // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPlanarLimit) == 0x000010, "Wrong alignment on FPlanarLimit");
static_assert(sizeof(FPlanarLimit) == 0x000070, "Wrong size on FPlanarLimit");
static_assert(offsetof(FPlanarLimit, Plane) == 0x000060, "Member 'FPlanarLimit::Plane' has a wrong offset!");

// ScriptStruct KawaiiPhysics.KawaiiPhysicsModifyBone
// 0x00D0 (0x00D0 - 0x0000)
struct FKawaiiPhysicsModifyBone final
{
public:
	struct FBoneReference                         BoneRef;                                           // 0x0000(0x0010)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                         ParentIndex;                                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43D6[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 ChildIndexs;                                       // 0x0018(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FKawaiiPhysicsSettings                 PhysicsSettings;                                   // 0x0028(0x0018)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PrevLocation;                                      // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43D7[0x8];                                     // 0x0058(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  PrevRotation;                                      // 0x0060(0x0010)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                PoseLocation;                                      // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43D8[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  PoseRotation;                                      // 0x0080(0x0010)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                PoseScale;                                         // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LengthFromRoot;                                    // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDummy;                                            // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43D9[0xF];                                     // 0x00A1(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  DiffRot;                                           // 0x00B0(0x0010)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FQuat>                          ChildRots;                                         // 0x00C0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKawaiiPhysicsModifyBone) == 0x000010, "Wrong alignment on FKawaiiPhysicsModifyBone");
static_assert(sizeof(FKawaiiPhysicsModifyBone) == 0x0000D0, "Wrong size on FKawaiiPhysicsModifyBone");
static_assert(offsetof(FKawaiiPhysicsModifyBone, BoneRef) == 0x000000, "Member 'FKawaiiPhysicsModifyBone::BoneRef' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, ParentIndex) == 0x000010, "Member 'FKawaiiPhysicsModifyBone::ParentIndex' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, ChildIndexs) == 0x000018, "Member 'FKawaiiPhysicsModifyBone::ChildIndexs' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, PhysicsSettings) == 0x000028, "Member 'FKawaiiPhysicsModifyBone::PhysicsSettings' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, Location) == 0x000040, "Member 'FKawaiiPhysicsModifyBone::Location' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, PrevLocation) == 0x00004C, "Member 'FKawaiiPhysicsModifyBone::PrevLocation' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, PrevRotation) == 0x000060, "Member 'FKawaiiPhysicsModifyBone::PrevRotation' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, PoseLocation) == 0x000070, "Member 'FKawaiiPhysicsModifyBone::PoseLocation' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, PoseRotation) == 0x000080, "Member 'FKawaiiPhysicsModifyBone::PoseRotation' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, PoseScale) == 0x000090, "Member 'FKawaiiPhysicsModifyBone::PoseScale' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, LengthFromRoot) == 0x00009C, "Member 'FKawaiiPhysicsModifyBone::LengthFromRoot' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, bDummy) == 0x0000A0, "Member 'FKawaiiPhysicsModifyBone::bDummy' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, DiffRot) == 0x0000B0, "Member 'FKawaiiPhysicsModifyBone::DiffRot' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, ChildRots) == 0x0000C0, "Member 'FKawaiiPhysicsModifyBone::ChildRots' has a wrong offset!");

// ScriptStruct KawaiiPhysics.AnimNode_KawaiiPhysics
// 0x0548 (0x0610 - 0x00C8)
struct FAnimNode_KawaiiPhysics final : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                         RootBone;                                          // 0x00C8(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                 ExcludeBones;                                      // 0x00D8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         TargetFramerate;                                   // 0x00E8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          OverrideTargetFramerate;                           // 0x00EC(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43DA[0x3];                                     // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKawaiiPhysicsSettings                 PhysicsSettings;                                   // 0x00F0(0x0018)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UCurveFloat*                            DampingCurve;                                      // 0x0108(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            WorldDampingLocationCurve;                         // 0x0110(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            WorldDampingRotationCurve;                         // 0x0118(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            StiffnessCurve;                                    // 0x0120(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            RadiusCurve;                                       // 0x0128(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            LimitAngleCurve;                                   // 0x0130(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                     DampingCurveData;                                  // 0x0138(0x0088)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                     WorldDampingLocationCurveData;                     // 0x01C0(0x0088)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                     WorldDampingRotationCurveData;                     // 0x0248(0x0088)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                     StiffnessCurveData;                                // 0x02D0(0x0088)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                     RadiusCurveData;                                   // 0x0358(0x0088)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                     LimitAngleCurveData;                               // 0x03E0(0x0088)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                          bLimitLocalSpace;                                  // 0x0468(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUpdatePhysicsSettingsInGame;                      // 0x0469(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43DB[0x2];                                     // 0x046A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DummyBoneLength;                                   // 0x046C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBoneForwardAxis                              BoneForwardAxis;                                   // 0x0470(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPlanarConstraint                             PlanarConstraint;                                  // 0x0471(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43DC[0x6];                                     // 0x0472(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSphericalLimit>                SphericalLimits;                                   // 0x0478(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCapsuleLimit>                  CapsuleLimits;                                     // 0x0488(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPlanarLimit>                   PlanarLimits;                                      // 0x0498(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         TeleportDistanceThreshold;                         // 0x04A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TeleportRotationThreshold;                         // 0x04AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Gravity;                                           // 0x04B0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCorrectGravityDown;                               // 0x04BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43DD[0x3];                                     // 0x04BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CorrectGravityDownResetCount;                      // 0x04C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ExternalAccelerate;                                // 0x04C4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bComponentSpaceSimulation;                         // 0x04D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43DE[0x3];                                     // 0x04D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ResetCountScale;                                   // 0x04D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                     DiffTransforms;                                    // 0x04D8(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        TempLocations;                                     // 0x04E8(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQuat>                          TempRotations;                                     // 0x04F8(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                     NewWorldTransforms;                                // 0x0508(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         ChainMaxNum;                                       // 0x0518(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableWind;                                       // 0x051C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43DF[0x3];                                     // 0x051D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         WindScale;                                         // 0x0520(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43E0[0x4];                                     // 0x0524(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FKawaiiPhysicsModifyBone>       ModifyBones;                                       // 0x0528(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         StiffnessScale;                                    // 0x0538(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DampingScale;                                      // 0x053C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TotalBoneLength;                                   // 0x0540(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_43E1[0xC];                                     // 0x0544(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             PreSkelCompTransform;                              // 0x0550(0x0030)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                          bInitPhysicsSettings;                              // 0x0580(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_43E2[0x8F];                                    // 0x0581(0x008F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAnimNode_KawaiiPhysics) == 0x000010, "Wrong alignment on FAnimNode_KawaiiPhysics");
static_assert(sizeof(FAnimNode_KawaiiPhysics) == 0x000610, "Wrong size on FAnimNode_KawaiiPhysics");
static_assert(offsetof(FAnimNode_KawaiiPhysics, RootBone) == 0x0000C8, "Member 'FAnimNode_KawaiiPhysics::RootBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, ExcludeBones) == 0x0000D8, "Member 'FAnimNode_KawaiiPhysics::ExcludeBones' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, TargetFramerate) == 0x0000E8, "Member 'FAnimNode_KawaiiPhysics::TargetFramerate' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, OverrideTargetFramerate) == 0x0000EC, "Member 'FAnimNode_KawaiiPhysics::OverrideTargetFramerate' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, PhysicsSettings) == 0x0000F0, "Member 'FAnimNode_KawaiiPhysics::PhysicsSettings' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, DampingCurve) == 0x000108, "Member 'FAnimNode_KawaiiPhysics::DampingCurve' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, WorldDampingLocationCurve) == 0x000110, "Member 'FAnimNode_KawaiiPhysics::WorldDampingLocationCurve' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, WorldDampingRotationCurve) == 0x000118, "Member 'FAnimNode_KawaiiPhysics::WorldDampingRotationCurve' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, StiffnessCurve) == 0x000120, "Member 'FAnimNode_KawaiiPhysics::StiffnessCurve' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, RadiusCurve) == 0x000128, "Member 'FAnimNode_KawaiiPhysics::RadiusCurve' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, LimitAngleCurve) == 0x000130, "Member 'FAnimNode_KawaiiPhysics::LimitAngleCurve' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, DampingCurveData) == 0x000138, "Member 'FAnimNode_KawaiiPhysics::DampingCurveData' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, WorldDampingLocationCurveData) == 0x0001C0, "Member 'FAnimNode_KawaiiPhysics::WorldDampingLocationCurveData' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, WorldDampingRotationCurveData) == 0x000248, "Member 'FAnimNode_KawaiiPhysics::WorldDampingRotationCurveData' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, StiffnessCurveData) == 0x0002D0, "Member 'FAnimNode_KawaiiPhysics::StiffnessCurveData' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, RadiusCurveData) == 0x000358, "Member 'FAnimNode_KawaiiPhysics::RadiusCurveData' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, LimitAngleCurveData) == 0x0003E0, "Member 'FAnimNode_KawaiiPhysics::LimitAngleCurveData' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, bLimitLocalSpace) == 0x000468, "Member 'FAnimNode_KawaiiPhysics::bLimitLocalSpace' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, bUpdatePhysicsSettingsInGame) == 0x000469, "Member 'FAnimNode_KawaiiPhysics::bUpdatePhysicsSettingsInGame' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, DummyBoneLength) == 0x00046C, "Member 'FAnimNode_KawaiiPhysics::DummyBoneLength' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, BoneForwardAxis) == 0x000470, "Member 'FAnimNode_KawaiiPhysics::BoneForwardAxis' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, PlanarConstraint) == 0x000471, "Member 'FAnimNode_KawaiiPhysics::PlanarConstraint' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, SphericalLimits) == 0x000478, "Member 'FAnimNode_KawaiiPhysics::SphericalLimits' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, CapsuleLimits) == 0x000488, "Member 'FAnimNode_KawaiiPhysics::CapsuleLimits' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, PlanarLimits) == 0x000498, "Member 'FAnimNode_KawaiiPhysics::PlanarLimits' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, TeleportDistanceThreshold) == 0x0004A8, "Member 'FAnimNode_KawaiiPhysics::TeleportDistanceThreshold' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, TeleportRotationThreshold) == 0x0004AC, "Member 'FAnimNode_KawaiiPhysics::TeleportRotationThreshold' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, Gravity) == 0x0004B0, "Member 'FAnimNode_KawaiiPhysics::Gravity' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, bCorrectGravityDown) == 0x0004BC, "Member 'FAnimNode_KawaiiPhysics::bCorrectGravityDown' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, CorrectGravityDownResetCount) == 0x0004C0, "Member 'FAnimNode_KawaiiPhysics::CorrectGravityDownResetCount' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, ExternalAccelerate) == 0x0004C4, "Member 'FAnimNode_KawaiiPhysics::ExternalAccelerate' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, bComponentSpaceSimulation) == 0x0004D0, "Member 'FAnimNode_KawaiiPhysics::bComponentSpaceSimulation' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, ResetCountScale) == 0x0004D4, "Member 'FAnimNode_KawaiiPhysics::ResetCountScale' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, DiffTransforms) == 0x0004D8, "Member 'FAnimNode_KawaiiPhysics::DiffTransforms' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, TempLocations) == 0x0004E8, "Member 'FAnimNode_KawaiiPhysics::TempLocations' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, TempRotations) == 0x0004F8, "Member 'FAnimNode_KawaiiPhysics::TempRotations' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, NewWorldTransforms) == 0x000508, "Member 'FAnimNode_KawaiiPhysics::NewWorldTransforms' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, ChainMaxNum) == 0x000518, "Member 'FAnimNode_KawaiiPhysics::ChainMaxNum' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, bEnableWind) == 0x00051C, "Member 'FAnimNode_KawaiiPhysics::bEnableWind' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, WindScale) == 0x000520, "Member 'FAnimNode_KawaiiPhysics::WindScale' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, ModifyBones) == 0x000528, "Member 'FAnimNode_KawaiiPhysics::ModifyBones' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, StiffnessScale) == 0x000538, "Member 'FAnimNode_KawaiiPhysics::StiffnessScale' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, DampingScale) == 0x00053C, "Member 'FAnimNode_KawaiiPhysics::DampingScale' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, TotalBoneLength) == 0x000540, "Member 'FAnimNode_KawaiiPhysics::TotalBoneLength' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, PreSkelCompTransform) == 0x000550, "Member 'FAnimNode_KawaiiPhysics::PreSkelCompTransform' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, bInitPhysicsSettings) == 0x000580, "Member 'FAnimNode_KawaiiPhysics::bInitPhysicsSettings' has a wrong offset!");

}

