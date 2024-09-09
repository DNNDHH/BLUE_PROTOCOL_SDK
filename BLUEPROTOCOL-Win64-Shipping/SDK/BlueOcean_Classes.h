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
	 * Class BlueOcean.BuoyancyForceComponent
	 * Size -> 0x00A8 (FullSize[0x02B0] - InheritedSize[0x0208])
	 */
	class UBuoyancyForceComponent : public USceneComponent
	{
	public:
		class AOcean*                                              Ocean;                                                   // 0x0208(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MeshDensity;                                             // 0x0210(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FluidDensity;                                            // 0x0214(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FluidLinearDamping;                                      // 0x0218(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FluidAngularDamping;                                     // 0x021C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             VelocityDamper;                                          // 0x0220(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClampMaxVelocity;                                        // 0x022C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AM55[0x3];                                   // 0x022D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxUnderwaterVelocity;                                   // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TestPointRadius;                                         // 0x0234(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     TestPoints;                                              // 0x0238(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       ApplyForceToBones;                                       // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SnapToSurfaceIfNoPhysics;                                // 0x0249(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TwoGerstnerIterations;                                   // 0x024A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_30TY[0x5];                                   // 0x024B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              PointDensityOverride;                                    // 0x0250(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		TArray<struct FStructBoneOverride>                         BoneOverride;                                            // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       DrawDebugPoints;                                         // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableStayUprightConstraint;                             // 0x0271(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YIQP[0x2];                                   // 0x0272(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StayUprightStiffness;                                    // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StayUprightDamping;                                      // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            StayUprightDesiredRotation;                              // 0x027C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       EnableWaveForces;                                        // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3WIO[0x3];                                   // 0x0289(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WaveForceMultiplier;                                     // 0x028C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETickingGroup                                              TickGroup;                                               // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AQTA[0x1F];                                  // 0x0291(0x001F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BlueOcean.Ocean
	 * Size -> 0x0098 (FullSize[0x0308] - InheritedSize[0x0270])
	 */
	class AOcean : public APhysicsVolume
	{
	public:
		class UPrimitiveComponent*                                 OceanPlane;                                              // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialParameterCollection*                        OceanParameterCollection;                                // 0x0278(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  OceanMaterial;                                           // 0x0280(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           GlobalWaveDirection;                                     // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GlobalWaveSpeed;                                         // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GlobalWaveAmplitude;                                     // 0x0294(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWaveParameter                                      WaveCluster;                                             // 0x0298(0x0014) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D58F[0x4];                                   // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADirectionalLight*                                   SunLight;                                                // 0x02B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ALandscape*                                          Landscape;                                               // 0x02B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          HeightmapTexture;                                        // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ModulationStartHeight;                                   // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ModulationMaxHeight;                                     // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ModulationPower;                                         // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H9EN[0x34];                                  // 0x02D4(0x0034) MISSED OFFSET (PADDING)

	public:
		struct FVector GetWaveHeightValue(const struct FVector& Location, class UWorld* World, bool HeightOnly, bool TwoIterations);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueOcean.OceanGrid
	 * Size -> 0x0000 (FullSize[0x0308] - InheritedSize[0x0308])
	 */
	class AOceanGrid : public AOcean
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BlueOcean.OceanMesh
	 * Size -> 0x0000 (FullSize[0x0308] - InheritedSize[0x0308])
	 */
	class AOceanMesh : public AOcean
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BlueOcean.ProjectedGrid
	 * Size -> 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
	 */
	class AProjectedGrid : public AActor
	{
	public:
		class UProjectedGridComponent*                             ProjectedGrid;                                           // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BlueOcean.ProjectedGridComponent
	 * Size -> 0x0078 (FullSize[0x04E0] - InheritedSize[0x0468])
	 */
	class UProjectedGridComponent : public UPrimitiveComponent
	{
	public:
		struct FProjectedGridParameters                            Parameters;                                              // 0x0468(0x0028) Edit, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UN0J[0x50];                                  // 0x0490(0x0050) MISSED OFFSET (PADDING)

	public:
		void SetProjectedGrid(const struct FProjectedGridParameters& Parameters);
		struct FProjectedGridParameters GetParameters();
		static UClass* StaticClass();
	};

	/**
	 * Class BlueOcean.ProjectedGridFrustumComponent
	 * Size -> 0x0008 (FullSize[0x0470] - InheritedSize[0x0468])
	 */
	class UProjectedGridFrustumComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_Z8BM[0x8];                                   // 0x0468(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
