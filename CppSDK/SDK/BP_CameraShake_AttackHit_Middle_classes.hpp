#pragma once

 

// Package: BP_CameraShake_AttackHit_Middle

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CameraShake_AttackHit_Middle.BP_CameraShake_AttackHit_Middle_C
// 0x0000 (0x01B0 - 0x01B0)
class UBP_CameraShake_AttackHit_Middle_C final : public UMatineeCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CameraShake_AttackHit_Middle_C">();
	}
	static class UBP_CameraShake_AttackHit_Middle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CameraShake_AttackHit_Middle_C>();
	}
};
static_assert(alignof(UBP_CameraShake_AttackHit_Middle_C) == 0x000010, "Wrong alignment on UBP_CameraShake_AttackHit_Middle_C");
static_assert(sizeof(UBP_CameraShake_AttackHit_Middle_C) == 0x0001B0, "Wrong size on UBP_CameraShake_AttackHit_Middle_C");

}

