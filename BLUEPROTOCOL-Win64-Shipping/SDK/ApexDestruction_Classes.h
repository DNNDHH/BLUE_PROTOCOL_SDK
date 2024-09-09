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
	 * Class ApexDestruction.DestructibleActor
	 * Size -> 0x0018 (FullSize[0x0240] - InheritedSize[0x0228])
	 */
	class ADestructibleActor : public AActor
	{
	public:
		class UDestructibleComponent*                              DestructibleComponent;                                   // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnActorFracture;                                         // 0x0230(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ApexDestruction.DestructibleComponent
	 * Size -> 0x00E0 (FullSize[0x07A0] - InheritedSize[0x06C0])
	 */
	class UDestructibleComponent : public USkinnedMeshComponent
	{
	public:
		bool                                                       bFractureEffectOverride : 1;                             // 0x06C0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_51AR[0x7];                                   // 0x06C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFractureEffect>                             FractureEffects;                                         // 0x06C8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bEnableHardSleeping;                                     // 0x06D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7UUK[0x3];                                   // 0x06D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LargeChunkThreshold;                                     // 0x06DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YCJM[0x10];                                  // 0x06E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnComponentFracture;                                     // 0x06F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GEM0[0xA0];                                  // 0x0700(0x00A0) MISSED OFFSET (PADDING)

	public:
		void SetDestructibleMesh(class UDestructibleMesh* NewMesh);
		class UDestructibleMesh* GetDestructibleMesh();
		void ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
		void ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength);
		static UClass* StaticClass();
	};

	/**
	 * Class ApexDestruction.DestructibleFractureSettings
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class UDestructibleFractureSettings : public UObject
	{
	public:
		int32_t                                                    CellSiteCount;                                           // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFractureMaterial                                   FractureMaterialDesc;                                    // 0x002C(0x0024) Edit, Transient, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    RandomSeed;                                              // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HK6A[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     VoronoiSites;                                            // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    OriginalSubmeshCount;                                    // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HIJH[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDestructibleChunkParameters>                ChunkParameters;                                         // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GFT2[0x28];                                  // 0x0090(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ApexDestruction.DestructibleMesh
	 * Size -> 0x00A0 (FullSize[0x0440] - InheritedSize[0x03A0])
	 */
	class UDestructibleMesh : public USkeletalMesh
	{
	public:
		struct FDestructibleParameters                             DefaultDestructibleParameters;                           // 0x03A0(0x0088) Edit, NativeAccessSpecifierPublic
		TArray<struct FFractureEffect>                             FractureEffects;                                         // 0x0428(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U3OE[0x8];                                   // 0x0438(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
