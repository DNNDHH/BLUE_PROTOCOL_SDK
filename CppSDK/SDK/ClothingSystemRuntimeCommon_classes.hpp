#pragma once

 

// Package: ClothingSystemRuntimeCommon

#include "Basic.hpp"

#include "ClothingSystemRuntimeInterface_structs.hpp"
#include "ClothingSystemRuntimeInterface_classes.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "ClothingSystemRuntimeCommon_structs.hpp"


namespace SDK
{

// Class ClothingSystemRuntimeCommon.ClothConfigCommon
// 0x0000 (0x0028 - 0x0028)
class UClothConfigCommon : public UClothConfigBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothConfigCommon">();
	}
	static class UClothConfigCommon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothConfigCommon>();
	}
};
static_assert(alignof(UClothConfigCommon) == 0x000008, "Wrong alignment on UClothConfigCommon");
static_assert(sizeof(UClothConfigCommon) == 0x000028, "Wrong size on UClothConfigCommon");

// Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon
// 0x0000 (0x0028 - 0x0028)
class UClothSharedConfigCommon final : public UClothConfigCommon
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothSharedConfigCommon">();
	}
	static class UClothSharedConfigCommon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothSharedConfigCommon>();
	}
};
static_assert(alignof(UClothSharedConfigCommon) == 0x000008, "Wrong alignment on UClothSharedConfigCommon");
static_assert(sizeof(UClothSharedConfigCommon) == 0x000028, "Wrong size on UClothSharedConfigCommon");

// Class ClothingSystemRuntimeCommon.ClothConfigAssetBase
// 0x0008 (0x0038 - 0x0030)
class UClothConfigAssetBase : public UDataAsset
{
public:
	class UClothConfigCommon*                     ClothConfig;                                       // 0x0030(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothConfigAssetBase">();
	}
	static class UClothConfigAssetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothConfigAssetBase>();
	}
};
static_assert(alignof(UClothConfigAssetBase) == 0x000008, "Wrong alignment on UClothConfigAssetBase");
static_assert(sizeof(UClothConfigAssetBase) == 0x000038, "Wrong size on UClothConfigAssetBase");
static_assert(offsetof(UClothConfigAssetBase, ClothConfig) == 0x000030, "Member 'UClothConfigAssetBase::ClothConfig' has a wrong offset!");

// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
// 0x0000 (0x0028 - 0x0028)
class UClothingAssetCustomData final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingAssetCustomData">();
	}
	static class UClothingAssetCustomData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingAssetCustomData>();
	}
};
static_assert(alignof(UClothingAssetCustomData) == 0x000008, "Wrong alignment on UClothingAssetCustomData");
static_assert(sizeof(UClothingAssetCustomData) == 0x000028, "Wrong size on UClothingAssetCustomData");

// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
// 0x00B0 (0x00F8 - 0x0048)
class UClothingAssetCommon final : public UClothingAssetBase
{
public:
	class UPhysicsAsset*                          PhysicsAsset;                                      // 0x0048(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClothConfigAssetBase*                  OverrideClothConfigAsset;                          // 0x0050(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class UClothConfigBase*>    ClothConfigs;                                      // 0x0058(0x0050)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FClothLODDataCommon>            LODData;                                           // 0x00A8(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 LodMap;                                            // 0x00B8(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                           UsedBoneNames;                                     // 0x00C8(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 UsedBoneIndices;                                   // 0x00D8(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         ReferenceBoneIndex;                                // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4234[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClothingAssetCustomData*               CustomData;                                        // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingAssetCommon">();
	}
	static class UClothingAssetCommon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingAssetCommon>();
	}
};
static_assert(alignof(UClothingAssetCommon) == 0x000008, "Wrong alignment on UClothingAssetCommon");
static_assert(sizeof(UClothingAssetCommon) == 0x0000F8, "Wrong size on UClothingAssetCommon");
static_assert(offsetof(UClothingAssetCommon, PhysicsAsset) == 0x000048, "Member 'UClothingAssetCommon::PhysicsAsset' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, OverrideClothConfigAsset) == 0x000050, "Member 'UClothingAssetCommon::OverrideClothConfigAsset' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, ClothConfigs) == 0x000058, "Member 'UClothingAssetCommon::ClothConfigs' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, LODData) == 0x0000A8, "Member 'UClothingAssetCommon::LODData' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, LodMap) == 0x0000B8, "Member 'UClothingAssetCommon::LodMap' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, UsedBoneNames) == 0x0000C8, "Member 'UClothingAssetCommon::UsedBoneNames' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, UsedBoneIndices) == 0x0000D8, "Member 'UClothingAssetCommon::UsedBoneIndices' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, ReferenceBoneIndex) == 0x0000E8, "Member 'UClothingAssetCommon::ReferenceBoneIndex' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, CustomData) == 0x0000F0, "Member 'UClothingAssetCommon::CustomData' has a wrong offset!");

// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
// 0x0170 (0x0198 - 0x0028)
class UClothLODDataCommon_Legacy final : public UObject
{
public:
	class UClothPhysicalMeshDataBase_Legacy*      PhysicalMeshData;                                  // 0x0028(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClothPhysicalMeshData                 ClothPhysicalMeshData;                             // 0x0030(0x0108)(NativeAccessSpecifierPublic)
	struct FClothCollisionData                    CollisionData;                                     // 0x0138(0x0040)(NativeAccessSpecifierPublic)
	uint8                                         Pad_4235[0x20];                                    // 0x0178(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothLODDataCommon_Legacy">();
	}
	static class UClothLODDataCommon_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothLODDataCommon_Legacy>();
	}
};
static_assert(alignof(UClothLODDataCommon_Legacy) == 0x000008, "Wrong alignment on UClothLODDataCommon_Legacy");
static_assert(sizeof(UClothLODDataCommon_Legacy) == 0x000198, "Wrong size on UClothLODDataCommon_Legacy");
static_assert(offsetof(UClothLODDataCommon_Legacy, PhysicalMeshData) == 0x000028, "Member 'UClothLODDataCommon_Legacy::PhysicalMeshData' has a wrong offset!");
static_assert(offsetof(UClothLODDataCommon_Legacy, ClothPhysicalMeshData) == 0x000030, "Member 'UClothLODDataCommon_Legacy::ClothPhysicalMeshData' has a wrong offset!");
static_assert(offsetof(UClothLODDataCommon_Legacy, CollisionData) == 0x000138, "Member 'UClothLODDataCommon_Legacy::CollisionData' has a wrong offset!");

}
