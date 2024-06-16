#pragma once

 

// Package: LevelExtension

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct LevelExtension.StoreCollisionProfile
// 0x000C (0x000C - 0x0000)
struct alignas(0x04) FStoreCollisionProfile final
{
public:
	uint8                                         Pad_1CBA[0xC];                                     // 0x0000(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FStoreCollisionProfile) == 0x000004, "Wrong alignment on FStoreCollisionProfile");
static_assert(sizeof(FStoreCollisionProfile) == 0x00000C, "Wrong size on FStoreCollisionProfile");

// ScriptStruct LevelExtension.LandscapeWallBox
// 0x0040 (0x0040 - 0x0000)
struct FLandscapeWallBox final
{
public:
	struct FVector                                BoxExtent;                                         // 0x0000(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CBB[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Transform;                                         // 0x0010(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLandscapeWallBox) == 0x000010, "Wrong alignment on FLandscapeWallBox");
static_assert(sizeof(FLandscapeWallBox) == 0x000040, "Wrong size on FLandscapeWallBox");
static_assert(offsetof(FLandscapeWallBox, BoxExtent) == 0x000000, "Member 'FLandscapeWallBox::BoxExtent' has a wrong offset!");
static_assert(offsetof(FLandscapeWallBox, Transform) == 0x000010, "Member 'FLandscapeWallBox::Transform' has a wrong offset!");

}

