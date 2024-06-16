#pragma once

 

// Package: BP_DungeonFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DungeonFunctionLibrary.BP_DungeonFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_DungeonFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetPlayerStartLocation(class APawn* Pawn, class UObject* __WorldContext, class APlayerStart** PlayerStart, float* DistFromStart);
	static void ResetPlayerAction(class ASBPlayerCharacter* PlayerCharacter, class UObject* __WorldContext);
	static void Find_Class_Actor(class UObject* Object, class UClass* TargetClass, class UObject* __WorldContext, class AActor** ActorObject, int32* Num);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DungeonFunctionLibrary_C">();
	}
	static class UBP_DungeonFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DungeonFunctionLibrary_C>();
	}
};
static_assert(alignof(UBP_DungeonFunctionLibrary_C) == 0x000008, "Wrong alignment on UBP_DungeonFunctionLibrary_C");
static_assert(sizeof(UBP_DungeonFunctionLibrary_C) == 0x000028, "Wrong size on UBP_DungeonFunctionLibrary_C");

}

