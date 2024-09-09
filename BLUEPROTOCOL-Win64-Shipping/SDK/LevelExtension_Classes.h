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
	 * Class LevelExtension.DungeonPartsActor
	 * Size -> 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
	 */
	class ADungeonPartsActor : public AActor
	{
	public:
		class UDungeonPartsComponent*                              DungeonPartsComponent;                                   // 0x0228(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelExtension.DungeonPartsComponent
	 * Size -> 0x0008 (FullSize[0x0210] - InheritedSize[0x0208])
	 */
	class UDungeonPartsComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_YIQT[0x8];                                   // 0x0208(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelExtension.DungeonPartsGroupComponent
	 * Size -> 0x0008 (FullSize[0x0210] - InheritedSize[0x0208])
	 */
	class UDungeonPartsGroupComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_RLGJ[0x8];                                   // 0x0208(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelExtension.HierarchicalInstancedStaticMeshActor
	 * Size -> 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
	 */
	class AHierarchicalInstancedStaticMeshActor : public AActor
	{
	public:
		class UHierarchicalInstancedStaticMeshComponent*           HierarchicalInstancedStaticMeshComponent;                // 0x0228(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelExtension.InstancedStaticMeshActor
	 * Size -> 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
	 */
	class AInstancedStaticMeshActor : public AActor
	{
	public:
		class UInstancedStaticMeshComponent*                       InstancedStaticMeshComponent;                            // 0x0228(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelExtension.LandscapeWallBase
	 * Size -> 0x0048 (FullSize[0x0270] - InheritedSize[0x0228])
	 */
	class ALandscapeWallBase : public AActor
	{
	public:
		float                                                      HalfHeight;                                              // 0x0228(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HalfThickness;                                           // 0x022C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<TWeakObjectPtr<class UBoxComponent>>                BoxComponents;                                           // 0x0230(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
		class UClass*                                              DecalActorClass;                                         // 0x0240(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectNavigation;                                       // 0x0248(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I6OI[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<TWeakObjectPtr<class UCapsuleComponent>>            CapsuleComponents;                                       // 0x0250(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       bUseCornerCapsule;                                       // 0x0260(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HPF5[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULandscapeWallComponent*                             WallComponent;                                           // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Rebuild();
		class ULandscapeWallComponent* GetWallComponent();
		float GetHalfThickness();
		float GetHalfHeight();
		class UClass* GetDecalClass();
		static UClass* StaticClass();
	};

	/**
	 * Class LevelExtension.LandscapeWallComponent
	 * Size -> 0x0018 (FullSize[0x0480] - InheritedSize[0x0468])
	 */
	class ULandscapeWallComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_QFOZ[0x8];                                   // 0x0468(0x0008) Fix Super Size
		TArray<struct FLandscapeWallBox>                           WallBoxes;                                               // 0x0470(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelExtension.LandscapeWallSpline
	 * Size -> 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
	 */
	class ALandscapeWallSpline : public ALandscapeWallBase
	{
	public:
		bool                                                       bClosedLoop;                                             // 0x0270(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KHM3[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULandscapeWallSplineComponent*                       SplineComponent;                                         // 0x0278(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class ULandscapeWallSplineComponent* GetSplineComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class LevelExtension.LandscapeWallSplineComponent
	 * Size -> 0x0010 (FullSize[0x0570] - InheritedSize[0x0560])
	 */
	class ULandscapeWallSplineComponent : public USplineComponent
	{
	public:
		unsigned char                                              UnknownData_OH4B[0x10];                                  // 0x0560(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
