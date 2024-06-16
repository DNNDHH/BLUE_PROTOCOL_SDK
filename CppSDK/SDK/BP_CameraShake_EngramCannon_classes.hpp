#pragma once

 

// Package: BP_CameraShake_EngramCannon

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CameraShake_EngramCannon.BP_CameraShake_EngramCannon_C
// 0x0000 (0x01B0 - 0x01B0)
class UBP_CameraShake_EngramCannon_C final : public UMatineeCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CameraShake_EngramCannon_C">();
	}
	static class UBP_CameraShake_EngramCannon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CameraShake_EngramCannon_C>();
	}
};
static_assert(alignof(UBP_CameraShake_EngramCannon_C) == 0x000010, "Wrong alignment on UBP_CameraShake_EngramCannon_C");
static_assert(sizeof(UBP_CameraShake_EngramCannon_C) == 0x0001B0, "Wrong size on UBP_CameraShake_EngramCannon_C");

}

