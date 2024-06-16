#pragma once

 

// Package: BP_FootprintFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FootprintFunctionLibrary.BP_FootprintFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_FootprintFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void SocketRotationToParticleRotation(const struct FRotator& SocketRotation, class UObject* __WorldContext, struct FRotator* ParticleRotation);
	static void ParticleRotationToDecalRotation(const struct FRotator& ParticleRotation, bool bUseActorRotation, class AActor* Actor, class UObject* __WorldContext, struct FRotator* DecalRotation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FootprintFunctionLibrary_C">();
	}
	static class UBP_FootprintFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FootprintFunctionLibrary_C>();
	}
};
static_assert(alignof(UBP_FootprintFunctionLibrary_C) == 0x000008, "Wrong alignment on UBP_FootprintFunctionLibrary_C");
static_assert(sizeof(UBP_FootprintFunctionLibrary_C) == 0x000028, "Wrong size on UBP_FootprintFunctionLibrary_C");

}

