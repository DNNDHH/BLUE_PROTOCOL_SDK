#pragma once

 

// Package: BP_CannonBall_Explode_CameraShake

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CannonBall_Explode_CameraShake.BP_CannonBall_Explode_CameraShake_C
// 0x0000 (0x01B0 - 0x01B0)
class UBP_CannonBall_Explode_CameraShake_C final : public UMatineeCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CannonBall_Explode_CameraShake_C">();
	}
	static class UBP_CannonBall_Explode_CameraShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CannonBall_Explode_CameraShake_C>();
	}
};
static_assert(alignof(UBP_CannonBall_Explode_CameraShake_C) == 0x000010, "Wrong alignment on UBP_CannonBall_Explode_CameraShake_C");
static_assert(sizeof(UBP_CannonBall_Explode_CameraShake_C) == 0x0001B0, "Wrong size on UBP_CannonBall_Explode_CameraShake_C");

}
