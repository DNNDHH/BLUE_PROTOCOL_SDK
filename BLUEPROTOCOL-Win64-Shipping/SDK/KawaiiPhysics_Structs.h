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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum KawaiiPhysics.EBoneForwardAxis
	 */
	enum class EBoneForwardAxis : uint8_t
	{
		X_Positive = 0,
		X_Negative = 1,
		Y_Positive = 2,
		Y_Negative = 3,
		Z_Positive = 4,
		Z_Negative = 5,
		MAX        = 6
	};

	/**
	 * Enum KawaiiPhysics.EPlanarConstraint
	 */
	enum class EPlanarConstraint : uint8_t
	{
		None = 0,
		X    = 1,
		Y    = 2,
		Z    = 3,
		MAX  = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct KawaiiPhysics.KawaiiPhysicsSettings
	 * Size -> 0x0018
	 */
	struct FKawaiiPhysicsSettings
	{
	public:
		float                                                      Damping;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WorldDampingLocation;                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WorldDampingRotation;                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Stiffness;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LimitAngle;                                              // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct KawaiiPhysics.CollisionLimitBase
	 * Size -> 0x0060
	 */
	struct FCollisionLimitBase
	{
	public:
		struct FBoneReference                                      DrivingBone;                                             // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             OffsetLocation;                                          // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            OffsetRotation;                                          // 0x001C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YAO4[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x0040(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0050(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LT1P[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct KawaiiPhysics.SphericalLimit
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	struct FSphericalLimit : public FCollisionLimitBase
	{
	public:
		float                                                      Radius;                                                  // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESphericalLimitType                                        LimitType;                                               // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LA49[0xB];                                   // 0x0065(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct KawaiiPhysics.CapsuleLimit
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	struct FCapsuleLimit : public FCollisionLimitBase
	{
	public:
		float                                                      Radius;                                                  // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M1Z2[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct KawaiiPhysics.PlanarLimit
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	struct FPlanarLimit : public FCollisionLimitBase
	{
	public:
		struct FPlane                                              Plane;                                                   // 0x0060(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct KawaiiPhysics.KawaiiPhysicsModifyBone
	 * Size -> 0x00D0
	 */
	struct FKawaiiPhysicsModifyBone
	{
	public:
		struct FBoneReference                                      BoneRef;                                                 // 0x0000(0x0010) NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    ParentIndex;                                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1CJS[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            ChildIndexs;                                             // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FKawaiiPhysicsSettings                              PhysicsSettings;                                         // 0x0028(0x0018) NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PrevLocation;                                            // 0x004C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UWLR[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               PrevRotation;                                            // 0x0060(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             PoseLocation;                                            // 0x0070(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZWMP[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               PoseRotation;                                            // 0x0080(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             PoseScale;                                               // 0x0090(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LengthFromRoot;                                          // 0x009C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDummy;                                                  // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DHP6[0xF];                                   // 0x00A1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               DiffRot;                                                 // 0x00B0(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FQuat>                                       ChildRots;                                               // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct KawaiiPhysics.AnimNode_KawaiiPhysics
	 * Size -> 0x0548 (FullSize[0x0610] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_KawaiiPhysics : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      RootBone;                                                // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FBoneReference>                              ExcludeBones;                                            // 0x00D8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    TargetFramerate;                                         // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideTargetFramerate;                                 // 0x00EC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VAYZ[0x3];                                   // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKawaiiPhysicsSettings                              PhysicsSettings;                                         // 0x00F0(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class UCurveFloat*                                         DampingCurve;                                            // 0x0108(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         WorldDampingLocationCurve;                               // 0x0110(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         WorldDampingRotationCurve;                               // 0x0118(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         StiffnessCurve;                                          // 0x0120(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         RadiusCurve;                                             // 0x0128(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         LimitAngleCurve;                                         // 0x0130(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  DampingCurveData;                                        // 0x0138(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  WorldDampingLocationCurveData;                           // 0x01C0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  WorldDampingRotationCurveData;                           // 0x0248(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  StiffnessCurveData;                                      // 0x02D0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  RadiusCurveData;                                         // 0x0358(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  LimitAngleCurveData;                                     // 0x03E0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bLimitLocalSpace;                                        // 0x0468(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdatePhysicsSettingsInGame;                            // 0x0469(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S266[0x2];                                   // 0x046A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DummyBoneLength;                                         // 0x046C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneForwardAxis                                           BoneForwardAxis;                                         // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlanarConstraint                                          PlanarConstraint;                                        // 0x0471(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DK5H[0x6];                                   // 0x0472(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSphericalLimit>                             SphericalLimits;                                         // 0x0478(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCapsuleLimit>                               CapsuleLimits;                                           // 0x0488(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPlanarLimit>                                PlanarLimits;                                            // 0x0498(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      TeleportDistanceThreshold;                               // 0x04A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TeleportRotationThreshold;                               // 0x04AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Gravity;                                                 // 0x04B0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCorrectGravityDown;                                     // 0x04BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XR5I[0x3];                                   // 0x04BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CorrectGravityDownResetCount;                            // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ExternalAccelerate;                                      // 0x04C4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bComponentSpaceSimulation;                               // 0x04D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AEO9[0x3];                                   // 0x04D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ResetCountScale;                                         // 0x04D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  DiffTransforms;                                          // 0x04D8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     TempLocations;                                           // 0x04E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FQuat>                                       TempRotations;                                           // 0x04F8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  NewWorldTransforms;                                      // 0x0508(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    ChainMaxNum;                                             // 0x0518(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableWind;                                             // 0x051C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F9QQ[0x3];                                   // 0x051D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WindScale;                                               // 0x0520(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4PZ0[0x4];                                   // 0x0524(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKawaiiPhysicsModifyBone>                    ModifyBones;                                             // 0x0528(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      StiffnessScale;                                          // 0x0538(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DampingScale;                                            // 0x053C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalBoneLength;                                         // 0x0540(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QG87[0xC];                                   // 0x0544(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          PreSkelCompTransform;                                    // 0x0550(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bInitPhysicsSettings;                                    // 0x0580(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_98O7[0x8F];                                  // 0x0581(0x008F) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
