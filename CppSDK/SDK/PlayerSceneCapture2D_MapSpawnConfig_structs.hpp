#pragma once

 

// Package: PlayerSceneCapture2D_MapSpawnConfig

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct PlayerSceneCapture2D_MapSpawnConfig.PlayerSceneCapture2D_MapSpawnConfig
// 0x0020 (0x0020 - 0x0000)
struct FPlayerSceneCapture2D_MapSpawnConfig final
{
public:
	class FString                                 MapName_2_8775BE594D9A866F8801C69BF55ED71F;        // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                SpawnActorLocation_7_C6EFF9A0463DFB73CF141C9E82D1F706; // 0x0010(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FPlayerSceneCapture2D_MapSpawnConfig) == 0x000008, "Wrong alignment on FPlayerSceneCapture2D_MapSpawnConfig");
static_assert(sizeof(FPlayerSceneCapture2D_MapSpawnConfig) == 0x000020, "Wrong size on FPlayerSceneCapture2D_MapSpawnConfig");
static_assert(offsetof(FPlayerSceneCapture2D_MapSpawnConfig, MapName_2_8775BE594D9A866F8801C69BF55ED71F) == 0x000000, "Member 'FPlayerSceneCapture2D_MapSpawnConfig::MapName_2_8775BE594D9A866F8801C69BF55ED71F' has a wrong offset!");
static_assert(offsetof(FPlayerSceneCapture2D_MapSpawnConfig, SpawnActorLocation_7_C6EFF9A0463DFB73CF141C9E82D1F706) == 0x000010, "Member 'FPlayerSceneCapture2D_MapSpawnConfig::SpawnActorLocation_7_C6EFF9A0463DFB73CF141C9E82D1F706' has a wrong offset!");

}

