#pragma once

 

// Package: ST_ItemDetail_CaptureStudio_MapLocation

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct ST_ItemDetail_CaptureStudio_MapLocation.ST_ItemDetail_CaptureStudio_MapLocation
// 0x0020 (0x0020 - 0x0000)
struct FST_ItemDetail_CaptureStudio_MapLocation final
{
public:
	class FString                                 MapName_2_8775BE594D9A866F8801C69BF55ED71F;        // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                SpawnActorLocation_7_C6EFF9A0463DFB73CF141C9E82D1F706; // 0x0010(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FST_ItemDetail_CaptureStudio_MapLocation) == 0x000008, "Wrong alignment on FST_ItemDetail_CaptureStudio_MapLocation");
static_assert(sizeof(FST_ItemDetail_CaptureStudio_MapLocation) == 0x000020, "Wrong size on FST_ItemDetail_CaptureStudio_MapLocation");
static_assert(offsetof(FST_ItemDetail_CaptureStudio_MapLocation, MapName_2_8775BE594D9A866F8801C69BF55ED71F) == 0x000000, "Member 'FST_ItemDetail_CaptureStudio_MapLocation::MapName_2_8775BE594D9A866F8801C69BF55ED71F' has a wrong offset!");
static_assert(offsetof(FST_ItemDetail_CaptureStudio_MapLocation, SpawnActorLocation_7_C6EFF9A0463DFB73CF141C9E82D1F706) == 0x000010, "Member 'FST_ItemDetail_CaptureStudio_MapLocation::SpawnActorLocation_7_C6EFF9A0463DFB73CF141C9E82D1F706' has a wrong offset!");

}

